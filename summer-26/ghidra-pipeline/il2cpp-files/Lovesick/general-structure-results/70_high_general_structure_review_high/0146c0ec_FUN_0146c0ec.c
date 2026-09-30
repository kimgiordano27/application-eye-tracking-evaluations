/*
FUNCTION_NAME: FUN_0146c0ec
ENTRY_POINT: 0146c0ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_0146c0ec(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  float fVar9;
  
  puVar1 = CollisionSound_<SoundPlayBuffer>d__14_TypeInfo;
  if ((DAT_03776ae4 & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(System_Globalization_CompareInfo_var);
    thunk_FUN_00d48444(CollisionSound_<SoundPlayBuffer>d__14_TypeInfo);
    thunk_FUN_00d48444(Method_System_Threading_EventWaitHandle_Reset__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<IInputInteraction>__
                      );
    thunk_FUN_00d48444(OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentsInChildren<Animator>__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                      );
    DAT_03776ae4 = 1;
  }
  uVar5 = FUN_01468eb0(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),
                       *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),param_2,
                       param_3,*(undefined8 *)puVar1);
  puVar1 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<IInputInteraction>__;
  if ((uVar5 & 1) != 0) {
    if (param_2 == 0) {
Meta_XR_MRUtilityKit_DestructibleGlobalMesh__op_Equality:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = FUN_0267e21c(param_2,*(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<IInputInteraction>__
                         ,0);
    if ((uVar5 & 1) != 0) {
      if (param_3 == 0) goto Meta_XR_MRUtilityKit_DestructibleGlobalMesh__op_Equality;
      uVar5 = FUN_0267e21c(param_3,*(undefined8 *)puVar1,0);
      if (((((uVar5 & 1) != 0) &&
           (fVar9 = (float)FUN_0267f5a0(param_2,*(undefined8 *)puVar1,0), fVar9 == 1.0)) &&
          (fVar9 = (float)FUN_0267f5a0(param_3,*(undefined8 *)puVar1,0),
          puVar1 = System_Globalization_CompareInfo_var, fVar9 == 1.0)) &&
         ((uVar5 = FUN_0267e21c(param_2,*(undefined8 *)System_Globalization_CompareInfo_var,0),
          (uVar5 & 1) != 0 &&
          (uVar5 = FUN_0267e21c(param_3,*(undefined8 *)puVar1,0), (uVar5 & 1) != 0)))) {
        uVar3 = FUN_0267e21c(param_2,*(undefined8 *)puVar1,0);
        uVar4 = FUN_0267e21c(param_3,*(undefined8 *)puVar1,0);
        if (((uVar3 ^ uVar4) & 1) != 0) {
          return 0;
        }
      }
    }
    uVar5 = FUN_014698ec(*(undefined4 *)(param_1 + 0xa0),param_2,param_3,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                        );
    puVar2 = 
    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__;
    puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if ((uVar5 & 1) != 0) {
      uVar5 = FUN_0267e21c(param_2,*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                           ,0);
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar6 = FUN_0267dbbc(param_2,*(undefined8 *)puVar2,0);
        lVar7 = *(long *)puVar1;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar7);
        }
        uVar3 = FUN_02681b9c(uVar6,0,0);
        uVar3 = uVar3 & 1;
      }
      if (param_3 == 0) goto Meta_XR_MRUtilityKit_DestructibleGlobalMesh__op_Equality;
      uVar5 = FUN_0267e21c(param_3,*(undefined8 *)puVar2,0);
      if ((uVar5 & 1) == 0) {
        uVar4 = 0;
      }
      else {
        uVar6 = FUN_0267dbbc(param_3,*(undefined8 *)puVar2,0);
        lVar7 = *(long *)puVar1;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar7);
        }
        uVar4 = FUN_02681b9c(uVar6,0,0);
        uVar4 = uVar4 & 1;
      }
      puVar8 = (undefined8 *)Method_UnityEngine_Component_GetComponentsInChildren<Animator>__;
      if ((((uVar4 & uVar3) != 0) ||
          (puVar8 = (undefined8 *)OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo,
          uVar4 == 0 && uVar3 == 0)) &&
         (uVar5 = FUN_014698ec(*(undefined4 *)(param_1 + 0x9c),param_2,param_3,*puVar8),
         puVar1 = Method_System_Threading_EventWaitHandle_Reset__, (uVar5 & 1) != 0)) {
        uVar3 = FUN_0267e394(param_2,*(undefined8 *)Method_System_Threading_EventWaitHandle_Reset__,
                             0);
        uVar4 = FUN_0267e394(param_3,*(undefined8 *)puVar1,0);
        if ((((uVar3 ^ uVar4) & 1) == 0) &&
           ((uVar5 = FUN_0267e394(param_2,*(undefined8 *)puVar1,0), (uVar5 & 1) == 0 ||
            (uVar5 = FUN_01468eb0(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8),
                                  *(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0),
                                  param_2,param_3,
                                  *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__
                                 ), (uVar5 & 1) != 0)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}


