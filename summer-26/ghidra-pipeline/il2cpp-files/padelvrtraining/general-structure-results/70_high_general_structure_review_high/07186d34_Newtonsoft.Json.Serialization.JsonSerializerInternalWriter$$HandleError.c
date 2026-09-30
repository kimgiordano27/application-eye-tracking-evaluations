/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 07186d34
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xd70));
  *(undefined1 *)(unaff_x23 + 0x1a) = 1;
  FUN_0717821c();
  if (unaff_x20 != 0) {
    uVar1 = FUN_07070064();
    *(undefined8 *)(unaff_x19 + 0x90) = uVar1;
    thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x90),uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


