/*
FUNCTION_NAME: FUN_0146d560
ENTRY_POINT: 0146d560
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 FUN_0146d560(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar1 = CollisionSound_<SoundPlayBuffer>d__14_TypeInfo;
  if ((DAT_03776aed & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__);
    thunk_FUN_00d48444(CollisionSound_<SoundPlayBuffer>d__14_TypeInfo);
    thunk_FUN_00d48444(Method_System_Threading_EventWaitHandle_Reset__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__);
    thunk_FUN_00d48444(StringLiteral_4299);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                      );
    DAT_03776aed = 1;
  }
  uVar5 = FUN_01468eb0(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),
                       *(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88),param_2,
                       param_3,*(undefined8 *)puVar1,0);
  puVar2 = Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__;
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (param_2 != 0) {
    uVar5 = FUN_0267e21c(param_2,*(undefined8 *)
                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                         ,0);
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar6 = FUN_0267dbbc(param_2,*(undefined8 *)puVar2,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      uVar3 = FUN_02681b9c(uVar6,0,0);
      uVar3 = uVar3 & 1;
    }
    if (param_3 != 0) {
      uVar5 = FUN_0267e21c(param_3,*(undefined8 *)puVar2,0);
      if ((uVar5 & 1) == 0) {
        uVar4 = 1;
      }
      else {
        uVar6 = FUN_0267dbbc(param_3,*(undefined8 *)puVar2,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar1);
        }
        uVar4 = FUN_02681b9c(uVar6,0,0);
        uVar4 = uVar4 ^ 1;
      }
      if (uVar3 != 0) {
        return 0;
      }
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      uVar5 = FUN_014698ec(*(undefined4 *)(param_1 + 0x8c),param_2,param_3,
                           *(undefined8 *)OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo,0)
      ;
      puVar2 = Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__;
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      uVar5 = FUN_0267e21c(param_2,*(undefined8 *)
                                    Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__,0);
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar6 = FUN_0267dbbc(param_2,*(undefined8 *)puVar2,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar1);
        }
        uVar3 = FUN_02681b9c(uVar6,0,0);
        uVar3 = uVar3 & 1;
      }
      uVar5 = FUN_0267e21c(param_3,*(undefined8 *)puVar2,0);
      if ((uVar5 & 1) == 0) {
        uVar4 = 1;
      }
      else {
        uVar6 = FUN_0267dbbc(param_3,*(undefined8 *)puVar2,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar1);
        }
        uVar4 = FUN_02681b9c(uVar6,0,0);
        uVar4 = uVar4 ^ 1;
      }
      puVar1 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__;
      if (uVar3 != 0) {
        return 0;
      }
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      uVar5 = FUN_014698ec(*(undefined4 *)(param_1 + 100),param_2,param_3,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                           ,0);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      uVar5 = FUN_014698ec(*(undefined4 *)(param_1 + 0x68),param_2,param_3,
                           *(undefined8 *)StringLiteral_4299,0);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      uVar5 = FUN_014698ec(*(undefined4 *)(param_1 + 100),param_2,param_3,*(undefined8 *)puVar1,0);
      puVar1 = Method_System_Threading_EventWaitHandle_Reset__;
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      uVar3 = FUN_0267e394(param_2,*(undefined8 *)Method_System_Threading_EventWaitHandle_Reset__,0)
      ;
      uVar4 = FUN_0267e394(param_3,*(undefined8 *)puVar1,0);
      if (((uVar3 ^ uVar4) & 1) != 0) {
        return 0;
      }
      uVar5 = FUN_0267e394(param_2,*(undefined8 *)puVar1,0);
      if (((uVar5 & 1) != 0) &&
         (uVar5 = FUN_01468eb0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),
                               *(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),
                               param_2,param_3,
                               *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__,0)
         , (uVar5 & 1) == 0)) {
        return 0;
      }
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


