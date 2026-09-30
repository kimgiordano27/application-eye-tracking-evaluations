/*
FUNCTION_NAME: Utils_set_eyeTrackedFoveatedRenderingEnabled_m19C73A9BFC6BB8842E194AC426F38341BC1971F5
ENTRY_POINT: 04214500
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 199
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_15;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;strong_foveation_hits_7;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_permission_setup;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_1
*/


void Utils_set_eyeTrackedFoveatedRenderingEnabled_m19C73A9BFC6BB8842E194AC426F38341BC1971F5
               (byte param_1)

{
  byte bVar1;
  void *pvVar2;
  Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *pAVar3;
  
  if ((Utils_set_eyeTrackedFoveatedRenderingEnabled_m19C73A9BFC6BB8842E194AC426F38341BC1971F5::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_UxmlFactory<Box>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_IO_Stream_SynchronousAsyncResult_<>c_<get_AsyncWaitHandle>b__12_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Utils_PermissionGrantedCallback_mB3CDE112185C4D4A7F910AA6FB7971326D72A9CF_RuntimeMethod_var_048d3900
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_ONSPPropagationMaterial_Spectrum_<>c_<get_Item>b__3_1__);
    Utils_set_eyeTrackedFoveatedRenderingEnabled_m19C73A9BFC6BB8842E194AC426F38341BC1971F5::
    s_Il2CppMethodInitialized = 1;
  }
  bVar1 = Utils_get_eyeTrackedFoveatedRenderingSupported_m1B48244FA8D6AE0A727028A284984F9346A9825B
                    (0);
  if ((bVar1 & 1) != 0) {
    if ((param_1 & 1) == 0) {
      NativeMethods_SetEyeTrackedFoveatedRenderingEnabled_m2484440C425D023068495D3D34EB55094BA28EEB
                (0,0);
    }
    else {
      bVar1 = Utils_IsEyeTrackingPermissionGranted_mEC6A940098C8605A71C58CD5F4E1E175178631AC(0);
      if ((bVar1 & 1) == 0) {
        pvVar2 = (void *)il2cpp_codegen_object_new
                                   (*(Il2CppClass **)
                                     Method_System_IO_Stream_SynchronousAsyncResult_<>c_<get_AsyncWaitHandle>b__12_0__
                                   );
        PermissionCallbacks__ctor_m91B14BBBC8913C131E400BA0D13576822AAE7A75(pvVar2);
        pAVar3 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A *)
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)Method_UnityEngine_UIElements_UxmlFactory<Box>__ctor__)
        ;
        Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C
                  (pAVar3,(Il2CppObject *)0x0,
                   *(long *)
                    PTR_Utils_PermissionGrantedCallback_mB3CDE112185C4D4A7F910AA6FB7971326D72A9CF_RuntimeMethod_var_048d3900
                   ,(MethodInfo *)0x0);
        NullCheck(pvVar2);
        PermissionCallbacks_add_PermissionGranted_m74335D4200D9B1A7C80AB9C133F95C61FCDCDF89
                  (pvVar2,pAVar3,0);
        Permission_RequestUserPermission_m7B8E817C03FDB5C99F22002C7181F27BF031F117
                  (*(undefined8 *)Method_ONSPPropagationMaterial_Spectrum_<>c_<get_Item>b__3_1__,
                   pvVar2,0);
      }
      else {
        NativeMethods_SetEyeTrackedFoveatedRenderingEnabled_m2484440C425D023068495D3D34EB55094BA28EEB
                  (param_1 & 1,0);
      }
    }
  }
  return;
}


