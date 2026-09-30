/*
FUNCTION_NAME: OVRPlugin$$SetSimultaneousHandsAndControllersEnabled
ENTRY_POINT: 06abb4d4
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetSimultaneousHandsAndControllersEnabled(long *param_1,long param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long in_x9;
  uint uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  uint uVar7;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float unaff_s15;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  do {
    uVar4 = *(uint *)(in_x9 + 0x18);
    uVar7 = (uint)unaff_x21;
    if ((int)uVar4 <= (int)uVar7) {
      return;
    }
    lVar5 = *(long *)(unaff_x19 + 0x158);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_06abba84;
    lVar6 = *(long *)(unaff_x19 + 0x140);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_06abba84;
    if (*(long *)(unaff_x19 + 0xd0) == 0) break;
    if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= uVar7) goto LAB_06abba84;
    lVar6 = lVar6 + unaff_x22 * 4;
    iVar1 = *(int *)(lVar5 + unaff_x22 + 0x20);
    fVar29 = *(float *)(lVar6 + 0x20);
    fVar27 = *(float *)(lVar6 + 0x24);
    fVar24 = *(float *)(lVar6 + 0x28);
    fVar25 = *(float *)(lVar6 + 0x2c);
    if (*(int *)(param_2 + 0xe0) == 0) {
      FUN_033b9870();
      param_2 = *(long *)(unaff_x23 + 0x858);
      param_1 = *(long **)(param_2 + 0xb8);
      in_x9 = *param_1;
      if (in_x9 == 0) break;
      uVar4 = *(uint *)(in_x9 + 0x18);
    }
    if (uVar4 <= uVar7) goto LAB_06abba84;
    uVar4 = *(uint *)(in_x9 + unaff_x22 + 0x20);
    lVar5 = (long)(int)uVar4;
    if (iVar1 == 1) {
      if (*(int *)(param_2 + 0xe0) == 0) {
        FUN_033b9870();
        param_1 = *(long **)(*(long *)(unaff_x23 + 0x858) + 0xb8);
      }
      lVar6 = param_1[3];
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_06abba84;
      lVar3 = *(long *)(unaff_x24 + 0xce0);
      cVar2 = *(char *)(lVar6 + unaff_x21 + 0x20);
      if (cVar2 != '\0') {
        unaff_s15 = 0.0;
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        FUN_033b9870();
        lVar3 = *(long *)(unaff_x24 + 0xce0);
      }
      lVar6 = *(long *)(lVar3 + 0xb8);
      fVar19 = *(float *)(lVar6 + 0x3c);
      fVar15 = *(float *)(lVar6 + 0x40);
      fVar32 = *(float *)(lVar6 + 0x24);
      fVar31 = *(float *)(lVar6 + 0x28);
      fVar22 = *(float *)(lVar6 + 0x2c);
      fVar16 = *(float *)(lVar6 + 0x44);
      fVar23 = unaff_s15 * fVar22 * -90.0;
      fVar17 = unaff_s15 * fVar31 * -90.0 * in_stack_00000058;
      fVar20 = fVar23 * in_stack_00000058;
      fVar13 = (float)FUN_07a00714(unaff_s15 * fVar32 * -90.0 * in_stack_00000058,0);
      fVar30 = (fVar27 * fVar20 + fVar25 * fVar13 + fVar29 * fVar23) - fVar24 * fVar17;
      fVar28 = (fVar24 * fVar13 + fVar25 * fVar17 + fVar27 * fVar23) - fVar29 * fVar20;
      fVar26 = (fVar29 * fVar17 + fVar25 * fVar20 + fVar24 * fVar23) - fVar27 * fVar13;
      fVar24 = ((fVar25 * fVar23 - fVar29 * fVar13) - fVar27 * fVar17) - fVar24 * fVar20;
      fStack0000000000000060 = fVar30;
      fStack0000000000000064 = fVar28;
      fStack0000000000000068 = fVar26;
      fStack000000000000006c = fVar24;
      if (unaff_x20 == 0) break;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_06abba84;
      fVar25 = (float)FUN_06abbbf4(unaff_x20 + lVar5 * 0x10 + 0x20,&stack0x00000060);
      if (unaff_s15 <= fVar25) {
        unaff_s15 = fVar25;
      }
      if (fVar25 < 0.0) {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_06abba84;
        lVar6 = unaff_x20 + lVar5 * 0x10;
        puVar8 = (undefined4 *)(lVar6 + 0x20);
        uVar12 = *puVar8;
        puVar9 = (undefined4 *)(lVar6 + 0x24);
        uVar14 = *puVar9;
        puVar10 = (undefined4 *)(lVar6 + 0x28);
        uVar18 = *puVar10;
        puVar11 = (undefined4 *)(lVar6 + 0x2c);
        uVar21 = *puVar11;
        goto LAB_06abb75c;
      }
      if (cVar2 != '\0') {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_06abba84;
        lVar6 = unaff_x20 + lVar5 * 0x10;
        fVar13 = *(float *)(lVar6 + 0x20);
        fVar17 = *(float *)(lVar6 + 0x24);
        fVar20 = *(float *)(lVar6 + 0x28);
        fVar23 = *(float *)(lVar6 + 0x2c);
        fVar27 = fVar17;
        fVar29 = fVar20;
        uVar12 = FUN_07a00c3c(0);
        uVar14 = FUN_07a00c3c(fVar30,fVar28,fVar26,fVar24,fVar32,fVar31,fVar22,0);
        FUN_07a00c3c(0);
        fVar27 = (float)FUN_0355e190(uVar12,fVar27,fVar29,uVar14,fVar28,fVar26,0);
        fVar25 = fVar25 * *(float *)(unaff_x19 + 0xb0);
        fVar24 = fVar25;
        if (1.0 < fVar25) {
          fVar24 = 1.0;
        }
        fVar24 = 1.0 - fVar24;
        if (fVar25 < 0.0) {
          fVar24 = 1.0;
        }
        fVar15 = fVar15 * fVar27 * fVar24;
        fVar25 = fVar15 * in_stack_00000058;
        fVar29 = fVar16 * fVar27 * fVar24 * in_stack_00000058;
        fVar24 = (float)FUN_07a00714(fVar19 * fVar27 * fVar24 * in_stack_00000058,0);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_06abba84;
        *(float *)(lVar6 + 0x20) =
             (fVar17 * fVar29 + fVar23 * fVar24 + fVar13 * fVar15) - fVar20 * fVar25;
        *(float *)(lVar6 + 0x24) =
             (fVar20 * fVar24 + fVar23 * fVar25 + fVar17 * fVar15) - fVar13 * fVar29;
        *(float *)(lVar6 + 0x28) =
             (fVar13 * fVar25 + fVar23 * fVar29 + fVar20 * fVar15) - fVar17 * fVar24;
        *(float *)(lVar6 + 0x2c) =
             ((fVar23 * fVar15 - fVar13 * fVar24) - fVar17 * fVar25) - fVar20 * fVar29;
      }
    }
    else if (iVar1 == 2) {
      if (unaff_x20 == 0) break;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_06abba84;
      lVar6 = unaff_x20 + lVar5 * 0x10;
      puVar8 = (undefined4 *)(lVar6 + 0x20);
      uVar12 = *puVar8;
      puVar9 = (undefined4 *)(lVar6 + 0x24);
      uVar14 = *puVar9;
      puVar10 = (undefined4 *)(lVar6 + 0x28);
      uVar18 = *puVar10;
      puVar11 = (undefined4 *)(lVar6 + 0x2c);
      uVar21 = *puVar11;
LAB_06abb75c:
      uVar12 = FUN_07a00498(uVar12,0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_06abba84;
      *puVar8 = uVar12;
      *puVar9 = uVar14;
      *puVar10 = uVar18;
      *puVar11 = uVar21;
    }
    lVar6 = *(long *)(unaff_x19 + 0x158);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar7) {
LAB_06abba84:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    if (*(int *)(lVar6 + unaff_x22 + 0x20) == 0) {
      lVar6 = *(long *)(unaff_x19 + 0xe0);
    }
    else {
      lVar6 = *(long *)(unaff_x19 + 0xd8);
    }
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_06abba84;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) break;
    FUN_06a716e8(lVar6,0);
    lVar6 = *(long *)(unaff_x19 + 0x148);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_06abba84;
    if (unaff_x20 == 0) break;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_06abba84;
    lVar6 = lVar6 + unaff_x22 * 4;
    lVar5 = unaff_x20 + lVar5 * 0x10;
    uVar14 = *(undefined4 *)(lVar6 + 0x24);
    uVar18 = *(undefined4 *)(lVar6 + 0x28);
    uVar21 = *(undefined4 *)(lVar6 + 0x2c);
    uVar12 = FUN_07a00498(*(undefined4 *)(lVar6 + 0x20),0);
    if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_06abba84;
    *(undefined4 *)(lVar5 + 0x20) = uVar12;
    *(undefined4 *)(lVar5 + 0x24) = uVar14;
    *(undefined4 *)(lVar5 + 0x28) = uVar18;
    *(undefined4 *)(lVar5 + 0x2c) = uVar21;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_06abba84;
    lVar5 = *(long *)(unaff_x19 + 0x150);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_06abba84;
    lVar5 = lVar5 + unaff_x22 * 4;
    unaff_x22 = unaff_x22 + 4;
    unaff_x21 = unaff_x21 + 1;
    *(undefined4 *)(lVar5 + 0x20) = uVar12;
    *(undefined4 *)(lVar5 + 0x24) = uVar14;
    *(undefined4 *)(lVar5 + 0x28) = uVar18;
    *(undefined4 *)(lVar5 + 0x2c) = uVar21;
    param_2 = *(long *)(unaff_x23 + 0x858);
    if (*(int *)(param_2 + 0xe0) == 0) {
      FUN_033b9870();
      param_2 = *(long *)(unaff_x23 + 0x858);
    }
    param_1 = *(long **)(param_2 + 0xb8);
    in_x9 = *param_1;
  } while (in_x9 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


