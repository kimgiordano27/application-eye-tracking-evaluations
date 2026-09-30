/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 04f887b4
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


void OVRPlugin_Qpl_Annotation_Builder__Add
               (float param_1,undefined1 param_2 [16],float param_3,float param_4,
               undefined1 param_5 [16],float param_6,float param_7,float param_8)

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
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uVar20;
  float unaff_s10;
  float fVar21;
  float unaff_s12;
  float fVar22;
  float unaff_s13;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  float in_stack_00000070;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  
  while( true ) {
    param_6 = param_6 - param_7;
    param_8 = param_8 - param_1;
    param_4 = param_4 - param_3;
    fStack0000000000000088 = unaff_s10;
    fStack000000000000008c = param_6;
    fStack0000000000000090 = param_8;
    fStack0000000000000094 = param_4;
    if (unaff_x21 == 0) break;
    uVar7 = (uint)unaff_x27;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
    fVar10 = (float)FUN_04f88ff4(unaff_x25 + unaff_x27 * 0x10,&stack0x00000088);
    if (in_stack_00000070 <= fVar10) {
      in_stack_00000070 = fVar10;
    }
    fVar12 = (float)((ulong)in_stack_00000048 >> 0x20);
    if (0.0 <= fVar10) {
      if (unaff_w29 != 0) {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
        fVar8 = *(float *)(unaff_x28 + 0x20);
        fVar21 = *(float *)(unaff_x28 + 0x24);
        fVar9 = *(float *)(unaff_x28 + 0x28);
        fVar22 = *(float *)(unaff_x28 + 0x2c);
        fVar17 = fVar21;
        fVar19 = fVar9;
        uVar11 = FUN_05c7bd38(0);
        uVar13 = FUN_05c7bd38(unaff_s10,param_6,param_8,param_4,in_stack_00000050,
                              (int)((ulong)in_stack_00000050 >> 0x20),unaff_s13,0);
        fVar15 = (float)((ulong)in_stack_00000060 >> 0x20);
        FUN_05c7bd38(fVar8,fVar21,fVar9,fVar22,in_stack_00000060,fVar15,unaff_s12,0);
        fVar19 = (float)FUN_02cdfa10(uVar11,fVar17,fVar19,uVar13,param_6,param_8,0);
        fVar10 = fVar10 * *(float *)(unaff_x19 + 0xb0);
        fVar17 = 1.0;
        if (fVar10 <= 1.0) {
          fVar17 = fVar10;
        }
        fVar17 = 1.0 - fVar17;
        fVar14 = 1.0;
        if (0.0 <= fVar10) {
          fVar14 = fVar17;
        }
        fVar15 = fVar15 * fVar19 * fVar14 * fVar12;
        fVar19 = unaff_s12 * fVar19 * fVar14 * in_stack_00000040._4_4_;
        fVar10 = (float)FUN_05c7b824(0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
        *(float *)(unaff_x28 + 0x20) =
             (fVar21 * fVar19 + fVar22 * fVar10 + fVar8 * fVar17) - fVar9 * fVar15;
        *(float *)(unaff_x28 + 0x24) =
             (fVar9 * fVar10 + fVar22 * fVar15 + fVar21 * fVar17) - fVar8 * fVar19;
        *(float *)(unaff_x28 + 0x28) =
             (fVar8 * fVar15 + fVar22 * fVar19 + fVar9 * fVar17) - fVar21 * fVar10;
        *(float *)(unaff_x28 + 0x2c) =
             ((fVar22 * fVar17 - fVar8 * fVar10) - fVar21 * fVar15) - fVar9 * fVar19;
      }
    }
    else {
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      uVar13 = *(undefined4 *)(unaff_x28 + 0x24);
      uVar16 = *(undefined4 *)(unaff_x28 + 0x28);
      uVar18 = *(undefined4 *)(unaff_x28 + 0x2c);
      uVar11 = FUN_05c7b59c(*(undefined4 *)(unaff_x28 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      *(undefined4 *)(unaff_x28 + 0x20) = uVar11;
      *(undefined4 *)(unaff_x28 + 0x24) = uVar13;
      *(undefined4 *)(unaff_x28 + 0x28) = uVar16;
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
      fVar10 = *(float *)(lVar5 + 0x24);
      fVar17 = *(float *)(lVar5 + 0x28);
      fVar19 = *(float *)(lVar5 + 0x2c);
      uVar11 = FUN_05c7b59c(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      *(float *)(unaff_x28 + 0x24) = fVar10;
      *(float *)(unaff_x28 + 0x28) = fVar17;
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      *(undefined4 *)(unaff_x28 + 0x20) = uVar11;
      *(float *)(unaff_x28 + 0x2c) = fVar19;
      if (uVar2 <= uVar7) goto LAB_04f88b20;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      lVar5 = lVar5 + unaff_x26 * 0x10;
      unaff_w20 = unaff_w20 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar11;
      *(float *)(lVar5 + 0x24) = fVar10;
      *(float *)(lVar5 + 0x28) = fVar17;
      *(float *)(lVar5 + 0x2c) = fVar19;
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
      fVar8 = (float)FUN_04f88e34();
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
        uVar16 = *(undefined4 *)(unaff_x28 + 0x28);
        uVar18 = *(undefined4 *)(unaff_x28 + 0x2c);
        uVar11 = FUN_05c7b59c(*(undefined4 *)(unaff_x28 + 0x20),0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
        *(undefined4 *)(unaff_x28 + 0x20) = uVar11;
        *(undefined4 *)(unaff_x28 + 0x24) = uVar13;
        *(undefined4 *)(unaff_x28 + 0x28) = uVar16;
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
      in_stack_00000070 = 0.0;
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *unaff_x24;
    }
    lVar5 = *(long *)(lVar6 + 0xb8);
    in_stack_00000050 = *(undefined8 *)(lVar5 + 0x24);
    unaff_s13 = *(float *)(lVar5 + 0x2c);
    in_stack_00000060 = *(undefined8 *)(lVar5 + 0x3c);
    unaff_s12 = *(float *)(lVar5 + 0x44);
    fVar12 = (float)((ulong)in_stack_00000050 >> 0x20) * (float)((ulong)in_stack_00000038 >> 0x20) *
             in_stack_00000070 * fVar12;
    fVar15 = in_stack_00000070 * unaff_s13 * unaff_w23 * in_stack_00000040._4_4_;
    uVar20 = in_stack_00000060;
    fVar9 = (float)FUN_05c7b824(0);
    fVar21 = (float)uVar20;
    param_1 = fVar10 * fVar9;
    param_6 = fVar17 * fVar9 + fVar19 * fVar12 + fVar10 * fVar21;
    param_7 = fVar8 * fVar15;
    param_3 = fVar17 * fVar15;
    param_8 = fVar8 * fVar12 + fVar19 * fVar15 + fVar17 * fVar21;
    param_4 = (fVar19 * fVar21 - fVar8 * fVar9) - fVar10 * fVar12;
    unaff_s10 = (fVar10 * fVar15 + fVar19 * fVar9 + fVar8 * fVar21) - fVar17 * fVar12;
  }
LAB_04f88b24:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


