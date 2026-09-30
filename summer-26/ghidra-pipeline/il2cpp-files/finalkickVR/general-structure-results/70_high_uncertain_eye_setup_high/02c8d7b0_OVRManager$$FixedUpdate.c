/*
FUNCTION_NAME: OVRManager$$FixedUpdate
ENTRY_POINT: 02c8d7b0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 OVRManager__FixedUpdate(long param_1)

{
  undefined4 uVar1;
  long unaff_x29;
  int in_stack_00000010;
  
  if (param_1 != 0) {
    in_stack_00000010 = 0;
    uVar1 = (*FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_IsPinchVisibilityGood_m97DF8F01C1E25A87A211AEB295E5641DCE6D0CB6
              ::il2cppPInvokeFunc)(*(undefined4 *)(unaff_x29 + -4),&stack0x00000010);
    *(bool *)*(undefined8 *)(unaff_x29 + -0x10) = in_stack_00000010 != 0;
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_assert("il2cppPInvokeFunc != NULL",
                "D:/codigo/Final Soccer/FinalSoccer_Quest/Library/Bee/artifacts/Android/il2cppOutput/cpp/Oculus.Interaction__6.cpp"
                ,19999);
}


