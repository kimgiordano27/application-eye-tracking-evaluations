/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController$$Setup
ENTRY_POINT: 076e8d4c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x076e8f54) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__Setup(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int in_w9;
  undefined4 *puVar5;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar6;
  undefined8 unaff_x22;
  int unaff_w23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  char cStack000000000000005c;
  
  if (in_w9 < unaff_w23) {
    uVar3 = System_Globalization_HijriCalendar__GetDaysInYear();
    uVar3 = FUN_078a7764(uVar3,*(undefined8 *)PTR_DAT_09f2f3a8,0);
  }
  else {
    uVar3 = System_Globalization_HijriCalendar__GetDaysInYear();
    uVar3 = FUN_078a7764(uVar3,*(undefined8 *)PTR_DAT_09f2f3a8,0);
    uVar6 = System_Globalization_HijriCalendar__GetDaysInYear();
    unaff_x22 = FUN_078a7764(uVar6,*(undefined8 *)PTR_DAT_09f2f3b0,0);
  }
  in_stack_00000018 = uVar3;
  thunk_FUN_044bb4b4(&stack0x00000018,uVar3);
  in_stack_00000020 = unaff_x22;
  thunk_FUN_044bb4b4(&stack0x00000020,unaff_x22);
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
  if (*(long *)(unaff_x19 + 0x240) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  in_stack_00000038 = in_stack_00000020;
  in_stack_00000030 = in_stack_00000018;
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


