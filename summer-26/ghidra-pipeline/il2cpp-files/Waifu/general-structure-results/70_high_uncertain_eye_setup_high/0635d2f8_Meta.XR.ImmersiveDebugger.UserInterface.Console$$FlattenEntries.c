/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$FlattenEntries
ENTRY_POINT: 0635d2f8
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__FlattenEntries(void)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083f34e0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cea88,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cfc98,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d0818,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d09d8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d09e0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d13f8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d1400,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d2328,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d2340,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d23a0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d2db8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0844c910,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08435680,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x8e6) = unaff_w21;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = (long *)0x0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = (long *)0x0;
  lVar6 = FUN_03398a84(DAT_083c99f0);
  *(undefined4 *)(lVar6 + 0x10) = 1;
  plVar11 = (long *)(unaff_x19 + 0x70);
  *plVar11 = lVar6;
  iVar5 = DAT_08908cd0;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = DAT_083f34c0;
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if (lVar7 != 0) {
    lVar10 = *plVar11;
    lVar12 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar12 != 0) {
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
        plVar11 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
        *plVar11 = lVar10;
        if (iVar5 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      else {
        FUN_04ab0e54(lVar7,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar6 = FUN_03398a84(DAT_083cfc98);
      *(undefined4 *)(lVar6 + 0x10) = 1;
      plVar11 = (long *)(unaff_x19 + 0x68);
      *plVar11 = lVar6;
      iVar5 = DAT_08908cd0;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar6 = DAT_083f34c0;
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if (lVar7 != 0) {
        lVar10 = *plVar11;
        lVar12 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar12 != 0) {
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar2 + 1;
            plVar11 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
            *plVar11 = lVar10;
            if (iVar5 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
          }
          else {
            FUN_04ab0e54(lVar7,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = FUN_03398a84(DAT_083c99e0);
          *(undefined4 *)(lVar6 + 0x10) = 1;
          plVar11 = (long *)(unaff_x19 + 0x60);
          *plVar11 = lVar6;
          iVar5 = DAT_08908cd0;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lVar6 = DAT_083f34c0;
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if (lVar7 != 0) {
            lVar10 = *plVar11;
            lVar12 = *(long *)(lVar7 + 0x10);
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar12 != 0) {
              uVar2 = *(uint *)(lVar7 + 0x18);
              if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                plVar11 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
                *plVar11 = lVar10;
                if (iVar5 != 0) {
                  puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
              }
              else {
                FUN_04ab0e54(lVar7,lVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              lVar6 = FUN_03398a84(DAT_083c9880);
              *(undefined4 *)(lVar6 + 0x10) = 1;
              plVar11 = (long *)(unaff_x19 + 0x30);
              *plVar11 = lVar6;
              iVar5 = DAT_08908cd0;
              if (DAT_08908cd0 != 0) {
                puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar4) {
                    *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              lVar6 = DAT_083f34c0;
              lVar7 = *(long *)(unaff_x19 + 0x20);
              if (lVar7 != 0) {
                lVar10 = *plVar11;
                lVar12 = *(long *)(lVar7 + 0x10);
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar12 != 0) {
                  uVar2 = *(uint *)(lVar7 + 0x18);
                  if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                    plVar11 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar11 = lVar10;
                    if (iVar5 != 0) {
                      puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                          *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                  }
                  else {
                    FUN_04ab0e54(lVar7,lVar10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar6 = FUN_03398a84(DAT_083d13f8);
                  *(undefined4 *)(lVar6 + 0x10) = 1;
                  plVar11 = (long *)(unaff_x19 + 0x40);
                  *plVar11 = lVar6;
                  iVar5 = DAT_08908cd0;
                  if (DAT_08908cd0 != 0) {
                    puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
                    do {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar4) {
                        *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  lVar6 = DAT_083f34c0;
                  lVar7 = *(long *)(unaff_x19 + 0x20);
                  if (lVar7 != 0) {
                    lVar10 = *plVar11;
                    lVar12 = *(long *)(lVar7 + 0x10);
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    if (lVar12 != 0) {
                      uVar2 = *(uint *)(lVar7 + 0x18);
                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                        plVar11 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
                        *plVar11 = lVar10;
                        if (iVar5 != 0) {
                          puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
                          do {
                            cVar3 = '\x01';
                            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar4) {
                              *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                        }
                      }
                      else {
                        FUN_04ab0e54(lVar7,lVar10,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar6 = FUN_03398a84(DAT_083d23a0);
                      *(undefined4 *)(lVar6 + 0x10) = 1;
                      plVar11 = (long *)(unaff_x19 + 0x78);
                      *plVar11 = lVar6;
                      iVar5 = DAT_08908cd0;
                      if (DAT_08908cd0 != 0) {
                        puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
                        do {
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar4) {
                            *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                      }
                      lVar6 = DAT_083f34c0;
                      lVar7 = *(long *)(unaff_x19 + 0x20);
                      if (lVar7 != 0) {
                        lVar10 = *plVar11;
                        lVar12 = *(long *)(lVar7 + 0x10);
                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                        if (lVar12 != 0) {
                          uVar2 = *(uint *)(lVar7 + 0x18);
                          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                            *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                            plVar11 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
                            *plVar11 = lVar10;
                            if (iVar5 != 0) {
                              puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
                              do {
                                cVar3 = '\x01';
                                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar4) {
                                  *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                                  cVar3 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar3 != '\0');
                            }
                          }
                          else {
                            FUN_04ab0e54(lVar7,lVar10,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar6 = FUN_03398a84(DAT_083d09d8);
                          *(undefined4 *)(lVar6 + 0x10) = 1;
                          plVar11 = (long *)(unaff_x19 + 0x48);
                          *plVar11 = lVar6;
                          iVar5 = DAT_08908cd0;
                          if (DAT_08908cd0 != 0) {
                            puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
                            do {
                              cVar3 = '\x01';
                              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar4) {
                                *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                                cVar3 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar3 != '\0');
                          }
                          lVar6 = DAT_083f34c0;
                          lVar7 = *(long *)(unaff_x19 + 0x20);
                          if (lVar7 != 0) {
                            lVar10 = *plVar11;
                            lVar12 = *(long *)(lVar7 + 0x10);
                            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                            if (lVar12 != 0) {
                              uVar2 = *(uint *)(lVar7 + 0x18);
                              if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                plVar11 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
                                *plVar11 = lVar10;
                                if (iVar5 != 0) {
                                  puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
                                  do {
                                    cVar3 = '\x01';
                                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                    if (bVar4) {
                                      *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                                      cVar3 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar3 != '\0');
                                }
                              }
                              else {
                                FUN_04ab0e54(lVar7,lVar10,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar6 = FUN_03398a84(DAT_083d09e0);
                              *(undefined4 *)(lVar6 + 0x10) = 1;
                              plVar11 = (long *)(unaff_x19 + 0x50);
                              *plVar11 = lVar6;
                              iVar5 = DAT_08908cd0;
                              if (DAT_08908cd0 != 0) {
                                puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
                                do {
                                  cVar3 = '\x01';
                                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                  if (bVar4) {
                                    *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                                    cVar3 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar3 != '\0');
                              }
                              lVar6 = DAT_083f34c0;
                              lVar7 = *(long *)(unaff_x19 + 0x20);
                              if (lVar7 != 0) {
                                lVar10 = *plVar11;
                                lVar12 = *(long *)(lVar7 + 0x10);
                                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                if (lVar12 != 0) {
                                  uVar2 = *(uint *)(lVar7 + 0x18);
                                  if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                    *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                    plVar11 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
                                    *plVar11 = lVar10;
                                    if (iVar5 != 0) {
                                      puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
                                      do {
                                        cVar3 = '\x01';
                                        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                        if (bVar4) {
                                          *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                                          cVar3 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar3 != '\0');
                                    }
                                  }
                                  else {
                                    FUN_04ab0e54(lVar7,lVar10,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                  lVar6 = FUN_03398a84(DAT_083c9be8);
                                  *(undefined4 *)(lVar6 + 0x10) = 1;
                                  plVar11 = (long *)(unaff_x19 + 0x80);
                                  *plVar11 = lVar6;
                                  iVar5 = DAT_08908cd0;
                                  if (DAT_08908cd0 != 0) {
                                    puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
                                    do {
                                      cVar3 = '\x01';
                                      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                      if (bVar4) {
                                        *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                                        cVar3 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar3 != '\0');
                                  }
                                  lVar6 = DAT_083f34c0;
                                  lVar7 = *(long *)(unaff_x19 + 0x20);
                                  if (lVar7 != 0) {
                                    lVar10 = *plVar11;
                                    lVar12 = *(long *)(lVar7 + 0x10);
                                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                    if (lVar12 != 0) {
                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                        plVar11 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
                                        *plVar11 = lVar10;
                                        if (iVar5 != 0) {
                                          puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff)
                                          ;
                                          do {
                                            cVar3 = '\x01';
                                            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                            if (bVar4) {
                                              *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc &
                                                                        0x3f);
                                              cVar3 = ExclusiveMonitorsStatus();
                                            }
                                          } while (cVar3 != '\0');
                                        }
                                      }
                                      else {
                                        FUN_04ab0e54(lVar7,lVar10,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      lVar6 = FUN_03398a84(DAT_083d2328);
                                      *(undefined4 *)(lVar6 + 0x10) = 1;
                                      plVar11 = (long *)(unaff_x19 + 0x58);
                                      *plVar11 = lVar6;
                                      iVar5 = DAT_08908cd0;
                                      if (DAT_08908cd0 != 0) {
                                        puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
                                        do {
                                          cVar3 = '\x01';
                                          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                          if (bVar4) {
                                            *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f)
                                            ;
                                            cVar3 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar3 != '\0');
                                      }
                                      lVar6 = DAT_083f34c0;
                                      lVar7 = *(long *)(unaff_x19 + 0x20);
                                      if (lVar7 != 0) {
                                        lVar10 = *plVar11;
                                        lVar12 = *(long *)(lVar7 + 0x10);
                                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                        if (lVar12 != 0) {
                                          uVar2 = *(uint *)(lVar7 + 0x18);
                                          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                            *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                            plVar11 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20)
                                            ;
                                            *plVar11 = lVar10;
                                            if (iVar5 != 0) {
                                              puVar1 = &DAT_0873ccb0 +
                                                       ((ulong)plVar11 >> 0x12 & 0x7fff);
                                              do {
                                                cVar3 = '\x01';
                                                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                if (bVar4) {
                                                  *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc &
                                                                            0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar3 != '\0');
                                            }
                                          }
                                          else {
                                            FUN_04ab0e54(lVar7,lVar10,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                          + 0x70));
                                          }
                                          lVar6 = FUN_03398a84(DAT_083c9888);
                                          *(undefined4 *)(lVar6 + 0x10) = 1;
                                          plVar11 = (long *)(unaff_x19 + 0x28);
                                          *plVar11 = lVar6;
                                          iVar5 = DAT_08908cd0;
                                          if (DAT_08908cd0 != 0) {
                                            puVar1 = &DAT_0873ccb0 +
                                                     ((ulong)plVar11 >> 0x12 & 0x7fff);
                                            do {
                                              cVar3 = '\x01';
                                              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                              if (bVar4) {
                                                *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc &
                                                                          0x3f);
                                                cVar3 = ExclusiveMonitorsStatus();
                                              }
                                            } while (cVar3 != '\0');
                                          }
                                          lVar6 = DAT_083f34c0;
                                          lVar7 = *(long *)(unaff_x19 + 0x20);
                                          if (lVar7 != 0) {
                                            lVar10 = *plVar11;
                                            lVar12 = *(long *)(lVar7 + 0x10);
                                            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                            if (lVar12 != 0) {
                                              uVar2 = *(uint *)(lVar7 + 0x18);
                                              if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                plVar11 = (long *)(lVar12 + (long)(int)uVar2 * 8 +
                                                                  0x20);
                                                *plVar11 = lVar10;
                                                if (iVar5 != 0) {
                                                  puVar1 = &DAT_0873ccb0 +
                                                           ((ulong)plVar11 >> 0x12 & 0x7fff);
                                                  do {
                                                    cVar3 = '\x01';
                                                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                    if (bVar4) {
                                                      *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >>
                                                                                 0xc & 0x3f);
                                                      cVar3 = ExclusiveMonitorsStatus();
                                                    }
                                                  } while (cVar3 != '\0');
                                                }
                                              }
                                              else {
                                                FUN_04ab0e54(lVar7,lVar10,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar6 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              lVar6 = FUN_03398a84(DAT_083c9890);
                                              *(undefined4 *)(lVar6 + 0x10) = 1;
                                              plVar11 = (long *)(unaff_x19 + 0x38);
                                              *plVar11 = lVar6;
                                              iVar5 = DAT_08908cd0;
                                              if (DAT_08908cd0 != 0) {
                                                puVar1 = &DAT_0873ccb0 +
                                                         ((ulong)plVar11 >> 0x12 & 0x7fff);
                                                do {
                                                  cVar3 = '\x01';
                                                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                  if (bVar4) {
                                                    *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc
                                                                              & 0x3f);
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                              }
                                              lVar6 = DAT_083f34c0;
                                              lVar7 = *(long *)(unaff_x19 + 0x20);
                                              if (lVar7 != 0) {
                                                lVar10 = *plVar11;
                                                lVar12 = *(long *)(lVar7 + 0x10);
                                                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                                if (lVar12 != 0) {
                                                  uVar2 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                    plVar11 = (long *)(lVar12 + (long)(int)uVar2 * 8
                                                                      + 0x20);
                                                    *plVar11 = lVar10;
                                                    if (iVar5 != 0) {
                                                      puVar1 = &DAT_0873ccb0 +
                                                               ((ulong)plVar11 >> 0x12 & 0x7fff);
                                                      do {
                                                        cVar3 = '\x01';
                                                        bVar4 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar4) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)plVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar3 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar3 != '\0');
                                                    }
                                                  }
                                                  else {
                                                    FUN_04ab0e54(lVar7,lVar10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    FUN_05fd5ad4();
                                                    in_stack_00000038 = 0;
                                                    in_stack_00000030 = 0;
                                                    in_stack_00000040 = (long *)0x0;
                                                    while (uVar8 = FUN_05fd5b44(&stack0x00000030,
                                                                                DAT_083e6fc0),
                                                          (uVar8 & 1) != 0) {
                                                      if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                        FUN_033d1d3c();
                                                      }
                                                      plVar11 = in_stack_00000040 + 3;
                                                      *plVar11 = *(long *)(unaff_x19 + 0x10);
                                                      if (DAT_08908cd0 != 0) {
                                                        puVar1 = &DAT_0873ccb0 +
                                                                 ((ulong)plVar11 >> 0x12 & 0x7fff);
                                                        do {
                                                          cVar3 = '\x01';
                                                          bVar4 = (bool)ExclusiveMonitorPass
                                                                                  (puVar1,0x10);
                                                          if (bVar4) {
                                                            *puVar1 = *puVar1 | 1L << ((ulong)
                                                  plVar11 >> 0xc & 0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar3 != '\0');
                                                  }
                                                  (**(code **)(*in_stack_00000040 + 0x178))
                                                            (in_stack_00000040,
                                                             *(undefined8 *)
                                                              (*in_stack_00000040 + 0x180));
                                                  }
                                                  uVar9 = FUN_03398a84(DAT_083d0818);
                                                  puVar13 = (undefined8 *)(unaff_x19 + 0x90);
                                                  *puVar13 = uVar9;
                                                  iVar5 = DAT_08908cd0;
                                                  if (DAT_08908cd0 != 0) {
                                                    puVar1 = &DAT_0873ccb0 +
                                                             ((ulong)puVar13 >> 0x12 & 0x7fff);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  lVar6 = DAT_083f34d8;
                                                  lVar7 = *(long *)(unaff_x19 + 0x88);
                                                  if (lVar7 != 0) {
                                                    uVar9 = *puVar13;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        puVar13 = (undefined8 *)
                                                                  (lVar10 + (long)(int)uVar2 * 8 +
                                                                  0x20);
                                                        *puVar13 = uVar9;
                                                        if (iVar5 != 0) {
                                                          puVar1 = &DAT_0873ccb0 +
                                                                   ((ulong)puVar13 >> 0x12 & 0x7fff)
                                                          ;
                                                          do {
                                                            cVar3 = '\x01';
                                                            bVar4 = (bool)ExclusiveMonitorPass
                                                                                    (puVar1,0x10);
                                                            if (bVar4) {
                                                              *puVar1 = *puVar1 | 1L << ((ulong)
                                                  puVar13 >> 0xc & 0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar3 != '\0');
                                                  }
                                                  }
                                                  else {
                                                    FUN_04ab0e54(lVar7,uVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = FUN_03398a84(DAT_083d2db8);
                                                  puVar13 = (undefined8 *)(unaff_x19 + 0x98);
                                                  *puVar13 = uVar9;
                                                  iVar5 = DAT_08908cd0;
                                                  if (DAT_08908cd0 != 0) {
                                                    puVar1 = &DAT_0873ccb0 +
                                                             ((ulong)puVar13 >> 0x12 & 0x7fff);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  lVar6 = DAT_083f34d8;
                                                  lVar7 = *(long *)(unaff_x19 + 0x88);
                                                  if (lVar7 != 0) {
                                                    uVar9 = *puVar13;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        puVar13 = (undefined8 *)
                                                                  (lVar10 + (long)(int)uVar2 * 8 +
                                                                  0x20);
                                                        *puVar13 = uVar9;
                                                        if (iVar5 != 0) {
                                                          puVar1 = &DAT_0873ccb0 +
                                                                   ((ulong)puVar13 >> 0x12 & 0x7fff)
                                                          ;
                                                          do {
                                                            cVar3 = '\x01';
                                                            bVar4 = (bool)ExclusiveMonitorPass
                                                                                    (puVar1,0x10);
                                                            if (bVar4) {
                                                              *puVar1 = *puVar1 | 1L << ((ulong)
                                                  puVar13 >> 0xc & 0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar3 != '\0');
                                                  }
                                                  }
                                                  else {
                                                    FUN_04ab0e54(lVar7,uVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = FUN_03398a84(DAT_083cea88);
                                                  FUN_0637acdc(uVar9,0);
                                                  puVar13 = (undefined8 *)(unaff_x19 + 0xa0);
                                                  *puVar13 = uVar9;
                                                  iVar5 = DAT_08908cd0;
                                                  if (DAT_08908cd0 != 0) {
                                                    puVar1 = &DAT_0873ccb0 +
                                                             ((ulong)puVar13 >> 0x12 & 0x7fff);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  lVar6 = DAT_083f34d8;
                                                  lVar7 = *(long *)(unaff_x19 + 0x88);
                                                  if (lVar7 != 0) {
                                                    uVar9 = *puVar13;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        puVar13 = (undefined8 *)
                                                                  (lVar10 + (long)(int)uVar2 * 8 +
                                                                  0x20);
                                                        *puVar13 = uVar9;
                                                        if (iVar5 != 0) {
                                                          puVar1 = &DAT_0873ccb0 +
                                                                   ((ulong)puVar13 >> 0x12 & 0x7fff)
                                                          ;
                                                          do {
                                                            cVar3 = '\x01';
                                                            bVar4 = (bool)ExclusiveMonitorPass
                                                                                    (puVar1,0x10);
                                                            if (bVar4) {
                                                              *puVar1 = *puVar1 | 1L << ((ulong)
                                                  puVar13 >> 0xc & 0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar3 != '\0');
                                                  }
                                                  }
                                                  else {
                                                    FUN_04ab0e54(lVar7,uVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = FUN_03398a84(DAT_083d1400);
                                                  FUN_0637de04(uVar9,0);
                                                  puVar13 = (undefined8 *)(unaff_x19 + 0xa8);
                                                  *puVar13 = uVar9;
                                                  iVar5 = DAT_08908cd0;
                                                  if (DAT_08908cd0 != 0) {
                                                    puVar1 = &DAT_0873ccb0 +
                                                             ((ulong)puVar13 >> 0x12 & 0x7fff);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  lVar6 = DAT_083f34d8;
                                                  lVar7 = *(long *)(unaff_x19 + 0x88);
                                                  if (lVar7 != 0) {
                                                    uVar9 = *puVar13;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        puVar13 = (undefined8 *)
                                                                  (lVar10 + (long)(int)uVar2 * 8 +
                                                                  0x20);
                                                        *puVar13 = uVar9;
                                                        if (iVar5 != 0) {
                                                          puVar1 = &DAT_0873ccb0 +
                                                                   ((ulong)puVar13 >> 0x12 & 0x7fff)
                                                          ;
                                                          do {
                                                            cVar3 = '\x01';
                                                            bVar4 = (bool)ExclusiveMonitorPass
                                                                                    (puVar1,0x10);
                                                            if (bVar4) {
                                                              *puVar1 = *puVar1 | 1L << ((ulong)
                                                  puVar13 >> 0xc & 0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar3 != '\0');
                                                  }
                                                  }
                                                  else {
                                                    FUN_04ab0e54(lVar7,uVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = FUN_03398a84(DAT_083c8688);
                                                  puVar13 = (undefined8 *)(unaff_x19 + 0xb0);
                                                  *puVar13 = uVar9;
                                                  iVar5 = DAT_08908cd0;
                                                  if (DAT_08908cd0 != 0) {
                                                    puVar1 = &DAT_0873ccb0 +
                                                             ((ulong)puVar13 >> 0x12 & 0x7fff);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  lVar6 = DAT_083f34d8;
                                                  lVar7 = *(long *)(unaff_x19 + 0x88);
                                                  if (lVar7 != 0) {
                                                    uVar9 = *puVar13;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        puVar13 = (undefined8 *)
                                                                  (lVar10 + (long)(int)uVar2 * 8 +
                                                                  0x20);
                                                        *puVar13 = uVar9;
                                                        if (iVar5 != 0) {
                                                          puVar1 = &DAT_0873ccb0 +
                                                                   ((ulong)puVar13 >> 0x12 & 0x7fff)
                                                          ;
                                                          do {
                                                            cVar3 = '\x01';
                                                            bVar4 = (bool)ExclusiveMonitorPass
                                                                                    (puVar1,0x10);
                                                            if (bVar4) {
                                                              *puVar1 = *puVar1 | 1L << ((ulong)
                                                  puVar13 >> 0xc & 0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar3 != '\0');
                                                  }
                                                  }
                                                  else {
                                                    FUN_04ab0e54(lVar7,uVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = FUN_03398a84(DAT_083ce338);
                                                  puVar13 = (undefined8 *)(unaff_x19 + 0xb8);
                                                  *puVar13 = uVar9;
                                                  iVar5 = DAT_08908cd0;
                                                  if (DAT_08908cd0 != 0) {
                                                    puVar1 = &DAT_0873ccb0 +
                                                             ((ulong)puVar13 >> 0x12 & 0x7fff);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  lVar6 = DAT_083f34d8;
                                                  lVar7 = *(long *)(unaff_x19 + 0x88);
                                                  if (lVar7 != 0) {
                                                    uVar9 = *puVar13;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        puVar13 = (undefined8 *)
                                                                  (lVar10 + (long)(int)uVar2 * 8 +
                                                                  0x20);
                                                        *puVar13 = uVar9;
                                                        if (iVar5 != 0) {
                                                          puVar1 = &DAT_0873ccb0 +
                                                                   ((ulong)puVar13 >> 0x12 & 0x7fff)
                                                          ;
                                                          do {
                                                            cVar3 = '\x01';
                                                            bVar4 = (bool)ExclusiveMonitorPass
                                                                                    (puVar1,0x10);
                                                            if (bVar4) {
                                                              *puVar1 = *puVar1 | 1L << ((ulong)
                                                  puVar13 >> 0xc & 0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar3 != '\0');
                                                  }
                                                  }
                                                  else {
                                                    FUN_04ab0e54(lVar7,uVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = FUN_03398a84(DAT_083d2340);
                                                  puVar13 = (undefined8 *)(unaff_x19 + 0xc0);
                                                  *puVar13 = uVar9;
                                                  iVar5 = DAT_08908cd0;
                                                  if (DAT_08908cd0 != 0) {
                                                    puVar1 = &DAT_0873ccb0 +
                                                             ((ulong)puVar13 >> 0x12 & 0x7fff);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  lVar6 = DAT_083f34d8;
                                                  lVar7 = *(long *)(unaff_x19 + 0x88);
                                                  if (lVar7 != 0) {
                                                    uVar9 = *puVar13;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        puVar13 = (undefined8 *)
                                                                  (lVar10 + (long)(int)uVar2 * 8 +
                                                                  0x20);
                                                        *puVar13 = uVar9;
                                                        if (iVar5 != 0) {
                                                          puVar1 = &DAT_0873ccb0 +
                                                                   ((ulong)puVar13 >> 0x12 & 0x7fff)
                                                          ;
                                                          do {
                                                            cVar3 = '\x01';
                                                            bVar4 = (bool)ExclusiveMonitorPass
                                                                                    (puVar1,0x10);
                                                            if (bVar4) {
                                                              *puVar1 = *puVar1 | 1L << ((ulong)
                                                  puVar13 >> 0xc & 0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar3 != '\0');
                                                  }
                                                  }
                                                  else {
                                                    FUN_04ab0e54(lVar7,uVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  uVar9 = FUN_03398a84(DAT_083c8ed8);
                                                  puVar13 = (undefined8 *)(unaff_x19 + 200);
                                                  *puVar13 = uVar9;
                                                  iVar5 = DAT_08908cd0;
                                                  if (DAT_08908cd0 != 0) {
                                                    puVar1 = &DAT_0873ccb0 +
                                                             ((ulong)puVar13 >> 0x12 & 0x7fff);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  lVar6 = DAT_083f34d8;
                                                  lVar7 = *(long *)(unaff_x19 + 0x88);
                                                  if (lVar7 != 0) {
                                                    uVar9 = *puVar13;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        puVar13 = (undefined8 *)
                                                                  (lVar10 + (long)(int)uVar2 * 8 +
                                                                  0x20);
                                                        *puVar13 = uVar9;
                                                        if (iVar5 != 0) {
                                                          puVar1 = &DAT_0873ccb0 +
                                                                   ((ulong)puVar13 >> 0x12 & 0x7fff)
                                                          ;
                                                          do {
                                                            cVar3 = '\x01';
                                                            bVar4 = (bool)ExclusiveMonitorPass
                                                                                    (puVar1,0x10);
                                                            if (bVar4) {
                                                              *puVar1 = *puVar1 | 1L << ((ulong)
                                                  puVar13 >> 0xc & 0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar3 != '\0');
                                                  }
                                                  }
                                                  else {
                                                    FUN_04ab0e54(lVar7,uVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  if (*(long *)(unaff_x19 + 0x88) != 0) {
                                                    in_stack_00000020 = 0;
                                                    in_stack_00000028 = (long *)0x0;
                                                    in_stack_00000018 = 0;
                                                    FUN_05fd5ad4(&stack0x00000018,
                                                                 *(long *)(unaff_x19 + 0x88),
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(DAT_083f34e0
                                                                                      + 0x20) + 0xc0
                                                                            ) + 0x138));
                                                    while( true ) {
                                                      uVar8 = FUN_05fd5b44(&stack0x00000018,
                                                                           DAT_083e6fd8);
                                                      if ((uVar8 & 1) == 0) {
                                                        if (*(int *)(DAT_083ca030 + 0xe0) == 0) {
                                                          FUN_033b9870();
                                                        }
                                                        uVar9 = FUN_07a1e864(DAT_08435680,0,0);
                                                        puVar13 = (undefined8 *)(unaff_x19 + 0xe8);
                                                        *puVar13 = uVar9;
                                                        if (DAT_08908cd0 != 0) {
                                                          puVar1 = &DAT_0873ccb0 +
                                                                   ((ulong)puVar13 >> 0x12 & 0x7fff)
                                                          ;
                                                          do {
                                                            cVar3 = '\x01';
                                                            bVar4 = (bool)ExclusiveMonitorPass
                                                                                    (puVar1,0x10);
                                                            if (bVar4) {
                                                              *puVar1 = *puVar1 | 1L << ((ulong)
                                                  puVar13 >> 0xc & 0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar3 != '\0');
                                                  }
                                                  uVar9 = FUN_07a1e864(DAT_0844c910,0,0);
                                                  puVar13 = (undefined8 *)(unaff_x19 + 0xf0);
                                                  *puVar13 = uVar9;
                                                  if (DAT_08908cd0 != 0) {
                                                    puVar1 = &DAT_0873ccb0 +
                                                             ((ulong)puVar13 >> 0x12 & 0x7fff);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  return;
                                                  }
                                                  if (in_stack_00000028 == (long *)0x0) break;
                                                  plVar11 = in_stack_00000028 + 2;
                                                  *plVar11 = *(long *)(unaff_x19 + 0x10);
                                                  if (DAT_08908cd0 != 0) {
                                                    puVar1 = &DAT_0873ccb0 +
                                                             ((ulong)plVar11 >> 0x12 & 0x7fff);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  (**(code **)(*in_stack_00000028 + 0x188))
                                                            (in_stack_00000028,
                                                             *(undefined8 *)
                                                              (*in_stack_00000028 + 400));
                                                  }
                    /* WARNING: Subroutine does not return */
                                                  FUN_033d1d3c();
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


