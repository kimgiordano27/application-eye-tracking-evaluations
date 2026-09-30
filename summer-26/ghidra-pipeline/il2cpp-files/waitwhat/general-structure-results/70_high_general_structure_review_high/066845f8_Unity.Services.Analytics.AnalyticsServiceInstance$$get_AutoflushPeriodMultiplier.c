/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsServiceInstance$$get_AutoflushPeriodMultiplier
ENTRY_POINT: 066845f8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Analytics_AnalyticsServiceInstance__get_AutoflushPeriodMultiplier
               (undefined8 param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = FUN_066805b0();
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x32) = param_2 & 1;
  }
  return;
}


