/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnInstanceCreate
ENTRY_POINT: 02cd1b48
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnInstanceCreate(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long unaff_x29;
  
  uVar1 = __il2cpp_codegen_resolve_pinvoke<unsigned_int(*)(long),18ul,20ul>_char_const____18ul__char_const____20ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                    (param_1);
  CAPI_ovr_Message_GetType_m423043F7F22673776E081CE00F34D7E17BB1CFF5::il2cppPInvokeFunc =
       (code *)(ulong)uVar1;
  if (CAPI_ovr_Message_GetType_m423043F7F22673776E081CE00F34D7E17BB1CFF5::il2cppPInvokeFunc !=
      (code *)0x0) {
    uVar2 = (*CAPI_ovr_Message_GetType_m423043F7F22673776E081CE00F34D7E17BB1CFF5::il2cppPInvokeFunc)
                      (*(undefined8 *)(unaff_x29 + -8));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x6614);
}


