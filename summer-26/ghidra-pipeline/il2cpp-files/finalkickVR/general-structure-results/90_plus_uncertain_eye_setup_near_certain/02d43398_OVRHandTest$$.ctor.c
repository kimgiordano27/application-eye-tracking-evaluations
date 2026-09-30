/*
FUNCTION_NAME: OVRHandTest$$.ctor
ENTRY_POINT: 02d43398
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRHandTest___ctor(undefined8 param_1,undefined8 param_2)

{
  byte bStack0000000000000007;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined4 uStack000000000000001c;
  
  uStack0000000000000008 = param_2;
  uStack0000000000000010 = param_1;
  if ((OVRDisplay_get_appFramerate_m06EA61678D768930BCD51BE97A322769CEC9296F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRDisplay_get_appFramerate_m06EA61678D768930BCD51BE97A322769CEC9296F::s_Il2CppMethodInitialized
         = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bStack0000000000000007 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  bStack0000000000000007 = bStack0000000000000007 & 1;
  if (bStack0000000000000007 == 0) {
    uStack000000000000001c = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    uStack000000000000001c = OVRPlugin_GetAppFramerate_mCA873E5D8A4530857583F99C9DD9AD301A415742(0);
  }
  return uStack000000000000001c;
}


