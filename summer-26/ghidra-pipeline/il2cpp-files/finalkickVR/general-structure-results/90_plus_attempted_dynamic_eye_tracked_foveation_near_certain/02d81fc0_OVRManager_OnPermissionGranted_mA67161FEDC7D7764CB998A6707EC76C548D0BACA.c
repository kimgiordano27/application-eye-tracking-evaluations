/*
FUNCTION_NAME: OVRManager_OnPermissionGranted_mA67161FEDC7D7764CB998A6707EC76C548D0BACA
ENTRY_POINT: 02d81fc0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 180
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_15;validity_or_gating_hits_8;telemetry_or_network_hits_2;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_permission_setup;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager_OnPermissionGranted_mA67161FEDC7D7764CB998A6707EC76C548D0BACA(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *pAVar3;
  
  if ((OVRManager_OnPermissionGranted_mA67161FEDC7D7764CB998A6707EC76C548D0BACA::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_UxmlFactory<Box>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_11__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_OnPermissionGranted_mA67161FEDC7D7764CB998A6707EC76C548D0BACA::
    s_Il2CppMethodInitialized = 1;
  }
  uVar2 = OVRPermissionsRequester_GetPermissionId_m4BB21C8C9EEDA33445C70B6FEC8AB04FB551CD8B(2);
  bVar1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(param_1,uVar2,0);
  if ((bVar1 & 1) != 0) {
    pAVar3 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)Method_UnityEngine_UIElements_UxmlFactory<Box>__ctor__);
    Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C
              (pAVar3,(Il2CppObject *)0x0,
               *(long *)
                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_11__
               ,(MethodInfo *)0x0);
    OVRPermissionsRequester_remove_PermissionGranted_mE435AF3A1F8791C5EC6DE9E9F82F957999E95A73
              (pAVar3,0);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_set_eyeTrackedFoveatedRenderingEnabled_m81E06C57428DBB6F3EC3348FAA2077DB9F2CC1DA(1,0);
  }
  return;
}


