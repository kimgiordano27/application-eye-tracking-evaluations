/*
FUNCTION_NAME: OVRPlugin$$get_eyeHeight
ENTRY_POINT: 05d79b10
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_eyeHeight(long param_1)

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
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float unaff_s15;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  do {
    lVar3 = *(long *)(param_1 + unaff_x25 * 8 + 0x20);
    if (lVar3 == 0) goto LAB_05d79dd4;
    FUN_05d06448(lVar3,0);
    lVar3 = *(long *)(unaff_x19 + 0x148);
    if (lVar3 == 0) goto LAB_05d79dd4;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w21) break;
    if (unaff_x20 == 0) goto LAB_05d79dd4;
    uVar9 = (uint)unaff_x26;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
    lVar3 = lVar3 + unaff_x25 * 0x10;
    lVar5 = unaff_x20 + unaff_x26 * 0x10;
    uVar18 = *(undefined4 *)(lVar3 + 0x24);
    uVar21 = *(undefined4 *)(lVar3 + 0x28);
    uVar24 = *(undefined4 *)(lVar3 + 0x2c);
    uVar14 = FUN_06bdda30(*(undefined4 *)(lVar3 + 0x20),0);
    if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
    *(undefined4 *)(lVar5 + 0x20) = uVar14;
    *(undefined4 *)(lVar5 + 0x24) = uVar18;
    *(undefined4 *)(lVar5 + 0x28) = uVar21;
    *(undefined4 *)(lVar5 + 0x2c) = uVar24;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
    lVar3 = *(long *)(unaff_x19 + 0x150);
    if (lVar3 == 0) goto LAB_05d79dd4;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w21) break;
    lVar3 = lVar3 + unaff_x25 * 0x10;
    unaff_w21 = unaff_w21 + 1;
    *(undefined4 *)(lVar3 + 0x20) = uVar14;
    *(undefined4 *)(lVar3 + 0x24) = uVar18;
    *(undefined4 *)(lVar3 + 0x28) = uVar21;
    *(undefined4 *)(lVar3 + 0x2c) = uVar24;
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
    if (*(uint *)(lVar6 + 0x18) <= unaff_w21) break;
    lVar7 = *(long *)(unaff_x19 + 0x140);
    if (lVar7 == 0) goto LAB_05d79dd4;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w21) break;
    if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05d79dd4;
    if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) break;
    unaff_x25 = (long)(int)unaff_w21;
    lVar7 = lVar7 + unaff_x25 * 0x10;
    iVar1 = *(int *)(lVar6 + unaff_x25 * 4 + 0x20);
    fVar30 = *(float *)(lVar7 + 0x20);
    fVar28 = *(float *)(lVar7 + 0x24);
    fVar25 = *(float *)(lVar7 + 0x28);
    fVar26 = *(float *)(lVar7 + 0x2c);
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = *unaff_x22;
      plVar4 = *(long **)(lVar3 + 0xb8);
      lVar5 = *plVar4;
      if (lVar5 == 0) goto LAB_05d79dd4;
    }
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) break;
    uVar9 = *(uint *)(lVar5 + unaff_x25 * 4 + 0x20);
    unaff_x26 = (long)(int)uVar9;
    if (iVar1 == 1) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        plVar4 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar3 = plVar4[3];
      if (lVar3 == 0) goto LAB_05d79dd4;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w21) break;
      lVar5 = *unaff_x23;
      cVar2 = *(char *)(lVar3 + unaff_x25 + 0x20);
      if (cVar2 != '\0') {
        unaff_s15 = 0.0;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *unaff_x23;
      }
      lVar3 = *(long *)(lVar5 + 0xb8);
      fVar19 = *(float *)(lVar3 + 0x3c);
      fVar15 = *(float *)(lVar3 + 0x40);
      fVar33 = *(float *)(lVar3 + 0x24);
      fVar32 = *(float *)(lVar3 + 0x28);
      fVar22 = *(float *)(lVar3 + 0x2c);
      fVar16 = *(float *)(lVar3 + 0x44);
      fVar23 = unaff_s15 * fVar22 * -90.0;
      fVar17 = unaff_s15 * fVar32 * -90.0 * in_stack_00000058;
      fVar20 = fVar23 * in_stack_00000058;
      fVar13 = (float)FUN_06bddcac(unaff_s15 * fVar33 * -90.0 * in_stack_00000058,0);
      fVar31 = (fVar28 * fVar20 + fVar26 * fVar13 + fVar30 * fVar23) - fVar25 * fVar17;
      fVar29 = (fVar25 * fVar13 + fVar26 * fVar17 + fVar28 * fVar23) - fVar30 * fVar20;
      fVar27 = (fVar30 * fVar17 + fVar26 * fVar20 + fVar25 * fVar23) - fVar28 * fVar13;
      fVar25 = ((fVar26 * fVar23 - fVar30 * fVar13) - fVar28 * fVar17) - fVar25 * fVar20;
      fStack0000000000000060 = fVar31;
      fStack0000000000000064 = fVar29;
      fStack0000000000000068 = fVar27;
      fStack000000000000006c = fVar25;
      if (unaff_x20 == 0) goto LAB_05d79dd4;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
      fVar26 = (float)FUN_05d7a0d8(unaff_x20 + unaff_x26 * 0x10 + 0x20,&stack0x00000060);
      if (unaff_s15 <= fVar26) {
        unaff_s15 = fVar26;
      }
      if (fVar26 < 0.0) {
        if (uVar9 < *(uint *)(unaff_x20 + 0x18)) {
          lVar3 = unaff_x20 + unaff_x26 * 0x10;
          puVar8 = (undefined4 *)(lVar3 + 0x20);
          uVar14 = *puVar8;
          puVar10 = (undefined4 *)(lVar3 + 0x24);
          uVar18 = *puVar10;
          puVar11 = (undefined4 *)(lVar3 + 0x28);
          uVar21 = *puVar11;
          puVar12 = (undefined4 *)(lVar3 + 0x2c);
          uVar24 = *puVar12;
          goto LAB_05d79aac;
        }
        break;
      }
      if (cVar2 != '\0') {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
        lVar3 = unaff_x20 + unaff_x26 * 0x10;
        fVar13 = *(float *)(lVar3 + 0x20);
        fVar17 = *(float *)(lVar3 + 0x24);
        fVar20 = *(float *)(lVar3 + 0x28);
        fVar23 = *(float *)(lVar3 + 0x2c);
        fVar28 = fVar17;
        fVar30 = fVar20;
        uVar14 = FUN_06bde1c4(0);
        uVar18 = FUN_06bde1c4(fVar31,fVar29,fVar27,fVar25,fVar33,fVar32,fVar22,0);
        FUN_06bde1c4(0);
        fVar28 = (float)FUN_05bfefc8(uVar14,fVar28,fVar30,uVar18,fVar29,fVar27,0);
        fVar26 = fVar26 * *(float *)(unaff_x19 + 0xb0);
        fVar25 = fVar26;
        if (1.0 < fVar26) {
          fVar25 = 1.0;
        }
        fVar25 = 1.0 - fVar25;
        if (fVar26 < 0.0) {
          fVar25 = 1.0;
        }
        fVar15 = fVar15 * fVar28 * fVar25;
        fVar26 = fVar15 * in_stack_00000058;
        fVar30 = fVar16 * fVar28 * fVar25 * in_stack_00000058;
        fVar25 = (float)FUN_06bddcac(fVar19 * fVar28 * fVar25 * in_stack_00000058,0);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
        *(float *)(lVar3 + 0x20) =
             (fVar17 * fVar30 + fVar23 * fVar25 + fVar13 * fVar15) - fVar20 * fVar26;
        *(float *)(lVar3 + 0x24) =
             (fVar20 * fVar25 + fVar23 * fVar26 + fVar17 * fVar15) - fVar13 * fVar30;
        *(float *)(lVar3 + 0x28) =
             (fVar13 * fVar26 + fVar23 * fVar30 + fVar20 * fVar15) - fVar17 * fVar25;
        *(float *)(lVar3 + 0x2c) =
             ((fVar23 * fVar15 - fVar13 * fVar25) - fVar17 * fVar26) - fVar20 * fVar30;
      }
    }
    else if (iVar1 == 2) {
      if (unaff_x20 == 0) goto LAB_05d79dd4;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
      lVar3 = unaff_x20 + unaff_x26 * 0x10;
      puVar8 = (undefined4 *)(lVar3 + 0x20);
      uVar14 = *puVar8;
      puVar10 = (undefined4 *)(lVar3 + 0x24);
      uVar18 = *puVar10;
      puVar11 = (undefined4 *)(lVar3 + 0x28);
      uVar21 = *puVar11;
      puVar12 = (undefined4 *)(lVar3 + 0x2c);
      uVar24 = *puVar12;
LAB_05d79aac:
      uVar14 = FUN_06bdda30(uVar14,0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
      *puVar8 = uVar14;
      *puVar10 = uVar18;
      *puVar11 = uVar21;
      *puVar12 = uVar24;
    }
    lVar3 = *(long *)(unaff_x19 + 0x158);
    if (lVar3 == 0) {
LAB_05d79dd4:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_w21) break;
    if (*(int *)(lVar3 + unaff_x25 * 4 + 0x20) == 0) {
      param_1 = *(long *)(unaff_x19 + 0xe0);
    }
    else {
      param_1 = *(long *)(unaff_x19 + 0xd8);
    }
    if (param_1 == 0) goto LAB_05d79dd4;
  } while (unaff_w21 < *(uint *)(param_1 + 0x18));
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


