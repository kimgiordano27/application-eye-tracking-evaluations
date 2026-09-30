/*
FUNCTION_NAME: System.Net.Sockets.Socket$$Available_icall
ENTRY_POINT: 054e5f34
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void System_Net_Sockets_Socket__Available_icall(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long *unaff_x21;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0x348));
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
  *(undefined1 *)(unaff_x19 + 0x220) = 1;
  uVar6 = FUN_054ce650(10,0);
  **(undefined8 **)(*unaff_x21 + 0xb8) = uVar6;
  thunk_FUN_02bb0e9c(*(undefined8 *)(*unaff_x21 + 0xb8),uVar6);
  uVar6 = FUN_054c0854(0,0);
  puVar9 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 8);
  *puVar9 = uVar6;
  thunk_FUN_02bb0e9c(puVar9,uVar6);
  puVar5 = Method_VRBeats_ScriptableEvents_BaseGameEvent<IntEventListener,_int>__ctor__;
  puVar4 = Method_VRBeats_ScriptableEvents_BaseGameEvent<FloatEventListener,_float>__ctor__;
  puVar3 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__;
  puVar1 = PTR_DAT_06313630;
  plVar7 = *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8);
  if (plVar7 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar7 + 0x288))(plVar7,0,*(undefined8 *)(*plVar7 + 0x290));
    puVar9 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
    *puVar9 = uVar6;
    thunk_FUN_02bb0e9c(puVar9,uVar6);
    uVar6 = FUN_02b3c908(*(undefined8 *)puVar5,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
    *puVar9 = uVar6;
    thunk_FUN_02bb0e9c(puVar9,uVar6);
    uVar6 = FUN_02b3c908(*(undefined8 *)puVar4,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x20);
    *puVar9 = uVar6;
    thunk_FUN_02bb0e9c(puVar9,uVar6);
    uVar6 = FUN_02b3c910(*(undefined8 *)puVar2);
    FUN_04cac0f0(uVar6,*(undefined8 *)puVar3,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
    *puVar9 = uVar6;
    thunk_FUN_02bb0e9c(puVar9,uVar6);
    lVar8 = FUN_02b3c908(*(undefined8 *)puVar1,0xc);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) != 0) {
        *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_063141b8;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)PTR_DAT_0631cf38;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x28));
          if (2 < *(uint *)(lVar8 + 0x18)) {
            *(undefined8 *)(lVar8 + 0x30) =
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
            ;
            thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x30));
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar8 + 0x38) =
                   *(undefined8 *)
                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_flushedCount__
              ;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x38));
              if (4 < *(uint *)(lVar8 + 0x18)) {
                *(undefined8 *)(lVar8 + 0x40) =
                     *(undefined8 *)
                      Method_VRBeats_ScriptableEvents_BaseGameEvent<Vector2EventListener,_Vector2>__ctor__
                ;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x40));
                if (5 < *(uint *)(lVar8 + 0x18)) {
                  *(undefined8 *)(lVar8 + 0x48) =
                       *(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_MoveItemImmediately__
                  ;
                  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x48));
                  if (6 < *(uint *)(lVar8 + 0x18)) {
                    *(undefined8 *)(lVar8 + 0x50) =
                         *(undefined8 *)
                          Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
                    ;
                    thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x50));
                    if ((*(uint *)(lVar8 + 0x18) & 0xfffffff8) != 0) {
                      *(undefined8 *)(lVar8 + 0x58) =
                           *(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractionGroup>_get_flushedCount__
                      ;
                      thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x58));
                      if (8 < *(uint *)(lVar8 + 0x18)) {
                        *(undefined8 *)(lVar8 + 0x60) =
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_registeredSnapshot__
                        ;
                        thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x60));
                        if (9 < *(uint *)(lVar8 + 0x18)) {
                          *(undefined8 *)(lVar8 + 0x68) =
                               *(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractable>_get_registeredSnapshot__
                          ;
                          thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x68));
                          if (10 < *(uint *)(lVar8 + 0x18)) {
                            *(undefined8 *)(lVar8 + 0x70) =
                                 *(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_MoveItemImmediately__
                            ;
                            thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x70));
                            if (0xb < *(uint *)(lVar8 + 0x18)) {
                              *(undefined8 *)(lVar8 + 0x78) =
                                   *(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRHoverFilter>_get_registeredSnapshot__
                              ;
                              thunk_FUN_02bb0e9c();
                              plVar7 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
                              *plVar7 = lVar8;
                              thunk_FUN_02bb0e9c(plVar7,lVar8);
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


