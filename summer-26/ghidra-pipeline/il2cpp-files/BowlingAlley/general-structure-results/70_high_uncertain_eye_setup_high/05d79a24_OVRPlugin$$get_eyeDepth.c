/*
FUNCTION_NAME: OVRPlugin$$get_eyeDepth
ENTRY_POINT: 05d79a24
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_eyeDepth
               (float param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
               float param_6)

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
  uint unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  undefined4 *puVar8;
  long unaff_x25;
  uint uVar9;
  long unaff_x26;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  float unaff_s15;
  float in_s19;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  undefined4 uStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
code_r0x05d79a24:
  param_6 = param_6 - in_s19;
  param_4 = param_4 - param_1;
  param_2 = param_2 - param_3;
  uStack0000000000000060 = (undefined4)unaff_d11;
  fStack0000000000000064 = param_6;
  fStack0000000000000068 = param_4;
  fStack000000000000006c = param_2;
  if (unaff_x20 != 0) {
    uVar9 = (uint)unaff_x26;
    if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
      fVar14 = (float)FUN_05d7a0d8(unaff_x20 + unaff_x26 * 0x10 + 0x20,&stack0x00000060);
      if (unaff_s15 <= fVar14) {
        unaff_s15 = fVar14;
      }
      if (0.0 <= fVar14) {
        if (unaff_w24 == 0) goto LAB_05d79ad0;
        if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          fVar26 = *(float *)(lVar4 + 0x20);
          fVar13 = *(float *)(lVar4 + 0x24);
          fVar16 = *(float *)(lVar4 + 0x28);
          fVar18 = *(float *)(lVar4 + 0x2c);
          fVar24 = fVar13;
          fVar25 = fVar16;
          uVar15 = FUN_06bde1c4(0);
          uVar17 = FUN_06bde1c4(unaff_d11,param_6,param_4,param_2,unaff_d13,unaff_d12,
                                fStack0000000000000048,0);
          FUN_06bde1c4(0);
          fVar25 = (float)FUN_05bfefc8(uVar15,fVar24,fVar25,uVar17,param_6,param_4,0);
          fVar14 = fVar14 * *(float *)(unaff_x19 + 0xb0);
          fVar24 = fVar14;
          if (1.0 < fVar14) {
            fVar24 = 1.0;
          }
          fVar24 = 1.0 - fVar24;
          if (fVar14 < 0.0) {
            fVar24 = 1.0;
          }
          fVar23 = fStack0000000000000050 * fVar25 * fVar24;
          fVar21 = fVar23 * in_stack_00000058;
          fVar20 = fStack0000000000000054 * fVar25 * fVar24 * in_stack_00000058;
          fVar14 = (float)FUN_06bddcac(fStack000000000000004c * fVar25 * fVar24 * in_stack_00000058,
                                       0);
          if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
            *(float *)(lVar4 + 0x20) =
                 (fVar13 * fVar20 + fVar18 * fVar14 + fVar26 * fVar23) - fVar16 * fVar21;
            *(float *)(lVar4 + 0x24) =
                 (fVar16 * fVar14 + fVar18 * fVar21 + fVar13 * fVar23) - fVar26 * fVar20;
            *(float *)(lVar4 + 0x28) =
                 (fVar26 * fVar21 + fVar18 * fVar20 + fVar16 * fVar23) - fVar13 * fVar14;
            *(float *)(lVar4 + 0x2c) =
                 ((fVar18 * fVar23 - fVar26 * fVar14) - fVar13 * fVar21) - fVar16 * fVar20;
            goto LAB_05d79ad0;
          }
        }
      }
      else if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
        lVar4 = unaff_x20 + unaff_x26 * 0x10;
        puVar8 = (undefined4 *)(lVar4 + 0x20);
        uVar15 = *puVar8;
        puVar10 = (undefined4 *)(lVar4 + 0x24);
        uVar17 = *puVar10;
        puVar11 = (undefined4 *)(lVar4 + 0x28);
        uVar19 = *puVar11;
        puVar12 = (undefined4 *)(lVar4 + 0x2c);
        uVar22 = *puVar12;
        while (uVar15 = FUN_06bdda30(uVar15,0), (uint)unaff_x26 < *(uint *)(unaff_x20 + 0x18)) {
          *puVar8 = uVar15;
          *puVar10 = uVar17;
          *puVar11 = uVar19;
          *puVar12 = uVar22;
LAB_05d79ad0:
          do {
            lVar4 = *(long *)(unaff_x19 + 0x158);
            if (lVar4 == 0) goto LAB_05d79dd4;
            if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
            if (*(int *)(lVar4 + unaff_x25 * 4 + 0x20) == 0) {
              lVar4 = *(long *)(unaff_x19 + 0xe0);
            }
            else {
              lVar4 = *(long *)(unaff_x19 + 0xd8);
            }
            if (lVar4 == 0) goto LAB_05d79dd4;
            if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
            lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
            if (lVar4 == 0) goto LAB_05d79dd4;
            FUN_05d06448(lVar4,0);
            lVar4 = *(long *)(unaff_x19 + 0x148);
            if (lVar4 == 0) goto LAB_05d79dd4;
            if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
            if (unaff_x20 == 0) goto LAB_05d79dd4;
            uVar9 = (uint)unaff_x26;
            if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d79dd0;
            lVar4 = lVar4 + unaff_x25 * 0x10;
            lVar5 = unaff_x20 + unaff_x26 * 0x10;
            uVar17 = *(undefined4 *)(lVar4 + 0x24);
            uVar19 = *(undefined4 *)(lVar4 + 0x28);
            uVar22 = *(undefined4 *)(lVar4 + 0x2c);
            uVar15 = FUN_06bdda30(*(undefined4 *)(lVar4 + 0x20),0);
            if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d79dd0;
            *(undefined4 *)(lVar5 + 0x20) = uVar15;
            *(undefined4 *)(lVar5 + 0x24) = uVar17;
            *(undefined4 *)(lVar5 + 0x28) = uVar19;
            *(undefined4 *)(lVar5 + 0x2c) = uVar22;
            if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d79dd0;
            lVar4 = *(long *)(unaff_x19 + 0x150);
            if (lVar4 == 0) goto LAB_05d79dd4;
            if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
            lVar4 = lVar4 + unaff_x25 * 0x10;
            unaff_w21 = unaff_w21 + 1;
            *(undefined4 *)(lVar4 + 0x20) = uVar15;
            *(undefined4 *)(lVar4 + 0x24) = uVar17;
            *(undefined4 *)(lVar4 + 0x28) = uVar19;
            *(undefined4 *)(lVar4 + 0x2c) = uVar22;
            lVar4 = *unaff_x22;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar4 = *unaff_x22;
            }
            plVar3 = *(long **)(lVar4 + 0xb8);
            lVar5 = *plVar3;
            if (lVar5 == 0) goto LAB_05d79dd4;
            if (*(int *)(lVar5 + 0x18) <= (int)unaff_w21) {
              return;
            }
            lVar6 = *(long *)(unaff_x19 + 0x158);
            if (lVar6 == 0) goto LAB_05d79dd4;
            if (*(uint *)(lVar6 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
            lVar7 = *(long *)(unaff_x19 + 0x140);
            if (lVar7 == 0) goto LAB_05d79dd4;
            if (*(uint *)(lVar7 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
            if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05d79dd4;
            if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) goto LAB_05d79dd0;
            unaff_x25 = (long)(int)unaff_w21;
            lVar7 = lVar7 + unaff_x25 * 0x10;
            iVar1 = *(int *)(lVar6 + unaff_x25 * 4 + 0x20);
            fVar26 = *(float *)(lVar7 + 0x20);
            fVar25 = *(float *)(lVar7 + 0x24);
            fVar14 = *(float *)(lVar7 + 0x28);
            fVar24 = *(float *)(lVar7 + 0x2c);
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar4 = *unaff_x22;
              plVar3 = *(long **)(lVar4 + 0xb8);
              lVar5 = *plVar3;
              if (lVar5 == 0) goto LAB_05d79dd4;
            }
            if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
            uVar9 = *(uint *)(lVar5 + unaff_x25 * 4 + 0x20);
            unaff_x26 = (long)(int)uVar9;
            if (iVar1 == 1) {
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                plVar3 = *(long **)(*unaff_x22 + 0xb8);
              }
              lVar4 = plVar3[3];
              if (lVar4 == 0) goto LAB_05d79dd4;
              if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
              lVar5 = *unaff_x23;
              bVar2 = *(byte *)(lVar4 + unaff_x25 + 0x20);
              unaff_w24 = (uint)bVar2;
              if (bVar2 != 0) {
                unaff_s15 = 0.0;
              }
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar5 = *unaff_x23;
              }
              lVar4 = *(long *)(lVar5 + 0xb8);
              fStack000000000000004c = *(float *)(lVar4 + 0x3c);
              fStack0000000000000050 = *(float *)(lVar4 + 0x40);
              unaff_d13 = (ulong)(uint)*(float *)(lVar4 + 0x24);
              unaff_d12 = (ulong)(uint)*(float *)(lVar4 + 0x28);
              fStack0000000000000048 = *(float *)(lVar4 + 0x2c);
              fStack0000000000000054 = *(float *)(lVar4 + 0x44);
              fVar21 = unaff_s15 * fStack0000000000000048 * -90.0;
              fVar16 = unaff_s15 * *(float *)(lVar4 + 0x28) * -90.0 * in_stack_00000058;
              fVar18 = fVar21 * in_stack_00000058;
              fVar13 = (float)FUN_06bddcac(unaff_s15 * *(float *)(lVar4 + 0x24) * -90.0 *
                                           in_stack_00000058,0);
              in_s19 = fVar26 * fVar18;
              param_1 = fVar25 * fVar13;
              param_3 = fVar14 * fVar18;
              param_6 = fVar14 * fVar13 + fVar24 * fVar16 + fVar25 * fVar21;
              param_4 = fVar26 * fVar16 + fVar24 * fVar18 + fVar14 * fVar21;
              param_2 = (fVar24 * fVar21 - fVar26 * fVar13) - fVar25 * fVar16;
              unaff_d11 = (ulong)(uint)((fVar25 * fVar18 + fVar24 * fVar13 + fVar26 * fVar21) -
                                       fVar14 * fVar16);
              goto code_r0x05d79a24;
            }
          } while (iVar1 != 2);
          if (unaff_x20 == 0) goto LAB_05d79dd4;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          puVar8 = (undefined4 *)(lVar4 + 0x20);
          uVar15 = *puVar8;
          puVar10 = (undefined4 *)(lVar4 + 0x24);
          uVar17 = *puVar10;
          puVar11 = (undefined4 *)(lVar4 + 0x28);
          uVar19 = *puVar11;
          puVar12 = (undefined4 *)(lVar4 + 0x2c);
          uVar22 = *puVar12;
        }
      }
    }
LAB_05d79dd0:
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
LAB_05d79dd4:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


