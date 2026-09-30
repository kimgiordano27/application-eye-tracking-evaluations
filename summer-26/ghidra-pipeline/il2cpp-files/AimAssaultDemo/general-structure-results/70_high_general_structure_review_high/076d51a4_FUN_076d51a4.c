/*
FUNCTION_NAME: FUN_076d51a4
ENTRY_POINT: 076d51a4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_20;ui_or_gameplay_sink_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_076d51a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_07d95d10;
  if ((DAT_0827148d & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d95d10);
    FUN_0373b518(PTR_DAT_07d96228);
    FUN_0373b518(UnityEngine_Timeline_TrackAsset_<get_outputs>d__65_TypeInfo);
    FUN_0373b518(
                UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceGraphicRaycaster_RaycastHitComparer_TypeInfo
                );
    FUN_0373b518(
                UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceGraphicRaycaster_RaycastHitData_TypeInfo
                );
    FUN_0373b518(
                UnityEngine_XR_Interaction_Toolkit_UI_TrackedDevicePhysicsRaycaster_RaycastHitComparer_TypeInfo
                );
    FUN_0373b518(UnityEngine_InputSystem_UI_TrackedDeviceRaycaster_<>c_TypeInfo);
    FUN_0373b518(UnityEngine_InputSystem_UI_TrackedDeviceRaycaster_RaycastHitData_TypeInfo);
    FUN_0373b518(UnityEngine_SpatialTracking_TrackedPoseDriver_TrackedPose_TypeInfo);
    FUN_0373b518(UnityEngine_SpatialTracking_TrackedPoseDriverDataDescription_PoseData_TypeInfo);
    FUN_0373b518(TrainingArenaController_<>c_TypeInfo);
    FUN_0373b518(TrainingArenaTarget_<>c_TypeInfo);
    FUN_0373b518(CustomWebSocketSharp_WebSocket_<get_Cookies>d__70_TypeInfo);
    FUN_0373b518(UnityEngine_Transform_Enumerator_TypeInfo);
    FUN_0373b518(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableEnum<NearFarInteractor_Region>__ctor__
                );
    FUN_0373b518(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableEnum<XRInputModalityManager_InputMode>__ctor__
                );
    FUN_0373b518(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<AffordanceStateData>_SubscribeAndUpdate__
                );
    FUN_0373b518(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<AffordanceStateData>_get_Value__
                );
    FUN_0373b518(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<AffordanceStateData>_set_Value__
                );
    FUN_0373b518(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_SubscribeAndUpdate__
                );
    FUN_0373b518(Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_set_Value__
                );
    FUN_0373b518(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_get_Value__
                );
    FUN_0373b518(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_set_Value__
                );
    FUN_0373b518(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_Subscribe__
                );
    FUN_0373b518(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
                );
    FUN_0373b518(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_get_Value__
                );
    FUN_0373b518(Method_UnityEngine_UIElements_BaseSlider<float>_set_clamped__);
    DAT_0827148d = 1;
  }
  lVar5 = *(long *)puVar2;
  local_48 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = Method_UnityEngine_UIElements_BaseSlider<float>_set_clamped__;
  puVar1 = PTR_DAT_07d86548;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    local_48 = *(undefined8 *)(lVar5 + 0x28);
    lVar5 = *(long *)(PTR_DAT_07d86548 + 0x48);
    if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar6 = FUN_062519f8(lVar5 + 0x20,0);
    uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x28) + 0x20,0);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar5);
      lVar5 = *(long *)puVar4;
    }
    puVar3 = PTR_DAT_07d96228;
    lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 200);
    if (lVar9 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar5);
        lVar5 = *(long *)puVar4;
      }
      uVar10 = **(undefined8 **)(lVar5 + 0xb8);
      lVar9 = thunk_FUN_037788cc(*(undefined8 *)UnityEngine_Transform_Enumerator_TypeInfo);
      FUN_05513db0(lVar9,uVar10,
                   *(undefined8 *)
                    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableEnum<NearFarInteractor_Region>__ctor__
                   ,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 200);
      *plVar8 = lVar9;
      thunk_FUN_037aeb94(plVar8,lVar9);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_076d2dec(&local_48,uVar6,uVar7,lVar9);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      local_48 = *(undefined8 *)(lVar5 + 0x28);
      lVar5 = *(long *)(puVar1 + 0x48);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar6 = FUN_062519f8(lVar5 + 0x20,0);
      uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x30) + 0x20,0);
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar5);
        lVar5 = *(long *)puVar4;
      }
      lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xd0);
      if (lVar9 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70(lVar5);
          lVar5 = *(long *)puVar4;
        }
        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
        lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_UI_TrackedDevicePhysicsRaycaster_RaycastHitComparer_TypeInfo
                                  );
        FUN_0551430c(lVar9,uVar10,
                     *(undefined8 *)
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<AffordanceStateData>_get_Value__
                     ,0);
        plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd0);
        *plVar8 = lVar9;
        thunk_FUN_037aeb94(plVar8,lVar9);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_076d2dec(&local_48,uVar6,uVar7,lVar9);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        local_48 = *(undefined8 *)(lVar5 + 0x28);
        lVar5 = *(long *)(puVar1 + 0x48);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar6 = FUN_062519f8(lVar5 + 0x20,0);
        uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x88) + 0x20,0);
        lVar5 = *(long *)puVar4;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70(lVar5);
          lVar5 = *(long *)puVar4;
        }
        lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xd8);
        if (lVar9 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70(lVar5);
            lVar5 = *(long *)puVar4;
          }
          uVar10 = **(undefined8 **)(lVar5 + 0xb8);
          lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                      UnityEngine_Timeline_TrackAsset_<get_outputs>d__65_TypeInfo);
          FUN_05513f38(lVar9,uVar10,
                       *(undefined8 *)
                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<AffordanceStateData>_set_Value__
                       ,0);
          plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd8);
          *plVar8 = lVar9;
          thunk_FUN_037aeb94(plVar8,lVar9);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_076d2dec(&local_48,uVar6,uVar7,lVar9);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 != 0) {
          local_48 = *(undefined8 *)(lVar5 + 0x28);
          lVar5 = *(long *)(puVar1 + 0x48);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar6 = FUN_062519f8(lVar5 + 0x20,0);
          uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x38) + 0x20,0);
          lVar5 = *(long *)puVar4;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70(lVar5);
            lVar5 = *(long *)puVar4;
          }
          lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe0);
          if (lVar9 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03798b70(lVar5);
              lVar5 = *(long *)puVar4;
            }
            uVar10 = **(undefined8 **)(lVar5 + 0xb8);
            lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                        UnityEngine_InputSystem_UI_TrackedDeviceRaycaster_RaycastHitData_TypeInfo
                                      );
            FUN_055140c0(lVar9,uVar10,
                         *(undefined8 *)
                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_SubscribeAndUpdate__
                         ,0);
            plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe0);
            *plVar8 = lVar9;
            thunk_FUN_037aeb94(plVar8,lVar9);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_076d2dec(&local_48,uVar6,uVar7,lVar9);
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            lVar5 = *(long *)puVar2;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar5 != 0) {
            local_48 = *(undefined8 *)(lVar5 + 0x28);
            lVar5 = *(long *)(puVar1 + 0x48);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar6 = FUN_062519f8(lVar5 + 0x20,0);
            uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x68) + 0x20,0);
            lVar5 = *(long *)puVar4;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03798b70(lVar5);
              lVar5 = *(long *)puVar4;
            }
            lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe8);
            if (lVar9 == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_03798b70(lVar5);
                lVar5 = *(long *)puVar4;
              }
              uVar10 = **(undefined8 **)(lVar5 + 0xb8);
              lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                          UnityEngine_InputSystem_UI_TrackedDeviceRaycaster_<>c_TypeInfo
                                        );
              FUN_05514184(lVar9,uVar10,
                           *(undefined8 *)
                            Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_set_Value__
                           ,0);
              plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe8);
              *plVar8 = lVar9;
              thunk_FUN_037aeb94(plVar8,lVar9);
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_076d2dec(&local_48,uVar6,uVar7,lVar9);
            lVar5 = *(long *)puVar2;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03798b70();
              lVar5 = *(long *)puVar2;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            if (lVar5 != 0) {
              local_48 = *(undefined8 *)(lVar5 + 0x28);
              lVar5 = *(long *)(puVar1 + 0x48);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              uVar6 = FUN_062519f8(lVar5 + 0x20,0);
              uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x18) + 0x20,0);
              lVar5 = *(long *)puVar4;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_03798b70(lVar5);
                lVar5 = *(long *)puVar4;
              }
              lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xf0);
              if (lVar9 == 0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_03798b70(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                            UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceGraphicRaycaster_RaycastHitComparer_TypeInfo
                                          );
                FUN_05513e74(lVar9,uVar10,
                             *(undefined8 *)
                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_get_Value__
                             ,0);
                plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf0);
                *plVar8 = lVar9;
                thunk_FUN_037aeb94(plVar8,lVar9);
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              FUN_076d2dec(&local_48,uVar6,uVar7,lVar9);
              lVar5 = *(long *)puVar2;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_03798b70();
                lVar5 = *(long *)puVar2;
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
              if (lVar5 != 0) {
                local_48 = *(undefined8 *)(lVar5 + 0x28);
                lVar5 = *(long *)(puVar1 + 0x48);
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                uVar6 = FUN_062519f8(lVar5 + 0x20,0);
                uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x40) + 0x20,0);
                lVar5 = *(long *)puVar4;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_03798b70(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xf8);
                if (lVar9 == 0) {
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_03798b70(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                  lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                              UnityEngine_SpatialTracking_TrackedPoseDriverDataDescription_PoseData_TypeInfo
                                            );
                  FUN_055146f0(lVar9,uVar10,
                               *(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<PokeStateData>_set_Value__
                               ,0);
                  plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf8);
                  *plVar8 = lVar9;
                  thunk_FUN_037aeb94(plVar8,lVar9);
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                FUN_076d2dec(&local_48,uVar6,uVar7,lVar9);
                lVar5 = *(long *)puVar2;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                  lVar5 = *(long *)puVar2;
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                if (lVar5 != 0) {
                  local_48 = *(undefined8 *)(lVar5 + 0x28);
                  lVar5 = *(long *)(puVar1 + 0x48);
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                  }
                  uVar6 = FUN_062519f8(lVar5 + 0x20,0);
                  uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x50) + 0x20,0);
                  lVar5 = *(long *)puVar4;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_03798b70(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x100);
                  if (lVar9 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_03798b70(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                    lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                                UnityEngine_SpatialTracking_TrackedPoseDriver_TrackedPose_TypeInfo
                                              );
                    FUN_055147b4(lVar9,uVar10,
                                 *(undefined8 *)
                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_Subscribe__
                                 ,0);
                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                    *(long *)(lVar5 + 0x100) = lVar9;
                    thunk_FUN_037aeb94(lVar5 + 0x100,lVar9);
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                  }
                  FUN_076d2dec(&local_48,uVar6,uVar7,lVar9);
                  lVar5 = *(long *)puVar2;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                    lVar5 = *(long *)puVar2;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                  if (lVar5 != 0) {
                    local_48 = *(undefined8 *)(lVar5 + 0x28);
                    lVar5 = *(long *)(puVar1 + 0x48);
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_03798b70();
                    }
                    uVar6 = FUN_062519f8(lVar5 + 0x20,0);
                    uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x70) + 0x20,0);
                    lVar5 = *(long *)puVar4;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_03798b70(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x108);
                    if (lVar9 == 0) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_03798b70(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                      lVar9 = thunk_FUN_037788cc(*(undefined8 *)TrainingArenaTarget_<>c_TypeInfo);
                      FUN_05514878(lVar9,uVar10,
                                   *(undefined8 *)
                                    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
                                   ,0);
                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                      *(long *)(lVar5 + 0x108) = lVar9;
                      thunk_FUN_037aeb94(lVar5 + 0x108,lVar9);
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_03798b70();
                    }
                    FUN_076d2dec(&local_48,uVar6,uVar7,lVar9);
                    lVar5 = *(long *)puVar2;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_03798b70();
                      lVar5 = *(long *)puVar2;
                    }
                    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                    if (lVar5 != 0) {
                      local_48 = *(undefined8 *)(lVar5 + 0x28);
                      lVar5 = *(long *)(puVar1 + 0x48);
                      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                        thunk_FUN_03798b70();
                      }
                      uVar6 = FUN_062519f8(lVar5 + 0x20,0);
                      uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x78) + 0x20,0);
                      lVar5 = *(long *)puVar4;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_03798b70(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x110);
                      if (lVar9 == 0) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_03798b70(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                        lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                                    TrainingArenaController_<>c_TypeInfo);
                        FUN_055143d0(lVar9,uVar10,
                                     *(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_get_Value__
                                     ,0);
                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                        *(long *)(lVar5 + 0x110) = lVar9;
                        thunk_FUN_037aeb94(lVar5 + 0x110,lVar9);
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_03798b70();
                      }
                      FUN_076d2dec(&local_48,uVar6,uVar7,lVar9);
                      lVar5 = *(long *)puVar2;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_03798b70();
                        lVar5 = *(long *)puVar2;
                      }
                      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                      if (lVar5 != 0) {
                        local_48 = *(undefined8 *)(lVar5 + 0x28);
                        lVar5 = *(long *)(puVar1 + 0x48);
                        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_03798b70();
                        }
                        uVar6 = FUN_062519f8(lVar5 + 0x20,0);
                        uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x80) + 0x20,0);
                        lVar5 = *(long *)puVar4;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_03798b70(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x118);
                        if (lVar9 == 0) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_03798b70(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                          lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                            
                                                  UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceGraphicRaycaster_RaycastHitData_TypeInfo
                                                  );
                          FUN_05513ffc(lVar9,uVar10,
                                       *(undefined8 *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableEnum<XRInputModalityManager_InputMode>__ctor__
                                       ,0);
                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                          *(long *)(lVar5 + 0x118) = lVar9;
                          thunk_FUN_037aeb94(lVar5 + 0x118,lVar9);
                        }
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                          thunk_FUN_03798b70();
                        }
                        FUN_076d2dec(&local_48,uVar6,uVar7,lVar9);
                        lVar5 = *(long *)puVar2;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_03798b70();
                          lVar5 = *(long *)puVar2;
                        }
                        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                        if (lVar5 != 0) {
                          local_48 = *(undefined8 *)(lVar5 + 0x28);
                          lVar5 = *(long *)(puVar1 + 0x90);
                          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                            thunk_FUN_03798b70();
                          }
                          uVar6 = FUN_062519f8(lVar5 + 0x20,0);
                          uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x48) + 0x20,0);
                          lVar5 = *(long *)puVar4;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_03798b70(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x120);
                          if (lVar9 == 0) {
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_03798b70(lVar5);
                              lVar5 = *(long *)puVar4;
                            }
                            uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                            lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                                
                                                  CustomWebSocketSharp_WebSocket_<get_Cookies>d__70_TypeInfo
                                                  );
                            FUN_05516994(lVar9,uVar10,
                                         *(undefined8 *)
                                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<AffordanceStateData>_SubscribeAndUpdate__
                                         ,0);
                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                            *(long *)(lVar5 + 0x120) = lVar9;
                            thunk_FUN_037aeb94(lVar5 + 0x120,lVar9);
                          }
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_03798b70();
                          }
                          FUN_076d2dec(&local_48,uVar6,uVar7,lVar9);
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
  FUN_0373b7b4();
}


