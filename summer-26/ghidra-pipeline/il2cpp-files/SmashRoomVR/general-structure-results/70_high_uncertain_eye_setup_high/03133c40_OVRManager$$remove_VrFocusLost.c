/*
FUNCTION_NAME: OVRManager$$remove_VrFocusLost
ENTRY_POINT: 03133c40
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_VrFocusLost(long param_1)

{
  long unaff_x19;
  char *unaff_x20;
  long unaff_x25;
  float fVar1;
  undefined8 uVar2;
  float unaff_s14;
  undefined8 in_stack_00000010;
  
  if (param_1 != 0) {
    fVar1 = (float)FUN_038f13a0(param_1,0);
    *(float *)(unaff_x19 + 0x104) = fVar1;
    *(float *)(unaff_x19 + 0x108) = unaff_s14;
    if (*unaff_x20 == '\0') {
      uVar2 = CONCAT44(unaff_s14 - (float)((ulong)in_stack_00000010 >> 0x20),
                       fVar1 - (float)in_stack_00000010);
    }
    else {
      if (DAT_03fed2da == '\0') {
        thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
        DAT_03fed2da = '\x01';
      }
      uVar2 = **(undefined8 **)
                (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8
                );
    }
    *(undefined8 *)(unaff_x25 + 8) = uVar2;
    *(undefined4 *)(unaff_x19 + 0x148) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


