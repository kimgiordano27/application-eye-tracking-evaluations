/*
FUNCTION_NAME: Autohand.Demo.OVRHandControllerLink$$GetAxis
ENTRY_POINT: 035cf13c
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


void Autohand_Demo_OVRHandControllerLink__GetAxis(code *param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *unaff_x23;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  lVar5 = (*param_1)();
  if (lVar5 != 0) {
    if (DAT_086ef988 == (code *)0x0) {
      DAT_086ef988 = (code *)FUN_033d1b68(
                                         "UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)"
                                         );
    }
    (*DAT_086ef988)(lVar5);
    if ((*unaff_x23 != 0) && (lVar5 = *(long *)(*unaff_x23 + 0xfa8), lVar5 != 0)) {
      pcVar10 = *(code **)(unaff_x28 + 0x250);
      if (pcVar10 == (code *)0x0) {
        pcVar10 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
        *(code **)(unaff_x28 + 0x250) = pcVar10;
      }
      lVar5 = (*pcVar10)(lVar5);
      pcVar10 = *(code **)(unaff_x28 + 0x250);
      if (pcVar10 == (code *)0x0) {
        pcVar10 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
        *(code **)(unaff_x28 + 0x250) = pcVar10;
      }
      uVar6 = (*pcVar10)();
      if (lVar5 != 0) {
        pcVar10 = *(code **)(unaff_x29 + 0x840);
        if (pcVar10 == (code *)0x0) {
          pcVar10 = (code *)FUN_033d1b68(
                                        "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                        );
          *(code **)(unaff_x29 + 0x840) = pcVar10;
        }
        (*pcVar10)(lVar5,uVar6,1);
        if ((*unaff_x23 != 0) && (lVar5 = *(long *)(*unaff_x23 + 0xfa8), lVar5 != 0)) {
          pcVar10 = *(code **)(unaff_x28 + 0x250);
          if (pcVar10 == (code *)0x0) {
            pcVar10 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            *(code **)(unaff_x28 + 0x250) = pcVar10;
          }
          lVar5 = (*pcVar10)(lVar5);
          lVar11 = *unaff_x23;
          if ((lVar11 != 0) && (lVar5 != 0)) {
            FUN_07a18224(*(undefined4 *)(lVar11 + 0xe90),*(undefined4 *)(lVar11 + 0xe94),
                         *(undefined4 *)(lVar11 + 0xe98),lVar5,0);
            if ((*unaff_x23 != 0) && (lVar5 = *(long *)(*unaff_x23 + 0xfa8), lVar5 != 0)) {
              FUN_03fa1ab4(lVar5,DAT_0840c500);
              if ((*unaff_x23 != 0) && (lVar5 = *(long *)(*unaff_x23 + 0xfa8), lVar5 != 0)) {
                lVar5 = FUN_03fa1bc8(lVar5,DAT_0840cb30);
                lVar11 = *unaff_x23;
                if (lVar11 != 0) {
                  *(long *)(lVar11 + 0x1d0) = lVar5;
                  if (*(int *)(unaff_x27 + 0xcd0) != 0) {
                    puVar1 = (ulong *)(unaff_x26 + (lVar11 + 0x1d0U >> 0x12 & 0x7fff) * 8 + 0x464e0)
                    ;
                    do {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar4) {
                        *puVar1 = *puVar1 | 1L << (lVar11 + 0x1d0U >> 0xc & 0x3f);
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    lVar11 = *unaff_x23;
                    if (lVar11 == 0) goto LAB_035cff74;
                  }
                  if ((*(long *)(lVar11 + 0xfa8) != 0) &&
                     (uVar6 = FUN_03fa1bc8(*(long *)(lVar11 + 0xfa8),DAT_0840ca58), lVar5 != 0)) {
                    puVar12 = (undefined8 *)(lVar5 + 0x38);
                    *puVar12 = uVar6;
                    if (*(int *)(unaff_x27 + 0xcd0) != 0) {
                      puVar1 = (ulong *)(unaff_x26 + ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x464e0
                                        );
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                          *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    uVar6 = FUN_03c89df4();
                    puVar12 = (undefined8 *)(lVar5 + 0x28);
                    *puVar12 = uVar6;
                    if (*(int *)(unaff_x27 + 0xcd0) != 0) {
                      puVar1 = (ulong *)(unaff_x26 + ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x464e0
                                        );
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                          *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    if ((*unaff_x23 != 0) && (lVar5 = *(long *)(*unaff_x23 + 0xfa8), lVar5 != 0)) {
                      FUN_07a11c58(lVar5,DAT_08432e58,0);
                      if ((*unaff_x23 != 0) && (lVar5 = *(long *)(*unaff_x23 + 0xfa8), lVar5 != 0))
                      {
                        pcVar10 = *(code **)(unaff_x28 + 0x250);
                        if (pcVar10 == (code *)0x0) {
                          pcVar10 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
                          *(code **)(unaff_x28 + 0x250) = pcVar10;
                        }
                        lVar5 = (*pcVar10)(lVar5);
                        if ((lVar5 != 0) && (lVar5 = FUN_07a1ba3c(lVar5,DAT_08432e48,0), lVar5 != 0)
                           ) {
                          if (DAT_086ef190 == (code *)0x0) {
                            DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                          }
                          lVar5 = (*DAT_086ef190)(lVar5);
                          if (lVar5 != 0) {
                            pcVar10 = *(code **)(unaff_x28 + 0x250);
                            if (pcVar10 == (code *)0x0) {
                              pcVar10 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                              *(code **)(unaff_x28 + 0x250) = pcVar10;
                            }
                            lVar11 = (*pcVar10)(lVar5);
                            lVar13 = *unaff_x23;
                            if ((lVar13 != 0) && (lVar11 != 0)) {
                              FUN_07a19820(*(undefined4 *)(lVar13 + 0xee8),
                                           *(undefined4 *)(lVar13 + 0xeec),
                                           *(undefined4 *)(lVar13 + 0xef0),lVar11,0);
                              pcVar10 = *(code **)(unaff_x28 + 0x250);
                              if (pcVar10 == (code *)0x0) {
                                pcVar10 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                                *(code **)(unaff_x28 + 0x250) = pcVar10;
                              }
                              lVar11 = (*pcVar10)(lVar5);
                              if ((lVar11 != 0) &&
                                 (lVar11 = FUN_07a1ba3c(lVar11,DAT_08432e40,0), lVar11 != 0)) {
                                plVar7 = (long *)FUN_03c89df4(lVar11,DAT_084059a0);
                                lVar11 = *unaff_x23;
                                if ((lVar11 != 0) && (plVar7 != (long *)0x0)) {
                                  (**(code **)(*plVar7 + 0x2a8))
                                            (*(undefined4 *)(lVar11 + 0xea8),
                                             *(undefined4 *)(lVar11 + 0xeac),
                                             *(undefined4 *)(lVar11 + 0xeb0),
                                             *(undefined4 *)(lVar11 + 0xeb4),plVar7,
                                             *(undefined8 *)(*plVar7 + 0x2b0));
                                  plVar8 = (long *)FUN_03fa1bc8(lVar5,DAT_0840cbe0);
                                  lVar11 = *unaff_x23;
                                  if ((lVar11 != 0) && (plVar8 != (long *)0x0)) {
                                    (**(code **)(*plVar8 + 0x2a8))
                                              (*(undefined4 *)(lVar11 + 0xeb8),
                                               *(undefined4 *)(lVar11 + 0xebc),
                                               *(undefined4 *)(lVar11 + 0xec0),
                                               *(undefined4 *)(lVar11 + 0xec4),plVar8,
                                               *(undefined8 *)(*plVar8 + 0x2b0));
                                    lVar11 = *unaff_x23;
                                    if ((lVar11 != 0) && (*(long *)(lVar11 + 0xfa8) != 0)) {
                                      uVar6 = FUN_03fa1bc8(*(long *)(lVar11 + 0xfa8),DAT_0840ca58);
                                      *(undefined8 *)(lVar11 + 0x1010) = uVar6;
                                      if (*(int *)(unaff_x27 + 0xcd0) != 0) {
                                        puVar1 = (ulong *)(unaff_x26 +
                                                           (lVar11 + 0x1010U >> 0x12 & 0x7fff) * 8 +
                                                          0x464e0);
                                        do {
                                          cVar3 = '\x01';
                                          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                          if (bVar4) {
                                            *puVar1 = *puVar1 | 1L << (lVar11 + 0x1010U >> 0xc &
                                                                      0x3f);
                                            cVar3 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar3 != '\0');
                                      }
                                      lVar11 = *unaff_x23;
                                      if (lVar11 != 0) {
                                        if ((*(int *)(lVar11 + 0xc8c) == 4) ||
                                           (*(int *)(lVar11 + 0xd58) == 0)) {
                                          lVar5 = FUN_03fa1bc8(lVar5,DAT_0840cbe0);
                                          if (lVar5 == 0) goto LAB_035cff74;
                                          if (DAT_086ef168 == (code *)0x0) {
                                            DAT_086ef168 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                                  );
                                          }
                                          (*DAT_086ef168)(lVar5,0);
                                          if (DAT_086ef190 == (code *)0x0) {
                                            DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                          }
                                          lVar5 = (*DAT_086ef190)(plVar7);
                                          if (lVar5 == 0) goto LAB_035cff74;
                                          if (DAT_086ef278 == (code *)0x0) {
                                            DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                                          }
                                          (*DAT_086ef278)(lVar5,0);
                                          lVar11 = *unaff_x23;
                                          if (lVar11 == 0) goto LAB_035cff74;
                                        }
                                        if (*(int *)(lVar11 + 0xd68) == 1) {
                                          uVar6 = *(undefined8 *)(lVar11 + 0xe88);
                                          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                            FUN_033b9870();
                                          }
                                          uVar9 = FUN_07a0d2c4(uVar6,0,0);
                                          if ((uVar9 & 1) != 0) {
                                            if (*unaff_x23 == 0) goto LAB_035cff74;
                                            uVar6 = *(undefined8 *)(*unaff_x23 + 0xe80);
                                            if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                              FUN_033b9870();
                                            }
                                            uVar9 = FUN_07a0d2c4(uVar6,0,0);
                                            if ((uVar9 & 1) != 0) {
                                              if (*unaff_x23 == 0) goto LAB_035cff74;
                                              FUN_07ade03c(plVar8,*(undefined8 *)
                                                                   (*unaff_x23 + 0xe88),0);
                                              if (*unaff_x23 == 0) goto LAB_035cff74;
                                              FUN_07ade03c(plVar7,*(undefined8 *)
                                                                   (*unaff_x23 + 0xe80),0);
                                            }
                                          }
                                        }
                                        lVar5 = *unaff_x23;
                                        if (lVar5 != 0) {
                                          if (*(int *)(lVar5 + 0xd70) == 1) {
                                            lVar11 = *(long *)(lVar5 + 0xfa8);
                                            if (lVar11 == 0) goto LAB_035cff74;
                                            pcVar10 = *(code **)(unaff_x28 + 0x250);
                                            if (pcVar10 == (code *)0x0) {
                                              pcVar10 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                                              *(code **)(unaff_x28 + 0x250) = pcVar10;
                                            }
                                            lVar11 = (*pcVar10)(lVar11);
                                            if ((lVar11 == 0) ||
                                               (lVar11 = FUN_07a1ba3c(lVar11,DAT_08432e78,0),
                                               lVar11 == 0)) goto LAB_035cff74;
                                            if (DAT_086ef190 == (code *)0x0) {
                                              DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                            }
                                            lVar11 = (*DAT_086ef190)(lVar11);
                                            if (lVar11 == 0) goto LAB_035cff74;
                                            uVar6 = FUN_03fa1bc8(lVar11,DAT_0840cd68);
                                            *(undefined8 *)(lVar5 + 0xfb8) = uVar6;
                                            if (*(int *)(unaff_x27 + 0xcd0) != 0) {
                                              puVar1 = (ulong *)(unaff_x26 +
                                                                 (lVar5 + 0xfb8U >> 0x12 & 0x7fff) *
                                                                 8 + 0x464e0);
                                              do {
                                                cVar3 = '\x01';
                                                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                if (bVar4) {
                                                  *puVar1 = *puVar1 | 1L << (lVar5 + 0xfb8U >> 0xc &
                                                                            0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar3 != '\0');
                                            }
                                            lVar5 = *unaff_x23;
                                            if ((lVar5 == 0) || (*(long *)(lVar5 + 0xfb8) == 0))
                                            goto LAB_035cff74;
                                            iVar2 = *(int *)(lVar5 + 0xd44);
                                            lVar5 = FUN_03c89df4(*(long *)(lVar5 + 0xfb8),
                                                                 DAT_08405b10);
                                            if (iVar2 == 1) {
                                              lVar11 = *unaff_x23;
                                              if ((lVar11 == 0) || (lVar5 == 0)) goto LAB_035cff74;
                                              FUN_07c99034(*(undefined4 *)(lVar11 + 0xfcc),
                                                           *(undefined4 *)(lVar11 + 0xfd0),lVar5,0);
                                              lVar11 = *unaff_x23;
                                              if (lVar11 == 0) goto LAB_035cff74;
                                              FUN_07c98f54(*(undefined4 *)(lVar11 + 0xfd4),
                                                           *(undefined4 *)(lVar11 + 0xfd8),
                                                           *(undefined4 *)(lVar11 + 0xfdc),
                                                           *(undefined4 *)(lVar11 + 0xfe0),lVar5,0);
                                            }
                                            else {
                                              if (lVar5 == 0) goto LAB_035cff74;
                                              if (DAT_086ef168 == (code *)0x0) {
                                                DAT_086ef168 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                                  );
                                              }
                                              (*DAT_086ef168)(lVar5,0);
                                            }
                                            lVar5 = *unaff_x23;
                                            if (lVar5 == 0) goto LAB_035cff74;
                                            if (*(int *)(lVar5 + 0xd74) == 1) {
                                              uVar6 = FUN_0666ec64(*(undefined8 *)(lVar5 + 0xac8),
                                                                   DAT_0844dd30,
                                                                   *(undefined8 *)(lVar5 + 0xad0),0)
                                              ;
                                              *(undefined8 *)(lVar5 + 0xac8) = uVar6;
                                              if (*(int *)(unaff_x27 + 0xcd0) != 0) {
                                                puVar1 = (ulong *)(unaff_x26 +
                                                                   (lVar5 + 0xac8U >> 0x12 & 0x7fff)
                                                                   * 8 + 0x464e0);
                                                do {
                                                  cVar3 = '\x01';
                                                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                  if (bVar4) {
                                                    *puVar1 = *puVar1 | 1L << (lVar5 + 0xac8U >> 0xc
                                                                              & 0x3f);
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                              }
                                              lVar5 = *unaff_x23;
                                              if ((lVar5 == 0) || (*(long *)(lVar5 + 0xac8) == 0))
                                              goto LAB_035cff74;
                                              puVar12 = (undefined8 *)(lVar5 + 0xac8);
                                              uVar6 = FUN_06670990(*(long *)(lVar5 + 0xac8),
                                                                   DAT_0844dd30,DAT_0842d3f8,0);
                                              *puVar12 = uVar6;
                                              if (*(int *)(unaff_x27 + 0xcd0) != 0) {
                                                puVar1 = (ulong *)(unaff_x26 +
                                                                   ((ulong)puVar12 >> 0x12 & 0x7fff)
                                                                   * 8 + 0x464e0);
                                                do {
                                                  cVar3 = '\x01';
                                                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                  if (bVar4) {
                                                    *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc
                                                                              & 0x3f);
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                              }
                                              lVar5 = *unaff_x23;
                                              if (lVar5 == 0) goto LAB_035cff74;
                                              *(float *)(lVar5 + 0xf0c) =
                                                   *(float *)(lVar5 + 0xf0c) + 0.25;
                                              if (*(int *)(lVar5 + 0xd44) == 1) {
                                                if (*(long *)(lVar5 + 0xfb8) == 0)
                                                goto LAB_035cff74;
                                                FUN_07c92560(*(undefined4 *)(lVar5 + 0xfc8),
                                                             *(long *)(lVar5 + 0xfb8),0);
                                                lVar5 = *unaff_x23;
                                                if (lVar5 == 0) goto LAB_035cff74;
                                              }
                                            }
                                            lVar5 = *(long *)(lVar5 + 0xfb8);
                                            if (lVar5 == 0) goto LAB_035cff74;
                                            pcVar10 = *(code **)(unaff_x25 + 0x188);
                                            if (pcVar10 == (code *)0x0) {
                                              pcVar10 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                              *(code **)(unaff_x25 + 0x188) = pcVar10;
                                            }
                                            lVar5 = (*pcVar10)(lVar5);
                                            lVar11 = *unaff_x23;
                                            if ((lVar11 == 0) || (lVar5 == 0)) goto LAB_035cff74;
                                            FUN_07a18224(*(undefined4 *)(lVar11 + 0xf08),
                                                         *(float *)(lVar11 + 0xf0c) -
                                                         *(float *)(lVar11 + 0xe94),
                                                         *(undefined4 *)(lVar11 + 0xf10),lVar5,0);
                                            lVar5 = *unaff_x23;
                                            if ((lVar5 == 0) ||
                                               (plVar7 = *(long **)(lVar5 + 0xfb8),
                                               plVar7 == (long *)0x0)) goto LAB_035cff74;
                                            (**(code **)(*plVar7 + 0x5e8))
                                                      (plVar7,*(undefined8 *)(lVar5 + 0xac8),
                                                       *(undefined8 *)(*plVar7 + 0x5f0));
                                            lVar5 = *unaff_x23;
                                            if ((lVar5 == 0) || (*(long *)(lVar5 + 0xfb8) == 0))
                                            goto LAB_035cff74;
                                            FUN_07c92410(*(long *)(lVar5 + 0xfb8),
                                                         *(undefined4 *)(lVar5 + 0xef4),0);
                                            lVar5 = *unaff_x23;
                                            if ((lVar5 == 0) ||
                                               (plVar7 = *(long **)(lVar5 + 0xfb8),
                                               plVar7 == (long *)0x0)) goto LAB_035cff74;
                                            (**(code **)(*plVar7 + 0x2a8))
                                                      (*(undefined4 *)(lVar5 + 0xec8),
                                                       *(undefined4 *)(lVar5 + 0xecc),
                                                       *(undefined4 *)(lVar5 + 0xed0),
                                                       *(undefined4 *)(lVar5 + 0xed4),plVar7,
                                                       *(undefined8 *)(*plVar7 + 0x2b0));
                                            lVar5 = *unaff_x23;
                                            if (lVar5 == 0) goto LAB_035cff74;
                                            if (*(int *)(lVar5 + 0xd4c) == 1) {
                                              if (*(long *)(lVar5 + 0xfb8) == 0) goto LAB_035cff74;
                                              FUN_07c91e48(*(long *)(lVar5 + 0xfb8),
                                                           *(undefined8 *)(lVar5 + 0xfc0),0);
                                              lVar5 = *unaff_x23;
                                              if (lVar5 == 0) goto LAB_035cff74;
                                            }
                                          }
                                          if (*(int *)(lVar5 + 0xd78) == 1) {
                                            lVar11 = *(long *)(lVar5 + 0xfa8);
                                            if (lVar11 == 0) goto LAB_035cff74;
                                            pcVar10 = *(code **)(unaff_x28 + 0x250);
                                            if (pcVar10 == (code *)0x0) {
                                              pcVar10 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::get_transform()");
                                              *(code **)(unaff_x28 + 0x250) = pcVar10;
                                            }
                                            lVar11 = (*pcVar10)(lVar11);
                                            if ((lVar11 == 0) ||
                                               (lVar11 = FUN_07a1ba3c(lVar11,DAT_08432e68,0),
                                               lVar11 == 0)) goto LAB_035cff74;
                                            if (DAT_086ef190 == (code *)0x0) {
                                              DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                            }
                                            lVar11 = (*DAT_086ef190)(lVar11);
                                            if (lVar11 == 0) goto LAB_035cff74;
                                            uVar6 = FUN_03fa1bc8(lVar11,DAT_0840cd68);
                                            *(undefined8 *)(lVar5 + 0xfe8) = uVar6;
                                            if (*(int *)(unaff_x27 + 0xcd0) != 0) {
                                              puVar1 = (ulong *)(unaff_x26 +
                                                                 (lVar5 + 0xfe8U >> 0x12 & 0x7fff) *
                                                                 8 + 0x464e0);
                                              do {
                                                cVar3 = '\x01';
                                                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                if (bVar4) {
                                                  *puVar1 = *puVar1 | 1L << (lVar5 + 0xfe8U >> 0xc &
                                                                            0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar3 != '\0');
                                            }
                                            lVar5 = *unaff_x23;
                                            if (lVar5 == 0) goto LAB_035cff74;
                                            plVar7 = *(long **)(lVar5 + 0xfe8);
                                            uVar6 = FUN_0682c29c(lVar5 + 0xac0,0);
                                            uVar6 = FUN_06660dbc(DAT_0842d720,uVar6,0);
                                            if (plVar7 == (long *)0x0) goto LAB_035cff74;
                                            (**(code **)(*plVar7 + 0x5e8))
                                                      (plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x5f0)
                                                      );
                                            lVar5 = *unaff_x23;
                                            if ((lVar5 == 0) ||
                                               (plVar7 = *(long **)(lVar5 + 0xfe8),
                                               plVar7 == (long *)0x0)) goto LAB_035cff74;
                                            (**(code **)(*plVar7 + 0x2a8))
                                                      (*(undefined4 *)(lVar5 + 0xed8),
                                                       *(undefined4 *)(lVar5 + 0xedc),
                                                       *(undefined4 *)(lVar5 + 0xee0),
                                                       *(undefined4 *)(lVar5 + 0xee4),plVar7,
                                                       *(undefined8 *)(*plVar7 + 0x2b0));
                                            if ((*unaff_x23 == 0) ||
                                               (lVar5 = *(long *)(*unaff_x23 + 0xfe8), lVar5 == 0))
                                            goto LAB_035cff74;
                                            pcVar10 = *(code **)(unaff_x25 + 0x188);
                                            if (pcVar10 == (code *)0x0) {
                                              pcVar10 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_transform()");
                                              *(code **)(unaff_x25 + 0x188) = pcVar10;
                                            }
                                            lVar5 = (*pcVar10)(lVar5);
                                            lVar11 = *unaff_x23;
                                            if ((lVar11 == 0) || (lVar5 == 0)) goto LAB_035cff74;
                                            FUN_07a18224(*(undefined4 *)(lVar11 + 0xf14),
                                                         *(undefined4 *)(lVar11 + 0xf18),
                                                         *(undefined4 *)(lVar11 + 0xf1c),lVar5,0);
                                            lVar5 = *unaff_x23;
                                            if (lVar5 == 0) goto LAB_035cff74;
                                            if (*(int *)(lVar5 + 0xd50) == 1) {
                                              if (*(long *)(lVar5 + 0xfe8) == 0) goto LAB_035cff74;
                                              FUN_07c91e48(*(long *)(lVar5 + 0xfe8),
                                                           *(undefined8 *)(lVar5 + 0xff0),0);
                                              lVar5 = *unaff_x23;
                                              if (lVar5 == 0) goto LAB_035cff74;
                                            }
                                            if (*(int *)(lVar5 + 0xd44) == 1) {
                                              if (*(long *)(lVar5 + 0xfb8) == 0) goto LAB_035cff74;
                                              lVar5 = FUN_03c89df4(*(long *)(lVar5 + 0xfb8),
                                                                   DAT_08405b10);
                                              lVar11 = *unaff_x23;
                                              if ((lVar11 == 0) || (lVar5 == 0)) goto LAB_035cff74;
                                              FUN_07c99034(*(undefined4 *)(lVar11 + 0xfcc),
                                                           *(undefined4 *)(lVar11 + 0xfd0),lVar5,0);
                                              lVar11 = *unaff_x23;
                                              if (lVar11 == 0) goto LAB_035cff74;
                                              FUN_07c98f54(*(undefined4 *)(lVar11 + 0xfd4),
                                                           *(undefined4 *)(lVar11 + 0xfd8),
                                                           *(undefined4 *)(lVar11 + 0xfdc),
                                                           *(undefined4 *)(lVar11 + 0xfe0),lVar5,0);
                                            }
                                            else {
                                              if ((*(long *)(lVar5 + 0xfe8) == 0) ||
                                                 (lVar5 = FUN_03c89df4(*(long *)(lVar5 + 0xfe8),
                                                                       DAT_08405b10), lVar5 == 0))
                                              goto LAB_035cff74;
                                              if (DAT_086ef168 == (code *)0x0) {
                                                DAT_086ef168 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                                  );
                                              }
                                              (*DAT_086ef168)(lVar5,0);
                                            }
                                          }
                                          lVar5 = *unaff_x23;
                                          if (lVar5 != 0) {
                                            if ((*(int *)(lVar5 + 0xc8c) == 2) ||
                                               (*(int *)(lVar5 + 0xc8c) == 4)) {
                                              FUN_035ba270(lVar5,1,0);
                                              return;
                                            }
                                            lVar5 = *(long *)(lVar5 + 0x1010);
                                            if (lVar5 != 0) {
                                              if (DAT_086ef168 == (code *)0x0) {
                                                DAT_086ef168 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                                  );
                                              }
                                              (*DAT_086ef168)(lVar5,0);
                                              lVar5 = *unaff_x23;
                                              if (lVar5 != 0) {
                                                if (*(int *)(lVar5 + 0xd58) == 0) {
                                                  if (DAT_086ef190 == (code *)0x0) {
                                                    DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                                  }
                                                  lVar5 = (*DAT_086ef190)(plVar8);
                                                  if (lVar5 == 0) goto LAB_035cff74;
                                                  if (DAT_086ef278 == (code *)0x0) {
                                                    DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_086ef278)(lVar5,0);
                                                  lVar5 = *unaff_x23;
                                                  if (lVar5 == 0) goto LAB_035cff74;
                                                }
                                                uVar6 = *(undefined8 *)(lVar5 + 0xfb8);
                                                if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                                  FUN_033b9870();
                                                }
                                                uVar9 = FUN_07a0d2c4(uVar6,0,0);
                                                if ((uVar9 & 1) != 0) {
                                                  lVar5 = *unaff_x23;
                                                  if (lVar5 == 0) goto LAB_035cff74;
                                                  if (*(int *)(lVar5 + 0xd70) == 1) {
                                                    lVar5 = *(long *)(lVar5 + 0xfb8);
                                                    if (lVar5 == 0) goto LAB_035cff74;
                                                    if (DAT_086ef190 == (code *)0x0) {
                                                      DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                                  }
                                                  lVar5 = (*DAT_086ef190)(lVar5);
                                                  if (lVar5 == 0) goto LAB_035cff74;
                                                  if (DAT_086ef278 == (code *)0x0) {
                                                    DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_086ef278)(lVar5,0);
                                                  }
                                                }
                                                if (*unaff_x23 != 0) {
                                                  uVar6 = *(undefined8 *)(*unaff_x23 + 0xfe8);
                                                  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                                                    FUN_033b9870();
                                                  }
                                                  uVar9 = FUN_07a0d2c4(uVar6,0,0);
                                                  if ((uVar9 & 1) == 0) {
                                                    return;
                                                  }
                                                  lVar5 = *unaff_x23;
                                                  if (lVar5 != 0) {
                                                    if (*(int *)(lVar5 + 0xd78) != 1) {
                                                      return;
                                                    }
                                                    lVar5 = *(long *)(lVar5 + 0xfe8);
                                                    if (lVar5 != 0) {
                                                      if (DAT_086ef190 == (code *)0x0) {
                                                        DAT_086ef190 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Component::get_gameObject()");
                                                  }
                                                  lVar5 = (*DAT_086ef190)(lVar5);
                                                  if (lVar5 != 0) {
                                                    if (DAT_086ef278 == (code *)0x0) {
                                                      DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                                                  }
                    /* WARNING: Could not recover jumptable at 0x035cff40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                  (*DAT_086ef278)(lVar5,0);
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
LAB_035cff74:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


