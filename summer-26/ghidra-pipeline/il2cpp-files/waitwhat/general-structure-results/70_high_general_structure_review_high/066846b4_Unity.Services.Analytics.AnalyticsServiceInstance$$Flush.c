/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsServiceInstance$$Flush
ENTRY_POINT: 066846b4
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


bool Unity_Services_Analytics_AnalyticsServiceInstance__Flush(long param_1)

{
  if (param_1 != 0) {
    return *(char *)(param_1 + 0x10) == '\0';
  }
                    /* try { // try from 066846c8 to 067846cf has its CatchHandler @ 06684888 */
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


