/*
FUNCTION_NAME: Internal_GetEyeTrackedFoveatedRenderingSupported_mA2F9106F5BD6571BB7D19D2FFDF61EF36D33F0E5
ENTRY_POINT: 0421aed8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;ui_interaction;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_6;ui_or_gameplay_sink_hits_6;strong_foveation_hits_6;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool Internal_GetEyeTrackedFoveatedRenderingSupported_mA2F9106F5BD6571BB7D19D2FFDF61EF36D33F0E5
               (void)

{
  byte bVar1;
  char cVar2;
  
  if (Internal_GetEyeTrackedFoveatedRenderingSupported_mA2F9106F5BD6571BB7D19D2FFDF61EF36D33F0E5::
      il2cppPInvokeFunc == (code *)0x0) {
    bVar1 = __il2cpp_codegen_resolve_pinvoke<unsigned_char(*)(),15ul,40ul>_char_const____15ul__char_const____40ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      ();
    Internal_GetEyeTrackedFoveatedRenderingSupported_mA2F9106F5BD6571BB7D19D2FFDF61EF36D33F0E5::
    il2cppPInvokeFunc = (code *)(ulong)bVar1;
    if (Internal_GetEyeTrackedFoveatedRenderingSupported_mA2F9106F5BD6571BB7D19D2FFDF61EF36D33F0E5::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Unity.XR.Oculus.cpp"
                    ,0x1fb2);
    }
  }
  cVar2 = (*Internal_GetEyeTrackedFoveatedRenderingSupported_mA2F9106F5BD6571BB7D19D2FFDF61EF36D33F0E5
            ::il2cppPInvokeFunc)();
  return cVar2 != '\0';
}


