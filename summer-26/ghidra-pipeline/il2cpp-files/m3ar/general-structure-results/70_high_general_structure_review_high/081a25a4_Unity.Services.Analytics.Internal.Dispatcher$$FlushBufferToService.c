/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$FlushBufferToService
ENTRY_POINT: 081a25a4
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_Internal_Dispatcher__FlushBufferToService(long param_1)

{
  long in_x9;
  int in_w10;
  int in_w11;
  long unaff_x19;
  
  while( true ) {
    in_x9 = in_x9 + 4;
    in_w10 = in_w11 + in_w10;
    if (in_x9 == 0x40) break;
    in_w11 = *(int *)(param_1 + in_x9);
    *(int *)(param_1 + in_x9) = in_w10;
  }
  **(undefined4 **)(unaff_x19 + 0x18) = 0;
  return;
}


