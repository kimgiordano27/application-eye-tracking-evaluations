/*
FUNCTION_NAME: Autohand.Demo.OpenXRHandPointGrabLink$$OnDisable
ENTRY_POINT: 035df300
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


void Autohand_Demo_OpenXRHandPointGrabLink__OnDisable
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined4 *puVar15;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar16;
  undefined1 unaff_w22;
  long lVar17;
  
  FUN_0335b6c8(param_4,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d16d8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842fb70,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_084321b0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08431e20,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x5e1) = unaff_w22;
  lVar11 = *(long *)(unaff_x19 + 0x30);
  if (lVar11 == 0) goto LAB_035e11b0;
  if ((*(int *)(lVar11 + 0xd24) == 1) && (*(int *)(lVar11 + 0xd38) == 1)) {
    if (unaff_x20 == 0) goto LAB_035e11b0;
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    uVar7 = (*DAT_086ef190)();
    lVar11 = *(long *)(unaff_x19 + 0x30);
    if (lVar11 == 0) goto LAB_035e11b0;
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    uVar8 = (*DAT_086ef190)(lVar11);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870(DAT_083cf7d8);
    }
    uVar9 = FUN_07a0d2c4(uVar7,uVar8,0);
    if ((uVar9 & 1) != 0) {
      lVar11 = FUN_03398188(DAT_083c7c90,5);
      if (lVar11 == 0) goto LAB_035e11b0;
      if (*(int *)(lVar11 + 0x18) == 0) {
LAB_035e11bc:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      puVar12 = (undefined8 *)(lVar11 + 0x20);
      *puVar12 = DAT_084321b0;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_035e11b0;
      uVar7 = FUN_07a11ba4(*(long *)(unaff_x19 + 0x30),0);
      if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_035e11bc;
      puVar12 = (undefined8 *)(lVar11 + 0x28);
      *puVar12 = uVar7;
      if (DAT_08908cd0 == 0) {
        if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_035e11bc;
        *(undefined8 *)(lVar11 + 0x30) = DAT_0842fb70;
      }
      else {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_035e11bc;
        puVar12 = (undefined8 *)(lVar11 + 0x30);
        *puVar12 = DAT_0842fb70;
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar10 = (*DAT_086ef190)();
      if (lVar10 == 0) goto LAB_035e11b0;
      uVar7 = FUN_07a11ba4(lVar10,0);
      if (*(uint *)(lVar11 + 0x18) < 4) goto LAB_035e11bc;
      puVar12 = (undefined8 *)(lVar11 + 0x38);
      *puVar12 = uVar7;
      if (DAT_08908cd0 == 0) {
        if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_035e11bc;
        *(undefined8 *)(lVar11 + 0x40) = DAT_08431e20;
      }
      else {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_035e11bc;
        puVar12 = (undefined8 *)(lVar11 + 0x40);
        *puVar12 = DAT_08431e20;
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uVar7 = FUN_0666ee4c(lVar11,0);
      if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
        FUN_033b9870(DAT_083ca458);
      }
      FUN_079c9c0c(uVar7,0);
    }
  }
  if (*(char *)(unaff_x19 + 100) == '\0') {
    uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar9 = FUN_07a0d2c4(uVar7,0,0);
    if ((uVar9 & 1) == 0) {
LAB_035df864:
      if (*(char *)(unaff_x19 + 100) == '\0') {
        uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar9 = FUN_07a0d2c4(uVar7,0,0);
        if ((uVar9 & 1) != 0) {
          uVar7 = *(undefined8 *)(unaff_x19 + 0x78);
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar9 = FUN_07a0d2c4(uVar7,0,0);
          if ((uVar9 & 1) != 0) {
            if (unaff_x20 == 0) goto LAB_035e11b0;
            if (DAT_086ef190 == (code *)0x0) {
              DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
            }
            uVar7 = (*DAT_086ef190)();
            lVar11 = *(long *)(unaff_x19 + 0x78);
            if (lVar11 == 0) goto LAB_035e11b0;
            if (DAT_086ef190 == (code *)0x0) {
              DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
            }
            uVar8 = (*DAT_086ef190)(lVar11);
            if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
              FUN_033b9870(DAT_083cf7d8);
            }
            uVar9 = FUN_07a0d2c4(uVar7,uVar8,0);
            if ((uVar9 & 1) != 0) {
              if (DAT_086ef190 == (code *)0x0) {
                DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
              }
              uVar7 = (*DAT_086ef190)();
              lVar11 = *(long *)(unaff_x19 + 0x30);
              if (lVar11 == 0) goto LAB_035e11b0;
              if (DAT_086ef190 == (code *)0x0) {
                DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
              }
              uVar8 = (*DAT_086ef190)(lVar11);
              if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                FUN_033b9870(DAT_083cf7d8);
              }
              uVar9 = FUN_07a0d2c4(uVar7,uVar8,0);
              if ((uVar9 & 1) != 0) {
                if (DAT_086ef190 == (code *)0x0) {
                  DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
                }
                lVar11 = (*DAT_086ef190)();
                if (lVar11 == 0) goto LAB_035e11b0;
                if (DAT_086ef258 == (code *)0x0) {
                  DAT_086ef258 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_layer()");
                }
                iVar6 = (*DAT_086ef258)(lVar11);
                if (iVar6 != 2) {
                  if (DAT_086ef188 == (code *)0x0) {
                    DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
                  }
                  lVar11 = (*DAT_086ef188)();
                  lVar10 = *(long *)(unaff_x19 + 0x30);
                  if (lVar10 == 0) goto LAB_035e11b0;
                  if (DAT_086ef188 == (code *)0x0) {
                    DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
                  }
                  uVar7 = (*DAT_086ef188)(lVar10);
                  if (lVar11 == 0) goto LAB_035e11b0;
                  if (DAT_086ef910 == (code *)0x0) {
                    DAT_086ef910 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::IsChildOf(UnityEngine.Transform)"
                                                  );
                  }
                  uVar9 = (*DAT_086ef910)(lVar11,uVar7);
                  if ((uVar9 & 1) == 0) {
                    if (DAT_086f1fe0 == (code *)0x0) {
                      DAT_086f1fe0 = (code *)FUN_033d1b68("UnityEngine.Collider::get_isTrigger()");
                    }
                    uVar9 = (*DAT_086f1fe0)();
                    if ((uVar9 & 1) == 0) {
                      lVar11 = *(long *)(unaff_x19 + 0x68);
                      *(undefined1 *)(unaff_x19 + 100) = 1;
                      if (lVar11 == 0) goto LAB_035e11b0;
                      if (DAT_086f1fd0 == (code *)0x0) {
                        DAT_086f1fd0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Collider::set_enabled(System.Boolean)"
                                                  );
                      }
                      (*DAT_086f1fd0)(lVar11,0);
                      uVar7 = *(undefined8 *)(unaff_x19 + 0x90);
                      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                        FUN_033b9870();
                      }
                      uVar9 = FUN_07a0d2c4(uVar7,0,0);
                      if ((uVar9 & 1) != 0) {
                        lVar11 = *(long *)(unaff_x19 + 0x90);
                        if (lVar11 == 0) goto LAB_035e11b0;
                        if (DAT_086ef278 == (code *)0x0) {
                          DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                        }
                        (*DAT_086ef278)(lVar11,0);
                      }
                      lVar11 = *(long *)(unaff_x19 + 0x20);
                      if (lVar11 == 0) goto LAB_035e11b0;
                      if (*(int *)(lVar11 + 0x100) == 1) {
                        uVar7 = *(undefined8 *)(lVar11 + 200);
                        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                          FUN_033b9870();
                        }
                        uVar9 = FUN_07a0d2c4(uVar7,0,0);
                        if ((uVar9 & 1) != 0) {
                          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_035e11b0;
                          uVar7 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 200);
                          if (DAT_086ef188 == (code *)0x0) {
                            DAT_086ef188 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                          }
                          lVar11 = (*DAT_086ef188)();
                          if (lVar11 == 0) goto LAB_035e11b0;
                          uVar8 = FUN_07a18d2c(lVar11,0);
                          if (DAT_086d7c53 == '\0') {
                            FUN_0335b6c8(&DAT_083d0300,1);
                            DataMemoryBarrier(2,3);
                            DAT_086d7c53 = '\x01';
                          }
                          lVar11 = FUN_035dcb1c(uVar8,uVar7);
                          plVar13 = (long *)(unaff_x19 + 0xa8);
                          *plVar13 = lVar11;
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
                            lVar11 = *plVar13;
                          }
                          if (lVar11 == 0) goto LAB_035e11b0;
                          if (DAT_086ef250 == (code *)0x0) {
                            DAT_086ef250 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                          }
                          lVar11 = (*DAT_086ef250)(lVar11);
                          if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
                            FUN_033b9870(DAT_083cb1e8);
                          }
                          lVar10 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
                          if (lVar10 == 0) goto LAB_035e11b0;
                          if (DAT_086ef250 == (code *)0x0) {
                            DAT_086ef250 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                          }
                          uVar7 = (*DAT_086ef250)(lVar10);
                          if (lVar11 == 0) goto LAB_035e11b0;
                          if (DAT_086ef840 == (code *)0x0) {
                            DAT_086ef840 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                  );
                          }
                          (*DAT_086ef840)(lVar11,uVar7,1);
                        }
                      }
                      FUN_035e11c0();
                      uVar7 = FUN_03c89df4();
                      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                        FUN_033b9870(DAT_083cf7d8);
                      }
                      uVar9 = FUN_07a11b14(uVar7,0);
                      if ((uVar9 & 1) == 0) {
                        uVar7 = FUN_03c89df4();
                        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                          FUN_033b9870(DAT_083cf7d8);
                        }
                        uVar9 = FUN_07a11b14(uVar7,0);
                        if ((uVar9 & 1) == 0) goto LAB_035e02e8;
                      }
                      if (DAT_086ef190 == (code *)0x0) {
                        DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                      }
                      (*DAT_086ef190)();
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
      uVar9 = FUN_07a0d2c4(uVar7,0,0);
      if ((uVar9 & 1) == 0) goto LAB_035df864;
      if (unaff_x20 == 0) goto LAB_035e11b0;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar11 = (*DAT_086ef188)();
      lVar10 = *(long *)(unaff_x19 + 0x78);
      if (lVar10 == 0) goto LAB_035e11b0;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      uVar7 = (*DAT_086ef188)(lVar10);
      if (lVar11 == 0) goto LAB_035e11b0;
      if (DAT_086ef910 == (code *)0x0) {
        DAT_086ef910 = (code *)FUN_033d1b68(
                                           "UnityEngine.Transform::IsChildOf(UnityEngine.Transform)"
                                           );
      }
      uVar9 = (*DAT_086ef910)(lVar11,uVar7);
      if ((uVar9 & 1) == 0) goto LAB_035df864;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar11 = (*DAT_086ef188)();
      lVar10 = *(long *)(unaff_x19 + 0x30);
      if (lVar10 == 0) goto LAB_035e11b0;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      uVar7 = (*DAT_086ef188)(lVar10);
      if (lVar11 == 0) goto LAB_035e11b0;
      if (DAT_086ef910 == (code *)0x0) {
        DAT_086ef910 = (code *)FUN_033d1b68(
                                           "UnityEngine.Transform::IsChildOf(UnityEngine.Transform)"
                                           );
      }
      uVar9 = (*DAT_086ef910)(lVar11,uVar7);
      if ((uVar9 & 1) != 0) goto LAB_035df864;
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar11 = (*DAT_086ef190)();
      if (lVar11 == 0) goto LAB_035e11b0;
      if (DAT_086ef258 == (code *)0x0) {
        DAT_086ef258 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_layer()");
      }
      iVar6 = (*DAT_086ef258)(lVar11);
      if (iVar6 == 2) goto LAB_035df864;
      if (DAT_086f1fe0 == (code *)0x0) {
        DAT_086f1fe0 = (code *)FUN_033d1b68("UnityEngine.Collider::get_isTrigger()");
      }
      uVar9 = (*DAT_086f1fe0)();
      if ((uVar9 & 1) != 0) goto LAB_035df864;
      plVar13 = (long *)(unaff_x19 + 0x20);
      lVar11 = *plVar13;
      if (lVar11 == 0) goto LAB_035e11b0;
      if (*(int *)(lVar11 + 0x100) == 1) {
        uVar7 = *(undefined8 *)(lVar11 + 200);
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar9 = FUN_07a0d2c4(uVar7,0,0);
        if ((uVar9 & 1) != 0) {
          lVar11 = *plVar13;
          if (lVar11 == 0) goto LAB_035e11b0;
          if (*(int *)(lVar11 + 0x104) == 1) {
            uVar7 = *(undefined8 *)(lVar11 + 200);
            if (DAT_086ef188 == (code *)0x0) {
              DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            }
            lVar11 = (*DAT_086ef188)();
            if (lVar11 == 0) goto LAB_035e11b0;
            uVar8 = FUN_07a18d2c(lVar11,0);
            if (DAT_086d7c53 == '\0') {
              FUN_0335b6c8(&DAT_083d0300,1);
              DataMemoryBarrier(2,3);
              DAT_086d7c53 = '\x01';
            }
            if (*plVar13 == 0) goto LAB_035e11b0;
            puVar15 = *(undefined4 **)(DAT_083d0300 + 0xb8);
            lVar11 = FUN_035dcb1c(uVar8,param_2,param_3,*puVar15,puVar15[1],puVar15[2],puVar15[3],
                                  *(undefined4 *)(*plVar13 + 0x84),uVar7);
            plVar14 = (long *)(unaff_x19 + 0xa8);
            *plVar14 = lVar11;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              lVar11 = *plVar14;
            }
            if (lVar11 == 0) goto LAB_035e11b0;
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            lVar11 = (*DAT_086ef250)(lVar11);
            if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
              FUN_033b9870(DAT_083cb1e8);
            }
            lVar10 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
            if (lVar10 == 0) goto LAB_035e11b0;
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            uVar7 = (*DAT_086ef250)(lVar10);
            if (lVar11 == 0) goto LAB_035e11b0;
            if (DAT_086ef840 == (code *)0x0) {
              DAT_086ef840 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                 );
            }
            (*DAT_086ef840)(lVar11,uVar7,1);
          }
        }
      }
      FUN_035e11c0();
      if (*(int *)(unaff_x19 + 0x88) != 1) goto LAB_035e0200;
      uVar7 = *(undefined8 *)(unaff_x19 + 0x38);
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar9 = FUN_07a0d2c4(uVar7,0,0);
      if ((uVar9 & 1) == 0) {
LAB_035dffc0:
        if (*(int *)(unaff_x19 + 0x88) != 1) goto LAB_035e0200;
        uVar7 = *(undefined8 *)(unaff_x19 + 0x38);
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar9 = FUN_07a0d2c4(uVar7,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_035e11b0;
          uVar7 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0xb0);
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar9 = FUN_07a0d2c4(uVar7,0,0);
          if ((uVar9 & 1) != 0) {
            uVar7 = FUN_03c89df4();
            if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
              FUN_033b9870(DAT_083cf7d8);
            }
            uVar9 = FUN_07a11b14(uVar7,0);
            if ((uVar9 & 1) == 0) goto LAB_035dff04;
          }
        }
        iVar6 = *(int *)(unaff_x19 + 0x88);
        if (iVar6 == 1) {
          uVar7 = *(undefined8 *)(unaff_x19 + 0x38);
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar9 = FUN_07a0d2c4(uVar7,0,0);
          if ((uVar9 & 1) == 0) goto LAB_035e0200;
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_035e11b0;
          uVar7 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0xb0);
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar9 = FUN_07a0d2c4(uVar7,0,0);
          if ((uVar9 & 1) == 0) {
LAB_035e0200:
            iVar6 = *(int *)(unaff_x19 + 0x88);
            goto LAB_035e0204;
          }
          uVar7 = FUN_03c89df4();
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870(DAT_083cf7d8);
          }
          uVar9 = FUN_07a11b14(uVar7,0);
          if ((uVar9 & 1) == 0) goto LAB_035e0200;
          lVar11 = *(long *)(unaff_x19 + 0x38);
          if (DAT_086ef188 == (code *)0x0) {
            DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          }
          uVar7 = (*DAT_086ef188)();
          if (lVar11 == 0) goto LAB_035e11b0;
          *(undefined8 *)(lVar11 + 0x4b0) = uVar7;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + (lVar11 + 0x4b0U >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << (lVar11 + 0x4b0U >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar11 = *plVar13;
          if (lVar11 == 0) goto LAB_035e11b0;
          if (*(int *)(lVar11 + 0xe8) != 0) goto LAB_035e0250;
          if (*(int *)(lVar11 + 0xec) != 1) {
            if (*(int *)(lVar11 + 0xec) == 0) {
              lVar11 = FUN_03c89df4();
              lVar10 = *(long *)(unaff_x19 + 0x30);
              if (lVar10 == 0) goto LAB_035e11b0;
              uVar2 = *(undefined4 *)(unaff_x19 + 0x28);
              if (DAT_086ef188 == (code *)0x0) {
                DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
              }
              uVar7 = (*DAT_086ef188)(lVar10);
              if ((*(long *)(unaff_x19 + 0x30) == 0) || (lVar11 == 0)) goto LAB_035e11b0;
              FUN_035afb18(lVar11,uVar2,0x100000001,uVar7,
                           *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x4a4),
                           *(undefined1 *)(unaff_x19 + 0x81),0);
              goto LAB_035dff84;
            }
            goto LAB_035e0250;
          }
          lVar11 = FUN_03c89df4();
          if ((*plVar13 == 0) || (lVar10 = *(long *)(unaff_x19 + 0x30), lVar10 == 0))
          goto LAB_035e11b0;
          uVar2 = *(undefined4 *)(*plVar13 + 0x44);
          if (DAT_086ef188 == (code *)0x0) {
            DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          }
          uVar7 = (*DAT_086ef188)(lVar10);
          if ((*(long *)(unaff_x19 + 0x30) == 0) || (lVar11 == 0)) goto LAB_035e11b0;
          FUN_035afb18(lVar11,uVar2,0x100000001,uVar7,
                       *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x4a4),0,0);
          if ((*(long *)(unaff_x19 + 0x30) == 0) ||
             (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x500), lVar11 == 0))
          goto LAB_035e11b0;
          FUN_07a22574(lVar11,0);
          lVar11 = *plVar13;
          if (lVar11 == 0) goto LAB_035e11b0;
          if (*(int *)(lVar11 + 0x114) == 0) {
            if ((*(long *)(unaff_x19 + 0x38) == 0) ||
               (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x160), lVar10 == 0))
            goto LAB_035e11b0;
            uVar9 = FUN_04ab1208(lVar10,*(undefined8 *)(lVar11 + 0x18),DAT_083f44a8);
            if ((uVar9 & 1) != 0) goto LAB_035e0f14;
            if (*plVar13 == 0) goto LAB_035e11b0;
            uVar9 = FUN_0666e380(*(undefined8 *)(*plVar13 + 0x18),
                                 **(undefined8 **)(DAT_083d16d8 + 0xb8));
            if ((uVar9 & 1) != 0) goto LAB_035e0f14;
          }
          else {
LAB_035e0f14:
            if (*plVar13 == 0) goto LAB_035e11b0;
            if (*(int *)(*plVar13 + 0x114) != 1) goto LAB_035e0250;
          }
          if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_035e11b0;
          uVar7 = *(undefined8 *)(unaff_x19 + 200);
          uVar8 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x78),0);
          if (DAT_086d7c53 == '\0') {
            FUN_0335b6c8(&DAT_083d0300,1);
            DataMemoryBarrier(2,3);
            DAT_086d7c53 = '\x01';
          }
          puVar15 = *(undefined4 **)(DAT_083d0300 + 0xb8);
          lVar11 = FUN_035dc5a8(uVar8,param_2,param_3,*puVar15,puVar15[1],puVar15[2],puVar15[3],
                                uVar7);
          if (lVar11 == 0) goto LAB_035e11b0;
          if (DAT_086ef250 == (code *)0x0) {
            DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
          }
          lVar10 = (*DAT_086ef250)(lVar11);
          if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
            FUN_033b9870(DAT_083cb1e8);
          }
          lVar16 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
          if (lVar16 == 0) goto LAB_035e11b0;
          if (DAT_086ef250 == (code *)0x0) {
            DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
          }
          uVar7 = (*DAT_086ef250)(lVar16);
          if (lVar10 == 0) goto LAB_035e11b0;
          if (DAT_086ef840 == (code *)0x0) {
            DAT_086ef840 = (code *)FUN_033d1b68(
                                               "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                               );
          }
          (*DAT_086ef840)(lVar10,uVar7,1);
          lVar10 = FUN_03fa1bc8(lVar11,DAT_0840cb20);
          lVar16 = *plVar13;
          if (((lVar16 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) || (lVar10 == 0))
          goto LAB_035e11b0;
          FUN_035c4294(*(undefined4 *)(lVar16 + 0x4c),(float)*(int *)(lVar16 + 0x54),
                       *(undefined4 *)(lVar16 + 0x88),lVar10,*(undefined8 *)(lVar16 + 0x18),
                       *(undefined4 *)(lVar16 + 0x34),*(undefined8 *)(lVar16 + 0xb8),
                       *(undefined8 *)(lVar16 + 0xc0),0,*(undefined8 *)(unaff_x19 + 0x48),
                       *(undefined8 *)(unaff_x19 + 0x38));
          lVar11 = FUN_03fa1bc8(lVar11,DAT_0840cb20);
          uVar7 = FUN_03c89df4();
          if (lVar11 == 0) goto LAB_035e11b0;
          puVar12 = (undefined8 *)(lVar11 + 0x20);
          *puVar12 = uVar7;
          iVar6 = DAT_08908cd0;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar10 = DAT_083f4490;
          if (((*(long *)(unaff_x19 + 0x38) == 0) || (*plVar13 == 0)) ||
             (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x160), lVar11 == 0))
          goto LAB_035e11b0;
          uVar7 = *(undefined8 *)(*plVar13 + 0x18);
          lVar16 = *(long *)(lVar11 + 0x10);
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_035e11b0;
          uVar3 = *(uint *)(lVar11 + 0x18);
          if (uVar3 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar3 + 1;
            puVar12 = (undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
            *puVar12 = uVar7;
            if (iVar6 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            goto LAB_035e0250;
          }
          lVar10 = *(long *)(lVar10 + 0x20);
LAB_035e0cc4:
          FUN_04ab0e54(lVar11,uVar7,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x70));
        }
        else {
LAB_035e0204:
          if (iVar6 == 2) {
            lVar11 = *plVar13;
            if (lVar11 == 0) goto LAB_035e11b0;
            if (*(int *)(lVar11 + 0xe8) == 0) {
              if (*(int *)(lVar11 + 0xec) == 1) {
                FUN_035e1690();
                if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_035e11b0;
                lVar11 = FUN_03c89df4(*(long *)(unaff_x19 + 0x40),DAT_08405880);
                lVar10 = *plVar13;
                if (lVar10 == 0) goto LAB_035e11b0;
                if (*(int *)(lVar10 + 0x114) == 0) {
                  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x28) == 0)) goto LAB_035e11b0;
                  uVar9 = FUN_04ab1208(*(long *)(lVar11 + 0x28),*(undefined8 *)(lVar10 + 0x18),
                                       DAT_083f44a8);
                  if ((uVar9 & 1) != 0) goto LAB_035e0774;
                  if (*plVar13 == 0) goto LAB_035e11b0;
                  uVar9 = FUN_0666e380(*(undefined8 *)(*plVar13 + 0x18),
                                       **(undefined8 **)(DAT_083d16d8 + 0xb8));
                  if ((uVar9 & 1) != 0) goto LAB_035e0774;
                }
                else {
LAB_035e0774:
                  if (*plVar13 == 0) goto LAB_035e11b0;
                  if (*(int *)(*plVar13 + 0x114) != 1) goto LAB_035e0250;
                }
                if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_035e11b0;
                uVar7 = *(undefined8 *)(unaff_x19 + 200);
                uVar8 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x78),0);
                if (DAT_086d7c53 == '\0') {
                  FUN_0335b6c8(&DAT_083d0300,1);
                  DataMemoryBarrier(2,3);
                  DAT_086d7c53 = '\x01';
                }
                puVar15 = *(undefined4 **)(DAT_083d0300 + 0xb8);
                lVar10 = FUN_035dc5a8(uVar8,param_2,param_3,*puVar15,puVar15[1],puVar15[2],
                                      puVar15[3],uVar7);
                if (lVar10 == 0) goto LAB_035e11b0;
                if (DAT_086ef250 == (code *)0x0) {
                  DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
                }
                lVar16 = (*DAT_086ef250)(lVar10);
                if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
                  FUN_033b9870(DAT_083cb1e8);
                }
                lVar17 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
                if (lVar17 == 0) goto LAB_035e11b0;
                if (DAT_086ef250 == (code *)0x0) {
                  DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
                }
                uVar7 = (*DAT_086ef250)(lVar17);
                if (lVar16 == 0) goto LAB_035e11b0;
                if (DAT_086ef840 == (code *)0x0) {
                  DAT_086ef840 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                  );
                }
                (*DAT_086ef840)(lVar16,uVar7,1);
                lVar10 = FUN_03fa1bc8(lVar10,DAT_0840cb20);
                lVar16 = *plVar13;
                if (((((lVar16 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) || (lVar10 == 0)) ||
                    ((FUN_035c4294(*(undefined4 *)(lVar16 + 0x4c),(float)*(int *)(lVar16 + 0x54),
                                   *(undefined4 *)(lVar16 + 0x88),lVar10,
                                   *(undefined8 *)(lVar16 + 0x18),*(undefined4 *)(lVar16 + 0x34),
                                   *(undefined8 *)(lVar16 + 0xb8),*(undefined8 *)(lVar16 + 0xc0),
                                   lVar11,*(undefined8 *)(unaff_x19 + 0x48),
                                   *(undefined8 *)(unaff_x19 + 0x38)), lVar10 = DAT_083f4490,
                     lVar11 == 0 || (*plVar13 == 0)))) ||
                   (lVar11 = *(long *)(lVar11 + 0x28), lVar11 == 0)) goto LAB_035e11b0;
                uVar7 = *(undefined8 *)(*plVar13 + 0x18);
                lVar16 = *(long *)(lVar11 + 0x10);
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar16 == 0) goto LAB_035e11b0;
                uVar3 = *(uint *)(lVar11 + 0x18);
                if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_035e0cc0;
                *(uint *)(lVar11 + 0x18) = uVar3 + 1;
                puVar12 = (undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
                *puVar12 = uVar7;
                if (DAT_08908cd0 != 0) {
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
              }
              else if (*(int *)(lVar11 + 0xec) == 0) {
                FUN_035e1690();
              }
            }
          }
          else if (iVar6 == 0) {
            lVar11 = *plVar13;
            if (lVar11 == 0) goto LAB_035e11b0;
            if (*(int *)(lVar11 + 0xe8) == 0) {
              if (*(int *)(lVar11 + 0xec) == 1) {
                FUN_035e1488();
                if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_035e11b0;
                if (*(int *)(*(long *)(unaff_x19 + 0x20) + 0x114) == 0) {
                  if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                      (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0xdb0), lVar11 == 0)) ||
                     ((lVar11 = FUN_03c89df4(lVar11,DAT_08405888), lVar11 == 0 ||
                      ((*plVar13 == 0 || (*(long *)(lVar11 + 0x20) == 0)))))) goto LAB_035e11b0;
                  uVar9 = FUN_04ab1208(*(long *)(lVar11 + 0x20),*(undefined8 *)(*plVar13 + 0x18),
                                       DAT_083f44a8);
                  if ((uVar9 & 1) != 0) goto LAB_035e04a4;
                  if (*plVar13 == 0) goto LAB_035e11b0;
                  uVar9 = FUN_0666e380(*(undefined8 *)(*plVar13 + 0x18),
                                       **(undefined8 **)(DAT_083d16d8 + 0xb8));
                  if ((uVar9 & 1) != 0) goto LAB_035e04a4;
                }
                else {
LAB_035e04a4:
                  if (*plVar13 == 0) goto LAB_035e11b0;
                  if (*(int *)(*plVar13 + 0x114) != 1) goto LAB_035e0250;
                }
                if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_035e11b0;
                uVar7 = *(undefined8 *)(unaff_x19 + 200);
                uVar8 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x78),0);
                if (DAT_086d7c53 == '\0') {
                  FUN_0335b6c8(&DAT_083d0300,1);
                  DataMemoryBarrier(2,3);
                  DAT_086d7c53 = '\x01';
                }
                puVar15 = *(undefined4 **)(DAT_083d0300 + 0xb8);
                lVar11 = FUN_035dc5a8(uVar8,param_2,param_3,*puVar15,puVar15[1],puVar15[2],
                                      puVar15[3],uVar7);
                if (lVar11 == 0) goto LAB_035e11b0;
                if (DAT_086ef250 == (code *)0x0) {
                  DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
                }
                lVar10 = (*DAT_086ef250)(lVar11);
                if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
                  FUN_033b9870(DAT_083cb1e8);
                }
                lVar16 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
                if (lVar16 == 0) goto LAB_035e11b0;
                if (DAT_086ef250 == (code *)0x0) {
                  DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
                }
                uVar7 = (*DAT_086ef250)(lVar16);
                if (lVar10 == 0) goto LAB_035e11b0;
                if (DAT_086ef840 == (code *)0x0) {
                  DAT_086ef840 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                  );
                }
                (*DAT_086ef840)(lVar10,uVar7,1);
                lVar11 = FUN_03fa1bc8(lVar11,DAT_0840cb20);
                lVar10 = *plVar13;
                if (((lVar10 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) || (lVar11 == 0))
                goto LAB_035e11b0;
                FUN_035c4294(*(undefined4 *)(lVar10 + 0x4c),(float)*(int *)(lVar10 + 0x54),
                             *(undefined4 *)(lVar10 + 0x88),lVar11,*(undefined8 *)(lVar10 + 0x18),
                             *(undefined4 *)(lVar10 + 0x34),*(undefined8 *)(lVar10 + 0xb8),
                             *(undefined8 *)(lVar10 + 0xc0),0,*(undefined8 *)(unaff_x19 + 0x48),
                             *(undefined8 *)(unaff_x19 + 0x38));
                if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                    (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0xdb0), lVar11 == 0)) ||
                   ((lVar11 = FUN_03c89df4(lVar11,DAT_08405888), lVar10 = DAT_083f4490, lVar11 == 0
                    || ((*plVar13 == 0 || (lVar11 = *(long *)(lVar11 + 0x20), lVar11 == 0))))))
                goto LAB_035e11b0;
                uVar7 = *(undefined8 *)(*plVar13 + 0x18);
                lVar16 = *(long *)(lVar11 + 0x10);
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar16 == 0) goto LAB_035e11b0;
                uVar3 = *(uint *)(lVar11 + 0x18);
                if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_035e0cc0;
                *(uint *)(lVar11 + 0x18) = uVar3 + 1;
                puVar12 = (undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
                *puVar12 = uVar7;
                if (DAT_08908cd0 != 0) {
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
              }
              else if (*(int *)(lVar11 + 0xec) == 0) {
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
        uVar9 = FUN_07a119fc(uVar7,0,0);
        if ((uVar9 & 1) == 0) goto LAB_035dffc0;
LAB_035dff04:
        lVar11 = *plVar13;
        if (lVar11 == 0) goto LAB_035e11b0;
        if (*(int *)(lVar11 + 0xe8) == 0) {
          if (*(int *)(lVar11 + 0xec) == 1) {
            lVar10 = *(long *)(unaff_x19 + 0x30);
            if (lVar10 == 0) goto LAB_035e11b0;
            lVar16 = *(long *)(unaff_x19 + 0x38);
            uVar2 = *(undefined4 *)(lVar11 + 0x44);
            if (DAT_086ef188 == (code *)0x0) {
              DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            }
            uVar7 = (*DAT_086ef188)(lVar10);
            if ((*(long *)(unaff_x19 + 0x30) == 0) || (lVar16 == 0)) goto LAB_035e11b0;
            FUN_035afce0(lVar16,uVar2,0x100000001,uVar7,
                         *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x4a4),0,0);
            if ((*(long *)(unaff_x19 + 0x30) == 0) ||
               (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x500), lVar11 == 0))
            goto LAB_035e11b0;
            FUN_07a22574(lVar11,0);
            lVar11 = *plVar13;
            if (lVar11 == 0) goto LAB_035e11b0;
            if (*(int *)(lVar11 + 0x114) == 0) {
              if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                 (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x160), lVar10 == 0))
              goto LAB_035e11b0;
              uVar9 = FUN_04ab1208(lVar10,*(undefined8 *)(lVar11 + 0x18),DAT_083f44a8);
              if ((uVar9 & 1) != 0) goto LAB_035e0a80;
              if (*plVar13 == 0) goto LAB_035e11b0;
              uVar9 = FUN_0666e380(*(undefined8 *)(*plVar13 + 0x18),
                                   **(undefined8 **)(DAT_083d16d8 + 0xb8));
              if ((uVar9 & 1) != 0) goto LAB_035e0a80;
            }
            else {
LAB_035e0a80:
              if (*plVar13 == 0) goto LAB_035e11b0;
              if (*(int *)(*plVar13 + 0x114) != 1) goto LAB_035e0250;
            }
            if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_035e11b0;
            uVar7 = *(undefined8 *)(unaff_x19 + 200);
            uVar8 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x78),0);
            if (DAT_086d7c53 == '\0') {
              FUN_0335b6c8(&DAT_083d0300,1);
              DataMemoryBarrier(2,3);
              DAT_086d7c53 = '\x01';
            }
            puVar15 = *(undefined4 **)(DAT_083d0300 + 0xb8);
            lVar11 = FUN_035dc5a8(uVar8,param_2,param_3,*puVar15,puVar15[1],puVar15[2],puVar15[3],
                                  uVar7);
            if (lVar11 == 0) goto LAB_035e11b0;
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            lVar10 = (*DAT_086ef250)(lVar11);
            if (*(int *)(DAT_083cb1e8 + 0xe0) == 0) {
              FUN_033b9870(DAT_083cb1e8);
            }
            lVar16 = *(long *)(*(long *)(DAT_083cb1e8 + 0xb8) + 0x10);
            if (lVar16 == 0) goto LAB_035e11b0;
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            uVar7 = (*DAT_086ef250)(lVar16);
            if (lVar10 == 0) goto LAB_035e11b0;
            if (DAT_086ef840 == (code *)0x0) {
              DAT_086ef840 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                 );
            }
            (*DAT_086ef840)(lVar10,uVar7,1);
            lVar11 = FUN_03fa1bc8(lVar11,DAT_0840cb20);
            lVar10 = *plVar13;
            if (((lVar10 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) || (lVar11 == 0))
            goto LAB_035e11b0;
            FUN_035c4294(*(undefined4 *)(lVar10 + 0x4c),(float)*(int *)(lVar10 + 0x54),
                         *(undefined4 *)(lVar10 + 0x88),lVar11,*(undefined8 *)(lVar10 + 0x18),
                         *(undefined4 *)(lVar10 + 0x34),*(undefined8 *)(lVar10 + 0xb8),
                         *(undefined8 *)(lVar10 + 0xc0),0,*(undefined8 *)(unaff_x19 + 0x48),
                         *(undefined8 *)(unaff_x19 + 0x38));
            lVar10 = DAT_083f4490;
            if (((*(long *)(unaff_x19 + 0x38) == 0) || (*plVar13 == 0)) ||
               (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x160), lVar11 == 0))
            goto LAB_035e11b0;
            uVar7 = *(undefined8 *)(*plVar13 + 0x18);
            lVar16 = *(long *)(lVar11 + 0x10);
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar16 == 0) goto LAB_035e11b0;
            uVar3 = *(uint *)(lVar11 + 0x18);
            if (uVar3 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar3 + 1;
              puVar12 = (undefined8 *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
              *puVar12 = uVar7;
              if (DAT_08908cd0 != 0) {
                puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              goto LAB_035e0250;
            }
LAB_035e0cc0:
            lVar10 = *(long *)(lVar10 + 0x20);
            goto LAB_035e0cc4;
          }
          if (*(int *)(lVar11 + 0xec) == 0) {
            lVar11 = *(long *)(unaff_x19 + 0x30);
            if (lVar11 == 0) goto LAB_035e11b0;
            lVar10 = *(long *)(unaff_x19 + 0x38);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x28);
            if (DAT_086ef188 == (code *)0x0) {
              DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            }
            uVar7 = (*DAT_086ef188)(lVar11);
            if ((*(long *)(unaff_x19 + 0x30) == 0) || (lVar10 == 0)) goto LAB_035e11b0;
            FUN_035afce0(lVar10,uVar2,0x100000001,uVar7,
                         *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x4a4),
                         *(undefined1 *)(unaff_x19 + 0x81),0);
LAB_035dff84:
            if ((*(long *)(unaff_x19 + 0x30) == 0) ||
               (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x500), lVar11 == 0))
            goto LAB_035e11b0;
            FUN_07a22574(lVar11,0);
            if (*(char *)(unaff_x19 + 0x81) != '\0') {
              if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                 (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x560), lVar11 == 0))
              goto LAB_035e11b0;
              FUN_07a22574(lVar11,0);
            }
          }
        }
      }
LAB_035e0250:
      uVar7 = *(undefined8 *)(unaff_x19 + 0x90);
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar9 = FUN_07a0d2c4(uVar7,0,0);
      if ((uVar9 & 1) != 0) {
        lVar11 = *(long *)(unaff_x19 + 0x90);
        if (lVar11 == 0) goto LAB_035e11b0;
        if (DAT_086ef278 == (code *)0x0) {
          DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
        (*DAT_086ef278)(lVar11,0);
      }
      lVar11 = *(long *)(unaff_x19 + 0x68);
      *(undefined1 *)(unaff_x19 + 100) = 1;
      if (lVar11 == 0) goto LAB_035e11b0;
      if (DAT_086f1fd0 == (code *)0x0) {
        DAT_086f1fd0 = (code *)FUN_033d1b68("UnityEngine.Collider::set_enabled(System.Boolean)");
      }
      (*DAT_086f1fd0)(lVar11,0);
LAB_035e02e8:
      FUN_035e182c();
    }
  }
  if (DAT_086ef190 == (code *)0x0) {
    DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
  }
  lVar11 = (*DAT_086ef190)();
  if (lVar11 != 0) {
    if (DAT_086ef280 == (code *)0x0) {
      DAT_086ef280 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeSelf()");
    }
    uVar9 = (*DAT_086ef280)(lVar11);
    if ((uVar9 & 1) == 0) {
      return;
    }
    lVar11 = *(long *)(unaff_x19 + 0xf8);
    if (lVar11 != 0) {
      if (DAT_086f1e98 == (code *)0x0) {
        DAT_086f1e98 = (code *)FUN_033d1b68(
                                           "UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)"
                                           );
      }
      (*DAT_086f1e98)(lVar11,0);
      lVar11 = *(long *)(unaff_x19 + 0xf8);
      if (lVar11 != 0) {
        if (DAT_086f1e78 == (code *)0x0) {
          DAT_086f1e78 = (code *)FUN_033d1b68(
                                             "UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)"
                                             );
        }
                    /* WARNING: Could not recover jumptable at 0x035e03d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_086f1e78)(lVar11,0);
        return;
      }
    }
  }
LAB_035e11b0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


