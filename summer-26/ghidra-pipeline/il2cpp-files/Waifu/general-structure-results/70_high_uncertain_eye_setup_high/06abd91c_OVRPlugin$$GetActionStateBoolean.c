/*
FUNCTION_NAME: OVRPlugin$$GetActionStateBoolean
ENTRY_POINT: 06abd91c
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStateBoolean(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong in_x9;
  long in_x10;
  long in_x11;
  undefined8 unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  puVar1 = (ulong *)(param_1 + in_x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | in_x11 << (in_x9 & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar6 = (undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x858) + 0xb8) + 8);
  *puVar6 = unaff_x19;
  puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar4 = FUN_03398188(DAT_083c7288,5);
  uVar5 = FUN_03398188(*(undefined8 *)(unaff_x25 + 0x6b8),4);
  FUN_06736060(uVar5,DAT_0842c330,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(int *)(lVar4 + 0x18) != 0) {
    puVar6 = (undefined8 *)(lVar4 + 0x20);
    *puVar6 = uVar5;
    if (*(int *)(unaff_x23 + 0xcd0) != 0) {
      puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = FUN_03398188(*(undefined8 *)(unaff_x25 + 0x6b8),3);
    FUN_06736060(uVar5,DAT_0842c400,0);
    if (1 < *(uint *)(lVar4 + 0x18)) {
      puVar6 = (undefined8 *)(lVar4 + 0x28);
      *puVar6 = uVar5;
      if (*(int *)(unaff_x23 + 0xcd0) != 0) {
        puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar5 = FUN_03398188(*(undefined8 *)(unaff_x25 + 0x6b8),3);
      FUN_06736060(uVar5,DAT_0842c408,0);
      if (2 < *(uint *)(lVar4 + 0x18)) {
        puVar6 = (undefined8 *)(lVar4 + 0x30);
        *puVar6 = uVar5;
        if (*(int *)(unaff_x23 + 0xcd0) != 0) {
          puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar5 = FUN_03398188(*(undefined8 *)(unaff_x25 + 0x6b8),3);
        FUN_06736060(uVar5,DAT_0842c388,0);
        if (3 < *(uint *)(lVar4 + 0x18)) {
          puVar6 = (undefined8 *)(lVar4 + 0x38);
          *puVar6 = uVar5;
          if (*(int *)(unaff_x23 + 0xcd0) != 0) {
            puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uVar5 = FUN_03398188(*(undefined8 *)(unaff_x25 + 0x6b8),4);
          FUN_06736060(uVar5,DAT_0842c3c8,0);
          if (4 < *(uint *)(lVar4 + 0x18)) {
            puVar6 = (undefined8 *)(lVar4 + 0x40);
            *puVar6 = uVar5;
            if (*(int *)(unaff_x23 + 0xcd0) == 0) {
              *(long *)(*(long *)(*(long *)(unaff_x22 + 0x858) + 0xb8) + 0x10) = lVar4;
            }
            else {
              puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              plVar7 = (long *)(*(long *)(*(long *)(unaff_x22 + 0x858) + 0xb8) + 0x10);
              *plVar7 = lVar4;
              puVar1 = (ulong *)(unaff_x21 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            uVar5 = FUN_03398188(DAT_083c73b0,0x11);
            FUN_06736060(uVar5,DAT_0842c3f8,0);
            puVar6 = (undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x858) + 0xb8) + 0x18);
            *puVar6 = uVar5;
            if (*(int *)(unaff_x23 + 0xcd0) != 0) {
              puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            uVar5 = FUN_03398188(DAT_083c76b0,0x18);
            FUN_06736060(uVar5,DAT_0842c410,0);
            puVar6 = (undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x858) + 0xb8) + 0x20);
            *puVar6 = uVar5;
            if (*(int *)(unaff_x23 + 0xcd0) != 0) {
              puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            uVar5 = FUN_03398188(*(undefined8 *)(unaff_x24 + 0x838),0x18);
            FUN_06736060(uVar5,DAT_0842c308,0);
            puVar6 = (undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x858) + 0xb8) + 0x28);
            *puVar6 = uVar5;
            if (*(int *)(unaff_x23 + 0xcd0) != 0) {
              puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


