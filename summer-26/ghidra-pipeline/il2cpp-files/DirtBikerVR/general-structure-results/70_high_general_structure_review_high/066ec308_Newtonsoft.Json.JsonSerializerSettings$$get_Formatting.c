/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Formatting
ENTRY_POINT: 066ec308
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_Formatting(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  
  lVar1 = thunk_FUN_03ac74bc(**(undefined8 **)(param_1 + 3000));
  FUN_0679343c(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar1 + 0x18) = unaff_x21;
    thunk_FUN_03afed3c();
    if (unaff_x22 != 0) {
      unaff_x24 = (long *)(unaff_x22 + 0x20);
    }
    *unaff_x24 = lVar1;
    thunk_FUN_03afed3c(unaff_x24,lVar1);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


