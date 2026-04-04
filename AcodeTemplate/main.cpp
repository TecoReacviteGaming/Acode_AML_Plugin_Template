#include <mod/amlmod.h>
#include <mod/logger.h>
#include <mod/config.h>

MYMODCFG(net.acodemodtemplate, Acode Mod Template, 1.0, tecoreacvite)

void (*AsciiToGxt)(char const*, unsigned short*);
void (*SetHelpMessage)(char const*, unsigned short*, bool, bool, bool, unsigned int);

inline void ShowTextBox(char const* text, unsigned int duration_ms)
{
    unsigned short gxtBuf[255];
    AsciiToGxt(text, gxtBuf);
    SetHelpMessage(0, gxtBuf, 0, 0, 1, duration_ms);
}

DECL_HOOKv(CWorldProcess)
{
    // A simple "Hello, World!" text box!
    ShowTextBox("Hello, World!", 750);
    
    CWorldProcess();
}

ON_MOD_LOAD()
{
    logger->SetTag("Acode Mod Template");
    
    void* hGame = aml->GetLibHandle("libGTASA.so");
    if (hGame)
    {
        SET_TO(AsciiToGxt, aml->GetSym(hGame, "_Z14AsciiToGxtCharPKcPt"));
        SET_TO(SetHelpMessage, aml->GetSym(hGame, "_ZN4CHud14SetHelpMessageEPKcPtbbbj"));
        
        HOOK(CWorldProcess, aml->GetSym(hGame, "_ZN6CWorld7ProcessEv"));
    }
}