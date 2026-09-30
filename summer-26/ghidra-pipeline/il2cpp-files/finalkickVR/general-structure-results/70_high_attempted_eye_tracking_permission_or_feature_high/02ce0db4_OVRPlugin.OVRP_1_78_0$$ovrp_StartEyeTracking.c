/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartEyeTracking
ENTRY_POINT: 02ce0db4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking(void)

{
  long unaff_x29;
  long in_stack_00000010;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_Oculus_Interaction_ListLayout_<>c_<_ctor>b__11_1__);
  MessageWithUserCapabilityList__ctor_m68B5BF01D0327AC3E13FEEA1EC8FA5D9592E26F8::
  s_Il2CppMethodInitialized = 1;
  Message_1__ctor_m7F2F5511A28CA118DD4E422BC8D6624E4E7F3FBF
            (*(Message_1_t44A9B1EDD2E1804233EB469EC294A4654259C084 **)(unaff_x29 + -8),
             in_stack_00000010,
             *(MethodInfo **)Method_Oculus_Interaction_ListLayout_<>c_<_ctor>b__11_1__);
  return;
}


