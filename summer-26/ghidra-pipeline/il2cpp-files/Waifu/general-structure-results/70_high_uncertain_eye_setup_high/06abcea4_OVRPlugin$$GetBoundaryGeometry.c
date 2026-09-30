/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryGeometry
ENTRY_POINT: 06abcea4
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBoundaryGeometry(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  undefined8 uVar8;
  
  FUN_0335b6c8(&DAT_083c7ab8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c7ad8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c7bf0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08429d98,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d9cd8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x1da) = unaff_w21;
  *(undefined4 *)(unaff_x19 + 0xb0) = 0x40a00000;
  if (*(int *)(DAT_083d9cd8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  iVar4 = DAT_08908cd0;
  lVar7 = *(long *)(*(long *)(DAT_083d9cd8 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(DAT_083d9cd8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar8 = **(undefined8 **)(DAT_083d9cd8 + 0xb8);
    uVar5 = FUN_03398a84(DAT_083c85c8);
    FUN_06785b70(uVar5,uVar8,DAT_08429d98,0);
    puVar6 = (undefined8 *)(*(long *)(DAT_083d9cd8 + 0xb8) + 8);
    *puVar6 = uVar5;
    if (DAT_08908cd0 == 0) {
      *(undefined8 *)(unaff_x19 + 0xb8) = uVar5;
      goto LAB_06abd010;
    }
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar5;
  }
  else {
    *(long *)(unaff_x19 + 0xb8) = lVar7;
    if (iVar4 == 0) goto LAB_06abd010;
  }
  puVar1 = &DAT_0873ccb0 + (unaff_x19 + 0xb8U >> 0x12 & 0x7fff);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1L << (unaff_x19 + 0xb8U >> 0xc & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_06abd010:
  uVar5 = FUN_03398a84(DAT_083cbf68);
  FUN_06abaeb8();
  puVar6 = (undefined8 *)(unaff_x19 + 0xc0);
  *puVar6 = uVar5;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)(DAT_083cb858 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (**(long **)(DAT_083cb858 + 0xb8) != 0) {
    uVar5 = FUN_03398188(DAT_083c7bf0,*(undefined4 *)(**(long **)(DAT_083cb858 + 0xb8) + 0x18));
    puVar6 = (undefined8 *)(unaff_x19 + 0xd0);
    *puVar6 = uVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (**(long **)(DAT_083cb858 + 0xb8) != 0) {
      uVar5 = FUN_03398188(DAT_083c7ab8,*(undefined4 *)(**(long **)(DAT_083cb858 + 0xb8) + 0x18));
      puVar6 = (undefined8 *)(unaff_x19 + 0xd8);
      *puVar6 = uVar5;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (**(long **)(DAT_083cb858 + 0xb8) != 0) {
        uVar5 = FUN_03398188(DAT_083c7ab8,*(undefined4 *)(**(long **)(DAT_083cb858 + 0xb8) + 0x18));
        puVar6 = (undefined8 *)(unaff_x19 + 0xe0);
        *puVar6 = uVar5;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (**(long **)(DAT_083cb858 + 0xb8) != 0) {
          uVar5 = FUN_03398188(DAT_083c7ad8,*(undefined4 *)(**(long **)(DAT_083cb858 + 0xb8) + 0x18)
                              );
          *(undefined8 *)(unaff_x19 + 0x140) = uVar5;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + (unaff_x19 + 0x140U >> 0x12 & 0x7fff);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x140U >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (**(long **)(DAT_083cb858 + 0xb8) != 0) {
            uVar5 = FUN_03398188(DAT_083c7ad8,
                                 *(undefined4 *)(**(long **)(DAT_083cb858 + 0xb8) + 0x18));
            *(undefined8 *)(unaff_x19 + 0x148) = uVar5;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + (unaff_x19 + 0x148U >> 0x12 & 0x7fff);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x148U >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (**(long **)(DAT_083cb858 + 0xb8) != 0) {
              uVar5 = FUN_03398188(DAT_083c7ad8,
                                   *(undefined4 *)(**(long **)(DAT_083cb858 + 0xb8) + 0x18));
              *(undefined8 *)(unaff_x19 + 0x150) = uVar5;
              if (DAT_08908cd0 != 0) {
                puVar1 = &DAT_0873ccb0 + (unaff_x19 + 0x150U >> 0x12 & 0x7fff);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x150U >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              if (**(long **)(DAT_083cb858 + 0xb8) != 0) {
                uVar5 = FUN_03398188(DAT_083c7898,
                                     *(undefined4 *)(**(long **)(DAT_083cb858 + 0xb8) + 0x18));
                *(undefined8 *)(unaff_x19 + 0x158) = uVar5;
                if (DAT_08908cd0 != 0) {
                  puVar1 = &DAT_0873ccb0 + (unaff_x19 + 0x158U >> 0x12 & 0x7fff);
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


