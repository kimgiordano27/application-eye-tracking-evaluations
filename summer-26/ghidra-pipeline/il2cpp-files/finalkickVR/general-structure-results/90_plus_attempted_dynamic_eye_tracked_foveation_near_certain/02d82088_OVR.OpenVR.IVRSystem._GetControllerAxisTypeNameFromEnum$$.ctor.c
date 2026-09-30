/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerAxisTypeNameFromEnum$$.ctor
ENTRY_POINT: 02d82088
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 163
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_permission_setup;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_1
*/


void OVR_OpenVR_IVRSystem__GetControllerAxisTypeNameFromEnum___ctor(void)

{
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000010;
  
  OVRPermissionsRequester_remove_PermissionGranted_mE435AF3A1F8791C5EC6DE9E9F82F957999E95A73
            (in_stack_00000010);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  OVRPlugin_set_eyeTrackedFoveatedRenderingEnabled_m81E06C57428DBB6F3EC3348FAA2077DB9F2CC1DA
            (1,in_stack_00000000);
  return;
}


