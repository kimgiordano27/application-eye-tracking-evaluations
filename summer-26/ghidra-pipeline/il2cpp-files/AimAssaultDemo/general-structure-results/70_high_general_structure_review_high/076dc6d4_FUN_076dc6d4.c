/*
FUNCTION_NAME: FUN_076dc6d4
ENTRY_POINT: 076dc6d4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_076dc6d4(void)

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
  if ((DAT_08271495 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d95d10);
    FUN_0373b518(PTR_DAT_07d96228);
    FUN_0373b518(UnityEngine_VFX_VisualEffectControlClip_ClipEvent_TypeInfo);
    FUN_0373b518(UnityEngine_VFX_VisualEffectControlTrack_<>c_TypeInfo);
    FUN_0373b518(
                StrikerLink_ThirdParty_WebSocketSharp_Net_WebHeaderCollection_<>c__DisplayClass46_0_TypeInfo
                );
    FUN_0373b518(UnityEngine_VFX_VisualEffectControlTrackController_<>c_TypeInfo);
    FUN_0373b518(
                UnityEngine_VFX_VisualEffectControlTrackController_<ComputeRuntimeEvent>d__21_TypeInfo
                );
    FUN_0373b518(UnityEngine_VFX_VisualEffectControlTrackController_Event_TypeInfo);
    FUN_0373b518(
                UnityEngine_VFX_VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer_TypeInfo
                );
    FUN_0373b518(UnityEngine_UIElements_VisualElement_<>c__DisplayClass516_0_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_VisualElement_CustomStyleAccess_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_VisualElement_Hierarchy_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_VisualElement_RenderTargetMode_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_VisualElement_SimpleScheduledItem_TypeInfo);
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr,_InputDevice>>_RemoveCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr,_InputDevice>>_get_length__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_AddCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_Clear__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_RemoveCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_get_length__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<string,_InputControlLayoutChange>>_AddCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<string,_InputControlLayoutChange>>_RemoveCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputUser,_InputUserChange,_InputDevice>>_AddCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputUser,_InputUserChange,_InputDevice>>_LockForChanges__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputUser,_InputUserChange,_InputDevice>>_RemoveCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputUser,_InputUserChange,_InputDevice>>_UnlockForChanges__
                );
    FUN_0373b518(Method_UnityEngine_UIElements_BaseSlider<float>_set_clamped__);
    DAT_08271495 = 1;
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
    lVar5 = *(long *)(PTR_DAT_07d86548 + 0x28);
    if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar6 = FUN_062519f8(lVar5 + 0x20,0);
    uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x88) + 0x20,0);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar5);
      lVar5 = *(long *)puVar4;
    }
    puVar3 = PTR_DAT_07d96228;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3e0);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar5);
        lVar5 = *(long *)puVar4;
      }
      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  UnityEngine_UIElements_VisualElement_RenderTargetMode_TypeInfo);
      FUN_05510bdc(lVar8,uVar9,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr,_InputDevice>>_RemoveCallback__
                   ,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x3e0) = lVar8;
      thunk_FUN_037aeb94(lVar5 + 0x3e0,lVar8);
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
      lVar5 = *(long *)(puVar1 + 0x28);
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
      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 1000);
      if (lVar8 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70(lVar5);
          lVar5 = *(long *)puVar4;
        }
        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
        lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                    UnityEngine_VFX_VisualEffectControlTrackController_Event_TypeInfo
                                  );
        FUN_05511074(lVar8,uVar9,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_Clear__
                     ,0);
        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
        *(long *)(lVar5 + 1000) = lVar8;
        thunk_FUN_037aeb94(lVar5 + 1000,lVar8);
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
        lVar5 = *(long *)(puVar1 + 0x28);
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
        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3f0);
        if (lVar8 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70(lVar5);
            lVar5 = *(long *)puVar4;
          }
          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
          lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                      UnityEngine_UIElements_VisualElement_<>c__DisplayClass516_0_TypeInfo
                                    );
          FUN_05510d64(lVar8,uVar9,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_RemoveCallback__
                       ,0);
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          *(long *)(lVar5 + 0x3f0) = lVar8;
          thunk_FUN_037aeb94(lVar5 + 0x3f0,lVar8);
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
          lVar5 = *(long *)(puVar1 + 0x28);
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
          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3f8);
          if (lVar8 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03798b70(lVar5);
              lVar5 = *(long *)puVar4;
            }
            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
            lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                        UnityEngine_UIElements_VisualElement_Hierarchy_TypeInfo);
            FUN_05510e28(lVar8,uVar9,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_get_length__
                         ,0);
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
            *(long *)(lVar5 + 0x3f8) = lVar8;
            thunk_FUN_037aeb94(lVar5 + 0x3f8,lVar8);
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
            lVar5 = *(long *)(puVar1 + 0x28);
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
            lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x400);
            if (lVar8 == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_03798b70(lVar5);
                lVar5 = *(long *)puVar4;
              }
              uVar9 = **(undefined8 **)(lVar5 + 0xb8);
              lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                          UnityEngine_UIElements_VisualElement_CustomStyleAccess_TypeInfo
                                        );
              FUN_05510eec(lVar8,uVar9,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<string,_InputControlLayoutChange>>_AddCallback__
                           ,0);
              lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
              *(long *)(lVar5 + 0x400) = lVar8;
              thunk_FUN_037aeb94(lVar5 + 0x400,lVar8);
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
              lVar5 = *(long *)(puVar1 + 0x28);
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
              lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x408);
              if (lVar8 == 0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_03798b70(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                            UnityEngine_VFX_VisualEffectControlTrackController_<ComputeRuntimeEvent>d__21_TypeInfo
                                          );
                FUN_05510b18(lVar8,uVar9,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<string,_InputControlLayoutChange>>_RemoveCallback__
                             ,0);
                lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                *(long *)(lVar5 + 0x408) = lVar8;
                thunk_FUN_037aeb94(lVar5 + 0x408,lVar8);
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
                lVar5 = *(long *)(puVar1 + 0x28);
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
                lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x410);
                if (lVar8 == 0) {
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_03798b70(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                              UnityEngine_VFX_VisualEffectControlTrackController_<>c_TypeInfo
                                            );
                  FUN_055111fc(lVar8,uVar9,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputUser,_InputUserChange,_InputDevice>>_AddCallback__
                               ,0);
                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                  *(long *)(lVar5 + 0x410) = lVar8;
                  thunk_FUN_037aeb94(lVar5 + 0x410,lVar8);
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
                  lVar5 = *(long *)(puVar1 + 0x28);
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
                  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x418);
                  if (lVar8 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_03798b70(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                    lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                UnityEngine_UIElements_VisualElement_SimpleScheduledItem_TypeInfo
                                              );
                    FUN_055112c0(lVar8,uVar9,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputUser,_InputUserChange,_InputDevice>>_LockForChanges__
                                 ,0);
                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                    *(long *)(lVar5 + 0x418) = lVar8;
                    thunk_FUN_037aeb94(lVar5 + 0x418,lVar8);
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
                    lVar5 = *(long *)(puVar1 + 0x28);
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
                    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x420);
                    if (lVar8 == 0) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_03798b70(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                  UnityEngine_VFX_VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer_TypeInfo
                                                );
                      FUN_05511384(lVar8,uVar9,
                                   *(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputUser,_InputUserChange,_InputDevice>>_RemoveCallback__
                                   ,0);
                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                      *(long *)(lVar5 + 0x420) = lVar8;
                      thunk_FUN_037aeb94(lVar5 + 0x420,lVar8);
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
                      lVar5 = *(long *)(puVar1 + 0x28);
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
                      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x428);
                      if (lVar8 == 0) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_03798b70(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                        lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                        
                                                  UnityEngine_VFX_VisualEffectControlTrack_<>c_TypeInfo
                                                  );
                        FUN_05511138(lVar8,uVar9,
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputUser,_InputUserChange,_InputDevice>>_UnlockForChanges__
                                     ,0);
                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                        *(long *)(lVar5 + 0x428) = lVar8;
                        thunk_FUN_037aeb94(lVar5 + 0x428,lVar8);
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
                        lVar5 = *(long *)(puVar1 + 0x28);
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
                        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x430);
                        if (lVar8 == 0) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_03798b70(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                          lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                            
                                                  UnityEngine_VFX_VisualEffectControlClip_ClipEvent_TypeInfo
                                                  );
                          FUN_05510ca0(lVar8,uVar9,
                                       *(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr,_InputDevice>>_get_length__
                                       ,0);
                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                          *(long *)(lVar5 + 0x430) = lVar8;
                          thunk_FUN_037aeb94(lVar5 + 0x430,lVar8);
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
                          uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x28) + 0x20,0);
                          lVar5 = *(long *)puVar4;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_03798b70(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x438);
                          if (lVar8 == 0) {
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_03798b70(lVar5);
                              lVar5 = *(long *)puVar4;
                            }
                            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                            lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                                
                                                  StrikerLink_ThirdParty_WebSocketSharp_Net_WebHeaderCollection_<>c__DisplayClass46_0_TypeInfo
                                                  );
                            FUN_055164fc(lVar8,uVar9,
                                         *(undefined8 *)
                                          Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_AddCallback__
                                         ,0);
                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                            *(long *)(lVar5 + 0x438) = lVar8;
                            thunk_FUN_037aeb94(lVar5 + 0x438,lVar8);
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
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


