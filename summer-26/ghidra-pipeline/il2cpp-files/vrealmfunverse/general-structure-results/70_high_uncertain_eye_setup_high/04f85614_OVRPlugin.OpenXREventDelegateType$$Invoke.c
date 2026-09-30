/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$Invoke
ENTRY_POINT: 04f85614
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


void OVRPlugin_OpenXREventDelegateType__Invoke(long param_1)

{
  undefined8 *puVar1;
  long in_x9;
  long *in_x10;
  int *piVar2;
  undefined8 *unaff_x19;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  if (in_x9 != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar2 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar2 + 6) * 0x10 + 0x138);
        goto LAB_04f8565c;
      }
      in_x9 = in_x9 + -1;
      piVar2 = piVar2 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_02b7654c();
LAB_04f8565c:
  (*(code *)*puVar1)(&stack0x00000000 + 4);
  unaff_x19[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
  *unaff_x19 = in_stack_00000000._4_8_;
  *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000018;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
  return;
}


