/*
FUNCTION_NAME: FUN_0146dd90
ENTRY_POINT: 0146dd90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;functionality_data_collection_or_telemetry_hits_3
*/


undefined1  [16]
FUN_0146dd90(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
            long param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  
  if ((DAT_03776aef & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_7349);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5916);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__);
    thunk_FUN_00d48444(CollisionSound_<SoundPlayBuffer>d__14_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ec030);
    thunk_FUN_00d48444(Method_System_Threading_EventWaitHandle_Reset__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12470);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                      );
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_InputProcessor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                      );
    DAT_03776aef = 1;
  }
  if ((param_7 == 0) || (*(long *)(param_7 + 0x10) == 0)) {
LAB_0146e260:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar4 = FUN_015fe250(*(long *)(param_7 + 0x10),*(undefined8 *)StringLiteral_12470,0);
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((uVar4 & 1) != 0) {
    uVar9 = 0;
    uVar5 = 0x3f000000;
    goto LAB_0146e230;
  }
  if (*(long *)(param_7 + 0x10) == 0) goto LAB_0146e260;
  uVar4 = FUN_015fe250(*(long *)(param_7 + 0x10),*(undefined8 *)PTR_DAT_033ec030,0);
  puVar1 = System_Runtime_InteropServices_InAttribute_TypeInfo;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_02681b9c(param_6,0,0);
    if ((uVar4 & 1) != 0) {
      if (param_6 == 0) goto LAB_0146e260;
      uVar4 = FUN_0267e21c(param_6,*(undefined8 *)CollisionSound_<SoundPlayBuffer>d__14_TypeInfo,0);
      if ((uVar4 & 1) != 0) {
        uVar9 = 0;
        uVar5 = 0x3f800000;
        goto LAB_0146e230;
      }
    }
    goto LAB_0146e220;
  }
  if (*(long *)(param_7 + 0x10) == 0) goto LAB_0146e260;
  uVar4 = FUN_015fe250(*(long *)(param_7 + 0x10),
                       *(undefined8 *)
                        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                       ,0);
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_7 + 0x10) == 0) goto LAB_0146e260;
    uVar4 = FUN_015fe250(*(long *)(param_7 + 0x10),
                         *(undefined8 *)Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__,
                         0);
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__;
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_7 + 0x10) == 0) goto LAB_0146e260;
      uVar4 = FUN_015fe250(*(long *)(param_7 + 0x10),
                           *(undefined8 *)UnityEngine_InputSystem_InputProcessor_TypeInfo,0);
      uVar5 = 0;
      uVar9 = 0;
      if ((uVar4 & 1) != 0) goto LAB_0146e230;
      if (*(long *)(param_7 + 0x10) == 0) goto LAB_0146e260;
      uVar4 = FUN_015fe250(*(long *)(param_7 + 0x10),*(undefined8 *)StringLiteral_5916,0);
      if ((uVar4 & 1) != 0) {
        uVar9 = 0;
        uVar5 = 0x3f800000;
        goto LAB_0146e230;
      }
      if (*(long *)(param_7 + 0x10) == 0) goto LAB_0146e260;
      uVar4 = FUN_015fe250(*(long *)(param_7 + 0x10),
                           *(undefined8 *)
                            Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                           ,0);
      if ((uVar4 & 1) == 0) {
        if (*(long *)(param_7 + 0x10) == 0) goto LAB_0146e260;
        uVar4 = FUN_015fe250(*(long *)(param_7 + 0x10),
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                             ,0);
        if ((uVar4 & 1) != 0) goto LAB_0146e230;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar4 = FUN_02681b9c(param_6,0,0);
        if ((uVar4 & 1) != 0) {
          if (param_6 == 0) goto LAB_0146e260;
          uVar4 = FUN_0267e394(param_6,*(undefined8 *)
                                        Method_System_Threading_EventWaitHandle_Reset__,0);
          puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__;
          if ((uVar4 & 1) != 0) {
            uVar4 = FUN_0267e21c(param_6,*(undefined8 *)
                                          Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__,0);
            if ((uVar4 & 1) != 0) {
              auVar8 = FUN_0267d928(param_6,*(undefined8 *)puVar2,0);
              uVar9 = auVar8._8_8_;
              uVar5 = auVar8._0_8_;
              lVar7 = *(long *)(param_5 + 0x10);
              local_70 = auVar8._0_4_;
              uStack_6c = param_2;
              local_68 = param_3;
              uStack_64 = param_4;
              uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_7349,&local_70);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_0146af84(lVar7,param_6,*(undefined8 *)puVar2,uVar6,0);
            }
            goto LAB_0146e230;
          }
          goto LAB_0146e100;
        }
      }
LAB_0146e220:
      uVar9 = 0;
      uVar5 = 0x3f800000;
      goto LAB_0146e230;
    }
    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar4 = FUN_0267e21c(param_6,*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                         ,0);
    if ((uVar4 & 1) == 0) {
      local_70 = 0x3f000000;
    }
    else {
      local_70 = FUN_0267f5a0(param_6,*(undefined8 *)puVar3,0);
    }
    lVar7 = *(long *)(param_5 + 0x10);
    uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_70);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0146af84(lVar7,param_6,*(undefined8 *)puVar3,uVar5,0);
    uVar9 = 0;
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_02681b9c(param_6,0,0);
    puVar2 = OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo;
    uVar9 = 0;
    if ((uVar4 & 1) != 0) {
      if (param_6 == 0) goto LAB_0146e260;
      uVar4 = FUN_0267e21c(param_6,*(undefined8 *)
                                    OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo,0);
      if ((uVar4 & 1) != 0) {
        local_70 = FUN_0267f5a0(param_6,*(undefined8 *)puVar2,0);
        lVar7 = *(long *)(param_5 + 0x10);
        uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_70);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0146af84(lVar7,param_6,*(undefined8 *)puVar2,uVar5,0);
      }
    }
  }
LAB_0146e100:
  uVar5 = 0;
LAB_0146e230:
  auVar8._8_8_ = uVar9;
  auVar8._0_8_ = uVar5;
  return auVar8;
}


