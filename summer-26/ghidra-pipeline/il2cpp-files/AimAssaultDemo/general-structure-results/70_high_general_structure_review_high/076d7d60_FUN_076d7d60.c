/*
FUNCTION_NAME: FUN_076d7d60
ENTRY_POINT: 076d7d60
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_076d7d60(void)

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
  if ((DAT_08271490 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d95d10);
    FUN_0373b518(PTR_DAT_07d96228);
    FUN_0373b518(UnityEngine_UIElements_UIR_UIRenderDevice_<>c_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_UIR_UIRenderDevice_AllocToFree_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate_TypeInfo);
    FUN_0373b518(System_Net_WebRequest_<>c__DisplayClass78_0_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_UITKTextJobSystem_<>c_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_UITKTextJobSystem_ManagedJobData_TypeInfo);
    FUN_0373b518(UITextColor_<Start>d__1_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_UQuery_FirstQueryMatcher_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_UQuery_IVisualPredicateWrapper_TypeInfo);
    FUN_0373b518(System_Text_UTF32Encoding_UTF32Decoder_TypeInfo);
    FUN_0373b518(System_Text_UTF7Encoding_Decoder_TypeInfo);
    FUN_0373b518(System_Text_UTF7Encoding_DecoderUTF7Fallback_TypeInfo);
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<Quaternion>_AddMeasurement__);
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<Quaternion>_Clear__);
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<Quaternion>_ConvertTransformSpace__
                );
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<Quaternion>_GetInterpolatedValue__)
    ;
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<Quaternion>_ResetCurrentState__);
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<Quaternion>_ResetTo__);
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<Quaternion>_Update__);
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<Quaternion>_Update__);
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<float>__ctor__);
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>__ctor__);
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>_AddMeasurement__);
    FUN_0373b518(Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>_Clear__);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseSlider<float>_set_clamped__);
    DAT_08271490 = 1;
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
    lVar5 = *(long *)(PTR_DAT_07d86548 + 0x40);
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
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1f0);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar5);
        lVar5 = *(long *)puVar4;
      }
      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                  UnityEngine_UIElements_UITKTextJobSystem_<>c_TypeInfo);
      FUN_0551a640(lVar8,uVar9,
                   *(undefined8 *)
                    Method_Unity_Netcode_BufferedLinearInterpolator<Quaternion>_AddMeasurement__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x1f0) = lVar8;
      thunk_FUN_037aeb94(lVar5 + 0x1f0,lVar8);
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
      lVar5 = *(long *)(puVar1 + 0x40);
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
      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1f8);
      if (lVar8 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70(lVar5);
          lVar5 = *(long *)puVar4;
        }
        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
        lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                    UnityEngine_UIElements_UIR_UIRenderDevice_AllocToFree_TypeInfo);
        FUN_0551ac60(lVar8,uVar9,
                     *(undefined8 *)
                      Method_Unity_Netcode_BufferedLinearInterpolator<Quaternion>_GetInterpolatedValue__
                     ,0);
        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
        *(long *)(lVar5 + 0x1f8) = lVar8;
        thunk_FUN_037aeb94(lVar5 + 0x1f8,lVar8);
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
        lVar5 = *(long *)(puVar1 + 0x40);
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
        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x200);
        if (lVar8 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03798b70(lVar5);
            lVar5 = *(long *)puVar4;
          }
          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
          lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                      UnityEngine_UIElements_UIR_UIRenderDevice_<>c_TypeInfo);
          FUN_0551a7c8(lVar8,uVar9,
                       *(undefined8 *)
                        Method_Unity_Netcode_BufferedLinearInterpolator<Quaternion>_ResetCurrentState__
                       ,0);
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          *(long *)(lVar5 + 0x200) = lVar8;
          thunk_FUN_037aeb94(lVar5 + 0x200,lVar8);
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
          lVar5 = *(long *)(puVar1 + 0x40);
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
          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x208);
          if (lVar8 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03798b70(lVar5);
              lVar5 = *(long *)puVar4;
            }
            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
            lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                        UnityEngine_UIElements_UQuery_FirstQueryMatcher_TypeInfo);
            FUN_0551a950(lVar8,uVar9,
                         *(undefined8 *)
                          Method_Unity_Netcode_BufferedLinearInterpolator<Quaternion>_ResetTo__,0);
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
            *(long *)(lVar5 + 0x208) = lVar8;
            thunk_FUN_037aeb94(lVar5 + 0x208,lVar8);
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
            lVar5 = *(long *)(puVar1 + 0x40);
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
            lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x210);
            if (lVar8 == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_03798b70(lVar5);
                lVar5 = *(long *)puVar4;
              }
              uVar9 = **(undefined8 **)(lVar5 + 0xb8);
              lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                          UnityEngine_UIElements_UQuery_IVisualPredicateWrapper_TypeInfo
                                        );
              FUN_0551aa14(lVar8,uVar9,
                           *(undefined8 *)
                            Method_Unity_Netcode_BufferedLinearInterpolator<Quaternion>_Update__,0);
              lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
              *(long *)(lVar5 + 0x210) = lVar8;
              thunk_FUN_037aeb94(lVar5 + 0x210,lVar8);
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
              lVar5 = *(long *)(puVar1 + 0x40);
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
              lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x218);
              if (lVar8 == 0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_03798b70(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                            System_Text_UTF7Encoding_DecoderUTF7Fallback_TypeInfo);
                FUN_0551aad8(lVar8,uVar9,
                             *(undefined8 *)
                              Method_Unity_Netcode_BufferedLinearInterpolator<Quaternion>_Update__,0
                            );
                lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                *(long *)(lVar5 + 0x218) = lVar8;
                thunk_FUN_037aeb94(lVar5 + 0x218,lVar8);
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
                lVar5 = *(long *)(puVar1 + 0x40);
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
                lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x220);
                if (lVar8 == 0) {
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_03798b70(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                              UnityEngine_UIElements_UITKTextJobSystem_ManagedJobData_TypeInfo
                                            );
                  FUN_0551a704(lVar8,uVar9,
                               *(undefined8 *)
                                Method_Unity_Netcode_BufferedLinearInterpolator<float>__ctor__,0);
                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                  *(long *)(lVar5 + 0x220) = lVar8;
                  thunk_FUN_037aeb94(lVar5 + 0x220,lVar8);
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
                  lVar5 = *(long *)(puVar1 + 0x40);
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
                  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x228);
                  if (lVar8 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_03798b70(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                    lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                System_Text_UTF32Encoding_UTF32Decoder_TypeInfo);
                    FUN_0551ade8(lVar8,uVar9,
                                 *(undefined8 *)
                                  Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>__ctor__,0
                                );
                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                    *(long *)(lVar5 + 0x228) = lVar8;
                    thunk_FUN_037aeb94(lVar5 + 0x228,lVar8);
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
                    lVar5 = *(long *)(puVar1 + 0x40);
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
                    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x230);
                    if (lVar8 == 0) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_03798b70(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                  UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate_TypeInfo
                                                );
                      FUN_0551aeac(lVar8,uVar9,
                                   *(undefined8 *)
                                    Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>_AddMeasurement__
                                   ,0);
                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                      *(long *)(lVar5 + 0x230) = lVar8;
                      thunk_FUN_037aeb94(lVar5 + 0x230,lVar8);
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
                      lVar5 = *(long *)(puVar1 + 0x40);
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
                      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x238);
                      if (lVar8 == 0) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_03798b70(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                        lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                    System_Text_UTF7Encoding_Decoder_TypeInfo);
                        FUN_0551ad24(lVar8,uVar9,
                                     *(undefined8 *)
                                      Method_Unity_Netcode_BufferedLinearInterpolator<Vector3>_Clear__
                                     ,0);
                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                        *(long *)(lVar5 + 0x238) = lVar8;
                        thunk_FUN_037aeb94(lVar5 + 0x238,lVar8);
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
                        lVar5 = *(long *)(puVar1 + 0x40);
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
                        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x240);
                        if (lVar8 == 0) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_03798b70(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                          lVar8 = thunk_FUN_037788cc(*(undefined8 *)UITextColor_<Start>d__1_TypeInfo
                                                    );
                          FUN_0551a88c(lVar8,uVar9,
                                       *(undefined8 *)
                                        Method_Unity_Netcode_BufferedLinearInterpolator<Quaternion>_Clear__
                                       ,0);
                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                          *(long *)(lVar5 + 0x240) = lVar8;
                          thunk_FUN_037aeb94(lVar5 + 0x240,lVar8);
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
                          uVar7 = FUN_062519f8(*(long *)(puVar1 + 0x40) + 0x20,0);
                          lVar5 = *(long *)puVar4;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_03798b70(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x248);
                          if (lVar8 == 0) {
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_03798b70(lVar5);
                              lVar5 = *(long *)puVar4;
                            }
                            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                            lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                                
                                                  System_Net_WebRequest_<>c__DisplayClass78_0_TypeInfo
                                                  );
                            FUN_05516ef0(lVar8,uVar9,
                                         *(undefined8 *)
                                          Method_Unity_Netcode_BufferedLinearInterpolator<Quaternion>_ConvertTransformSpace__
                                         ,0);
                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                            *(long *)(lVar5 + 0x248) = lVar8;
                            thunk_FUN_037aeb94(lVar5 + 0x248,lVar8);
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


