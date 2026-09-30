/*
FUNCTION_NAME: OVRPlugin.OVRP_1_54_0$$ovrp_Media_SetPlatformInitialized
ENTRY_POINT: 02ccd3d4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_54_0__ovrp_Media_SetPlatformInitialized(long param_1)

{
  uint uVar1;
  int iVar2;
  long unaff_x29;
  
  uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(long),18ul,42ul>_char_const____18ul__char_const____42ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                    (param_1);
  CAPI_ovr_LaunchUnblockFlowResult_GetDidUnblock_m772837816FB92D67F633612AC46C483D8D4FDFD8::
  il2cppPInvokeFunc = (code *)(ulong)uVar1;
  if (CAPI_ovr_LaunchUnblockFlowResult_GetDidUnblock_m772837816FB92D67F633612AC46C483D8D4FDFD8::
      il2cppPInvokeFunc != (code *)0x0) {
    iVar2 = (*CAPI_ovr_LaunchUnblockFlowResult_GetDidUnblock_m772837816FB92D67F633612AC46C483D8D4FDFD8
              ::il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
    return iVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x5cae);
}


