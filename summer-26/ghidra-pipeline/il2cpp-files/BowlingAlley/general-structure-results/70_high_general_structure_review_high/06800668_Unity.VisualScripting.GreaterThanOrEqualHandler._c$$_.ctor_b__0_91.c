/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_91
ENTRY_POINT: 06800668
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior
*/


undefined8 Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_91(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined4 unaff_w22;
  undefined8 uVar12;
  undefined8 uVar13;
  long *unaff_x28;
  long in_stack_00000018;
  
  lVar7 = *(long *)(unaff_x19 + 0xd8);
  if (lVar7 != 0) {
    if (*(uint *)(lVar7 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_06800bbc;
    lVar7 = *(long *)(lVar7 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
    if (lVar7 != 0) {
      thunk_FUN_06bcf4ec(lVar7,*(undefined4 *)(unaff_x19 + 0x108),*(undefined4 *)(unaff_x19 + 0x10c)
                         ,0);
      lVar7 = *(long *)(unaff_x19 + 0xd8);
      if (lVar7 != 0) {
        if (*(uint *)(lVar7 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) {
LAB_06800bbc:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        uVar12 = *(undefined8 *)(lVar7 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_06c53c54(uVar12,0);
        lVar7 = *(long *)(unaff_x19 + 0xd8);
        if (lVar7 != 0) {
          if (*(uint *)(lVar7 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_06800bbc;
          uVar2 = *(undefined4 *)(unaff_x19 + 0x110);
          uVar12 = *(undefined8 *)(unaff_x19 + 0xe8);
          uVar1 = *(undefined8 *)(unaff_x19 + 0xf0);
          uVar3 = *(undefined4 *)(unaff_x19 + 0x114);
          uVar13 = *(undefined8 *)(lVar7 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar6 = FUN_06c5297c(unaff_w22,uVar2,0,uVar1,uVar12,uVar3,uVar13,&stack0x00000018);
          if ((uVar6 & 1) == 0) {
            if (*(char *)(unaff_x19 + 0xe4) == '\0') {
              return 0;
            }
            FUN_06803f98();
            lVar7 = *(long *)(unaff_x19 + 0xd8);
            if (lVar7 == 0) goto LAB_06800bb8;
            if (*(uint *)(lVar7 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_06800bbc;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x110);
            uVar12 = *(undefined8 *)(unaff_x19 + 0xe8);
            uVar1 = *(undefined8 *)(unaff_x19 + 0xf0);
            uVar3 = *(undefined4 *)(unaff_x19 + 0x114);
            uVar13 = *(undefined8 *)(lVar7 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar6 = FUN_06c5297c(unaff_w22,uVar2,0,uVar1,uVar12,uVar3,uVar13,&stack0x00000018);
            if ((uVar6 & 1) == 0) {
              return 0;
            }
          }
          if (in_stack_00000018 != 0) {
            FUN_06c51ecc(in_stack_00000018,*(undefined4 *)(unaff_x19 + 0xe0),0);
            lVar7 = *(long *)(unaff_x19 + 0xb0);
            if (lVar7 != 0) {
              lVar8 = *(long *)(lVar7 + 0x10);
              lVar11 = *(long *)
                        Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__
              ;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar4 = *(uint *)(lVar7 + 0x18);
                if (uVar4 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar4 + 1;
                  plVar9 = (long *)(lVar8 + (long)(int)uVar4 * 8 + 0x20);
                  *plVar9 = in_stack_00000018;
                  thunk_FUN_0333a630(plVar9);
                }
                else {
                  FUN_041e2c78(lVar7,in_stack_00000018,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                if (*(long *)(unaff_x19 + 0xb8) != 0) {
                  FUN_0518821c(*(long *)(unaff_x19 + 0xb8),unaff_w22,in_stack_00000018,
                               *(undefined8 *)
                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>__ctor__
                              );
                  uVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                             );
                  FUN_067f6cd4(uVar12,unaff_w20);
                  *unaff_x21 = uVar12;
                  thunk_FUN_0333a630();
                  lVar7 = *(long *)(unaff_x19 + 0xc0);
                  if (lVar7 != 0) {
                    uVar12 = *unaff_x21;
                    lVar8 = *(long *)(lVar7 + 0x10);
                    lVar11 = *(long *)
                              Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
                    ;
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar4 = *(uint *)(lVar7 + 0x18);
                      if (uVar4 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar7 + 0x18) = uVar4 + 1;
                        puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar4 * 8 + 0x20);
                        *puVar10 = uVar12;
                        thunk_FUN_0333a630(puVar10);
                      }
                      else {
                        FUN_041e2c78(lVar7,uVar12,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                      }
                      if (*(long *)(unaff_x19 + 200) != 0) {
                        FUN_0518821c(*(long *)(unaff_x19 + 200),unaff_w20,*unaff_x21,
                                     *(undefined8 *)
                                      Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
                                    );
                        puVar5 = PTR_DAT_072a2270;
                        lVar7 = *(long *)(unaff_x19 + 0x1d8);
                        if (lVar7 != 0) {
                          lVar8 = *(long *)(lVar7 + 0x10);
                          lVar11 = *(long *)PTR_DAT_072a2270;
                          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                          if (lVar8 != 0) {
                            uVar4 = *(uint *)(lVar7 + 0x18);
                            if (uVar4 < *(uint *)(lVar8 + 0x18)) {
                              *(uint *)(lVar7 + 0x18) = uVar4 + 1;
                              *(undefined4 *)(lVar8 + (long)(int)uVar4 * 4 + 0x20) = unaff_w22;
                            }
                            else {
                              FUN_04260298(lVar7,unaff_w22,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar7 = *(long *)(unaff_x19 + 0x1e0);
                            if (lVar7 != 0) {
                              lVar8 = *(long *)(lVar7 + 0x10);
                              lVar11 = *(long *)puVar5;
                              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                              if (lVar8 != 0) {
                                uVar4 = *(uint *)(lVar7 + 0x18);
                                if (uVar4 < *(uint *)(lVar8 + 0x18)) {
                                  *(uint *)(lVar7 + 0x18) = uVar4 + 1;
                                  *(undefined4 *)(lVar8 + (long)(int)uVar4 * 4 + 0x20) = unaff_w22;
                                }
                                else {
                                  FUN_04260298(lVar7,unaff_w22,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                uVar6 = FUN_068308c8(0);
                                if ((uVar6 & 1) != 0) {
                                  if (*(int *)(*(long *)
                                                Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<IMECompositionString>>_get_Item__
                                              + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                  }
                                  FUN_06801964();
                                }
                                return 1;
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
LAB_06800bb8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


