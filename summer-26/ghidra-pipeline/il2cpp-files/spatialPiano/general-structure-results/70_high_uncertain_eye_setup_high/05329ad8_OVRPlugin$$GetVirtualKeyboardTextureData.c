/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardTextureData
ENTRY_POINT: 05329ad8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetVirtualKeyboardTextureData(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 uVar2;
  long *unaff_x21;
  
  if (param_1 != 0) {
    FUN_060bb2a0(param_1,0,0);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar1 = FUN_060f078c(uVar2,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_05328fa4(*(long *)(unaff_x19 + 0x28),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


