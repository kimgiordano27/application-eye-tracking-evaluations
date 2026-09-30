/*
FUNCTION_NAME: OVRManager$$set_runtimeSettings
ENTRY_POINT: 027d2f04
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


void OVRManager__set_runtimeSettings(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_w8;
  ulong unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int iStack0000000000000008;
  int iStack000000000000000c;
  long in_stack_00000010;
  long in_stack_00000018;
  
  *(undefined1 *)(unaff_x22 + 0x7c) = in_w8;
  if ((unaff_x19 & 0xff0000) == 0) {
    iStack000000000000000c = (int)(unaff_x19 >> 0x20);
  }
  else {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(*(long *)PTR_DAT_03cfca30 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d0278(&stack0x00000008,(uint)unaff_x19 >> 0x10 & 0xff,2);
  }
  if (iStack000000000000000c == 0) {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if ((DAT_04124fb8 & 1) == 0) {
      FUN_01ab69ac(PTR_DAT_03cc5358);
      DAT_04124fb8 = 1;
    }
    if (iStack0000000000000008 < 0) {
      if (-in_stack_00000010 < 1) goto LAB_027d2f9c;
    }
    else if (-1 < in_stack_00000010) {
LAB_027d2f9c:
      if (*(long *)(unaff_x20 + 0x28) == in_stack_00000018) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cd7398);
  uVar1 = thunk_FUN_01a89e68();
  uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cfa078);
  FUN_0277bb94(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cfcad0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar1,uVar2);
}


