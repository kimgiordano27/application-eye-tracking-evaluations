/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$Flush
ENTRY_POINT: 0759a530
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_Internal_Dispatcher__Flush(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong in_x9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined4 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar1 = (ulong *)(unaff_x22 + param_1 * 8 + 0x464e0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1L << (in_x9 & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uStack0000000000000008 = *(undefined4 *)(unaff_x20 + 0xc);
  lVar4 = FUN_03398650(*(undefined8 *)(unaff_x23 + 0xa98),&stack0x00000008);
  if ((lVar4 != 0) && (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
  {
    uVar6 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar6,0);
  }
  if (3 < *(uint *)(unaff_x19 + 3)) {
    plVar7 = unaff_x19 + 7;
    *plVar7 = lVar4;
    if (*(int *)(unaff_x24 + 0xcd0) != 0) {
      puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar6 = DAT_08454068;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    FUN_0683f768(&stack0x00000030);
    in_stack_00000018 = in_stack_00000038;
    in_stack_00000010 = in_stack_00000030;
    in_stack_00000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    FUN_0666f060(0,uVar6,&stack0x00000010);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


