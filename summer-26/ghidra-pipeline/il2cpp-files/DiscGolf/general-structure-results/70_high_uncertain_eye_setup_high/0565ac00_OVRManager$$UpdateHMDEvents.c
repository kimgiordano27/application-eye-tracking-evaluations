/*
FUNCTION_NAME: OVRManager$$UpdateHMDEvents
ENTRY_POINT: 0565ac00
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__UpdateHMDEvents(long param_1)

{
  ulong uVar1;
  long *unaff_x19;
  char in_stack_00000008;
  undefined4 uStack000000000000000c;
  int iStack0000000000000018;
  int iStack000000000000001c;
  
  uStack000000000000000c = 0;
  iStack0000000000000018 = *(int *)(*(long *)(*(long *)(param_1 + 0xb8) + 0x10) + 0x18);
  do {
    if (iStack0000000000000018 <= iStack000000000000001c) {
      return true;
    }
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar1 = FUN_0565ac84((long)&stack0x00000018 + 4,&stack0x00000018,&stack0x0000000c,
                         &stack0x00000008);
    if ((uVar1 & 1) == 0) break;
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar1 = FUN_0565a110();
  } while ((uVar1 & 1) != 0);
  return in_stack_00000008 != '\0';
}


