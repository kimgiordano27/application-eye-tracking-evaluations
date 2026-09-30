/*
FUNCTION_NAME: FUN_076db774
ENTRY_POINT: 076db774
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_076db774(void)

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
  if ((DAT_08271494 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d95d10);
    FUN_0373b518(PTR_DAT_07d96228);
    FUN_0373b518(UnityEngine_UIElements_Vector2IntField_UxmlFactory_TypeInfo);
    FUN_0373b518(Unity_Properties_Internal_Vector2IntPropertyBag_YProperty_TypeInfo);
    FUN_0373b518(Unity_Properties_Internal_Vector2PropertyBag_XProperty_TypeInfo);
    FUN_0373b518(Unity_Properties_Internal_Vector2PropertyBag_YProperty_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_Vector3Field_<>c_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_Vector3Field_UxmlFactory_TypeInfo);
    FUN_0373b518(CustomWebSocketSharp_WebSocket_<>c__DisplayClass128_0_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_Vector3IntField_<>c_TypeInfo);
    FUN_0373b518(CustomWebSocketSharp_WebSocket_<>c__DisplayClass175_0_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_Vector3IntField_UxmlFactory_TypeInfo);
    FUN_0373b518(Unity_Properties_Internal_Vector3IntPropertyBag_XProperty_TypeInfo);
    FUN_0373b518(Unity_Properties_Internal_Vector3IntPropertyBag_YProperty_TypeInfo);
    FUN_0373b518(Unity_Properties_Internal_Vector3IntPropertyBag_ZProperty_TypeInfo);
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputAction_CallbackContext>>_RemoveCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputAction_CallbackContext>>_get_length__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_AddCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_LockForChanges__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_RemoveCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_UnlockForChanges__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_get_Item__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_get_length__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputDevice,_InputDeviceChange>>_AddCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputDevice,_InputDeviceChange>>_RemoveCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputDevice,_InputEventPtr>>_AddCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputDevice,_InputEventPtr>>_RemoveCallback__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr,_InputDevice>>_AddCallback__
                );
    FUN_0373b518(Method_UnityEngine_UIElements_BaseSlider<float>_set_clamped__);
    DAT_08271494 = 1;
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
    lVar5 = *(long *)(PTR_DAT_07d86548 + 0x80);
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
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x378);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar5);
        lVar5 = *(long *)puVar4;
      }
      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  Unity_Properties_Internal_Vector2PropertyBag_YProperty_TypeInfo);
      FUN_05512a8c(lVar8,uVar9,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputAction_CallbackContext>>_RemoveCallback__
                   ,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x378) = lVar8;
      thunk_FUN_037aeb94(lVar5 + 0x378,lVar8);
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
      lVar5 = *(long *)(puVar1 + 0x80);
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
      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x380);
      if (lVar8 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70(lVar5);
          lVar5 = *(long *)puVar4;
        }
        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
        lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                    Unity_Properties_Internal_Vector2PropertyBag_XProperty_TypeInfo)
        ;
        FUN_05512fe8(lVar8,uVar9,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_RemoveCallback__
                     ,0);
        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
        *(long *)(lVar5 + 0x380) = lVar8;
        thunk_FUN_037aeb94(lVar5 + 0x380,lVar8);
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
        lVar5 = *(long *)(puVar1 + 0x80);
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
        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x388);
        if (lVar8 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70(lVar5);
            lVar5 = *(long *)puVar4;
          }
          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
          lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                      UnityEngine_UIElements_Vector3Field_UxmlFactory_TypeInfo);
          FUN_05512c14(lVar8,uVar9,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_UnlockForChanges__
                       ,0);
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          *(long *)(lVar5 + 0x388) = lVar8;
          thunk_FUN_037aeb94(lVar5 + 0x388,lVar8);
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
          lVar5 = *(long *)(puVar1 + 0x80);
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
          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x390);
          if (lVar8 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03798b70(lVar5);
              lVar5 = *(long *)puVar4;
            }
            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
            lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                        UnityEngine_UIElements_Vector3Field_<>c_TypeInfo);
            FUN_05512cd8(lVar8,uVar9,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_get_Item__
                         ,0);
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
            *(long *)(lVar5 + 0x390) = lVar8;
            thunk_FUN_037aeb94(lVar5 + 0x390,lVar8);
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
            lVar5 = *(long *)(puVar1 + 0x80);
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
            lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x398);
            if (lVar8 == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_03798b70(lVar5);
                lVar5 = *(long *)puVar4;
              }
              uVar9 = **(undefined8 **)(lVar5 + 0xb8);
              lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                          UnityEngine_UIElements_Vector2IntField_UxmlFactory_TypeInfo
                                        );
              FUN_05512d9c(lVar8,uVar9,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_get_length__
                           ,0);
              lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
              *(long *)(lVar5 + 0x398) = lVar8;
              thunk_FUN_037aeb94(lVar5 + 0x398,lVar8);
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
              lVar5 = *(long *)(puVar1 + 0x80);
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
              lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3a0);
              if (lVar8 == 0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_03798b70(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                            Unity_Properties_Internal_Vector2IntPropertyBag_YProperty_TypeInfo
                                          );
                FUN_05512e60(lVar8,uVar9,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputDevice,_InputDeviceChange>>_AddCallback__
                             ,0);
                lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                *(long *)(lVar5 + 0x3a0) = lVar8;
                thunk_FUN_037aeb94(lVar5 + 0x3a0,lVar8);
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
                lVar5 = *(long *)(puVar1 + 0x80);
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
                lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3a8);
                if (lVar8 == 0) {
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_03798b70(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                              Unity_Properties_Internal_Vector3IntPropertyBag_ZProperty_TypeInfo
                                            );
                  FUN_05512b50(lVar8,uVar9,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputDevice,_InputDeviceChange>>_RemoveCallback__
                               ,0);
                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                  *(long *)(lVar5 + 0x3a8) = lVar8;
                  thunk_FUN_037aeb94(lVar5 + 0x3a8,lVar8);
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
                  lVar5 = *(long *)(puVar1 + 0x80);
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
                  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3b0);
                  if (lVar8 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_03798b70(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                    lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                Unity_Properties_Internal_Vector3IntPropertyBag_XProperty_TypeInfo
                                              );
                    FUN_05513170(lVar8,uVar9,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputDevice,_InputEventPtr>>_AddCallback__
                                 ,0);
                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                    *(long *)(lVar5 + 0x3b0) = lVar8;
                    thunk_FUN_037aeb94(lVar5 + 0x3b0,lVar8);
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
                    lVar5 = *(long *)(puVar1 + 0x80);
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
                    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3b8);
                    if (lVar8 == 0) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_03798b70(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                  UnityEngine_UIElements_Vector3IntField_UxmlFactory_TypeInfo
                                                );
                      FUN_05513234(lVar8,uVar9,
                                   *(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputDevice,_InputEventPtr>>_RemoveCallback__
                                   ,0);
                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                      *(long *)(lVar5 + 0x3b8) = lVar8;
                      thunk_FUN_037aeb94(lVar5 + 0x3b8,lVar8);
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
                      lVar5 = *(long *)(puVar1 + 0x80);
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
                      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3c0);
                      if (lVar8 == 0) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_03798b70(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                        lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                        
                                                  UnityEngine_UIElements_Vector3IntField_<>c_TypeInfo
                                                  );
                        FUN_055132f8(lVar8,uVar9,
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr,_InputDevice>>_AddCallback__
                                     ,0);
                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                        *(long *)(lVar5 + 0x3c0) = lVar8;
                        thunk_FUN_037aeb94(lVar5 + 0x3c0,lVar8);
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
                        lVar5 = *(long *)(puVar1 + 0x80);
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
                        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3c8);
                        if (lVar8 == 0) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_03798b70(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                          lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                            
                                                  Unity_Properties_Internal_Vector3IntPropertyBag_YProperty_TypeInfo
                                                  );
                          FUN_055130ac(lVar8,uVar9,
                                       *(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputAction_CallbackContext>>_get_length__
                                       ,0);
                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                          *(long *)(lVar5 + 0x3c8) = lVar8;
                          thunk_FUN_037aeb94(lVar5 + 0x3c8,lVar8);
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
                          lVar5 = *(long *)(puVar1 + 0x80);
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
                          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3d0);
                          if (lVar8 == 0) {
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_03798b70(lVar5);
                              lVar5 = *(long *)puVar4;
                            }
                            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                            lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                                
                                                  CustomWebSocketSharp_WebSocket_<>c__DisplayClass128_0_TypeInfo
                                                  );
                            FUN_05512f24(lVar8,uVar9,
                                         *(undefined8 *)
                                          Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_AddCallback__
                                         ,0);
                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                            *(long *)(lVar5 + 0x3d0) = lVar8;
                            thunk_FUN_037aeb94(lVar5 + 0x3d0,lVar8);
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
                            uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x80) + 0x20,0);
                            lVar5 = *(long *)puVar4;
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_03798b70(lVar5);
                              lVar5 = *(long *)puVar4;
                            }
                            lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3d8);
                            if (lVar8 == 0) {
                              if (*(int *)(lVar5 + 0xe4) == 0) {
                                thunk_FUN_03798b70(lVar5);
                                lVar5 = *(long *)puVar4;
                              }
                              uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                              lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                                    
                                                  CustomWebSocketSharp_WebSocket_<>c__DisplayClass175_0_TypeInfo
                                                  );
                              FUN_05516748(lVar8,uVar9,
                                           *(undefined8 *)
                                            Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputControl,_InputEventPtr>>_LockForChanges__
                                           ,0);
                              lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                              *(long *)(lVar5 + 0x3d8) = lVar8;
                              thunk_FUN_037aeb94(lVar5 + 0x3d8,lVar8);
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


