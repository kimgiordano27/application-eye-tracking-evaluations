/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsContainer$$get_AutoFlushPeriod
ENTRY_POINT: 07590ab0
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Analytics_AnalyticsContainer__get_AutoFlushPeriod(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x22;
  long unaff_x24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  lVar4 = FUN_0339898c();
  if (lVar4 == 0) {
    uVar5 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar5,0);
  }
  if (8 < *(uint *)(unaff_x19 + 0x18)) {
    puVar6 = (undefined8 *)(unaff_x19 + 0x60);
    *puVar6 = unaff_x20;
    if (*(int *)(unaff_x24 + 0xcd0) != 0) {
      puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = DAT_08454058;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    FUN_0683f768(&stack0x00000040);
    in_stack_00000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    FUN_0666f060(0,uVar5,&stack0x00000020);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


