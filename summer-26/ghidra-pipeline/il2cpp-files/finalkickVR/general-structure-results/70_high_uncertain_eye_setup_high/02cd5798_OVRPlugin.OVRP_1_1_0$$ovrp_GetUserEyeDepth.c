/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeDepth
ENTRY_POINT: 02cd5798
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeDepth(long param_1)

{
  uint uVar1;
  int iVar2;
  long unaff_x29;
  
  if (*(long *)(param_1 + 0x9a0) == 0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(long),18ul,30ul>_char_const____18ul__char_const____30ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      (0xa295d1);
    CAPI_ovr_PurchaseArray_HasNextPage_m09F50FE0C3A1FBBAD83B193C43E8B71C69408FC2::il2cppPInvokeFunc
         = (code *)(ulong)uVar1;
    if (CAPI_ovr_PurchaseArray_HasNextPage_m09F50FE0C3A1FBBAD83B193C43E8B71C69408FC2::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                    ,0x6e05);
    }
  }
  iVar2 = (*CAPI_ovr_PurchaseArray_HasNextPage_m09F50FE0C3A1FBBAD83B193C43E8B71C69408FC2::
            il2cppPInvokeFunc)(*(undefined8 *)(unaff_x29 + -8));
  return iVar2 != 0;
}


