/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingSupported
ENTRY_POINT: 02ce0edc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingSupported
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x29;
  undefined8 uStack0000000000000008;
  long in_stack_00000010;
  
  uStack0000000000000008 = param_3;
  if ((MessageWithHttpTransferUpdate__ctor_m50D0F032B3909EA4B8B9DAC90C778FD6D0F766FF::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Interaction_Body_Samples_LockedBodyPose_<>c_<_ctor>b__19_0__);
    MessageWithHttpTransferUpdate__ctor_m50D0F032B3909EA4B8B9DAC90C778FD6D0F766FF::
    s_Il2CppMethodInitialized = 1;
  }
  Message_1__ctor_m5ACA31DA3302C8661D67B7B7A06104676E0B1276
            (*(Message_1_t2E3A186624254F9172A27EC9EE0A4235D2884F14 **)(unaff_x29 + -8),
             in_stack_00000010,
             *(MethodInfo **)
              Method_Oculus_Interaction_Body_Samples_LockedBodyPose_<>c_<_ctor>b__19_0__);
  return;
}


