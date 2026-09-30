/*
FUNCTION_NAME: OVRPlugin$$GetControllerIsInHand
ENTRY_POINT: 06abb5a4
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerIsInHand(ulong param_1)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  uint *unaff_x25;
  long unaff_x26;
  uint *unaff_x27;
  uint *puVar9;
  uint *unaff_x28;
  uint *puVar10;
  uint *puVar11;
  float fVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 unaff_s12;
  float fVar35;
  float fVar36;
  float unaff_s15;
  undefined4 uStack0000000000000000;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
code_r0x06abb5a4:
  puVar9 = unaff_x27 + 1;
  uVar15 = *puVar9;
  puVar10 = unaff_x28 + 2;
  uVar20 = *puVar10;
  puVar11 = unaff_x25 + 3;
  uVar24 = *puVar11;
  uStack0000000000000000 = unaff_s12;
LAB_06abb75c:
  uVar13 = FUN_07a00498(param_1,0);
  if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x26) {
LAB_06abba84:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  *unaff_x25 = uVar13;
  *puVar9 = uVar15;
  *puVar10 = uVar20;
  *puVar11 = uVar24;
LAB_06abb780:
  lVar4 = *(long *)(unaff_x19 + 0x158);
  if (lVar4 == 0) goto LAB_06abba88;
  uVar15 = (uint)unaff_x21;
  if (*(uint *)(lVar4 + 0x18) <= uVar15) goto LAB_06abba84;
  if (*(int *)(lVar4 + unaff_x22 + 0x20) == 0) {
    lVar4 = *(long *)(unaff_x19 + 0xe0);
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0xd8);
  }
  if (lVar4 == 0) goto LAB_06abba88;
  if (*(uint *)(lVar4 + 0x18) <= uVar15) goto LAB_06abba84;
  lVar4 = *(long *)(lVar4 + unaff_x21 * 8 + 0x20);
  if (lVar4 == 0) goto LAB_06abba88;
  uVar14 = FUN_06a716e8(lVar4,0);
  lVar4 = *(long *)(unaff_x19 + 0x148);
  if (lVar4 == 0) goto LAB_06abba88;
  if (*(uint *)(lVar4 + 0x18) <= uVar15) goto LAB_06abba84;
  if (unaff_x20 == 0) goto LAB_06abba88;
  uVar20 = (uint)unaff_x26;
  if (*(uint *)(unaff_x20 + 0x18) <= uVar20) goto LAB_06abba84;
  lVar4 = lVar4 + unaff_x22 * 4;
  lVar5 = unaff_x20 + unaff_x26 * 0x10;
  uVar19 = *(undefined4 *)(lVar4 + 0x24);
  uVar23 = *(undefined4 *)(lVar4 + 0x28);
  uVar27 = *(undefined4 *)(lVar4 + 0x2c);
  uStack0000000000000000 = uVar14;
  uVar14 = FUN_07a00498(*(undefined4 *)(lVar4 + 0x20),0);
  if (*(uint *)(unaff_x20 + 0x18) <= uVar20) goto LAB_06abba84;
  *(undefined4 *)(lVar5 + 0x20) = uVar14;
  *(undefined4 *)(lVar5 + 0x24) = uVar19;
  *(undefined4 *)(lVar5 + 0x28) = uVar23;
  *(undefined4 *)(lVar5 + 0x2c) = uVar27;
  if (*(uint *)(unaff_x20 + 0x18) <= uVar20) goto LAB_06abba84;
  lVar4 = *(long *)(unaff_x19 + 0x150);
  if (lVar4 == 0) goto LAB_06abba88;
  if (*(uint *)(lVar4 + 0x18) <= uVar15) goto LAB_06abba84;
  lVar4 = lVar4 + unaff_x22 * 4;
  unaff_x22 = unaff_x22 + 4;
  unaff_x21 = unaff_x21 + 1;
  *(undefined4 *)(lVar4 + 0x20) = uVar14;
  *(undefined4 *)(lVar4 + 0x24) = uVar19;
  *(undefined4 *)(lVar4 + 0x28) = uVar23;
  *(undefined4 *)(lVar4 + 0x2c) = uVar27;
  lVar4 = *(long *)(unaff_x23 + 0x858);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    FUN_033b9870();
    lVar4 = *(long *)(unaff_x23 + 0x858);
  }
  plVar3 = *(long **)(lVar4 + 0xb8);
  lVar5 = *plVar3;
  if (lVar5 == 0) goto LAB_06abba88;
  uVar15 = *(uint *)(lVar5 + 0x18);
  uVar20 = (uint)unaff_x21;
  if ((int)uVar15 <= (int)uVar20) {
    return;
  }
  lVar6 = *(long *)(unaff_x19 + 0x158);
  if (lVar6 == 0) goto LAB_06abba88;
  if (*(uint *)(lVar6 + 0x18) <= uVar20) goto LAB_06abba84;
  lVar7 = *(long *)(unaff_x19 + 0x140);
  if (lVar7 == 0) goto LAB_06abba88;
  if (*(uint *)(lVar7 + 0x18) <= uVar20) goto LAB_06abba84;
  lVar8 = *(long *)(unaff_x19 + 0xd0);
  if (lVar8 == 0) goto LAB_06abba88;
  if (*(uint *)(lVar8 + 0x18) <= uVar20) goto LAB_06abba84;
  lVar7 = lVar7 + unaff_x22 * 4;
  iVar1 = *(int *)(lVar6 + unaff_x22 + 0x20);
  fVar33 = *(float *)(lVar7 + 0x20);
  fVar31 = *(float *)(lVar7 + 0x24);
  fVar28 = *(float *)(lVar7 + 0x28);
  fVar29 = *(float *)(lVar7 + 0x2c);
  unaff_s12 = *(undefined4 *)(lVar8 + unaff_x22 + 0x20);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    FUN_033b9870();
    lVar4 = *(long *)(unaff_x23 + 0x858);
    plVar3 = *(long **)(lVar4 + 0xb8);
    lVar5 = *plVar3;
    if (lVar5 == 0) goto LAB_06abba88;
    uVar15 = *(uint *)(lVar5 + 0x18);
  }
  if (uVar15 <= uVar20) goto LAB_06abba84;
  uVar15 = *(uint *)(lVar5 + unaff_x22 + 0x20);
  unaff_x26 = (long)(int)uVar15;
  if (iVar1 == 1) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      FUN_033b9870();
      plVar3 = *(long **)(*(long *)(unaff_x23 + 0x858) + 0xb8);
    }
    lVar4 = plVar3[3];
    if (lVar4 == 0) goto LAB_06abba88;
    if (*(uint *)(lVar4 + 0x18) <= uVar20) goto LAB_06abba84;
    lVar5 = *(long *)(unaff_x24 + 0xce0);
    cVar2 = *(char *)(lVar4 + unaff_x21 + 0x20);
    if (cVar2 != '\0') {
      unaff_s15 = 0.0;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      FUN_033b9870();
      lVar5 = *(long *)(unaff_x24 + 0xce0);
    }
    lVar4 = *(long *)(lVar5 + 0xb8);
    fVar21 = *(float *)(lVar4 + 0x3c);
    fVar16 = *(float *)(lVar4 + 0x40);
    fVar36 = *(float *)(lVar4 + 0x24);
    fVar35 = *(float *)(lVar4 + 0x28);
    fVar25 = *(float *)(lVar4 + 0x2c);
    fVar17 = *(float *)(lVar4 + 0x44);
    fVar26 = unaff_s15 * fVar25 * -90.0;
    fVar18 = unaff_s15 * fVar35 * -90.0 * in_stack_00000058;
    fVar22 = fVar26 * in_stack_00000058;
    fVar12 = (float)FUN_07a00714(unaff_s15 * fVar36 * -90.0 * in_stack_00000058,0);
    fVar34 = (fVar31 * fVar22 + fVar29 * fVar12 + fVar33 * fVar26) - fVar28 * fVar18;
    fVar32 = (fVar28 * fVar12 + fVar29 * fVar18 + fVar31 * fVar26) - fVar33 * fVar22;
    fVar30 = (fVar33 * fVar18 + fVar29 * fVar22 + fVar28 * fVar26) - fVar31 * fVar12;
    fVar28 = ((fVar29 * fVar26 - fVar33 * fVar12) - fVar31 * fVar18) - fVar28 * fVar22;
    fStack0000000000000060 = fVar34;
    fStack0000000000000064 = fVar32;
    fStack0000000000000068 = fVar30;
    fStack000000000000006c = fVar28;
    if (unaff_x20 != 0) {
      if (*(uint *)(unaff_x20 + 0x18) <= uVar15) goto LAB_06abba84;
      fVar29 = (float)FUN_06abbbf4(unaff_x20 + unaff_x26 * 0x10 + 0x20,&stack0x00000060);
      if (unaff_s15 <= fVar29) {
        unaff_s15 = fVar29;
      }
      if (0.0 <= fVar29) {
        if (cVar2 != '\0') {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar15) goto LAB_06abba84;
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          fVar12 = *(float *)(lVar4 + 0x20);
          fVar18 = *(float *)(lVar4 + 0x24);
          fVar22 = *(float *)(lVar4 + 0x28);
          fVar26 = *(float *)(lVar4 + 0x2c);
          fVar31 = fVar18;
          fVar33 = fVar22;
          uVar14 = FUN_07a00c3c(0);
          uVar19 = FUN_07a00c3c(fVar34,fVar32,fVar30,fVar28,fVar36,fVar35,fVar25,0);
          uStack0000000000000000 = FUN_07a00c3c(0);
          fVar31 = (float)FUN_0355e190(uVar14,fVar31,fVar33,uVar19,fVar32,fVar30,0);
          fVar29 = fVar29 * *(float *)(unaff_x19 + 0xb0);
          fVar28 = fVar29;
          if (1.0 < fVar29) {
            fVar28 = 1.0;
          }
          fVar28 = 1.0 - fVar28;
          if (fVar29 < 0.0) {
            fVar28 = 1.0;
          }
          fVar16 = fVar16 * fVar31 * fVar28;
          fVar29 = fVar16 * in_stack_00000058;
          fVar33 = fVar17 * fVar31 * fVar28 * in_stack_00000058;
          fVar28 = (float)FUN_07a00714(fVar21 * fVar31 * fVar28 * in_stack_00000058,0);
          if (*(uint *)(unaff_x20 + 0x18) <= uVar15) goto LAB_06abba84;
          *(float *)(lVar4 + 0x20) =
               (fVar18 * fVar33 + fVar26 * fVar28 + fVar12 * fVar16) - fVar22 * fVar29;
          *(float *)(lVar4 + 0x24) =
               (fVar22 * fVar28 + fVar26 * fVar29 + fVar18 * fVar16) - fVar12 * fVar33;
          *(float *)(lVar4 + 0x28) =
               (fVar12 * fVar29 + fVar26 * fVar33 + fVar22 * fVar16) - fVar18 * fVar28;
          *(float *)(lVar4 + 0x2c) =
               ((fVar26 * fVar16 - fVar12 * fVar28) - fVar18 * fVar29) - fVar22 * fVar33;
        }
        goto LAB_06abb780;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= uVar15) goto LAB_06abba84;
      lVar4 = unaff_x20 + unaff_x26 * 0x10;
      unaff_x25 = (uint *)(lVar4 + 0x20);
      param_1 = (ulong)*unaff_x25;
      puVar9 = (uint *)(lVar4 + 0x24);
      uVar15 = *puVar9;
      puVar10 = (uint *)(lVar4 + 0x28);
      uVar20 = *puVar10;
      puVar11 = (uint *)(lVar4 + 0x2c);
      uVar24 = *puVar11;
      uStack0000000000000000 = unaff_s12;
      goto LAB_06abb75c;
    }
  }
  else {
    if (iVar1 != 2) goto LAB_06abb780;
    if (unaff_x20 != 0) {
      if (*(uint *)(unaff_x20 + 0x18) <= uVar15) goto LAB_06abba84;
      unaff_x25 = (uint *)(unaff_x20 + unaff_x26 * 0x10 + 0x20);
      param_1 = (ulong)*unaff_x25;
      unaff_x27 = unaff_x25;
      unaff_x28 = unaff_x25;
      goto code_r0x06abb5a4;
    }
  }
LAB_06abba88:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


