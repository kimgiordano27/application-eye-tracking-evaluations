/*
FUNCTION_NAME: OVRP_1_78_0_ovrp_StartEyeTracking_mD174367BC40150FE423DE5EEEE7ED18310D4D104
ENTRY_POINT: 02de0db4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 93
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;ui_interaction;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_6;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


undefined4 OVRP_1_78_0_ovrp_StartEyeTracking_mD174367BC40150FE423DE5EEEE7ED18310D4D104(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (OVRP_1_78_0_ovrp_StartEyeTracking_mD174367BC40150FE423DE5EEEE7ED18310D4D104::il2cppPInvokeFunc
      == (code *)0x0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(),10ul,22ul>_char_const____10ul__char_const____22ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      ();
    OVRP_1_78_0_ovrp_StartEyeTracking_mD174367BC40150FE423DE5EEEE7ED18310D4D104::il2cppPInvokeFunc =
         (code *)(ulong)uVar1;
    if (OVRP_1_78_0_ovrp_StartEyeTracking_mD174367BC40150FE423DE5EEEE7ED18310D4D104::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.VR__4.cpp"
                    ,0x5f84);
    }
  }
  uVar2 = (*OVRP_1_78_0_ovrp_StartEyeTracking_mD174367BC40150FE423DE5EEEE7ED18310D4D104::
            il2cppPInvokeFunc)();
  return uVar2;
}


