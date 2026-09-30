/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$set_FlushInProgress
ENTRY_POINT: 084e2d84
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_Internal_Dispatcher__set_FlushInProgress(void)

{
  undefined1 in_w8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 uStack000000000000000c;
  
  *(undefined1 *)(unaff_x20 + 0x702) = in_w8;
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20), lVar1 != 0)) {
    uStack000000000000000c = *(undefined4 *)(lVar1 + 0x14);
    thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_0932bad8,&stack0x0000000c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


