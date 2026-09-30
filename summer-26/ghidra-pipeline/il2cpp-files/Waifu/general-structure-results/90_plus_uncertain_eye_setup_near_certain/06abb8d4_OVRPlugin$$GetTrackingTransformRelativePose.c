/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRelativePose
ENTRY_POINT: 06abb8d4
PROGRAM: Waifu-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackingTransformRelativePose
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
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
  float *unaff_x25;
  long unaff_x26;
  undefined4 *puVar11;
  float *unaff_x27;
  undefined4 *puVar12;
  float *unaff_x28;
  undefined4 *puVar13;
  float *unaff_x29;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float unaff_s8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  undefined8 in_stack_00000020;
  float in_stack_00000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  while( true ) {
    fStack0000000000000034 = unaff_x25[3];
    uVar14 = FUN_07a00c3c(param_4);
    uVar15 = FUN_07a00c3c(unaff_d11,unaff_d10,unaff_d9,unaff_d14,unaff_d13,unaff_d12,
                          fStack0000000000000048,0);
    fVar25 = fStack0000000000000034;
    FUN_07a00c3c(0);
    fVar16 = (float)FUN_0355e190(uVar14,param_2,param_3,uVar15,unaff_d10 & 0xffffffff,
                                 unaff_d9 & 0xffffffff,0);
    fVar17 = unaff_s8 * *(float *)(unaff_x19 + 0xb0);
    fVar18 = fVar17;
    if (1.0 < fVar17) {
      fVar18 = 1.0;
    }
    fVar18 = 1.0 - fVar18;
    if (fVar17 < 0.0) {
      fVar18 = 1.0;
    }
    fVar24 = fStack0000000000000050 * fVar16 * fVar18;
    fVar17 = fVar24 * fStack0000000000000058;
    fVar21 = fStack0000000000000054 * fVar16 * fVar18 * fStack0000000000000058;
    fVar18 = (float)FUN_07a00714(fStack000000000000004c * fVar16 * fVar18 * fStack0000000000000058,0
                                );
    if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x26) break;
    *unaff_x27 = (in_stack_00000030 * fVar21 + fVar25 * fVar18 + in_stack_00000038 * fVar24) -
                 in_stack_00000020._4_4_ * fVar17;
    *unaff_x28 = (in_stack_00000020._4_4_ * fVar18 + fVar25 * fVar17 + in_stack_00000030 * fVar24) -
                 in_stack_00000038 * fVar21;
    *unaff_x29 = (in_stack_00000038 * fVar17 + fVar25 * fVar21 + in_stack_00000020._4_4_ * fVar24) -
                 in_stack_00000030 * fVar18;
    unaff_x25[3] = ((fVar25 * fVar24 - in_stack_00000038 * fVar18) - in_stack_00000030 * fVar17) -
                   in_stack_00000020._4_4_ * fVar21;
LAB_06abb780:
    do {
      lVar4 = *(long *)(unaff_x19 + 0x158);
      if (lVar4 == 0) {
LAB_06abba88:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar9 = (uint)unaff_x21;
      if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_06abba84;
      if (*(int *)(lVar4 + unaff_x22 + 0x20) == 0) {
        lVar4 = *(long *)(unaff_x19 + 0xe0);
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0xd8);
      }
      if (lVar4 == 0) goto LAB_06abba88;
      if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_06abba84;
      lVar4 = *(long *)(lVar4 + unaff_x21 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_06abba88;
      FUN_06a716e8(lVar4,0);
      lVar4 = *(long *)(unaff_x19 + 0x148);
      if (lVar4 == 0) goto LAB_06abba88;
      if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_06abba84;
      if (unaff_x20 == 0) goto LAB_06abba88;
      uVar8 = (uint)unaff_x26;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_06abba84;
      lVar4 = lVar4 + unaff_x22 * 4;
      lVar5 = unaff_x20 + unaff_x26 * 0x10;
      uVar15 = *(undefined4 *)(lVar4 + 0x24);
      uVar20 = *(undefined4 *)(lVar4 + 0x28);
      uVar23 = *(undefined4 *)(lVar4 + 0x2c);
      uVar14 = FUN_07a00498(*(undefined4 *)(lVar4 + 0x20),0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_06abba84;
      *(undefined4 *)(lVar5 + 0x20) = uVar14;
      *(undefined4 *)(lVar5 + 0x24) = uVar15;
      *(undefined4 *)(lVar5 + 0x28) = uVar20;
      *(undefined4 *)(lVar5 + 0x2c) = uVar23;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_06abba84;
      lVar4 = *(long *)(unaff_x19 + 0x150);
      if (lVar4 == 0) goto LAB_06abba88;
      if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_06abba84;
      lVar4 = lVar4 + unaff_x22 * 4;
      unaff_x22 = unaff_x22 + 4;
      unaff_x21 = unaff_x21 + 1;
      *(undefined4 *)(lVar4 + 0x20) = uVar14;
      *(undefined4 *)(lVar4 + 0x24) = uVar15;
      *(undefined4 *)(lVar4 + 0x28) = uVar20;
      *(undefined4 *)(lVar4 + 0x2c) = uVar23;
      lVar4 = *(long *)(unaff_x23 + 0x858);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        FUN_033b9870();
        lVar4 = *(long *)(unaff_x23 + 0x858);
      }
      plVar3 = *(long **)(lVar4 + 0xb8);
      lVar5 = *plVar3;
      if (lVar5 == 0) goto LAB_06abba88;
      uVar9 = *(uint *)(lVar5 + 0x18);
      uVar8 = (uint)unaff_x21;
      if ((int)uVar9 <= (int)uVar8) {
        return;
      }
      lVar6 = *(long *)(unaff_x19 + 0x158);
      if (lVar6 == 0) goto LAB_06abba88;
      if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_06abba84;
      lVar7 = *(long *)(unaff_x19 + 0x140);
      if (lVar7 == 0) goto LAB_06abba88;
      if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_06abba84;
      if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_06abba88;
      if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= uVar8) goto LAB_06abba84;
      lVar7 = lVar7 + unaff_x22 * 4;
      iVar1 = *(int *)(lVar6 + unaff_x22 + 0x20);
      fVar17 = *(float *)(lVar7 + 0x20);
      fVar16 = *(float *)(lVar7 + 0x24);
      fVar25 = *(float *)(lVar7 + 0x28);
      fVar18 = *(float *)(lVar7 + 0x2c);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        FUN_033b9870();
        lVar4 = *(long *)(unaff_x23 + 0x858);
        plVar3 = *(long **)(lVar4 + 0xb8);
        lVar5 = *plVar3;
        if (lVar5 == 0) goto LAB_06abba88;
        uVar9 = *(uint *)(lVar5 + 0x18);
      }
      if (uVar9 <= uVar8) goto LAB_06abba84;
      uVar9 = *(uint *)(lVar5 + unaff_x22 + 0x20);
      unaff_x26 = (long)(int)uVar9;
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (unaff_x20 == 0) goto LAB_06abba88;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_06abba84;
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          puVar10 = (undefined4 *)(lVar4 + 0x20);
          uVar14 = *puVar10;
          puVar11 = (undefined4 *)(lVar4 + 0x24);
          uVar15 = *puVar11;
          puVar12 = (undefined4 *)(lVar4 + 0x28);
          uVar20 = *puVar12;
          puVar13 = (undefined4 *)(lVar4 + 0x2c);
          uVar23 = *puVar13;
LAB_06abb75c:
          uVar14 = FUN_07a00498(uVar14,0);
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_06abba84;
          *puVar10 = uVar14;
          *puVar11 = uVar15;
          *puVar12 = uVar20;
          *puVar13 = uVar23;
        }
        goto LAB_06abb780;
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        FUN_033b9870();
        plVar3 = *(long **)(*(long *)(unaff_x23 + 0x858) + 0xb8);
      }
      lVar4 = plVar3[3];
      if (lVar4 == 0) goto LAB_06abba88;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_06abba84;
      lVar5 = *(long *)(unaff_x24 + 0xce0);
      cVar2 = *(char *)(lVar4 + unaff_x21 + 0x20);
      if (cVar2 != '\0') {
        fStack000000000000005c = 0.0;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        FUN_033b9870();
        lVar5 = *(long *)(unaff_x24 + 0xce0);
      }
      lVar4 = *(long *)(lVar5 + 0xb8);
      fStack000000000000004c = *(float *)(lVar4 + 0x3c);
      fStack0000000000000050 = *(float *)(lVar4 + 0x40);
      unaff_d13 = (ulong)(uint)*(float *)(lVar4 + 0x24);
      unaff_d12 = (ulong)(uint)*(float *)(lVar4 + 0x28);
      fStack0000000000000048 = *(float *)(lVar4 + 0x2c);
      fStack0000000000000054 = *(float *)(lVar4 + 0x44);
      fVar22 = fStack000000000000005c * fStack0000000000000048 * -90.0;
      fVar24 = fStack000000000000005c * *(float *)(lVar4 + 0x28) * -90.0 * fStack0000000000000058;
      fVar19 = fVar22 * fStack0000000000000058;
      fVar21 = (float)FUN_07a00714(fStack000000000000005c * *(float *)(lVar4 + 0x24) * -90.0 *
                                   fStack0000000000000058,0);
      fStack0000000000000060 =
           (fVar16 * fVar19 + fVar18 * fVar21 + fVar17 * fVar22) - fVar25 * fVar24;
      unaff_d11 = (ulong)(uint)fStack0000000000000060;
      fStack0000000000000064 =
           (fVar25 * fVar21 + fVar18 * fVar24 + fVar16 * fVar22) - fVar17 * fVar19;
      unaff_d10 = (ulong)(uint)fStack0000000000000064;
      fStack0000000000000068 =
           (fVar17 * fVar24 + fVar18 * fVar19 + fVar25 * fVar22) - fVar16 * fVar21;
      unaff_d9 = (ulong)(uint)fStack0000000000000068;
      fStack000000000000006c =
           ((fVar18 * fVar22 - fVar17 * fVar21) - fVar16 * fVar24) - fVar25 * fVar19;
      unaff_d14 = (ulong)(uint)fStack000000000000006c;
      if (unaff_x20 == 0) goto LAB_06abba88;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_06abba84;
      unaff_s8 = (float)FUN_06abbbf4(unaff_x20 + unaff_x26 * 0x10 + 0x20,&stack0x00000060);
      if (fStack000000000000005c <= unaff_s8) {
        fStack000000000000005c = unaff_s8;
      }
      if (unaff_s8 < 0.0) {
        if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          puVar10 = (undefined4 *)(lVar4 + 0x20);
          uVar14 = *puVar10;
          puVar11 = (undefined4 *)(lVar4 + 0x24);
          uVar15 = *puVar11;
          puVar12 = (undefined4 *)(lVar4 + 0x28);
          uVar20 = *puVar12;
          puVar13 = (undefined4 *)(lVar4 + 0x2c);
          uVar23 = *puVar13;
          goto LAB_06abb75c;
        }
        goto LAB_06abba84;
      }
    } while (cVar2 == '\0');
    if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
    lVar4 = unaff_x20 + unaff_x26 * 0x10;
    unaff_x25 = (float *)(lVar4 + 0x20);
    in_stack_00000038 = *unaff_x25;
    param_4 = 0;
    unaff_x28 = (float *)(lVar4 + 0x24);
    in_stack_00000030 = *unaff_x28;
    unaff_x29 = (float *)(lVar4 + 0x28);
    in_stack_00000020._4_4_ = *unaff_x29;
    unaff_x27 = unaff_x25;
    param_2 = in_stack_00000030;
    param_3 = in_stack_00000020._4_4_;
  }
LAB_06abba84:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


