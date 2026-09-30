/*
FUNCTION_NAME: FUN_0363c41c
ENTRY_POINT: 0363c41c
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_3;frame_or_lifecycle_behavior
*/


undefined8 FUN_0363c41c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  float fVar14;
  
  if ((DAT_086d8846 & 1) == 0) {
    FUN_0335b6c8(&DAT_08405740,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08405898,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_084058a8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08405a28,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08405bb0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ca458,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0840c3b0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0840c4f8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0840c548,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0840c640,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cbb88,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083d3058,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083d3068,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08440db0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08456ed0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08442260,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0844c568,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08456ee0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0844c570,1);
    DataMemoryBarrier(2,3);
    DAT_086d8846 = 1;
  }
  if (5 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar12 = *(long *)(param_1 + 0x20);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (DAT_086ef688 == (code *)0x0) {
      DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
    }
    fVar14 = (float)(*DAT_086ef688)();
    *(float *)(param_1 + 0x28) = fVar14 + 1.0;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_0363caac;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar12 != 0) && (lVar10 = *(long *)(lVar12 + 0x48), lVar10 != 0)) {
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar10 = (*DAT_086ef190)(lVar10);
      if (lVar10 != 0) {
        lVar10 = FUN_03fa1ab4(lVar10,DAT_0840c640);
        plVar8 = (long *)(lVar12 + 0xd0);
        *plVar8 = lVar10;
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
          lVar10 = *plVar8;
        }
        lVar9 = *(long *)(*(long *)(DAT_083cbb88 + 0xb8) + 0x10);
        if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x30), lVar9 != 0)) {
          if (DAT_086ef188 == (code *)0x0) {
            DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          }
          uVar5 = (*DAT_086ef188)(lVar9);
          if (lVar10 != 0) {
            puVar11 = (undefined8 *)(lVar10 + 0x40);
            *puVar11 = uVar5;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            lVar10 = *plVar8;
            if (lVar10 != 0) {
              *(undefined4 *)(lVar10 + 0x28) = 0x3f733333;
              FUN_035883b8(lVar10,0);
              lVar10 = *(long *)(lVar12 + 0x48);
              if (lVar10 != 0) {
                if (DAT_086ef190 == (code *)0x0) {
                  DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
                }
                lVar10 = (*DAT_086ef190)(lVar10);
                if (lVar10 != 0) {
                  FUN_03fa1ab4(lVar10,DAT_0840c4f8);
                  if (*(long *)(lVar12 + 0x48) != 0) {
                    lVar10 = FUN_03c89df4(*(long *)(lVar12 + 0x48),DAT_08405bb0);
                    if (*(long *)(lVar12 + 0x48) != 0) {
                      lVar9 = FUN_03c89df4(*(long *)(lVar12 + 0x48),DAT_08405740);
                      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                        FUN_033b9870(DAT_083cf7d8);
                      }
                      uVar6 = FUN_07a119fc(lVar9,0,0);
                      if ((uVar6 & 1) != 0) {
                        lVar9 = *(long *)(lVar12 + 0x48);
                        if (lVar9 == 0) goto LAB_0363d038;
                        if (DAT_086ef190 == (code *)0x0) {
                          DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                        }
                        lVar9 = (*DAT_086ef190)(lVar9);
                        if (lVar9 == 0) goto LAB_0363d038;
                        lVar9 = FUN_03fa1ab4(lVar9,DAT_0840c3b0);
                      }
                      if (lVar9 != 0) {
                        if (DAT_086ecf08 == (code *)0x0) {
                          DAT_086ecf08 = (code *)FUN_033d1b68(
                                                  "UnityEngine.AudioSource::set_spatialBlend(System.Single)"
                                                  );
                        }
                        (*DAT_086ecf08)(0x3f800000,lVar9);
                        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                          FUN_033b9870();
                        }
                        uVar6 = FUN_07a0d2c4(lVar10,0,0);
                        if ((uVar6 & 1) == 0) {
                          if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
                            FUN_033b9870();
                          }
                          FUN_079ca0b0(DAT_08442260,0);
                        }
                        else {
                          if (lVar10 == 0) goto LAB_0363d038;
                          plVar8 = (long *)(lVar10 + 0x20);
                          *plVar8 = lVar9;
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
                        }
                        if (*(long *)(lVar12 + 0x28) != 0) {
                          FUN_0363d03c();
                          uVar5 = FUN_03398a84(DAT_083d3058);
                          puVar11 = (undefined8 *)(param_1 + 0x18);
                          *puVar11 = uVar5;
                          if (DAT_08908cd0 != 0) {
                            puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
                            do {
                              cVar2 = '\x01';
                              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar3) {
                                *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
                                cVar2 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar2 != '\0');
                          }
                          uVar7 = 4;
                          goto LAB_0363d018;
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
    goto LAB_0363d038;
  case 4:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar12 = FUN_03398a84(DAT_083d3068);
    *(undefined4 *)(lVar12 + 0x10) = 0x3dcccccd;
    plVar8 = (long *)(param_1 + 0x18);
    *plVar8 = lVar12;
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
    uVar7 = 5;
    goto LAB_0363d018;
  case 5:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    FUN_07a0f654(DAT_08456ee0,0);
    if ((lVar12 != 0) && (*(long *)(lVar12 + 0x20) != 0)) {
      FUN_079b2acc(0xff800000,*(long *)(lVar12 + 0x20),DAT_08440db0,0xffffffff);
      FUN_07a0f654(DAT_08456ed0,0);
      if ((*(long *)(lVar12 + 0x48) != 0) &&
         (lVar12 = FUN_03c89df4(*(long *)(lVar12 + 0x48),DAT_08405898), lVar12 != 0)) {
        if (DAT_086ef168 == (code *)0x0) {
          DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
        }
        (*DAT_086ef168)(lVar12,1);
        return 0;
      }
    }
    goto LAB_0363d038;
  }
  if (DAT_086ef688 == (code *)0x0) {
    DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
  }
  fVar14 = (float)(*DAT_086ef688)();
  if (fVar14 < *(float *)(param_1 + 0x28)) {
    lVar12 = FUN_03398a84(DAT_083d3068);
    *(undefined4 *)(lVar12 + 0x10) = 0x3f000000;
    plVar8 = (long *)(param_1 + 0x18);
    *plVar8 = lVar12;
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
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  if ((lVar12 != 0) && (*(long *)(lVar12 + 0x80) != 0)) {
    *(undefined4 *)(*(long *)(lVar12 + 0x80) + 0x48) = 0;
    if (*(long *)(lVar12 + 0x48) != 0) {
      uVar5 = FUN_03c89df4(*(long *)(lVar12 + 0x48),DAT_08405a28);
      puVar11 = (undefined8 *)(lVar12 + 0xd0);
      *puVar11 = uVar5;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(long *)(lVar12 + 0x48) != 0) {
        uVar5 = FUN_03c89df4(*(long *)(lVar12 + 0x48),DAT_084058a8);
        puVar13 = (undefined8 *)(lVar12 + 0xd8);
        *puVar13 = uVar5;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar5 = *puVar11;
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar6 = FUN_07a0d2c4(uVar5,0,0);
        if ((uVar6 & 1) != 0) {
          uVar5 = *puVar11;
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          FUN_07a125b0(uVar5,0);
        }
        uVar5 = *puVar13;
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar6 = FUN_07a0d2c4(uVar5,0,0);
        if ((uVar6 & 1) != 0) {
          uVar5 = *puVar13;
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          FUN_07a125b0(uVar5,0);
        }
        lVar10 = *(long *)(lVar12 + 0x98);
        if (lVar10 != 0) {
          if (DAT_086ef168 == (code *)0x0) {
            DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                               );
          }
          (*DAT_086ef168)(lVar10,1);
          if (*(long *)(lVar12 + 0x98) != 0) {
            uVar5 = FUN_035af3a4(*(long *)(lVar12 + 0x98),0);
            FUN_03639e3c(uVar5,*(undefined8 *)(lVar12 + 0x98));
            if (DAT_086ef688 == (code *)0x0) {
              DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
            }
            fVar14 = (float)(*DAT_086ef688)();
            *(float *)(param_1 + 0x28) = fVar14 + 1.0;
            lVar10 = *(long *)(*(long *)(DAT_083cbb88 + 0xb8) + 0x10);
            if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x30), lVar10 != 0)) {
              uVar5 = FUN_07a11ba4(lVar10,0);
              uVar5 = FUN_06660dbc(DAT_0844c568,uVar5,0);
              FUN_07a0f654(uVar5,0);
LAB_0363caac:
              lVar10 = *(long *)(*(long *)(DAT_083cbb88 + 0xb8) + 0x10);
              if (lVar10 != 0) {
                uVar5 = *(undefined8 *)(lVar10 + 0x30);
                if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                uVar6 = FUN_07a119fc(uVar5,0,0);
                if ((uVar6 & 1) != 0) {
                  FUN_07a0f654(DAT_0844c570,0);
                  lVar12 = FUN_03398a84(DAT_083d3068);
                  *(undefined4 *)(lVar12 + 0x10) = 0x3dcccccd;
                  plVar8 = (long *)(param_1 + 0x18);
                  *plVar8 = lVar12;
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
                  uVar7 = 2;
LAB_0363d018:
                  *(undefined4 *)(param_1 + 0x10) = uVar7;
                  return 1;
                }
                if ((lVar12 != 0) && (lVar10 = *(long *)(lVar12 + 0x48), lVar10 != 0)) {
                  if (DAT_086ef190 == (code *)0x0) {
                    DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
                  }
                  lVar10 = (*DAT_086ef190)(lVar10);
                  if (lVar10 != 0) {
                    lVar10 = FUN_03fa1ab4(lVar10,DAT_0840c548);
                    plVar8 = (long *)(lVar12 + 0xd8);
                    *plVar8 = lVar10;
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
                      lVar10 = *plVar8;
                    }
                    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x150) != 0)) {
                      *(undefined4 *)(*(long *)(lVar10 + 0x150) + 100) = 1;
                      if (*(long *)(lVar12 + 0x20) != 0) {
                        uVar5 = FUN_079b2bd0(*(long *)(lVar12 + 0x20),0x15,0);
                        if (*(long *)(lVar12 + 0x20) != 0) {
                          uVar4 = FUN_079b2bd0(*(long *)(lVar12 + 0x20),0x16,0);
                          lVar12 = *plVar8;
                          if ((lVar12 != 0) && (*(long *)(lVar12 + 0x150) != 0)) {
                            puVar11 = (undefined8 *)(*(long *)(lVar12 + 0x150) + 0x68);
                            *puVar11 = uVar5;
                            if (DAT_08908cd0 == 0) {
                              if (*(long *)(lVar12 + 0x150) == 0) goto LAB_0363d038;
                              *(undefined8 *)(*(long *)(lVar12 + 0x150) + 0x70) = uVar4;
                            }
                            else {
                              puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
                              do {
                                cVar2 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar3) {
                                  *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
                                  cVar2 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar2 != '\0');
                              if ((*plVar8 == 0) ||
                                 (lVar12 = *(long *)(*plVar8 + 0x150), lVar12 == 0))
                              goto LAB_0363d038;
                              puVar11 = (undefined8 *)(lVar12 + 0x70);
                              *puVar11 = uVar4;
                              puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
                              do {
                                cVar2 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar3) {
                                  *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
                                  cVar2 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar2 != '\0');
                              lVar12 = *plVar8;
                              if (lVar12 == 0) goto LAB_0363d038;
                            }
                            FUN_036c633c(lVar12,0);
                            lVar12 = FUN_03398a84(DAT_083d3068);
                            *(undefined4 *)(lVar12 + 0x10) = 0x3f000000;
                            plVar8 = (long *)(param_1 + 0x18);
                            *plVar8 = lVar12;
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
                            uVar7 = 3;
                            goto LAB_0363d018;
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
LAB_0363d038:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


