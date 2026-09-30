/*
FUNCTION_NAME: FromOVRHmdDataSource_UpdateData_m1DB5CC920E858C5788A0B99A7955B12D44560C1C
ENTRY_POINT: 02b5ce84
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_21;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_possible_biometrics_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FromOVRHmdDataSource_UpdateData_m1DB5CC920E858C5788A0B99A7955B12D44560C1C
               (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  void *pvVar5;
  OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *pOVar6;
  void *pvVar7;
  float fVar8;
  undefined4 uStack_2e4;
  undefined4 uStack_258;
  undefined4 uStack_208;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined4 uStack_1a8;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined1 local_31;
  
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_laneq_s32__;
  if ((FromOVRHmdDataSource_UpdateData_m1DB5CC920E858C5788A0B99A7955B12D44560C1C::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtd_s64_f64__);
    FromOVRHmdDataSource_UpdateData_m1DB5CC920E858C5788A0B99A7955B12D44560C1C::
    s_Il2CppMethodInitialized = 1;
  }
  pvVar7 = *(void **)(param_5 + 0x70);
  pvVar5 = (void *)FromOVRHmdDataSource_get_Config_m07BC652804E928436AF209955AC55FCD4FDDA645
                             (param_5);
  NullCheck(pvVar7);
  *(void **)((long)pvVar7 + 0x38) = pvVar5;
  Il2CppCodeGenWriteBarrier((void **)((long)pvVar7 + 0x38),pvVar5);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  local_31 = OVRNodeStateProperties_IsHmdPresent_m007E7C0AA8B7D85019F2238007C8F5F28DB3547D(0);
  local_31 = local_31 & 1;
  pvVar5 = *(void **)(param_5 + 0x70);
  NullCheck(pvVar5);
  puVar1 = (undefined8 *)((long)pvVar5 + 0x10);
  if ((*(byte *)(param_5 + 0x59) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtd_s64_f64__);
    Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(0);
    uStack_1a8 = (undefined4)uStack_1c4;
    uStack_5c = uStack_1b8;
    uStack_64 = CONCAT44(uStack_1bc,uStack_1c0);
    local_70 = local_1cc;
    pvVar7 = *(void **)(param_5 + 0x70);
    NullCheck(pvVar7);
    uStack_68 = uStack_1a8;
    if ((*(byte *)((long)pvVar7 + 0x2c) & 1) != 0) {
      pvVar7 = *(void **)(param_5 + 0x70);
      NullCheck(pvVar7);
      local_70 = *(undefined8 *)((long)pvVar7 + 0x10);
      uStack_208 = (undefined4)*(undefined8 *)((long)pvVar7 + 0x18);
      uStack_5c = *(undefined8 *)((long)pvVar7 + 0x24);
      uStack_64 = *(undefined8 *)((long)pvVar7 + 0x1c);
      uStack_68 = uStack_208;
    }
    if (local_31 == 0) {
      uStack_2e4 = (undefined4)uStack_64;
      *(ulong *)((long)pvVar5 + 0x18) = CONCAT44(uStack_2e4,uStack_68);
      *puVar1 = local_70;
      *(undefined8 *)((long)pvVar5 + 0x24) = uStack_5c;
      *(undefined8 *)((long)pvVar5 + 0x1c) = uStack_64;
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      bVar3 = OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1
                        (2,4,2,0xffffffff,puVar1,0);
      if ((bVar3 & 1) == 0) {
        *puVar1 = local_70;
        *(undefined4 *)((long)pvVar5 + 0x18) = uStack_258;
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      bVar3 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                        (2,5,2,0xffffffff,(long)pvVar5 + 0x1c,0);
      if ((bVar3 & 1) == 0) {
        *(undefined8 *)((long)pvVar5 + 0x24) = uStack_5c;
        *(undefined8 *)((long)pvVar5 + 0x1c) = uStack_64;
      }
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    pOVar6 = (OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *)
             OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                       ((MethodInfo *)0x0);
    NullCheck(pOVar6);
    fVar8 = (float)OVRManager_get_headPoseRelativeOffsetRotation_m24093D9748A541A44618C282B5858BD49C83F3C9_inline
                             (pOVar6,(MethodInfo *)0x0);
    pOVar6 = (OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *)
             OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                       ((MethodInfo *)0x0);
    NullCheck(pOVar6);
    OVRManager_get_headPoseRelativeOffsetRotation_m24093D9748A541A44618C282B5858BD49C83F3C9_inline
              (pOVar6,(MethodInfo *)0x0);
    pOVar6 = (OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *)
             OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                       ((MethodInfo *)0x0);
    NullCheck(pOVar6);
    OVRManager_get_headPoseRelativeOffsetRotation_m24093D9748A541A44618C282B5858BD49C83F3C9_inline
              (pOVar6,(MethodInfo *)0x0);
    param_2 = -param_2;
    uVar4 = HBAO__get_presets(-fVar8,param_2,param_3,(MethodInfo *)0x0);
    *(ulong *)((long)pvVar5 + 0x24) = CONCAT44(param_4,param_3);
    *(ulong *)((long)pvVar5 + 0x1c) = CONCAT44(param_2,uVar4);
    pOVar6 = (OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *)
             OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                       ((MethodInfo *)0x0);
    NullCheck(pOVar6);
    uVar4 = OVRManager_get_headPoseRelativeOffsetTranslation_m699900022730F69357C46494506381ED7647BC0C_inline
                      (pOVar6,(MethodInfo *)0x0);
    *puVar1 = CONCAT44(param_2,uVar4);
    *(float *)((long)pvVar5 + 0x18) = param_3;
    local_31 = 1;
  }
  pvVar5 = *(void **)(param_5 + 0x70);
  NullCheck(pvVar5);
  *(byte *)((long)pvVar5 + 0x2c) = local_31;
  pvVar5 = *(void **)(param_5 + 0x70);
  uVar4 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(0);
  NullCheck(pvVar5);
  *(undefined4 *)((long)pvVar5 + 0x30) = uVar4;
  return;
}


