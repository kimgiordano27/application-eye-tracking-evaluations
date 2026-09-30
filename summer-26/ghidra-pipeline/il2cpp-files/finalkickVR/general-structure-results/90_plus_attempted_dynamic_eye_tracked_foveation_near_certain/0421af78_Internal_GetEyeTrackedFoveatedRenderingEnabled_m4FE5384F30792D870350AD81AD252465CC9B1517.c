/*
FUNCTION_NAME: Internal_GetEyeTrackedFoveatedRenderingEnabled_m4FE5384F30792D870350AD81AD252465CC9B1517
ENTRY_POINT: 0421af78
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;ui_interaction;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;ui_or_gameplay_sink_hits_6;strong_foveation_hits_6;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool Internal_GetEyeTrackedFoveatedRenderingEnabled_m4FE5384F30792D870350AD81AD252465CC9B1517(void)

{
  byte bVar1;
  char cVar2;
  
  if (Internal_GetEyeTrackedFoveatedRenderingEnabled_m4FE5384F30792D870350AD81AD252465CC9B1517::
      il2cppPInvokeFunc == (code *)0x0) {
    bVar1 = __il2cpp_codegen_resolve_pinvoke<unsigned_char(*)(),15ul,38ul>_char_const____15ul__char_const____38ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      ();
    Internal_GetEyeTrackedFoveatedRenderingEnabled_m4FE5384F30792D870350AD81AD252465CC9B1517::
    il2cppPInvokeFunc = (code *)(ulong)bVar1;
    if (Internal_GetEyeTrackedFoveatedRenderingEnabled_m4FE5384F30792D870350AD81AD252465CC9B1517::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Unity.XR.Oculus.cpp"
                    ,0x1fc7);
    }
  }
  cVar2 = (*Internal_GetEyeTrackedFoveatedRenderingEnabled_m4FE5384F30792D870350AD81AD252465CC9B1517
            ::il2cppPInvokeFunc)();
  return cVar2 != '\0';
}


