/*
FUNCTION_NAME: Autohand.OVRMover$$Turning
ENTRY_POINT: 035cec48
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_8;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Autohand_OVRMover__Turning(void)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  undefined1 unaff_w21;
  long *plVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  FUN_0335b6c8(&DAT_084059a0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08405b10,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840c500,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840ca58,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840cb30,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840cbe0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0840cd68,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cbb78,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08413ee8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cf7d8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842d3f8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842d720,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08432e78,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0843c690,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0844dd30,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08432e58,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08432e68,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08432e40,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08432e48,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x5b7) = unaff_w21;
  plVar14 = (long *)(unaff_x19 + 0x20);
  lVar9 = *plVar14;
  if (lVar9 == 0) goto LAB_035cff74;
  if (*(int *)(lVar9 + 0xd58) == 1) {
    uVar13 = *(undefined8 *)(lVar9 + 0xe78);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = FUN_07a119fc(uVar13,0,0);
    if ((uVar5 & 1) == 0) {
      lVar9 = *plVar14;
      if (lVar9 == 0) goto LAB_035cff74;
      goto LAB_035cee14;
    }
LAB_035cee4c:
    lVar9 = *plVar14;
    plVar6 = (long *)FUN_07a07854(DAT_08432e58,0);
    if (lVar9 == 0) goto LAB_035cff74;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else if (*plVar6 != DAT_083cbb78) {
      plVar6 = (long *)0x0;
    }
    *(long **)(lVar9 + 0xe78) = plVar6;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + (lVar9 + 0xe78U >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << (lVar9 + 0xe78U >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
LAB_035cee14:
    if (*(int *)(lVar9 + 0xd70) == 1) {
      uVar13 = *(undefined8 *)(lVar9 + 0xe78);
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar5 = FUN_07a119fc(uVar13,0,0);
      if ((uVar5 & 1) != 0) goto LAB_035cee4c;
    }
  }
  lVar9 = *plVar14;
  if (lVar9 == 0) goto LAB_035cff74;
  if (*(int *)(lVar9 + 0xd58) == 1) {
    uVar13 = *(undefined8 *)(lVar9 + 0xe78);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = FUN_07a0d2c4(uVar13,0,0);
    if ((uVar5 & 1) == 0) {
      lVar9 = *plVar14;
      if (lVar9 == 0) goto LAB_035cff74;
      goto LAB_035cef18;
    }
  }
  else {
LAB_035cef18:
    if (*(int *)(lVar9 + 0xd70) != 1) {
      return;
    }
    uVar13 = *(undefined8 *)(lVar9 + 0xe78);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = FUN_07a0d2c4(uVar13,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  lVar9 = *plVar14;
  if (lVar9 != 0) {
    uVar13 = *(undefined8 *)(lVar9 + 0xe78);
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc6 = '\x01';
    }
    puVar10 = *(undefined4 **)(DAT_083d2c90 + 0xb8);
    uVar17 = *puVar10;
    uVar16 = puVar10[1];
    uVar15 = puVar10[2];
    if (DAT_086d7c53 == '\0') {
      FUN_0335b6c8(&DAT_083d0300,1);
      DataMemoryBarrier(2,3);
      DAT_086d7c53 = '\x01';
    }
    puVar10 = *(undefined4 **)(DAT_083d0300 + 0xb8);
    uVar21 = *puVar10;
    uVar20 = puVar10[1];
    uVar19 = puVar10[2];
    uVar18 = puVar10[3];
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar13 = FUN_04086154(uVar17,uVar16,uVar15,uVar21,uVar20,uVar19,uVar18,uVar13,DAT_08413ee8);
    *(undefined8 *)(lVar9 + 0xfa8) = uVar13;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + (lVar9 + 0xfa8U >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << (lVar9 + 0xfa8U >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar9 = FUN_03398a84(DAT_083cbb78);
    FUN_07a0de70(lVar9,0);
    if (lVar9 != 0) {
      FUN_07a11c58(lVar9,DAT_0843c690,0);
      if (DAT_086ef250 == (code *)0x0) {
        DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
      }
      lVar7 = (*DAT_086ef250)(lVar9);
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      uVar13 = (*DAT_086ef188)();
      if (lVar7 != 0) {
        if (DAT_086ef840 == (code *)0x0) {
          DAT_086ef840 = (code *)FUN_033d1b68(
                                             "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                             );
        }
        (*DAT_086ef840)(lVar7,uVar13,1);
        if (DAT_086ef250 == (code *)0x0) {
          DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
        }
        lVar7 = (*DAT_086ef250)(lVar9);
        if (lVar7 != 0) {
          if (DAT_086ef988 == (code *)0x0) {
            DAT_086ef988 = (code *)FUN_033d1b68(
                                               "UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)"
                                               );
          }
          (*DAT_086ef988)(lVar7);
          if ((*plVar14 != 0) && (lVar7 = *(long *)(*plVar14 + 0xfa8), lVar7 != 0)) {
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            lVar7 = (*DAT_086ef250)(lVar7);
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            uVar13 = (*DAT_086ef250)(lVar9);
            if (lVar7 != 0) {
              if (DAT_086ef840 == (code *)0x0) {
                DAT_086ef840 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                  );
              }
              (*DAT_086ef840)(lVar7,uVar13,1);
              if ((*plVar14 != 0) && (lVar9 = *(long *)(*plVar14 + 0xfa8), lVar9 != 0)) {
                if (DAT_086ef250 == (code *)0x0) {
                  DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
                }
                lVar9 = (*DAT_086ef250)(lVar9);
                lVar7 = *plVar14;
                if ((lVar7 != 0) && (lVar9 != 0)) {
                  FUN_07a18224(*(undefined4 *)(lVar7 + 0xe90),*(undefined4 *)(lVar7 + 0xe94),
                               *(undefined4 *)(lVar7 + 0xe98),lVar9,0);
                  if ((*plVar14 != 0) && (lVar9 = *(long *)(*plVar14 + 0xfa8), lVar9 != 0)) {
                    FUN_03fa1ab4(lVar9,DAT_0840c500);
                    if ((*plVar14 != 0) && (lVar9 = *(long *)(*plVar14 + 0xfa8), lVar9 != 0)) {
                      lVar9 = FUN_03fa1bc8(lVar9,DAT_0840cb30);
                      lVar7 = *plVar14;
                      if (lVar7 != 0) {
                        *(long *)(lVar7 + 0x1d0) = lVar9;
                        if (DAT_08908cd0 != 0) {
                          puVar1 = &DAT_0873ccb0 + (lVar7 + 0x1d0U >> 0x12 & 0x7fff);
                          do {
                            cVar3 = '\x01';
                            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar4) {
                              *puVar1 = *puVar1 | 1L << (lVar7 + 0x1d0U >> 0xc & 0x3f);
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                          lVar7 = *plVar14;
                          if (lVar7 == 0) goto LAB_035cff74;
                        }
                        if ((*(long *)(lVar7 + 0xfa8) != 0) &&
                           (uVar13 = FUN_03fa1bc8(*(long *)(lVar7 + 0xfa8),DAT_0840ca58), lVar9 != 0
                           )) {
                          puVar11 = (undefined8 *)(lVar9 + 0x38);
                          *puVar11 = uVar13;
                          if (DAT_08908cd0 != 0) {
                            puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
                            do {
                              cVar3 = '\x01';
                              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar4) {
                                *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
                                cVar3 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar3 != '\0');
                          }
                          uVar13 = FUN_03c89df4();
                          puVar11 = (undefined8 *)(lVar9 + 0x28);
                          *puVar11 = uVar13;
                          if (DAT_08908cd0 != 0) {
                            puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
                            do {
                              cVar3 = '\x01';
                              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar4) {
                                *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
                                cVar3 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar3 != '\0');
                          }
                          if ((*plVar14 != 0) && (lVar9 = *(long *)(*plVar14 + 0xfa8), lVar9 != 0))
                          {
                            FUN_07a11c58(lVar9,DAT_08432e58,0);
                            if ((*plVar14 != 0) && (lVar9 = *(long *)(*plVar14 + 0xfa8), lVar9 != 0)
                               ) {
                              if (DAT_086ef250 == (code *)0x0) {
                                DAT_086ef250 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                              }
                              lVar9 = (*DAT_086ef250)(lVar9);
                              if ((lVar9 != 0) &&
                                 (lVar9 = FUN_07a1ba3c(lVar9,DAT_08432e48,0), lVar9 != 0)) {
                                if (DAT_086ef190 == (code *)0x0) {
                                  DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                }
                                lVar9 = (*DAT_086ef190)(lVar9);
                                if (lVar9 != 0) {
                                  if (DAT_086ef250 == (code *)0x0) {
                                    DAT_086ef250 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                                  }
                                  lVar7 = (*DAT_086ef250)(lVar9);
                                  lVar12 = *plVar14;
                                  if ((lVar12 != 0) && (lVar7 != 0)) {
                                    FUN_07a19820(*(undefined4 *)(lVar12 + 0xee8),
                                                 *(undefined4 *)(lVar12 + 0xeec),
                                                 *(undefined4 *)(lVar12 + 0xef0),lVar7,0);
                                    if (DAT_086ef250 == (code *)0x0) {
                                      DAT_086ef250 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                                    }
                                    lVar7 = (*DAT_086ef250)(lVar9);
                                    if ((lVar7 != 0) &&
                                       (lVar7 = FUN_07a1ba3c(lVar7,DAT_08432e40,0), lVar7 != 0)) {
                                      plVar6 = (long *)FUN_03c89df4(lVar7,DAT_084059a0);
                                      lVar7 = *plVar14;
                                      if ((lVar7 != 0) && (plVar6 != (long *)0x0)) {
                                        (**(code **)(*plVar6 + 0x2a8))
                                                  (*(undefined4 *)(lVar7 + 0xea8),
                                                   *(undefined4 *)(lVar7 + 0xeac),
                                                   *(undefined4 *)(lVar7 + 0xeb0),
                                                   *(undefined4 *)(lVar7 + 0xeb4),plVar6,
                                                   *(undefined8 *)(*plVar6 + 0x2b0));
                                        plVar8 = (long *)FUN_03fa1bc8(lVar9,DAT_0840cbe0);
                                        lVar7 = *plVar14;
                                        if ((lVar7 != 0) && (plVar8 != (long *)0x0)) {
                                          (**(code **)(*plVar8 + 0x2a8))
                                                    (*(undefined4 *)(lVar7 + 0xeb8),
                                                     *(undefined4 *)(lVar7 + 0xebc),
                                                     *(undefined4 *)(lVar7 + 0xec0),
                                                     *(undefined4 *)(lVar7 + 0xec4),plVar8,
                                                     *(undefined8 *)(*plVar8 + 0x2b0));
                                          lVar7 = *plVar14;
                                          if ((lVar7 != 0) && (*(long *)(lVar7 + 0xfa8) != 0)) {
                                            uVar13 = FUN_03fa1bc8(*(long *)(lVar7 + 0xfa8),
                                                                  DAT_0840ca58);
                                            *(undefined8 *)(lVar7 + 0x1010) = uVar13;
                                            if (DAT_08908cd0 != 0) {
                                              puVar1 = &DAT_0873ccb0 +
                                                       (lVar7 + 0x1010U >> 0x12 & 0x7fff);
                                              do {
                                                cVar3 = '\x01';
                                                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                if (bVar4) {
                                                  *puVar1 = *puVar1 | 1L << (lVar7 + 0x1010U >> 0xc
                                                                            & 0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar3 != '\0');
                                            }
                                            lVar7 = *plVar14;
                                            if (lVar7 != 0) {
                                              if ((*(int *)(lVar7 + 0xc8c) == 4) ||
                                                 (*(int *)(lVar7 + 0xd58) == 0)) {
                                                lVar9 = FUN_03fa1bc8(lVar9,DAT_0840cbe0);
                                                if (lVar9 == 0) goto LAB_035cff74;
                                                if (DAT_086ef168 == (code *)0x0) {
                                                  DAT_086ef168 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                                  );
                                                }
                                                (*DAT_086ef168)(lVar9,0);
                                                if (DAT_086ef190 == (code *)0x0) {
                                                  DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                                }
                                                lVar9 = (*DAT_086ef190)(plVar6);
                                                if (lVar9 == 0) goto LAB_035cff74;
                                                if (DAT_086ef278 == (code *)0x0) {
                                                  DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                                                }
                                                (*DAT_086ef278)(lVar9,0);
                                                lVar7 = *plVar14;
                                                if (lVar7 == 0) goto LAB_035cff74;
                                              }
                                              if (*(int *)(lVar7 + 0xd68) == 1) {
                                                uVar13 = *(undefined8 *)(lVar7 + 0xe88);
                                                if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                                  FUN_033b9870();
                                                }
                                                uVar5 = FUN_07a0d2c4(uVar13,0,0);
                                                if ((uVar5 & 1) != 0) {
                                                  if (*plVar14 == 0) goto LAB_035cff74;
                                                  uVar13 = *(undefined8 *)(*plVar14 + 0xe80);
                                                  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                                    FUN_033b9870();
                                                  }
                                                  uVar5 = FUN_07a0d2c4(uVar13,0,0);
                                                  if ((uVar5 & 1) != 0) {
                                                    if (*plVar14 == 0) goto LAB_035cff74;
                                                    FUN_07ade03c(plVar8,*(undefined8 *)
                                                                         (*plVar14 + 0xe88),0);
                                                    if (*plVar14 == 0) goto LAB_035cff74;
                                                    FUN_07ade03c(plVar6,*(undefined8 *)
                                                                         (*plVar14 + 0xe80),0);
                                                  }
                                                }
                                              }
                                              lVar9 = *plVar14;
                                              if (lVar9 != 0) {
                                                if (*(int *)(lVar9 + 0xd70) == 1) {
                                                  lVar7 = *(long *)(lVar9 + 0xfa8);
                                                  if (lVar7 == 0) goto LAB_035cff74;
                                                  if (DAT_086ef250 == (code *)0x0) {
                                                    DAT_086ef250 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                                                  }
                                                  lVar7 = (*DAT_086ef250)(lVar7);
                                                  if ((lVar7 == 0) ||
                                                     (lVar7 = FUN_07a1ba3c(lVar7,DAT_08432e78,0),
                                                     lVar7 == 0)) goto LAB_035cff74;
                                                  if (DAT_086ef190 == (code *)0x0) {
                                                    DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                                  }
                                                  lVar7 = (*DAT_086ef190)(lVar7);
                                                  if (lVar7 == 0) goto LAB_035cff74;
                                                  uVar13 = FUN_03fa1bc8(lVar7,DAT_0840cd68);
                                                  *(undefined8 *)(lVar9 + 0xfb8) = uVar13;
                                                  if (DAT_08908cd0 != 0) {
                                                    puVar1 = &DAT_0873ccb0 +
                                                             (lVar9 + 0xfb8U >> 0x12 & 0x7fff);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << (lVar9 + 0xfb8U >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  lVar9 = *plVar14;
                                                  if ((lVar9 == 0) ||
                                                     (*(long *)(lVar9 + 0xfb8) == 0))
                                                  goto LAB_035cff74;
                                                  iVar2 = *(int *)(lVar9 + 0xd44);
                                                  lVar9 = FUN_03c89df4(*(long *)(lVar9 + 0xfb8),
                                                                       DAT_08405b10);
                                                  if (iVar2 == 1) {
                                                    lVar7 = *plVar14;
                                                    if ((lVar7 == 0) || (lVar9 == 0))
                                                    goto LAB_035cff74;
                                                    FUN_07c99034(*(undefined4 *)(lVar7 + 0xfcc),
                                                                 *(undefined4 *)(lVar7 + 0xfd0),
                                                                 lVar9,0);
                                                    lVar7 = *plVar14;
                                                    if (lVar7 == 0) goto LAB_035cff74;
                                                    FUN_07c98f54(*(undefined4 *)(lVar7 + 0xfd4),
                                                                 *(undefined4 *)(lVar7 + 0xfd8),
                                                                 *(undefined4 *)(lVar7 + 0xfdc),
                                                                 *(undefined4 *)(lVar7 + 0xfe0),
                                                                 lVar9,0);
                                                  }
                                                  else {
                                                    if (lVar9 == 0) goto LAB_035cff74;
                                                    if (DAT_086ef168 == (code *)0x0) {
                                                      DAT_086ef168 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_086ef168)(lVar9,0);
                                                  }
                                                  lVar9 = *plVar14;
                                                  if (lVar9 == 0) goto LAB_035cff74;
                                                  if (*(int *)(lVar9 + 0xd74) == 1) {
                                                    uVar13 = FUN_0666ec64(*(undefined8 *)
                                                                           (lVar9 + 0xac8),
                                                                          DAT_0844dd30,
                                                                          *(undefined8 *)
                                                                           (lVar9 + 0xad0),0);
                                                    *(undefined8 *)(lVar9 + 0xac8) = uVar13;
                                                    if (DAT_08908cd0 != 0) {
                                                      puVar1 = &DAT_0873ccb0 +
                                                               (lVar9 + 0xac8U >> 0x12 & 0x7fff);
                                                      do {
                                                        cVar3 = '\x01';
                                                        bVar4 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar4) {
                                                          *puVar1 = *puVar1 | 1L << (lVar9 + 0xac8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar3 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar3 != '\0');
                                                    }
                                                    lVar9 = *plVar14;
                                                    if ((lVar9 == 0) ||
                                                       (*(long *)(lVar9 + 0xac8) == 0))
                                                    goto LAB_035cff74;
                                                    puVar11 = (undefined8 *)(lVar9 + 0xac8);
                                                    uVar13 = FUN_06670990(*(long *)(lVar9 + 0xac8),
                                                                          DAT_0844dd30,DAT_0842d3f8,
                                                                          0);
                                                    *puVar11 = uVar13;
                                                    if (DAT_08908cd0 != 0) {
                                                      puVar1 = &DAT_0873ccb0 +
                                                               ((ulong)puVar11 >> 0x12 & 0x7fff);
                                                      do {
                                                        cVar3 = '\x01';
                                                        bVar4 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar4) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar3 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar3 != '\0');
                                                    }
                                                    lVar9 = *plVar14;
                                                    if (lVar9 == 0) goto LAB_035cff74;
                                                    *(float *)(lVar9 + 0xf0c) =
                                                         *(float *)(lVar9 + 0xf0c) + 0.25;
                                                    if (*(int *)(lVar9 + 0xd44) == 1) {
                                                      if (*(long *)(lVar9 + 0xfb8) == 0)
                                                      goto LAB_035cff74;
                                                      FUN_07c92560(*(undefined4 *)(lVar9 + 0xfc8),
                                                                   *(long *)(lVar9 + 0xfb8),0);
                                                      lVar9 = *plVar14;
                                                      if (lVar9 == 0) goto LAB_035cff74;
                                                    }
                                                  }
                                                  lVar9 = *(long *)(lVar9 + 0xfb8);
                                                  if (lVar9 == 0) goto LAB_035cff74;
                                                  if (DAT_086ef188 == (code *)0x0) {
                                                    DAT_086ef188 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                                  }
                                                  lVar9 = (*DAT_086ef188)(lVar9);
                                                  lVar7 = *plVar14;
                                                  if ((lVar7 == 0) || (lVar9 == 0))
                                                  goto LAB_035cff74;
                                                  FUN_07a18224(*(undefined4 *)(lVar7 + 0xf08),
                                                               *(float *)(lVar7 + 0xf0c) -
                                                               *(float *)(lVar7 + 0xe94),
                                                               *(undefined4 *)(lVar7 + 0xf10),lVar9,
                                                               0);
                                                  lVar9 = *plVar14;
                                                  if ((lVar9 == 0) ||
                                                     (plVar6 = *(long **)(lVar9 + 0xfb8),
                                                     plVar6 == (long *)0x0)) goto LAB_035cff74;
                                                  (**(code **)(*plVar6 + 0x5e8))
                                                            (plVar6,*(undefined8 *)(lVar9 + 0xac8),
                                                             *(undefined8 *)(*plVar6 + 0x5f0));
                                                  lVar9 = *plVar14;
                                                  if ((lVar9 == 0) ||
                                                     (*(long *)(lVar9 + 0xfb8) == 0))
                                                  goto LAB_035cff74;
                                                  FUN_07c92410(*(long *)(lVar9 + 0xfb8),
                                                               *(undefined4 *)(lVar9 + 0xef4),0);
                                                  lVar9 = *plVar14;
                                                  if ((lVar9 == 0) ||
                                                     (plVar6 = *(long **)(lVar9 + 0xfb8),
                                                     plVar6 == (long *)0x0)) goto LAB_035cff74;
                                                  (**(code **)(*plVar6 + 0x2a8))
                                                            (*(undefined4 *)(lVar9 + 0xec8),
                                                             *(undefined4 *)(lVar9 + 0xecc),
                                                             *(undefined4 *)(lVar9 + 0xed0),
                                                             *(undefined4 *)(lVar9 + 0xed4),plVar6,
                                                             *(undefined8 *)(*plVar6 + 0x2b0));
                                                  lVar9 = *plVar14;
                                                  if (lVar9 == 0) goto LAB_035cff74;
                                                  if (*(int *)(lVar9 + 0xd4c) == 1) {
                                                    if (*(long *)(lVar9 + 0xfb8) == 0)
                                                    goto LAB_035cff74;
                                                    FUN_07c91e48(*(long *)(lVar9 + 0xfb8),
                                                                 *(undefined8 *)(lVar9 + 0xfc0),0);
                                                    lVar9 = *plVar14;
                                                    if (lVar9 == 0) goto LAB_035cff74;
                                                  }
                                                }
                                                if (*(int *)(lVar9 + 0xd78) == 1) {
                                                  lVar7 = *(long *)(lVar9 + 0xfa8);
                                                  if (lVar7 == 0) goto LAB_035cff74;
                                                  if (DAT_086ef250 == (code *)0x0) {
                                                    DAT_086ef250 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                                                  }
                                                  lVar7 = (*DAT_086ef250)(lVar7);
                                                  if ((lVar7 == 0) ||
                                                     (lVar7 = FUN_07a1ba3c(lVar7,DAT_08432e68,0),
                                                     lVar7 == 0)) goto LAB_035cff74;
                                                  if (DAT_086ef190 == (code *)0x0) {
                                                    DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                                  }
                                                  lVar7 = (*DAT_086ef190)(lVar7);
                                                  if (lVar7 == 0) goto LAB_035cff74;
                                                  uVar13 = FUN_03fa1bc8(lVar7,DAT_0840cd68);
                                                  *(undefined8 *)(lVar9 + 0xfe8) = uVar13;
                                                  if (DAT_08908cd0 != 0) {
                                                    puVar1 = &DAT_0873ccb0 +
                                                             (lVar9 + 0xfe8U >> 0x12 & 0x7fff);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << (lVar9 + 0xfe8U >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  lVar9 = *plVar14;
                                                  if (lVar9 == 0) goto LAB_035cff74;
                                                  plVar6 = *(long **)(lVar9 + 0xfe8);
                                                  uVar13 = FUN_0682c29c(lVar9 + 0xac0,0);
                                                  uVar13 = FUN_06660dbc(DAT_0842d720,uVar13,0);
                                                  if (plVar6 == (long *)0x0) goto LAB_035cff74;
                                                  (**(code **)(*plVar6 + 0x5e8))
                                                            (plVar6,uVar13,
                                                             *(undefined8 *)(*plVar6 + 0x5f0));
                                                  lVar9 = *plVar14;
                                                  if ((lVar9 == 0) ||
                                                     (plVar6 = *(long **)(lVar9 + 0xfe8),
                                                     plVar6 == (long *)0x0)) goto LAB_035cff74;
                                                  (**(code **)(*plVar6 + 0x2a8))
                                                            (*(undefined4 *)(lVar9 + 0xed8),
                                                             *(undefined4 *)(lVar9 + 0xedc),
                                                             *(undefined4 *)(lVar9 + 0xee0),
                                                             *(undefined4 *)(lVar9 + 0xee4),plVar6,
                                                             *(undefined8 *)(*plVar6 + 0x2b0));
                                                  if ((*plVar14 == 0) ||
                                                     (lVar9 = *(long *)(*plVar14 + 0xfe8),
                                                     lVar9 == 0)) goto LAB_035cff74;
                                                  if (DAT_086ef188 == (code *)0x0) {
                                                    DAT_086ef188 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                                  }
                                                  lVar9 = (*DAT_086ef188)(lVar9);
                                                  lVar7 = *plVar14;
                                                  if ((lVar7 == 0) || (lVar9 == 0))
                                                  goto LAB_035cff74;
                                                  FUN_07a18224(*(undefined4 *)(lVar7 + 0xf14),
                                                               *(undefined4 *)(lVar7 + 0xf18),
                                                               *(undefined4 *)(lVar7 + 0xf1c),lVar9,
                                                               0);
                                                  lVar9 = *plVar14;
                                                  if (lVar9 == 0) goto LAB_035cff74;
                                                  if (*(int *)(lVar9 + 0xd50) == 1) {
                                                    if (*(long *)(lVar9 + 0xfe8) == 0)
                                                    goto LAB_035cff74;
                                                    FUN_07c91e48(*(long *)(lVar9 + 0xfe8),
                                                                 *(undefined8 *)(lVar9 + 0xff0),0);
                                                    lVar9 = *plVar14;
                                                    if (lVar9 == 0) goto LAB_035cff74;
                                                  }
                                                  if (*(int *)(lVar9 + 0xd44) == 1) {
                                                    if (*(long *)(lVar9 + 0xfb8) == 0)
                                                    goto LAB_035cff74;
                                                    lVar9 = FUN_03c89df4(*(long *)(lVar9 + 0xfb8),
                                                                         DAT_08405b10);
                                                    lVar7 = *plVar14;
                                                    if ((lVar7 == 0) || (lVar9 == 0))
                                                    goto LAB_035cff74;
                                                    FUN_07c99034(*(undefined4 *)(lVar7 + 0xfcc),
                                                                 *(undefined4 *)(lVar7 + 0xfd0),
                                                                 lVar9,0);
                                                    lVar7 = *plVar14;
                                                    if (lVar7 == 0) goto LAB_035cff74;
                                                    FUN_07c98f54(*(undefined4 *)(lVar7 + 0xfd4),
                                                                 *(undefined4 *)(lVar7 + 0xfd8),
                                                                 *(undefined4 *)(lVar7 + 0xfdc),
                                                                 *(undefined4 *)(lVar7 + 0xfe0),
                                                                 lVar9,0);
                                                  }
                                                  else {
                                                    if ((*(long *)(lVar9 + 0xfe8) == 0) ||
                                                       (lVar9 = FUN_03c89df4(*(long *)(lVar9 + 0xfe8
                                                                                      ),DAT_08405b10
                                                                            ), lVar9 == 0))
                                                    goto LAB_035cff74;
                                                    if (DAT_086ef168 == (code *)0x0) {
                                                      DAT_086ef168 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_086ef168)(lVar9,0);
                                                  }
                                                }
                                                lVar9 = *plVar14;
                                                if (lVar9 != 0) {
                                                  if ((*(int *)(lVar9 + 0xc8c) == 2) ||
                                                     (*(int *)(lVar9 + 0xc8c) == 4)) {
                                                    FUN_035ba270(lVar9,1,0);
                                                    return;
                                                  }
                                                  lVar9 = *(long *)(lVar9 + 0x1010);
                                                  if (lVar9 != 0) {
                                                    if (DAT_086ef168 == (code *)0x0) {
                                                      DAT_086ef168 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_086ef168)(lVar9,0);
                                                  lVar9 = *plVar14;
                                                  if (lVar9 != 0) {
                                                    if (*(int *)(lVar9 + 0xd58) == 0) {
                                                      if (DAT_086ef190 == (code *)0x0) {
                                                        DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                                  }
                                                  lVar9 = (*DAT_086ef190)(plVar8);
                                                  if (lVar9 == 0) goto LAB_035cff74;
                                                  if (DAT_086ef278 == (code *)0x0) {
                                                    DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_086ef278)(lVar9,0);
                                                  lVar9 = *plVar14;
                                                  if (lVar9 == 0) goto LAB_035cff74;
                                                  }
                                                  uVar13 = *(undefined8 *)(lVar9 + 0xfb8);
                                                  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                                    FUN_033b9870();
                                                  }
                                                  uVar5 = FUN_07a0d2c4(uVar13,0,0);
                                                  if ((uVar5 & 1) != 0) {
                                                    lVar9 = *plVar14;
                                                    if (lVar9 == 0) goto LAB_035cff74;
                                                    if (*(int *)(lVar9 + 0xd70) == 1) {
                                                      lVar9 = *(long *)(lVar9 + 0xfb8);
                                                      if (lVar9 == 0) goto LAB_035cff74;
                                                      if (DAT_086ef190 == (code *)0x0) {
                                                        DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                                  }
                                                  lVar9 = (*DAT_086ef190)(lVar9);
                                                  if (lVar9 == 0) goto LAB_035cff74;
                                                  if (DAT_086ef278 == (code *)0x0) {
                                                    DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_086ef278)(lVar9,0);
                                                  }
                                                  }
                                                  if (*plVar14 != 0) {
                                                    uVar13 = *(undefined8 *)(*plVar14 + 0xfe8);
                                                    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                                      FUN_033b9870();
                                                    }
                                                    uVar5 = FUN_07a0d2c4(uVar13,0,0);
                                                    if ((uVar5 & 1) == 0) {
                                                      return;
                                                    }
                                                    lVar9 = *plVar14;
                                                    if (lVar9 != 0) {
                                                      if (*(int *)(lVar9 + 0xd78) != 1) {
                                                        return;
                                                      }
                                                      lVar9 = *(long *)(lVar9 + 0xfe8);
                                                      if (lVar9 != 0) {
                                                        if (DAT_086ef190 == (code *)0x0) {
                                                          DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                                  }
                                                  lVar9 = (*DAT_086ef190)(lVar9);
                                                  if (lVar9 != 0) {
                                                    if (DAT_086ef278 == (code *)0x0) {
                                                      DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                                                  }
                    /* WARNING: Could not recover jumptable at 0x035cff40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                  (*DAT_086ef278)(lVar9,0);
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
LAB_035cff74:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


