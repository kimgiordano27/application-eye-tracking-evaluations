/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.BufferX$$FlushToDisk
ENTRY_POINT: 07598868
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


void Unity_Services_Analytics_Internal_BufferX__FlushToDisk(long param_1)

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
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  puVar1 = (ulong *)(unaff_x24 + param_1 * 8 + 0x464e0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1L << (in_x9 & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar4 = FUN_0682c484(unaff_x22 + 0xc);
  if ((lVar4 != 0) && (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
  {
LAB_07598b50:
    uVar6 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar6,0);
  }
  if (1 < *(uint *)(unaff_x19 + 3)) {
    plVar7 = unaff_x19 + 5;
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
    lVar4 = FUN_0682c484(unaff_x22 + 4);
    if ((lVar4 != 0) && (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0)
       ) goto LAB_07598b50;
    if (2 < *(uint *)(unaff_x19 + 3)) {
      plVar7 = unaff_x19 + 6;
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
      lVar4 = FUN_0682c484(unaff_x22 + 0x10);
      if ((lVar4 != 0) &&
         (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
      goto LAB_07598b50;
      if (3 < *(uint *)(unaff_x19 + 3)) {
        plVar7 = unaff_x19 + 7;
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
        if ((lVar4 != 0) &&
           (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
        goto LAB_07598b50;
        if (4 < *(uint *)(unaff_x19 + 3)) {
          plVar7 = unaff_x19 + 8;
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
          goto LAB_07598b50;
          if (5 < *(uint *)(unaff_x19 + 3)) {
            plVar7 = unaff_x19 + 9;
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
            uVar6 = DAT_08454050;
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


