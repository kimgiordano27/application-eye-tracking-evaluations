/*
FUNCTION_NAME: UnityEngine.Cache$$set_maximumAvailableStorageSpace
ENTRY_POINT: 078c60d8
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void UnityEngine_Cache__set_maximumAvailableStorageSpace(code *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  long unaff_x22;
  long unaff_x23;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    *(code **)(unaff_x23 + 0x188) = param_1;
  }
  lVar2 = (*param_1)();
  if (lVar2 != 0) {
    in_stack_00000050 = DAT_012e3600;
    in_stack_00000058 = 0x3f800000;
    if (DAT_086ef9d0 == (code *)0x0) {
      DAT_086ef9d0 = (code *)FUN_033d1b68(
                                         "UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                         );
    }
    (*DAT_086ef9d0)(lVar2,&stack0x00000050);
    lVar2 = *(long *)(unaff_x20 + 0x78);
    if (lVar2 != 0) {
      plVar7 = *(long **)(unaff_x19 + 0xd8);
      uVar3 = FUN_073e79c8(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),0);
      uVar4 = FUN_0666e380(uVar3,DAT_08440d50);
      uVar3 = DAT_08440d50;
      if ((uVar4 & 1) == 0) {
        uVar3 = FUN_074068a0();
      }
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x5e8))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 0x5f0));
        if (*(long *)(unaff_x19 + 0x138) != 0) {
          FUN_078c20bc(*(long *)(unaff_x19 + 0x138),*(undefined8 *)(unaff_x19 + 0x20));
          if (*(long *)(unaff_x19 + 0x148) != 0) {
            FUN_078c20bc(*(long *)(unaff_x19 + 0x148),*(undefined8 *)(unaff_x19 + 0x20));
            auVar8._8_8_ = in_stack_00000028;
            auVar8._0_8_ = in_stack_00000020;
            if ((*(long *)(unaff_x19 + 0x20) != 0) &&
               (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x58), _in_stack_00000020 = auVar8,
               lVar2 != 0)) {
              lVar2 = FUN_073d148c(lVar2,0);
              if (lVar2 != 0) {
                _in_stack_00000020 = FUN_073bc9bc(lVar2,0);
                lVar2 = FUN_051208d4(&stack0x00000020,0,*(undefined8 *)(unaff_x22 + 0x30));
                if (lVar2 != 0) {
                  uVar3 = FUN_074068a0(lVar2,0);
                  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                     (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x48), lVar2 != 0)) {
                    lVar2 = FUN_073d148c(lVar2,0);
                    if (lVar2 != 0) {
                      auVar8 = FUN_073bc9bc(lVar2,0);
                      _in_stack_00000020 = auVar8;
                      lVar2 = FUN_051208d4(&stack0x00000020,0,*(undefined8 *)(unaff_x22 + 0x30));
                      if (lVar2 != 0) {
                        uVar5 = FUN_074068a0(lVar2,0);
                        uVar3 = FUN_0666ed44(uVar3,DAT_0842de80,uVar5,DAT_0842e1f0,0);
                        if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                           (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x60), lVar2 != 0)) {
                          lVar2 = FUN_073d148c(lVar2,0);
                          if (lVar2 != 0) {
                            auVar8 = FUN_073bc9bc(lVar2,0);
                            _in_stack_00000020 = auVar8;
                            lVar2 = FUN_051208d4(&stack0x00000020,0,
                                                 *(undefined8 *)(unaff_x22 + 0x30));
                            if (lVar2 != 0) {
                              uVar5 = FUN_074068a0(lVar2,0);
                              if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                                 (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x50), lVar2 != 0)
                                 ) {
                                lVar2 = FUN_073d148c(lVar2,0);
                                if (lVar2 != 0) {
                                  auVar8 = FUN_073bc9bc(lVar2,0);
                                  _in_stack_00000020 = auVar8;
                                  lVar2 = FUN_051208d4(&stack0x00000020,0,
                                                       *(undefined8 *)(unaff_x22 + 0x30));
                                  if (lVar2 != 0) {
                                    uVar6 = FUN_074068a0(lVar2,0);
                                    uVar5 = FUN_0666ed44(uVar5,DAT_0842de80,uVar6,DAT_0842e1f0,0);
                                    plVar7 = *(long **)(unaff_x19 + 0x140);
                                    if (plVar7 != (long *)0x0) {
                                      (**(code **)(*plVar7 + 0x5e8))
                                                (plVar7,uVar3,*(undefined8 *)(*plVar7 + 0x5f0));
                                      plVar7 = *(long **)(unaff_x19 + 0x150);
                                      if (plVar7 != (long *)0x0) {
                                        (**(code **)(*plVar7 + 0x5e8))
                                                  (plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x5f0));
                                        if (*(long *)(unaff_x19 + 0x188) != 0) {
                                          FUN_078c3810(*(long *)(unaff_x19 + 0x188),
                                                       *(undefined8 *)(unaff_x19 + 0x20));
                                          if (*(long *)(unaff_x19 + 0x198) != 0) {
                                            FUN_078c3810(*(long *)(unaff_x19 + 0x198),
                                                         *(undefined8 *)(unaff_x19 + 0x20));
                                            plVar7 = *(long **)(unaff_x19 + 400);
                                            if (plVar7 != (long *)0x0) {
                                              (**(code **)(*plVar7 + 0x5e8))
                                                        (plVar7,uVar3,
                                                         *(undefined8 *)(*plVar7 + 0x5f0));
                                              plVar7 = *(long **)(unaff_x19 + 0x1a0);
                                              if (plVar7 != (long *)0x0) {
                                                (**(code **)(*plVar7 + 0x5e8))
                                                          (plVar7,uVar5,
                                                           *(undefined8 *)(*plVar7 + 0x5f0));
                                                FUN_078c6e90();
                                                FUN_078c7204();
                                                plVar7 = *(long **)(unaff_x19 + 0x170);
                                                FUN_078c313c();
                                                if (plVar7 != (long *)0x0) {
                                                  (**(code **)(*plVar7 + 0x2a8))
                                                            (plVar7,*(undefined8 *)(*plVar7 + 0x2b0)
                                                            );
                                                  plVar7 = *(long **)(unaff_x19 + 0x178);
                                                  FUN_078c313c();
                                                  if (plVar7 != (long *)0x0) {
                                                    (**(code **)(*plVar7 + 0x2a8))
                                                              (plVar7,*(undefined8 *)
                                                                       (*plVar7 + 0x2b0));
                                                    plVar7 = *(long **)(unaff_x19 + 0xa0);
                                                    FUN_078c313c();
                                                    if (plVar7 != (long *)0x0) {
                                                      (**(code **)(*plVar7 + 0x2a8))
                                                                (plVar7,*(undefined8 *)
                                                                         (*plVar7 + 0x2b0));
                                                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                        uVar5 = *(undefined8 *)
                                                                 (*(long *)(unaff_x19 + 0x20) + 0x48
                                                                 );
                                                        uVar3 = FUN_03398a84(DAT_083be4a8);
                                                        FUN_060e956c();
                                                        if (*(int *)(DAT_083d36c0 + 0xe0) == 0) {
                                                          FUN_033b9870();
                                                        }
                                                        FUN_078c72a8(uVar5,uVar3);
                                                        if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                          uVar5 = *(undefined8 *)
                                                                   (*(long *)(unaff_x19 + 0x20) +
                                                                   0x50);
                                                          uVar3 = FUN_03398a84(DAT_083be4a8);
                                                          FUN_060e956c();
                                                          FUN_078c72a8(uVar5,uVar3);
                                                          if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                            uVar5 = *(undefined8 *)
                                                                     (*(long *)(unaff_x19 + 0x20) +
                                                                     0x58);
                                                            uVar3 = FUN_03398a84(DAT_083be4a8);
                                                            FUN_060e956c();
                                                            FUN_078c72a8(uVar5,uVar3);
                                                            if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                              uVar5 = *(undefined8 *)
                                                                       (*(long *)(unaff_x19 + 0x20)
                                                                       + 0x60);
                                                              uVar3 = FUN_03398a84(DAT_083be4a8);
                                                              FUN_060e956c();
                                                              FUN_078c72a8(uVar5,uVar3);
                                                              if (*(long *)(unaff_x19 + 0x20) != 0)
                                                              {
                                                                uVar5 = *(undefined8 *)
                                                                         (*(long *)(unaff_x19 + 0x20
                                                                                   ) + 0x68);
                                                                uVar3 = FUN_03398a84(DAT_083be4a8);
                                                                FUN_060e956c();
                                                                FUN_078c72a8(uVar5,uVar3);
                                                                if (*(long *)(unaff_x19 + 0x20) != 0
                                                                   ) {
                                                                  uVar5 = *(undefined8 *)
                                                                           (*(long *)(unaff_x19 +
                                                                                     0x20) + 0x70);
                                                                  uVar3 = FUN_03398a84(DAT_083be4a8)
                                                                  ;
                                                                  FUN_060e956c();
                                                                  FUN_078c72a8(uVar5,uVar3);
                                                                  if (*(long *)(unaff_x19 + 0x20) !=
                                                                      0) {
                                                                    uVar5 = *(undefined8 *)
                                                                             (*(long *)(unaff_x19 +
                                                                                       0x20) + 0x78)
                                                                    ;
                                                                    uVar3 = FUN_03398a84(
                                                  DAT_083be4a8);
                                                  FUN_060e956c();
                                                  FUN_078c72a8(uVar5,uVar3);
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar5 = *(undefined8 *)
                                                             (*(long *)(unaff_x19 + 0x20) + 0x80);
                                                    uVar3 = FUN_03398a84(DAT_083be4a8);
                                                    FUN_060e956c();
                                                    FUN_078c72a8(uVar5,uVar3);
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar5 = *(undefined8 *)
                                                               (*(long *)(unaff_x19 + 0x20) + 0x88);
                                                      uVar3 = FUN_03398a84(DAT_083be4a8);
                                                      FUN_060e956c();
                                                      FUN_078c72a8(uVar5,uVar3);
                                                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                        uVar5 = *(undefined8 *)
                                                                 (*(long *)(unaff_x19 + 0x20) + 0xa8
                                                                 );
                                                        uVar3 = FUN_03398a84(DAT_083be4a8);
                                                        FUN_060e956c();
                                                        FUN_078c72a8(uVar5,uVar3);
                                                        if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                          uVar5 = *(undefined8 *)
                                                                   (*(long *)(unaff_x19 + 0x20) +
                                                                   0xb0);
                                                          uVar3 = FUN_03398a84(DAT_083be4a8);
                                                          FUN_060e956c();
                                                          FUN_078c72a8(uVar5,uVar3);
                                                          if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                            uVar5 = *(undefined8 *)
                                                                     (*(long *)(unaff_x19 + 0x20) +
                                                                     0xd8);
                                                            uVar3 = FUN_03398a84(DAT_083be4a8);
                                                            FUN_060e956c();
                                                            FUN_078c72a8(uVar5,uVar3);
                                                            if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                              uVar5 = *(undefined8 *)
                                                                       (*(long *)(unaff_x19 + 0x20)
                                                                       + 0x30);
                                                              uVar3 = FUN_03398a84(DAT_083be4a8);
                                                              FUN_060e956c();
                                                              FUN_078c72a8(uVar5,uVar3);
                                                              if (*(long *)(unaff_x19 + 0x20) != 0)
                                                              {
                                                                uVar5 = *(undefined8 *)
                                                                         (*(long *)(unaff_x19 + 0x20
                                                                                   ) + 0x38);
                                                                uVar3 = FUN_03398a84(DAT_083be4a8);
                                                                FUN_060e956c();
                                                                FUN_078c72a8(uVar5,uVar3);
                                                                if (*(long *)(unaff_x19 + 0x20) != 0
                                                                   ) {
                                                                  uVar5 = *(undefined8 *)
                                                                           (*(long *)(unaff_x19 +
                                                                                     0x20) + 0x40);
                                                                  uVar3 = FUN_03398a84(DAT_083be4a8)
                                                                  ;
                                                                  FUN_060e956c();
                                                                  FUN_078c72a8(uVar5,uVar3);
                                                                  if (*(long *)(unaff_x19 + 0x20) !=
                                                                      0) {
                                                                    uVar5 = *(undefined8 *)
                                                                             (*(long *)(unaff_x19 +
                                                                                       0x20) + 0x100
                                                                             );
                                                                    uVar3 = FUN_03398a84(
                                                  DAT_083be4a8);
                                                  FUN_060e956c();
                                                  FUN_078c72a8(uVar5,uVar3);
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar5 = *(undefined8 *)
                                                             (*(long *)(unaff_x19 + 0x20) + 0x108);
                                                    uVar3 = FUN_03398a84(DAT_083be4a8);
                                                    FUN_060e956c();
                                                    FUN_078c72a8(uVar5,uVar3);
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar5 = *(undefined8 *)
                                                               (*(long *)(unaff_x19 + 0x20) + 0x110)
                                                      ;
                                                      uVar3 = FUN_03398a84(DAT_083be4a8);
                                                      FUN_060e956c();
                                                      FUN_078c72a8(uVar5,uVar3);
                                                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                        uVar5 = *(undefined8 *)
                                                                 (*(long *)(unaff_x19 + 0x20) +
                                                                 0x128);
                                                        uVar3 = FUN_03398a84(DAT_083be4a8);
                                                        FUN_060e956c();
                                                        FUN_078c72a8(uVar5,uVar3);
                                                        if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                          uVar5 = *(undefined8 *)
                                                                   (*(long *)(unaff_x19 + 0x20) +
                                                                   0x118);
                                                          uVar3 = FUN_03398a84(DAT_083be4a8);
                                                          FUN_060e956c();
                                                          FUN_078c72a8(uVar5,uVar3);
                                                          if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                            uVar5 = *(undefined8 *)
                                                                     (*(long *)(unaff_x19 + 0x20) +
                                                                     0x120);
                                                            uVar3 = FUN_03398a84(DAT_083be4a8);
                                                            FUN_060e956c();
                                                            FUN_078c72a8(uVar5,uVar3);
                                                            if ((*(long *)(unaff_x19 + 0x20) != 0)
                                                               && (lVar2 = *(long *)(*(long *)(
                                                  unaff_x19 + 0x20) + 0x170), lVar2 != 0)) {
                                                    in_stack_00000010 = 0;
                                                    in_stack_00000018 = 0;
                                                    in_stack_00000008 = 0;
                                                    FUN_05fd5ad4(&stack0x00000008,lVar2,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(DAT_083f7ed0
                                                                                      + 0x20) + 0xc0
                                                                            ) + 0x138));
                                                    while( true ) {
                                                      uVar4 = FUN_05fd5b44(&stack0x00000008,
                                                                           DAT_083e8910);
                                                      lVar2 = in_stack_00000018;
                                                      if ((uVar4 & 1) == 0) break;
                                                      uVar3 = FUN_03398a84(DAT_083be6d0);
                                                      FUN_060f286c();
                                                      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                                                        FUN_033d1d3c();
                                                      }
                                                      FUN_07970698(lVar2,uVar3,0);
                                                    }
                                                    lVar2 = *(long *)(unaff_x19 + 0x30);
                                                    if (lVar2 != 0) {
                                                      cVar1 = *(char *)(unaff_x19 + 0x28);
                                                      if (DAT_086ef278 == (code *)0x0) {
                                                        DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_086ef278)(lVar2,cVar1 != '\0');
                                                  lVar2 = *(long *)(unaff_x19 + 0x38);
                                                  if (lVar2 != 0) {
                                                    cVar1 = *(char *)(unaff_x19 + 0x28);
                                                    if (DAT_086ef278 == (code *)0x0) {
                                                      DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_086ef278)(lVar2,cVar1 == '\0');
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


