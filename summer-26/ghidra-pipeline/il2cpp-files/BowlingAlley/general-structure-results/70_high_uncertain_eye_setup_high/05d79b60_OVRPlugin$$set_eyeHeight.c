/*
FUNCTION_NAME: OVRPlugin$$set_eyeHeight
ENTRY_POINT: 05d79b60
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


void OVRPlugin__set_eyeHeight
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 *puVar10;
  undefined4 *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
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
  float fVar34;
  float fVar35;
  float unaff_s15;
  undefined4 in_s16;
  undefined4 in_register_00005204;
  undefined4 uStack0000000000000000;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  uStack0000000000000000 = param_1;
  while( true ) {
    uVar16 = FUN_06bdda30(CONCAT44(in_register_00005204,in_s16),param_5);
    if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x26) break;
    *unaff_x24 = uVar16;
    unaff_x24[1] = param_2;
    unaff_x24[2] = param_3;
    unaff_x24[3] = param_4;
    if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x26) break;
    lVar5 = *(long *)(unaff_x19 + 0x150);
    if (lVar5 == 0) goto LAB_05d79dd4;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) break;
    lVar5 = lVar5 + unaff_x25 * 0x10;
    unaff_w21 = unaff_w21 + 1;
    *(undefined4 *)(lVar5 + 0x20) = uVar16;
    *(undefined4 *)(lVar5 + 0x24) = param_2;
    *(undefined4 *)(lVar5 + 0x28) = param_3;
    *(undefined4 *)(lVar5 + 0x2c) = param_4;
    lVar5 = *unaff_x22;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *unaff_x22;
    }
    plVar4 = *(long **)(lVar5 + 0xb8);
    lVar6 = *plVar4;
    if (lVar6 == 0) goto LAB_05d79dd4;
    if (*(int *)(lVar6 + 0x18) <= (int)unaff_w21) {
      return;
    }
    lVar7 = *(long *)(unaff_x19 + 0x158);
    if (lVar7 == 0) goto LAB_05d79dd4;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w21) break;
    lVar8 = *(long *)(unaff_x19 + 0x140);
    if (lVar8 == 0) goto LAB_05d79dd4;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w21) break;
    lVar9 = *(long *)(unaff_x19 + 0xd0);
    if (lVar9 == 0) goto LAB_05d79dd4;
    if (*(uint *)(lVar9 + 0x18) <= unaff_w21) break;
    unaff_x25 = (long)(int)unaff_w21;
    lVar8 = lVar8 + unaff_x25 * 0x10;
    iVar1 = *(int *)(lVar7 + unaff_x25 * 4 + 0x20);
    fVar32 = *(float *)(lVar8 + 0x20);
    fVar30 = *(float *)(lVar8 + 0x24);
    fVar27 = *(float *)(lVar8 + 0x28);
    fVar28 = *(float *)(lVar8 + 0x2c);
    uVar16 = *(undefined4 *)(lVar9 + unaff_x25 * 4 + 0x20);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *unaff_x22;
      plVar4 = *(long **)(lVar5 + 0xb8);
      lVar6 = *plVar4;
      if (lVar6 == 0) goto LAB_05d79dd4;
    }
    if (*(uint *)(lVar6 + 0x18) <= unaff_w21) break;
    uVar3 = *(uint *)(lVar6 + unaff_x25 * 4 + 0x20);
    unaff_x26 = (long)(int)uVar3;
    if (iVar1 == 1) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        plVar4 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar5 = plVar4[3];
      if (lVar5 == 0) goto LAB_05d79dd4;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) break;
      lVar6 = *unaff_x23;
      cVar2 = *(char *)(lVar5 + unaff_x25 + 0x20);
      if (cVar2 != '\0') {
        unaff_s15 = 0.0;
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *unaff_x23;
      }
      lVar5 = *(long *)(lVar6 + 0xb8);
      fVar22 = *(float *)(lVar5 + 0x3c);
      fVar18 = *(float *)(lVar5 + 0x40);
      fVar35 = *(float *)(lVar5 + 0x24);
      fVar34 = *(float *)(lVar5 + 0x28);
      fVar25 = *(float *)(lVar5 + 0x2c);
      fVar19 = *(float *)(lVar5 + 0x44);
      fVar26 = unaff_s15 * fVar25 * -90.0;
      fVar20 = unaff_s15 * fVar34 * -90.0 * in_stack_00000058;
      fVar23 = fVar26 * in_stack_00000058;
      fVar15 = (float)FUN_06bddcac(unaff_s15 * fVar35 * -90.0 * in_stack_00000058,0);
      fVar33 = (fVar30 * fVar23 + fVar28 * fVar15 + fVar32 * fVar26) - fVar27 * fVar20;
      fVar31 = (fVar27 * fVar15 + fVar28 * fVar20 + fVar30 * fVar26) - fVar32 * fVar23;
      fVar29 = (fVar32 * fVar20 + fVar28 * fVar23 + fVar27 * fVar26) - fVar30 * fVar15;
      fVar27 = ((fVar28 * fVar26 - fVar32 * fVar15) - fVar30 * fVar20) - fVar27 * fVar23;
      fStack0000000000000060 = fVar33;
      fStack0000000000000064 = fVar31;
      fStack0000000000000068 = fVar29;
      fStack000000000000006c = fVar27;
      if (unaff_x20 == 0) goto LAB_05d79dd4;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar3) break;
      fVar28 = (float)FUN_05d7a0d8(unaff_x20 + unaff_x26 * 0x10 + 0x20,&stack0x00000060);
      if (unaff_s15 <= fVar28) {
        unaff_s15 = fVar28;
      }
      if (fVar28 < 0.0) {
        if (uVar3 < *(uint *)(unaff_x20 + 0x18)) {
          lVar5 = unaff_x20 + unaff_x26 * 0x10;
          puVar10 = (undefined4 *)(lVar5 + 0x20);
          uVar14 = *puVar10;
          puVar11 = (undefined4 *)(lVar5 + 0x24);
          uVar17 = *puVar11;
          puVar12 = (undefined4 *)(lVar5 + 0x28);
          uVar21 = *puVar12;
          puVar13 = (undefined4 *)(lVar5 + 0x2c);
          uVar24 = *puVar13;
          goto LAB_05d79aac;
        }
        break;
      }
      if (cVar2 != '\0') {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar3) break;
        lVar5 = unaff_x20 + unaff_x26 * 0x10;
        fVar15 = *(float *)(lVar5 + 0x20);
        fVar20 = *(float *)(lVar5 + 0x24);
        fVar23 = *(float *)(lVar5 + 0x28);
        fVar26 = *(float *)(lVar5 + 0x2c);
        fVar30 = fVar20;
        fVar32 = fVar23;
        uVar16 = FUN_06bde1c4(0);
        uVar14 = FUN_06bde1c4(fVar33,fVar31,fVar29,fVar27,fVar35,fVar34,fVar25,0);
        uStack0000000000000000 = FUN_06bde1c4(0);
        fVar30 = (float)FUN_05bfefc8(uVar16,fVar30,fVar32,uVar14,fVar31,fVar29,0);
        fVar28 = fVar28 * *(float *)(unaff_x19 + 0xb0);
        fVar27 = fVar28;
        if (1.0 < fVar28) {
          fVar27 = 1.0;
        }
        fVar27 = 1.0 - fVar27;
        if (fVar28 < 0.0) {
          fVar27 = 1.0;
        }
        fVar18 = fVar18 * fVar30 * fVar27;
        fVar28 = fVar18 * in_stack_00000058;
        fVar32 = fVar19 * fVar30 * fVar27 * in_stack_00000058;
        fVar27 = (float)FUN_06bddcac(fVar22 * fVar30 * fVar27 * in_stack_00000058,0);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar3) break;
        *(float *)(lVar5 + 0x20) =
             (fVar20 * fVar32 + fVar26 * fVar27 + fVar15 * fVar18) - fVar23 * fVar28;
        *(float *)(lVar5 + 0x24) =
             (fVar23 * fVar27 + fVar26 * fVar28 + fVar20 * fVar18) - fVar15 * fVar32;
        *(float *)(lVar5 + 0x28) =
             (fVar15 * fVar28 + fVar26 * fVar32 + fVar23 * fVar18) - fVar20 * fVar27;
        *(float *)(lVar5 + 0x2c) =
             ((fVar26 * fVar18 - fVar15 * fVar27) - fVar20 * fVar28) - fVar23 * fVar32;
      }
    }
    else if (iVar1 == 2) {
      if (unaff_x20 == 0) goto LAB_05d79dd4;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar3) break;
      lVar5 = unaff_x20 + unaff_x26 * 0x10;
      puVar10 = (undefined4 *)(lVar5 + 0x20);
      uVar14 = *puVar10;
      puVar11 = (undefined4 *)(lVar5 + 0x24);
      uVar17 = *puVar11;
      puVar12 = (undefined4 *)(lVar5 + 0x28);
      uVar21 = *puVar12;
      puVar13 = (undefined4 *)(lVar5 + 0x2c);
      uVar24 = *puVar13;
LAB_05d79aac:
      uStack0000000000000000 = uVar16;
      uVar16 = FUN_06bdda30(uVar14,0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar3) break;
      *puVar10 = uVar16;
      *puVar11 = uVar17;
      *puVar12 = uVar21;
      *puVar13 = uVar24;
    }
    lVar5 = *(long *)(unaff_x19 + 0x158);
    if (lVar5 == 0) {
LAB_05d79dd4:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) break;
    if (*(int *)(lVar5 + unaff_x25 * 4 + 0x20) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0xe0);
    }
    else {
      lVar5 = *(long *)(unaff_x19 + 0xd8);
    }
    if (lVar5 == 0) goto LAB_05d79dd4;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) break;
    lVar5 = *(long *)(lVar5 + unaff_x25 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_05d79dd4;
    uVar16 = FUN_05d06448(lVar5,0);
    lVar5 = *(long *)(unaff_x19 + 0x148);
    if (lVar5 == 0) goto LAB_05d79dd4;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) break;
    if (unaff_x20 == 0) goto LAB_05d79dd4;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar3) break;
    lVar5 = lVar5 + unaff_x25 * 0x10;
    in_s16 = *(undefined4 *)(lVar5 + 0x20);
    in_register_00005204 = 0;
    param_2 = *(undefined4 *)(lVar5 + 0x24);
    param_3 = *(undefined4 *)(lVar5 + 0x28);
    param_4 = *(undefined4 *)(lVar5 + 0x2c);
    unaff_x24 = (undefined4 *)(unaff_x20 + unaff_x26 * 0x10 + 0x20);
    param_5 = 0;
    uStack0000000000000000 = uVar16;
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


