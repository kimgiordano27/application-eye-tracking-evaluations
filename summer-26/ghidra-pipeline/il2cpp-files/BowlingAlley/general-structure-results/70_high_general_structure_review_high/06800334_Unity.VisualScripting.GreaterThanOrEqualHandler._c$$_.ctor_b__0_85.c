/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_85
ENTRY_POINT: 06800334
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_14;frame_or_lifecycle_behavior
*/


undefined8 Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_85(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long unaff_x19;
  undefined8 uVar13;
  int unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  long in_stack_00000018;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x168));
  thunk_FUN_032e1da0(
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataIcon>_Start__
                    );
  thunk_FUN_032e1da0(
                    Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                    );
  thunk_FUN_032e1da0(PTR_DAT_072ab650);
  thunk_FUN_032e1da0(
                    Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>__ctor__
                    );
  thunk_FUN_032e1da0(
                    Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__
                    );
  thunk_FUN_032e1da0(PTR_DAT_072a2270);
  thunk_FUN_032e1da0(
                    Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
                    );
  thunk_FUN_032e1da0(PTR_DAT_072794b0);
  thunk_FUN_032e1da0(
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                    );
  thunk_FUN_032e1da0(
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<IMECompositionString>>_get_Item__
                    );
  thunk_FUN_032e1da0(
                    Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                    );
  thunk_FUN_032e1da0(
                    Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_DoHoverUpdate__
                    );
  thunk_FUN_032e1da0(
                    Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_DoSelectUpdate__
                    );
  *(undefined1 *)(unaff_x22 + 0xc4a) = 1;
  in_stack_00000018 = 0;
  *unaff_x21 = 0;
  thunk_FUN_0333a630();
  if (*(long *)(unaff_x19 + 0x210) == 0) goto LAB_06800bb8;
  uVar7 = FUN_03d1a610(*(long *)(unaff_x19 + 0x210),unaff_w20,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>__ctor__
                      );
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  uVar14 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar4 = FUN_06c5195c(unaff_x19 + 0x50,0);
  puVar3 = 
  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
  ;
  if (*(int *)(*(long *)
                Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
              + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)
                        Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                      );
  }
  iVar5 = FUN_06c52168(uVar14,uVar4,0);
  if (iVar5 != 0) {
    return 0;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  iVar5 = FUN_06c525ac(unaff_w20,0);
  if (iVar5 == 0) {
    if ((unaff_w20 == 0x2011) || (unaff_w20 == 0xad)) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar14 = 0x2d;
LAB_068004e8:
      iVar5 = FUN_06c525ac(uVar14,0);
      if (iVar5 != 0) goto LAB_068004f8;
    }
    else if (unaff_w20 == 0xa0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar14 = 0x20;
      goto LAB_068004e8;
    }
    if (*(long *)(unaff_x19 + 0x210) != 0) {
      FUN_03d1b120(*(long *)(unaff_x19 + 0x210),unaff_w20,*(undefined8 *)PTR_DAT_072ab650);
      return 0;
    }
    goto LAB_06800bb8;
  }
LAB_068004f8:
  if (*(long *)(unaff_x19 + 0xb8) == 0) goto LAB_06800bb8;
  uVar7 = FUN_05188410(*(long *)(unaff_x19 + 0xb8),iVar5,
                       *(undefined8 *)
                        Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
                      );
  if ((uVar7 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0xb8) != 0) {
      FUN_0518817c(*(long *)(unaff_x19 + 0xb8),iVar5,
                   *(undefined8 *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataIcon>_Start__
                  );
      uVar14 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                 );
      FUN_067f6cd4(uVar14,unaff_w20);
      *unaff_x21 = uVar14;
      thunk_FUN_0333a630();
      lVar8 = *(long *)(unaff_x19 + 0xc0);
      if (lVar8 != 0) {
        uVar14 = *unaff_x21;
        lVar10 = *(long *)(lVar8 + 0x10);
        lVar12 = *(long *)
                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
        ;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
            *puVar11 = uVar14;
            thunk_FUN_0333a630(puVar11);
          }
          else {
            FUN_041e2c78(lVar8,uVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          if (*(long *)(unaff_x19 + 200) != 0) {
            FUN_0518821c(*(long *)(unaff_x19 + 200),unaff_w20,*unaff_x21,
                         *(undefined8 *)
                          Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
                        );
            return 1;
          }
        }
      }
    }
    goto LAB_06800bb8;
  }
  in_stack_00000018 = 0;
  lVar8 = *(long *)(unaff_x19 + 0xd8);
  if (lVar8 == 0) goto LAB_06800bb8;
  if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_06800bbc;
  plVar9 = *(long **)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
  if (plVar9 == (long *)0x0) goto LAB_06800bb8;
  uVar7 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
  if ((uVar7 & 1) == 0) {
    lVar8 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072794b0,5);
    if (lVar8 == 0) goto LAB_06800bb8;
    if (*(int *)(lVar8 + 0x18) != 0) {
      *(undefined8 *)(lVar8 + 0x20) =
           *(undefined8 *)
            Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_DoSelectUpdate__
      ;
      thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x20));
      uVar14 = FUN_06becffc();
      if (1 < *(uint *)(lVar8 + 0x18)) {
        *(undefined8 *)(lVar8 + 0x28) = uVar14;
        thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x28),uVar14);
        if (2 < *(uint *)(lVar8 + 0x18)) {
          *(undefined8 *)(lVar8 + 0x30) =
               *(undefined8 *)
                Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_DoHoverUpdate__
          ;
          thunk_FUN_0333a630();
          lVar10 = *(long *)(unaff_x19 + 0xd8);
          if (lVar10 == 0) goto LAB_06800bb8;
          if (*(uint *)(unaff_x19 + 0xe0) < *(uint *)(lVar10 + 0x18)) {
            lVar10 = *(long *)(lVar10 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
            if (lVar10 == 0) goto LAB_06800bb8;
            uVar14 = FUN_06becffc(lVar10,0);
            if (3 < *(uint *)(lVar8 + 0x18)) {
              *(undefined8 *)(lVar8 + 0x38) = uVar14;
              thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x38),uVar14);
              if (4 < *(uint *)(lVar8 + 0x18)) {
                *(undefined8 *)(lVar8 + 0x40) =
                     *(undefined8 *)
                      Method_Oculus_Interaction_Interactor<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                ;
                thunk_FUN_0333a630();
                uVar14 = FUN_057ab314(lVar8,0);
                lVar8 = *(long *)(unaff_x19 + 0xd8);
                if (lVar8 == 0) goto LAB_06800bb8;
                if (*(uint *)(unaff_x19 + 0xe0) < *(uint *)(lVar8 + 0x18)) {
                  uVar13 = *(undefined8 *)
                            (lVar8 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
                  if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                  }
                  FUN_06bb3070(uVar14,uVar13,0);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    goto LAB_06800bbc;
  }
  lVar8 = *(long *)(unaff_x19 + 0xd8);
  if (lVar8 == 0) goto LAB_06800bb8;
  if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_06800bbc;
  plVar9 = *(long **)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
  if (plVar9 == (long *)0x0) goto LAB_06800bb8;
  iVar6 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
  if (iVar6 == 0) {
Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_91:
    lVar8 = *(long *)(unaff_x19 + 0xd8);
    if (lVar8 == 0) goto LAB_06800bb8;
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_06800bbc;
    lVar8 = *(long *)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
    if (lVar8 == 0) goto LAB_06800bb8;
    thunk_FUN_06bcf4ec(lVar8,*(undefined4 *)(unaff_x19 + 0x108),*(undefined4 *)(unaff_x19 + 0x10c),0
                      );
    lVar8 = *(long *)(unaff_x19 + 0xd8);
    if (lVar8 == 0) goto LAB_06800bb8;
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_06800bbc;
    uVar14 = *(undefined8 *)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06c53c54(uVar14,0);
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 0xd8);
    if (lVar8 == 0) goto LAB_06800bb8;
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_06800bbc;
    plVar9 = *(long **)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
    if (plVar9 == (long *)0x0) goto LAB_06800bb8;
    iVar6 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
    if (iVar6 == 0) goto Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_91;
  }
  lVar8 = *(long *)(unaff_x19 + 0xd8);
  if (lVar8 != 0) {
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) {
LAB_06800bbc:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    uVar4 = *(undefined4 *)(unaff_x19 + 0x110);
    uVar14 = *(undefined8 *)(unaff_x19 + 0xe8);
    uVar13 = *(undefined8 *)(unaff_x19 + 0xf0);
    uVar1 = *(undefined4 *)(unaff_x19 + 0x114);
    uVar15 = *(undefined8 *)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar7 = FUN_06c5297c(iVar5,uVar4,0,uVar13,uVar14,uVar1,uVar15,&stack0x00000018);
    if ((uVar7 & 1) == 0) {
      if (*(char *)(unaff_x19 + 0xe4) == '\0') {
        return 0;
      }
      FUN_06803f98();
      lVar8 = *(long *)(unaff_x19 + 0xd8);
      if (lVar8 == 0) goto LAB_06800bb8;
      if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 0xe0)) goto LAB_06800bbc;
      uVar4 = *(undefined4 *)(unaff_x19 + 0x110);
      uVar14 = *(undefined8 *)(unaff_x19 + 0xe8);
      uVar13 = *(undefined8 *)(unaff_x19 + 0xf0);
      uVar1 = *(undefined4 *)(unaff_x19 + 0x114);
      uVar15 = *(undefined8 *)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0xe0) * 8 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar7 = FUN_06c5297c(iVar5,uVar4,0,uVar13,uVar14,uVar1,uVar15,&stack0x00000018);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
    }
    if (in_stack_00000018 != 0) {
      FUN_06c51ecc(in_stack_00000018,*(undefined4 *)(unaff_x19 + 0xe0),0);
      lVar8 = *(long *)(unaff_x19 + 0xb0);
      if (lVar8 != 0) {
        lVar10 = *(long *)(lVar8 + 0x10);
        lVar12 = *(long *)
                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            plVar9 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
            *plVar9 = in_stack_00000018;
            thunk_FUN_0333a630(plVar9);
          }
          else {
            FUN_041e2c78(lVar8,in_stack_00000018,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          if (*(long *)(unaff_x19 + 0xb8) != 0) {
            FUN_0518821c(*(long *)(unaff_x19 + 0xb8),iVar5,in_stack_00000018,
                         *(undefined8 *)
                          Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>__ctor__
                        );
            uVar14 = thunk_FUN_032a56a0(*(undefined8 *)
                                         Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                       );
            FUN_067f6cd4(uVar14,unaff_w20);
            *unaff_x21 = uVar14;
            thunk_FUN_0333a630();
            lVar8 = *(long *)(unaff_x19 + 0xc0);
            if (lVar8 != 0) {
              uVar14 = *unaff_x21;
              lVar10 = *(long *)(lVar8 + 0x10);
              lVar12 = *(long *)
                        Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
              ;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar10 != 0) {
                uVar2 = *(uint *)(lVar8 + 0x18);
                if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                  puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
                  *puVar11 = uVar14;
                  thunk_FUN_0333a630(puVar11);
                }
                else {
                  FUN_041e2c78(lVar8,uVar14,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
                if (*(long *)(unaff_x19 + 200) != 0) {
                  FUN_0518821c(*(long *)(unaff_x19 + 200),unaff_w20,*unaff_x21,
                               *(undefined8 *)
                                Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
                              );
                  puVar3 = PTR_DAT_072a2270;
                  lVar8 = *(long *)(unaff_x19 + 0x1d8);
                  if (lVar8 != 0) {
                    lVar10 = *(long *)(lVar8 + 0x10);
                    lVar12 = *(long *)PTR_DAT_072a2270;
                    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                    if (lVar10 != 0) {
                      uVar2 = *(uint *)(lVar8 + 0x18);
                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                        *(int *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = iVar5;
                      }
                      else {
                        FUN_04260298(lVar8,iVar5,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar8 = *(long *)(unaff_x19 + 0x1e0);
                      if (lVar8 != 0) {
                        lVar10 = *(long *)(lVar8 + 0x10);
                        lVar12 = *(long *)puVar3;
                        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                        if (lVar10 != 0) {
                          uVar2 = *(uint *)(lVar8 + 0x18);
                          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                            *(int *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = iVar5;
                          }
                          else {
                            FUN_04260298(lVar8,iVar5,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                          }
                          uVar7 = FUN_068308c8(0);
                          if ((uVar7 & 1) != 0) {
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
LAB_06800bb8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


