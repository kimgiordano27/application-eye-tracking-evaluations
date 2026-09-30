/*
FUNCTION_NAME: OVRTracker_GetFrustum_m26A133EEAF6B491674CC64636CDA65C8773CA68E
ENTRY_POINT: 02e195c4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
OVRTracker_GetFrustum_m26A133EEAF6B491674CC64636CDA65C8773CA68E
          (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  
  local_38 = param_3;
  local_2c = param_2;
  local_28 = param_1;
  if ((OVRTracker_GetFrustum_m26A133EEAF6B491674CC64636CDA65C8773CA68E::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRTracker_GetFrustum_m26A133EEAF6B491674CC64636CDA65C8773CA68E::s_Il2CppMethodInitialized = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bVar1 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  uVar2 = local_2c;
  if ((bVar1 & 1) == 0) {
    il2cpp_codegen_initobj(&local_48,0x10);
    local_20 = (undefined4)local_48;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    uVar2 = OVRPlugin_GetTrackerFrustum_m35BD5EE1EA9E92A4A4AEC7F7C1FF8ADCD521C2FE(uVar2);
    local_20 = OVRExtensions_ToFrustum_m45E52DA30C3E3732A9EB8017F26A20B22E0AA791(uVar2,0);
  }
  return local_20;
}


