/*
FUNCTION_NAME: OVRBody_StartBodyTracking_m3B34597CBAD1D166AE2FB29C0AAD47CDEEDA0833
ENTRY_POINT: 02d35ec8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;validity_or_gating_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_3
*/


undefined1 OVRBody_StartBodyTracking_m3B34597CBAD1D166AE2FB29C0AAD47CDEEDA0833(long param_1)

{
  byte bVar1;
  undefined1 local_11;
  
  if ((OVRBody_StartBodyTracking_m3B34597CBAD1D166AE2FB29C0AAD47CDEEDA0833::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Interaction_Locomotion_TeleportInteractor_<>c_<_ctor>b__36_0__
              );
    OVRBody_StartBodyTracking_m3B34597CBAD1D166AE2FB29C0AAD47CDEEDA0833::s_Il2CppMethodInitialized =
         1;
  }
  bVar1 = OVRPermissionsRequester_IsPermissionGranted_m0F333D018C92051B8846EE686B5418BA728CF3D0(1,0)
  ;
  if ((bVar1 & 1) == 0) {
    OVRPermissionsRequester_remove_PermissionGranted_mE435AF3A1F8791C5EC6DE9E9F82F957999E95A73
              (*(undefined8 *)(param_1 + 0x50));
    OVRPermissionsRequester_add_PermissionGranted_mB8BA0338FC764BFB8C104B82281E01C4C69980BA
              (*(undefined8 *)(param_1 + 0x50),0);
    local_11 = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    bVar1 = OVRPlugin_StartBodyTracking_m3B06EE3A599FD2B1808559D4AFB03D2D3A26625C(0);
    if ((bVar1 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_Oculus_Interaction_Locomotion_TeleportInteractor_<>c_<_ctor>b__36_0__,0);
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
  }
  return local_11;
}


