/*
FUNCTION_NAME: DG.Tweening.TweenExtensions$$WaitForPosition
ENTRY_POINT: 00f6e860
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void DG_Tweening_TweenExtensions__WaitForPosition(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long in_stack_00000000;
  long in_stack_00000008;
  
  lVar9 = *(long *)(unaff_x21 + 0x1f8);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar2 = FUN_02681b9c(lVar9,0,0);
  if ((uVar2 & 1) != 0) {
    FUN_0268fd4c();
    uVar2 = FUN_010bd378();
    if ((uVar2 & 1) != 0) {
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
      if (lVar3 != 0) {
        FUN_0268b098(lVar3,0);
        *(long *)(unaff_x20 + 0x60) = lVar3;
        lVar3 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                          (lVar3,0);
        uVar4 = FUN_0268fd10();
        if (lVar3 != 0) {
          FUN_0269fea8(lVar3,uVar4,0);
          if (*(long *)(unaff_x20 + 0x60) != 0) {
            lVar3 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                              (*(long *)(unaff_x20 + 0x60),0);
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            puVar1 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
            ;
            if (lVar3 != 0) {
              puVar6 = *(undefined4 **)
                        (*(long *)
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        + 0xb8);
              FUN_0269f750(*puVar6,puVar6[1],puVar6[2],lVar3,0);
              if (*(long *)(unaff_x20 + 0x60) != 0) {
                lVar3 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                  (*(long *)(unaff_x20 + 0x60),0);
                if (DAT_03774f00 == '\0') {
                  thunk_FUN_00d48444(
                                    Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                                    );
                  DAT_03774f00 = '\x01';
                }
                if (lVar3 != 0) {
                  puVar6 = *(undefined4 **)
                            (*(long *)
                              Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                            + 0xb8);
                  FUN_0269f994(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar3,0);
                  if (*(long *)(unaff_x20 + 0x60) != 0) {
                    lVar3 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                      (*(long *)(unaff_x20 + 0x60),0);
                    if (DAT_03774e1c == '\0') {
                      thunk_FUN_00d48444(
                                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                        );
                      DAT_03774e1c = '\x01';
                    }
                    if (lVar3 != 0) {
                      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
                      FUN_0269fd98(*(float *)(lVar7 + 0xc) * DAT_028aa8e8,
                                   *(float *)(lVar7 + 0x10) * DAT_028aa8e8,
                                   *(float *)(lVar7 + 0x14) * DAT_028aa8e8,lVar3,0);
                      if (*(long *)(unaff_x20 + 0x60) != 0) {
                        lVar3 = FUN_010e5800(*(long *)(unaff_x20 + 0x60),
                                             *(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
                        FUN_010c2c5c();
                        if ((in_stack_00000008 != 0) &&
                           (uVar4 = FUN_02665318(in_stack_00000008,0), lVar3 != 0)) {
                          FUN_02666150(lVar3,uVar4,0);
                          if ((*(long *)(unaff_x20 + 0x60) != 0) &&
                             (((lVar3 = FUN_010e5800(*(long *)(unaff_x20 + 0x60),
                                                     *(undefined8 *)UnityEngine_Pose___TypeInfo),
                               in_stack_00000000 != 0 &&
                               (lVar7 = FUN_026688d4(in_stack_00000000,0), lVar7 != 0)) &&
                              (plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033f55b0,
                                                             *(undefined4 *)(lVar7 + 0x18)),
                              plVar5 != (long *)0x0)))) {
                            if (0 < (int)plVar5[3]) {
                              uVar2 = 0;
                              uVar8 = plVar5[3] & 0xffffffff;
                              do {
                                if (lVar9 != 0) {
                                  lVar7 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar5 + 0x40));
                                  if (lVar7 == 0) {
                                    uVar4 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                    FUN_00da5038(uVar4,0);
                                  }
                                  uVar8 = (ulong)*(uint *)(plVar5 + 3);
                                }
                                if (uVar8 <= uVar2) {
                    /* WARNING: Subroutine does not return */
                                  FUN_00da5194();
                                }
                                plVar5[uVar2 + 4] = lVar9;
                                uVar2 = uVar2 + 1;
                              } while ((long)uVar2 < (long)(int)uVar8);
                            }
                            if (lVar3 != 0) {
                              FUN_02668910(lVar3,plVar5,0);
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
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  return;
}


