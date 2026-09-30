/*
FUNCTION_NAME: Internal_SetEyeTrackedFoveatedRenderingEnabled_m1F12ECE17668051EF19892A0BA22BABF5B46FA89
ENTRY_POINT: 0421b018
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;ui_interaction;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_6;ui_or_gameplay_sink_hits_5;strong_foveation_hits_6;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Internal_SetEyeTrackedFoveatedRenderingEnabled_m1F12ECE17668051EF19892A0BA22BABF5B46FA89
               (byte param_1)

{
  code *extraout_x0;
  
  if ((Internal_SetEyeTrackedFoveatedRenderingEnabled_m1F12ECE17668051EF19892A0BA22BABF5B46FA89::
       il2cppPInvokeFunc == (code *)0x0) &&
     (__il2cpp_codegen_resolve_pinvoke<void(*)(signed_char),15ul,38ul>_char_const____15ul__char_const____38ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                ("OculusXRPlugin","SetEyeTrackedFoveatedRenderingEnabled",0,2,4,0),
     Internal_SetEyeTrackedFoveatedRenderingEnabled_m1F12ECE17668051EF19892A0BA22BABF5B46FA89::
     il2cppPInvokeFunc = extraout_x0, extraout_x0 == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_assert("il2cppPInvokeFunc != NULL",
                  "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Unity.XR.Oculus.cpp"
                  ,0x1fdc);
  }
  (*Internal_SetEyeTrackedFoveatedRenderingEnabled_m1F12ECE17668051EF19892A0BA22BABF5B46FA89::
    il2cppPInvokeFunc)(param_1 & 1);
  return;
}


