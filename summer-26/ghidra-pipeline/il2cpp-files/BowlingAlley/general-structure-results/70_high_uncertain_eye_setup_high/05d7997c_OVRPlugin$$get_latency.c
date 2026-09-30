/*
FUNCTION_NAME: OVRPlugin$$get_latency
ENTRY_POINT: 05d7997c
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


void OVRPlugin__get_latency
               (long param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
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
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float unaff_s8;
  float unaff_s9;
  float fVar27;
  float unaff_s10;
  float fVar28;
  float unaff_s11;
  float fVar29;
  float fVar30;
  float fVar31;
  float unaff_s15;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
code_r0x05d7997c:
  fVar31 = *(float *)(param_1 + 0x24);
  fVar30 = *(float *)(param_1 + 0x28);
  fStack0000000000000048 = *(float *)(param_1 + 0x2c);
  fStack0000000000000054 = *(float *)(param_1 + 0x44);
  fVar24 = unaff_s15 * fStack0000000000000048 * param_2;
  fVar16 = unaff_s15 * fVar30 * param_2 * param_6;
  fVar20 = fVar24 * param_6;
  fStack000000000000004c = param_4;
  fStack0000000000000050 = param_3;
  fVar13 = (float)FUN_06bddcac(unaff_s15 * fVar31 * param_2 * param_6,0);
  fVar29 = (unaff_s10 * fVar20 + unaff_s9 * fVar13 + unaff_s11 * fVar24) - unaff_s8 * fVar16;
  fVar28 = (unaff_s8 * fVar13 + unaff_s9 * fVar16 + unaff_s10 * fVar24) - unaff_s11 * fVar20;
  fVar27 = (unaff_s11 * fVar16 + unaff_s9 * fVar20 + unaff_s8 * fVar24) - unaff_s10 * fVar13;
  fVar13 = ((unaff_s9 * fVar24 - unaff_s11 * fVar13) - unaff_s10 * fVar16) - unaff_s8 * fVar20;
  fStack0000000000000060 = fVar29;
  fStack0000000000000064 = fVar28;
  fStack0000000000000068 = fVar27;
  fStack000000000000006c = fVar13;
  if (unaff_x20 != 0) {
    uVar9 = (uint)unaff_x26;
    if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
      fVar20 = (float)FUN_05d7a0d8(unaff_x20 + unaff_x26 * 0x10 + 0x20,&stack0x00000060);
      fVar16 = fStack0000000000000048;
      if (unaff_s15 <= fVar20) {
        unaff_s15 = fVar20;
      }
      if (0.0 <= fVar20) {
        if (unaff_w24 == 0) goto LAB_05d79ad0;
        if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          fVar15 = *(float *)(lVar4 + 0x20);
          fVar18 = *(float *)(lVar4 + 0x24);
          fVar22 = *(float *)(lVar4 + 0x28);
          fVar26 = *(float *)(lVar4 + 0x2c);
          fVar19 = fVar18;
          fVar23 = fVar22;
          uVar14 = FUN_06bde1c4(0);
          fStack0000000000000048 =
               (float)FUN_06bde1c4(fVar29,fVar28,fVar27,fVar13,fVar31,fVar30,fVar16,0);
          fVar24 = fStack0000000000000054;
          fVar16 = fStack0000000000000050;
          fVar13 = fStack000000000000004c;
          FUN_06bde1c4(0);
          fVar27 = (float)FUN_05bfefc8(uVar14,fVar19,fVar23,fStack0000000000000048,fVar28,fVar27,0);
          fVar20 = fVar20 * *(float *)(unaff_x19 + 0xb0);
          fVar28 = fVar20;
          if (1.0 < fVar20) {
            fVar28 = 1.0;
          }
          fVar28 = 1.0 - fVar28;
          if (fVar20 < 0.0) {
            fVar28 = 1.0;
          }
          fVar29 = fVar16 * fVar27 * fVar28;
          fVar16 = fVar29 * in_stack_00000058;
          fVar20 = fVar24 * fVar27 * fVar28 * in_stack_00000058;
          fVar13 = (float)FUN_06bddcac(fVar13 * fVar27 * fVar28 * in_stack_00000058,0);
          if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
            *(float *)(lVar4 + 0x20) =
                 (fVar18 * fVar20 + fVar26 * fVar13 + fVar15 * fVar29) - fVar22 * fVar16;
            *(float *)(lVar4 + 0x24) =
                 (fVar22 * fVar13 + fVar26 * fVar16 + fVar18 * fVar29) - fVar15 * fVar20;
            *(float *)(lVar4 + 0x28) =
                 (fVar15 * fVar16 + fVar26 * fVar20 + fVar22 * fVar29) - fVar18 * fVar13;
            *(float *)(lVar4 + 0x2c) =
                 ((fVar26 * fVar29 - fVar15 * fVar13) - fVar18 * fVar16) - fVar22 * fVar20;
            goto LAB_05d79ad0;
          }
        }
      }
      else if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
        lVar4 = unaff_x20 + unaff_x26 * 0x10;
        puVar8 = (undefined4 *)(lVar4 + 0x20);
        uVar14 = *puVar8;
        puVar10 = (undefined4 *)(lVar4 + 0x24);
        uVar17 = *puVar10;
        puVar11 = (undefined4 *)(lVar4 + 0x28);
        uVar21 = *puVar11;
        puVar12 = (undefined4 *)(lVar4 + 0x2c);
        uVar25 = *puVar12;
        while (uVar14 = FUN_06bdda30(uVar14,0), (uint)unaff_x26 < *(uint *)(unaff_x20 + 0x18)) {
          *puVar8 = uVar14;
          *puVar10 = uVar17;
          *puVar11 = uVar21;
          *puVar12 = uVar25;
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
            uVar21 = *(undefined4 *)(lVar4 + 0x28);
            uVar25 = *(undefined4 *)(lVar4 + 0x2c);
            uVar14 = FUN_06bdda30(*(undefined4 *)(lVar4 + 0x20),0);
            if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d79dd0;
            *(undefined4 *)(lVar5 + 0x20) = uVar14;
            *(undefined4 *)(lVar5 + 0x24) = uVar17;
            *(undefined4 *)(lVar5 + 0x28) = uVar21;
            *(undefined4 *)(lVar5 + 0x2c) = uVar25;
            if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d79dd0;
            lVar4 = *(long *)(unaff_x19 + 0x150);
            if (lVar4 == 0) goto LAB_05d79dd4;
            if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
            lVar4 = lVar4 + unaff_x25 * 0x10;
            unaff_w21 = unaff_w21 + 1;
            *(undefined4 *)(lVar4 + 0x20) = uVar14;
            *(undefined4 *)(lVar4 + 0x24) = uVar17;
            *(undefined4 *)(lVar4 + 0x28) = uVar21;
            *(undefined4 *)(lVar4 + 0x2c) = uVar25;
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
            unaff_s11 = *(float *)(lVar7 + 0x20);
            unaff_s10 = *(float *)(lVar7 + 0x24);
            unaff_s8 = *(float *)(lVar7 + 0x28);
            unaff_s9 = *(float *)(lVar7 + 0x2c);
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
              param_1 = *(long *)(lVar5 + 0xb8);
              param_2 = -90.0;
              param_4 = *(float *)(param_1 + 0x3c);
              param_3 = *(float *)(param_1 + 0x40);
              param_6 = in_stack_00000058;
              goto code_r0x05d7997c;
            }
          } while (iVar1 != 2);
          if (unaff_x20 == 0) goto LAB_05d79dd4;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          puVar8 = (undefined4 *)(lVar4 + 0x20);
          uVar14 = *puVar8;
          puVar10 = (undefined4 *)(lVar4 + 0x24);
          uVar17 = *puVar10;
          puVar11 = (undefined4 *)(lVar4 + 0x28);
          uVar21 = *puVar11;
          puVar12 = (undefined4 *)(lVar4 + 0x2c);
          uVar25 = *puVar12;
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


