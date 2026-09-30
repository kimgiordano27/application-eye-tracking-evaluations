/*
FUNCTION_NAME: ThirdParty.Json.LitJson.JsonData$$ToJson
ENTRY_POINT: 0401e2c0
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


void ThirdParty_Json_LitJson_JsonData__ToJson(ulong param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a9170);
    FUN_03d2d2b0(PTR_DAT_091a9178);
    *(undefined1 *)(unaff_x21 + 0xe6e) = 1;
  }
  if (param_3 < 1) {
    return;
  }
  lVar1 = *(long *)(param_2 + 0x88);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) < param_3) {
      return;
    }
    lVar1 = FUN_05a39464(lVar1,param_3 + -1,*(undefined8 *)PTR_DAT_091a9178);
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x10) < param_4) {
        *(int *)(lVar1 + 0x10) = param_4;
        FUN_0401ddd4(param_2);
      }
      FUN_0401da2c(param_2,param_3 + -1,lVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


