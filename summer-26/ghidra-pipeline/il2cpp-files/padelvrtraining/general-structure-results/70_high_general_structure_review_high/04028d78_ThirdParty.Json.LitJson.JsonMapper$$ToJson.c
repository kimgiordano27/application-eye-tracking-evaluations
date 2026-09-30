/*
FUNCTION_NAME: ThirdParty.Json.LitJson.JsonMapper$$ToJson
ENTRY_POINT: 04028d78
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void ThirdParty_Json_LitJson_JsonMapper__ToJson(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  
  puVar1 = PTR_DAT_091a1260;
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x120) == '\0') {
      return;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x38) = *(undefined4 *)(unaff_x19 + 0x20);
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x98);
      if (lVar2 != 0) {
        FUN_040a9abc(lVar2,*(undefined4 *)(unaff_x19 + 0x20),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


