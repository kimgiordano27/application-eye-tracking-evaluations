/*
FUNCTION_NAME: OVRPlugin$$GetAppPerfStats
ENTRY_POINT: 06abd07c
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetAppPerfStats(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  
  if (**(long **)(param_1 + 0xb8) != 0) {
    uVar4 = FUN_03398188(DAT_083c7bf0,*(undefined4 *)(**(long **)(param_1 + 0xb8) + 0x18));
    puVar5 = (undefined8 *)(unaff_x19 + 0xd0);
    *puVar5 = uVar4;
    if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                    /* try { // try from 06abd0bc to 06bbd34f has its CatchHandler @ 06abd0bc
                       catch() { ... } // from try @ 06abd0bc with catch @ 06abd0bc
                       catch() { ... } // from try @ 06abd460 with catch @ 06abd0bc
                       catch() { ... } // from try @ 06abd4f4 with catch @ 06abd0bc
                       catch() { ... } // from try @ 06abd4fc with catch @ 06abd0bc
                       catch() { ... } // from try @ 06abd5a0 with catch @ 06abd0bc */
      puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar6 = **(long **)(*(long *)(unaff_x20 + 0x858) + 0xb8);
    if (lVar6 != 0) {
      uVar4 = FUN_03398188(DAT_083c7ab8,*(undefined4 *)(lVar6 + 0x18));
      puVar5 = (undefined8 *)(unaff_x19 + 0xd8);
      *puVar5 = uVar4;
      if (*(int *)(unaff_x23 + 0xcd0) != 0) {
        puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar6 = **(long **)(*(long *)(unaff_x20 + 0x858) + 0xb8);
      if (lVar6 != 0) {
        uVar4 = FUN_03398188(DAT_083c7ab8,*(undefined4 *)(lVar6 + 0x18));
        puVar5 = (undefined8 *)(unaff_x19 + 0xe0);
        *puVar5 = uVar4;
        if (*(int *)(unaff_x23 + 0xcd0) != 0) {
          puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar6 = **(long **)(*(long *)(unaff_x20 + 0x858) + 0xb8);
        if (lVar6 != 0) {
          uVar4 = FUN_03398188(DAT_083c7ad8,*(undefined4 *)(lVar6 + 0x18));
          *(undefined8 *)(unaff_x19 + 0x140) = uVar4;
          if (*(int *)(unaff_x23 + 0xcd0) != 0) {
            puVar1 = (ulong *)(unaff_x22 + (unaff_x19 + 0x140U >> 0x12 & 0x7fff) * 8 + 0x464e0);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x140U >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          lVar6 = **(long **)(*(long *)(unaff_x20 + 0x858) + 0xb8);
          if (lVar6 != 0) {
            uVar4 = FUN_03398188(DAT_083c7ad8,*(undefined4 *)(lVar6 + 0x18));
            *(undefined8 *)(unaff_x19 + 0x148) = uVar4;
            if (*(int *)(unaff_x23 + 0xcd0) != 0) {
              puVar1 = (ulong *)(unaff_x22 + (unaff_x19 + 0x148U >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x148U >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            lVar6 = **(long **)(*(long *)(unaff_x20 + 0x858) + 0xb8);
            if (lVar6 != 0) {
              uVar4 = FUN_03398188(DAT_083c7ad8,*(undefined4 *)(lVar6 + 0x18));
              *(undefined8 *)(unaff_x19 + 0x150) = uVar4;
              if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                puVar1 = (ulong *)(unaff_x22 + (unaff_x19 + 0x150U >> 0x12 & 0x7fff) * 8 + 0x464e0);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x150U >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              lVar6 = **(long **)(*(long *)(unaff_x20 + 0x858) + 0xb8);
              if (lVar6 != 0) {
                uVar4 = FUN_03398188(DAT_083c7898,*(undefined4 *)(lVar6 + 0x18));
                *(undefined8 *)(unaff_x19 + 0x158) = uVar4;
                if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                  puVar1 = (ulong *)(unaff_x22 + (unaff_x19 + 0x158U >> 0x12 & 0x7fff) * 8 + 0x464e0
                                    );
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                      *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x158U >> 0xc & 0x3f);
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                if (*(int *)(DAT_083cbf48 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                FUN_06aba4a4();
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


