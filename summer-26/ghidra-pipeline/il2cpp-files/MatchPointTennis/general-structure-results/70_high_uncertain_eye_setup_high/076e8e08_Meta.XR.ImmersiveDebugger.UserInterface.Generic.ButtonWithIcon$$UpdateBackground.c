/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$UpdateBackground
ENTRY_POINT: 076e8e08
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x076e8f54) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__UpdateBackground(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar6;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  char cStack000000000000005c;
  
  if (*(long *)(unaff_x19 + 0x248) == 0) {
    puVar4 = (undefined4 *)(unaff_x19 + 0x2fc);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x2f0);
    puVar5 = (undefined4 *)(unaff_x19 + 0x2f8);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_09f21ad0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar3 = FUN_07a1e9e8(0);
    uVar3 = FUN_07a2054c(uVar3,*(undefined8 *)(unaff_x19 + 0x2e0),0);
    puVar5 = (undefined4 *)(unaff_x19 + 0x2e8);
    puVar4 = (undefined4 *)(unaff_x19 + 0x2ec);
  }
  uVar1 = *puVar5;
  uVar2 = *puVar4;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x250);
  cStack000000000000005c = '\0';
  FUN_07aa2674(uVar6,&stack0x0000005c,0);
  if (*(long *)(unaff_x19 + 0x240) != 0) {
    in_stack_00000038 = in_stack_00000020;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000040 = in_stack_00000028;
    FUN_075940a0(*(long *)(unaff_x19 + 0x240),&stack0x00000030,*(undefined8 *)PTR_DAT_09f2f398);
    if (*(long *)(unaff_x19 + 0x248) != 0) {
      FUN_07593d58(*(long *)(unaff_x19 + 0x248),uVar3,CONCAT44(uVar2,uVar1),
                   *(undefined8 *)PTR_DAT_09f2f3a0);
    }
    if (unaff_w20 == 2) {
      *(int *)(unaff_x19 + 0x1dc) = *(int *)(unaff_x19 + 0x1dc) + 1;
    }
    else if (unaff_w20 == 3) {
      *(int *)(unaff_x19 + 0x1d8) = *(int *)(unaff_x19 + 0x1d8) + 1;
    }
    else {
      *(int *)(unaff_x19 + 0x1e0) = *(int *)(unaff_x19 + 0x1e0) + 1;
    }
    if (cStack000000000000005c != '\0') {
      thunk_FUN_04455fec(uVar6,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


