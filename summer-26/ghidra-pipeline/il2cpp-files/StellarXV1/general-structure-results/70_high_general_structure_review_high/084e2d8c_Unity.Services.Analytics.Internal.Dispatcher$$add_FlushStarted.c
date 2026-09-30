/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$add_FlushStarted
ENTRY_POINT: 084e2d8c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Analytics_Internal_Dispatcher__add_FlushStarted(long param_1)

{
  undefined4 uStack000000000000000c;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    uStack000000000000000c = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14);
    thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_0932bad8,&stack0x0000000c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


