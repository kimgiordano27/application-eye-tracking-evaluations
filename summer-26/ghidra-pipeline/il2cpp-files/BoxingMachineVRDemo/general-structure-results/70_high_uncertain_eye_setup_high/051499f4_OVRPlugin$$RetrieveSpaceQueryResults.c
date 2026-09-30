/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 051499f4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__RetrieveSpaceQueryResults(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  int unaff_w20;
  long unaff_x25;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  FUN_050da398();
  if (unaff_w20 < 0x2b) {
    if (unaff_w20 < 0xd) {
      if (unaff_w20 == 0) goto LAB_05149ce0;
      if (unaff_w20 == 0xc) goto LAB_05149c34;
    }
    else {
      if (unaff_w20 == 0x1a) goto LAB_05149cb4;
      if (unaff_w20 == 0x2a) goto LAB_05149b9c;
    }
LAB_05149f6c:
    *unaff_x19 = 0;
    thunk_FUN_02dd37b4();
    uVar1 = 0;
  }
  else {
    if (unaff_w20 < 0x42) {
      if (unaff_w20 == 0x3f) {
LAB_05149ce0:
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        _in_stack_00000008 = FUN_054774c0();
      }
      else {
        if (unaff_w20 != 0x41) goto LAB_05149f6c;
LAB_05149c34:
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        _in_stack_00000008 = FUN_05477974();
      }
    }
    else if (unaff_w20 == 0x45) {
LAB_05149cb4:
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      _in_stack_00000008 = FUN_0547756c();
    }
    else {
      if (unaff_w20 != 0x49) goto LAB_05149f6c;
LAB_05149b9c:
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      _in_stack_00000008 = FUN_05475ffc();
    }
    uVar1 = thunk_FUN_02d9d164(*unaff_x26,&stack0x00000008);
    *unaff_x19 = uVar1;
    thunk_FUN_02dd37b4();
    uVar1 = 1;
  }
  if (*(long *)(unaff_x25 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}


