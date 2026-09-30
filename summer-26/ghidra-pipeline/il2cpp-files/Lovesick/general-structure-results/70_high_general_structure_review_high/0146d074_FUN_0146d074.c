/*
FUNCTION_NAME: FUN_0146d074
ENTRY_POINT: 0146d074
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_3;telemetry_or_network_hits_5;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_5
*/


void FUN_0146d074(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  
  if ((DAT_03776aeb & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__);
    thunk_FUN_00d48444(CollisionSound_<SoundPlayBuffer>d__14_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ec030);
    thunk_FUN_00d48444(Method_System_Threading_EventWaitHandle_Reset__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo);
    thunk_FUN_00d48444(OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12470);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                      );
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                      );
    DAT_03776aeb = 1;
  }
  if (param_7 != 0) {
    uVar5 = FUN_015fe250(param_7,*(undefined8 *)PTR_DAT_033ec030,0);
    puVar3 = 
    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__;
    puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_015fe250(param_7,*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                           ,0);
      puVar2 = Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__;
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_015fe250(param_7,*(undefined8 *)
                                      Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__,0)
        ;
        if ((uVar5 & 1) == 0) {
          uVar5 = FUN_015fe250(param_7,*(undefined8 *)StringLiteral_12470,0);
          if ((uVar5 & 1) == 0) {
            uVar5 = FUN_015fe250(param_7,*(undefined8 *)
                                          Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                                 ,0);
            if ((uVar5 & 1) == 0) {
              *(undefined4 *)(param_5 + 0x4c) = 5;
            }
            else {
              *(undefined4 *)(param_5 + 0x4c) = 3;
              puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__;
              if (param_6 == 0) goto LAB_0146d420;
              bVar4 = FUN_0267e394(param_6,*(undefined8 *)
                                            Method_System_Threading_EventWaitHandle_Reset__,0);
              *(byte *)(param_5 + 0x38) = bVar4 & 1;
              uVar5 = FUN_0267e21c(param_6,*(undefined8 *)puVar1,0);
              if ((uVar5 & 1) == 0) {
                *(undefined8 *)(param_5 + 0x44) = *(undefined8 *)(param_5 + 0x9c);
                *(undefined8 *)(param_5 + 0x3c) = *(undefined8 *)(param_5 + 0x94);
              }
              else {
                uVar8 = FUN_0267d928(param_6,*(undefined8 *)puVar1,0);
                *(undefined4 *)(param_5 + 0x3c) = uVar8;
                *(undefined4 *)(param_5 + 0x40) = param_2;
                *(undefined4 *)(param_5 + 0x44) = param_3;
                *(undefined4 *)(param_5 + 0x48) = param_4;
              }
            }
          }
          else {
            *(undefined4 *)(param_5 + 0x4c) = 4;
            if (param_6 == 0) goto LAB_0146d420;
            uVar5 = FUN_0267e21c(param_6,param_7,0);
            puVar1 = OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo;
            if ((uVar5 & 1) == 0) {
              *(undefined4 *)(param_5 + 0x34) = *(undefined4 *)(param_5 + 0x68);
            }
            else {
              uVar5 = FUN_0267e21c(param_6,*(undefined8 *)
                                            OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo
                                   ,0);
              if ((uVar5 & 1) != 0) {
                uVar8 = FUN_0267f5a0(param_6,*(undefined8 *)puVar1,0);
                *(undefined4 *)(param_5 + 0x34) = uVar8;
              }
            }
          }
        }
        else {
          *(undefined4 *)(param_5 + 0x4c) = 2;
          *(undefined4 *)(param_5 + 0x28) = *(undefined4 *)(param_5 + 100);
          puVar3 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
          ;
          if (param_6 == 0) goto LAB_0146d420;
          uVar6 = FUN_0267dbbc(param_6,*(undefined8 *)puVar2,0);
          lVar7 = *(long *)puVar1;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar7);
          }
          bVar4 = FUN_02681b9c(uVar6,0,0);
          *(byte *)(param_5 + 0x31) = bVar4 & 1;
          uVar5 = FUN_0267e21c(param_6,*(undefined8 *)puVar3,0);
          if ((uVar5 & 1) == 0) {
            *(undefined4 *)(param_5 + 0x28) = 0x3f800000;
          }
          else {
            uVar8 = FUN_0267f5a0(param_6,*(undefined8 *)puVar3,0);
            *(undefined4 *)(param_5 + 0x28) = uVar8;
          }
        }
      }
      else {
        *(undefined4 *)(param_5 + 0x4c) = 1;
        *(undefined4 *)(param_5 + 0x2c) = *(undefined4 *)(param_5 + 0x60);
        puVar2 = OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo;
        if (param_6 == 0) goto LAB_0146d420;
        uVar6 = FUN_0267dbbc(param_6,*(undefined8 *)puVar3,0);
        lVar7 = *(long *)puVar1;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar7);
        }
        bVar4 = FUN_02681b9c(uVar6,0,0);
        *(byte *)(param_5 + 0x30) = bVar4 & 1;
        uVar5 = FUN_0267e21c(param_6,*(undefined8 *)puVar2,0);
        if ((uVar5 & 1) == 0) {
          *(undefined4 *)(param_5 + 0x2c) = 0;
        }
        else {
          uVar8 = FUN_0267f5a0(param_6,*(undefined8 *)puVar2,0);
          *(undefined4 *)(param_5 + 0x2c) = uVar8;
        }
      }
    }
    else {
      *(undefined4 *)(param_5 + 0x4c) = 0;
      puVar1 = CollisionSound_<SoundPlayBuffer>d__14_TypeInfo;
      if (param_6 == 0) goto LAB_0146d420;
      uVar5 = FUN_0267e21c(param_6,*(undefined8 *)CollisionSound_<SoundPlayBuffer>d__14_TypeInfo,0);
      if ((uVar5 & 1) == 0) {
        *(undefined8 *)(param_5 + 0x20) = *(undefined8 *)(param_5 + 0x58);
        *(undefined8 *)(param_5 + 0x18) = *(undefined8 *)(param_5 + 0x50);
      }
      else {
        uVar8 = FUN_0267d928(param_6,*(undefined8 *)puVar1,0);
        *(undefined4 *)(param_5 + 0x18) = uVar8;
        *(undefined4 *)(param_5 + 0x1c) = param_2;
        *(undefined4 *)(param_5 + 0x20) = param_3;
        *(undefined4 *)(param_5 + 0x24) = param_4;
      }
    }
    return;
  }
LAB_0146d420:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


