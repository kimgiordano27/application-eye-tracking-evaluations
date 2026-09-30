/*
FUNCTION_NAME: OVRManager$$add_SpaceEraseComplete
ENTRY_POINT: 05ba3cdc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__add_SpaceEraseComplete(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float fVar7;
  undefined4 unaff_s13;
  float unaff_s15;
  float fStack0000000000000004;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 in_stack_000000e0;
  undefined8 uStack00000000000000e4;
  
  *(undefined1 *)(unaff_x21 + 0x9a3) = 1;
  uStack00000000000000b4 = 0;
  uStack00000000000000b0 = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000088 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000098 = 0;
  uStack0000000000000090 = 0;
  uStack00000000000000a8 = 0;
  uStack00000000000000ac = 0;
  uStack00000000000000a0 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  fVar7 = unaff_s9 * unaff_s9 + unaff_s15 * unaff_s15 + unaff_s8 * unaff_s8;
  if (DAT_07546c44 == '\0') {
    FUN_03188a78(PTR_DAT_070cf060);
    DAT_07546c44 = '\x01';
  }
  fVar4 = ABS(fVar7);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar6 = **(float **)(*(long *)PTR_DAT_070cf060 + 0xb8) * 8.0;
  fVar5 = fVar4 * DAT_012e3b94;
  if (fVar4 * DAT_012e3b94 <= fVar6) {
    fVar5 = fVar6;
  }
  if (fVar5 <= ABS(0.0 - fVar7)) {
    if (DAT_07546bbf == '\0') {
      FUN_03188a78(PTR_DAT_070c22f8);
      DAT_07546bbf = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    puVar1 = PTR_DAT_070d3dc8;
    if (SQRT(fVar7) <= DAT_012e3cb4) {
      if (DAT_075457d6 == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457d6 = '\x01';
      }
      fVar7 = *(float *)(*(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 4);
    }
    else {
      fVar7 = unaff_s8 / SQRT(fVar7);
    }
    uVar2 = FUN_069d7e10(unaff_x20 + 0x2c,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)puVar1);
    }
    fStack0000000000000004 = fVar7;
    uVar3 = FUN_06a5dacc(in_stack_00000020._4_4_,uStack0000000000000028,uStack000000000000002c,
                         unaff_s13,&stack0x00000090,uVar2,1,0);
    if ((uVar3 & 1) == 0) {
      uStack0000000000000078 = 0;
      uStack0000000000000070 = 0;
      uStack0000000000000088 = 0;
      uStack0000000000000080 = 0;
      uStack0000000000000068 = 0;
      uStack0000000000000060 = 0;
    }
    else {
      in_stack_000000c8 = uStack0000000000000098;
      in_stack_000000c0 = uStack0000000000000090;
      in_stack_000000d8 = uStack00000000000000a8;
      in_stack_000000d0 = uStack00000000000000a0;
      uStack00000000000000e4 = uStack00000000000000b4;
      uStack00000000000000dc = uStack00000000000000ac;
      in_stack_000000e0 = uStack00000000000000b0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000058 = 0;
      in_stack_00000050 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      FUN_0466ff7c(&stack0x00000030,&stack0x000000c0,*(undefined8 *)PTR_DAT_07115e38);
      uStack0000000000000088 = in_stack_00000058;
      uStack0000000000000080 = in_stack_00000050;
      uStack0000000000000068 = in_stack_00000038;
      uStack0000000000000060 = in_stack_00000030;
      uStack0000000000000078 = in_stack_00000048;
      uStack0000000000000070 = in_stack_00000040;
    }
    unaff_x19[5] = uStack0000000000000088;
    unaff_x19[4] = uStack0000000000000080;
    unaff_x19[1] = uStack0000000000000068;
    *unaff_x19 = uStack0000000000000060;
    unaff_x19[3] = uStack0000000000000078;
    unaff_x19[2] = uStack0000000000000070;
  }
  else {
    uVar3 = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    unaff_x19[5] = 0;
    unaff_x19[4] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
  }
  return uVar3 & 1;
}


