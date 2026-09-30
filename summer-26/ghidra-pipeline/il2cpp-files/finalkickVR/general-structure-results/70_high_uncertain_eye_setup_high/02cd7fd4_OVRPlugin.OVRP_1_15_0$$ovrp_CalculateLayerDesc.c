/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_CalculateLayerDesc
ENTRY_POINT: 02cd7fd4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_15_0__ovrp_CalculateLayerDesc(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long unaff_x29;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = param_2;
  if (CAPI_ovr_UserDataStoreUpdateResponse_GetSuccess_m40523D8F585A3F2208962858D93714C34D38A631::
      il2cppPInvokeFunc == (code *)0x0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(long),18ul,43ul>_char_const____18ul__char_const____43ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      (0xa295d1);
    CAPI_ovr_UserDataStoreUpdateResponse_GetSuccess_m40523D8F585A3F2208962858D93714C34D38A631::
    il2cppPInvokeFunc = (code *)(ulong)uVar1;
    if (CAPI_ovr_UserDataStoreUpdateResponse_GetSuccess_m40523D8F585A3F2208962858D93714C34D38A631::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                    ,0x734e);
    }
  }
  iVar2 = (*CAPI_ovr_UserDataStoreUpdateResponse_GetSuccess_m40523D8F585A3F2208962858D93714C34D38A631
            ::il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
  return iVar2 != 0;
}


