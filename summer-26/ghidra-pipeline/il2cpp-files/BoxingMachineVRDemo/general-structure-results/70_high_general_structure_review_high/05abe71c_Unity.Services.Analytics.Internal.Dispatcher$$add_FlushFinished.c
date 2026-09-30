/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$add_FlushFinished
ENTRY_POINT: 05abe71c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_Internal_Dispatcher__add_FlushFinished(void)

{
  long unaff_x21;
  long unaff_x22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  if (*(int *)(unaff_x22 + 8) != 0) {
    FUN_03ce5c0c();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_05abcf5c();
    FUN_05abe02c();
    FUN_03ce5ecc();
  }
  return;
}


