/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetHeadsetControllerPose
ENTRY_POINT: 02cd01c0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;functionality_gaze_interaction_hits_5
*/


undefined8 OVRPlugin_OVRP_1_49_0__ovrp_Media_SetHeadsetControllerPose(long param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  
  CAPI_ovr_Message_GetGroupPresenceLeaveIntent_m76070D296DB205E7E67A31435892E3B570675E4A::
  il2cppPInvokeFunc =
       (code *)__il2cpp_codegen_resolve_pinvoke<long(*)(long),18ul,40ul>_char_const____18ul__char_const____40ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                         (param_1);
  if (CAPI_ovr_Message_GetGroupPresenceLeaveIntent_m76070D296DB205E7E67A31435892E3B570675E4A::
      il2cppPInvokeFunc != (code *)0x0) {
    uVar1 = (*CAPI_ovr_Message_GetGroupPresenceLeaveIntent_m76070D296DB205E7E67A31435892E3B570675E4A
              ::il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x62ba);
}


