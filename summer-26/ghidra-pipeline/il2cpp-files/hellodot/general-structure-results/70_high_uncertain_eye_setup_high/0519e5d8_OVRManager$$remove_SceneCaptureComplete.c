/*
FUNCTION_NAME: OVRManager$$remove_SceneCaptureComplete
ENTRY_POINT: 0519e5d8
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__remove_SceneCaptureComplete
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float fVar4;
  float fVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  undefined4 in_stack_00000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  ulong uVar12;
  ulong uVar15;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_4 + 0x458));
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d62a0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608408);
  *(undefined1 *)(unaff_x22 + 0x215) = 1;
  puVar2 = PTR_DAT_06608408;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  uStack000000000000008c = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  uStack0000000000000094 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  uStack0000000000000074 = 0;
  FUN_0519e3e8(&stack0x00000040);
  uVar3 = CONCAT44(uStack0000000000000050,uStack000000000000004c);
  in_stack_00000068 = uStack0000000000000048;
  in_stack_00000060 = in_stack_00000040;
  uStack0000000000000074 = (undefined4)uStack0000000000000054;
  in_stack_00000078 = SUB84(uStack0000000000000054,4);
  in_stack_00000070 = uStack0000000000000050;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar6 = FUN_05f0015c(&stack0x00000060,0);
  lVar1 = unaff_x20 + 0x148;
  uVar12 = uVar3;
  uVar15 = param_3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  fVar13 = (float)uVar15;
  fVar9 = (float)uVar12;
  fVar4 = (float)FUN_0519da8c(lVar1,0);
  if (DAT_06a68533 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
    DAT_06a68533 = '\x01';
  }
  fVar10 = fVar13 * fVar13;
  fVar5 = fVar10 + fVar4 * fVar4 + fVar9 * fVar9;
  fVar14 = **(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8);
  if (fVar14 <= fVar5) {
    fVar11 = (float)param_3 * fVar13 + (float)uVar6 * fVar4 + (float)uVar3 * fVar9;
    fVar10 = fVar13 * fVar11;
    fVar14 = (fVar4 * fVar11) / fVar5;
    uVar6 = (ulong)(uint)((float)uVar6 - fVar14);
    uVar3 = (ulong)(uint)((float)uVar3 - (fVar9 * fVar11) / fVar5);
    param_3 = (ulong)(uint)((float)param_3 - fVar10 / fVar5);
  }
  uVar15 = (ulong)(uint)fVar14;
  uVar12 = (ulong)(uint)fVar10;
  uVar7 = FUN_0519da8c(lVar1,0);
  FUN_05ee9fc0(uVar6,uVar3,param_3,uVar7,uVar12,uVar15,0);
  OVRManager__remove_SpaceSetComponentStatusComplete(lVar1,0);
  FUN_05effcac(&stack0x00000080,0);
  uVar3 = FUN_036c3a80();
  if ((uVar3 & 1) == 0) {
    uStack0000000000000034 = CONCAT44(in_stack_00000098,uStack0000000000000094);
    uVar8 = CONCAT44(in_stack_00000090,uStack000000000000008c);
    uVar7 = CONCAT44(uStack000000000000008c,in_stack_00000088);
    in_stack_00000020 = in_stack_00000080;
  }
  else {
    uStack0000000000000014 = CONCAT44(in_stack_00000098,uStack0000000000000094);
    uStack0000000000000048 = in_stack_00000088;
    in_stack_00000040 = in_stack_00000080;
    uStack000000000000004c = uStack000000000000008c;
    uStack0000000000000050 = in_stack_00000090;
    uStack0000000000000054 = uStack0000000000000014;
    if (*(long *)(unaff_x20 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uStack000000000000000c = uStack000000000000008c;
    FUN_0519e154(&stack0x00000020);
    uVar8 = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    uVar7 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
  }
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
  *(undefined8 *)((long)unaff_x19 + 0xc) = uVar8;
  unaff_x19[1] = uVar7;
  *unaff_x19 = in_stack_00000020;
  return;
}


