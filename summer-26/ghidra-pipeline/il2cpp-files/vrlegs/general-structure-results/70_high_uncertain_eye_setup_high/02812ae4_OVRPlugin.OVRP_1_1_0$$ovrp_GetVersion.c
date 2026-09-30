/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetVersion
ENTRY_POINT: 02812ae4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_1_0__ovrp_GetVersion(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int in_w8;
  long lVar4;
  long unaff_x19;
  int unaff_w21;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000028;
  
  if (in_w8 == 0) {
    thunk_FUN_01a58e78();
  }
  if (unaff_w21 == 0) {
    FUN_0274a490(&stack0x00000018,0);
  }
  else {
    FUN_0274a5b4();
  }
  puVar2 = PTR_DAT_03cfdb18;
  puVar1 = PTR_DAT_03cf5f18;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  in_stack_00000028 = FUN_0274a73c(&stack0x00000018,0);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  FUN_02241190(&stack0x00000008,&stack0x00000028,*(undefined8 *)puVar1);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_02821cb8();
  lVar4 = *(long *)(unaff_x19 + 0x90);
  if (lVar4 != 0) {
    if (uVar3 < *(uint *)(lVar4 + 0x18)) {
      *(undefined2 *)(lVar4 + (long)(int)uVar3 * 2 + 0x20) = *(undefined2 *)(unaff_x19 + 0x80);
      return uVar3 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


