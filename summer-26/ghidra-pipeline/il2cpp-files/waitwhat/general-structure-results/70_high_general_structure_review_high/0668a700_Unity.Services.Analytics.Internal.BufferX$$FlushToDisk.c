/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.BufferX$$FlushToDisk
ENTRY_POINT: 0668a700
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_Internal_BufferX__FlushToDisk(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  if (param_1 != 0) {
    FUN_06686c00();
    lVar1 = *(long *)(unaff_x20 + 0x30);
    auVar2 = FUN_0456e320();
    if (lVar1 != 0) {
      FUN_06a17938(lVar1,auVar2._0_8_,auVar2._8_8_,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


