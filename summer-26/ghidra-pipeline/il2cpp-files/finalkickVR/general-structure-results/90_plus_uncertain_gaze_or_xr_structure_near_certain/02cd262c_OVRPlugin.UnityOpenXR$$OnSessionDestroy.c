/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionDestroy
ENTRY_POINT: 02cd262c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin_UnityOpenXR__OnSessionDestroy(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long unaff_x29;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = param_2;
  if (CAPI_ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable_m463422C50110692CEA501889CB2716350B2BD5F1
      ::il2cppPInvokeFunc == (code *)0x0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(long),18ul,55ul>_char_const____18ul__char_const____55ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      (0xa295d1);
    CAPI_ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable_m463422C50110692CEA501889CB2716350B2BD5F1
    ::il2cppPInvokeFunc = (code *)(ulong)uVar1;
    if (CAPI_ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable_m463422C50110692CEA501889CB2716350B2BD5F1
        ::il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                    ,0x6788);
    }
  }
  iVar2 = (*CAPI_ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable_m463422C50110692CEA501889CB2716350B2BD5F1
            ::il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
  return iVar2 != 0;
}


