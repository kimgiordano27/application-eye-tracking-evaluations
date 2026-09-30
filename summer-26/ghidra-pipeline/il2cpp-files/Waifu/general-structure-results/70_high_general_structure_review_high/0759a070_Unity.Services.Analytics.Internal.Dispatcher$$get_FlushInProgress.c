/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$get_FlushInProgress
ENTRY_POINT: 0759a070
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_Internal_Dispatcher__get_FlushInProgress(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong in_x9;
  long in_x10;
  long in_x11;
  long *unaff_x19;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  puVar1 = (ulong *)(param_1 + in_x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | in_x11 << (in_x9 & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar4 = FUN_0682c484(unaff_x22 + 0x28);
  if ((lVar4 != 0) && (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
  {
LAB_0759a348:
    uVar6 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar6,0);
  }
  if (7 < *(uint *)(unaff_x19 + 3)) {
    plVar7 = unaff_x19 + 0xb;
    *plVar7 = lVar4;
    if (*(int *)(unaff_x25 + 0xcd0) != 0) {
      puVar1 = (ulong *)(unaff_x24 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar4 = FUN_0682c484(unaff_x22 + 8);
    if ((lVar4 != 0) && (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0)
       ) goto LAB_0759a348;
    if (8 < *(uint *)(unaff_x19 + 3)) {
      plVar7 = unaff_x19 + 0xc;
      *plVar7 = lVar4;
      if (*(int *)(unaff_x25 + 0xcd0) != 0) {
        puVar1 = (ulong *)(unaff_x24 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar4 = FUN_0682c484(unaff_x22 + 0x14);
      if ((lVar4 != 0) &&
         (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
      goto LAB_0759a348;
      if (9 < *(uint *)(unaff_x19 + 3)) {
        plVar7 = unaff_x19 + 0xd;
        *plVar7 = lVar4;
        if (*(int *)(unaff_x25 + 0xcd0) != 0) {
          puVar1 = (ulong *)(unaff_x24 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar4 = FUN_0682c484(unaff_x22 + 0x20);
        if ((lVar4 != 0) &&
           (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
        goto LAB_0759a348;
        if (10 < *(uint *)(unaff_x19 + 3)) {
          plVar7 = unaff_x19 + 0xe;
          *plVar7 = lVar4;
          if (*(int *)(unaff_x25 + 0xcd0) != 0) {
            puVar1 = (ulong *)(unaff_x24 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          lVar4 = FUN_0682c484(unaff_x22 + 0x2c);
          if ((lVar4 != 0) &&
             (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
          goto LAB_0759a348;
          if (0xb < *(uint *)(unaff_x19 + 3)) {
            plVar7 = unaff_x19 + 0xf;
            *plVar7 = lVar4;
            if (*(int *)(unaff_x25 + 0xcd0) != 0) {
              puVar1 = (ulong *)(unaff_x24 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            uVar6 = DAT_08454060;
            in_stack_00000028 = 0;
            in_stack_00000020 = 0;
            in_stack_00000038 = 0;
            in_stack_00000030 = 0;
            FUN_0683f768(&stack0x00000020);
            FUN_0666f060(0,uVar6);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


