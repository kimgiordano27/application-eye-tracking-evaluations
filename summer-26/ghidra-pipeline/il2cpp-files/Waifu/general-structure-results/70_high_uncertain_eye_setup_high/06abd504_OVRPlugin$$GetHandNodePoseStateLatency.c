/*
FUNCTION_NAME: OVRPlugin$$GetHandNodePoseStateLatency
ENTRY_POINT: 06abd504
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHandNodePoseStateLatency(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long unaff_x19;
  undefined1 unaff_w20;
  
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06abd4f8 with catch @ 06abd504
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06abd3d8 with catch @ 06abd508
                        */
  FUN_0335b6c8(param_1,1);
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06abd3ac with catch @ 06abd50c
                        */
  DataMemoryBarrier(2,3);
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06abd350 with catch @ 06abd510
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06abd4ec with catch @ 06abd514
                        */
  FUN_0335b6c8(&DAT_083c7288,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 06abd52c to 06bbd52f has its CatchHandler @ 06abd53c */
  FUN_0335b6c8(&DAT_083c76b8,1);
  DataMemoryBarrier(2,3);
                    /* catch() { ... } // from try @ 06abd52c with catch @ 06abd53c */
  FUN_0335b6c8(&DAT_083c7298,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c7838,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842c2e0,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 06abd578 to 06bbd59f has its CatchHandler @ 06abd5b4 */
  FUN_0335b6c8(&DAT_0842c308,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842c330,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 06abd5a0 to 06bbd5ab has its CatchHandler @ 06abd0bc */
  FUN_0335b6c8(&DAT_0842c338,1);
                    /* try { // try from 06abd5ac to 06bbd5b3 has its CatchHandler @ 06abd5b4 */
  DataMemoryBarrier(2,3);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06abd578 with catch @ 06abd5b4
                       catch(type#2 @ 00000000) { ... } // from try @ 06abd5ac with catch @ 06abd5b4
                        */
  FUN_0335b6c8(&DAT_0842c368,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842c388,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842c3b0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842c3c8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842c3d0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842c3d8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842c3f8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842c400,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842c408,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842c410,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0x1de) = unaff_w20;
  uVar4 = FUN_03398188(DAT_083c76b8,0x11);
  FUN_06736060(uVar4,DAT_0842c2e0,0);
  **(undefined8 **)(DAT_083cb858 + 0xb8) = uVar4;
  if (DAT_08908cd0 != 0) {
    uVar6 = *(ulong *)(DAT_083cb858 + 0xb8);
    puVar1 = &DAT_0873ccb0 + (uVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (uVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = FUN_03398188(DAT_083c7298,5);
  uVar4 = FUN_03398188(DAT_083c7838,4);
  FUN_06736060(uVar4,DAT_0842c3d0,0);
  if (lVar5 == 0) {
LAB_06abdd4c:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(int *)(lVar5 + 0x18) != 0) {
    puVar7 = (undefined8 *)(lVar5 + 0x20);
    *puVar7 = uVar4;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar4 = FUN_03398188(DAT_083c7838,3);
    FUN_06736060(uVar4,DAT_0842c368,0);
    if (1 < *(uint *)(lVar5 + 0x18)) {
      puVar7 = (undefined8 *)(lVar5 + 0x28);
      *puVar7 = uVar4;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar4 = FUN_03398188(DAT_083c7838,3);
      FUN_06736060(uVar4,DAT_0842c3d8,0);
      if (2 < *(uint *)(lVar5 + 0x18)) {
        puVar7 = (undefined8 *)(lVar5 + 0x30);
        *puVar7 = uVar4;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar4 = FUN_03398188(DAT_083c7838,3);
        FUN_06736060(uVar4,DAT_0842c3b0,0);
        if (3 < *(uint *)(lVar5 + 0x18)) {
          puVar7 = (undefined8 *)(lVar5 + 0x38);
          *puVar7 = uVar4;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uVar4 = FUN_03398188(DAT_083c7838,4);
          FUN_06736060(uVar4,DAT_0842c338,0);
          if (4 < *(uint *)(lVar5 + 0x18)) {
            puVar7 = (undefined8 *)(lVar5 + 0x40);
            *puVar7 = uVar4;
            if (DAT_08908cd0 == 0) {
              *(long *)(*(long *)(DAT_083cb858 + 0xb8) + 8) = lVar5;
            }
            else {
              puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              plVar8 = (long *)(*(long *)(DAT_083cb858 + 0xb8) + 8);
              *plVar8 = lVar5;
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
            lVar5 = FUN_03398188(DAT_083c7288,5);
            uVar4 = FUN_03398188(DAT_083c76b8,4);
            FUN_06736060(uVar4,DAT_0842c330,0);
            if (lVar5 == 0) goto LAB_06abdd4c;
            if (*(int *)(lVar5 + 0x18) != 0) {
              puVar7 = (undefined8 *)(lVar5 + 0x20);
              *puVar7 = uVar4;
              if (DAT_08908cd0 != 0) {
                puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              uVar4 = FUN_03398188(DAT_083c76b8,3);
              FUN_06736060(uVar4,DAT_0842c400,0);
              if (1 < *(uint *)(lVar5 + 0x18)) {
                puVar7 = (undefined8 *)(lVar5 + 0x28);
                *puVar7 = uVar4;
                if (DAT_08908cd0 != 0) {
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                uVar4 = FUN_03398188(DAT_083c76b8,3);
                FUN_06736060(uVar4,DAT_0842c408,0);
                if (2 < *(uint *)(lVar5 + 0x18)) {
                  puVar7 = (undefined8 *)(lVar5 + 0x30);
                  *puVar7 = uVar4;
                  if (DAT_08908cd0 != 0) {
                    puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar3) {
                        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  uVar4 = FUN_03398188(DAT_083c76b8,3);
                  FUN_06736060(uVar4,DAT_0842c388,0);
                  if (3 < *(uint *)(lVar5 + 0x18)) {
                    puVar7 = (undefined8 *)(lVar5 + 0x38);
                    *puVar7 = uVar4;
                    if (DAT_08908cd0 != 0) {
                      puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    uVar4 = FUN_03398188(DAT_083c76b8,4);
                    FUN_06736060(uVar4,DAT_0842c3c8,0);
                    if (4 < *(uint *)(lVar5 + 0x18)) {
                      puVar7 = (undefined8 *)(lVar5 + 0x40);
                      *puVar7 = uVar4;
                      if (DAT_08908cd0 == 0) {
                        *(long *)(*(long *)(DAT_083cb858 + 0xb8) + 0x10) = lVar5;
                      }
                      else {
                        puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
                        do {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar3) {
                            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                        plVar8 = (long *)(*(long *)(DAT_083cb858 + 0xb8) + 0x10);
                        *plVar8 = lVar5;
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
                      uVar4 = FUN_03398188(DAT_083c73b0,0x11);
                      FUN_06736060(uVar4,DAT_0842c3f8,0);
                      puVar7 = (undefined8 *)(*(long *)(DAT_083cb858 + 0xb8) + 0x18);
                      *puVar7 = uVar4;
                      if (DAT_08908cd0 != 0) {
                        puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
                        do {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar3) {
                            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                      }
                      uVar4 = FUN_03398188(DAT_083c76b0,0x18);
                      FUN_06736060(uVar4,DAT_0842c410,0);
                      puVar7 = (undefined8 *)(*(long *)(DAT_083cb858 + 0xb8) + 0x20);
                      *puVar7 = uVar4;
                      if (DAT_08908cd0 != 0) {
                        puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
                        do {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar3) {
                            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                      }
                      uVar4 = FUN_03398188(DAT_083c7838,0x18);
                      FUN_06736060(uVar4,DAT_0842c308,0);
                      puVar7 = (undefined8 *)(*(long *)(DAT_083cb858 + 0xb8) + 0x28);
                      *puVar7 = uVar4;
                      if (DAT_08908cd0 != 0) {
                        puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
                        do {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar3) {
                            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


