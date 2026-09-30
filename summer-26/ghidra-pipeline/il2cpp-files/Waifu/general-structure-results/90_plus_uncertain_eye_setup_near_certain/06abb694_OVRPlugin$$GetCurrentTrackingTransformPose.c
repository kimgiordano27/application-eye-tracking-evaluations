/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 06abb694
PROGRAM: Waifu-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentTrackingTransformPose
               (float param_1,ulong param_2,ulong param_3,float param_4,float param_5,float param_6,
               float param_7)

{
  int iVar1;
  byte bVar2;
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
  uint unaff_w25;
  undefined4 *puVar10;
  long unaff_x26;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float unaff_s8;
  float fVar25;
  float unaff_s10;
  float fVar26;
  float unaff_s11;
  float fVar27;
  ulong unaff_d12;
  ulong unaff_d13;
  float fVar28;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float in_s21;
  float in_s22;
  float in_s23;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
code_r0x06abb694:
  fVar28 = (float)param_2;
  fVar27 = (param_7 + param_5 + param_6) - unaff_s8 * fVar28;
  fVar26 = (unaff_s8 * param_1 + in_s16 + in_s17) - unaff_s11 * (float)param_3;
  fVar25 = (unaff_s11 * fVar28 + in_s22 + param_4) - unaff_s10 * param_1;
  fVar28 = ((in_s23 - in_s21) - unaff_s10 * fVar28) - unaff_s8 * (float)param_3;
  fStack0000000000000060 = fVar27;
  fStack0000000000000064 = fVar26;
  fStack0000000000000068 = fVar25;
  fStack000000000000006c = fVar28;
  if (unaff_x20 != 0) {
    uVar9 = (uint)unaff_x26;
    if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
      fVar14 = (float)FUN_06abbbf4(unaff_x20 + unaff_x26 * 0x10 + 0x20,&stack0x00000060);
      if (unaff_s15 <= fVar14) {
        unaff_s15 = fVar14;
      }
      if (0.0 <= fVar14) {
        if (unaff_w25 == 0) goto LAB_06abb780;
        if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          fVar16 = *(float *)(lVar4 + 0x20);
          fVar18 = *(float *)(lVar4 + 0x24);
          fVar21 = *(float *)(lVar4 + 0x28);
          fVar24 = *(float *)(lVar4 + 0x2c);
          fVar19 = fVar18;
          fVar22 = fVar21;
          uVar15 = FUN_07a00c3c(0);
          uVar17 = FUN_07a00c3c(fVar27,fVar26,fVar25,fVar28,unaff_d13,unaff_d12,
                                fStack0000000000000048,0);
          FUN_07a00c3c(0);
          fVar26 = (float)FUN_0355e190(uVar15,fVar19,fVar22,uVar17,fVar26,fVar25,0);
          fVar14 = fVar14 * *(float *)(unaff_x19 + 0xb0);
          fVar28 = fVar14;
          if (1.0 < fVar14) {
            fVar28 = 1.0;
          }
          fVar28 = 1.0 - fVar28;
          if (fVar14 < 0.0) {
            fVar28 = 1.0;
          }
          fVar14 = fStack0000000000000050 * fVar26 * fVar28;
          fVar25 = fVar14 * in_stack_00000058;
          fVar27 = fStack0000000000000054 * fVar26 * fVar28 * in_stack_00000058;
          fVar28 = (float)FUN_07a00714(fStack000000000000004c * fVar26 * fVar28 * in_stack_00000058,
                                       0);
          if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
            *(float *)(lVar4 + 0x20) =
                 (fVar18 * fVar27 + fVar24 * fVar28 + fVar16 * fVar14) - fVar21 * fVar25;
            *(float *)(lVar4 + 0x24) =
                 (fVar21 * fVar28 + fVar24 * fVar25 + fVar18 * fVar14) - fVar16 * fVar27;
            *(float *)(lVar4 + 0x28) =
                 (fVar16 * fVar25 + fVar24 * fVar27 + fVar21 * fVar14) - fVar18 * fVar28;
            *(float *)(lVar4 + 0x2c) =
                 ((fVar24 * fVar14 - fVar16 * fVar28) - fVar18 * fVar25) - fVar21 * fVar27;
            goto LAB_06abb780;
          }
        }
      }
      else if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
        lVar4 = unaff_x20 + unaff_x26 * 0x10;
        puVar10 = (undefined4 *)(lVar4 + 0x20);
        uVar15 = *puVar10;
        puVar11 = (undefined4 *)(lVar4 + 0x24);
        uVar17 = *puVar11;
        puVar12 = (undefined4 *)(lVar4 + 0x28);
        uVar20 = *puVar12;
        puVar13 = (undefined4 *)(lVar4 + 0x2c);
        uVar23 = *puVar13;
        while (uVar15 = FUN_07a00498(uVar15,0), (uint)unaff_x26 < *(uint *)(unaff_x20 + 0x18)) {
          *puVar10 = uVar15;
          *puVar11 = uVar17;
          *puVar12 = uVar20;
          *puVar13 = uVar23;
LAB_06abb780:
          do {
            lVar4 = *(long *)(unaff_x19 + 0x158);
            if (lVar4 == 0) goto LAB_06abba88;
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
            uVar17 = *(undefined4 *)(lVar4 + 0x24);
            uVar20 = *(undefined4 *)(lVar4 + 0x28);
            uVar23 = *(undefined4 *)(lVar4 + 0x2c);
            uVar15 = FUN_07a00498(*(undefined4 *)(lVar4 + 0x20),0);
            if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_06abba84;
            *(undefined4 *)(lVar5 + 0x20) = uVar15;
            *(undefined4 *)(lVar5 + 0x24) = uVar17;
            *(undefined4 *)(lVar5 + 0x28) = uVar20;
            *(undefined4 *)(lVar5 + 0x2c) = uVar23;
            if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_06abba84;
            lVar4 = *(long *)(unaff_x19 + 0x150);
            if (lVar4 == 0) goto LAB_06abba88;
            if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_06abba84;
            lVar4 = lVar4 + unaff_x22 * 4;
            unaff_x22 = unaff_x22 + 4;
            unaff_x21 = unaff_x21 + 1;
            *(undefined4 *)(lVar4 + 0x20) = uVar15;
            *(undefined4 *)(lVar4 + 0x24) = uVar17;
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
            unaff_s11 = *(float *)(lVar7 + 0x20);
            unaff_s10 = *(float *)(lVar7 + 0x24);
            unaff_s8 = *(float *)(lVar7 + 0x28);
            fVar28 = *(float *)(lVar7 + 0x2c);
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
            if (iVar1 == 1) {
              if (*(int *)(lVar4 + 0xe0) == 0) {
                FUN_033b9870();
                plVar3 = *(long **)(*(long *)(unaff_x23 + 0x858) + 0xb8);
              }
              lVar4 = plVar3[3];
              if (lVar4 == 0) goto LAB_06abba88;
              if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_06abba84;
              lVar5 = *(long *)(unaff_x24 + 0xce0);
              bVar2 = *(byte *)(lVar4 + unaff_x21 + 0x20);
              unaff_w25 = (uint)bVar2;
              if (bVar2 != 0) {
                unaff_s15 = 0.0;
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
              param_4 = unaff_s15 * fStack0000000000000048 * -90.0;
              param_2 = (ulong)(uint)(unaff_s15 * *(float *)(lVar4 + 0x28) * -90.0 *
                                     in_stack_00000058);
              param_3 = (ulong)(uint)(param_4 * in_stack_00000058);
              param_1 = (float)FUN_07a00714(unaff_s15 * *(float *)(lVar4 + 0x24) * -90.0 *
                                            in_stack_00000058,0);
              param_5 = fVar28 * param_1;
              param_6 = unaff_s11 * param_4;
              in_s16 = fVar28 * (float)param_2;
              in_s17 = unaff_s10 * param_4;
              in_s21 = unaff_s11 * param_1;
              in_s22 = fVar28 * (float)param_3;
              in_s23 = fVar28 * param_4;
              param_4 = unaff_s8 * param_4;
              param_7 = unaff_s10 * (float)param_3;
              goto code_r0x06abb694;
            }
          } while (iVar1 != 2);
          if (unaff_x20 == 0) goto LAB_06abba88;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          puVar10 = (undefined4 *)(lVar4 + 0x20);
          uVar15 = *puVar10;
          puVar11 = (undefined4 *)(lVar4 + 0x24);
          uVar17 = *puVar11;
          puVar12 = (undefined4 *)(lVar4 + 0x28);
          uVar20 = *puVar12;
          puVar13 = (undefined4 *)(lVar4 + 0x2c);
          uVar23 = *puVar13;
        }
      }
    }
LAB_06abba84:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
LAB_06abba88:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


