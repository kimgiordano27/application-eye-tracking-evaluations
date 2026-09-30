/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetUint64TrackedDeviceProperty$$.ctor
ENTRY_POINT: 02d7fcd8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


byte OVR_OpenVR_IVRSystem__GetUint64TrackedDeviceProperty___ctor(long param_1)

{
  byte bVar1;
  long unaff_x29;
  byte bStack0000000000000007;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0x6b8));
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
  OVRManager_get_chromatic_m66422D4D596EAEC0F2FFD0952FBDD900E667964A::s_Il2CppMethodInitialized = 1;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bStack0000000000000007 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  bStack0000000000000007 = bStack0000000000000007 & 1;
  if (bStack0000000000000007 == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    bVar1 = OVRPlugin_get_chromatic_m70D923C4EC1A9BDBCB8CAB71133F960808FBC60C(0);
    *(byte *)(unaff_x29 + -1) = bVar1 & 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


