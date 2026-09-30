/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsServiceInstance$$get_AutoflushPeriodMultiplier
ENTRY_POINT: 08164734
PROGRAM: cac-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Analytics_AnalyticsServiceInstance__get_AutoflushPeriodMultiplier(void)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined8 in_stack_00000100;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000110;
  undefined8 uStack0000000000000114;
  undefined8 in_stack_000001a8;
  
  FUN_0815ed78();
  lVar1 = *(long *)(unaff_x20 + 0x78);
  if (lVar1 != 0) {
    memcpy(&stack0x00000120,&stack0x00000080,0x80);
    FUN_056b5b70(lVar1,in_stack_000001a8._4_4_,&stack0x00000120,*(undefined8 *)PTR_DAT_0917b318);
    unaff_x19[1] = CONCAT44(uStack000000000000010c,uStack0000000000000108);
    *unaff_x19 = in_stack_00000100;
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000114;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000110,uStack000000000000010c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


