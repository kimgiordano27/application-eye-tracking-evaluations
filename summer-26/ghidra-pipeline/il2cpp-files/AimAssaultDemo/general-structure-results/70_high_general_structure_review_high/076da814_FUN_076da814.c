/*
FUNCTION_NAME: FUN_076da814
ENTRY_POINT: 076da814
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_076da814(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_07d95d10;
  if ((DAT_08271493 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d95d10);
    FUN_0373b518(PTR_DAT_07d96228);
    FUN_0373b518(UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_UxmlStringAttributeDescription_<>c_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_UxmlUnsignedIntAttributeDescription_<>c_TypeInfo);
    FUN_0373b518(CustomWebSocketSharp_Net_WebHeaderCollection_<>c__DisplayClass59_0_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_UxmlUnsignedLongAttributeDescription_<>c_TypeInfo);
    FUN_0373b518(UnityEngine_VFX_Utility_VFXEnabledBinder_Check_TypeInfo);
    FUN_0373b518(System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo);
    FUN_0373b518(UnityEngine_VFX_Utility_VFXHierarchyAttributeMapBinder_Bone_TypeInfo);
    FUN_0373b518(UnityEngine_VFX_Utility_VFXInputTouchBinder_<>c_TypeInfo);
    FUN_0373b518(UnityEngine_VFX_Utility_VFXRaycastBinder_Space_TypeInfo);
    FUN_0373b518(UnityEngine_VFX_VFXTimeSpaceHelper_<CollectClipEvents>d__1_TypeInfo);
    FUN_0373b518(UnityEngine_VFX_VFXTimeSpaceHelper_<GetEventNormalizedSpace>d__3_TypeInfo);
    FUN_0373b518(RootMotion_FinalIK_VRIK_References_TypeInfo);
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_CallSite<Func<CallSite,_object,_object>>_Create__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_CallSite<Func<CallSite,_object,_object,_object>>_Create__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<Finger>>_AddCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<Finger>>_RemoveCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_AddCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_RemoveCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_get_length__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_AddCallback__
                );
    FUN_0373b518(Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_Clear__);
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_RemoveCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<PlayerInput>>_AddCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<PlayerInput>>_RemoveCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputAction_CallbackContext>>_AddCallback__
                );
    FUN_0373b518(Method_UnityEngine_UIElements_BaseSlider<float>_set_clamped__);
    DAT_08271493 = 1;
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
    lVar5 = *(long *)(PTR_DAT_07d86548 + 0x78);
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
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x310);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar5);
        lVar5 = *(long *)puVar4;
      }
      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  UnityEngine_VFX_Utility_VFXInputTouchBinder_<>c_TypeInfo);
      FUN_05517bf4(lVar8,uVar9,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_CallSite<Func<CallSite,_object,_object>>_Create__
                   ,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x310) = lVar8;
      thunk_FUN_037aeb94(lVar5 + 0x310,lVar8);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_076d2dec(&local_48,uVar6,uVar7,lVar8);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      local_48 = *(undefined8 *)(lVar5 + 0x28);
      lVar5 = *(long *)(puVar1 + 0x78);
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
      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x318);
      if (lVar8 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70(lVar5);
          lVar5 = *(long *)puVar4;
        }
        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
        lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                    UnityEngine_UIElements_UxmlStringAttributeDescription_<>c_TypeInfo
                                  );
        FUN_05518214(lVar8,uVar9,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_AddCallback__
                     ,0);
        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
        *(long *)(lVar5 + 0x318) = lVar8;
        thunk_FUN_037aeb94(lVar5 + 0x318,lVar8);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_076d2dec(&local_48,uVar6,uVar7,lVar8);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        local_48 = *(undefined8 *)(lVar5 + 0x28);
        lVar5 = *(long *)(puVar1 + 0x78);
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
        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 800);
        if (lVar8 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70(lVar5);
            lVar5 = *(long *)puVar4;
          }
          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
          lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                      UnityEngine_VFX_VFXTimeSpaceHelper_<GetEventNormalizedSpace>d__3_TypeInfo
                                    );
          FUN_05517d7c(lVar8,uVar9,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_RemoveCallback__
                       ,0);
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          *(long *)(lVar5 + 800) = lVar8;
          thunk_FUN_037aeb94(lVar5 + 800,lVar8);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_076d2dec(&local_48,uVar6,uVar7,lVar8);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 != 0) {
          local_48 = *(undefined8 *)(lVar5 + 0x28);
          lVar5 = *(long *)(puVar1 + 0x78);
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
          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x328);
          if (lVar8 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03798b70(lVar5);
              lVar5 = *(long *)puVar4;
            }
            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
            lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                        UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_TypeInfo
                                      );
            FUN_05517f04(lVar8,uVar9,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_get_length__
                         ,0);
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
            *(long *)(lVar5 + 0x328) = lVar8;
            thunk_FUN_037aeb94(lVar5 + 0x328,lVar8);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_076d2dec(&local_48,uVar6,uVar7,lVar8);
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            lVar5 = *(long *)puVar2;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar5 != 0) {
            local_48 = *(undefined8 *)(lVar5 + 0x28);
            lVar5 = *(long *)(puVar1 + 0x78);
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
            lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x330);
            if (lVar8 == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_03798b70(lVar5);
                lVar5 = *(long *)puVar4;
              }
              uVar9 = **(undefined8 **)(lVar5 + 0xb8);
              lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                          UnityEngine_VFX_Utility_VFXHierarchyAttributeMapBinder_Bone_TypeInfo
                                        );
              FUN_05517fc8(lVar8,uVar9,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_AddCallback__
                           ,0);
              lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
              *(long *)(lVar5 + 0x330) = lVar8;
              thunk_FUN_037aeb94(lVar5 + 0x330,lVar8);
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_076d2dec(&local_48,uVar6,uVar7,lVar8);
            lVar5 = *(long *)puVar2;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03798b70();
              lVar5 = *(long *)puVar2;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            if (lVar5 != 0) {
              local_48 = *(undefined8 *)(lVar5 + 0x28);
              lVar5 = *(long *)(puVar1 + 0x78);
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
              lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x338);
              if (lVar8 == 0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_03798b70(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                            RootMotion_FinalIK_VRIK_References_TypeInfo);
                FUN_0551808c(lVar8,uVar9,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_Clear__
                             ,0);
                lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                *(long *)(lVar5 + 0x338) = lVar8;
                thunk_FUN_037aeb94(lVar5 + 0x338,lVar8);
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              FUN_076d2dec(&local_48,uVar6,uVar7,lVar8);
              lVar5 = *(long *)puVar2;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_03798b70();
                lVar5 = *(long *)puVar2;
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
              if (lVar5 != 0) {
                local_48 = *(undefined8 *)(lVar5 + 0x28);
                lVar5 = *(long *)(puVar1 + 0x78);
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
                lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x340);
                if (lVar8 == 0) {
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_03798b70(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                              UnityEngine_UIElements_UxmlUnsignedLongAttributeDescription_<>c_TypeInfo
                                            );
                  FUN_05517cb8(lVar8,uVar9,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_RemoveCallback__
                               ,0);
                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                  *(long *)(lVar5 + 0x340) = lVar8;
                  thunk_FUN_037aeb94(lVar5 + 0x340,lVar8);
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                FUN_076d2dec(&local_48,uVar6,uVar7,lVar8);
                lVar5 = *(long *)puVar2;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                  lVar5 = *(long *)puVar2;
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                if (lVar5 != 0) {
                  local_48 = *(undefined8 *)(lVar5 + 0x28);
                  lVar5 = *(long *)(puVar1 + 0x78);
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
                  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x348);
                  if (lVar8 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_03798b70(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                    lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                UnityEngine_VFX_Utility_VFXEnabledBinder_Check_TypeInfo
                                              );
                    FUN_05518470(lVar8,uVar9,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<PlayerInput>>_AddCallback__
                                 ,0);
                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                    *(long *)(lVar5 + 0x348) = lVar8;
                    thunk_FUN_037aeb94(lVar5 + 0x348,lVar8);
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                  }
                  FUN_076d2dec(&local_48,uVar6,uVar7,lVar8);
                  lVar5 = *(long *)puVar2;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                    lVar5 = *(long *)puVar2;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                  if (lVar5 != 0) {
                    local_48 = *(undefined8 *)(lVar5 + 0x28);
                    lVar5 = *(long *)(puVar1 + 0x78);
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
                    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x350);
                    if (lVar8 == 0) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_03798b70(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                  UnityEngine_UIElements_UxmlUnsignedIntAttributeDescription_<>c_TypeInfo
                                                );
                      FUN_05518534(lVar8,uVar9,
                                   *(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<PlayerInput>>_RemoveCallback__
                                   ,0);
                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                      *(long *)(lVar5 + 0x350) = lVar8;
                      thunk_FUN_037aeb94(lVar5 + 0x350,lVar8);
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_03798b70();
                    }
                    FUN_076d2dec(&local_48,uVar6,uVar7,lVar8);
                    lVar5 = *(long *)puVar2;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_03798b70();
                      lVar5 = *(long *)puVar2;
                    }
                    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                    if (lVar5 != 0) {
                      local_48 = *(undefined8 *)(lVar5 + 0x28);
                      lVar5 = *(long *)(puVar1 + 0x78);
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
                      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x358);
                      if (lVar8 == 0) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_03798b70(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                        lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                        
                                                  UnityEngine_VFX_Utility_VFXRaycastBinder_Space_TypeInfo
                                                  );
                        FUN_055185f8(lVar8,uVar9,
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputAction_CallbackContext>>_AddCallback__
                                     ,0);
                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                        *(long *)(lVar5 + 0x358) = lVar8;
                        thunk_FUN_037aeb94(lVar5 + 0x358,lVar8);
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_03798b70();
                      }
                      FUN_076d2dec(&local_48,uVar6,uVar7,lVar8);
                      lVar5 = *(long *)puVar2;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_03798b70();
                        lVar5 = *(long *)puVar2;
                      }
                      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                      if (lVar5 != 0) {
                        local_48 = *(undefined8 *)(lVar5 + 0x28);
                        lVar5 = *(long *)(puVar1 + 0x78);
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
                        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x360);
                        if (lVar8 == 0) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_03798b70(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                          lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                            
                                                  UnityEngine_VFX_VFXTimeSpaceHelper_<CollectClipEvents>d__1_TypeInfo
                                                  );
                          FUN_05517e40(lVar8,uVar9,
                                       *(undefined8 *)
                                        Method_System_Runtime_CompilerServices_CallSite<Func<CallSite,_object,_object,_object>>_Create__
                                       ,0);
                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                          *(long *)(lVar5 + 0x360) = lVar8;
                          thunk_FUN_037aeb94(lVar5 + 0x360,lVar8);
                        }
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                          thunk_FUN_03798b70();
                        }
                        FUN_076d2dec(&local_48,uVar6,uVar7,lVar8);
                        lVar5 = *(long *)puVar2;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_03798b70();
                          lVar5 = *(long *)puVar2;
                        }
                        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                        if (lVar5 != 0) {
                          local_48 = *(undefined8 *)(lVar5 + 0x28);
                          lVar5 = *(long *)(puVar1 + 0x78);
                          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                            thunk_FUN_03798b70();
                          }
                          uVar6 = FUN_062519f8(lVar5 + 0x20,0);
                          uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x90) + 0x20,0);
                          lVar5 = *(long *)puVar4;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_03798b70(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x368);
                          if (lVar8 == 0) {
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_03798b70(lVar5);
                              lVar5 = *(long *)puVar4;
                            }
                            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                            lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                                
                                                  System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo
                                                  );
                            FUN_05518150(lVar8,uVar9,
                                         *(undefined8 *)
                                          Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<Finger>>_AddCallback__
                                         ,0);
                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                            *(long *)(lVar5 + 0x368) = lVar8;
                            thunk_FUN_037aeb94(lVar5 + 0x368,lVar8);
                          }
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_03798b70();
                          }
                          FUN_076d2dec(&local_48,uVar6,uVar7,lVar8);
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
                            uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x78) + 0x20,0);
                            lVar5 = *(long *)puVar4;
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_03798b70(lVar5);
                              lVar5 = *(long *)puVar4;
                            }
                            lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x370);
                            if (lVar8 == 0) {
                              if (*(int *)(lVar5 + 0xe4) == 0) {
                                thunk_FUN_03798b70(lVar5);
                                lVar5 = *(long *)puVar4;
                              }
                              uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                              lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                                    
                                                  CustomWebSocketSharp_Net_WebHeaderCollection_<>c__DisplayClass59_0_TypeInfo
                                                  );
                              FUN_05516be0(lVar8,uVar9,
                                           *(undefined8 *)
                                            Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<Finger>>_RemoveCallback__
                                           ,0);
                              lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                              *(long *)(lVar5 + 0x370) = lVar8;
                              thunk_FUN_037aeb94(lVar5 + 0x370,lVar8);
                            }
                            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                              thunk_FUN_03798b70();
                            }
                            FUN_076d2dec(&local_48,uVar6,uVar7,lVar8);
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
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


