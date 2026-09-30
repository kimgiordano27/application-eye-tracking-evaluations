/*
FUNCTION_NAME: OVREyeGaze_StartEyeTracking_m867ECFBFE39BE0F96982305ADED2641E7BA9CC71
ENTRY_POINT: 02d44598
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 146
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_9;validity_or_gating_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_3
*/


undefined1 OVREyeGaze_StartEyeTracking_m867ECFBFE39BE0F96982305ADED2641E7BA9CC71(long param_1)

{
  byte bVar1;
  undefined1 local_11;
  
  if ((OVREyeGaze_StartEyeTracking_m867ECFBFE39BE0F96982305ADED2641E7BA9CC71::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__);
    OVREyeGaze_StartEyeTracking_m867ECFBFE39BE0F96982305ADED2641E7BA9CC71::s_Il2CppMethodInitialized
         = 1;
  }
  bVar1 = OVRPermissionsRequester_IsPermissionGranted_m0F333D018C92051B8846EE686B5418BA728CF3D0(2,0)
  ;
  if ((bVar1 & 1) == 0) {
    OVRPermissionsRequester_remove_PermissionGranted_mE435AF3A1F8791C5EC6DE9E9F82F957999E95A73
              (*(undefined8 *)(param_1 + 0x68));
    OVRPermissionsRequester_add_PermissionGranted_mB8BA0338FC764BFB8C104B82281E01C4C69980BA
              (*(undefined8 *)(param_1 + 0x68),0);
    local_11 = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    bVar1 = OVRPlugin_StartEyeTracking_mE0A988A61D58DC9786A0F77AEB2AC96F385A8F5D(0);
    if ((bVar1 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__,0);
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
  }
  return local_11;
}


