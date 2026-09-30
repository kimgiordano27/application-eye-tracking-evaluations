/*
FUNCTION_NAME: FUN_0147057c
ENTRY_POINT: 0147057c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_0147057c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  
  puVar1 = PTR_DAT_033f45c0;
  if ((DAT_03776afd & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(System_Globalization_CompareInfo_var);
    thunk_FUN_00d48444(
                      Method_System_IO_Enumeration_FileSystemEnumerableFactory_<>c_<UserEntries>b__5_0__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__);
    thunk_FUN_00d48444(StringLiteral_892);
    thunk_FUN_00d48444(PTR_DAT_033f45c0);
    thunk_FUN_00d48444(Method_System_Activator_CreateInstance__);
    thunk_FUN_00d48444(Method_System_Threading_EventWaitHandle_Reset__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_8885);
    thunk_FUN_00d48444(OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                      );
    DAT_03776afd = 1;
  }
  uVar7 = FUN_01468eb0(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),
                       *(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),param_2,
                       param_3,*(undefined8 *)puVar1,0);
  puVar1 = Method_System_IO_Enumeration_FileSystemEnumerableFactory_<>c_<UserEntries>b__5_0__;
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  uVar7 = FUN_01468eb0(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                       *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),param_2,
                       param_3,*(undefined8 *)
                                Method_System_IO_Enumeration_FileSystemEnumerableFactory_<>c_<UserEntries>b__5_0__
                       ,0);
  puVar2 = Method_System_Activator_CreateInstance__;
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if (param_2 == 0) goto LAB_01470a7c;
  uVar7 = FUN_0267e21c(param_2,*(undefined8 *)Method_System_Activator_CreateInstance__,0);
  if ((uVar7 & 1) != 0) {
    if (param_3 == 0) goto LAB_01470a7c;
    uVar7 = FUN_0267e21c(param_3,*(undefined8 *)puVar2,0);
    puVar2 = StringLiteral_892;
    if (((((uVar7 & 1) != 0) &&
         (fVar10 = (float)FUN_0267f5a0(param_2,*(undefined8 *)StringLiteral_892,0), fVar10 == 1.0))
        && (fVar10 = (float)FUN_0267f5a0(param_3,*(undefined8 *)puVar2,0),
           puVar2 = System_Globalization_CompareInfo_var, fVar10 == 1.0)) &&
       ((uVar7 = FUN_0267e21c(param_2,*(undefined8 *)System_Globalization_CompareInfo_var,0),
        (uVar7 & 1) != 0 &&
        (uVar7 = FUN_0267e21c(param_3,*(undefined8 *)puVar2,0), (uVar7 & 1) != 0)))) {
      uVar5 = FUN_0267e21c(param_2,*(undefined8 *)puVar2,0);
      uVar6 = FUN_0267e21c(param_3,*(undefined8 *)puVar2,0);
      if (((uVar5 ^ uVar6) & 1) != 0) {
        return 0;
      }
    }
  }
  puVar4 = StringLiteral_8885;
  puVar3 = Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__;
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  iVar9 = *(int *)(param_1 + 0x18);
  if (iVar9 == 2) {
    uVar7 = FUN_0267e21c(param_2,*(undefined8 *)
                                  Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__,0);
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar8 = FUN_0267dbbc(param_2,*(undefined8 *)puVar3,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar5 = FUN_02681b9c(uVar8,0,0);
      uVar5 = uVar5 & 1;
    }
    if (param_3 == 0) goto LAB_01470a7c;
    uVar7 = FUN_0267e21c(param_3,*(undefined8 *)puVar3,0);
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      uVar8 = FUN_0267dbbc(param_3,*(undefined8 *)puVar3,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar6 = FUN_02681b9c(uVar8,0,0);
      uVar6 = uVar6 & 1;
    }
    if ((uVar6 & uVar5) == 0) {
      if (uVar6 != 0 || uVar5 != 0) {
        return 0;
      }
      uVar7 = FUN_01468eb0(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4),
                           *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),param_2,
                           param_3,*(undefined8 *)puVar1,0);
      if ((uVar7 & 1) == 0) goto LAB_01470854;
    }
    else {
LAB_01470854:
      uVar7 = FUN_014698ec(*(undefined4 *)(param_1 + 0xcc),param_2,param_3,*(undefined8 *)puVar4,0);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
    }
    iVar9 = *(int *)(param_1 + 0x18);
  }
  puVar1 = Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__;
  if (iVar9 == 1) {
    uVar7 = FUN_0267e21c(param_2,*(undefined8 *)
                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                         ,0);
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar8 = FUN_0267dbbc(param_2,*(undefined8 *)puVar1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar5 = FUN_02681b9c(uVar8,0,0);
      uVar5 = uVar5 & 1;
    }
    if (param_3 == 0) goto LAB_01470a7c;
    uVar7 = FUN_0267e21c(param_3,*(undefined8 *)puVar1,0);
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      uVar8 = FUN_0267dbbc(param_3,*(undefined8 *)puVar1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar6 = FUN_02681b9c(uVar8,0,0);
      uVar6 = uVar6 & 1;
    }
    if ((uVar6 & uVar5) == 0) {
      if (uVar6 != 0 || uVar5 != 0) {
        return 0;
      }
      uVar7 = FUN_014698ec(*(undefined4 *)(param_1 + 0xc4),param_2,param_3,
                           *(undefined8 *)OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo,0)
      ;
      if ((uVar7 & 1) != 0) goto LAB_0147098c;
    }
    uVar7 = FUN_014698ec(*(undefined4 *)(param_1 + 200),param_2,param_3,*(undefined8 *)puVar4,0);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
LAB_0147098c:
  uVar7 = FUN_014698ec(*(undefined4 *)(param_1 + 0xa0),param_2,param_3,
                       *(undefined8 *)OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo
                       ,0);
  puVar1 = Method_System_Threading_EventWaitHandle_Reset__;
  if ((uVar7 & 1) != 0) {
    uVar5 = FUN_0267e394(param_2,*(undefined8 *)Method_System_Threading_EventWaitHandle_Reset__,0);
    if (param_3 == 0) {
LAB_01470a7c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar6 = FUN_0267e394(param_3,*(undefined8 *)puVar1,0);
    if ((((uVar5 ^ uVar6) & 1) == 0) &&
       ((uVar7 = FUN_0267e394(param_2,*(undefined8 *)puVar1,0), (uVar7 & 1) == 0 ||
        (uVar7 = FUN_01468eb0(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8),
                              *(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0),
                              param_2,param_3,
                              *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__,0),
        (uVar7 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}


