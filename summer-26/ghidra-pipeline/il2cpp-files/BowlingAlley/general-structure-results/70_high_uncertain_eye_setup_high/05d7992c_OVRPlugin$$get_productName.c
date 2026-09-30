/*
FUNCTION_NAME: OVRPlugin$$get_productName
ENTRY_POINT: 05d7992c
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


void OVRPlugin__get_productName(long param_1)

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
  uint unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
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
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float unaff_s8;
  float unaff_s9;
  float fVar29;
  float unaff_s10;
  float fVar30;
  float unaff_s11;
  float fVar31;
  float fVar32;
  float fVar33;
  float unaff_s15;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
code_r0x05d7992c:
  if (unaff_w21 < *(uint *)(param_1 + 0x18)) {
    lVar3 = *unaff_x23;
    cVar2 = *(char *)(param_1 + unaff_x25 + 0x20);
    if (cVar2 != '\0') {
      unaff_s15 = 0.0;
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = *unaff_x23;
    }
    lVar3 = *(long *)(lVar3 + 0xb8);
    fVar21 = *(float *)(lVar3 + 0x3c);
    fVar16 = *(float *)(lVar3 + 0x40);
    fVar33 = *(float *)(lVar3 + 0x24);
    fVar32 = *(float *)(lVar3 + 0x28);
    fVar25 = *(float *)(lVar3 + 0x2c);
    fVar17 = *(float *)(lVar3 + 0x44);
    fVar26 = unaff_s15 * fVar25 * -90.0;
    fVar18 = unaff_s15 * fVar32 * -90.0 * in_stack_00000058;
    fVar22 = fVar26 * in_stack_00000058;
    fVar13 = (float)FUN_06bddcac(unaff_s15 * fVar33 * -90.0 * in_stack_00000058,0);
    fVar31 = (unaff_s10 * fVar22 + unaff_s9 * fVar13 + unaff_s11 * fVar26) - unaff_s8 * fVar18;
    fVar30 = (unaff_s8 * fVar13 + unaff_s9 * fVar18 + unaff_s10 * fVar26) - unaff_s11 * fVar22;
    fVar29 = (unaff_s11 * fVar18 + unaff_s9 * fVar22 + unaff_s8 * fVar26) - unaff_s10 * fVar13;
    fVar13 = ((unaff_s9 * fVar26 - unaff_s11 * fVar13) - unaff_s10 * fVar18) - unaff_s8 * fVar22;
    fStack0000000000000060 = fVar31;
    fStack0000000000000064 = fVar30;
    fStack0000000000000068 = fVar29;
    fStack000000000000006c = fVar13;
    if (unaff_x20 == 0) {
LAB_05d79dd4:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar9 = (uint)unaff_x26;
    if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
      fVar18 = (float)FUN_05d7a0d8(unaff_x20 + unaff_x26 * 0x10 + 0x20,&stack0x00000060);
      if (unaff_s15 <= fVar18) {
        unaff_s15 = fVar18;
      }
      if (0.0 <= fVar18) {
        if (cVar2 == '\0') goto LAB_05d79ad0;
        if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
          lVar3 = unaff_x20 + unaff_x26 * 0x10;
          fVar15 = *(float *)(lVar3 + 0x20);
          fVar20 = *(float *)(lVar3 + 0x24);
          fVar24 = *(float *)(lVar3 + 0x28);
          fVar28 = *(float *)(lVar3 + 0x2c);
          fVar22 = fVar20;
          fVar26 = fVar24;
          uVar14 = FUN_06bde1c4(0);
          uVar19 = FUN_06bde1c4(fVar31,fVar30,fVar29,fVar13,fVar33,fVar32,fVar25,0);
          FUN_06bde1c4(0);
          fVar30 = (float)FUN_05bfefc8(uVar14,fVar22,fVar26,uVar19,fVar30,fVar29,0);
          fVar18 = fVar18 * *(float *)(unaff_x19 + 0xb0);
          fVar13 = fVar18;
          if (1.0 < fVar18) {
            fVar13 = 1.0;
          }
          fVar13 = 1.0 - fVar13;
          if (fVar18 < 0.0) {
            fVar13 = 1.0;
          }
          fVar18 = fVar16 * fVar30 * fVar13;
          fVar16 = fVar18 * in_stack_00000058;
          fVar17 = fVar17 * fVar30 * fVar13 * in_stack_00000058;
          fVar13 = (float)FUN_06bddcac(fVar21 * fVar30 * fVar13 * in_stack_00000058,0);
          if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
            *(float *)(lVar3 + 0x20) =
                 (fVar20 * fVar17 + fVar28 * fVar13 + fVar15 * fVar18) - fVar24 * fVar16;
            *(float *)(lVar3 + 0x24) =
                 (fVar24 * fVar13 + fVar28 * fVar16 + fVar20 * fVar18) - fVar15 * fVar17;
            *(float *)(lVar3 + 0x28) =
                 (fVar15 * fVar16 + fVar28 * fVar17 + fVar24 * fVar18) - fVar20 * fVar13;
            *(float *)(lVar3 + 0x2c) =
                 ((fVar28 * fVar18 - fVar15 * fVar13) - fVar20 * fVar16) - fVar24 * fVar17;
            goto LAB_05d79ad0;
          }
        }
      }
      else if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
        lVar3 = unaff_x20 + unaff_x26 * 0x10;
        puVar8 = (undefined4 *)(lVar3 + 0x20);
        uVar14 = *puVar8;
        puVar10 = (undefined4 *)(lVar3 + 0x24);
        uVar19 = *puVar10;
        puVar11 = (undefined4 *)(lVar3 + 0x28);
        uVar23 = *puVar11;
        puVar12 = (undefined4 *)(lVar3 + 0x2c);
        uVar27 = *puVar12;
        while (uVar14 = FUN_06bdda30(uVar14,0), (uint)unaff_x26 < *(uint *)(unaff_x20 + 0x18)) {
          *puVar8 = uVar14;
          *puVar10 = uVar19;
          *puVar11 = uVar23;
          *puVar12 = uVar27;
LAB_05d79ad0:
          do {
            lVar3 = *(long *)(unaff_x19 + 0x158);
            if (lVar3 == 0) goto LAB_05d79dd4;
            if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
            if (*(int *)(lVar3 + unaff_x25 * 4 + 0x20) == 0) {
              lVar3 = *(long *)(unaff_x19 + 0xe0);
            }
            else {
              lVar3 = *(long *)(unaff_x19 + 0xd8);
            }
            if (lVar3 == 0) goto LAB_05d79dd4;
            if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
            lVar3 = *(long *)(lVar3 + unaff_x25 * 8 + 0x20);
            if (lVar3 == 0) goto LAB_05d79dd4;
            FUN_05d06448(lVar3,0);
            lVar3 = *(long *)(unaff_x19 + 0x148);
            if (lVar3 == 0) goto LAB_05d79dd4;
            if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
            if (unaff_x20 == 0) goto LAB_05d79dd4;
            uVar9 = (uint)unaff_x26;
            if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d79dd0;
            lVar3 = lVar3 + unaff_x25 * 0x10;
            lVar5 = unaff_x20 + unaff_x26 * 0x10;
            uVar19 = *(undefined4 *)(lVar3 + 0x24);
            uVar23 = *(undefined4 *)(lVar3 + 0x28);
            uVar27 = *(undefined4 *)(lVar3 + 0x2c);
            uVar14 = FUN_06bdda30(*(undefined4 *)(lVar3 + 0x20),0);
            if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d79dd0;
            *(undefined4 *)(lVar5 + 0x20) = uVar14;
            *(undefined4 *)(lVar5 + 0x24) = uVar19;
            *(undefined4 *)(lVar5 + 0x28) = uVar23;
            *(undefined4 *)(lVar5 + 0x2c) = uVar27;
            if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d79dd0;
            lVar3 = *(long *)(unaff_x19 + 0x150);
            if (lVar3 == 0) goto LAB_05d79dd4;
            if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
            lVar3 = lVar3 + unaff_x25 * 0x10;
            unaff_w21 = unaff_w21 + 1;
            *(undefined4 *)(lVar3 + 0x20) = uVar14;
            *(undefined4 *)(lVar3 + 0x24) = uVar19;
            *(undefined4 *)(lVar3 + 0x28) = uVar23;
            *(undefined4 *)(lVar3 + 0x2c) = uVar27;
            lVar3 = *unaff_x22;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar3 = *unaff_x22;
            }
            plVar4 = *(long **)(lVar3 + 0xb8);
            lVar5 = *plVar4;
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
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar3 = *unaff_x22;
              plVar4 = *(long **)(lVar3 + 0xb8);
              lVar5 = *plVar4;
              if (lVar5 == 0) goto LAB_05d79dd4;
            }
            if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
            uVar9 = *(uint *)(lVar5 + unaff_x25 * 4 + 0x20);
            unaff_x26 = (long)(int)uVar9;
            if (iVar1 == 1) {
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                plVar4 = *(long **)(*unaff_x22 + 0xb8);
              }
              param_1 = plVar4[3];
              if (param_1 != 0) goto code_r0x05d7992c;
              goto LAB_05d79dd4;
            }
          } while (iVar1 != 2);
          if (unaff_x20 == 0) goto LAB_05d79dd4;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
          lVar3 = unaff_x20 + unaff_x26 * 0x10;
          puVar8 = (undefined4 *)(lVar3 + 0x20);
          uVar14 = *puVar8;
          puVar10 = (undefined4 *)(lVar3 + 0x24);
          uVar19 = *puVar10;
          puVar11 = (undefined4 *)(lVar3 + 0x28);
          uVar23 = *puVar11;
          puVar12 = (undefined4 *)(lVar3 + 0x2c);
          uVar27 = *puVar12;
        }
      }
    }
  }
LAB_05d79dd0:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


