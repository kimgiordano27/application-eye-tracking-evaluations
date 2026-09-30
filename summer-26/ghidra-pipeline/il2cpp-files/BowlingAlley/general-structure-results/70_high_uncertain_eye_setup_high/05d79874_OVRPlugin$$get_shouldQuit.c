/*
FUNCTION_NAME: OVRPlugin$$get_shouldQuit
ENTRY_POINT: 05d79874
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


void OVRPlugin__get_shouldQuit(long *param_1,long param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  long in_x10;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 *puVar6;
  long unaff_x25;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
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
  float unaff_s15;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  do {
    iVar1 = *(int *)(in_x10 + 0x20);
    fVar28 = *(float *)(in_x11 + 0x20);
    fVar26 = *(float *)(in_x11 + 0x24);
    fVar23 = *(float *)(in_x11 + 0x28);
    fVar24 = *(float *)(in_x11 + 0x2c);
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      param_2 = *unaff_x22;
      param_1 = *(long **)(param_2 + 0xb8);
      in_x9 = *param_1;
      if (in_x9 == 0) goto LAB_05d79dd4;
    }
    if (*(uint *)(in_x9 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
    uVar3 = *(uint *)(in_x9 + unaff_x25 * 4 + 0x20);
    lVar7 = (long)(int)uVar3;
    if (iVar1 == 1) {
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        param_1 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar5 = param_1[3];
      if (lVar5 == 0) goto LAB_05d79dd4;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) {
LAB_05d79dd0:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      lVar4 = *unaff_x23;
      cVar2 = *(char *)(lVar5 + unaff_x25 + 0x20);
      if (cVar2 != '\0') {
        unaff_s15 = 0.0;
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar4 = *unaff_x23;
      }
      lVar5 = *(long *)(lVar4 + 0xb8);
      fVar18 = *(float *)(lVar5 + 0x3c);
      fVar14 = *(float *)(lVar5 + 0x40);
      fVar31 = *(float *)(lVar5 + 0x24);
      fVar30 = *(float *)(lVar5 + 0x28);
      fVar21 = *(float *)(lVar5 + 0x2c);
      fVar15 = *(float *)(lVar5 + 0x44);
      fVar22 = unaff_s15 * fVar21 * -90.0;
      fVar16 = unaff_s15 * fVar30 * -90.0 * in_stack_00000058;
      fVar19 = fVar22 * in_stack_00000058;
      fVar12 = (float)FUN_06bddcac(unaff_s15 * fVar31 * -90.0 * in_stack_00000058,0);
      fVar29 = (fVar26 * fVar19 + fVar24 * fVar12 + fVar28 * fVar22) - fVar23 * fVar16;
      fVar27 = (fVar23 * fVar12 + fVar24 * fVar16 + fVar26 * fVar22) - fVar28 * fVar19;
      fVar25 = (fVar28 * fVar16 + fVar24 * fVar19 + fVar23 * fVar22) - fVar26 * fVar12;
      fVar23 = ((fVar24 * fVar22 - fVar28 * fVar12) - fVar26 * fVar16) - fVar23 * fVar19;
      fStack0000000000000060 = fVar29;
      fStack0000000000000064 = fVar27;
      fStack0000000000000068 = fVar25;
      fStack000000000000006c = fVar23;
      if (unaff_x20 == 0) goto LAB_05d79dd4;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d79dd0;
      fVar24 = (float)FUN_05d7a0d8(unaff_x20 + lVar7 * 0x10 + 0x20,&stack0x00000060);
      if (unaff_s15 <= fVar24) {
        unaff_s15 = fVar24;
      }
      if (fVar24 < 0.0) {
        if (uVar3 < *(uint *)(unaff_x20 + 0x18)) {
          lVar5 = unaff_x20 + lVar7 * 0x10;
          puVar6 = (undefined4 *)(lVar5 + 0x20);
          uVar11 = *puVar6;
          puVar8 = (undefined4 *)(lVar5 + 0x24);
          uVar13 = *puVar8;
          puVar9 = (undefined4 *)(lVar5 + 0x28);
          uVar17 = *puVar9;
          puVar10 = (undefined4 *)(lVar5 + 0x2c);
          uVar20 = *puVar10;
          goto LAB_05d79aac;
        }
        goto LAB_05d79dd0;
      }
      if (cVar2 != '\0') {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d79dd0;
        lVar5 = unaff_x20 + lVar7 * 0x10;
        fVar12 = *(float *)(lVar5 + 0x20);
        fVar16 = *(float *)(lVar5 + 0x24);
        fVar19 = *(float *)(lVar5 + 0x28);
        fVar22 = *(float *)(lVar5 + 0x2c);
        fVar26 = fVar16;
        fVar28 = fVar19;
        uVar11 = FUN_06bde1c4(0);
        uVar13 = FUN_06bde1c4(fVar29,fVar27,fVar25,fVar23,fVar31,fVar30,fVar21,0);
        FUN_06bde1c4(0);
        fVar26 = (float)FUN_05bfefc8(uVar11,fVar26,fVar28,uVar13,fVar27,fVar25,0);
        fVar24 = fVar24 * *(float *)(unaff_x19 + 0xb0);
        fVar23 = fVar24;
        if (1.0 < fVar24) {
          fVar23 = 1.0;
        }
        fVar23 = 1.0 - fVar23;
        if (fVar24 < 0.0) {
          fVar23 = 1.0;
        }
        fVar14 = fVar14 * fVar26 * fVar23;
        fVar24 = fVar14 * in_stack_00000058;
        fVar28 = fVar15 * fVar26 * fVar23 * in_stack_00000058;
        fVar23 = (float)FUN_06bddcac(fVar18 * fVar26 * fVar23 * in_stack_00000058,0);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d79dd0;
        *(float *)(lVar5 + 0x20) =
             (fVar16 * fVar28 + fVar22 * fVar23 + fVar12 * fVar14) - fVar19 * fVar24;
        *(float *)(lVar5 + 0x24) =
             (fVar19 * fVar23 + fVar22 * fVar24 + fVar16 * fVar14) - fVar12 * fVar28;
        *(float *)(lVar5 + 0x28) =
             (fVar12 * fVar24 + fVar22 * fVar28 + fVar19 * fVar14) - fVar16 * fVar23;
        *(float *)(lVar5 + 0x2c) =
             ((fVar22 * fVar14 - fVar12 * fVar23) - fVar16 * fVar24) - fVar19 * fVar28;
      }
    }
    else if (iVar1 == 2) {
      if (unaff_x20 == 0) goto LAB_05d79dd4;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d79dd0;
      lVar5 = unaff_x20 + lVar7 * 0x10;
      puVar6 = (undefined4 *)(lVar5 + 0x20);
      uVar11 = *puVar6;
      puVar8 = (undefined4 *)(lVar5 + 0x24);
      uVar13 = *puVar8;
      puVar9 = (undefined4 *)(lVar5 + 0x28);
      uVar17 = *puVar9;
      puVar10 = (undefined4 *)(lVar5 + 0x2c);
      uVar20 = *puVar10;
LAB_05d79aac:
      uVar11 = FUN_06bdda30(uVar11,0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d79dd0;
      *puVar6 = uVar11;
      *puVar8 = uVar13;
      *puVar9 = uVar17;
      *puVar10 = uVar20;
    }
    lVar5 = *(long *)(unaff_x19 + 0x158);
    if (lVar5 == 0) {
LAB_05d79dd4:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
    if (*(int *)(lVar5 + unaff_x25 * 4 + 0x20) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0xe0);
    }
    else {
      lVar5 = *(long *)(unaff_x19 + 0xd8);
    }
    if (lVar5 == 0) goto LAB_05d79dd4;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
    lVar5 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_05d79dd4;
    FUN_05d06448(lVar5,0);
    lVar5 = *(long *)(unaff_x19 + 0x148);
    if (lVar5 == 0) goto LAB_05d79dd4;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
    if (unaff_x20 == 0) goto LAB_05d79dd4;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d79dd0;
    lVar5 = lVar5 + unaff_x25 * 0x10;
    lVar7 = unaff_x20 + lVar7 * 0x10;
    uVar13 = *(undefined4 *)(lVar5 + 0x24);
    uVar17 = *(undefined4 *)(lVar5 + 0x28);
    uVar20 = *(undefined4 *)(lVar5 + 0x2c);
    uVar11 = FUN_06bdda30(*(undefined4 *)(lVar5 + 0x20),0);
    if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d79dd0;
    *(undefined4 *)(lVar7 + 0x20) = uVar11;
    *(undefined4 *)(lVar7 + 0x24) = uVar13;
    *(undefined4 *)(lVar7 + 0x28) = uVar17;
    *(undefined4 *)(lVar7 + 0x2c) = uVar20;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05d79dd0;
    lVar7 = *(long *)(unaff_x19 + 0x150);
    if (lVar7 == 0) goto LAB_05d79dd4;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
    lVar7 = lVar7 + unaff_x25 * 0x10;
    unaff_w21 = unaff_w21 + 1;
    *(undefined4 *)(lVar7 + 0x20) = uVar11;
    *(undefined4 *)(lVar7 + 0x24) = uVar13;
    *(undefined4 *)(lVar7 + 0x28) = uVar17;
    *(undefined4 *)(lVar7 + 0x2c) = uVar20;
    param_2 = *unaff_x22;
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      param_2 = *unaff_x22;
    }
    param_1 = *(long **)(param_2 + 0xb8);
    in_x9 = *param_1;
    if (in_x9 == 0) goto LAB_05d79dd4;
    if (*(int *)(in_x9 + 0x18) <= (int)unaff_w21) {
      return;
    }
    lVar7 = *(long *)(unaff_x19 + 0x158);
    if (lVar7 == 0) goto LAB_05d79dd4;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
    lVar5 = *(long *)(unaff_x19 + 0x140);
    if (lVar5 == 0) goto LAB_05d79dd4;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05d79dd0;
    if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05d79dd4;
    if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) goto LAB_05d79dd0;
    unaff_x25 = (long)(int)unaff_w21;
    in_x10 = lVar7 + unaff_x25 * 4;
    in_x11 = lVar5 + unaff_x25 * 0x10;
  } while( true );
}


