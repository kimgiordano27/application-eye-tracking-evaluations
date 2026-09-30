/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<bool>$$EndInvoke
ENTRY_POINT: 03eb34dc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<bool>__EndInvoke
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  long lVar1;
  float *pfVar2;
  undefined8 *unaff_x19;
  long *unaff_x22;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined4 unaff_w27;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  FUN_056c45a8();
  in_stack_00000090 = in_stack_00000058;
  in_stack_00000088 = in_stack_00000050;
  in_stack_00000080 = in_stack_00000048;
  FUN_056c45a8(&stack0x00000030);
  in_stack_00000068 = in_stack_00000038;
  in_stack_00000060 = in_stack_00000030;
  in_stack_00000070 = in_stack_00000040;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066c3c7e == '\0') {
    FUN_02b3c81c(PTR_DAT_06320af8);
    DAT_066c3c7e = '\x01';
  }
  lVar1 = *unaff_x24;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar1 = *unaff_x24;
  }
  pfVar2 = *(float **)(lVar1 + 0xb8);
  fVar16 = pfVar2[3];
  fVar15 = pfVar2[4];
  fVar14 = pfVar2[5];
  fVar17 = pfVar2[6];
  if (*(char *)((long)unaff_x22 + 0x24) == '\0') {
    fVar10 = *pfVar2;
    fVar8 = pfVar2[1];
    fVar5 = pfVar2[2];
    fStack0000000000000014 = fVar8;
    fStack0000000000000018 = fVar10;
    fStack000000000000001c = fVar10;
    fStack0000000000000020 = fVar8;
    fStack0000000000000024 = fVar5;
  }
  else {
    if (*unaff_x22 == 0) goto LAB_03eb38b8;
    fVar3 = (float)FUN_05c9bf94(*unaff_x22,0);
    if (unaff_x22[1] == 0) goto LAB_03eb38b8;
    fVar6 = param_2;
    fVar13 = param_3;
    fVar4 = (float)FUN_05c9bf94(unaff_x22[1],0);
    if (unaff_x22[2] == 0) goto LAB_03eb38b8;
    fVar8 = param_2 - fVar6;
    fVar10 = param_3 - fVar13;
    param_4 = (float)FUN_05c9bf94(unaff_x22[2],0);
    param_4 = fVar3 - param_4;
    fVar5 = param_3 - fVar10;
    fStack0000000000000014 = param_2 - fVar8;
    fStack0000000000000018 = param_4;
    fStack000000000000001c = fVar3 - fVar4;
    fStack0000000000000020 = param_2 - fVar6;
    fStack0000000000000024 = param_3 - fVar13;
  }
  fVar3 = fVar16;
  fVar6 = fVar15;
  fVar13 = fVar14;
  fVar4 = fVar17;
  if (*(char *)((long)unaff_x22 + 0x25) != '\0') {
    if (*unaff_x22 != 0) {
      fVar4 = (float)FUN_05c9a10c(*unaff_x22,0);
      if (unaff_x22[1] != 0) {
        fVar15 = fVar8;
        fVar16 = fVar10;
        fVar3 = param_4;
        FUN_05c9a10c(unaff_x22[1],0);
        fVar6 = (float)FUN_05c7b504(0);
        if (unaff_x22[2] != 0) {
          fVar9 = fVar4 * fVar15;
          fVar11 = fVar8 * fVar16;
          fVar12 = fVar10 * fVar15 + fVar4 * fVar3 + param_4 * fVar6;
          fVar17 = ((param_4 * fVar3 - fVar4 * fVar6) - fVar8 * fVar15) - fVar10 * fVar16;
          fVar14 = (fVar8 * fVar6 + fVar10 * fVar3 + param_4 * fVar16) - fVar9;
          fVar15 = (fVar4 * fVar16 + fVar8 * fVar3 + param_4 * fVar15) - fVar10 * fVar6;
          fVar16 = fVar12 - fVar11;
          FUN_05c9a10c(unaff_x22[2],0);
          fVar7 = (float)FUN_05c7b504(0);
          fVar3 = (fVar10 * fVar9 + fVar4 * fVar12 + param_4 * fVar7) - fVar8 * fVar11;
          fVar6 = (fVar4 * fVar11 + fVar8 * fVar12 + param_4 * fVar9) - fVar10 * fVar7;
          fVar13 = (fVar8 * fVar7 + fVar10 * fVar12 + param_4 * fVar11) - fVar4 * fVar9;
          fVar4 = ((param_4 * fVar12 - fVar4 * fVar7) - fVar8 * fVar9) - fVar10 * fVar11;
          goto LAB_03eb3744;
        }
      }
    }
LAB_03eb38b8:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_03eb3744:
  FUN_056c6360();
  auVar18 = FUN_056be164();
  FUN_056c63ec();
  auVar19 = FUN_056be164();
  FUN_056c642c();
  auVar20 = FUN_056be2e4();
  FUN_056c646c();
  auVar21 = FUN_056be2e4();
  *(undefined4 *)(unaff_x19 + 1) = unaff_w27;
  *(float *)((long)unaff_x19 + 0x4c) = fVar15;
  *(float *)(unaff_x19 + 10) = fVar14;
  *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000088;
  *(undefined8 *)((long)unaff_x19 + 0xc) = in_stack_00000080;
  *unaff_x19 = unaff_x25;
  *(undefined8 *)((long)unaff_x19 + 0x2c) = in_stack_00000068;
  *(undefined8 *)((long)unaff_x19 + 0x24) = in_stack_00000060;
  *(undefined8 *)((long)unaff_x19 + 0x1c) = in_stack_00000090;
  *(float *)((long)unaff_x19 + 100) = fVar3;
  *(float *)(unaff_x19 + 0xd) = fVar6;
  *(float *)((long)unaff_x19 + 0x3c) = fStack000000000000001c;
  *(float *)(unaff_x19 + 8) = fStack0000000000000020;
  *(undefined8 *)((long)unaff_x19 + 0x34) = in_stack_00000070;
  *(float *)((long)unaff_x19 + 0x44) = fStack0000000000000024;
  *(float *)(unaff_x19 + 9) = fVar16;
  *(float *)((long)unaff_x19 + 0x6c) = fVar13;
  *(float *)(unaff_x19 + 0xe) = fVar4;
  *(float *)((long)unaff_x19 + 0x54) = fVar17;
  *(float *)(unaff_x19 + 0xb) = fStack0000000000000018;
  *(float *)((long)unaff_x19 + 0x5c) = fStack0000000000000014;
  *(float *)(unaff_x19 + 0xc) = fVar5;
  *(undefined1 (*) [16])((long)unaff_x19 + 0x74) = auVar18;
  *(undefined1 (*) [16])((long)unaff_x19 + 0x84) = auVar19;
  *(undefined1 (*) [16])((long)unaff_x19 + 0x94) = auVar20;
  *(undefined1 (*) [16])((long)unaff_x19 + 0xa4) = auVar21;
  *(undefined8 *)((long)unaff_x19 + 0xbc) = 0;
  *(undefined8 *)((long)unaff_x19 + 0xb4) = 0;
  return;
}


