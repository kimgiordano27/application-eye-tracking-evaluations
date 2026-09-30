/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetButtonIdNameFromEnum$$EndInvoke
ENTRY_POINT: 02d82048
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 180
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_permission_setup;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_1
*/


void OVR_OpenVR_IVRSystem__GetButtonIdNameFromEnum__EndInvoke(ulong param_1)

{
  Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *pAVar1;
  
  if ((param_1 & 1) != 0) {
    pAVar1 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)Method_UnityEngine_UIElements_UxmlFactory<Box>__ctor__);
    Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C
              (pAVar1,(Il2CppObject *)0x0,
               *(long *)
                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_11__
               ,(MethodInfo *)0x0);
    OVRPermissionsRequester_remove_PermissionGranted_mE435AF3A1F8791C5EC6DE9E9F82F957999E95A73
              (pAVar1,0);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_set_eyeTrackedFoveatedRenderingEnabled_m81E06C57428DBB6F3EC3348FAA2077DB9F2CC1DA(1,0);
  }
  return;
}


