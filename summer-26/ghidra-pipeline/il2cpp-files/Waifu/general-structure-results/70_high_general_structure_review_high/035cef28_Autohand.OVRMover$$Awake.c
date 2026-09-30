/*
FUNCTION_NAME: Autohand.OVRMover$$Awake
ENTRY_POINT: 035cef28
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


void Autohand_OVRMover__Awake(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long in_x9;
  undefined8 uVar12;
  long lVar13;
  long *unaff_x23;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  uVar12 = *(undefined8 *)(param_1 + 0xe78);
  if (*(int *)(*(long *)(in_x9 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar5 = FUN_07a0d2c4(uVar12,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar13 = *unaff_x23;
  if (lVar13 != 0) {
    uVar12 = *(undefined8 *)(lVar13 + 0xe78);
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc6 = '\x01';
    }
    puVar9 = *(undefined4 **)(DAT_083d2c90 + 0xb8);
    uVar16 = *puVar9;
    uVar15 = puVar9[1];
    uVar14 = puVar9[2];
    if (DAT_086d7c53 == '\0') {
      FUN_0335b6c8(&DAT_083d0300,1);
      DataMemoryBarrier(2,3);
      DAT_086d7c53 = '\x01';
    }
    puVar9 = *(undefined4 **)(DAT_083d0300 + 0xb8);
    uVar20 = *puVar9;
    uVar19 = puVar9[1];
    uVar18 = puVar9[2];
    uVar17 = puVar9[3];
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar12 = FUN_04086154(uVar16,uVar15,uVar14,uVar20,uVar19,uVar18,uVar17,uVar12,DAT_08413ee8);
    *(undefined8 *)(lVar13 + 0xfa8) = uVar12;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + (lVar13 + 0xfa8U >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << (lVar13 + 0xfa8U >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar13 = FUN_03398a84(DAT_083cbb78);
    FUN_07a0de70(lVar13,0);
    if (lVar13 != 0) {
      FUN_07a11c58(lVar13,DAT_0843c690,0);
      if (DAT_086ef250 == (code *)0x0) {
        DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
      }
      lVar6 = (*DAT_086ef250)(lVar13);
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      uVar12 = (*DAT_086ef188)();
      if (lVar6 != 0) {
        if (DAT_086ef840 == (code *)0x0) {
          DAT_086ef840 = (code *)FUN_033d1b68(
                                             "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                             );
        }
        (*DAT_086ef840)(lVar6,uVar12,1);
        if (DAT_086ef250 == (code *)0x0) {
          DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
        }
        lVar6 = (*DAT_086ef250)(lVar13);
        if (lVar6 != 0) {
          if (DAT_086ef988 == (code *)0x0) {
            DAT_086ef988 = (code *)FUN_033d1b68(
                                               "UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)"
                                               );
          }
          (*DAT_086ef988)(lVar6);
          if ((*unaff_x23 != 0) && (lVar6 = *(long *)(*unaff_x23 + 0xfa8), lVar6 != 0)) {
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            lVar6 = (*DAT_086ef250)(lVar6);
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            uVar12 = (*DAT_086ef250)(lVar13);
            if (lVar6 != 0) {
              if (DAT_086ef840 == (code *)0x0) {
                DAT_086ef840 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                                  );
              }
              (*DAT_086ef840)(lVar6,uVar12,1);
              if ((*unaff_x23 != 0) && (lVar13 = *(long *)(*unaff_x23 + 0xfa8), lVar13 != 0)) {
                if (DAT_086ef250 == (code *)0x0) {
                  DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
                }
                lVar13 = (*DAT_086ef250)(lVar13);
                lVar6 = *unaff_x23;
                if ((lVar6 != 0) && (lVar13 != 0)) {
                  FUN_07a18224(*(undefined4 *)(lVar6 + 0xe90),*(undefined4 *)(lVar6 + 0xe94),
                               *(undefined4 *)(lVar6 + 0xe98),lVar13,0);
                  if ((*unaff_x23 != 0) && (lVar13 = *(long *)(*unaff_x23 + 0xfa8), lVar13 != 0)) {
                    FUN_03fa1ab4(lVar13,DAT_0840c500);
                    if ((*unaff_x23 != 0) && (lVar13 = *(long *)(*unaff_x23 + 0xfa8), lVar13 != 0))
                    {
                      lVar13 = FUN_03fa1bc8(lVar13,DAT_0840cb30);
                      lVar6 = *unaff_x23;
                      if (lVar6 != 0) {
                        *(long *)(lVar6 + 0x1d0) = lVar13;
                        if (DAT_08908cd0 != 0) {
                          puVar1 = &DAT_0873ccb0 + (lVar6 + 0x1d0U >> 0x12 & 0x7fff);
                          do {
                            cVar3 = '\x01';
                            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar4) {
                              *puVar1 = *puVar1 | 1L << (lVar6 + 0x1d0U >> 0xc & 0x3f);
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                          lVar6 = *unaff_x23;
                          if (lVar6 == 0) goto LAB_035cff74;
                        }
                        if ((*(long *)(lVar6 + 0xfa8) != 0) &&
                           (uVar12 = FUN_03fa1bc8(*(long *)(lVar6 + 0xfa8),DAT_0840ca58),
                           lVar13 != 0)) {
                          puVar10 = (undefined8 *)(lVar13 + 0x38);
                          *puVar10 = uVar12;
                          if (DAT_08908cd0 != 0) {
                            puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
                            do {
                              cVar3 = '\x01';
                              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar4) {
                                *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                                cVar3 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar3 != '\0');
                          }
                          uVar12 = FUN_03c89df4();
                          puVar10 = (undefined8 *)(lVar13 + 0x28);
                          *puVar10 = uVar12;
                          if (DAT_08908cd0 != 0) {
                            puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
                            do {
                              cVar3 = '\x01';
                              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar4) {
                                *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                                cVar3 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar3 != '\0');
                          }
                          if ((*unaff_x23 != 0) &&
                             (lVar13 = *(long *)(*unaff_x23 + 0xfa8), lVar13 != 0)) {
                            FUN_07a11c58(lVar13,DAT_08432e58,0);
                            if ((*unaff_x23 != 0) &&
                               (lVar13 = *(long *)(*unaff_x23 + 0xfa8), lVar13 != 0)) {
                              if (DAT_086ef250 == (code *)0x0) {
                                DAT_086ef250 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                              }
                              lVar13 = (*DAT_086ef250)(lVar13);
                              if ((lVar13 != 0) &&
                                 (lVar13 = FUN_07a1ba3c(lVar13,DAT_08432e48,0), lVar13 != 0)) {
                                if (DAT_086ef190 == (code *)0x0) {
                                  DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                }
                                lVar13 = (*DAT_086ef190)(lVar13);
                                if (lVar13 != 0) {
                                  if (DAT_086ef250 == (code *)0x0) {
                                    DAT_086ef250 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                                  }
                                  lVar6 = (*DAT_086ef250)(lVar13);
                                  lVar11 = *unaff_x23;
                                  if ((lVar11 != 0) && (lVar6 != 0)) {
                                    FUN_07a19820(*(undefined4 *)(lVar11 + 0xee8),
                                                 *(undefined4 *)(lVar11 + 0xeec),
                                                 *(undefined4 *)(lVar11 + 0xef0),lVar6,0);
                                    if (DAT_086ef250 == (code *)0x0) {
                                      DAT_086ef250 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                                    }
                                    lVar6 = (*DAT_086ef250)(lVar13);
                                    if ((lVar6 != 0) &&
                                       (lVar6 = FUN_07a1ba3c(lVar6,DAT_08432e40,0), lVar6 != 0)) {
                                      plVar7 = (long *)FUN_03c89df4(lVar6,DAT_084059a0);
                                      lVar6 = *unaff_x23;
                                      if ((lVar6 != 0) && (plVar7 != (long *)0x0)) {
                                        (**(code **)(*plVar7 + 0x2a8))
                                                  (*(undefined4 *)(lVar6 + 0xea8),
                                                   *(undefined4 *)(lVar6 + 0xeac),
                                                   *(undefined4 *)(lVar6 + 0xeb0),
                                                   *(undefined4 *)(lVar6 + 0xeb4),plVar7,
                                                   *(undefined8 *)(*plVar7 + 0x2b0));
                                        plVar8 = (long *)FUN_03fa1bc8(lVar13,DAT_0840cbe0);
                                        lVar6 = *unaff_x23;
                                        if ((lVar6 != 0) && (plVar8 != (long *)0x0)) {
                                          (**(code **)(*plVar8 + 0x2a8))
                                                    (*(undefined4 *)(lVar6 + 0xeb8),
                                                     *(undefined4 *)(lVar6 + 0xebc),
                                                     *(undefined4 *)(lVar6 + 0xec0),
                                                     *(undefined4 *)(lVar6 + 0xec4),plVar8,
                                                     *(undefined8 *)(*plVar8 + 0x2b0));
                                          lVar6 = *unaff_x23;
                                          if ((lVar6 != 0) && (*(long *)(lVar6 + 0xfa8) != 0)) {
                                            uVar12 = FUN_03fa1bc8(*(long *)(lVar6 + 0xfa8),
                                                                  DAT_0840ca58);
                                            *(undefined8 *)(lVar6 + 0x1010) = uVar12;
                                            if (DAT_08908cd0 != 0) {
                                              puVar1 = &DAT_0873ccb0 +
                                                       (lVar6 + 0x1010U >> 0x12 & 0x7fff);
                                              do {
                                                cVar3 = '\x01';
                                                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                if (bVar4) {
                                                  *puVar1 = *puVar1 | 1L << (lVar6 + 0x1010U >> 0xc
                                                                            & 0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar3 != '\0');
                                            }
                                            lVar6 = *unaff_x23;
                                            if (lVar6 != 0) {
                                              if ((*(int *)(lVar6 + 0xc8c) == 4) ||
                                                 (*(int *)(lVar6 + 0xd58) == 0)) {
                                                lVar13 = FUN_03fa1bc8(lVar13,DAT_0840cbe0);
                                                if (lVar13 == 0) goto LAB_035cff74;
                                                if (DAT_086ef168 == (code *)0x0) {
                                                  DAT_086ef168 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                                  );
                                                }
                                                (*DAT_086ef168)(lVar13,0);
                                                if (DAT_086ef190 == (code *)0x0) {
                                                  DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                                }
                                                lVar13 = (*DAT_086ef190)(plVar7);
                                                if (lVar13 == 0) goto LAB_035cff74;
                                                if (DAT_086ef278 == (code *)0x0) {
                                                  DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                                                }
                                                (*DAT_086ef278)(lVar13,0);
                                                lVar6 = *unaff_x23;
                                                if (lVar6 == 0) goto LAB_035cff74;
                                              }
                                              if (*(int *)(lVar6 + 0xd68) == 1) {
                                                uVar12 = *(undefined8 *)(lVar6 + 0xe88);
                                                if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                                  FUN_033b9870();
                                                }
                                                uVar5 = FUN_07a0d2c4(uVar12,0,0);
                                                if ((uVar5 & 1) != 0) {
                                                  if (*unaff_x23 == 0) goto LAB_035cff74;
                                                  uVar12 = *(undefined8 *)(*unaff_x23 + 0xe80);
                                                  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                                    FUN_033b9870();
                                                  }
                                                  uVar5 = FUN_07a0d2c4(uVar12,0,0);
                                                  if ((uVar5 & 1) != 0) {
                                                    if (*unaff_x23 == 0) goto LAB_035cff74;
                                                    FUN_07ade03c(plVar8,*(undefined8 *)
                                                                         (*unaff_x23 + 0xe88),0);
                                                    if (*unaff_x23 == 0) goto LAB_035cff74;
                                                    FUN_07ade03c(plVar7,*(undefined8 *)
                                                                         (*unaff_x23 + 0xe80),0);
                                                  }
                                                }
                                              }
                                              lVar13 = *unaff_x23;
                                              if (lVar13 != 0) {
                                                if (*(int *)(lVar13 + 0xd70) == 1) {
                                                  lVar6 = *(long *)(lVar13 + 0xfa8);
                                                  if (lVar6 == 0) goto LAB_035cff74;
                                                  if (DAT_086ef250 == (code *)0x0) {
                                                    DAT_086ef250 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                                                  }
                                                  lVar6 = (*DAT_086ef250)(lVar6);
                                                  if ((lVar6 == 0) ||
                                                     (lVar6 = FUN_07a1ba3c(lVar6,DAT_08432e78,0),
                                                     lVar6 == 0)) goto LAB_035cff74;
                                                  if (DAT_086ef190 == (code *)0x0) {
                                                    DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                                  }
                                                  lVar6 = (*DAT_086ef190)(lVar6);
                                                  if (lVar6 == 0) goto LAB_035cff74;
                                                  uVar12 = FUN_03fa1bc8(lVar6,DAT_0840cd68);
                                                  *(undefined8 *)(lVar13 + 0xfb8) = uVar12;
                                                  if (DAT_08908cd0 != 0) {
                                                    puVar1 = &DAT_0873ccb0 +
                                                             (lVar13 + 0xfb8U >> 0x12 & 0x7fff);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << (lVar13 + 0xfb8U
                                                                                   >> 0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  lVar13 = *unaff_x23;
                                                  if ((lVar13 == 0) ||
                                                     (*(long *)(lVar13 + 0xfb8) == 0))
                                                  goto LAB_035cff74;
                                                  iVar2 = *(int *)(lVar13 + 0xd44);
                                                  lVar13 = FUN_03c89df4(*(long *)(lVar13 + 0xfb8),
                                                                        DAT_08405b10);
                                                  if (iVar2 == 1) {
                                                    lVar6 = *unaff_x23;
                                                    if ((lVar6 == 0) || (lVar13 == 0))
                                                    goto LAB_035cff74;
                                                    FUN_07c99034(*(undefined4 *)(lVar6 + 0xfcc),
                                                                 *(undefined4 *)(lVar6 + 0xfd0),
                                                                 lVar13,0);
                                                    lVar6 = *unaff_x23;
                                                    if (lVar6 == 0) goto LAB_035cff74;
                                                    FUN_07c98f54(*(undefined4 *)(lVar6 + 0xfd4),
                                                                 *(undefined4 *)(lVar6 + 0xfd8),
                                                                 *(undefined4 *)(lVar6 + 0xfdc),
                                                                 *(undefined4 *)(lVar6 + 0xfe0),
                                                                 lVar13,0);
                                                  }
                                                  else {
                                                    if (lVar13 == 0) goto LAB_035cff74;
                                                    if (DAT_086ef168 == (code *)0x0) {
                                                      DAT_086ef168 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_086ef168)(lVar13,0);
                                                  }
                                                  lVar13 = *unaff_x23;
                                                  if (lVar13 == 0) goto LAB_035cff74;
                                                  if (*(int *)(lVar13 + 0xd74) == 1) {
                                                    uVar12 = FUN_0666ec64(*(undefined8 *)
                                                                           (lVar13 + 0xac8),
                                                                          DAT_0844dd30,
                                                                          *(undefined8 *)
                                                                           (lVar13 + 0xad0),0);
                                                    *(undefined8 *)(lVar13 + 0xac8) = uVar12;
                                                    if (DAT_08908cd0 != 0) {
                                                      puVar1 = &DAT_0873ccb0 +
                                                               (lVar13 + 0xac8U >> 0x12 & 0x7fff);
                                                      do {
                                                        cVar3 = '\x01';
                                                        bVar4 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar4) {
                                                          *puVar1 = *puVar1 | 1L << (lVar13 + 0xac8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar3 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar3 != '\0');
                                                    }
                                                    lVar13 = *unaff_x23;
                                                    if ((lVar13 == 0) ||
                                                       (*(long *)(lVar13 + 0xac8) == 0))
                                                    goto LAB_035cff74;
                                                    puVar10 = (undefined8 *)(lVar13 + 0xac8);
                                                    uVar12 = FUN_06670990(*(long *)(lVar13 + 0xac8),
                                                                          DAT_0844dd30,DAT_0842d3f8,
                                                                          0);
                                                    *puVar10 = uVar12;
                                                    if (DAT_08908cd0 != 0) {
                                                      puVar1 = &DAT_0873ccb0 +
                                                               ((ulong)puVar10 >> 0x12 & 0x7fff);
                                                      do {
                                                        cVar3 = '\x01';
                                                        bVar4 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar4) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar10
                                                                                     >> 0xc & 0x3f);
                                                          cVar3 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar3 != '\0');
                                                    }
                                                    lVar13 = *unaff_x23;
                                                    if (lVar13 == 0) goto LAB_035cff74;
                                                    *(float *)(lVar13 + 0xf0c) =
                                                         *(float *)(lVar13 + 0xf0c) + 0.25;
                                                    if (*(int *)(lVar13 + 0xd44) == 1) {
                                                      if (*(long *)(lVar13 + 0xfb8) == 0)
                                                      goto LAB_035cff74;
                                                      FUN_07c92560(*(undefined4 *)(lVar13 + 0xfc8),
                                                                   *(long *)(lVar13 + 0xfb8),0);
                                                      lVar13 = *unaff_x23;
                                                      if (lVar13 == 0) goto LAB_035cff74;
                                                    }
                                                  }
                                                  lVar13 = *(long *)(lVar13 + 0xfb8);
                                                  if (lVar13 == 0) goto LAB_035cff74;
                                                  if (DAT_086ef188 == (code *)0x0) {
                                                    DAT_086ef188 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                                  }
                                                  lVar13 = (*DAT_086ef188)(lVar13);
                                                  lVar6 = *unaff_x23;
                                                  if ((lVar6 == 0) || (lVar13 == 0))
                                                  goto LAB_035cff74;
                                                  FUN_07a18224(*(undefined4 *)(lVar6 + 0xf08),
                                                               *(float *)(lVar6 + 0xf0c) -
                                                               *(float *)(lVar6 + 0xe94),
                                                               *(undefined4 *)(lVar6 + 0xf10),lVar13
                                                               ,0);
                                                  lVar13 = *unaff_x23;
                                                  if ((lVar13 == 0) ||
                                                     (plVar7 = *(long **)(lVar13 + 0xfb8),
                                                     plVar7 == (long *)0x0)) goto LAB_035cff74;
                                                  (**(code **)(*plVar7 + 0x5e8))
                                                            (plVar7,*(undefined8 *)(lVar13 + 0xac8),
                                                             *(undefined8 *)(*plVar7 + 0x5f0));
                                                  lVar13 = *unaff_x23;
                                                  if ((lVar13 == 0) ||
                                                     (*(long *)(lVar13 + 0xfb8) == 0))
                                                  goto LAB_035cff74;
                                                  FUN_07c92410(*(long *)(lVar13 + 0xfb8),
                                                               *(undefined4 *)(lVar13 + 0xef4),0);
                                                  lVar13 = *unaff_x23;
                                                  if ((lVar13 == 0) ||
                                                     (plVar7 = *(long **)(lVar13 + 0xfb8),
                                                     plVar7 == (long *)0x0)) goto LAB_035cff74;
                                                  (**(code **)(*plVar7 + 0x2a8))
                                                            (*(undefined4 *)(lVar13 + 0xec8),
                                                             *(undefined4 *)(lVar13 + 0xecc),
                                                             *(undefined4 *)(lVar13 + 0xed0),
                                                             *(undefined4 *)(lVar13 + 0xed4),plVar7,
                                                             *(undefined8 *)(*plVar7 + 0x2b0));
                                                  lVar13 = *unaff_x23;
                                                  if (lVar13 == 0) goto LAB_035cff74;
                                                  if (*(int *)(lVar13 + 0xd4c) == 1) {
                                                    if (*(long *)(lVar13 + 0xfb8) == 0)
                                                    goto LAB_035cff74;
                                                    FUN_07c91e48(*(long *)(lVar13 + 0xfb8),
                                                                 *(undefined8 *)(lVar13 + 0xfc0),0);
                                                    lVar13 = *unaff_x23;
                                                    if (lVar13 == 0) goto LAB_035cff74;
                                                  }
                                                }
                                                if (*(int *)(lVar13 + 0xd78) == 1) {
                                                  lVar6 = *(long *)(lVar13 + 0xfa8);
                                                  if (lVar6 == 0) goto LAB_035cff74;
                                                  if (DAT_086ef250 == (code *)0x0) {
                                                    DAT_086ef250 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                                                  }
                                                  lVar6 = (*DAT_086ef250)(lVar6);
                                                  if ((lVar6 == 0) ||
                                                     (lVar6 = FUN_07a1ba3c(lVar6,DAT_08432e68,0),
                                                     lVar6 == 0)) goto LAB_035cff74;
                                                  if (DAT_086ef190 == (code *)0x0) {
                                                    DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                                  }
                                                  lVar6 = (*DAT_086ef190)(lVar6);
                                                  if (lVar6 == 0) goto LAB_035cff74;
                                                  uVar12 = FUN_03fa1bc8(lVar6,DAT_0840cd68);
                                                  *(undefined8 *)(lVar13 + 0xfe8) = uVar12;
                                                  if (DAT_08908cd0 != 0) {
                                                    puVar1 = &DAT_0873ccb0 +
                                                             (lVar13 + 0xfe8U >> 0x12 & 0x7fff);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << (lVar13 + 0xfe8U
                                                                                   >> 0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  lVar13 = *unaff_x23;
                                                  if (lVar13 == 0) goto LAB_035cff74;
                                                  plVar7 = *(long **)(lVar13 + 0xfe8);
                                                  uVar12 = FUN_0682c29c(lVar13 + 0xac0,0);
                                                  uVar12 = FUN_06660dbc(DAT_0842d720,uVar12,0);
                                                  if (plVar7 == (long *)0x0) goto LAB_035cff74;
                                                  (**(code **)(*plVar7 + 0x5e8))
                                                            (plVar7,uVar12,
                                                             *(undefined8 *)(*plVar7 + 0x5f0));
                                                  lVar13 = *unaff_x23;
                                                  if ((lVar13 == 0) ||
                                                     (plVar7 = *(long **)(lVar13 + 0xfe8),
                                                     plVar7 == (long *)0x0)) goto LAB_035cff74;
                                                  (**(code **)(*plVar7 + 0x2a8))
                                                            (*(undefined4 *)(lVar13 + 0xed8),
                                                             *(undefined4 *)(lVar13 + 0xedc),
                                                             *(undefined4 *)(lVar13 + 0xee0),
                                                             *(undefined4 *)(lVar13 + 0xee4),plVar7,
                                                             *(undefined8 *)(*plVar7 + 0x2b0));
                                                  if ((*unaff_x23 == 0) ||
                                                     (lVar13 = *(long *)(*unaff_x23 + 0xfe8),
                                                     lVar13 == 0)) goto LAB_035cff74;
                                                  if (DAT_086ef188 == (code *)0x0) {
                                                    DAT_086ef188 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                                  }
                                                  lVar13 = (*DAT_086ef188)(lVar13);
                                                  lVar6 = *unaff_x23;
                                                  if ((lVar6 == 0) || (lVar13 == 0))
                                                  goto LAB_035cff74;
                                                  FUN_07a18224(*(undefined4 *)(lVar6 + 0xf14),
                                                               *(undefined4 *)(lVar6 + 0xf18),
                                                               *(undefined4 *)(lVar6 + 0xf1c),lVar13
                                                               ,0);
                                                  lVar13 = *unaff_x23;
                                                  if (lVar13 == 0) goto LAB_035cff74;
                                                  if (*(int *)(lVar13 + 0xd50) == 1) {
                                                    if (*(long *)(lVar13 + 0xfe8) == 0)
                                                    goto LAB_035cff74;
                                                    FUN_07c91e48(*(long *)(lVar13 + 0xfe8),
                                                                 *(undefined8 *)(lVar13 + 0xff0),0);
                                                    lVar13 = *unaff_x23;
                                                    if (lVar13 == 0) goto LAB_035cff74;
                                                  }
                                                  if (*(int *)(lVar13 + 0xd44) == 1) {
                                                    if (*(long *)(lVar13 + 0xfb8) == 0)
                                                    goto LAB_035cff74;
                                                    lVar13 = FUN_03c89df4(*(long *)(lVar13 + 0xfb8),
                                                                          DAT_08405b10);
                                                    lVar6 = *unaff_x23;
                                                    if ((lVar6 == 0) || (lVar13 == 0))
                                                    goto LAB_035cff74;
                                                    FUN_07c99034(*(undefined4 *)(lVar6 + 0xfcc),
                                                                 *(undefined4 *)(lVar6 + 0xfd0),
                                                                 lVar13,0);
                                                    lVar6 = *unaff_x23;
                                                    if (lVar6 == 0) goto LAB_035cff74;
                                                    FUN_07c98f54(*(undefined4 *)(lVar6 + 0xfd4),
                                                                 *(undefined4 *)(lVar6 + 0xfd8),
                                                                 *(undefined4 *)(lVar6 + 0xfdc),
                                                                 *(undefined4 *)(lVar6 + 0xfe0),
                                                                 lVar13,0);
                                                  }
                                                  else {
                                                    if ((*(long *)(lVar13 + 0xfe8) == 0) ||
                                                       (lVar13 = FUN_03c89df4(*(long *)(lVar13 + 
                                                  0xfe8),DAT_08405b10), lVar13 == 0))
                                                  goto LAB_035cff74;
                                                  if (DAT_086ef168 == (code *)0x0) {
                                                    DAT_086ef168 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_086ef168)(lVar13,0);
                                                  }
                                                }
                                                lVar13 = *unaff_x23;
                                                if (lVar13 != 0) {
                                                  if ((*(int *)(lVar13 + 0xc8c) == 2) ||
                                                     (*(int *)(lVar13 + 0xc8c) == 4)) {
                                                    FUN_035ba270(lVar13,1,0);
                                                    return;
                                                  }
                                                  lVar13 = *(long *)(lVar13 + 0x1010);
                                                  if (lVar13 != 0) {
                                                    if (DAT_086ef168 == (code *)0x0) {
                                                      DAT_086ef168 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_086ef168)(lVar13,0);
                                                  lVar13 = *unaff_x23;
                                                  if (lVar13 != 0) {
                                                    if (*(int *)(lVar13 + 0xd58) == 0) {
                                                      if (DAT_086ef190 == (code *)0x0) {
                                                        DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                                  }
                                                  lVar13 = (*DAT_086ef190)(plVar8);
                                                  if (lVar13 == 0) goto LAB_035cff74;
                                                  if (DAT_086ef278 == (code *)0x0) {
                                                    DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_086ef278)(lVar13,0);
                                                  lVar13 = *unaff_x23;
                                                  if (lVar13 == 0) goto LAB_035cff74;
                                                  }
                                                  uVar12 = *(undefined8 *)(lVar13 + 0xfb8);
                                                  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                                    FUN_033b9870();
                                                  }
                                                  uVar5 = FUN_07a0d2c4(uVar12,0,0);
                                                  if ((uVar5 & 1) != 0) {
                                                    lVar13 = *unaff_x23;
                                                    if (lVar13 == 0) goto LAB_035cff74;
                                                    if (*(int *)(lVar13 + 0xd70) == 1) {
                                                      lVar13 = *(long *)(lVar13 + 0xfb8);
                                                      if (lVar13 == 0) goto LAB_035cff74;
                                                      if (DAT_086ef190 == (code *)0x0) {
                                                        DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                                  }
                                                  lVar13 = (*DAT_086ef190)(lVar13);
                                                  if (lVar13 == 0) goto LAB_035cff74;
                                                  if (DAT_086ef278 == (code *)0x0) {
                                                    DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_086ef278)(lVar13,0);
                                                  }
                                                  }
                                                  if (*unaff_x23 != 0) {
                                                    uVar12 = *(undefined8 *)(*unaff_x23 + 0xfe8);
                                                    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                                      FUN_033b9870();
                                                    }
                                                    uVar5 = FUN_07a0d2c4(uVar12,0,0);
                                                    if ((uVar5 & 1) == 0) {
                                                      return;
                                                    }
                                                    lVar13 = *unaff_x23;
                                                    if (lVar13 != 0) {
                                                      if (*(int *)(lVar13 + 0xd78) != 1) {
                                                        return;
                                                      }
                                                      lVar13 = *(long *)(lVar13 + 0xfe8);
                                                      if (lVar13 != 0) {
                                                        if (DAT_086ef190 == (code *)0x0) {
                                                          DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                                  }
                                                  lVar13 = (*DAT_086ef190)(lVar13);
                                                  if (lVar13 != 0) {
                                                    if (DAT_086ef278 == (code *)0x0) {
                                                      DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                                                  }
                    /* WARNING: Could not recover jumptable at 0x035cff40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                  (*DAT_086ef278)(lVar13,0);
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


