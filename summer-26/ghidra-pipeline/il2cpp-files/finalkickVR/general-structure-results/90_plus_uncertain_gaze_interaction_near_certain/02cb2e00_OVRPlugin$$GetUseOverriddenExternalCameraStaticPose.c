/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 02cb2e00
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;functionality_gaze_interaction_hits_5
*/


void OVRPlugin__GetUseOverriddenExternalCameraStaticPose
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *extraout_x0;
  undefined8 uStack0000000000000008;
  undefined4 uStack0000000000000014;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000008 = param_3;
  uStack0000000000000014 = param_2;
  uStack0000000000000018 = param_1;
  if ((CAPI_ovr_AbuseReportOptions_SetReportType_mC5EE3267C68C8920595F996D5A26C8F818AA316B::
       il2cppPInvokeFunc == (code *)0x0) &&
     (__il2cpp_codegen_resolve_pinvoke<void(*)(long,int),18ul,37ul>_char_const____18ul__char_const____37ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                (0xa295d1,0x9e2fc5),
     CAPI_ovr_AbuseReportOptions_SetReportType_mC5EE3267C68C8920595F996D5A26C8F818AA316B::
     il2cppPInvokeFunc = extraout_x0, extraout_x0 == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x7470);
  }
  (*CAPI_ovr_AbuseReportOptions_SetReportType_mC5EE3267C68C8920595F996D5A26C8F818AA316B::
    il2cppPInvokeFunc)(uStack0000000000000018,uStack0000000000000014);
  return;
}


