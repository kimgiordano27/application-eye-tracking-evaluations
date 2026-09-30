/*
FUNCTION_NAME: OVRP_1_78_0_ovrp_StopEyeTracking_mC89AE89B746636D71FC51B58F933FE5DB9525711
ENTRY_POINT: 02de0e48
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_6;ui_or_gameplay_sink_hits_6;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


undefined4 OVRP_1_78_0_ovrp_StopEyeTracking_mC89AE89B746636D71FC51B58F933FE5DB9525711(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (OVRP_1_78_0_ovrp_StopEyeTracking_mC89AE89B746636D71FC51B58F933FE5DB9525711::il2cppPInvokeFunc
      == (code *)0x0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(),10ul,21ul>_char_const____10ul__char_const____21ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      ();
    OVRP_1_78_0_ovrp_StopEyeTracking_mC89AE89B746636D71FC51B58F933FE5DB9525711::il2cppPInvokeFunc =
         (code *)(ulong)uVar1;
    if (OVRP_1_78_0_ovrp_StopEyeTracking_mC89AE89B746636D71FC51B58F933FE5DB9525711::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.VR__4.cpp"
                    ,0x5f99);
    }
  }
  uVar2 = (*OVRP_1_78_0_ovrp_StopEyeTracking_mC89AE89B746636D71FC51B58F933FE5DB9525711::
            il2cppPInvokeFunc)();
  return uVar2;
}


