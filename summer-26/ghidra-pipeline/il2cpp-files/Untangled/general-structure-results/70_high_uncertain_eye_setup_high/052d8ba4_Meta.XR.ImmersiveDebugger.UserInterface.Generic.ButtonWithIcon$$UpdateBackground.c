/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$UpdateBackground
ENTRY_POINT: 052d8ba4
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__UpdateBackground
               (float param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float in_s19;
  float in_s22;
  float in_s24;
  undefined8 in_stack_00000008;
  long in_stack_00000058;
  
  param_3 = param_3 - in_s19;
  param_5 = param_5 - in_s22;
  FUN_066d4ae0(param_1 - in_s24);
  if (*(long *)(in_stack_00000058 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_052c217c(*(long *)(in_stack_00000058 + 0x130),0);
  if (*(long *)(in_stack_00000058 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = FUN_066c67b0(*(long *)(in_stack_00000058 + 0x130),0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar5 = (float)FUN_066d48c0(lVar2,0);
  if (*(long *)(in_stack_00000058 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = *(long *)(*(long *)(in_stack_00000058 + 0x130) + 0x48);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar8 = param_5;
  fVar10 = param_3;
  fVar6 = (float)FUN_066d48c0(lVar2,0);
  if (*(long *)(in_stack_00000058 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = FUN_066c67b0(*(long *)(in_stack_00000058 + 0x130),0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar10 = unaff_s10 + (param_3 - fVar10);
  fVar8 = unaff_s9 + (param_5 - fVar8);
  FUN_066d4960(unaff_s8 + (fVar5 - fVar6),lVar2,0);
  lVar2 = *(long *)(in_stack_00000058 + 0x130);
  uVar1 = FUN_066ca068(in_stack_00000008._4_4_,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_052c2430(lVar2,uVar1,0);
  lVar2 = *(long *)(in_stack_00000058 + 0x130);
  if (*(long *)(in_stack_00000058 + 0x380) == 0) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(long *)(lVar2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar3 = FUN_052c416c(*(long *)(lVar2 + 0x30),0,0);
    *(undefined8 *)(in_stack_00000058 + 0x380) = uVar3;
    thunk_FUN_02f411dc(in_stack_00000058 + 0x380);
  }
  else {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
                    /* try { // try from 052d8ca0 to 053d8dbb has its CatchHandler @ 052d8ca0
                       catch() { ... } // from try @ 052d8ca0 with catch @ 052d8ca0
                       catch() { ... } // from try @ 052d8e84 with catch @ 052d8ca0
                       catch() { ... } // from try @ 052d8f58 with catch @ 052d8ca0
                       catch() { ... } // from try @ 052d8ffc with catch @ 052d8ca0 */
    if (*(long *)(lVar2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_052bf774(*(long *)(lVar2 + 0x30),*(long *)(in_stack_00000058 + 0x380),0);
  }
  if (*(long *)(in_stack_00000058 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = FUN_066c67b0(*(long *)(in_stack_00000058 + 0x98),0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d320c(lVar2,0);
  fVar5 = (float)FUN_066bd6e0(0);
  if (*(long *)(in_stack_00000058 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar6 = fVar8;
  fVar11 = fVar10;
  fVar13 = param_4;
  lVar2 = FUN_066c67b0(*(long *)(in_stack_00000058 + 0x130),0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar7 = (float)FUN_066d320c(lVar2,0);
  fVar12 = fVar10 * fVar11;
  fVar9 = ((param_4 * fVar13 - fVar5 * fVar7) - fVar8 * fVar6) - fVar12;
  *(float *)(in_stack_00000058 + 0x298) =
       (fVar8 * fVar11 + param_4 * fVar7 + fVar5 * fVar13) - fVar10 * fVar6;
  *(float *)(in_stack_00000058 + 0x29c) =
       (fVar10 * fVar7 + param_4 * fVar6 + fVar8 * fVar13) - fVar5 * fVar11;
  *(float *)(in_stack_00000058 + 0x2a0) =
       (fVar5 * fVar6 + param_4 * fVar11 + fVar10 * fVar13) - fVar8 * fVar7;
  *(float *)(in_stack_00000058 + 0x2a4) = fVar9;
  if (*(long *)(in_stack_00000058 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = FUN_066c67b0(*(long *)(in_stack_00000058 + 0x98),0);
  if (*(long *)(in_stack_00000058 + 0x130) != 0) {
    lVar4 = FUN_066c67b0(*(long *)(in_stack_00000058 + 0x130),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d48c0(lVar4,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar1 = FUN_066d6014(lVar2,0);
    lVar2 = *(long *)(in_stack_00000058 + 0x380);
    *(undefined4 *)(in_stack_00000058 + 0x2a8) = uVar1;
    *(float *)(in_stack_00000058 + 0x2ac) = fVar9;
    *(float *)(in_stack_00000058 + 0x2b0) = fVar12;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(undefined4 *)(lVar2 + 0x10) = uVar1;
    *(float *)(lVar2 + 0x14) = fVar9;
    *(float *)(lVar2 + 0x18) = fVar12;
    lVar2 = *(long *)(in_stack_00000058 + 0x380);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(in_stack_00000058 + 0x298);
      *(undefined8 *)(lVar2 + 0x24) = *(undefined8 *)(in_stack_00000058 + 0x2a0);
      *(undefined8 *)(lVar2 + 0x1c) = uVar3;
      if (*(long *)(in_stack_00000058 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar2 = *(long *)(*(long *)(in_stack_00000058 + 0x130) + 0x30);
      if (lVar2 != 0) {
        FUN_052be1e8(lVar2,*(undefined8 *)(in_stack_00000058 + 0x388),1,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


