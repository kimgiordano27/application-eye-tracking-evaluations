/*
FUNCTION_NAME: OVRP_1_78_0_ovrp_GetFoveationEyeTracked_mD6D30156DB71F388B5E18BFE11C738512062A4A0
ENTRY_POINT: 02de0a24
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 149
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;ui_interaction;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_1;ui_or_gameplay_sink_hits_6;strong_foveation_hits_6;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined4
OVRP_1_78_0_ovrp_GetFoveationEyeTracked_mD6D30156DB71F388B5E18BFE11C738512062A4A0
          (undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (OVRP_1_78_0_ovrp_GetFoveationEyeTracked_mD6D30156DB71F388B5E18BFE11C738512062A4A0::
      il2cppPInvokeFunc == (code *)0x0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(int*),10ul,28ul>_char_const____10ul__char_const____28ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      ((int *)"OVRPlugin");
    OVRP_1_78_0_ovrp_GetFoveationEyeTracked_mD6D30156DB71F388B5E18BFE11C738512062A4A0::
    il2cppPInvokeFunc = (code *)(ulong)uVar1;
    if (OVRP_1_78_0_ovrp_GetFoveationEyeTracked_mD6D30156DB71F388B5E18BFE11C738512062A4A0::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.VR__4.cpp"
                    ,0x5f06);
    }
  }
  uVar2 = (*OVRP_1_78_0_ovrp_GetFoveationEyeTracked_mD6D30156DB71F388B5E18BFE11C738512062A4A0::
            il2cppPInvokeFunc)(param_1);
  return uVar2;
}


