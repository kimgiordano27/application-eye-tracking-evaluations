/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$remove_FlushFinished
ENTRY_POINT: 0759a3cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_Internal_Dispatcher__remove_FlushFinished(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 *unaff_x20;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  
  plVar4 = (long *)FUN_03398188();
  uStack000000000000005c = *unaff_x20;
  lVar5 = FUN_03398650(DAT_083cda98,&stack0x0000005c);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if ((lVar5 != 0) && (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_0759a628:
    uVar7 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar7,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar8 = plVar4 + 4;
    *plVar8 = lVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    in_stack_00000058 = unaff_x20[1];
    lVar5 = FUN_03398650(DAT_083cda98,&stack0x00000058);
    if ((lVar5 != 0) && (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_0759a628;
    if (1 < *(uint *)(plVar4 + 3)) {
      plVar8 = plVar4 + 5;
      *plVar8 = lVar5;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack000000000000000c = unaff_x20[2];
      lVar5 = FUN_03398650(DAT_083cda98,(long)&stack0x00000008 + 4);
      if ((lVar5 != 0) && (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
      goto LAB_0759a628;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar8 = plVar4 + 6;
        *plVar8 = lVar5;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack0000000000000008 = unaff_x20[3];
        lVar5 = FUN_03398650(DAT_083cda98,&stack0x00000008);
        if ((lVar5 != 0) &&
           (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_0759a628;
        if (3 < *(uint *)(plVar4 + 3)) {
          plVar8 = plVar4 + 7;
          *plVar8 = lVar5;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uVar7 = DAT_08454068;
          in_stack_00000038 = 0;
          in_stack_00000030 = 0;
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          FUN_0683f768(&stack0x00000030,plVar4,0);
          in_stack_00000018 = in_stack_00000038;
          in_stack_00000010 = in_stack_00000030;
          in_stack_00000028 = in_stack_00000048;
          in_stack_00000020 = in_stack_00000040;
          FUN_0666f060(0,uVar7,&stack0x00000010);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


