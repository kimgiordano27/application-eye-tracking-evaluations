/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_93
ENTRY_POINT: 068007d8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior
*/


undefined8 Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_93(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined4 unaff_w22;
  undefined8 in_stack_00000018;
  
  if (param_1 != 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)
             Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(param_1 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(param_1 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = in_stack_00000018;
        thunk_FUN_0333a630(puVar6);
      }
      else {
        FUN_041e2c78(param_1,in_stack_00000018,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      if (*(long *)(unaff_x19 + 0xb8) != 0) {
        FUN_0518821c(*(long *)(unaff_x19 + 0xb8),unaff_w22,in_stack_00000018,
                     *(undefined8 *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>__ctor__
                    );
        uVar3 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                  );
        FUN_067f6cd4(uVar3,unaff_w20);
        *unaff_x21 = uVar3;
        thunk_FUN_0333a630();
        lVar5 = *(long *)(unaff_x19 + 0xc0);
        if (lVar5 != 0) {
          uVar3 = *unaff_x21;
          lVar7 = *(long *)(lVar5 + 0x10);
          lVar8 = *(long *)
                   Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
          ;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
              *puVar6 = uVar3;
              thunk_FUN_0333a630(puVar6);
            }
            else {
              FUN_041e2c78(lVar5,uVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(unaff_x19 + 200) != 0) {
              FUN_0518821c(*(long *)(unaff_x19 + 200),unaff_w20,*unaff_x21,
                           *(undefined8 *)
                            Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
                          );
              puVar2 = PTR_DAT_072a2270;
              lVar5 = *(long *)(unaff_x19 + 0x1d8);
              if (lVar5 != 0) {
                lVar7 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)PTR_DAT_072a2270;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = unaff_w22;
                  }
                  else {
                    FUN_04260298(lVar5,unaff_w22,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar5 = *(long *)(unaff_x19 + 0x1e0);
                  if (lVar5 != 0) {
                    lVar7 = *(long *)(lVar5 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar7 != 0) {
                      uVar1 = *(uint *)(lVar5 + 0x18);
                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = unaff_w22;
                      }
                      else {
                        FUN_04260298(lVar5,unaff_w22,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar4 = FUN_068308c8(0);
                      if ((uVar4 & 1) != 0) {
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
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


