/*
FUNCTION_NAME: UnityEngine.Cache$$Cache_SetMaximumDiskSpaceAvailable
ENTRY_POINT: 078c611c
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


void UnityEngine_Cache__Cache_SetMaximumDiskSpaceAvailable(code *param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
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
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)FUN_033d1b68(
                                  "UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                  );
    *(code **)(unaff_x23 + 0x9d0) = param_1;
  }
  (*param_1)();
  lVar6 = *(long *)(unaff_x20 + 0x78);
  if (lVar6 != 0) {
    plVar7 = *(long **)(unaff_x19 + 0xd8);
    uVar2 = FUN_073e79c8(*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28),0);
    uVar3 = FUN_0666e380(uVar2,DAT_08440d50);
    uVar2 = DAT_08440d50;
    if ((uVar3 & 1) == 0) {
      uVar2 = FUN_074068a0();
    }
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x5e8))(plVar7,uVar2,*(undefined8 *)(*plVar7 + 0x5f0));
      if (*(long *)(unaff_x19 + 0x138) != 0) {
        FUN_078c20bc(*(long *)(unaff_x19 + 0x138),*(undefined8 *)(unaff_x19 + 0x20));
        if (*(long *)(unaff_x19 + 0x148) != 0) {
          FUN_078c20bc(*(long *)(unaff_x19 + 0x148),*(undefined8 *)(unaff_x19 + 0x20));
          auVar8._8_8_ = in_stack_00000028;
          auVar8._0_8_ = in_stack_00000020;
          if ((*(long *)(unaff_x19 + 0x20) != 0) &&
             (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x58), _in_stack_00000020 = auVar8,
             lVar6 != 0)) {
            lVar6 = FUN_073d148c(lVar6,0);
            if (lVar6 != 0) {
              _in_stack_00000020 = FUN_073bc9bc(lVar6,0);
              lVar6 = FUN_051208d4(&stack0x00000020,0,*(undefined8 *)(unaff_x22 + 0x30));
              if (lVar6 != 0) {
                uVar2 = FUN_074068a0(lVar6,0);
                if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                   (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x48), lVar6 != 0)) {
                  lVar6 = FUN_073d148c(lVar6,0);
                  if (lVar6 != 0) {
                    auVar8 = FUN_073bc9bc(lVar6,0);
                    _in_stack_00000020 = auVar8;
                    lVar6 = FUN_051208d4(&stack0x00000020,0,*(undefined8 *)(unaff_x22 + 0x30));
                    if (lVar6 != 0) {
                      uVar4 = FUN_074068a0(lVar6,0);
                      uVar2 = FUN_0666ed44(uVar2,DAT_0842de80,uVar4,DAT_0842e1f0,0);
                      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                         (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x60), lVar6 != 0)) {
                        lVar6 = FUN_073d148c(lVar6,0);
                        if (lVar6 != 0) {
                          auVar8 = FUN_073bc9bc(lVar6,0);
                          _in_stack_00000020 = auVar8;
                          lVar6 = FUN_051208d4(&stack0x00000020,0,*(undefined8 *)(unaff_x22 + 0x30))
                          ;
                          if (lVar6 != 0) {
                            uVar4 = FUN_074068a0(lVar6,0);
                            if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                               (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x50), lVar6 != 0))
                            {
                              lVar6 = FUN_073d148c(lVar6,0);
                              if (lVar6 != 0) {
                                auVar8 = FUN_073bc9bc(lVar6,0);
                                _in_stack_00000020 = auVar8;
                                lVar6 = FUN_051208d4(&stack0x00000020,0,
                                                     *(undefined8 *)(unaff_x22 + 0x30));
                                if (lVar6 != 0) {
                                  uVar5 = FUN_074068a0(lVar6,0);
                                  uVar4 = FUN_0666ed44(uVar4,DAT_0842de80,uVar5,DAT_0842e1f0,0);
                                  plVar7 = *(long **)(unaff_x19 + 0x140);
                                  if (plVar7 != (long *)0x0) {
                                    (**(code **)(*plVar7 + 0x5e8))
                                              (plVar7,uVar2,*(undefined8 *)(*plVar7 + 0x5f0));
                                    plVar7 = *(long **)(unaff_x19 + 0x150);
                                    if (plVar7 != (long *)0x0) {
                                      (**(code **)(*plVar7 + 0x5e8))
                                                (plVar7,uVar4,*(undefined8 *)(*plVar7 + 0x5f0));
                                      if (*(long *)(unaff_x19 + 0x188) != 0) {
                                        FUN_078c3810(*(long *)(unaff_x19 + 0x188),
                                                     *(undefined8 *)(unaff_x19 + 0x20));
                                        if (*(long *)(unaff_x19 + 0x198) != 0) {
                                          FUN_078c3810(*(long *)(unaff_x19 + 0x198),
                                                       *(undefined8 *)(unaff_x19 + 0x20));
                                          plVar7 = *(long **)(unaff_x19 + 400);
                                          if (plVar7 != (long *)0x0) {
                                            (**(code **)(*plVar7 + 0x5e8))
                                                      (plVar7,uVar2,*(undefined8 *)(*plVar7 + 0x5f0)
                                                      );
                                            plVar7 = *(long **)(unaff_x19 + 0x1a0);
                                            if (plVar7 != (long *)0x0) {
                                              (**(code **)(*plVar7 + 0x5e8))
                                                        (plVar7,uVar4,
                                                         *(undefined8 *)(*plVar7 + 0x5f0));
                                              FUN_078c6e90();
                                              FUN_078c7204();
                                              plVar7 = *(long **)(unaff_x19 + 0x170);
                                              FUN_078c313c();
                                              if (plVar7 != (long *)0x0) {
                                                (**(code **)(*plVar7 + 0x2a8))
                                                          (plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
                                                plVar7 = *(long **)(unaff_x19 + 0x178);
                                                FUN_078c313c();
                                                if (plVar7 != (long *)0x0) {
                                                  (**(code **)(*plVar7 + 0x2a8))
                                                            (plVar7,*(undefined8 *)(*plVar7 + 0x2b0)
                                                            );
                                                  plVar7 = *(long **)(unaff_x19 + 0xa0);
                                                  FUN_078c313c();
                                                  if (plVar7 != (long *)0x0) {
                                                    (**(code **)(*plVar7 + 0x2a8))
                                                              (plVar7,*(undefined8 *)
                                                                       (*plVar7 + 0x2b0));
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar4 = *(undefined8 *)
                                                               (*(long *)(unaff_x19 + 0x20) + 0x48);
                                                      uVar2 = FUN_03398a84(DAT_083be4a8);
                                                      FUN_060e956c();
                                                      if (*(int *)(DAT_083d36c0 + 0xe0) == 0) {
                                                        FUN_033b9870();
                                                      }
                                                      FUN_078c72a8(uVar4,uVar2);
                                                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                        uVar4 = *(undefined8 *)
                                                                 (*(long *)(unaff_x19 + 0x20) + 0x50
                                                                 );
                                                        uVar2 = FUN_03398a84(DAT_083be4a8);
                                                        FUN_060e956c();
                                                        FUN_078c72a8(uVar4,uVar2);
                                                        if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                          uVar4 = *(undefined8 *)
                                                                   (*(long *)(unaff_x19 + 0x20) +
                                                                   0x58);
                                                          uVar2 = FUN_03398a84(DAT_083be4a8);
                                                          FUN_060e956c();
                                                          FUN_078c72a8(uVar4,uVar2);
                                                          if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                            uVar4 = *(undefined8 *)
                                                                     (*(long *)(unaff_x19 + 0x20) +
                                                                     0x60);
                                                            uVar2 = FUN_03398a84(DAT_083be4a8);
                                                            FUN_060e956c();
                                                            FUN_078c72a8(uVar4,uVar2);
                                                            if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                              uVar4 = *(undefined8 *)
                                                                       (*(long *)(unaff_x19 + 0x20)
                                                                       + 0x68);
                                                              uVar2 = FUN_03398a84(DAT_083be4a8);
                                                              FUN_060e956c();
                                                              FUN_078c72a8(uVar4,uVar2);
                                                              if (*(long *)(unaff_x19 + 0x20) != 0)
                                                              {
                                                                uVar4 = *(undefined8 *)
                                                                         (*(long *)(unaff_x19 + 0x20
                                                                                   ) + 0x70);
                                                                uVar2 = FUN_03398a84(DAT_083be4a8);
                                                                FUN_060e956c();
                                                                FUN_078c72a8(uVar4,uVar2);
                                                                if (*(long *)(unaff_x19 + 0x20) != 0
                                                                   ) {
                                                                  uVar4 = *(undefined8 *)
                                                                           (*(long *)(unaff_x19 +
                                                                                     0x20) + 0x78);
                                                                  uVar2 = FUN_03398a84(DAT_083be4a8)
                                                                  ;
                                                                  FUN_060e956c();
                                                                  FUN_078c72a8(uVar4,uVar2);
                                                                  if (*(long *)(unaff_x19 + 0x20) !=
                                                                      0) {
                                                                    uVar4 = *(undefined8 *)
                                                                             (*(long *)(unaff_x19 +
                                                                                       0x20) + 0x80)
                                                                    ;
                                                                    uVar2 = FUN_03398a84(
                                                  DAT_083be4a8);
                                                  FUN_060e956c();
                                                  FUN_078c72a8(uVar4,uVar2);
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(unaff_x19 + 0x20) + 0x88);
                                                    uVar2 = FUN_03398a84(DAT_083be4a8);
                                                    FUN_060e956c();
                                                    FUN_078c72a8(uVar4,uVar2);
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar4 = *(undefined8 *)
                                                               (*(long *)(unaff_x19 + 0x20) + 0xa8);
                                                      uVar2 = FUN_03398a84(DAT_083be4a8);
                                                      FUN_060e956c();
                                                      FUN_078c72a8(uVar4,uVar2);
                                                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                        uVar4 = *(undefined8 *)
                                                                 (*(long *)(unaff_x19 + 0x20) + 0xb0
                                                                 );
                                                        uVar2 = FUN_03398a84(DAT_083be4a8);
                                                        FUN_060e956c();
                                                        FUN_078c72a8(uVar4,uVar2);
                                                        if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                          uVar4 = *(undefined8 *)
                                                                   (*(long *)(unaff_x19 + 0x20) +
                                                                   0xd8);
                                                          uVar2 = FUN_03398a84(DAT_083be4a8);
                                                          FUN_060e956c();
                                                          FUN_078c72a8(uVar4,uVar2);
                                                          if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                            uVar4 = *(undefined8 *)
                                                                     (*(long *)(unaff_x19 + 0x20) +
                                                                     0x30);
                                                            uVar2 = FUN_03398a84(DAT_083be4a8);
                                                            FUN_060e956c();
                                                            FUN_078c72a8(uVar4,uVar2);
                                                            if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                              uVar4 = *(undefined8 *)
                                                                       (*(long *)(unaff_x19 + 0x20)
                                                                       + 0x38);
                                                              uVar2 = FUN_03398a84(DAT_083be4a8);
                                                              FUN_060e956c();
                                                              FUN_078c72a8(uVar4,uVar2);
                                                              if (*(long *)(unaff_x19 + 0x20) != 0)
                                                              {
                                                                uVar4 = *(undefined8 *)
                                                                         (*(long *)(unaff_x19 + 0x20
                                                                                   ) + 0x40);
                                                                uVar2 = FUN_03398a84(DAT_083be4a8);
                                                                FUN_060e956c();
                                                                FUN_078c72a8(uVar4,uVar2);
                                                                if (*(long *)(unaff_x19 + 0x20) != 0
                                                                   ) {
                                                                  uVar4 = *(undefined8 *)
                                                                           (*(long *)(unaff_x19 +
                                                                                     0x20) + 0x100);
                                                                  uVar2 = FUN_03398a84(DAT_083be4a8)
                                                                  ;
                                                                  FUN_060e956c();
                                                                  FUN_078c72a8(uVar4,uVar2);
                                                                  if (*(long *)(unaff_x19 + 0x20) !=
                                                                      0) {
                                                                    uVar4 = *(undefined8 *)
                                                                             (*(long *)(unaff_x19 +
                                                                                       0x20) + 0x108
                                                                             );
                                                                    uVar2 = FUN_03398a84(
                                                  DAT_083be4a8);
                                                  FUN_060e956c();
                                                  FUN_078c72a8(uVar4,uVar2);
                                                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(unaff_x19 + 0x20) + 0x110);
                                                    uVar2 = FUN_03398a84(DAT_083be4a8);
                                                    FUN_060e956c();
                                                    FUN_078c72a8(uVar4,uVar2);
                                                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                      uVar4 = *(undefined8 *)
                                                               (*(long *)(unaff_x19 + 0x20) + 0x128)
                                                      ;
                                                      uVar2 = FUN_03398a84(DAT_083be4a8);
                                                      FUN_060e956c();
                                                      FUN_078c72a8(uVar4,uVar2);
                                                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                        uVar4 = *(undefined8 *)
                                                                 (*(long *)(unaff_x19 + 0x20) +
                                                                 0x118);
                                                        uVar2 = FUN_03398a84(DAT_083be4a8);
                                                        FUN_060e956c();
                                                        FUN_078c72a8(uVar4,uVar2);
                                                        if (*(long *)(unaff_x19 + 0x20) != 0) {
                                                          uVar4 = *(undefined8 *)
                                                                   (*(long *)(unaff_x19 + 0x20) +
                                                                   0x120);
                                                          uVar2 = FUN_03398a84(DAT_083be4a8);
                                                          FUN_060e956c();
                                                          FUN_078c72a8(uVar4,uVar2);
                                                          if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                                                             (lVar6 = *(long *)(*(long *)(unaff_x19
                                                                                         + 0x20) +
                                                                               0x170), lVar6 != 0))
                                                          {
                                                            in_stack_00000010 = 0;
                                                            in_stack_00000018 = 0;
                                                            in_stack_00000008 = 0;
                                                            FUN_05fd5ad4(&stack0x00000008,lVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  DAT_083f7ed0 + 0x20) + 0xc0) + 0x138));
                                                  while( true ) {
                                                    uVar3 = FUN_05fd5b44(&stack0x00000008,
                                                                         DAT_083e8910);
                                                    lVar6 = in_stack_00000018;
                                                    if ((uVar3 & 1) == 0) break;
                                                    uVar2 = FUN_03398a84(DAT_083be6d0);
                                                    FUN_060f286c();
                                                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                                                      FUN_033d1d3c();
                                                    }
                                                    FUN_07970698(lVar6,uVar2,0);
                                                  }
                                                  lVar6 = *(long *)(unaff_x19 + 0x30);
                                                  if (lVar6 != 0) {
                                                    cVar1 = *(char *)(unaff_x19 + 0x28);
                                                    if (DAT_086ef278 == (code *)0x0) {
                                                      DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_086ef278)(lVar6,cVar1 != '\0');
                                                  lVar6 = *(long *)(unaff_x19 + 0x38);
                                                  if (lVar6 != 0) {
                                                    cVar1 = *(char *)(unaff_x19 + 0x28);
                                                    if (DAT_086ef278 == (code *)0x0) {
                                                      DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                                                  }
                                                  (*DAT_086ef278)(lVar6,cVar1 == '\0');
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
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


