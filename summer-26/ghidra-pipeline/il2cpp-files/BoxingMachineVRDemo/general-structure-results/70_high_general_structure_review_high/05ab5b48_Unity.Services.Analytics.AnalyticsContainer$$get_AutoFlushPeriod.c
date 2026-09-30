/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsContainer$$get_AutoFlushPeriod
ENTRY_POINT: 05ab5b48
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Analytics_AnalyticsContainer__get_AutoFlushPeriod(void)

{
  ulong uVar1;
  long *unaff_x19;
  undefined8 *unaff_x22;
  
  uVar1 = FUN_03db4014();
  if ((uVar1 & 1) != 0) {
    do {
      FUN_06087ee4(&stack0x00000018,0);
      FUN_0442570c();
      uVar1 = FUN_03db4014();
    } while ((uVar1 & 1) != 0);
  }
  FUN_03db40fc();
  FUN_0442570c(unaff_x19 + 1,*unaff_x22);
  if (*unaff_x19 != 0) {
    FUN_0603a4d4(*unaff_x19,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


