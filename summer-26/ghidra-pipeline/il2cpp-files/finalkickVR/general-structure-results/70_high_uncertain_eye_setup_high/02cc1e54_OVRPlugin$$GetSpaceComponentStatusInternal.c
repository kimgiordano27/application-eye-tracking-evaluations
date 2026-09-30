/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatusInternal
ENTRY_POINT: 02cc1e54
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceComponentStatusInternal(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x29;
  
  *(undefined8 *)(param_1 + 0x9d8) = param_2;
  if (*(long *)(param_1 + 0x9d8) != 0) {
    uVar1 = (*CAPI_ovr_NetSync_SetVoipChannelCfg_Native_m96A9226AD21F12D53EB15F2DB889E58ECF76E7C0::
              il2cppPInvokeFunc)
                      (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x10),
                       *(undefined8 *)(unaff_x29 + -0x18),*(byte *)(unaff_x29 + -0x19) & 1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Platform.cpp"
                ,0x44e0);
}


