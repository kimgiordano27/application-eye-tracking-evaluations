/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$EndInvoke
ENTRY_POINT: 073ce860
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__EndInvoke(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x19;
  long lVar2;
  long unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  FUN_085e9668(param_1,0);
  if (*(long *)(unaff_x20 + 200) != 0) {
    lVar2 = *unaff_x19;
    uVar1 = FUN_085dbb5c(*(long *)(unaff_x20 + 200),0);
    FUN_0737f268(uVar1,&stack0x00000040,0);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x34) = uStack0000000000000014;
      *(ulong *)(lVar2 + 0x2c) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
      *(undefined8 *)(lVar2 + 0x28) = in_stack_00000008;
      *(undefined8 *)(lVar2 + 0x20) = in_stack_00000000;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


