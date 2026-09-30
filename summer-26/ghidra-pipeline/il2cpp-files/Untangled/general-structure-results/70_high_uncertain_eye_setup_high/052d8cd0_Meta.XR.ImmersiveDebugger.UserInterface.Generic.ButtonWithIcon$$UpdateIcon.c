/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$UpdateIcon
ENTRY_POINT: 052d8cd0
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__UpdateIcon
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5,
               undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long in_stack_00000058;
  
  *(undefined8 *)(param_1 + 0x380) = param_7;
  thunk_FUN_02f411dc(param_1 + 0x380);
  if (*(long *)(in_stack_00000058 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar1 = FUN_066c67b0(*(long *)(in_stack_00000058 + 0x98),0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d320c(lVar1,0);
  fVar3 = (float)FUN_066bd6e0(0);
  if (*(long *)(in_stack_00000058 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar7 = param_3;
  fVar9 = param_4;
  fVar11 = param_5;
  lVar1 = FUN_066c67b0(*(long *)(in_stack_00000058 + 0x130),0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar4 = (float)FUN_066d320c(lVar1,0);
  fVar10 = param_4 * fVar9;
  fVar8 = ((param_5 * fVar11 - fVar3 * fVar4) - param_3 * fVar7) - fVar10;
  *(float *)(in_stack_00000058 + 0x298) =
       (param_3 * fVar9 + param_5 * fVar4 + fVar3 * fVar11) - param_4 * fVar7;
  *(float *)(in_stack_00000058 + 0x29c) =
       (param_4 * fVar4 + param_5 * fVar7 + param_3 * fVar11) - fVar3 * fVar9;
  *(float *)(in_stack_00000058 + 0x2a0) =
       (fVar3 * fVar7 + param_5 * fVar9 + param_4 * fVar11) - param_3 * fVar4;
  *(float *)(in_stack_00000058 + 0x2a4) = fVar8;
                    /* try { // try from 052d8dbc to 053d8de3 has its CatchHandler @ 052d8f68 */
  if (*(long *)(in_stack_00000058 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar1 = FUN_066c67b0(*(long *)(in_stack_00000058 + 0x98),0);
  if (*(long *)(in_stack_00000058 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = FUN_066c67b0(*(long *)(in_stack_00000058 + 0x130),0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d48c0(lVar2,0);
  if (lVar1 != 0) {
    uVar5 = FUN_066d6014(lVar1,0);
                    /* try { // try from 052d8e00 to 053d8e5f has its CatchHandler @ 052d8f6c */
    lVar1 = *(long *)(in_stack_00000058 + 0x380);
    *(undefined4 *)(in_stack_00000058 + 0x2a8) = uVar5;
    *(float *)(in_stack_00000058 + 0x2ac) = fVar8;
    *(float *)(in_stack_00000058 + 0x2b0) = fVar10;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(undefined4 *)(lVar1 + 0x10) = uVar5;
    *(float *)(lVar1 + 0x14) = fVar8;
    *(float *)(lVar1 + 0x18) = fVar10;
    lVar1 = *(long *)(in_stack_00000058 + 0x380);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar6 = *(undefined8 *)(in_stack_00000058 + 0x298);
    *(undefined8 *)(lVar1 + 0x24) = *(undefined8 *)(in_stack_00000058 + 0x2a0);
    *(undefined8 *)(lVar1 + 0x1c) = uVar6;
    if (*(long *)(in_stack_00000058 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar1 = *(long *)(*(long *)(in_stack_00000058 + 0x130) + 0x30);
    if (lVar1 != 0) {
      FUN_052be1e8(lVar1,*(undefined8 *)(in_stack_00000058 + 0x388),1,0);
      *(undefined1 *)(in_stack_00000058 + 0x2c1) = 1;
      FUN_02b8d81c(&stack0x00000010);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


