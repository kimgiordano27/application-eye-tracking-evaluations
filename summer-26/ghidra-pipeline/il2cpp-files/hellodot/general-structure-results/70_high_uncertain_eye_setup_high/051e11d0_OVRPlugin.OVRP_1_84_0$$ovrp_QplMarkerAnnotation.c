/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerAnnotation
ENTRY_POINT: 051e11d0
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerAnnotation
               (ulong param_1,float param_2,long param_3,undefined4 param_4,undefined8 *param_5,
               undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x21;
  long unaff_x24;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  
                    /* try { // try from 051e11d0 to 052e11e3 has its CatchHandler @ 051e11e4 */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 051e11d0 with catch @ 051e11e4
                       try { // try from 051e11e4 to 052e11fb has its CatchHandler @ 051e11b4 */
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    *(undefined1 *)(unaff_x24 + 0x5e0) = 1;
  }
                    /* try { // try from 051e11fc to 052e1213 has its CatchHandler @ 051e129c */
  iVar1 = *(int *)(param_3 + 0xcc);
  *(undefined4 *)(param_3 + 0x10) = param_4;
  if (0 < iVar1) {
    lVar3 = *(long *)(param_3 + 0x38);
    if (lVar3 == 0) goto LAB_051e1488;
                    /* try { // try from 051e1214 to 052e128b has its CatchHandler @ 051e11b4 */
    lVar5 = 4;
    do {
      uVar6 = lVar5 - 4;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_051e1484:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      *(undefined8 *)(lVar3 + lVar5 * 8) = 0xffffffffffffffff;
      lVar8 = *(long *)(param_3 + 0x40);
      if (lVar8 == 0) goto LAB_051e1488;
      if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_051e1484;
      *(undefined8 *)(lVar8 + lVar5 * 8) = 0xffffffffffffffff;
      lVar8 = *(long *)(param_3 + 0x48);
      if (lVar8 == 0) goto LAB_051e1488;
      if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_051e1484;
      lVar7 = lVar5 + -3;
      *(undefined8 *)(lVar8 + lVar5 * 8) = 0xffffffffffffffff;
      lVar5 = lVar5 + 1;
    } while (lVar7 < iVar1);
  }
  puVar2 = PTR_DAT_065c8c40;
  if (DAT_06a6730f == '\0') {
                    /* try { // try from 051e128c to 052e129b has its CatchHandler @ 051e129c */
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a6730f = '\x01';
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_065c9850 + 0xb8);
  FUN_05ee7694(&stack0x000000c0,*(float *)(lVar3 + 0xc) * param_2,*(float *)(lVar3 + 0x10) * param_2
               ,*(float *)(lVar3 + 0x14) * param_2,0);
  in_stack_00000128 = in_stack_000000e8;
  in_stack_00000120 = in_stack_000000e0;
  in_stack_00000138 = in_stack_000000f8;
  in_stack_00000130 = in_stack_000000f0;
  in_stack_00000108 = in_stack_000000c8;
  in_stack_00000100 = in_stack_000000c0;
  in_stack_00000118 = in_stack_000000d8;
  in_stack_00000110 = in_stack_000000d0;
  *(undefined8 *)(param_3 + 0x78) = in_stack_000000e8;
  *(undefined8 *)(param_3 + 0x70) = in_stack_000000e0;
  *(undefined8 *)(param_3 + 0x88) = in_stack_000000f8;
  *(undefined8 *)(param_3 + 0x80) = in_stack_000000f0;
  *(undefined8 *)(param_3 + 0x58) = in_stack_000000c8;
  *(undefined8 *)(param_3 + 0x50) = in_stack_000000c0;
  *(undefined8 *)(param_3 + 0x68) = in_stack_000000d8;
  *(undefined8 *)(param_3 + 0x60) = in_stack_000000d0;
  uVar11 = *param_5;
  uVar9 = *(undefined4 *)(param_5 + 3);
  uVar4 = param_5[2];
  *(undefined8 *)(param_3 + 0x98) = param_5[1];
  *(undefined8 *)(param_3 + 0x90) = uVar11;
  *(undefined4 *)(param_3 + 0xa8) = uVar9;
  *(undefined8 *)(param_3 + 0xa0) = uVar4;
  *(undefined8 *)(param_3 + 0xb4) = *(undefined8 *)(param_3 + 0x98);
  *(undefined8 *)(param_3 + 0xac) = *(undefined8 *)(param_3 + 0x90);
  *(undefined8 *)(param_3 + 0xc0) = *(undefined8 *)(param_3 + 0xa4);
  *(undefined8 *)(param_3 + 0xb8) = *(undefined8 *)(param_3 + 0x9c);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar6 = FUN_05ef59b8();
  if ((uVar6 & 1) != 0) {
    in_stack_00000128 = *(undefined8 *)(param_3 + 0x78);
    in_stack_00000120 = *(undefined8 *)(param_3 + 0x70);
    in_stack_00000138 = *(undefined8 *)(param_3 + 0x88);
    in_stack_00000130 = *(undefined8 *)(param_3 + 0x80);
    in_stack_00000108 = *(undefined8 *)(param_3 + 0x58);
    in_stack_00000100 = *(undefined8 *)(param_3 + 0x50);
    in_stack_00000118 = *(undefined8 *)(param_3 + 0x68);
    in_stack_00000110 = *(undefined8 *)(param_3 + 0x60);
    if (unaff_x21 == 0) {
LAB_051e1488:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_05f04738();
    FUN_05ee7694(&stack0x000000c0,0);
    in_stack_00000048 = in_stack_00000108;
    in_stack_00000040 = in_stack_00000100;
    in_stack_00000058 = in_stack_00000118;
    in_stack_00000050 = in_stack_00000110;
    in_stack_00000068 = in_stack_00000128;
    in_stack_00000060 = in_stack_00000120;
    in_stack_00000078 = in_stack_00000138;
    in_stack_00000070 = in_stack_00000130;
    FUN_05ee720c(&stack0x00000080,&stack0x00000040);
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    *(undefined8 *)(param_3 + 0x78) = in_stack_000000a8;
    *(undefined8 *)(param_3 + 0x70) = in_stack_000000a0;
    *(undefined8 *)(param_3 + 0x88) = in_stack_000000b8;
    *(undefined8 *)(param_3 + 0x80) = in_stack_000000b0;
    *(undefined8 *)(param_3 + 0x58) = in_stack_00000088;
    *(undefined8 *)(param_3 + 0x50) = in_stack_00000080;
    *(undefined8 *)(param_3 + 0x68) = in_stack_00000098;
    *(undefined8 *)(param_3 + 0x60) = in_stack_00000090;
    fVar12 = *(float *)(param_3 + 0x94);
    fVar13 = *(float *)(param_3 + 0x98);
    uVar4 = in_stack_00000080;
    uVar9 = FUN_05f0009c(*(undefined4 *)(param_3 + 0x90));
    fVar14 = (float)uVar4;
    *(undefined4 *)(param_3 + 0xac) = uVar9;
    *(float *)(param_3 + 0xb0) = fVar12;
    *(float *)(param_3 + 0xb4) = fVar13;
    fVar10 = (float)FUN_05f00104();
    fVar15 = *(float *)(param_3 + 0x9c);
    fVar18 = *(float *)(param_3 + 0xa0);
    fVar17 = *(float *)(param_3 + 0xa4);
    fVar16 = *(float *)(param_3 + 0xa8);
    *(float *)(param_3 + 0xb8) =
         (fVar12 * fVar17 + fVar14 * fVar15 + fVar10 * fVar16) - fVar13 * fVar18;
    *(float *)(param_3 + 0xbc) =
         (fVar13 * fVar15 + fVar14 * fVar18 + fVar12 * fVar16) - fVar10 * fVar17;
    *(float *)(param_3 + 0xc0) =
         (fVar10 * fVar18 + fVar14 * fVar17 + fVar13 * fVar16) - fVar12 * fVar15;
    *(float *)(param_3 + 0xc4) =
         ((fVar14 * fVar16 - fVar10 * fVar15) - fVar12 * fVar18) - fVar13 * fVar17;
  }
  FUN_04f54cec(param_6,*(undefined8 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 200),0);
  return;
}


