/*
FUNCTION_NAME: OVRP_1_78_0_ovrp_GetEyeTrackingEnabled_mC33389CE0CBC0F681048F08A5FDE104C72F6A689
ENTRY_POINT: 02de135c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 120
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_13;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_6;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined4
OVRP_1_78_0_ovrp_GetEyeTrackingEnabled_mC33389CE0CBC0F681048F08A5FDE104C72F6A689(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (OVRP_1_78_0_ovrp_GetEyeTrackingEnabled_mC33389CE0CBC0F681048F08A5FDE104C72F6A689::
      il2cppPInvokeFunc == (code *)0x0) {
    uVar1 = __il2cpp_codegen_resolve_pinvoke<int(*)(int*),10ul,27ul>_char_const____10ul__char_const____27ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
                      ((int *)"OVRPlugin");
    OVRP_1_78_0_ovrp_GetEyeTrackingEnabled_mC33389CE0CBC0F681048F08A5FDE104C72F6A689::
    il2cppPInvokeFunc = (code *)(ulong)uVar1;
    if (OVRP_1_78_0_ovrp_GetEyeTrackingEnabled_mC33389CE0CBC0F681048F08A5FDE104C72F6A689::
        il2cppPInvokeFunc == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_assert("il2cppPInvokeFunc != NULL",
                    "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.VR__4.cpp"
                    ,0x6041);
    }
  }
  uVar2 = (*OVRP_1_78_0_ovrp_GetEyeTrackingEnabled_mC33389CE0CBC0F681048F08A5FDE104C72F6A689::
            il2cppPInvokeFunc)(param_1);
  return uVar2;
}


