/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 04f88948
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
               (float param_1,float param_2,long param_3,undefined1 param_4 [16],float param_5,
               undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  char cVar3;
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
  float *unaff_x29;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float unaff_s11;
  float fVar28;
  float unaff_s13;
  float unaff_s15;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  float in_stack_00000050;
  float in_stack_00000070;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fVar13;
  
  while( true ) {
    fVar22 = param_5;
    if (param_2 <= param_5) {
      fVar22 = param_2;
    }
    fVar22 = param_5 - fVar22;
    if (0.0 <= param_2) {
      param_5 = fVar22;
    }
    fVar13 = (float)((ulong)in_stack_00000048 >> 0x20);
    fVar12 = (float)((ulong)param_3 >> 0x20) * param_5 * fVar13;
    fVar19 = param_1 * param_5 * in_stack_00000040._4_4_;
    fVar9 = (float)FUN_05c7b824(param_6);
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
      lVar5 = *(long *)(unaff_x19 + 0x158);
      if (lVar5 == 0) {
LAB_04f88b24:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
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
      fVar22 = *(float *)(lVar5 + 0x24);
      fVar9 = *(float *)(lVar5 + 0x28);
      fVar12 = *(float *)(lVar5 + 0x2c);
      uVar10 = FUN_05c7b59c(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      *(float *)(unaff_x28 + 0x24) = fVar22;
      *(float *)(unaff_x28 + 0x28) = fVar9;
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
      *(float *)(unaff_x28 + 0x2c) = fVar12;
      if (uVar2 <= uVar7) goto LAB_04f88b20;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      lVar5 = lVar5 + unaff_x26 * 0x10;
      unaff_w20 = unaff_w20 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar10;
      *(float *)(lVar5 + 0x24) = fVar22;
      *(float *)(lVar5 + 0x28) = fVar9;
      *(float *)(lVar5 + 0x2c) = fVar12;
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
      fVar19 = (float)FUN_04f88e34();
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
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (unaff_x21 == 0) goto LAB_04f88b24;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
          uVar14 = *(undefined4 *)(unaff_x28 + 0x24);
          uVar17 = *(undefined4 *)(unaff_x28 + 0x28);
          uVar20 = *(undefined4 *)(unaff_x28 + 0x2c);
          uVar10 = FUN_05c7b59c(*(undefined4 *)(unaff_x28 + 0x20),0);
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
          *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
          *(undefined4 *)(unaff_x28 + 0x24) = uVar14;
          *(undefined4 *)(unaff_x28 + 0x28) = uVar17;
          *(undefined4 *)(unaff_x28 + 0x2c) = uVar20;
        }
        goto LAB_04f88a08;
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        plVar4 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar5 = plVar4[3];
      if (lVar5 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      lVar6 = *unaff_x24;
      cVar3 = *(char *)(lVar5 + unaff_x26 + 0x20);
      if (cVar3 != '\0') {
        in_stack_00000070 = 0.0;
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar6 = *unaff_x24;
      }
      lVar5 = *(long *)(lVar6 + 0xb8);
      uVar15 = *(undefined8 *)(lVar5 + 0x24);
      fVar28 = *(float *)(lVar5 + 0x2c);
      uVar23 = *(undefined8 *)(lVar5 + 0x3c);
      param_1 = *(float *)(lVar5 + 0x44);
      fVar16 = (float)((ulong)uVar15 >> 0x20);
      fVar11 = fVar16 * (float)((ulong)in_stack_00000038 >> 0x20) * in_stack_00000070 * fVar13;
      fVar18 = in_stack_00000070 * fVar28 * unaff_w23 * in_stack_00000040._4_4_;
      uVar24 = uVar23;
      fVar8 = (float)FUN_05c7b824(0);
      fVar21 = (float)uVar24;
      fVar27 = (fVar22 * fVar18 + fVar12 * fVar8 + fVar19 * fVar21) - fVar9 * fVar11;
      fVar26 = (fVar9 * fVar8 + fVar12 * fVar11 + fVar22 * fVar21) - fVar19 * fVar18;
      fVar25 = (fVar19 * fVar11 + fVar12 * fVar18 + fVar9 * fVar21) - fVar22 * fVar8;
      fVar22 = ((fVar12 * fVar21 - fVar19 * fVar8) - fVar22 * fVar11) - fVar9 * fVar18;
      fStack0000000000000088 = fVar27;
      fStack000000000000008c = fVar26;
      fStack0000000000000090 = fVar25;
      fStack0000000000000094 = fVar22;
      if (unaff_x21 == 0) goto LAB_04f88b24;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      param_2 = (float)FUN_04f88ff4(unaff_x25 + unaff_x27 * 0x10,&stack0x00000088);
      if (in_stack_00000070 <= param_2) {
        in_stack_00000070 = param_2;
      }
      if (param_2 < 0.0) {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
        uVar14 = *(undefined4 *)(unaff_x28 + 0x24);
        uVar17 = *(undefined4 *)(unaff_x28 + 0x28);
        uVar20 = *(undefined4 *)(unaff_x28 + 0x2c);
        uVar10 = FUN_05c7b59c(*(undefined4 *)(unaff_x28 + 0x20),0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
        *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
        *(undefined4 *)(unaff_x28 + 0x24) = uVar14;
        *(undefined4 *)(unaff_x28 + 0x28) = uVar17;
        *(undefined4 *)(unaff_x28 + 0x2c) = uVar20;
        goto LAB_04f88a08;
      }
    } while (cVar3 == '\0');
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) break;
    unaff_x29 = (float *)(unaff_x28 + 0x20);
    unaff_s11 = *unaff_x29;
    unaff_s15 = *(float *)(unaff_x28 + 0x24);
    unaff_s13 = *(float *)(unaff_x28 + 0x28);
    in_stack_00000050 = *(float *)(unaff_x28 + 0x2c);
    fVar9 = unaff_s15;
    fVar12 = unaff_s13;
    uVar10 = FUN_05c7bd38(0);
    uVar14 = FUN_05c7bd38(fVar27,fVar26,fVar25,fVar22,uVar15,fVar16,fVar28,0);
    fVar13 = (float)((ulong)uVar23 >> 0x20);
    FUN_05c7bd38(unaff_s11,unaff_s15,unaff_s13,in_stack_00000050,uVar23,fVar13,param_1,0);
    fVar22 = (float)FUN_02cdfa10(uVar10,fVar9,fVar12,uVar14,fVar26,fVar25,0);
    param_5 = 1.0;
    param_6 = 0;
    param_2 = param_2 * *(float *)(unaff_x19 + 0xb0);
    param_3 = (ulong)(uint)(fVar13 * fVar22) << 0x20;
    param_1 = param_1 * fVar22;
  }
LAB_04f88b20:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


