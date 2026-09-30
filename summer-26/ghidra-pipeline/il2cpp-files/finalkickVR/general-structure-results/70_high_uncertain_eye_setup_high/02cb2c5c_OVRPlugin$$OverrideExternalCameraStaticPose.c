/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 02cb2c5c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__OverrideExternalCameraStaticPose
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_w8;
  undefined8 uVar1;
  long unaff_x29;
  byte bStack000000000000000f;
  undefined8 uStack0000000000000018;
  
  *(undefined1 *)(unaff_x29 + -9) = in_w8;
  uStack0000000000000018 = param_3;
  if ((AbuseReportOptions_SetPreventPeopleChooser_m9440115678BAEB1D85590D56D1777DC43B849F32::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    AbuseReportOptions_SetPreventPeopleChooser_m9440115678BAEB1D85590D56D1777DC43B849F32::
    s_Il2CppMethodInitialized = 1;
  }
  uVar1 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x10);
  bStack000000000000000f = *(byte *)(unaff_x29 + -9) & 1;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__)
  ;
  CAPI_ovr_AbuseReportOptions_SetPreventPeopleChooser_m1767D45604307789FBC3FD3572B05B72906A5704
            (uVar1,bStack000000000000000f & 1,0);
  return;
}


