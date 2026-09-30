/*
FUNCTION_NAME: OVRManager_get_monoscopic_m0DE754F28B483E52474ECA234A1E3DD1D2BA7218
ENTRY_POINT: 02d7fe38
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_6
*/


byte OVRManager_get_monoscopic_m0DE754F28B483E52474ECA234A1E3DD1D2BA7218(long param_1)

{
  byte bVar1;
  byte local_11;
  
  if ((OVRManager_get_monoscopic_m0DE754F28B483E52474ECA234A1E3DD1D2BA7218::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_get_monoscopic_m0DE754F28B483E52474ECA234A1E3DD1D2BA7218::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bVar1 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  if ((bVar1 & 1) == 0) {
    local_11 = *(byte *)(param_1 + 0x2d);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    local_11 = OVRPlugin_get_monoscopic_m1FB2A64C1DF99193B13E940E9DEDE96C3A9ABF64(0);
  }
  local_11 = local_11 & 1;
  return local_11;
}


