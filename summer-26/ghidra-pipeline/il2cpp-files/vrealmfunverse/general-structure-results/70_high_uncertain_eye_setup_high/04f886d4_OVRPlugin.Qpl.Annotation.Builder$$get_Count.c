/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$get_Count
ENTRY_POINT: 04f886d4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__get_Count(long param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  float unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  uint uVar7;
  long unaff_x27;
  long unaff_x28;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float unaff_s8;
  float fVar23;
  float unaff_s9;
  float fVar24;
  float unaff_s10;
  float fVar25;
  float unaff_s11;
  float fVar26;
  float unaff_s12;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  float fStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined8 uStack0000000000000078;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  
  do {
    lVar4 = *unaff_x24;
    cVar3 = *(char *)(param_1 + 0x20);
    if (cVar3 != '\0') {
      unaff_s12 = 0.0;
    }
    _fStack0000000000000070 = (ulong)(uint)unaff_s12;
    uStack0000000000000078 = 0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      unaff_s12 = (float)_fStack0000000000000070;
      lVar4 = *unaff_x24;
    }
    lVar4 = *(long *)(lVar4 + 0xb8);
    uVar14 = *(undefined8 *)(lVar4 + 0x24);
    fVar29 = *(float *)(lVar4 + 0x2c);
    uVar21 = *(undefined8 *)(lVar4 + 0x3c);
    fVar27 = *(float *)(lVar4 + 0x44);
    fVar15 = (float)((ulong)uVar14 >> 0x20);
    fVar12 = (float)((ulong)in_stack_00000048 >> 0x20);
    fVar11 = fVar15 * (float)((ulong)in_stack_00000038 >> 0x20) * unaff_s12 * fVar12;
    fVar16 = unaff_s12 * fVar29 * unaff_w23 * in_stack_00000040._4_4_;
    uVar22 = uVar21;
    fVar8 = (float)FUN_05c7b824(0);
    fVar19 = (float)uVar22;
    fVar25 = (unaff_s9 * fVar16 + unaff_s11 * fVar8 + unaff_s10 * fVar19) - unaff_s8 * fVar11;
    fVar24 = (unaff_s8 * fVar8 + unaff_s11 * fVar11 + unaff_s9 * fVar19) - unaff_s10 * fVar16;
    fVar23 = (unaff_s10 * fVar11 + unaff_s11 * fVar16 + unaff_s8 * fVar19) - unaff_s9 * fVar8;
    fVar8 = ((unaff_s11 * fVar19 - unaff_s10 * fVar8) - unaff_s9 * fVar11) - unaff_s8 * fVar16;
    fStack0000000000000088 = fVar25;
    fStack000000000000008c = fVar24;
    fStack0000000000000090 = fVar23;
    fStack0000000000000094 = fVar8;
    if (unaff_x21 == 0) {
LAB_04f88b24:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar7 = (uint)unaff_x27;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
    fVar16 = (float)FUN_04f88ff4(unaff_x25 + unaff_x27 * 0x10,&stack0x00000088);
    fVar11 = (float)_fStack0000000000000070;
    if ((float)_fStack0000000000000070 <= fVar16) {
      fVar11 = fVar16;
    }
    _fStack0000000000000070 = CONCAT44(uStack0000000000000074,fVar11);
    if (0.0 <= fVar16) {
      if (cVar3 != '\0') {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) {
LAB_04f88b20:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        fVar10 = *(float *)(unaff_x28 + 0x20);
        fVar26 = *(float *)(unaff_x28 + 0x24);
        fVar18 = *(float *)(unaff_x28 + 0x28);
        fVar28 = *(float *)(unaff_x28 + 0x2c);
        fVar11 = fVar26;
        fVar19 = fVar18;
        uVar9 = FUN_05c7bd38(0);
        uVar13 = FUN_05c7bd38(fVar25,fVar24,fVar23,fVar8,uVar14,fVar15,fVar29,0);
        fVar15 = (float)((ulong)uVar21 >> 0x20);
        FUN_05c7bd38(fVar10,fVar26,fVar18,fVar28,uVar21,fVar15,fVar27,0);
        fVar11 = (float)FUN_02cdfa10(uVar9,fVar11,fVar19,uVar13,fVar24,fVar23,0);
        fVar16 = fVar16 * *(float *)(unaff_x19 + 0xb0);
        fVar8 = 1.0;
        if (fVar16 <= 1.0) {
          fVar8 = fVar16;
        }
        fVar8 = 1.0 - fVar8;
        fVar24 = 1.0;
        if (0.0 <= fVar16) {
          fVar24 = fVar8;
        }
        fVar12 = fVar15 * fVar11 * fVar24 * fVar12;
        fVar24 = fVar27 * fVar11 * fVar24 * in_stack_00000040._4_4_;
        fVar11 = (float)FUN_05c7b824(0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
        *(float *)(unaff_x28 + 0x20) =
             (fVar26 * fVar24 + fVar28 * fVar11 + fVar10 * fVar8) - fVar18 * fVar12;
        *(float *)(unaff_x28 + 0x24) =
             (fVar18 * fVar11 + fVar28 * fVar12 + fVar26 * fVar8) - fVar10 * fVar24;
        *(float *)(unaff_x28 + 0x28) =
             (fVar10 * fVar12 + fVar28 * fVar24 + fVar18 * fVar8) - fVar26 * fVar11;
        *(float *)(unaff_x28 + 0x2c) =
             ((fVar28 * fVar8 - fVar10 * fVar11) - fVar26 * fVar12) - fVar18 * fVar24;
      }
    }
    else {
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      uVar13 = *(undefined4 *)(unaff_x28 + 0x24);
      uVar17 = *(undefined4 *)(unaff_x28 + 0x28);
      uVar20 = *(undefined4 *)(unaff_x28 + 0x2c);
      uVar9 = FUN_05c7b59c(*(undefined4 *)(unaff_x28 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      *(undefined4 *)(unaff_x28 + 0x20) = uVar9;
      *(undefined4 *)(unaff_x28 + 0x24) = uVar13;
      *(undefined4 *)(unaff_x28 + 0x28) = uVar17;
      *(undefined4 *)(unaff_x28 + 0x2c) = uVar20;
    }
    unaff_s12 = fStack0000000000000070;
    while( true ) {
      lVar4 = *(long *)(unaff_x19 + 0x158);
      if (lVar4 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      if (*(int *)(lVar4 + unaff_x26 * 4 + 0x20) == 0) {
        lVar4 = *(long *)(unaff_x19 + 0xe0);
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0xd8);
      }
      if (lVar4 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      lVar4 = *(long *)(lVar4 + unaff_x26 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_04f88b24;
      FUN_04f0e0c4(lVar4,0);
      lVar4 = *(long *)(unaff_x19 + 0x148);
      if (lVar4 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      if (unaff_x21 == 0) goto LAB_04f88b24;
      uVar7 = (uint)unaff_x27;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      lVar4 = lVar4 + unaff_x26 * 0x10;
      unaff_s9 = *(float *)(lVar4 + 0x24);
      unaff_s8 = *(float *)(lVar4 + 0x28);
      unaff_s11 = *(float *)(lVar4 + 0x2c);
      uVar9 = FUN_05c7b59c(*(undefined4 *)(lVar4 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      *(float *)(unaff_x28 + 0x24) = unaff_s9;
      *(float *)(unaff_x28 + 0x28) = unaff_s8;
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      *(undefined4 *)(unaff_x28 + 0x20) = uVar9;
      *(float *)(unaff_x28 + 0x2c) = unaff_s11;
      if (uVar2 <= uVar7) goto LAB_04f88b20;
      lVar4 = *(long *)(unaff_x19 + 0x150);
      if (lVar4 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      lVar4 = lVar4 + unaff_x26 * 0x10;
      unaff_w20 = unaff_w20 + 1;
      *(undefined4 *)(lVar4 + 0x20) = uVar9;
      *(float *)(lVar4 + 0x24) = unaff_s9;
      *(float *)(lVar4 + 0x28) = unaff_s8;
      *(float *)(lVar4 + 0x2c) = unaff_s11;
      lVar4 = *unaff_x22;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar4 = *unaff_x22;
      }
      if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_04f88b24;
      if (*(int *)(**(long **)(lVar4 + 0xb8) + 0x18) <= (int)unaff_w20) {
        return;
      }
      lVar4 = *(long *)(unaff_x19 + 0x158);
      if (lVar4 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      unaff_x26 = (long)(int)unaff_w20;
      iVar1 = *(int *)(lVar4 + unaff_x26 * 4 + 0x20);
      unaff_s10 = (float)FUN_04f88e34();
      if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_04f88b24;
      if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w20) goto LAB_04f88b20;
      lVar4 = *unaff_x22;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar4 = *unaff_x22;
      }
      plVar5 = *(long **)(lVar4 + 0xb8);
      lVar6 = *plVar5;
      if (lVar6 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      uVar7 = *(uint *)(lVar6 + unaff_x26 * 4 + 0x20);
      unaff_x27 = (long)(int)uVar7;
      unaff_x28 = unaff_x21 + unaff_x27 * 0x10;
      if (iVar1 == 1) break;
      if (iVar1 == 2) {
        if (unaff_x21 == 0) goto LAB_04f88b24;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
        uVar13 = *(undefined4 *)(unaff_x28 + 0x24);
        uVar17 = *(undefined4 *)(unaff_x28 + 0x28);
        uVar20 = *(undefined4 *)(unaff_x28 + 0x2c);
        uVar9 = FUN_05c7b59c(*(undefined4 *)(unaff_x28 + 0x20),0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
        *(undefined4 *)(unaff_x28 + 0x20) = uVar9;
        *(undefined4 *)(unaff_x28 + 0x24) = uVar13;
        *(undefined4 *)(unaff_x28 + 0x28) = uVar17;
        *(undefined4 *)(unaff_x28 + 0x2c) = uVar20;
      }
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      plVar5 = *(long **)(*unaff_x22 + 0xb8);
    }
    param_1 = plVar5[3];
    if (param_1 == 0) goto LAB_04f88b24;
    if (*(uint *)(param_1 + 0x18) <= unaff_w20) goto LAB_04f88b20;
    param_1 = param_1 + unaff_x26;
  } while( true );
}


