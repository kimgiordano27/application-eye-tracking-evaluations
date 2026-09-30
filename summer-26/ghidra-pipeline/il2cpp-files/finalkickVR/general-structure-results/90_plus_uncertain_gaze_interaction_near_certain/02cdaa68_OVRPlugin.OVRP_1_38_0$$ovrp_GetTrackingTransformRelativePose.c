/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetTrackingTransformRelativePose
ENTRY_POINT: 02cdaa68
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;functionality_gaze_interaction_hits_3
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose(void)

{
  code *extraout_x0;
  long unaff_x29;
  undefined8 in_stack_00000010;
  
  __il2cpp_codegen_resolve_pinvoke<void(*)(long,long),18ul,51ul>_char_const____18ul__char_const____51ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
            (0xa295d1,0xa47a94);
  CAPI_ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native_m08DE68899B833594B330BC5FE4D0B899F12BF011
  ::il2cppPInvokeFunc = extraout_x0;
  if (extraout_x0 != (code *)0x0) {
    (*extraout_x0)(*(undefined8 *)(unaff_x29 + -8),in_stack_00000010);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x7ab8);
}


