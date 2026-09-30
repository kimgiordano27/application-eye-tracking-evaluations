/*
FUNCTION_NAME: OVRManager$$GetCurrentInputSubsystem
ENTRY_POINT: 05307884
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentInputSubsystem
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x22;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float unaff_s8;
  float fVar15;
  float unaff_s9;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float unaff_s12;
  float unaff_s14;
  float fVar19;
  float unaff_s15;
  float fVar20;
  undefined4 uStack0000000000000000;
  undefined8 uStack0000000000000004;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  plVar8 = *(long **)(unaff_x22 + 0xf80);
  uVar18 = *(undefined4 *)(unaff_x19 + 0x160);
  if (*(int *)(*plVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar2 = FUN_050d6b1c(uVar18,0);
  if (*(long *)(unaff_x19 + 0x128) != 0) {
    fVar9 = (float)iVar2;
    param_3 = param_3 * fVar9;
    fVar13 = unaff_s9 * fVar9;
    fVar15 = unaff_s12 * param_3;
    fVar16 = unaff_s12 * fVar13;
    fVar10 = (float)FUN_060ffbe4(*(long *)(unaff_x19 + 0x128),0);
    if (DAT_06bb42c4 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c4 = '\x01';
    }
    puVar1 = PTR_DAT_067c8f78;
    fVar15 = unaff_s14 + fVar15;
    fVar16 = unaff_s15 + fVar16;
    fVar17 = (float)uStack0000000000000000 + unaff_s12 * unaff_s8 * fVar9;
    lVar4 = *(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8);
    fVar9 = *(float *)(lVar4 + 0x18);
    fVar20 = *(float *)(lVar4 + 0x1c);
    fVar19 = *(float *)(lVar4 + 0x20);
                    /* try { // try from 0530793c to 0540795f has its CatchHandler @ 05307a1c */
    if (DAT_06bb8c34 == '\0') {
      FUN_02f08768(PTR_DAT_067c8fa8);
      DAT_06bb8c34 = '\x01';
    }
                    /* try { // try from 05307964 to 05407977 has its CatchHandler @ 05307a20 */
    fVar10 = fVar17 - fVar10;
    param_3 = fVar16 - param_3;
    fVar13 = fVar15 - fVar13;
                    /* try { // try from 05307978 to 05407a0b has its CatchHandler @ 05307844 */
    fVar11 = fVar19 * fVar19 + fVar9 * fVar9 + fVar20 * fVar20;
    if (**(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) <= fVar11) {
      fVar12 = fVar13 * fVar19 + fVar10 * fVar9 + param_3 * fVar20;
      fVar10 = fVar10 - (fVar9 * fVar12) / fVar11;
      param_3 = param_3 - (fVar20 * fVar12) / fVar11;
      fVar13 = fVar13 - (fVar19 * fVar12) / fVar11;
    }
    if (DAT_06bb42bf == '\0') {
      FUN_02f08768(PTR_DAT_067c8f80);
      DAT_06bb42bf = '\x01';
    }
    if (*(int *)(*plVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
                    /* try { // try from 05307a0c to 05407a0f has its CatchHandler @ 05307a24 */
    fVar9 = SQRT(fVar13 * fVar13 + fVar10 * fVar10 + param_3 * param_3);
    if (fVar9 <= DAT_011b06e4) {
      if (DAT_06bb42c1 == '\0') {
        FUN_02f08768(PTR_DAT_067c8f78);
        DAT_06bb42c1 = '\x01';
      }
      pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar10 = *pfVar5;
      param_3 = pfVar5[1];
      fVar13 = pfVar5[2];
    }
    else {
      fVar10 = fVar10 / fVar9;
      param_3 = param_3 / fVar9;
      fVar13 = fVar13 / fVar9;
    }
    if (DAT_06bb42c4 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c4 = '\x01';
    }
    lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
    uVar14 = *(undefined4 *)(lVar4 + 0x18);
    uVar18 = FUN_060df8a0(fVar10,param_3,fVar13,uVar14,*(undefined4 *)(lVar4 + 0x1c),
                          *(undefined4 *)(lVar4 + 0x20),0);
    plVar8 = *(long **)(unaff_x19 + 0x138);
    in_stack_00000020 = 0;
    uStack0000000000000028 = 0;
    uStack000000000000002c = 0;
    in_stack_00000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000034 = 0;
    FUN_060fda18(fVar17,fVar16,fVar15,uVar18,param_3,fVar13,uVar14,&stack0x00000020,0);
    uStack0000000000000054 = CONCAT44(in_stack_00000038,uStack0000000000000034);
    uStack0000000000000048 = uStack0000000000000028;
    in_stack_00000040 = in_stack_00000020;
    uStack000000000000004c = uStack000000000000002c;
    uStack0000000000000050 = uStack0000000000000030;
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)UnityEngine_UIElements_StyleValuePropertyBag<StyleFloat,_float>_TypeInfo) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_05307b58;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_02f421d0(plVar8,*(long *)
                                    UnityEngine_UIElements_StyleValuePropertyBag<StyleFloat,_float>_TypeInfo
                            ,2);
LAB_05307b58:
      (*(code *)*puVar3)((undefined1 *)((long)&stack0x00000000 + 4),plVar8,&stack0x00000040,
                         puVar3[1]);
      *(ulong *)(unaff_x19 + 0x14c) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
      *(undefined8 *)(unaff_x19 + 0x144) = uStack0000000000000004;
      *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000018;
      *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


