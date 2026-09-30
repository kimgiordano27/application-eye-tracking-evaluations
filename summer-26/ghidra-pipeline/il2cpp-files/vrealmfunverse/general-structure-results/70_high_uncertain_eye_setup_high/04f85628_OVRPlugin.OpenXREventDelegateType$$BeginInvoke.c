/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$BeginInvoke
ENTRY_POINT: 04f85628
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OpenXREventDelegateType__BeginInvoke(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long in_x11;
  undefined8 *unaff_x19;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 6) * 0x10 + 0x138);
LAB_04f8565c:
      (*(code *)*puVar1)(&stack0x00000000 + 4);
      unaff_x19[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
      *unaff_x19 = in_stack_00000000._4_8_;
      *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000018;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      return;
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_02b7654c();
      goto LAB_04f8565c;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


