/*
FUNCTION_NAME: OVRManager_set_monoscopic_m1EAAB3C2A3CDB7D72B1700D635AAA6C2AE41893D
ENTRY_POINT: 02d7ff14
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


void OVRManager_set_monoscopic_m1EAAB3C2A3CDB7D72B1700D635AAA6C2AE41893D(long param_1,byte param_2)

{
  byte bVar1;
  
  if ((OVRManager_set_monoscopic_m1EAAB3C2A3CDB7D72B1700D635AAA6C2AE41893D::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_set_monoscopic_m1EAAB3C2A3CDB7D72B1700D635AAA6C2AE41893D::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bVar1 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  if ((bVar1 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_set_monoscopic_m10D8914343874239BBCCA4F68B3FB2DE1A9F2F2D(param_2 & 1,0);
    *(byte *)(param_1 + 0x2d) = param_2 & 1;
  }
  return;
}


