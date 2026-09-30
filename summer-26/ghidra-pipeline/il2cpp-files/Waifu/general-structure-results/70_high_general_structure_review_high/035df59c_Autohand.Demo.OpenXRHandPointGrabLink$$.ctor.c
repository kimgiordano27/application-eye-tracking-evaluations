/*
FUNCTION_NAME: Autohand.Demo.OpenXRHandPointGrabLink$$.ctor
ENTRY_POINT: 035df59c
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_21;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_4
*/


void Autohand_Demo_OpenXRHandPointGrabLink___ctor
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  long *plVar12;
  long *plVar13;
  ulong in_x9;
  undefined4 *puVar14;
  ulong in_x10;
  undefined8 *puVar15;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar16;
  long lVar17;
  long lVar18;
  long unaff_x25;
  
  puVar1 = (ulong *)(param_1 + 2000 + (in_x9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 | 1L << (in_x10 & 0x3f);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (*(uint *)(unaff_x21 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  puVar15 = (undefined8 *)(unaff_x21 + 0x40);
  *puVar15 = DAT_08431e20;
  puVar1 = (ulong *)(param_1 + 2000 + ((ulong)puVar15 >> 0x12 & 0x7fff) * 8 + 0x464e0);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 | 1L << ((ulong)puVar15 >> 0xc & 0x3f);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar7 = FUN_0666ee4c();
  if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
    FUN_033b9870(DAT_083ca458);
  }
  FUN_079c9c0c(uVar7,0);
  if (*(char *)(unaff_x19 + 100) == '\0') {
    uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar8 = FUN_07a0d2c4(uVar7,0,0);
    if ((uVar8 & 1) == 0) {
LAB_035df864:
      if (*(char *)(unaff_x19 + 100) == '\0') {
        uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar8 = FUN_07a0d2c4(uVar7,0,0);
        if ((uVar8 & 1) != 0) {
          uVar7 = *(undefined8 *)(unaff_x19 + 0x78);
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar8 = FUN_07a0d2c4(uVar7,0,0);
          if ((uVar8 & 1) != 0) {
            if (unaff_x20 == 0) goto LAB_035e11b0;
            pcVar11 = *(code **)(unaff_x25 + 400);
            if (pcVar11 == (code *)0x0) {
              pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
              *(code **)(unaff_x25 + 400) = pcVar11;
            }
            uVar7 = (*pcVar11)();
            lVar9 = *(long *)(unaff_x19 + 0x78);
            if (lVar9 == 0) goto LAB_035e11b0;
            pcVar11 = *(code **)(unaff_x25 + 400);
            if (pcVar11 == (code *)0x0) {
              pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
              *(code **)(unaff_x25 + 400) = pcVar11;
            }
            uVar10 = (*pcVar11)(lVar9);
            if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
              FUN_033b9870(DAT_083cf7d8);
            }
            uVar8 = FUN_07a0d2c4(uVar7,uVar10,0);
            if ((uVar8 & 1) != 0) {
              pcVar11 = *(code **)(unaff_x25 + 400);
              if (pcVar11 == (code *)0x0) {
                pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
                *(code **)(unaff_x25 + 400) = pcVar11;
              }
              uVar7 = (*pcVar11)();
              lVar9 = *(long *)(unaff_x19 + 0x30);
              if (lVar9 == 0) goto LAB_035e11b0;
              pcVar11 = *(code **)(unaff_x25 + 400);
              if (pcVar11 == (code *)0x0) {
                pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
                *(code **)(unaff_x25 + 400) = pcVar11;
              }
              uVar10 = (*pcVar11)(lVar9);
              if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                FUN_033b9870(DAT_083cf7d8);
              }
              uVar8 = FUN_07a0d2c4(uVar7,uVar10,0);
              if ((uVar8 & 1) != 0) {
                pcVar11 = *(code **)(unaff_x25 + 400);
                if (pcVar11 == (code *)0x0) {
                  pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
                  *(code **)(unaff_x25 + 400) = pcVar11;
                }
                lVar9 = (*pcVar11)();
                if (lVar9 == 0) goto LAB_035e11b0;
                if (DAT_086ef258 == (code *)0x0) {
                  DAT_086ef258 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_layer()");
                }
                iVar6 = (*DAT_086ef258)(lVar9);
                if (iVar6 != 2) {
                  if (DAT_086ef188 == (code *)0x0) {
                    DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
                  }
                  lVar9 = (*DAT_086ef188)();
                  lVar17 = *(long *)(unaff_x19 + 0x30);
                  if (lVar17 == 0) goto LAB_035e11b0;
                  if (DAT_086ef188 == (code *)0x0) {
                    DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
                  }
                  uVar7 = (*DAT_086ef188)(lVar17);
                  if (lVar9 == 0) goto LAB_035e11b0;
                  if (DAT_086ef910 == (code *)0x0) {
                    DAT_086ef910 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::IsChildOf(UnityEngine.Transform)"
                                                  );
                  }
                  uVar8 = (*DAT_086ef910)(lVar9,uVar7);
                  if ((uVar8 & 1) == 0) {
                    if (DAT_086f1fe0 == (code *)0x0) {
                      DAT_086f1fe0 = (code *)FUN_033d1b68("UnityEngine.Collider::get_isTrigger()");
                    }
                    uVar8 = (*DAT_086f1fe0)();
                    if ((uVar8 & 1) == 0) {
                      lVar9 = *(long *)(unaff_x19 + 0x68);
                      *(undefined1 *)(unaff_x19 + 100) = 1;
                      if (lVar9 == 0) goto LAB_035e11b0;
                      if (DAT_086f1fd0 == (code *)0x0) {
                        DAT_086f1fd0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Collider::set_enabled(System.Boolean)"
                                                  );
                      }
                      (*DAT_086f1fd0)(lVar9,0);
                      uVar7 = *(undefined8 *)(unaff_x19 + 0x90);
                      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                        FUN_033b9870();
                      }
                      uVar8 = FUN_07a0d2c4(uVar7,0,0);
                      if ((uVar8 & 1) != 0) {
                        lVar9 = *(long *)(unaff_x19 + 0x90);
                        if (lVar9 == 0) goto LAB_035e11b0;
                        if (DAT_086ef278 == (code *)0x0) {
                          DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                        }
                        (*DAT_086ef278)(lVar9,0);
                      }
                      lVar9 = *(long *)(unaff_x19 + 0x20);
                      if (lVar9 == 0) goto LAB_035e11b0;
                      if (*(int *)(lVar9 + 0x100) == 1) {
                        uVar7 = *(undefined8 *)(lVar9 + 200);
                        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                          FUN_033b9870();
                        }
                        uVar8 = FUN_07a0d2c4(uVar7,0,0);
                        if ((uVar8 & 1) != 0) {
                          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_035e11b0;
                          uVar7 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 200);
                          if (DAT_086ef188 == (code *)0x0) {
                            DAT_086ef188 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                          }
                          lVar9 = (*DAT_086ef188)();
                          if (lVar9 == 0) goto LAB_035e11b0;
                          uVar10 = FUN_07a18d2c(lVar9,0);
                          if (DAT_086d7c53 == '\0') {
                            FUN_0335b6c8(&DAT_083d0300,1);
                            DataMemoryBarrier(2,3);
                            DAT_086d7c53 = '\x01';
                          }
                          lVar9 = FUN_035dcb1c(uVar10,uVar7);
                          plVar12 = (long *)(unaff_x19 + 0xa8);
                          *plVar12 = lVar9;
                          if (DAT_08908cd0 != 0) {
                            puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
                            do {
                              cVar4 = '\x01';
                              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar5) {
                                *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
                                cVar4 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar4 != '\0');
                            lVar9 = *plVar12;
                          }
                          if (lVar9 == 0) goto LAB_035e11b0;
                          if (DAT_086ef250 == (code *)0x0) {
                            DAT_086ef250 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                          }
                          lVar9 = (*DAT_086ef250)(lVar9);
                          if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
                            FUN_033b9870(DAT_083cb1e8);
                          }
                          lVar17 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
                          if (lVar17 == 0) goto LAB_035e11b0;
                          if (DAT_086ef250 == (code *)0x0) {
                            DAT_086ef250 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                          }
                          uVar7 = (*DAT_086ef250)(lVar17);
                          if (lVar9 == 0) goto LAB_035e11b0;
                          if (DAT_086ef840 == (code *)0x0) {
                            DAT_086ef840 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                  );
                          }
                          (*DAT_086ef840)(lVar9,uVar7,1);
                        }
                      }
                      FUN_035e11c0();
                      uVar7 = FUN_03c89df4();
                      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                        FUN_033b9870(DAT_083cf7d8);
                      }
                      uVar8 = FUN_07a11b14(uVar7,0);
                      if ((uVar8 & 1) == 0) {
                        uVar7 = FUN_03c89df4();
                        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                          FUN_033b9870(DAT_083cf7d8);
                        }
                        uVar8 = FUN_07a11b14(uVar7,0);
                        if ((uVar8 & 1) == 0) goto LAB_035e02e8;
                      }
                      pcVar11 = *(code **)(unaff_x25 + 400);
                      if (pcVar11 == (code *)0x0) {
                        pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
                        *(code **)(unaff_x25 + 400) = pcVar11;
                      }
                      (*pcVar11)();
                      FUN_035dc68c();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar7 = *(undefined8 *)(unaff_x19 + 0x78);
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar8 = FUN_07a0d2c4(uVar7,0,0);
      if ((uVar8 & 1) == 0) goto LAB_035df864;
      if (unaff_x20 == 0) goto LAB_035e11b0;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar9 = (*DAT_086ef188)();
      lVar17 = *(long *)(unaff_x19 + 0x78);
      if (lVar17 == 0) goto LAB_035e11b0;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      uVar7 = (*DAT_086ef188)(lVar17);
      if (lVar9 == 0) goto LAB_035e11b0;
      if (DAT_086ef910 == (code *)0x0) {
        DAT_086ef910 = (code *)FUN_033d1b68(
                                           "UnityEngine.Transform::IsChildOf(UnityEngine.Transform)"
                                           );
      }
      uVar8 = (*DAT_086ef910)(lVar9,uVar7);
      if ((uVar8 & 1) == 0) goto LAB_035df864;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar9 = (*DAT_086ef188)();
      lVar17 = *(long *)(unaff_x19 + 0x30);
      if (lVar17 == 0) goto LAB_035e11b0;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      uVar7 = (*DAT_086ef188)(lVar17);
      if (lVar9 == 0) goto LAB_035e11b0;
      if (DAT_086ef910 == (code *)0x0) {
        DAT_086ef910 = (code *)FUN_033d1b68(
                                           "UnityEngine.Transform::IsChildOf(UnityEngine.Transform)"
                                           );
      }
      uVar8 = (*DAT_086ef910)(lVar9,uVar7);
      if ((uVar8 & 1) != 0) goto LAB_035df864;
      pcVar11 = *(code **)(unaff_x25 + 400);
      if (pcVar11 == (code *)0x0) {
        pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x25 + 400) = pcVar11;
      }
      lVar9 = (*pcVar11)();
      if (lVar9 == 0) goto LAB_035e11b0;
      if (DAT_086ef258 == (code *)0x0) {
        DAT_086ef258 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_layer()");
      }
      iVar6 = (*DAT_086ef258)(lVar9);
      if (iVar6 == 2) goto LAB_035df864;
      if (DAT_086f1fe0 == (code *)0x0) {
        DAT_086f1fe0 = (code *)FUN_033d1b68("UnityEngine.Collider::get_isTrigger()");
      }
      uVar8 = (*DAT_086f1fe0)();
      if ((uVar8 & 1) != 0) goto LAB_035df864;
      plVar12 = (long *)(unaff_x19 + 0x20);
      lVar9 = *plVar12;
      if (lVar9 == 0) goto LAB_035e11b0;
      if (*(int *)(lVar9 + 0x100) == 1) {
        uVar7 = *(undefined8 *)(lVar9 + 200);
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar8 = FUN_07a0d2c4(uVar7,0,0);
        if ((uVar8 & 1) != 0) {
          lVar9 = *plVar12;
          if (lVar9 == 0) goto LAB_035e11b0;
          if (*(int *)(lVar9 + 0x104) == 1) {
            uVar7 = *(undefined8 *)(lVar9 + 200);
            if (DAT_086ef188 == (code *)0x0) {
              DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            }
            lVar9 = (*DAT_086ef188)();
            if (lVar9 == 0) goto LAB_035e11b0;
            uVar10 = FUN_07a18d2c(lVar9,0);
            if (DAT_086d7c53 == '\0') {
              FUN_0335b6c8(&DAT_083d0300,1);
              DataMemoryBarrier(2,3);
              DAT_086d7c53 = '\x01';
            }
            if (*plVar12 == 0) goto LAB_035e11b0;
            puVar14 = *(undefined4 **)(DAT_083d0300 + 0xb8);
            lVar9 = FUN_035dcb1c(uVar10,param_3,param_4,*puVar14,puVar14[1],puVar14[2],puVar14[3],
                                 *(undefined4 *)(*plVar12 + 0x84),uVar7);
            plVar13 = (long *)(unaff_x19 + 0xa8);
            *plVar13 = lVar9;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)plVar13 >> 0x12 & 0x7fff);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              lVar9 = *plVar13;
            }
            if (lVar9 == 0) goto LAB_035e11b0;
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            lVar9 = (*DAT_086ef250)(lVar9);
            if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
              FUN_033b9870(DAT_083cb1e8);
            }
            lVar17 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
            if (lVar17 == 0) goto LAB_035e11b0;
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            uVar7 = (*DAT_086ef250)(lVar17);
            if (lVar9 == 0) goto LAB_035e11b0;
            if (DAT_086ef840 == (code *)0x0) {
              DAT_086ef840 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                 );
            }
            (*DAT_086ef840)(lVar9,uVar7,1);
          }
        }
      }
      FUN_035e11c0();
      if (*(int *)(unaff_x19 + 0x88) != 1) goto LAB_035e0200;
      uVar7 = *(undefined8 *)(unaff_x19 + 0x38);
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar8 = FUN_07a0d2c4(uVar7,0,0);
      if ((uVar8 & 1) == 0) {
LAB_035dffc0:
        if (*(int *)(unaff_x19 + 0x88) != 1) goto LAB_035e0200;
        uVar7 = *(undefined8 *)(unaff_x19 + 0x38);
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar8 = FUN_07a0d2c4(uVar7,0,0);
        if ((uVar8 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_035e11b0;
          uVar7 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0xb0);
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar8 = FUN_07a0d2c4(uVar7,0,0);
          if ((uVar8 & 1) != 0) {
            uVar7 = FUN_03c89df4();
            if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
              FUN_033b9870(DAT_083cf7d8);
            }
            uVar8 = FUN_07a11b14(uVar7,0);
            if ((uVar8 & 1) == 0) goto LAB_035dff04;
          }
        }
        iVar6 = *(int *)(unaff_x19 + 0x88);
        if (iVar6 == 1) {
          uVar7 = *(undefined8 *)(unaff_x19 + 0x38);
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar8 = FUN_07a0d2c4(uVar7,0,0);
          if ((uVar8 & 1) == 0) goto LAB_035e0200;
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_035e11b0;
          uVar7 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0xb0);
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar8 = FUN_07a0d2c4(uVar7,0,0);
          if ((uVar8 & 1) == 0) {
LAB_035e0200:
            iVar6 = *(int *)(unaff_x19 + 0x88);
            goto LAB_035e0204;
          }
          uVar7 = FUN_03c89df4();
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870(DAT_083cf7d8);
          }
          uVar8 = FUN_07a11b14(uVar7,0);
          if ((uVar8 & 1) == 0) goto LAB_035e0200;
          lVar9 = *(long *)(unaff_x19 + 0x38);
          if (DAT_086ef188 == (code *)0x0) {
            DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          }
          uVar7 = (*DAT_086ef188)();
          if (lVar9 == 0) goto LAB_035e11b0;
          *(undefined8 *)(lVar9 + 0x4b0) = uVar7;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + (lVar9 + 0x4b0U >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << (lVar9 + 0x4b0U >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar9 = *plVar12;
          if (lVar9 == 0) goto LAB_035e11b0;
          if (*(int *)(lVar9 + 0xe8) != 0) goto LAB_035e0250;
          if (*(int *)(lVar9 + 0xec) != 1) {
            if (*(int *)(lVar9 + 0xec) == 0) {
              lVar9 = FUN_03c89df4();
              lVar17 = *(long *)(unaff_x19 + 0x30);
              if (lVar17 == 0) goto LAB_035e11b0;
              uVar2 = *(undefined4 *)(unaff_x19 + 0x28);
              if (DAT_086ef188 == (code *)0x0) {
                DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
              }
              uVar7 = (*DAT_086ef188)(lVar17);
              if ((*(long *)(unaff_x19 + 0x30) == 0) || (lVar9 == 0)) goto LAB_035e11b0;
              FUN_035afb18(lVar9,uVar2,0x100000001,uVar7,
                           *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x4a4),
                           *(undefined1 *)(unaff_x19 + 0x81),0);
              goto LAB_035dff84;
            }
            goto LAB_035e0250;
          }
          lVar9 = FUN_03c89df4();
          if ((*plVar12 == 0) || (lVar17 = *(long *)(unaff_x19 + 0x30), lVar17 == 0))
          goto LAB_035e11b0;
          uVar2 = *(undefined4 *)(*plVar12 + 0x44);
          if (DAT_086ef188 == (code *)0x0) {
            DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          }
          uVar7 = (*DAT_086ef188)(lVar17);
          if ((*(long *)(unaff_x19 + 0x30) == 0) || (lVar9 == 0)) goto LAB_035e11b0;
          FUN_035afb18(lVar9,uVar2,0x100000001,uVar7,
                       *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x4a4),0,0);
          if ((*(long *)(unaff_x19 + 0x30) == 0) ||
             (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x500), lVar9 == 0))
          goto LAB_035e11b0;
          FUN_07a22574(lVar9,0);
          lVar9 = *plVar12;
          if (lVar9 == 0) goto LAB_035e11b0;
          if (*(int *)(lVar9 + 0x114) == 0) {
            if ((*(long *)(unaff_x19 + 0x38) == 0) ||
               (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x160), lVar17 == 0))
            goto LAB_035e11b0;
            uVar8 = FUN_04ab1208(lVar17,*(undefined8 *)(lVar9 + 0x18),DAT_083f44a8);
            if ((uVar8 & 1) != 0) goto LAB_035e0f14;
            if (*plVar12 == 0) goto LAB_035e11b0;
            uVar8 = FUN_0666e380(*(undefined8 *)(*plVar12 + 0x18),
                                 **(undefined8 **)(DAT_083d16d8 + 0xb8));
            if ((uVar8 & 1) != 0) goto LAB_035e0f14;
          }
          else {
LAB_035e0f14:
            if (*plVar12 == 0) goto LAB_035e11b0;
            if (*(int *)(*plVar12 + 0x114) != 1) goto LAB_035e0250;
          }
          if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_035e11b0;
          uVar7 = *(undefined8 *)(unaff_x19 + 200);
          uVar10 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x78),0);
          if (DAT_086d7c53 == '\0') {
            FUN_0335b6c8(&DAT_083d0300,1);
            DataMemoryBarrier(2,3);
            DAT_086d7c53 = '\x01';
          }
          puVar14 = *(undefined4 **)(DAT_083d0300 + 0xb8);
          lVar9 = FUN_035dc5a8(uVar10,param_3,param_4,*puVar14,puVar14[1],puVar14[2],puVar14[3],
                               uVar7);
          if (lVar9 == 0) goto LAB_035e11b0;
          if (DAT_086ef250 == (code *)0x0) {
            DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
          }
          lVar17 = (*DAT_086ef250)(lVar9);
          if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
            FUN_033b9870(DAT_083cb1e8);
          }
          lVar16 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
          if (lVar16 == 0) goto LAB_035e11b0;
          if (DAT_086ef250 == (code *)0x0) {
            DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
          }
          uVar7 = (*DAT_086ef250)(lVar16);
          if (lVar17 == 0) goto LAB_035e11b0;
          if (DAT_086ef840 == (code *)0x0) {
            DAT_086ef840 = (code *)FUN_033d1b68(
                                               "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                               );
          }
          (*DAT_086ef840)(lVar17,uVar7,1);
          lVar17 = FUN_03fa1bc8(lVar9,DAT_0840cb20);
          lVar16 = *plVar12;
          if (((lVar16 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) || (lVar17 == 0))
          goto LAB_035e11b0;
          FUN_035c4294(*(undefined4 *)(lVar16 + 0x4c),(float)*(int *)(lVar16 + 0x54),
                       *(undefined4 *)(lVar16 + 0x88),lVar17,*(undefined8 *)(lVar16 + 0x18),
                       *(undefined4 *)(lVar16 + 0x34),*(undefined8 *)(lVar16 + 0xb8),
                       *(undefined8 *)(lVar16 + 0xc0),0,*(undefined8 *)(unaff_x19 + 0x48),
                       *(undefined8 *)(unaff_x19 + 0x38));
          lVar9 = FUN_03fa1bc8(lVar9,DAT_0840cb20);
          uVar7 = FUN_03c89df4();
          if (lVar9 == 0) goto LAB_035e11b0;
          puVar15 = (undefined8 *)(lVar9 + 0x20);
          *puVar15 = uVar7;
          iVar6 = DAT_08908cd0;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar15 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar15 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar17 = DAT_083f4490;
          if (((*(long *)(unaff_x19 + 0x38) == 0) || (*plVar12 == 0)) ||
             (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x160), lVar9 == 0))
          goto LAB_035e11b0;
          uVar7 = *(undefined8 *)(*plVar12 + 0x18);
          lVar16 = *(long *)(lVar9 + 0x10);
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_035e11b0;
          uVar3 = *(uint *)(lVar9 + 0x18);
          if (uVar3 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar3 + 1;
            puVar15 = (undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
            *puVar15 = uVar7;
            if (iVar6 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)puVar15 >> 0x12 & 0x7fff);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar15 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            goto LAB_035e0250;
          }
          lVar17 = *(long *)(lVar17 + 0x20);
LAB_035e0cc4:
          FUN_04ab0e54(lVar9,uVar7,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x70));
        }
        else {
LAB_035e0204:
          if (iVar6 == 2) {
            lVar9 = *plVar12;
            if (lVar9 == 0) goto LAB_035e11b0;
            if (*(int *)(lVar9 + 0xe8) == 0) {
              if (*(int *)(lVar9 + 0xec) == 1) {
                FUN_035e1690();
                if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_035e11b0;
                lVar9 = FUN_03c89df4(*(long *)(unaff_x19 + 0x40),DAT_08405880);
                lVar17 = *plVar12;
                if (lVar17 == 0) goto LAB_035e11b0;
                if (*(int *)(lVar17 + 0x114) == 0) {
                  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_035e11b0;
                  uVar8 = FUN_04ab1208(*(long *)(lVar9 + 0x28),*(undefined8 *)(lVar17 + 0x18),
                                       DAT_083f44a8);
                  if ((uVar8 & 1) != 0) goto LAB_035e0774;
                  if (*plVar12 == 0) goto LAB_035e11b0;
                  uVar8 = FUN_0666e380(*(undefined8 *)(*plVar12 + 0x18),
                                       **(undefined8 **)(DAT_083d16d8 + 0xb8));
                  if ((uVar8 & 1) != 0) goto LAB_035e0774;
                }
                else {
LAB_035e0774:
                  if (*plVar12 == 0) goto LAB_035e11b0;
                  if (*(int *)(*plVar12 + 0x114) != 1) goto LAB_035e0250;
                }
                if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_035e11b0;
                uVar7 = *(undefined8 *)(unaff_x19 + 200);
                uVar10 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x78),0);
                if (DAT_086d7c53 == '\0') {
                  FUN_0335b6c8(&DAT_083d0300,1);
                  DataMemoryBarrier(2,3);
                  DAT_086d7c53 = '\x01';
                }
                puVar14 = *(undefined4 **)(DAT_083d0300 + 0xb8);
                lVar17 = FUN_035dc5a8(uVar10,param_3,param_4,*puVar14,puVar14[1],puVar14[2],
                                      puVar14[3],uVar7);
                if (lVar17 == 0) goto LAB_035e11b0;
                if (DAT_086ef250 == (code *)0x0) {
                  DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
                }
                lVar16 = (*DAT_086ef250)(lVar17);
                if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
                  FUN_033b9870(DAT_083cb1e8);
                }
                lVar18 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
                if (lVar18 == 0) goto LAB_035e11b0;
                if (DAT_086ef250 == (code *)0x0) {
                  DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
                }
                uVar7 = (*DAT_086ef250)(lVar18);
                if (lVar16 == 0) goto LAB_035e11b0;
                if (DAT_086ef840 == (code *)0x0) {
                  DAT_086ef840 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                  );
                }
                (*DAT_086ef840)(lVar16,uVar7,1);
                lVar17 = FUN_03fa1bc8(lVar17,DAT_0840cb20);
                lVar16 = *plVar12;
                if (((((lVar16 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) || (lVar17 == 0)) ||
                    ((FUN_035c4294(*(undefined4 *)(lVar16 + 0x4c),(float)*(int *)(lVar16 + 0x54),
                                   *(undefined4 *)(lVar16 + 0x88),lVar17,
                                   *(undefined8 *)(lVar16 + 0x18),*(undefined4 *)(lVar16 + 0x34),
                                   *(undefined8 *)(lVar16 + 0xb8),*(undefined8 *)(lVar16 + 0xc0),
                                   lVar9,*(undefined8 *)(unaff_x19 + 0x48),
                                   *(undefined8 *)(unaff_x19 + 0x38)), lVar17 = DAT_083f4490,
                     lVar9 == 0 || (*plVar12 == 0)))) ||
                   (lVar9 = *(long *)(lVar9 + 0x28), lVar9 == 0)) goto LAB_035e11b0;
                uVar7 = *(undefined8 *)(*plVar12 + 0x18);
                lVar16 = *(long *)(lVar9 + 0x10);
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar16 == 0) goto LAB_035e11b0;
                uVar3 = *(uint *)(lVar9 + 0x18);
                if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_035e0cc0;
                *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                puVar15 = (undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
                *puVar15 = uVar7;
                if (DAT_08908cd0 != 0) {
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar15 >> 0x12 & 0x7fff);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar15 >> 0xc & 0x3f);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
              }
              else if (*(int *)(lVar9 + 0xec) == 0) {
                FUN_035e1690();
              }
            }
          }
          else if (iVar6 == 0) {
            lVar9 = *plVar12;
            if (lVar9 == 0) goto LAB_035e11b0;
            if (*(int *)(lVar9 + 0xe8) == 0) {
              if (*(int *)(lVar9 + 0xec) == 1) {
                FUN_035e1488();
                if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_035e11b0;
                if (*(int *)(*(long *)(unaff_x19 + 0x20) + 0x114) == 0) {
                  if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                      (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0xdb0), lVar9 == 0)) ||
                     ((lVar9 = FUN_03c89df4(lVar9,DAT_08405888), lVar9 == 0 ||
                      ((*plVar12 == 0 || (*(long *)(lVar9 + 0x20) == 0)))))) goto LAB_035e11b0;
                  uVar8 = FUN_04ab1208(*(long *)(lVar9 + 0x20),*(undefined8 *)(*plVar12 + 0x18),
                                       DAT_083f44a8);
                  if ((uVar8 & 1) != 0) goto LAB_035e04a4;
                  if (*plVar12 == 0) goto LAB_035e11b0;
                  uVar8 = FUN_0666e380(*(undefined8 *)(*plVar12 + 0x18),
                                       **(undefined8 **)(DAT_083d16d8 + 0xb8));
                  if ((uVar8 & 1) != 0) goto LAB_035e04a4;
                }
                else {
LAB_035e04a4:
                  if (*plVar12 == 0) goto LAB_035e11b0;
                  if (*(int *)(*plVar12 + 0x114) != 1) goto LAB_035e0250;
                }
                if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_035e11b0;
                uVar7 = *(undefined8 *)(unaff_x19 + 200);
                uVar10 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x78),0);
                if (DAT_086d7c53 == '\0') {
                  FUN_0335b6c8(&DAT_083d0300,1);
                  DataMemoryBarrier(2,3);
                  DAT_086d7c53 = '\x01';
                }
                puVar14 = *(undefined4 **)(DAT_083d0300 + 0xb8);
                lVar9 = FUN_035dc5a8(uVar10,param_3,param_4,*puVar14,puVar14[1],puVar14[2],
                                     puVar14[3],uVar7);
                if (lVar9 == 0) goto LAB_035e11b0;
                if (DAT_086ef250 == (code *)0x0) {
                  DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
                }
                lVar17 = (*DAT_086ef250)(lVar9);
                if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
                  FUN_033b9870(DAT_083cb1e8);
                }
                lVar16 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
                if (lVar16 == 0) goto LAB_035e11b0;
                if (DAT_086ef250 == (code *)0x0) {
                  DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
                }
                uVar7 = (*DAT_086ef250)(lVar16);
                if (lVar17 == 0) goto LAB_035e11b0;
                if (DAT_086ef840 == (code *)0x0) {
                  DAT_086ef840 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                  );
                }
                (*DAT_086ef840)(lVar17,uVar7,1);
                lVar9 = FUN_03fa1bc8(lVar9,DAT_0840cb20);
                lVar17 = *plVar12;
                if (((lVar17 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) || (lVar9 == 0))
                goto LAB_035e11b0;
                FUN_035c4294(*(undefined4 *)(lVar17 + 0x4c),(float)*(int *)(lVar17 + 0x54),
                             *(undefined4 *)(lVar17 + 0x88),lVar9,*(undefined8 *)(lVar17 + 0x18),
                             *(undefined4 *)(lVar17 + 0x34),*(undefined8 *)(lVar17 + 0xb8),
                             *(undefined8 *)(lVar17 + 0xc0),0,*(undefined8 *)(unaff_x19 + 0x48),
                             *(undefined8 *)(unaff_x19 + 0x38));
                if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                    (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0xdb0), lVar9 == 0)) ||
                   ((lVar9 = FUN_03c89df4(lVar9,DAT_08405888), lVar17 = DAT_083f4490, lVar9 == 0 ||
                    ((*plVar12 == 0 || (lVar9 = *(long *)(lVar9 + 0x20), lVar9 == 0))))))
                goto LAB_035e11b0;
                uVar7 = *(undefined8 *)(*plVar12 + 0x18);
                lVar16 = *(long *)(lVar9 + 0x10);
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar16 == 0) goto LAB_035e11b0;
                uVar3 = *(uint *)(lVar9 + 0x18);
                if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_035e0cc0;
                *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                puVar15 = (undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
                *puVar15 = uVar7;
                if (DAT_08908cd0 != 0) {
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar15 >> 0x12 & 0x7fff);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar15 >> 0xc & 0x3f);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
              }
              else if (*(int *)(lVar9 + 0xec) == 0) {
                FUN_035e1488();
              }
            }
          }
        }
      }
      else {
        if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_035e11b0;
        uVar7 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0xb0);
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar8 = FUN_07a119fc(uVar7,0,0);
        if ((uVar8 & 1) == 0) goto LAB_035dffc0;
LAB_035dff04:
        lVar9 = *plVar12;
        if (lVar9 == 0) goto LAB_035e11b0;
        if (*(int *)(lVar9 + 0xe8) == 0) {
          if (*(int *)(lVar9 + 0xec) == 1) {
            lVar17 = *(long *)(unaff_x19 + 0x30);
            if (lVar17 == 0) goto LAB_035e11b0;
            lVar16 = *(long *)(unaff_x19 + 0x38);
            uVar2 = *(undefined4 *)(lVar9 + 0x44);
            if (DAT_086ef188 == (code *)0x0) {
              DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            }
            uVar7 = (*DAT_086ef188)(lVar17);
            if ((*(long *)(unaff_x19 + 0x30) == 0) || (lVar16 == 0)) goto LAB_035e11b0;
            FUN_035afce0(lVar16,uVar2,0x100000001,uVar7,
                         *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x4a4),0,0);
            if ((*(long *)(unaff_x19 + 0x30) == 0) ||
               (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x500), lVar9 == 0))
            goto LAB_035e11b0;
            FUN_07a22574(lVar9,0);
            lVar9 = *plVar12;
            if (lVar9 == 0) goto LAB_035e11b0;
            if (*(int *)(lVar9 + 0x114) == 0) {
              if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                 (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x160), lVar17 == 0))
              goto LAB_035e11b0;
              uVar8 = FUN_04ab1208(lVar17,*(undefined8 *)(lVar9 + 0x18),DAT_083f44a8);
              if ((uVar8 & 1) != 0) goto LAB_035e0a80;
              if (*plVar12 == 0) goto LAB_035e11b0;
              uVar8 = FUN_0666e380(*(undefined8 *)(*plVar12 + 0x18),
                                   **(undefined8 **)(DAT_083d16d8 + 0xb8));
              if ((uVar8 & 1) != 0) goto LAB_035e0a80;
            }
            else {
LAB_035e0a80:
              if (*plVar12 == 0) goto LAB_035e11b0;
              if (*(int *)(*plVar12 + 0x114) != 1) goto LAB_035e0250;
            }
            if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_035e11b0;
            uVar7 = *(undefined8 *)(unaff_x19 + 200);
            uVar10 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x78),0);
            if (DAT_086d7c53 == '\0') {
              FUN_0335b6c8(&DAT_083d0300,1);
              DataMemoryBarrier(2,3);
              DAT_086d7c53 = '\x01';
            }
            puVar14 = *(undefined4 **)(DAT_083d0300 + 0xb8);
            lVar9 = FUN_035dc5a8(uVar10,param_3,param_4,*puVar14,puVar14[1],puVar14[2],puVar14[3],
                                 uVar7);
            if (lVar9 == 0) goto LAB_035e11b0;
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            lVar17 = (*DAT_086ef250)(lVar9);
            if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
              FUN_033b9870(DAT_083cb1e8);
            }
            lVar16 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
            if (lVar16 == 0) goto LAB_035e11b0;
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            uVar7 = (*DAT_086ef250)(lVar16);
            if (lVar17 == 0) goto LAB_035e11b0;
            if (DAT_086ef840 == (code *)0x0) {
              DAT_086ef840 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                 );
            }
            (*DAT_086ef840)(lVar17,uVar7,1);
            lVar9 = FUN_03fa1bc8(lVar9,DAT_0840cb20);
            lVar17 = *plVar12;
            if (((lVar17 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) || (lVar9 == 0))
            goto LAB_035e11b0;
            FUN_035c4294(*(undefined4 *)(lVar17 + 0x4c),(float)*(int *)(lVar17 + 0x54),
                         *(undefined4 *)(lVar17 + 0x88),lVar9,*(undefined8 *)(lVar17 + 0x18),
                         *(undefined4 *)(lVar17 + 0x34),*(undefined8 *)(lVar17 + 0xb8),
                         *(undefined8 *)(lVar17 + 0xc0),0,*(undefined8 *)(unaff_x19 + 0x48),
                         *(undefined8 *)(unaff_x19 + 0x38));
            lVar17 = DAT_083f4490;
            if (((*(long *)(unaff_x19 + 0x38) == 0) || (*plVar12 == 0)) ||
               (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x160), lVar9 == 0))
            goto LAB_035e11b0;
            uVar7 = *(undefined8 *)(*plVar12 + 0x18);
            lVar16 = *(long *)(lVar9 + 0x10);
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar16 == 0) goto LAB_035e11b0;
            uVar3 = *(uint *)(lVar9 + 0x18);
            if (uVar3 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar3 + 1;
              puVar15 = (undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
              *puVar15 = uVar7;
              if (DAT_08908cd0 != 0) {
                puVar1 = &DAT_0873ccb0 + ((ulong)puVar15 >> 0x12 & 0x7fff);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar15 >> 0xc & 0x3f);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              goto LAB_035e0250;
            }
LAB_035e0cc0:
            lVar17 = *(long *)(lVar17 + 0x20);
            goto LAB_035e0cc4;
          }
          if (*(int *)(lVar9 + 0xec) == 0) {
            lVar9 = *(long *)(unaff_x19 + 0x30);
            if (lVar9 == 0) goto LAB_035e11b0;
            lVar17 = *(long *)(unaff_x19 + 0x38);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x28);
            if (DAT_086ef188 == (code *)0x0) {
              DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            }
            uVar7 = (*DAT_086ef188)(lVar9);
            if ((*(long *)(unaff_x19 + 0x30) == 0) || (lVar17 == 0)) goto LAB_035e11b0;
            FUN_035afce0(lVar17,uVar2,0x100000001,uVar7,
                         *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x4a4),
                         *(undefined1 *)(unaff_x19 + 0x81),0);
LAB_035dff84:
            if ((*(long *)(unaff_x19 + 0x30) == 0) ||
               (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x500), lVar9 == 0))
            goto LAB_035e11b0;
            FUN_07a22574(lVar9,0);
            if (*(char *)(unaff_x19 + 0x81) != '\0') {
              if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                 (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x560), lVar9 == 0))
              goto LAB_035e11b0;
              FUN_07a22574(lVar9,0);
            }
          }
        }
      }
LAB_035e0250:
      uVar7 = *(undefined8 *)(unaff_x19 + 0x90);
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar8 = FUN_07a0d2c4(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        lVar9 = *(long *)(unaff_x19 + 0x90);
        if (lVar9 == 0) goto LAB_035e11b0;
        if (DAT_086ef278 == (code *)0x0) {
          DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
        (*DAT_086ef278)(lVar9,0);
      }
      lVar9 = *(long *)(unaff_x19 + 0x68);
      *(undefined1 *)(unaff_x19 + 100) = 1;
      if (lVar9 == 0) goto LAB_035e11b0;
      if (DAT_086f1fd0 == (code *)0x0) {
        DAT_086f1fd0 = (code *)FUN_033d1b68("UnityEngine.Collider::set_enabled(System.Boolean)");
      }
      (*DAT_086f1fd0)(lVar9,0);
LAB_035e02e8:
      FUN_035e182c();
    }
  }
  pcVar11 = *(code **)(unaff_x25 + 400);
  if (pcVar11 == (code *)0x0) {
    pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    *(code **)(unaff_x25 + 400) = pcVar11;
  }
  lVar9 = (*pcVar11)();
  if (lVar9 != 0) {
    if (DAT_086ef280 == (code *)0x0) {
      DAT_086ef280 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeSelf()");
    }
    uVar8 = (*DAT_086ef280)(lVar9);
    if ((uVar8 & 1) == 0) {
      return;
    }
    lVar9 = *(long *)(unaff_x19 + 0xf8);
    if (lVar9 != 0) {
      if (DAT_086f1e98 == (code *)0x0) {
        DAT_086f1e98 = (code *)FUN_033d1b68(
                                           "UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)"
                                           );
      }
      (*DAT_086f1e98)(lVar9,0);
      lVar9 = *(long *)(unaff_x19 + 0xf8);
      if (lVar9 != 0) {
        if (DAT_086f1e78 == (code *)0x0) {
          DAT_086f1e78 = (code *)FUN_033d1b68(
                                             "UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)"
                                             );
        }
                    /* WARNING: Could not recover jumptable at 0x035e03d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_086f1e78)(lVar9,0);
        return;
      }
    }
  }
LAB_035e11b0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


