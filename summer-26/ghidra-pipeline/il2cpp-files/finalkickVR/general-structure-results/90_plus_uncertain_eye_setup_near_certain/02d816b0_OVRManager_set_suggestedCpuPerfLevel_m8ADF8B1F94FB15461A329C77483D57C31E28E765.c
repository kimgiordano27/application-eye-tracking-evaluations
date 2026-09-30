/*
FUNCTION_NAME: OVRManager_set_suggestedCpuPerfLevel_m8ADF8B1F94FB15461A329C77483D57C31E28E765
ENTRY_POINT: 02d816b0
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


void OVRManager_set_suggestedCpuPerfLevel_m8ADF8B1F94FB15461A329C77483D57C31E28E765
               (undefined4 param_1)

{
  byte bVar1;
  
  if ((OVRManager_set_suggestedCpuPerfLevel_m8ADF8B1F94FB15461A329C77483D57C31E28E765::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_set_suggestedCpuPerfLevel_m8ADF8B1F94FB15461A329C77483D57C31E28E765::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bVar1 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  if ((bVar1 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_set_suggestedCpuPerfLevel_m0CA3B9722D6D34AD41A978A5A0B5D1C966D237A8(param_1,0);
  }
  return;
}


