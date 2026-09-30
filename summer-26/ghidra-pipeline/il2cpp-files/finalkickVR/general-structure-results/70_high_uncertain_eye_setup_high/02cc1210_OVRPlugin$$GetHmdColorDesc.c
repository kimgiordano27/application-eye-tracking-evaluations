/*
FUNCTION_NAME: OVRPlugin$$GetHmdColorDesc
ENTRY_POINT: 02cc1210
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetHmdColorDesc(void)

{
  undefined8 uVar1;
  
  CAPI_ovr_Livestreaming_StartPartyStream_mDAC273048C3CC4B9D5FC02FA0C195F05C9055055::
  il2cppPInvokeFunc =
       (code *)__il2cpp_codegen_resolve_pinvoke<unsigned_long(*)(),18ul,35ul>_char_const____18ul__char_const____35ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                         ();
  if (CAPI_ovr_Livestreaming_StartPartyStream_mDAC273048C3CC4B9D5FC02FA0C195F05C9055055::
      il2cppPInvokeFunc != (code *)0x0) {
    uVar1 = (*CAPI_ovr_Livestreaming_StartPartyStream_mDAC273048C3CC4B9D5FC02FA0C195F05C9055055::
              il2cppPInvokeFunc)();
    return uVar1;
  }
                    /* try { // try from 02cc1240 to 02dc1293 has its CatchHandler @ 02cc12b0 */
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x4351);
}


