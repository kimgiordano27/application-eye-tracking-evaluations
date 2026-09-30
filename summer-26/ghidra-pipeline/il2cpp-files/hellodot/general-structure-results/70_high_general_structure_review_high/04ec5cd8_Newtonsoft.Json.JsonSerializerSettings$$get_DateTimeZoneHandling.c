/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateTimeZoneHandling
ENTRY_POINT: 04ec5cd8
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04ec5dbc) */

uint Newtonsoft_Json_JsonSerializerSettings__get_DateTimeZoneHandling
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long unaff_x22;
  undefined8 uVar2;
  char cStack000000000000000c;
  
  if ((*(byte *)(unaff_x22 + 0x268) & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1670);
    *(undefined1 *)(unaff_x22 + 0x268) = 1;
  }
  cStack000000000000000c = '\0';
  if (param_1 != 0) {
    FUN_04e56180(param_1,&stack0x0000000c,0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar1 = AkSoundEnginePINVOKE__CSharp_AkChannelConfig_eConfigType_get(uVar2,param_2,param_3);
    if (cStack000000000000000c != '\0') {
      FUN_04e562ec(param_1,0);
    }
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


