/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerAnnotation
ENTRY_POINT: 01dae570
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerAnnotation(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x24;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long lStack0000000000000028;
  
  lStack0000000000000028 = param_2;
  thunk_FUN_0106e12c(&stack0x00000028);
  lVar3 = lStack0000000000000028;
  in_stack_00000018 = param_1;
  thunk_FUN_0106e12c(&stack0x00000018,param_1);
  thunk_FUN_0106e12c();
  uVar1 = *(undefined1 *)(param_1 + 0x38);
  if ((unaff_x24 & 1) != 0) {
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
    }
    if (unaff_x20 == 0) goto LAB_01dae65c;
    *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
    thunk_FUN_0106e12c();
  }
  puVar2 = PTR_DAT_0234bbd8;
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x18);
  }
  if (unaff_x20 != 0) {
    *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
    thunk_FUN_0106e12c();
    *(long *)(param_1 + 0x30) = unaff_x20;
    thunk_FUN_0106e12c();
    *(undefined1 *)(param_1 + 0x38) = 0;
    FUN_01cbf284(0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01dadac4(lVar3);
    unaff_x19[1] = CONCAT71(in_stack_00000008._1_7_,uVar1) ^ 1;
    *unaff_x19 = lVar3;
    unaff_x19[3] = in_stack_00000018;
    unaff_x19[2] = in_stack_00000010;
    return;
  }
LAB_01dae65c:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


