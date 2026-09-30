/*
FUNCTION_NAME: Autohand.Demo.OpenXRHandPointGrabLink$$OnSelect
ENTRY_POINT: 035df55c
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_21;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_6
*/


void Autohand_Demo_OpenXRHandPointGrabLink__OnSelect
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,code *param_4)

{
  ulong *puVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar16;
  long unaff_x22;
  long lVar17;
  long lVar18;
  long unaff_x25;
  
  *(code **)(unaff_x25 + 400) = param_4;
  lVar7 = (*param_4)();
  if (lVar7 == 0) goto LAB_035e11b0;
  uVar8 = FUN_07a11ba4(lVar7,0);
  if (*(uint *)(unaff_x21 + 0x18) < 4) {
LAB_035e11bc:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  puVar14 = (undefined8 *)(unaff_x21 + 0x38);
  *puVar14 = uVar8;
  if (*(int *)(unaff_x22 + 0xcd0) == 0) {
    if (*(uint *)(unaff_x21 + 0x18) < 5) goto LAB_035e11bc;
    *(undefined8 *)(unaff_x21 + 0x40) = DAT_08431e20;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar14 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar14 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (*(uint *)(unaff_x21 + 0x18) < 5) goto LAB_035e11bc;
    puVar14 = (undefined8 *)(unaff_x21 + 0x40);
    *puVar14 = DAT_08431e20;
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar14 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar14 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar8 = FUN_0666ee4c();
  if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
    FUN_033b9870(DAT_083ca458);
  }
  FUN_079c9c0c(uVar8,0);
  if (*(char *)(unaff_x19 + 100) == '\0') {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar9 = FUN_07a0d2c4(uVar8,0,0);
    if ((uVar9 & 1) == 0) {
LAB_035df864:
      if (*(char *)(unaff_x19 + 100) == '\0') {
        uVar8 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar9 = FUN_07a0d2c4(uVar8,0,0);
        if ((uVar9 & 1) != 0) {
          uVar8 = *(undefined8 *)(unaff_x19 + 0x78);
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar9 = FUN_07a0d2c4(uVar8,0,0);
          if ((uVar9 & 1) != 0) {
            if (unaff_x20 == 0) goto LAB_035e11b0;
            pcVar11 = *(code **)(unaff_x25 + 400);
            if (pcVar11 == (code *)0x0) {
              pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
              *(code **)(unaff_x25 + 400) = pcVar11;
            }
            uVar8 = (*pcVar11)();
            lVar7 = *(long *)(unaff_x19 + 0x78);
            if (lVar7 == 0) goto LAB_035e11b0;
            pcVar11 = *(code **)(unaff_x25 + 400);
            if (pcVar11 == (code *)0x0) {
              pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
              *(code **)(unaff_x25 + 400) = pcVar11;
            }
            uVar10 = (*pcVar11)(lVar7);
            if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
              FUN_033b9870(DAT_083cf7d8);
            }
            uVar9 = FUN_07a0d2c4(uVar8,uVar10,0);
            if ((uVar9 & 1) != 0) {
              pcVar11 = *(code **)(unaff_x25 + 400);
              if (pcVar11 == (code *)0x0) {
                pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
                *(code **)(unaff_x25 + 400) = pcVar11;
              }
              uVar8 = (*pcVar11)();
              lVar7 = *(long *)(unaff_x19 + 0x30);
              if (lVar7 == 0) goto LAB_035e11b0;
              pcVar11 = *(code **)(unaff_x25 + 400);
              if (pcVar11 == (code *)0x0) {
                pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
                *(code **)(unaff_x25 + 400) = pcVar11;
              }
              uVar10 = (*pcVar11)(lVar7);
              if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                FUN_033b9870(DAT_083cf7d8);
              }
              uVar9 = FUN_07a0d2c4(uVar8,uVar10,0);
              if ((uVar9 & 1) != 0) {
                pcVar11 = *(code **)(unaff_x25 + 400);
                if (pcVar11 == (code *)0x0) {
                  pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
                  *(code **)(unaff_x25 + 400) = pcVar11;
                }
                lVar7 = (*pcVar11)();
                if (lVar7 == 0) goto LAB_035e11b0;
                if (DAT_086ef258 == (code *)0x0) {
                  DAT_086ef258 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_layer()");
                }
                iVar6 = (*DAT_086ef258)(lVar7);
                if (iVar6 != 2) {
                  if (DAT_086ef188 == (code *)0x0) {
                    DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
                  }
                  lVar7 = (*DAT_086ef188)();
                  lVar17 = *(long *)(unaff_x19 + 0x30);
                  if (lVar17 == 0) goto LAB_035e11b0;
                  if (DAT_086ef188 == (code *)0x0) {
                    DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
                  }
                  uVar8 = (*DAT_086ef188)(lVar17);
                  if (lVar7 == 0) goto LAB_035e11b0;
                  if (DAT_086ef910 == (code *)0x0) {
                    DAT_086ef910 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::IsChildOf(UnityEngine.Transform)"
                                                  );
                  }
                  uVar9 = (*DAT_086ef910)(lVar7,uVar8);
                  if ((uVar9 & 1) == 0) {
                    if (DAT_086f1fe0 == (code *)0x0) {
                      DAT_086f1fe0 = (code *)FUN_033d1b68("UnityEngine.Collider::get_isTrigger()");
                    }
                    uVar9 = (*DAT_086f1fe0)();
                    if ((uVar9 & 1) == 0) {
                      lVar7 = *(long *)(unaff_x19 + 0x68);
                      *(undefined1 *)(unaff_x19 + 100) = 1;
                      if (lVar7 == 0) goto LAB_035e11b0;
                      if (DAT_086f1fd0 == (code *)0x0) {
                        DAT_086f1fd0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Collider::set_enabled(System.Boolean)"
                                                  );
                      }
                      (*DAT_086f1fd0)(lVar7,0);
                      uVar8 = *(undefined8 *)(unaff_x19 + 0x90);
                      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                        FUN_033b9870();
                      }
                      uVar9 = FUN_07a0d2c4(uVar8,0,0);
                      if ((uVar9 & 1) != 0) {
                        lVar7 = *(long *)(unaff_x19 + 0x90);
                        if (lVar7 == 0) goto LAB_035e11b0;
                        if (DAT_086ef278 == (code *)0x0) {
                          DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                        }
                        (*DAT_086ef278)(lVar7,0);
                      }
                      lVar7 = *(long *)(unaff_x19 + 0x20);
                      if (lVar7 == 0) goto LAB_035e11b0;
                      if (*(int *)(lVar7 + 0x100) == 1) {
                        uVar8 = *(undefined8 *)(lVar7 + 200);
                        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                          FUN_033b9870();
                        }
                        uVar9 = FUN_07a0d2c4(uVar8,0,0);
                        if ((uVar9 & 1) != 0) {
                          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_035e11b0;
                          uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 200);
                          if (DAT_086ef188 == (code *)0x0) {
                            DAT_086ef188 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                          }
                          lVar7 = (*DAT_086ef188)();
                          if (lVar7 == 0) goto LAB_035e11b0;
                          uVar10 = FUN_07a18d2c(lVar7,0);
                          if (DAT_086d7c53 == '\0') {
                            FUN_0335b6c8(&DAT_083d0300,1);
                            DataMemoryBarrier(2,3);
                            DAT_086d7c53 = '\x01';
                          }
                          lVar7 = FUN_035dcb1c(uVar10,uVar8);
                          plVar12 = (long *)(unaff_x19 + 0xa8);
                          *plVar12 = lVar7;
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
                            lVar7 = *plVar12;
                          }
                          if (lVar7 == 0) goto LAB_035e11b0;
                          if (DAT_086ef250 == (code *)0x0) {
                            DAT_086ef250 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                          }
                          lVar7 = (*DAT_086ef250)(lVar7);
                          if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
                            FUN_033b9870(DAT_083cb1e8);
                          }
                          lVar17 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
                          if (lVar17 == 0) goto LAB_035e11b0;
                          if (DAT_086ef250 == (code *)0x0) {
                            DAT_086ef250 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                          }
                          uVar8 = (*DAT_086ef250)(lVar17);
                          if (lVar7 == 0) goto LAB_035e11b0;
                          if (DAT_086ef840 == (code *)0x0) {
                            DAT_086ef840 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                  );
                          }
                          (*DAT_086ef840)(lVar7,uVar8,1);
                        }
                      }
                      FUN_035e11c0();
                      uVar8 = FUN_03c89df4();
                      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                        FUN_033b9870(DAT_083cf7d8);
                      }
                      uVar9 = FUN_07a11b14(uVar8,0);
                      if ((uVar9 & 1) == 0) {
                        uVar8 = FUN_03c89df4();
                        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                          FUN_033b9870(DAT_083cf7d8);
                        }
                        uVar9 = FUN_07a11b14(uVar8,0);
                        if ((uVar9 & 1) == 0) goto LAB_035e02e8;
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
      uVar8 = *(undefined8 *)(unaff_x19 + 0x78);
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar9 = FUN_07a0d2c4(uVar8,0,0);
      if ((uVar9 & 1) == 0) goto LAB_035df864;
      if (unaff_x20 == 0) goto LAB_035e11b0;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar7 = (*DAT_086ef188)();
      lVar17 = *(long *)(unaff_x19 + 0x78);
      if (lVar17 == 0) goto LAB_035e11b0;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      uVar8 = (*DAT_086ef188)(lVar17);
      if (lVar7 == 0) goto LAB_035e11b0;
      if (DAT_086ef910 == (code *)0x0) {
        DAT_086ef910 = (code *)FUN_033d1b68(
                                           "UnityEngine.Transform::IsChildOf(UnityEngine.Transform)"
                                           );
      }
      uVar9 = (*DAT_086ef910)(lVar7,uVar8);
      if ((uVar9 & 1) == 0) goto LAB_035df864;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar7 = (*DAT_086ef188)();
      lVar17 = *(long *)(unaff_x19 + 0x30);
      if (lVar17 == 0) goto LAB_035e11b0;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      uVar8 = (*DAT_086ef188)(lVar17);
      if (lVar7 == 0) goto LAB_035e11b0;
      if (DAT_086ef910 == (code *)0x0) {
        DAT_086ef910 = (code *)FUN_033d1b68(
                                           "UnityEngine.Transform::IsChildOf(UnityEngine.Transform)"
                                           );
      }
      uVar9 = (*DAT_086ef910)(lVar7,uVar8);
      if ((uVar9 & 1) != 0) goto LAB_035df864;
      pcVar11 = *(code **)(unaff_x25 + 400);
      if (pcVar11 == (code *)0x0) {
        pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x25 + 400) = pcVar11;
      }
      lVar7 = (*pcVar11)();
      if (lVar7 == 0) goto LAB_035e11b0;
      if (DAT_086ef258 == (code *)0x0) {
        DAT_086ef258 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_layer()");
      }
      iVar6 = (*DAT_086ef258)(lVar7);
      if (iVar6 == 2) goto LAB_035df864;
      if (DAT_086f1fe0 == (code *)0x0) {
        DAT_086f1fe0 = (code *)FUN_033d1b68("UnityEngine.Collider::get_isTrigger()");
      }
      uVar9 = (*DAT_086f1fe0)();
      if ((uVar9 & 1) != 0) goto LAB_035df864;
      plVar12 = (long *)(unaff_x19 + 0x20);
      lVar7 = *plVar12;
      if (lVar7 == 0) goto LAB_035e11b0;
      if (*(int *)(lVar7 + 0x100) == 1) {
        uVar8 = *(undefined8 *)(lVar7 + 200);
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar9 = FUN_07a0d2c4(uVar8,0,0);
        if ((uVar9 & 1) != 0) {
          lVar7 = *plVar12;
          if (lVar7 == 0) goto LAB_035e11b0;
          if (*(int *)(lVar7 + 0x104) == 1) {
            uVar8 = *(undefined8 *)(lVar7 + 200);
            if (DAT_086ef188 == (code *)0x0) {
              DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            }
            lVar7 = (*DAT_086ef188)();
            if (lVar7 == 0) goto LAB_035e11b0;
            uVar10 = FUN_07a18d2c(lVar7,0);
            if (DAT_086d7c53 == '\0') {
              FUN_0335b6c8(&DAT_083d0300,1);
              DataMemoryBarrier(2,3);
              DAT_086d7c53 = '\x01';
            }
            if (*plVar12 == 0) goto LAB_035e11b0;
            puVar15 = *(undefined4 **)(DAT_083d0300 + 0xb8);
            lVar7 = FUN_035dcb1c(uVar10,param_2,param_3,*puVar15,puVar15[1],puVar15[2],puVar15[3],
                                 *(undefined4 *)(*plVar12 + 0x84),uVar8);
            plVar13 = (long *)(unaff_x19 + 0xa8);
            *plVar13 = lVar7;
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
              lVar7 = *plVar13;
            }
            if (lVar7 == 0) goto LAB_035e11b0;
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            lVar7 = (*DAT_086ef250)(lVar7);
            if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
              FUN_033b9870(DAT_083cb1e8);
            }
            lVar17 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
            if (lVar17 == 0) goto LAB_035e11b0;
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            uVar8 = (*DAT_086ef250)(lVar17);
            if (lVar7 == 0) goto LAB_035e11b0;
            if (DAT_086ef840 == (code *)0x0) {
              DAT_086ef840 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                 );
            }
            (*DAT_086ef840)(lVar7,uVar8,1);
          }
        }
      }
      FUN_035e11c0();
      if (*(int *)(unaff_x19 + 0x88) != 1) goto LAB_035e0200;
      uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar9 = FUN_07a0d2c4(uVar8,0,0);
      if ((uVar9 & 1) == 0) {
LAB_035dffc0:
        if (*(int *)(unaff_x19 + 0x88) != 1) goto LAB_035e0200;
        uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar9 = FUN_07a0d2c4(uVar8,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_035e11b0;
          uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0xb0);
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar9 = FUN_07a0d2c4(uVar8,0,0);
          if ((uVar9 & 1) != 0) {
            uVar8 = FUN_03c89df4();
            if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
              FUN_033b9870(DAT_083cf7d8);
            }
            uVar9 = FUN_07a11b14(uVar8,0);
            if ((uVar9 & 1) == 0) goto LAB_035dff04;
          }
        }
        iVar6 = *(int *)(unaff_x19 + 0x88);
        if (iVar6 == 1) {
          uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar9 = FUN_07a0d2c4(uVar8,0,0);
          if ((uVar9 & 1) == 0) goto LAB_035e0200;
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_035e11b0;
          uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0xb0);
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar9 = FUN_07a0d2c4(uVar8,0,0);
          if ((uVar9 & 1) == 0) {
LAB_035e0200:
            iVar6 = *(int *)(unaff_x19 + 0x88);
            goto LAB_035e0204;
          }
          uVar8 = FUN_03c89df4();
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870(DAT_083cf7d8);
          }
          uVar9 = FUN_07a11b14(uVar8,0);
          if ((uVar9 & 1) == 0) goto LAB_035e0200;
          lVar7 = *(long *)(unaff_x19 + 0x38);
          if (DAT_086ef188 == (code *)0x0) {
            DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          }
          uVar8 = (*DAT_086ef188)();
          if (lVar7 == 0) goto LAB_035e11b0;
          *(undefined8 *)(lVar7 + 0x4b0) = uVar8;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + (lVar7 + 0x4b0U >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << (lVar7 + 0x4b0U >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar7 = *plVar12;
          if (lVar7 == 0) goto LAB_035e11b0;
          if (*(int *)(lVar7 + 0xe8) != 0) goto LAB_035e0250;
          if (*(int *)(lVar7 + 0xec) != 1) {
            if (*(int *)(lVar7 + 0xec) == 0) {
              lVar7 = FUN_03c89df4();
              lVar17 = *(long *)(unaff_x19 + 0x30);
              if (lVar17 == 0) goto LAB_035e11b0;
              uVar2 = *(undefined4 *)(unaff_x19 + 0x28);
              if (DAT_086ef188 == (code *)0x0) {
                DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
              }
              uVar8 = (*DAT_086ef188)(lVar17);
              if ((*(long *)(unaff_x19 + 0x30) == 0) || (lVar7 == 0)) goto LAB_035e11b0;
              FUN_035afb18(lVar7,uVar2,0x100000001,uVar8,
                           *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x4a4),
                           *(undefined1 *)(unaff_x19 + 0x81),0);
              goto LAB_035dff84;
            }
            goto LAB_035e0250;
          }
          lVar7 = FUN_03c89df4();
          if ((*plVar12 == 0) || (lVar17 = *(long *)(unaff_x19 + 0x30), lVar17 == 0))
          goto LAB_035e11b0;
          uVar2 = *(undefined4 *)(*plVar12 + 0x44);
          if (DAT_086ef188 == (code *)0x0) {
            DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          }
          uVar8 = (*DAT_086ef188)(lVar17);
          if ((*(long *)(unaff_x19 + 0x30) == 0) || (lVar7 == 0)) goto LAB_035e11b0;
          FUN_035afb18(lVar7,uVar2,0x100000001,uVar8,
                       *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x4a4),0,0);
          if ((*(long *)(unaff_x19 + 0x30) == 0) ||
             (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x500), lVar7 == 0))
          goto LAB_035e11b0;
          FUN_07a22574(lVar7,0);
          lVar7 = *plVar12;
          if (lVar7 == 0) goto LAB_035e11b0;
          if (*(int *)(lVar7 + 0x114) == 0) {
            if ((*(long *)(unaff_x19 + 0x38) == 0) ||
               (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x160), lVar17 == 0))
            goto LAB_035e11b0;
            uVar9 = FUN_04ab1208(lVar17,*(undefined8 *)(lVar7 + 0x18),DAT_083f44a8);
            if ((uVar9 & 1) != 0) goto LAB_035e0f14;
            if (*plVar12 == 0) goto LAB_035e11b0;
            uVar9 = FUN_0666e380(*(undefined8 *)(*plVar12 + 0x18),
                                 **(undefined8 **)(DAT_083d16d8 + 0xb8));
            if ((uVar9 & 1) != 0) goto LAB_035e0f14;
          }
          else {
LAB_035e0f14:
            if (*plVar12 == 0) goto LAB_035e11b0;
            if (*(int *)(*plVar12 + 0x114) != 1) goto LAB_035e0250;
          }
          if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_035e11b0;
          uVar8 = *(undefined8 *)(unaff_x19 + 200);
          uVar10 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x78),0);
          if (DAT_086d7c53 == '\0') {
            FUN_0335b6c8(&DAT_083d0300,1);
            DataMemoryBarrier(2,3);
            DAT_086d7c53 = '\x01';
          }
          puVar15 = *(undefined4 **)(DAT_083d0300 + 0xb8);
          lVar7 = FUN_035dc5a8(uVar10,param_2,param_3,*puVar15,puVar15[1],puVar15[2],puVar15[3],
                               uVar8);
          if (lVar7 == 0) goto LAB_035e11b0;
          if (DAT_086ef250 == (code *)0x0) {
            DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
          }
          lVar17 = (*DAT_086ef250)(lVar7);
          if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
            FUN_033b9870(DAT_083cb1e8);
          }
          lVar16 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
          if (lVar16 == 0) goto LAB_035e11b0;
          if (DAT_086ef250 == (code *)0x0) {
            DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
          }
          uVar8 = (*DAT_086ef250)(lVar16);
          if (lVar17 == 0) goto LAB_035e11b0;
          if (DAT_086ef840 == (code *)0x0) {
            DAT_086ef840 = (code *)FUN_033d1b68(
                                               "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                               );
          }
          (*DAT_086ef840)(lVar17,uVar8,1);
          lVar17 = FUN_03fa1bc8(lVar7,DAT_0840cb20);
          lVar16 = *plVar12;
          if (((lVar16 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) || (lVar17 == 0))
          goto LAB_035e11b0;
          FUN_035c4294(*(undefined4 *)(lVar16 + 0x4c),(float)*(int *)(lVar16 + 0x54),
                       *(undefined4 *)(lVar16 + 0x88),lVar17,*(undefined8 *)(lVar16 + 0x18),
                       *(undefined4 *)(lVar16 + 0x34),*(undefined8 *)(lVar16 + 0xb8),
                       *(undefined8 *)(lVar16 + 0xc0),0,*(undefined8 *)(unaff_x19 + 0x48),
                       *(undefined8 *)(unaff_x19 + 0x38));
          lVar7 = FUN_03fa1bc8(lVar7,DAT_0840cb20);
          uVar8 = FUN_03c89df4();
          if (lVar7 == 0) goto LAB_035e11b0;
          puVar14 = (undefined8 *)(lVar7 + 0x20);
          *puVar14 = uVar8;
          iVar6 = DAT_08908cd0;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar14 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar14 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar17 = DAT_083f4490;
          if (((*(long *)(unaff_x19 + 0x38) == 0) || (*plVar12 == 0)) ||
             (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x160), lVar7 == 0))
          goto LAB_035e11b0;
          uVar8 = *(undefined8 *)(*plVar12 + 0x18);
          lVar16 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_035e11b0;
          uVar3 = *(uint *)(lVar7 + 0x18);
          if (uVar3 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar3 + 1;
            puVar14 = (undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
            *puVar14 = uVar8;
            if (iVar6 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)puVar14 >> 0x12 & 0x7fff);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar14 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            goto LAB_035e0250;
          }
          lVar17 = *(long *)(lVar17 + 0x20);
LAB_035e0cc4:
          FUN_04ab0e54(lVar7,uVar8,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x70));
        }
        else {
LAB_035e0204:
          if (iVar6 == 2) {
            lVar7 = *plVar12;
            if (lVar7 == 0) goto LAB_035e11b0;
            if (*(int *)(lVar7 + 0xe8) == 0) {
              if (*(int *)(lVar7 + 0xec) == 1) {
                FUN_035e1690();
                if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_035e11b0;
                lVar7 = FUN_03c89df4(*(long *)(unaff_x19 + 0x40),DAT_08405880);
                lVar17 = *plVar12;
                if (lVar17 == 0) goto LAB_035e11b0;
                if (*(int *)(lVar17 + 0x114) == 0) {
                  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x28) == 0)) goto LAB_035e11b0;
                  uVar9 = FUN_04ab1208(*(long *)(lVar7 + 0x28),*(undefined8 *)(lVar17 + 0x18),
                                       DAT_083f44a8);
                  if ((uVar9 & 1) != 0) goto LAB_035e0774;
                  if (*plVar12 == 0) goto LAB_035e11b0;
                  uVar9 = FUN_0666e380(*(undefined8 *)(*plVar12 + 0x18),
                                       **(undefined8 **)(DAT_083d16d8 + 0xb8));
                  if ((uVar9 & 1) != 0) goto LAB_035e0774;
                }
                else {
LAB_035e0774:
                  if (*plVar12 == 0) goto LAB_035e11b0;
                  if (*(int *)(*plVar12 + 0x114) != 1) goto LAB_035e0250;
                }
                if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_035e11b0;
                uVar8 = *(undefined8 *)(unaff_x19 + 200);
                uVar10 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x78),0);
                if (DAT_086d7c53 == '\0') {
                  FUN_0335b6c8(&DAT_083d0300,1);
                  DataMemoryBarrier(2,3);
                  DAT_086d7c53 = '\x01';
                }
                puVar15 = *(undefined4 **)(DAT_083d0300 + 0xb8);
                lVar17 = FUN_035dc5a8(uVar10,param_2,param_3,*puVar15,puVar15[1],puVar15[2],
                                      puVar15[3],uVar8);
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
                uVar8 = (*DAT_086ef250)(lVar18);
                if (lVar16 == 0) goto LAB_035e11b0;
                if (DAT_086ef840 == (code *)0x0) {
                  DAT_086ef840 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                  );
                }
                (*DAT_086ef840)(lVar16,uVar8,1);
                lVar17 = FUN_03fa1bc8(lVar17,DAT_0840cb20);
                lVar16 = *plVar12;
                if (((((lVar16 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) || (lVar17 == 0)) ||
                    ((FUN_035c4294(*(undefined4 *)(lVar16 + 0x4c),(float)*(int *)(lVar16 + 0x54),
                                   *(undefined4 *)(lVar16 + 0x88),lVar17,
                                   *(undefined8 *)(lVar16 + 0x18),*(undefined4 *)(lVar16 + 0x34),
                                   *(undefined8 *)(lVar16 + 0xb8),*(undefined8 *)(lVar16 + 0xc0),
                                   lVar7,*(undefined8 *)(unaff_x19 + 0x48),
                                   *(undefined8 *)(unaff_x19 + 0x38)), lVar17 = DAT_083f4490,
                     lVar7 == 0 || (*plVar12 == 0)))) ||
                   (lVar7 = *(long *)(lVar7 + 0x28), lVar7 == 0)) goto LAB_035e11b0;
                uVar8 = *(undefined8 *)(*plVar12 + 0x18);
                lVar16 = *(long *)(lVar7 + 0x10);
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar16 == 0) goto LAB_035e11b0;
                uVar3 = *(uint *)(lVar7 + 0x18);
                if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_035e0cc0;
                *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                puVar14 = (undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
                *puVar14 = uVar8;
                if (DAT_08908cd0 != 0) {
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar14 >> 0x12 & 0x7fff);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar14 >> 0xc & 0x3f);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
              }
              else if (*(int *)(lVar7 + 0xec) == 0) {
                FUN_035e1690();
              }
            }
          }
          else if (iVar6 == 0) {
            lVar7 = *plVar12;
            if (lVar7 == 0) goto LAB_035e11b0;
            if (*(int *)(lVar7 + 0xe8) == 0) {
              if (*(int *)(lVar7 + 0xec) == 1) {
                FUN_035e1488();
                if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_035e11b0;
                if (*(int *)(*(long *)(unaff_x19 + 0x20) + 0x114) == 0) {
                  if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                      (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0xdb0), lVar7 == 0)) ||
                     ((lVar7 = FUN_03c89df4(lVar7,DAT_08405888), lVar7 == 0 ||
                      ((*plVar12 == 0 || (*(long *)(lVar7 + 0x20) == 0)))))) goto LAB_035e11b0;
                  uVar9 = FUN_04ab1208(*(long *)(lVar7 + 0x20),*(undefined8 *)(*plVar12 + 0x18),
                                       DAT_083f44a8);
                  if ((uVar9 & 1) != 0) goto LAB_035e04a4;
                  if (*plVar12 == 0) goto LAB_035e11b0;
                  uVar9 = FUN_0666e380(*(undefined8 *)(*plVar12 + 0x18),
                                       **(undefined8 **)(DAT_083d16d8 + 0xb8));
                  if ((uVar9 & 1) != 0) goto LAB_035e04a4;
                }
                else {
LAB_035e04a4:
                  if (*plVar12 == 0) goto LAB_035e11b0;
                  if (*(int *)(*plVar12 + 0x114) != 1) goto LAB_035e0250;
                }
                if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_035e11b0;
                uVar8 = *(undefined8 *)(unaff_x19 + 200);
                uVar10 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x78),0);
                if (DAT_086d7c53 == '\0') {
                  FUN_0335b6c8(&DAT_083d0300,1);
                  DataMemoryBarrier(2,3);
                  DAT_086d7c53 = '\x01';
                }
                puVar15 = *(undefined4 **)(DAT_083d0300 + 0xb8);
                lVar7 = FUN_035dc5a8(uVar10,param_2,param_3,*puVar15,puVar15[1],puVar15[2],
                                     puVar15[3],uVar8);
                if (lVar7 == 0) goto LAB_035e11b0;
                if (DAT_086ef250 == (code *)0x0) {
                  DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
                }
                lVar17 = (*DAT_086ef250)(lVar7);
                if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
                  FUN_033b9870(DAT_083cb1e8);
                }
                lVar16 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
                if (lVar16 == 0) goto LAB_035e11b0;
                if (DAT_086ef250 == (code *)0x0) {
                  DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
                }
                uVar8 = (*DAT_086ef250)(lVar16);
                if (lVar17 == 0) goto LAB_035e11b0;
                if (DAT_086ef840 == (code *)0x0) {
                  DAT_086ef840 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                  );
                }
                (*DAT_086ef840)(lVar17,uVar8,1);
                lVar7 = FUN_03fa1bc8(lVar7,DAT_0840cb20);
                lVar17 = *plVar12;
                if (((lVar17 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) || (lVar7 == 0))
                goto LAB_035e11b0;
                FUN_035c4294(*(undefined4 *)(lVar17 + 0x4c),(float)*(int *)(lVar17 + 0x54),
                             *(undefined4 *)(lVar17 + 0x88),lVar7,*(undefined8 *)(lVar17 + 0x18),
                             *(undefined4 *)(lVar17 + 0x34),*(undefined8 *)(lVar17 + 0xb8),
                             *(undefined8 *)(lVar17 + 0xc0),0,*(undefined8 *)(unaff_x19 + 0x48),
                             *(undefined8 *)(unaff_x19 + 0x38));
                if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                    (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0xdb0), lVar7 == 0)) ||
                   ((lVar7 = FUN_03c89df4(lVar7,DAT_08405888), lVar17 = DAT_083f4490, lVar7 == 0 ||
                    ((*plVar12 == 0 || (lVar7 = *(long *)(lVar7 + 0x20), lVar7 == 0))))))
                goto LAB_035e11b0;
                uVar8 = *(undefined8 *)(*plVar12 + 0x18);
                lVar16 = *(long *)(lVar7 + 0x10);
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar16 == 0) goto LAB_035e11b0;
                uVar3 = *(uint *)(lVar7 + 0x18);
                if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_035e0cc0;
                *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                puVar14 = (undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
                *puVar14 = uVar8;
                if (DAT_08908cd0 != 0) {
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar14 >> 0x12 & 0x7fff);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar14 >> 0xc & 0x3f);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
              }
              else if (*(int *)(lVar7 + 0xec) == 0) {
                FUN_035e1488();
              }
            }
          }
        }
      }
      else {
        if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_035e11b0;
        uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0xb0);
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar9 = FUN_07a119fc(uVar8,0,0);
        if ((uVar9 & 1) == 0) goto LAB_035dffc0;
LAB_035dff04:
        lVar7 = *plVar12;
        if (lVar7 == 0) goto LAB_035e11b0;
        if (*(int *)(lVar7 + 0xe8) == 0) {
          if (*(int *)(lVar7 + 0xec) == 1) {
            lVar17 = *(long *)(unaff_x19 + 0x30);
            if (lVar17 == 0) goto LAB_035e11b0;
            lVar16 = *(long *)(unaff_x19 + 0x38);
            uVar2 = *(undefined4 *)(lVar7 + 0x44);
            if (DAT_086ef188 == (code *)0x0) {
              DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            }
            uVar8 = (*DAT_086ef188)(lVar17);
            if ((*(long *)(unaff_x19 + 0x30) == 0) || (lVar16 == 0)) goto LAB_035e11b0;
            FUN_035afce0(lVar16,uVar2,0x100000001,uVar8,
                         *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x4a4),0,0);
            if ((*(long *)(unaff_x19 + 0x30) == 0) ||
               (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x500), lVar7 == 0))
            goto LAB_035e11b0;
            FUN_07a22574(lVar7,0);
            lVar7 = *plVar12;
            if (lVar7 == 0) goto LAB_035e11b0;
            if (*(int *)(lVar7 + 0x114) == 0) {
              if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                 (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x160), lVar17 == 0))
              goto LAB_035e11b0;
              uVar9 = FUN_04ab1208(lVar17,*(undefined8 *)(lVar7 + 0x18),DAT_083f44a8);
              if ((uVar9 & 1) != 0) goto LAB_035e0a80;
              if (*plVar12 == 0) goto LAB_035e11b0;
              uVar9 = FUN_0666e380(*(undefined8 *)(*plVar12 + 0x18),
                                   **(undefined8 **)(DAT_083d16d8 + 0xb8));
              if ((uVar9 & 1) != 0) goto LAB_035e0a80;
            }
            else {
LAB_035e0a80:
              if (*plVar12 == 0) goto LAB_035e11b0;
              if (*(int *)(*plVar12 + 0x114) != 1) goto LAB_035e0250;
            }
            if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_035e11b0;
            uVar8 = *(undefined8 *)(unaff_x19 + 200);
            uVar10 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x78),0);
            if (DAT_086d7c53 == '\0') {
              FUN_0335b6c8(&DAT_083d0300,1);
              DataMemoryBarrier(2,3);
              DAT_086d7c53 = '\x01';
            }
            puVar15 = *(undefined4 **)(DAT_083d0300 + 0xb8);
            lVar7 = FUN_035dc5a8(uVar10,param_2,param_3,*puVar15,puVar15[1],puVar15[2],puVar15[3],
                                 uVar8);
            if (lVar7 == 0) goto LAB_035e11b0;
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            lVar17 = (*DAT_086ef250)(lVar7);
            if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
              FUN_033b9870(DAT_083cb1e8);
            }
            lVar16 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
            if (lVar16 == 0) goto LAB_035e11b0;
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            uVar8 = (*DAT_086ef250)(lVar16);
            if (lVar17 == 0) goto LAB_035e11b0;
            if (DAT_086ef840 == (code *)0x0) {
              DAT_086ef840 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                 );
            }
            (*DAT_086ef840)(lVar17,uVar8,1);
            lVar7 = FUN_03fa1bc8(lVar7,DAT_0840cb20);
            lVar17 = *plVar12;
            if (((lVar17 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) || (lVar7 == 0))
            goto LAB_035e11b0;
            FUN_035c4294(*(undefined4 *)(lVar17 + 0x4c),(float)*(int *)(lVar17 + 0x54),
                         *(undefined4 *)(lVar17 + 0x88),lVar7,*(undefined8 *)(lVar17 + 0x18),
                         *(undefined4 *)(lVar17 + 0x34),*(undefined8 *)(lVar17 + 0xb8),
                         *(undefined8 *)(lVar17 + 0xc0),0,*(undefined8 *)(unaff_x19 + 0x48),
                         *(undefined8 *)(unaff_x19 + 0x38));
            lVar17 = DAT_083f4490;
            if (((*(long *)(unaff_x19 + 0x38) == 0) || (*plVar12 == 0)) ||
               (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x160), lVar7 == 0))
            goto LAB_035e11b0;
            uVar8 = *(undefined8 *)(*plVar12 + 0x18);
            lVar16 = *(long *)(lVar7 + 0x10);
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar16 == 0) goto LAB_035e11b0;
            uVar3 = *(uint *)(lVar7 + 0x18);
            if (uVar3 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar3 + 1;
              puVar14 = (undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
              *puVar14 = uVar8;
              if (DAT_08908cd0 != 0) {
                puVar1 = &DAT_0873ccb0 + ((ulong)puVar14 >> 0x12 & 0x7fff);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar14 >> 0xc & 0x3f);
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
          if (*(int *)(lVar7 + 0xec) == 0) {
            lVar7 = *(long *)(unaff_x19 + 0x30);
            if (lVar7 == 0) goto LAB_035e11b0;
            lVar17 = *(long *)(unaff_x19 + 0x38);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x28);
            if (DAT_086ef188 == (code *)0x0) {
              DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            }
            uVar8 = (*DAT_086ef188)(lVar7);
            if ((*(long *)(unaff_x19 + 0x30) == 0) || (lVar17 == 0)) goto LAB_035e11b0;
            FUN_035afce0(lVar17,uVar2,0x100000001,uVar8,
                         *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x4a4),
                         *(undefined1 *)(unaff_x19 + 0x81),0);
LAB_035dff84:
            if ((*(long *)(unaff_x19 + 0x30) == 0) ||
               (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x500), lVar7 == 0))
            goto LAB_035e11b0;
            FUN_07a22574(lVar7,0);
            if (*(char *)(unaff_x19 + 0x81) != '\0') {
              if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                 (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x560), lVar7 == 0))
              goto LAB_035e11b0;
              FUN_07a22574(lVar7,0);
            }
          }
        }
      }
LAB_035e0250:
      uVar8 = *(undefined8 *)(unaff_x19 + 0x90);
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar9 = FUN_07a0d2c4(uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        lVar7 = *(long *)(unaff_x19 + 0x90);
        if (lVar7 == 0) goto LAB_035e11b0;
        if (DAT_086ef278 == (code *)0x0) {
          DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
        (*DAT_086ef278)(lVar7,0);
      }
      lVar7 = *(long *)(unaff_x19 + 0x68);
      *(undefined1 *)(unaff_x19 + 100) = 1;
      if (lVar7 == 0) goto LAB_035e11b0;
      if (DAT_086f1fd0 == (code *)0x0) {
        DAT_086f1fd0 = (code *)FUN_033d1b68("UnityEngine.Collider::set_enabled(System.Boolean)");
      }
      (*DAT_086f1fd0)(lVar7,0);
LAB_035e02e8:
      FUN_035e182c();
    }
  }
  pcVar11 = *(code **)(unaff_x25 + 400);
  if (pcVar11 == (code *)0x0) {
    pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    *(code **)(unaff_x25 + 400) = pcVar11;
  }
  lVar7 = (*pcVar11)();
  if (lVar7 != 0) {
    if (DAT_086ef280 == (code *)0x0) {
      DAT_086ef280 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeSelf()");
    }
    uVar9 = (*DAT_086ef280)(lVar7);
    if ((uVar9 & 1) == 0) {
      return;
    }
    lVar7 = *(long *)(unaff_x19 + 0xf8);
    if (lVar7 != 0) {
      if (DAT_086f1e98 == (code *)0x0) {
        DAT_086f1e98 = (code *)FUN_033d1b68(
                                           "UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)"
                                           );
      }
      (*DAT_086f1e98)(lVar7,0);
      lVar7 = *(long *)(unaff_x19 + 0xf8);
      if (lVar7 != 0) {
        if (DAT_086f1e78 == (code *)0x0) {
          DAT_086f1e78 = (code *)FUN_033d1b68(
                                             "UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)"
                                             );
        }
                    /* WARNING: Could not recover jumptable at 0x035e03d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_086f1e78)(lVar7,0);
        return;
      }
    }
  }
LAB_035e11b0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


