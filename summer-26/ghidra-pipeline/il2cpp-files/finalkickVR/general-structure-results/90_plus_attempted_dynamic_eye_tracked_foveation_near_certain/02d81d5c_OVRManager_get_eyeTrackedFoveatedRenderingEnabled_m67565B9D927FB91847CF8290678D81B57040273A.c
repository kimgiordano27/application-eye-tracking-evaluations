/*
FUNCTION_NAME: OVRManager_get_eyeTrackedFoveatedRenderingEnabled_m67565B9D927FB91847CF8290678D81B57040273A
ENTRY_POINT: 02d81d5c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 136
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_15;strong_foveation_hits_5;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


byte OVRManager_get_eyeTrackedFoveatedRenderingEnabled_m67565B9D927FB91847CF8290678D81B57040273A
               (void)

{
  byte bVar1;
  
  if ((OVRManager_get_eyeTrackedFoveatedRenderingEnabled_m67565B9D927FB91847CF8290678D81B57040273A::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_get_eyeTrackedFoveatedRenderingEnabled_m67565B9D927FB91847CF8290678D81B57040273A::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_get_eyeTrackedFoveatedRenderingEnabled_m2529D472675C5BB4923708C39FC6F0602B63F059
                    (0);
  return bVar1 & 1;
}


