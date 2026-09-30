/*
FUNCTION_NAME: OVRDisplay_get_angularVelocity_mD59936B2027177322B5BE804949DE97BA5BD2911
ENTRY_POINT: 02d42e74
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4
OVRDisplay_get_angularVelocity_mD59936B2027177322B5BE804949DE97BA5BD2911
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_30 = param_5;
  local_28 = param_4;
  if ((OVRDisplay_get_angularVelocity_mD59936B2027177322B5BE804949DE97BA5BD2911::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_laneq_s32__);
    OVRDisplay_get_angularVelocity_mD59936B2027177322B5BE804949DE97BA5BD2911::
    s_Il2CppMethodInitialized = 1;
  }
  local_40 = 0;
  local_38 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bVar1 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  if ((bVar1 & 1) == 0) {
    local_20 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
  }
  else {
    uVar2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
    local_40 = CONCAT44(param_2,uVar2);
    local_38 = param_3;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_laneq_s32__);
    bVar1 = OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1
                      (3,3,9,0xffffffff,&local_40,0);
    if ((bVar1 & 1) == 0) {
      local_20 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline
                           ((MethodInfo *)0x0);
    }
    else {
      local_20 = (undefined4)local_40;
    }
  }
  return local_20;
}


