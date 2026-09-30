/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRawPose
ENTRY_POINT: 06abb7b4
PROGRAM: Waifu-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackingTransformRawPose(long param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  uint uVar8;
  uint uVar9;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined4 *puVar10;
  long unaff_x26;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float unaff_s15;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  do {
    uVar9 = (uint)unaff_x21;
    if (*(uint *)(param_1 + 0x18) <= uVar9) goto LAB_06abba84;
    lVar3 = *(long *)(param_1 + unaff_x21 * 8 + 0x20);
    if (lVar3 == 0) break;
    FUN_06a716e8(lVar3,0);
    lVar3 = *(long *)(unaff_x19 + 0x148);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar9) goto LAB_06abba84;
    if (unaff_x20 == 0) break;
    uVar8 = (uint)unaff_x26;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_06abba84;
    lVar3 = lVar3 + unaff_x22 * 4;
    lVar5 = unaff_x20 + unaff_x26 * 0x10;
    uVar19 = *(undefined4 *)(lVar3 + 0x24);
    uVar22 = *(undefined4 *)(lVar3 + 0x28);
    uVar25 = *(undefined4 *)(lVar3 + 0x2c);
    uVar15 = FUN_07a00498(*(undefined4 *)(lVar3 + 0x20),0);
    if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_06abba84;
    *(undefined4 *)(lVar5 + 0x20) = uVar15;
    *(undefined4 *)(lVar5 + 0x24) = uVar19;
    *(undefined4 *)(lVar5 + 0x28) = uVar22;
    *(undefined4 *)(lVar5 + 0x2c) = uVar25;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_06abba84;
    lVar3 = *(long *)(unaff_x19 + 0x150);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar9) goto LAB_06abba84;
    lVar3 = lVar3 + unaff_x22 * 4;
    unaff_x22 = unaff_x22 + 4;
    unaff_x21 = unaff_x21 + 1;
    *(undefined4 *)(lVar3 + 0x20) = uVar15;
    *(undefined4 *)(lVar3 + 0x24) = uVar19;
    *(undefined4 *)(lVar3 + 0x28) = uVar22;
    *(undefined4 *)(lVar3 + 0x2c) = uVar25;
    lVar3 = *(long *)(unaff_x23 + 0x858);
    if (*(int *)(lVar3 + 0xe0) == 0) {
      FUN_033b9870();
      lVar3 = *(long *)(unaff_x23 + 0x858);
    }
    plVar4 = *(long **)(lVar3 + 0xb8);
    lVar5 = *plVar4;
    if (lVar5 == 0) break;
    uVar9 = *(uint *)(lVar5 + 0x18);
    uVar8 = (uint)unaff_x21;
    if ((int)uVar9 <= (int)uVar8) {
      return;
    }
    lVar6 = *(long *)(unaff_x19 + 0x158);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_06abba84;
    lVar7 = *(long *)(unaff_x19 + 0x140);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_06abba84;
    if (*(long *)(unaff_x19 + 0xd0) == 0) break;
    if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= uVar8) goto LAB_06abba84;
    lVar7 = lVar7 + unaff_x22 * 4;
    iVar1 = *(int *)(lVar6 + unaff_x22 + 0x20);
    fVar31 = *(float *)(lVar7 + 0x20);
    fVar29 = *(float *)(lVar7 + 0x24);
    fVar26 = *(float *)(lVar7 + 0x28);
    fVar27 = *(float *)(lVar7 + 0x2c);
    if (*(int *)(lVar3 + 0xe0) == 0) {
      FUN_033b9870();
      lVar3 = *(long *)(unaff_x23 + 0x858);
      plVar4 = *(long **)(lVar3 + 0xb8);
      lVar5 = *plVar4;
      if (lVar5 == 0) break;
      uVar9 = *(uint *)(lVar5 + 0x18);
    }
    if (uVar9 <= uVar8) goto LAB_06abba84;
    uVar9 = *(uint *)(lVar5 + unaff_x22 + 0x20);
    unaff_x26 = (long)(int)uVar9;
    if (iVar1 == 1) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        FUN_033b9870();
        plVar4 = *(long **)(*(long *)(unaff_x23 + 0x858) + 0xb8);
      }
      lVar3 = plVar4[3];
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_06abba84;
      lVar5 = *(long *)(unaff_x24 + 0xce0);
      cVar2 = *(char *)(lVar3 + unaff_x21 + 0x20);
      if (cVar2 != '\0') {
        unaff_s15 = 0.0;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        FUN_033b9870();
        lVar5 = *(long *)(unaff_x24 + 0xce0);
      }
      lVar3 = *(long *)(lVar5 + 0xb8);
      fVar20 = *(float *)(lVar3 + 0x3c);
      fVar16 = *(float *)(lVar3 + 0x40);
      fVar34 = *(float *)(lVar3 + 0x24);
      fVar33 = *(float *)(lVar3 + 0x28);
      fVar23 = *(float *)(lVar3 + 0x2c);
      fVar17 = *(float *)(lVar3 + 0x44);
      fVar24 = unaff_s15 * fVar23 * -90.0;
      fVar18 = unaff_s15 * fVar33 * -90.0 * in_stack_00000058;
      fVar21 = fVar24 * in_stack_00000058;
      fVar14 = (float)FUN_07a00714(unaff_s15 * fVar34 * -90.0 * in_stack_00000058,0);
      fVar32 = (fVar29 * fVar21 + fVar27 * fVar14 + fVar31 * fVar24) - fVar26 * fVar18;
      fVar30 = (fVar26 * fVar14 + fVar27 * fVar18 + fVar29 * fVar24) - fVar31 * fVar21;
      fVar28 = (fVar31 * fVar18 + fVar27 * fVar21 + fVar26 * fVar24) - fVar29 * fVar14;
      fVar26 = ((fVar27 * fVar24 - fVar31 * fVar14) - fVar29 * fVar18) - fVar26 * fVar21;
      fStack0000000000000060 = fVar32;
      fStack0000000000000064 = fVar30;
      fStack0000000000000068 = fVar28;
      fStack000000000000006c = fVar26;
      if (unaff_x20 == 0) break;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_06abba84;
      fVar27 = (float)FUN_06abbbf4(unaff_x20 + unaff_x26 * 0x10 + 0x20,&stack0x00000060);
      if (unaff_s15 <= fVar27) {
        unaff_s15 = fVar27;
      }
      if (fVar27 < 0.0) {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_06abba84;
        lVar3 = unaff_x20 + unaff_x26 * 0x10;
        puVar10 = (undefined4 *)(lVar3 + 0x20);
        uVar15 = *puVar10;
        puVar11 = (undefined4 *)(lVar3 + 0x24);
        uVar19 = *puVar11;
        puVar12 = (undefined4 *)(lVar3 + 0x28);
        uVar22 = *puVar12;
        puVar13 = (undefined4 *)(lVar3 + 0x2c);
        uVar25 = *puVar13;
        goto LAB_06abb75c;
      }
      if (cVar2 != '\0') {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_06abba84;
        lVar3 = unaff_x20 + unaff_x26 * 0x10;
        fVar14 = *(float *)(lVar3 + 0x20);
        fVar18 = *(float *)(lVar3 + 0x24);
        fVar21 = *(float *)(lVar3 + 0x28);
        fVar24 = *(float *)(lVar3 + 0x2c);
        fVar29 = fVar18;
        fVar31 = fVar21;
        uVar15 = FUN_07a00c3c(0);
        uVar19 = FUN_07a00c3c(fVar32,fVar30,fVar28,fVar26,fVar34,fVar33,fVar23,0);
        FUN_07a00c3c(0);
        fVar29 = (float)FUN_0355e190(uVar15,fVar29,fVar31,uVar19,fVar30,fVar28,0);
        fVar27 = fVar27 * *(float *)(unaff_x19 + 0xb0);
        fVar26 = fVar27;
        if (1.0 < fVar27) {
          fVar26 = 1.0;
        }
        fVar26 = 1.0 - fVar26;
        if (fVar27 < 0.0) {
          fVar26 = 1.0;
        }
        fVar16 = fVar16 * fVar29 * fVar26;
        fVar27 = fVar16 * in_stack_00000058;
        fVar31 = fVar17 * fVar29 * fVar26 * in_stack_00000058;
        fVar26 = (float)FUN_07a00714(fVar20 * fVar29 * fVar26 * in_stack_00000058,0);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_06abba84;
        *(float *)(lVar3 + 0x20) =
             (fVar18 * fVar31 + fVar24 * fVar26 + fVar14 * fVar16) - fVar21 * fVar27;
        *(float *)(lVar3 + 0x24) =
             (fVar21 * fVar26 + fVar24 * fVar27 + fVar18 * fVar16) - fVar14 * fVar31;
        *(float *)(lVar3 + 0x28) =
             (fVar14 * fVar27 + fVar24 * fVar31 + fVar21 * fVar16) - fVar18 * fVar26;
        *(float *)(lVar3 + 0x2c) =
             ((fVar24 * fVar16 - fVar14 * fVar26) - fVar18 * fVar27) - fVar21 * fVar31;
      }
    }
    else if (iVar1 == 2) {
      if (unaff_x20 == 0) break;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_06abba84;
      lVar3 = unaff_x20 + unaff_x26 * 0x10;
      puVar10 = (undefined4 *)(lVar3 + 0x20);
      uVar15 = *puVar10;
      puVar11 = (undefined4 *)(lVar3 + 0x24);
      uVar19 = *puVar11;
      puVar12 = (undefined4 *)(lVar3 + 0x28);
      uVar22 = *puVar12;
      puVar13 = (undefined4 *)(lVar3 + 0x2c);
      uVar25 = *puVar13;
LAB_06abb75c:
      uVar15 = FUN_07a00498(uVar15,0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_06abba84;
      *puVar10 = uVar15;
      *puVar11 = uVar19;
      *puVar12 = uVar22;
      *puVar13 = uVar25;
    }
    lVar3 = *(long *)(unaff_x19 + 0x158);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar8) {
LAB_06abba84:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    if (*(int *)(lVar3 + unaff_x22 + 0x20) == 0) {
      param_1 = *(long *)(unaff_x19 + 0xe0);
    }
    else {
      param_1 = *(long *)(unaff_x19 + 0xd8);
    }
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


