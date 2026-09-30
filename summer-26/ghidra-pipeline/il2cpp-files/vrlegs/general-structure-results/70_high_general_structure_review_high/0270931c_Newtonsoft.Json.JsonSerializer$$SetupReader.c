/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$SetupReader
ENTRY_POINT: 0270931c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__SetupReader(ulong param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *plVar3;
  undefined8 *unaff_x21;
  
  plVar3 = *(long **)(unaff_x20 + 0xfb8);
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf7fb8);
    FUN_01ab69ac(PTR_DAT_03cbe888);
    *(undefined1 *)(unaff_x19 + 0x7db) = 1;
  }
  lVar1 = FUN_01ab6a94(*unaff_x21,1);
  lVar2 = *plVar3;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar2);
    lVar2 = *plVar3;
  }
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined4 *)(lVar1 + 0x20) = **(undefined4 **)(lVar2 + 0xb8);
      return lVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


