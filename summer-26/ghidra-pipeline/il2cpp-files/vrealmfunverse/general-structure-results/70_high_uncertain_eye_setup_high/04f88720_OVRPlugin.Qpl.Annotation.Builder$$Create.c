/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Create
ENTRY_POINT: 04f88720
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Create
               (undefined8 param_1,undefined8 param_2,float param_3,undefined1 param_4 [16],
               undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
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
  uint unaff_w29;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  float unaff_s8;
  float fVar20;
  float unaff_s9;
  float fVar21;
  float unaff_s10;
  float fVar22;
  float unaff_s11;
  float fVar23;
  float unaff_s12;
  float fVar24;
  float unaff_s13;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  float in_stack_00000070;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  
  uStack0000000000000068 = param_4._8_8_;
  uVar19 = param_4._0_8_;
  while( true ) {
    fVar12 = (float)((ulong)in_stack_00000048 >> 0x20);
    fVar11 = (float)((ulong)param_2 >> 0x20) * (float)((ulong)param_1 >> 0x20) * param_3 * fVar12;
    fVar14 = param_3 * unaff_s13 * unaff_w23 * in_stack_00000040._4_4_;
    uStack0000000000000060 = uVar19;
    fVar8 = (float)FUN_05c7b824(param_5);
    fVar17 = (float)uVar19;
    fVar22 = (unaff_s9 * fVar14 + unaff_s11 * fVar8 + unaff_s10 * fVar17) - unaff_s8 * fVar11;
    fVar21 = (unaff_s8 * fVar8 + unaff_s11 * fVar11 + unaff_s9 * fVar17) - unaff_s10 * fVar14;
    fVar20 = (unaff_s10 * fVar11 + unaff_s11 * fVar14 + unaff_s8 * fVar17) - unaff_s9 * fVar8;
    fVar8 = ((unaff_s11 * fVar17 - unaff_s10 * fVar8) - unaff_s9 * fVar11) - unaff_s8 * fVar14;
    fStack0000000000000088 = fVar22;
    fStack000000000000008c = fVar21;
    fStack0000000000000090 = fVar20;
    fStack0000000000000094 = fVar8;
    if (unaff_x21 == 0) break;
    uVar7 = (uint)unaff_x27;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
    fVar11 = (float)FUN_04f88ff4(unaff_x25 + unaff_x27 * 0x10,&stack0x00000088);
    param_3 = in_stack_00000070;
    if (in_stack_00000070 <= fVar11) {
      param_3 = fVar11;
    }
    if (0.0 <= fVar11) {
      if (unaff_w29 != 0) {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
        fVar10 = *(float *)(unaff_x28 + 0x20);
        fVar23 = *(float *)(unaff_x28 + 0x24);
        fVar16 = *(float *)(unaff_x28 + 0x28);
        fVar24 = *(float *)(unaff_x28 + 0x2c);
        fVar14 = fVar23;
        fVar17 = fVar16;
        uVar9 = FUN_05c7bd38(0);
        uVar13 = FUN_05c7bd38(fVar22,fVar21,fVar20,fVar8,in_stack_00000050,
                              (int)((ulong)in_stack_00000050 >> 0x20),unaff_s13,0);
        FUN_05c7bd38(fVar10,fVar23,fVar16,fVar24,uStack0000000000000060,
                     (int)((ulong)uStack0000000000000060 >> 0x20),unaff_s12,0);
        fVar21 = (float)FUN_02cdfa10(uVar9,fVar14,fVar17,uVar13,fVar21,fVar20,0);
        fVar11 = fVar11 * *(float *)(unaff_x19 + 0xb0);
        fVar8 = 1.0;
        if (fVar11 <= 1.0) {
          fVar8 = fVar11;
        }
        fVar8 = 1.0 - fVar8;
        fVar14 = 1.0;
        if (0.0 <= fVar11) {
          fVar14 = fVar8;
        }
        fVar12 = (float)((ulong)uStack0000000000000060 >> 0x20) * fVar21 * fVar14 * fVar12;
        fVar21 = unaff_s12 * fVar21 * fVar14 * in_stack_00000040._4_4_;
        fVar11 = (float)FUN_05c7b824(0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
        *(float *)(unaff_x28 + 0x20) =
             (fVar23 * fVar21 + fVar24 * fVar11 + fVar10 * fVar8) - fVar16 * fVar12;
        *(float *)(unaff_x28 + 0x24) =
             (fVar16 * fVar11 + fVar24 * fVar12 + fVar23 * fVar8) - fVar10 * fVar21;
        *(float *)(unaff_x28 + 0x28) =
             (fVar10 * fVar12 + fVar24 * fVar21 + fVar16 * fVar8) - fVar23 * fVar11;
        *(float *)(unaff_x28 + 0x2c) =
             ((fVar24 * fVar8 - fVar10 * fVar11) - fVar23 * fVar12) - fVar16 * fVar21;
      }
    }
    else {
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      uVar13 = *(undefined4 *)(unaff_x28 + 0x24);
      uVar15 = *(undefined4 *)(unaff_x28 + 0x28);
      uVar18 = *(undefined4 *)(unaff_x28 + 0x2c);
      uVar9 = FUN_05c7b59c(*(undefined4 *)(unaff_x28 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      *(undefined4 *)(unaff_x28 + 0x20) = uVar9;
      *(undefined4 *)(unaff_x28 + 0x24) = uVar13;
      *(undefined4 *)(unaff_x28 + 0x28) = uVar15;
      *(undefined4 *)(unaff_x28 + 0x2c) = uVar18;
    }
    while( true ) {
      lVar5 = *(long *)(unaff_x19 + 0x158);
      if (lVar5 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      if (*(int *)(lVar5 + unaff_x26 * 4 + 0x20) == 0) {
        lVar5 = *(long *)(unaff_x19 + 0xe0);
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0xd8);
      }
      if (lVar5 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      lVar5 = *(long *)(lVar5 + unaff_x26 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_04f88b24;
      FUN_04f0e0c4(lVar5,0);
      lVar5 = *(long *)(unaff_x19 + 0x148);
      if (lVar5 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      if (unaff_x21 == 0) goto LAB_04f88b24;
      uVar7 = (uint)unaff_x27;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      lVar5 = lVar5 + unaff_x26 * 0x10;
      unaff_s9 = *(float *)(lVar5 + 0x24);
      unaff_s8 = *(float *)(lVar5 + 0x28);
      unaff_s11 = *(float *)(lVar5 + 0x2c);
      uVar9 = FUN_05c7b59c(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      *(float *)(unaff_x28 + 0x24) = unaff_s9;
      *(float *)(unaff_x28 + 0x28) = unaff_s8;
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      *(undefined4 *)(unaff_x28 + 0x20) = uVar9;
      *(float *)(unaff_x28 + 0x2c) = unaff_s11;
      if (uVar2 <= uVar7) goto LAB_04f88b20;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      lVar5 = lVar5 + unaff_x26 * 0x10;
      unaff_w20 = unaff_w20 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar9;
      *(float *)(lVar5 + 0x24) = unaff_s9;
      *(float *)(lVar5 + 0x28) = unaff_s8;
      *(float *)(lVar5 + 0x2c) = unaff_s11;
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar5 = *unaff_x22;
      }
      if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_04f88b24;
      if (*(int *)(**(long **)(lVar5 + 0xb8) + 0x18) <= (int)unaff_w20) {
        return;
      }
      lVar5 = *(long *)(unaff_x19 + 0x158);
      if (lVar5 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      unaff_x26 = (long)(int)unaff_w20;
      iVar1 = *(int *)(lVar5 + unaff_x26 * 4 + 0x20);
      unaff_s10 = (float)FUN_04f88e34();
      if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_04f88b24;
      if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w20) goto LAB_04f88b20;
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar5 = *unaff_x22;
      }
      plVar4 = *(long **)(lVar5 + 0xb8);
      lVar6 = *plVar4;
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
        uVar15 = *(undefined4 *)(unaff_x28 + 0x28);
        uVar18 = *(undefined4 *)(unaff_x28 + 0x2c);
        uVar9 = FUN_05c7b59c(*(undefined4 *)(unaff_x28 + 0x20),0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
        *(undefined4 *)(unaff_x28 + 0x20) = uVar9;
        *(undefined4 *)(unaff_x28 + 0x24) = uVar13;
        *(undefined4 *)(unaff_x28 + 0x28) = uVar15;
        *(undefined4 *)(unaff_x28 + 0x2c) = uVar18;
      }
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      plVar4 = *(long **)(*unaff_x22 + 0xb8);
    }
    lVar5 = plVar4[3];
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w20) {
LAB_04f88b20:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar6 = *unaff_x24;
    bVar3 = *(byte *)(lVar5 + unaff_x26 + 0x20);
    unaff_w29 = (uint)bVar3;
    if (bVar3 != 0) {
      param_3 = 0.0;
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *unaff_x24;
    }
    lVar5 = *(long *)(lVar6 + 0xb8);
    param_5 = 0;
    param_2 = *(undefined8 *)(lVar5 + 0x24);
    unaff_s13 = *(float *)(lVar5 + 0x2c);
    uVar19 = *(undefined8 *)(lVar5 + 0x3c);
    uStack0000000000000068 = 0;
    unaff_s12 = *(float *)(lVar5 + 0x44);
    param_1 = in_stack_00000038;
    in_stack_00000050 = param_2;
    in_stack_00000070 = param_3;
  }
LAB_04f88b24:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


