/*
FUNCTION_NAME: OVRTracker_GetPresent_m68DDB89533E72A54568FB5ACC533E788768D6DC1
ENTRY_POINT: 02e193fc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


byte OVRTracker_GetPresent_m68DDB89533E72A54568FB5ACC533E788768D6DC1
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  byte bVar2;
  byte local_11;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  if ((OVRTracker_GetPresent_m68DDB89533E72A54568FB5ACC533E788768D6DC1::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRTracker_GetPresent_m68DDB89533E72A54568FB5ACC533E788768D6DC1::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bVar2 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  if ((bVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    switch(param_2) {
    case 0:
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_11 = OVRPlugin_GetNodePresent_m5650738AE833C3C1DD04EBF700433AF236A2B20B(5,0);
      local_11 = local_11 & 1;
      break;
    case 1:
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_11 = OVRPlugin_GetNodePresent_m5650738AE833C3C1DD04EBF700433AF236A2B20B(6,0);
      local_11 = local_11 & 1;
      break;
    case 2:
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_11 = OVRPlugin_GetNodePresent_m5650738AE833C3C1DD04EBF700433AF236A2B20B(7,0);
      local_11 = local_11 & 1;
      break;
    case 3:
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_11 = OVRPlugin_GetNodePresent_m5650738AE833C3C1DD04EBF700433AF236A2B20B(8,0);
      local_11 = local_11 & 1;
      break;
    default:
      local_11 = 0;
    }
  }
  return local_11;
}


