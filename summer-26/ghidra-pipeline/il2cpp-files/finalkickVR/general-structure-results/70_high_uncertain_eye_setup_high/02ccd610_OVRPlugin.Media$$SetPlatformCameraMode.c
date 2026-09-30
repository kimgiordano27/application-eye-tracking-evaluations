/*
FUNCTION_NAME: OVRPlugin.Media$$SetPlatformCameraMode
ENTRY_POINT: 02ccd610
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__SetPlatformCameraMode(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined8 uStack0000000000000010;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  uStack0000000000000010 = param_2;
  if ((CAPI_ovr_Leaderboard_GetID_m2959F1ACBD7BC927A47386FF03FC9C8DD280728D::il2cppPInvokeFunc ==
       (code *)0x0) &&
     (CAPI_ovr_Leaderboard_GetID_m2959F1ACBD7BC927A47386FF03FC9C8DD280728D::il2cppPInvokeFunc =
           (code *)__il2cpp_codegen_resolve_pinvoke<unsigned_long(*)(long),18ul,22ul>_char_const____18ul__char_const____22ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                             (0xa295d1),
     CAPI_ovr_Leaderboard_GetID_m2959F1ACBD7BC927A47386FF03FC9C8DD280728D::il2cppPInvokeFunc ==
     (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                  ,0x5cff);
  }
  uVar1 = (*CAPI_ovr_Leaderboard_GetID_m2959F1ACBD7BC927A47386FF03FC9C8DD280728D::il2cppPInvokeFunc)
                    (*(undefined8 *)(unaff_x29 + -8));
  return uVar1;
}


