/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 04f888c8
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
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
               float param_6,float param_7,undefined8 param_8)

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
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000060;
  float in_stack_00000070;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  
  while( true ) {
    uVar9 = FUN_05c7bd38(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    fVar12 = (float)((ulong)in_stack_00000060 >> 0x20);
    FUN_05c7bd38(unaff_s11,unaff_s15,unaff_s13,unaff_s12,in_stack_00000060,fVar12,
                 fStack0000000000000034,0);
    fVar10 = (float)FUN_02cdfa10(uStack0000000000000030,fStack000000000000002c,
                                 fStack0000000000000028,uVar9,param_2 & 0xffffffff,(int)param_3,0);
    fVar14 = unaff_s14 * *(float *)(unaff_x19 + 0xb0);
    fVar20 = 1.0;
    if (fVar14 <= 1.0) {
      fVar20 = fVar14;
    }
    fVar20 = 1.0 - fVar20;
    fVar17 = 1.0;
    if (0.0 <= fVar14) {
      fVar17 = fVar20;
    }
    fVar14 = (float)((ulong)in_stack_00000048 >> 0x20);
    fVar12 = fVar12 * fVar10 * fVar17 * fVar14;
    fVar17 = fStack0000000000000034 * fVar10 * fVar17 * in_stack_00000040._4_4_;
    fVar10 = (float)FUN_05c7b824(0);
    if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x27) break;
    *unaff_x29 = (unaff_s15 * fVar17 + unaff_s12 * fVar10 + unaff_s11 * fVar20) - unaff_s13 * fVar12
    ;
    unaff_x29[1] = (unaff_s13 * fVar10 + unaff_s12 * fVar12 + unaff_s15 * fVar20) -
                   unaff_s11 * fVar17;
    unaff_x29[2] = (unaff_s11 * fVar12 + unaff_s12 * fVar17 + unaff_s13 * fVar20) -
                   unaff_s15 * fVar10;
    unaff_x29[3] = ((unaff_s12 * fVar20 - unaff_s11 * fVar10) - unaff_s15 * fVar12) -
                   unaff_s13 * fVar17;
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
      fVar20 = *(float *)(lVar5 + 0x24);
      fVar10 = *(float *)(lVar5 + 0x28);
      fVar12 = *(float *)(lVar5 + 0x2c);
      uVar9 = FUN_05c7b59c(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      *(float *)(unaff_x28 + 0x24) = fVar20;
      *(float *)(unaff_x28 + 0x28) = fVar10;
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      *(undefined4 *)(unaff_x28 + 0x20) = uVar9;
      *(float *)(unaff_x28 + 0x2c) = fVar12;
      if (uVar2 <= uVar7) goto LAB_04f88b20;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      lVar5 = lVar5 + unaff_x26 * 0x10;
      unaff_w20 = unaff_w20 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar9;
      *(float *)(lVar5 + 0x24) = fVar20;
      *(float *)(lVar5 + 0x28) = fVar10;
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
      fVar17 = (float)FUN_04f88e34();
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
      param_5 = *(undefined8 *)(lVar5 + 0x24);
      param_7 = *(float *)(lVar5 + 0x2c);
      in_stack_00000060 = *(undefined8 *)(lVar5 + 0x3c);
      fStack0000000000000034 = *(float *)(lVar5 + 0x44);
      param_6 = (float)((ulong)param_5 >> 0x20);
      fVar11 = param_6 * (float)((ulong)in_stack_00000038 >> 0x20) * in_stack_00000070 * fVar14;
      fVar16 = in_stack_00000070 * param_7 * unaff_w23 * in_stack_00000040._4_4_;
      uVar21 = in_stack_00000060;
      fVar8 = (float)FUN_05c7b824(0);
      fVar19 = (float)uVar21;
      fVar24 = (fVar20 * fVar16 + fVar12 * fVar8 + fVar17 * fVar19) - fVar10 * fVar11;
      fVar23 = (fVar10 * fVar8 + fVar12 * fVar11 + fVar20 * fVar19) - fVar17 * fVar16;
      fVar22 = (fVar17 * fVar11 + fVar12 * fVar16 + fVar10 * fVar19) - fVar20 * fVar8;
      fVar20 = ((fVar12 * fVar19 - fVar17 * fVar8) - fVar20 * fVar11) - fVar10 * fVar16;
      fStack0000000000000088 = fVar24;
      fStack000000000000008c = fVar23;
      fStack0000000000000090 = fVar22;
      fStack0000000000000094 = fVar20;
      if (unaff_x21 == 0) goto LAB_04f88b24;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      unaff_s14 = (float)FUN_04f88ff4(unaff_x25 + unaff_x27 * 0x10,&stack0x00000088);
      if (in_stack_00000070 <= unaff_s14) {
        in_stack_00000070 = unaff_s14;
      }
      if (unaff_s14 < 0.0) {
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
        goto LAB_04f88a08;
      }
    } while (cVar3 == '\0');
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) break;
    unaff_x29 = (float *)(unaff_x28 + 0x20);
    unaff_s11 = *unaff_x29;
    unaff_s15 = *(float *)(unaff_x28 + 0x24);
    unaff_s13 = *(float *)(unaff_x28 + 0x28);
    unaff_s12 = *(float *)(unaff_x28 + 0x2c);
    fStack000000000000002c = unaff_s15;
    fStack0000000000000028 = unaff_s13;
    uStack0000000000000030 = FUN_05c7bd38(0);
    param_1 = (ulong)(uint)fVar24;
    param_2 = (ulong)(uint)fVar23;
    param_3 = (ulong)(uint)fVar22;
    param_4 = (ulong)(uint)fVar20;
    param_8 = 0;
  }
LAB_04f88b20:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


