/*
FUNCTION_NAME: OVRManager_get_eyeTrackedFoveatedRenderingSupported_mDA31E46BA6B2DACE4DE3691200DD98F5E6BBAB9A
ENTRY_POINT: 02d81cf0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 136
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_10;strong_foveation_hits_5;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


byte OVRManager_get_eyeTrackedFoveatedRenderingSupported_mDA31E46BA6B2DACE4DE3691200DD98F5E6BBAB9A
               (void)

{
  byte bVar1;
  
  if ((OVRManager_get_eyeTrackedFoveatedRenderingSupported_mDA31E46BA6B2DACE4DE3691200DD98F5E6BBAB9A
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_get_eyeTrackedFoveatedRenderingSupported_mDA31E46BA6B2DACE4DE3691200DD98F5E6BBAB9A::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_get_eyeTrackedFoveatedRenderingSupported_mA1383C85B7A1E0C0995777E55769811E78646C27
                    (0);
  return bVar1 & 1;
}


