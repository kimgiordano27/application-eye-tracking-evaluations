/*
FUNCTION_NAME: FUN_054e5e78
ENTRY_POINT: 054e5e78
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;data_collection;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_054e5e78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar2 = Oculus_Interaction_AudioPhysics_CollisionEvents_<>c_TypeInfo;
  if ((DAT_066d1220 & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__);
    FUN_02b3c81c(PTR_DAT_06313630);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__);
    FUN_02b3c81c(Method_VRBeats_ScriptableEvents_BaseGameEvent<FloatEventListener,_float>__ctor__);
    FUN_02b3c81c(Method_VRBeats_ScriptableEvents_BaseGameEvent<IntEventListener,_int>__ctor__);
    FUN_02b3c81c(Oculus_Interaction_AudioPhysics_CollisionEvents_<>c_TypeInfo);
    FUN_02b3c81c(
                Method_VRBeats_ScriptableEvents_BaseGameEvent<Vector2EventListener,_Vector2>__ctor__
                );
    FUN_02b3c81c(PTR_DAT_063141b8);
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_MoveItemImmediately__
                );
    FUN_02b3c81c(PTR_DAT_0631cf38);
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_registeredSnapshot__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_MoveItemImmediately__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_flushedCount__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRHoverFilter>_get_registeredSnapshot__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractable>_get_registeredSnapshot__
                );
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractionGroup>_get_flushedCount__
                );
    DAT_066d1220 = 1;
  }
  uVar7 = FUN_054ce650(10,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar7;
  thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar7);
  uVar7 = FUN_054c0854(0,0);
  puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  *puVar10 = uVar7;
  thunk_FUN_02bb0e9c(puVar10,uVar7);
  puVar6 = Method_VRBeats_ScriptableEvents_BaseGameEvent<IntEventListener,_int>__ctor__;
  puVar5 = Method_VRBeats_ScriptableEvents_BaseGameEvent<FloatEventListener,_float>__ctor__;
  puVar4 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
  puVar3 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__;
  puVar1 = PTR_DAT_06313630;
  plVar8 = *(long **)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if (plVar8 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar8 + 0x288))(plVar8,0,*(undefined8 *)(*plVar8 + 0x290));
    puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *puVar10 = uVar7;
    thunk_FUN_02bb0e9c(puVar10,uVar7);
    uVar7 = FUN_02b3c908(*(undefined8 *)puVar6,0);
    puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *puVar10 = uVar7;
    thunk_FUN_02bb0e9c(puVar10,uVar7);
    uVar7 = FUN_02b3c908(*(undefined8 *)puVar5,0);
    puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *puVar10 = uVar7;
    thunk_FUN_02bb0e9c(puVar10,uVar7);
    uStack_48 = _UNK_010332f8;
    local_50 = _DAT_010332f0;
    uVar7 = FUN_02b3c910(*(undefined8 *)puVar3,&local_50);
    FUN_04cac0f0(uVar7,*(undefined8 *)puVar4,0);
    puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *puVar10 = uVar7;
    thunk_FUN_02bb0e9c(puVar10,uVar7);
    lVar9 = FUN_02b3c908(*(undefined8 *)puVar1,0xc);
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x18) != 0) {
        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_063141b8;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
        if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_0631cf38;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x28));
          if (2 < *(uint *)(lVar9 + 0x18)) {
            *(undefined8 *)(lVar9 + 0x30) =
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
            ;
            thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x30));
            if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar9 + 0x38) =
                   *(undefined8 *)
                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_flushedCount__
              ;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x38));
              if (4 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x40) =
                     *(undefined8 *)
                      Method_VRBeats_ScriptableEvents_BaseGameEvent<Vector2EventListener,_Vector2>__ctor__
                ;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x40));
                if (5 < *(uint *)(lVar9 + 0x18)) {
                  *(undefined8 *)(lVar9 + 0x48) =
                       *(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_MoveItemImmediately__
                  ;
                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x48));
                  if (6 < *(uint *)(lVar9 + 0x18)) {
                    *(undefined8 *)(lVar9 + 0x50) =
                         *(undefined8 *)
                          Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
                    ;
                    thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x50));
                    if ((*(uint *)(lVar9 + 0x18) & 0xfffffff8) != 0) {
                      *(undefined8 *)(lVar9 + 0x58) =
                           *(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractionGroup>_get_flushedCount__
                      ;
                      thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x58));
                      if (8 < *(uint *)(lVar9 + 0x18)) {
                        *(undefined8 *)(lVar9 + 0x60) =
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_registeredSnapshot__
                        ;
                        thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x60));
                        if (9 < *(uint *)(lVar9 + 0x18)) {
                          *(undefined8 *)(lVar9 + 0x68) =
                               *(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractable>_get_registeredSnapshot__
                          ;
                          thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x68));
                          if (10 < *(uint *)(lVar9 + 0x18)) {
                            *(undefined8 *)(lVar9 + 0x70) =
                                 *(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_MoveItemImmediately__
                            ;
                            thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x70));
                            if (0xb < *(uint *)(lVar9 + 0x18)) {
                              *(undefined8 *)(lVar9 + 0x78) =
                                   *(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRHoverFilter>_get_registeredSnapshot__
                              ;
                              thunk_FUN_02bb0e9c();
                              plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
                              *plVar8 = lVar9;
                              thunk_FUN_02bb0e9c(plVar8,lVar9);
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
      FUN_02b3cacc();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


