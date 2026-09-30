/*
FUNCTION_NAME: FUN_076d8b9c
ENTRY_POINT: 076d8b9c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_076d8b9c(void)

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
  if ((DAT_08271491 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d95d10);
    FUN_0373b518(PTR_DAT_07d96228);
    FUN_0373b518(System_Net_WebConnection_<>c_TypeInfo);
    FUN_0373b518(Unity_VisualScripting_Unit_<>c_TypeInfo);
    FUN_0373b518(Unity_VisualScripting_Unit_DebugData_TypeInfo);
    FUN_0373b518(Unity_VisualScripting_UnitCategory_<AndAncestors>d__18_TypeInfo);
    FUN_0373b518(Unity_VisualScripting_UnitCategory_<get_ancestors>d__17_TypeInfo);
    FUN_0373b518(Unity_VisualScripting_UnitPreservation_<>c_TypeInfo);
    FUN_0373b518(StrikerLink_Unity_Authoring_UnityHapticSample_SerializableHapticSample_TypeInfo);
    FUN_0373b518(StrikerLink_Unity_Authoring_UnityHapticSample_UnityPrimitiveData_TypeInfo);
    FUN_0373b518(UnityEngine_UnitySynchronizationContext_WorkRequest_TypeInfo);
    FUN_0373b518(Mono_Unity_UnityTls_unitytls_error_code_TypeInfo);
    FUN_0373b518(Mono_Unity_UnityTls_unitytls_tlsctx_certificate_callback_TypeInfo);
    FUN_0373b518(Mono_Unity_UnityTls_unitytls_tlsctx_read_callback_TypeInfo);
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>_ConvertTransformSpace__);
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>_GetInterpolatedValue__);
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>_ResetCurrentState__);
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>_ResetTo__);
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>_Update__);
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>_Update__);
    FUN_0373b518(Method_System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>__ctor__);
    FUN_0373b518(Method_System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>_TryGetValue__);
    FUN_0373b518(Method_System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>_set_Item__);
    FUN_0373b518(Method_System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>__ctor__);
    FUN_0373b518(
                Method_System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>_TryGetValue__
                );
    FUN_0373b518(Method_System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>_set_Item__
                );
    FUN_0373b518(Method_UnityEngine_UIElements_BaseSlider<float>_set_clamped__);
    DAT_08271491 = 1;
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
    lVar5 = *(long *)(PTR_DAT_07d86548 + 0x50);
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
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x250);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar5);
        lVar5 = *(long *)puVar4;
      }
      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)Unity_VisualScripting_Unit_DebugData_TypeInfo);
      FUN_0551af70(lVar8,uVar9,
                   *(undefined8 *)
                    Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>_ConvertTransformSpace__
                   ,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x250) = lVar8;
      thunk_FUN_037aeb94(lVar5 + 0x250,lVar8);
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
      lVar5 = *(long *)(puVar1 + 0x50);
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
      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 600);
      if (lVar8 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70(lVar5);
          lVar5 = *(long *)puVar4;
        }
        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
        lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                    Mono_Unity_UnityTls_unitytls_tlsctx_certificate_callback_TypeInfo
                                  );
        FUN_0551b590(lVar8,uVar9,
                     *(undefined8 *)
                      Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>_ResetTo__,0);
        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
        *(long *)(lVar5 + 600) = lVar8;
        thunk_FUN_037aeb94(lVar5 + 600,lVar8);
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
        lVar5 = *(long *)(puVar1 + 0x50);
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
        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x260);
        if (lVar8 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70(lVar5);
            lVar5 = *(long *)puVar4;
          }
          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
          lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                      Unity_VisualScripting_UnitCategory_<get_ancestors>d__17_TypeInfo
                                    );
          FUN_0551b0f8(lVar8,uVar9,
                       *(undefined8 *)
                        Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>_Update__,0);
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          *(long *)(lVar5 + 0x260) = lVar8;
          thunk_FUN_037aeb94(lVar5 + 0x260,lVar8);
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
          lVar5 = *(long *)(puVar1 + 0x50);
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
          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x268);
          if (lVar8 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03798b70(lVar5);
              lVar5 = *(long *)puVar4;
            }
            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
            lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                        Mono_Unity_UnityTls_unitytls_error_code_TypeInfo);
            FUN_0551b280(lVar8,uVar9,
                         *(undefined8 *)
                          Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>_Update__,0);
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
            *(long *)(lVar5 + 0x268) = lVar8;
            thunk_FUN_037aeb94(lVar5 + 0x268,lVar8);
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
            lVar5 = *(long *)(puVar1 + 0x50);
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
            lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x270);
            if (lVar8 == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_03798b70(lVar5);
                lVar5 = *(long *)puVar4;
              }
              uVar9 = **(undefined8 **)(lVar5 + 0xb8);
              lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                          Unity_VisualScripting_UnitCategory_<AndAncestors>d__18_TypeInfo
                                        );
              FUN_0551b344(lVar8,uVar9,
                           *(undefined8 *)
                            Method_System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>__ctor__
                           ,0);
              lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
              *(long *)(lVar5 + 0x270) = lVar8;
              thunk_FUN_037aeb94(lVar5 + 0x270,lVar8);
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
              lVar5 = *(long *)(puVar1 + 0x50);
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
              lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x278);
              if (lVar8 == 0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_03798b70(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                lVar8 = thunk_FUN_037788cc(*(undefined8 *)Unity_VisualScripting_Unit_<>c_TypeInfo);
                FUN_0551b408(lVar8,uVar9,
                             *(undefined8 *)
                              Method_System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>_TryGetValue__
                             ,0);
                lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                *(long *)(lVar5 + 0x278) = lVar8;
                thunk_FUN_037aeb94(lVar5 + 0x278,lVar8);
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
                lVar5 = *(long *)(puVar1 + 0x50);
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
                lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x280);
                if (lVar8 == 0) {
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_03798b70(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                              Unity_VisualScripting_UnitPreservation_<>c_TypeInfo);
                  FUN_0551b034(lVar8,uVar9,
                               *(undefined8 *)
                                Method_System_Dynamic_Utils_CacheDict<MethodBase,_ParameterInfo[]>_set_Item__
                               ,0);
                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                  *(long *)(lVar5 + 0x280) = lVar8;
                  thunk_FUN_037aeb94(lVar5 + 0x280,lVar8);
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
                  lVar5 = *(long *)(puVar1 + 0x50);
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
                  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x288);
                  if (lVar8 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_03798b70(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                    lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                UnityEngine_UnitySynchronizationContext_WorkRequest_TypeInfo
                                              );
                    FUN_0551b718(lVar8,uVar9,
                                 *(undefined8 *)
                                  Method_System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>__ctor__
                                 ,0);
                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                    *(long *)(lVar5 + 0x288) = lVar8;
                    thunk_FUN_037aeb94(lVar5 + 0x288,lVar8);
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
                    lVar5 = *(long *)(puVar1 + 0x50);
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
                    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x290);
                    if (lVar8 == 0) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_03798b70(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                  Mono_Unity_UnityTls_unitytls_tlsctx_read_callback_TypeInfo
                                                );
                      FUN_0551b7dc(lVar8,uVar9,
                                   *(undefined8 *)
                                    Method_System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>_TryGetValue__
                                   ,0);
                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                      *(long *)(lVar5 + 0x290) = lVar8;
                      thunk_FUN_037aeb94(lVar5 + 0x290,lVar8);
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
                      lVar5 = *(long *)(puVar1 + 0x50);
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
                      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x298);
                      if (lVar8 == 0) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_03798b70(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                        lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                        
                                                  StrikerLink_Unity_Authoring_UnityHapticSample_SerializableHapticSample_TypeInfo
                                                  );
                        FUN_0551b654(lVar8,uVar9,
                                     *(undefined8 *)
                                      Method_System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>_set_Item__
                                     ,0);
                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                        *(long *)(lVar5 + 0x298) = lVar8;
                        thunk_FUN_037aeb94(lVar5 + 0x298,lVar8);
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
                        lVar5 = *(long *)(puVar1 + 0x50);
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
                        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2a0);
                        if (lVar8 == 0) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_03798b70(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                          lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                            
                                                  StrikerLink_Unity_Authoring_UnityHapticSample_UnityPrimitiveData_TypeInfo
                                                  );
                          FUN_0551b1bc(lVar8,uVar9,
                                       *(undefined8 *)
                                        Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>_GetInterpolatedValue__
                                       ,0);
                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                          *(long *)(lVar5 + 0x2a0) = lVar8;
                          thunk_FUN_037aeb94(lVar5 + 0x2a0,lVar8);
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
                          uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x50) + 0x20,0);
                          lVar5 = *(long *)puVar4;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_03798b70(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x2a8);
                          if (lVar8 == 0) {
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_03798b70(lVar5);
                              lVar5 = *(long *)puVar4;
                            }
                            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                            lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                        System_Net_WebConnection_<>c_TypeInfo);
                            FUN_05516fb4(lVar8,uVar9,
                                         *(undefined8 *)
                                          Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>_ResetCurrentState__
                                         ,0);
                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                            *(long *)(lVar5 + 0x2a8) = lVar8;
                            thunk_FUN_037aeb94(lVar5 + 0x2a8,lVar8);
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


