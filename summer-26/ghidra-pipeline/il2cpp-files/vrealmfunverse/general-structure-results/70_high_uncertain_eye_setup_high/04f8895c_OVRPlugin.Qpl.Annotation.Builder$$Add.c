/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 04f8895c
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
               (float param_1,float param_2,long param_3,float param_4,undefined8 param_5)

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
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
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
  float fVar14;
  
  while( true ) {
    fVar14 = (float)((ulong)in_stack_00000048 >> 0x20);
    fVar13 = (float)((ulong)param_3 >> 0x20) * param_2 * fVar14;
    fVar20 = param_1 * param_2 * in_stack_00000040._4_4_;
    fVar10 = (float)FUN_05c7b824(param_5);
    if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x27) break;
    *unaff_x29 = (unaff_s15 * fVar20 + in_stack_00000050 * fVar10 + unaff_s11 * param_4) -
                 unaff_s13 * fVar13;
    unaff_x29[1] = (unaff_s13 * fVar10 + in_stack_00000050 * fVar13 + unaff_s15 * param_4) -
                   unaff_s11 * fVar20;
    unaff_x29[2] = (unaff_s11 * fVar13 + in_stack_00000050 * fVar20 + unaff_s13 * param_4) -
                   unaff_s15 * fVar10;
    unaff_x29[3] = ((in_stack_00000050 * param_4 - unaff_s11 * fVar10) - unaff_s15 * fVar13) -
                   unaff_s13 * fVar20;
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
      fVar10 = *(float *)(lVar5 + 0x24);
      fVar13 = *(float *)(lVar5 + 0x28);
      fVar20 = *(float *)(lVar5 + 0x2c);
      uVar11 = FUN_05c7b59c(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      *(float *)(unaff_x28 + 0x24) = fVar10;
      *(float *)(unaff_x28 + 0x28) = fVar13;
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      *(undefined4 *)(unaff_x28 + 0x20) = uVar11;
      *(float *)(unaff_x28 + 0x2c) = fVar20;
      if (uVar2 <= uVar7) goto LAB_04f88b20;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      lVar5 = lVar5 + unaff_x26 * 0x10;
      unaff_w20 = unaff_w20 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar11;
      *(float *)(lVar5 + 0x24) = fVar10;
      *(float *)(lVar5 + 0x28) = fVar13;
      *(float *)(lVar5 + 0x2c) = fVar20;
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
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (unaff_x21 == 0) goto LAB_04f88b24;
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
          uVar15 = *(undefined4 *)(unaff_x28 + 0x24);
          uVar18 = *(undefined4 *)(unaff_x28 + 0x28);
          uVar21 = *(undefined4 *)(unaff_x28 + 0x2c);
          uVar11 = FUN_05c7b59c(*(undefined4 *)(unaff_x28 + 0x20),0);
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
          *(undefined4 *)(unaff_x28 + 0x20) = uVar11;
          *(undefined4 *)(unaff_x28 + 0x24) = uVar15;
          *(undefined4 *)(unaff_x28 + 0x28) = uVar18;
          *(undefined4 *)(unaff_x28 + 0x2c) = uVar21;
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
      uVar16 = *(undefined8 *)(lVar5 + 0x24);
      fVar28 = *(float *)(lVar5 + 0x2c);
      uVar23 = *(undefined8 *)(lVar5 + 0x3c);
      param_1 = *(float *)(lVar5 + 0x44);
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      fVar12 = fVar17 * (float)((ulong)in_stack_00000038 >> 0x20) * in_stack_00000070 * fVar14;
      fVar19 = in_stack_00000070 * fVar28 * unaff_w23 * in_stack_00000040._4_4_;
      uVar24 = uVar23;
      fVar9 = (float)FUN_05c7b824(0);
      fVar22 = (float)uVar24;
      fVar27 = (fVar10 * fVar19 + fVar20 * fVar9 + fVar8 * fVar22) - fVar13 * fVar12;
      fVar26 = (fVar13 * fVar9 + fVar20 * fVar12 + fVar10 * fVar22) - fVar8 * fVar19;
      fVar25 = (fVar8 * fVar12 + fVar20 * fVar19 + fVar13 * fVar22) - fVar10 * fVar9;
      fVar10 = ((fVar20 * fVar22 - fVar8 * fVar9) - fVar10 * fVar12) - fVar13 * fVar19;
      fStack0000000000000088 = fVar27;
      fStack000000000000008c = fVar26;
      fStack0000000000000090 = fVar25;
      fStack0000000000000094 = fVar10;
      if (unaff_x21 == 0) goto LAB_04f88b24;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      fVar13 = (float)FUN_04f88ff4(unaff_x25 + unaff_x27 * 0x10,&stack0x00000088);
      if (in_stack_00000070 <= fVar13) {
        in_stack_00000070 = fVar13;
      }
      if (fVar13 < 0.0) {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
        uVar15 = *(undefined4 *)(unaff_x28 + 0x24);
        uVar18 = *(undefined4 *)(unaff_x28 + 0x28);
        uVar21 = *(undefined4 *)(unaff_x28 + 0x2c);
        uVar11 = FUN_05c7b59c(*(undefined4 *)(unaff_x28 + 0x20),0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
        *(undefined4 *)(unaff_x28 + 0x20) = uVar11;
        *(undefined4 *)(unaff_x28 + 0x24) = uVar15;
        *(undefined4 *)(unaff_x28 + 0x28) = uVar18;
        *(undefined4 *)(unaff_x28 + 0x2c) = uVar21;
        goto LAB_04f88a08;
      }
    } while (cVar3 == '\0');
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) break;
    unaff_x29 = (float *)(unaff_x28 + 0x20);
    unaff_s11 = *unaff_x29;
    unaff_s15 = *(float *)(unaff_x28 + 0x24);
    unaff_s13 = *(float *)(unaff_x28 + 0x28);
    in_stack_00000050 = *(float *)(unaff_x28 + 0x2c);
    fVar14 = unaff_s15;
    fVar20 = unaff_s13;
    uVar11 = FUN_05c7bd38(0);
    uVar15 = FUN_05c7bd38(fVar27,fVar26,fVar25,fVar10,uVar16,fVar17,fVar28,0);
    fVar8 = (float)((ulong)uVar23 >> 0x20);
    FUN_05c7bd38(unaff_s11,unaff_s15,unaff_s13,in_stack_00000050,uVar23,fVar8,param_1,0);
    fVar10 = (float)FUN_02cdfa10(uVar11,fVar14,fVar20,uVar15,fVar26,fVar25,0);
    param_5 = 0;
    fVar13 = fVar13 * *(float *)(unaff_x19 + 0xb0);
    param_3 = (ulong)(uint)(fVar8 * fVar10) << 0x20;
    param_1 = param_1 * fVar10;
    param_4 = 1.0;
    if (fVar13 <= 1.0) {
      param_4 = fVar13;
    }
    param_4 = 1.0 - param_4;
    param_2 = 1.0;
    if (0.0 <= fVar13) {
      param_2 = param_4;
    }
  }
LAB_04f88b20:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


