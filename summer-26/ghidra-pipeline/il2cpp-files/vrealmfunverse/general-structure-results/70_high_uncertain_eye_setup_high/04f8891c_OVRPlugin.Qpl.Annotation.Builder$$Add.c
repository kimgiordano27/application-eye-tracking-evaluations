/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 04f8891c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Add
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,ulong param_4,
               ulong param_5,float param_6,undefined4 param_7)

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
  long unaff_x27;
  long unaff_x28;
  float *unaff_x29;
  float fVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float unaff_s11;
  float unaff_s12;
  float fVar26;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined4 uStack0000000000000000;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  float in_stack_00000050;
  undefined8 in_stack_00000060;
  float in_stack_00000070;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  
  while( true ) {
    uStack0000000000000000 = param_7;
    fVar9 = (float)FUN_02cdfa10(in_stack_00000030,in_stack_00000028._4_4_,param_3,param_4,param_5,
                                param_6,0);
    fVar14 = unaff_s14 * *(float *)(unaff_x19 + 0xb0);
    fVar22 = 1.0;
    if (fVar14 <= 1.0) {
      fVar22 = fVar14;
    }
    fVar22 = 1.0 - fVar22;
    fVar19 = 1.0;
    if (0.0 <= fVar14) {
      fVar19 = fVar22;
    }
    fVar14 = (float)((ulong)in_stack_00000048 >> 0x20);
    fVar12 = (float)((ulong)in_stack_00000060 >> 0x20) * fVar9 * fVar19 * fVar14;
    fVar19 = unaff_s12 * fVar9 * fVar19 * in_stack_00000040._4_4_;
    fVar9 = (float)FUN_05c7b824(0);
    if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x27) break;
    *unaff_x29 = (unaff_s15 * fVar19 + in_stack_00000050 * fVar9 + unaff_s11 * fVar22) -
                 unaff_s13 * fVar12;
    unaff_x29[1] = (unaff_s13 * fVar9 + in_stack_00000050 * fVar12 + unaff_s15 * fVar22) -
                   unaff_s11 * fVar19;
    unaff_x29[2] = (unaff_s11 * fVar12 + in_stack_00000050 * fVar19 + unaff_s13 * fVar22) -
                   unaff_s15 * fVar9;
    unaff_x29[3] = ((in_stack_00000050 * fVar22 - unaff_s11 * fVar9) - unaff_s15 * fVar12) -
                   unaff_s13 * fVar19;
LAB_04f88a08:
    do {
      lVar6 = *(long *)(unaff_x19 + 0x158);
      if (lVar6 == 0) {
LAB_04f88b24:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      if (*(int *)(lVar6 + unaff_x26 * 4 + 0x20) == 0) {
        lVar6 = *(long *)(unaff_x19 + 0xe0);
      }
      else {
        lVar6 = *(long *)(unaff_x19 + 0xd8);
      }
      if (lVar6 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      lVar6 = *(long *)(lVar6 + unaff_x26 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_04f88b24;
      uVar10 = FUN_04f0e0c4(lVar6,0);
      lVar6 = *(long *)(unaff_x19 + 0x148);
      if (lVar6 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      if (unaff_x21 == 0) goto LAB_04f88b24;
      uVar8 = (uint)unaff_x27;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar8) goto LAB_04f88b20;
      lVar6 = lVar6 + unaff_x26 * 0x10;
      fVar22 = *(float *)(lVar6 + 0x24);
      fVar9 = *(float *)(lVar6 + 0x28);
      fVar19 = *(float *)(lVar6 + 0x2c);
      uStack0000000000000000 = uVar10;
      uVar10 = FUN_05c7b59c(*(undefined4 *)(lVar6 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar8) goto LAB_04f88b20;
      *(float *)(unaff_x28 + 0x24) = fVar22;
      *(float *)(unaff_x28 + 0x28) = fVar9;
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
      *(float *)(unaff_x28 + 0x2c) = fVar19;
      if (uVar2 <= uVar8) goto LAB_04f88b20;
      lVar6 = *(long *)(unaff_x19 + 0x150);
      if (lVar6 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      lVar6 = lVar6 + unaff_x26 * 0x10;
      unaff_w20 = unaff_w20 + 1;
      *(undefined4 *)(lVar6 + 0x20) = uVar10;
      *(float *)(lVar6 + 0x24) = fVar22;
      *(float *)(lVar6 + 0x28) = fVar9;
      *(float *)(lVar6 + 0x2c) = fVar19;
      lVar6 = *unaff_x22;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar6 = *unaff_x22;
      }
      if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_04f88b24;
      if (*(int *)(**(long **)(lVar6 + 0xb8) + 0x18) <= (int)unaff_w20) {
        return;
      }
      lVar6 = *(long *)(unaff_x19 + 0x158);
      if (lVar6 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      unaff_x26 = (long)(int)unaff_w20;
      iVar1 = *(int *)(lVar6 + unaff_x26 * 4 + 0x20);
      fVar12 = (float)FUN_04f88e34();
      lVar6 = *(long *)(unaff_x19 + 0xd0);
      if (lVar6 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      lVar4 = *unaff_x22;
      uVar10 = *(undefined4 *)(lVar6 + unaff_x26 * 4 + 0x20);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar4 = *unaff_x22;
      }
      plVar5 = *(long **)(lVar4 + 0xb8);
      lVar6 = *plVar5;
      if (lVar6 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      uVar8 = *(uint *)(lVar6 + unaff_x26 * 4 + 0x20);
      unaff_x27 = (long)(int)uVar8;
      unaff_x28 = unaff_x21 + unaff_x27 * 0x10;
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (unaff_x21 == 0) goto LAB_04f88b24;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar8) goto LAB_04f88b20;
          uVar13 = *(undefined4 *)(unaff_x28 + 0x24);
          uVar17 = *(undefined4 *)(unaff_x28 + 0x28);
          uVar20 = *(undefined4 *)(unaff_x28 + 0x2c);
          uStack0000000000000000 = uVar10;
          uVar10 = FUN_05c7b59c(*(undefined4 *)(unaff_x28 + 0x20),0);
          if (*(uint *)(unaff_x21 + 0x18) <= uVar8) goto LAB_04f88b20;
          *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
          *(undefined4 *)(unaff_x28 + 0x24) = uVar13;
          *(undefined4 *)(unaff_x28 + 0x28) = uVar17;
          *(undefined4 *)(unaff_x28 + 0x2c) = uVar20;
        }
        goto LAB_04f88a08;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        plVar5 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar6 = plVar5[3];
      if (lVar6 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      lVar4 = *unaff_x24;
      cVar3 = *(char *)(lVar6 + unaff_x26 + 0x20);
      if (cVar3 != '\0') {
        in_stack_00000070 = 0.0;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar4 = *unaff_x24;
      }
      lVar6 = *(long *)(lVar4 + 0xb8);
      uVar15 = *(undefined8 *)(lVar6 + 0x24);
      fVar26 = *(float *)(lVar6 + 0x2c);
      in_stack_00000060 = *(undefined8 *)(lVar6 + 0x3c);
      unaff_s12 = *(float *)(lVar6 + 0x44);
      fVar16 = (float)((ulong)uVar15 >> 0x20);
      fVar11 = fVar16 * (float)((ulong)in_stack_00000038 >> 0x20) * in_stack_00000070 * fVar14;
      fVar18 = in_stack_00000070 * fVar26 * unaff_w23 * in_stack_00000040._4_4_;
      uVar23 = in_stack_00000060;
      fVar7 = (float)FUN_05c7b824(0);
      fVar21 = (float)uVar23;
      fVar25 = (fVar22 * fVar18 + fVar19 * fVar7 + fVar12 * fVar21) - fVar9 * fVar11;
      fVar24 = (fVar9 * fVar7 + fVar19 * fVar11 + fVar22 * fVar21) - fVar12 * fVar18;
      param_6 = (fVar12 * fVar11 + fVar19 * fVar18 + fVar9 * fVar21) - fVar22 * fVar7;
      fVar22 = ((fVar19 * fVar21 - fVar12 * fVar7) - fVar22 * fVar11) - fVar9 * fVar18;
      fStack0000000000000088 = fVar25;
      fStack000000000000008c = fVar24;
      fStack0000000000000090 = param_6;
      fStack0000000000000094 = fVar22;
      if (unaff_x21 == 0) goto LAB_04f88b24;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar8) goto LAB_04f88b20;
      unaff_s14 = (float)FUN_04f88ff4(unaff_x25 + unaff_x27 * 0x10,&stack0x00000088);
      if (in_stack_00000070 <= unaff_s14) {
        in_stack_00000070 = unaff_s14;
      }
      if (unaff_s14 < 0.0) {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar8) goto LAB_04f88b20;
        uVar13 = *(undefined4 *)(unaff_x28 + 0x24);
        uVar17 = *(undefined4 *)(unaff_x28 + 0x28);
        uVar20 = *(undefined4 *)(unaff_x28 + 0x2c);
        uStack0000000000000000 = uVar10;
        uVar10 = FUN_05c7b59c(*(undefined4 *)(unaff_x28 + 0x20),0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar8) goto LAB_04f88b20;
        *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
        *(undefined4 *)(unaff_x28 + 0x24) = uVar13;
        *(undefined4 *)(unaff_x28 + 0x28) = uVar17;
        *(undefined4 *)(unaff_x28 + 0x2c) = uVar20;
        goto LAB_04f88a08;
      }
    } while (cVar3 == '\0');
    if (*(uint *)(unaff_x21 + 0x18) <= uVar8) break;
    unaff_x29 = (float *)(unaff_x28 + 0x20);
    unaff_s11 = *unaff_x29;
    unaff_s15 = *(float *)(unaff_x28 + 0x24);
    unaff_s13 = *(float *)(unaff_x28 + 0x28);
    in_stack_00000050 = *(float *)(unaff_x28 + 0x2c);
    in_stack_00000028._4_4_ = unaff_s15;
    fVar9 = unaff_s13;
    in_stack_00000030 = FUN_05c7bd38(0);
    uVar8 = FUN_05c7bd38(fVar25,fVar24,param_6,fVar22,uVar15,fVar16,fVar26,0);
    param_7 = FUN_05c7bd38(unaff_s11,unaff_s15,unaff_s13,in_stack_00000050,in_stack_00000060,
                           (int)((ulong)in_stack_00000060 >> 0x20),unaff_s12,0);
    param_4 = (ulong)uVar8;
    param_5 = (ulong)(uint)fVar24;
    param_3 = (ulong)(uint)fVar9;
  }
LAB_04f88b20:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


