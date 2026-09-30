/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$ToNativeArray
ENTRY_POINT: 04f88984
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__ToNativeArray
               (float param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined1 in_CY;
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
  undefined4 uVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
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
  float fVar29;
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
  
  while (!(bool)in_CY) {
    fVar22 = (float)param_4;
    fVar13 = (float)param_2;
    fVar18 = (float)param_3;
    *unaff_x29 = (unaff_s15 * fVar18 + in_stack_00000050 * param_1 + unaff_s11 * fVar22) -
                 unaff_s13 * fVar13;
    unaff_x29[1] = (unaff_s13 * param_1 + in_stack_00000050 * fVar13 + unaff_s15 * fVar22) -
                   unaff_s11 * fVar18;
    unaff_x29[2] = (unaff_s11 * fVar13 + in_stack_00000050 * fVar18 + unaff_s13 * fVar22) -
                   unaff_s15 * param_1;
    unaff_x29[3] = ((in_stack_00000050 * fVar22 - unaff_s11 * param_1) - unaff_s15 * fVar13) -
                   unaff_s13 * fVar18;
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
      fVar13 = *(float *)(lVar5 + 0x24);
      fVar18 = *(float *)(lVar5 + 0x28);
      fVar22 = *(float *)(lVar5 + 0x2c);
      uVar10 = FUN_05c7b59c(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      *(float *)(unaff_x28 + 0x24) = fVar13;
      *(float *)(unaff_x28 + 0x28) = fVar18;
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
      *(float *)(unaff_x28 + 0x2c) = fVar22;
      if (uVar2 <= uVar7) goto LAB_04f88b20;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_04f88b20;
      lVar5 = lVar5 + unaff_x26 * 0x10;
      unaff_w20 = unaff_w20 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar10;
      *(float *)(lVar5 + 0x24) = fVar13;
      *(float *)(lVar5 + 0x28) = fVar18;
      *(float *)(lVar5 + 0x2c) = fVar22;
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
          uVar12 = *(undefined4 *)(unaff_x28 + 0x24);
          uVar16 = *(undefined4 *)(unaff_x28 + 0x28);
          uVar20 = *(undefined4 *)(unaff_x28 + 0x2c);
          uVar10 = FUN_05c7b59c(*(undefined4 *)(unaff_x28 + 0x20),0);
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
          *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
          *(undefined4 *)(unaff_x28 + 0x24) = uVar12;
          *(undefined4 *)(unaff_x28 + 0x28) = uVar16;
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
      uVar14 = *(undefined8 *)(lVar5 + 0x24);
      fVar29 = *(float *)(lVar5 + 0x2c);
      uVar23 = *(undefined8 *)(lVar5 + 0x3c);
      fVar28 = *(float *)(lVar5 + 0x44);
      fVar15 = (float)((ulong)uVar14 >> 0x20);
      fVar19 = (float)((ulong)in_stack_00000048 >> 0x20);
      fVar11 = fVar15 * (float)((ulong)in_stack_00000038 >> 0x20) * in_stack_00000070 * fVar19;
      fVar17 = in_stack_00000070 * fVar29 * unaff_w23 * in_stack_00000040._4_4_;
      uVar24 = uVar23;
      fVar9 = (float)FUN_05c7b824(0);
      fVar21 = (float)uVar24;
      fVar27 = (fVar13 * fVar17 + fVar22 * fVar9 + fVar8 * fVar21) - fVar18 * fVar11;
      fVar26 = (fVar18 * fVar9 + fVar22 * fVar11 + fVar13 * fVar21) - fVar8 * fVar17;
      fVar25 = (fVar8 * fVar11 + fVar22 * fVar17 + fVar18 * fVar21) - fVar13 * fVar9;
      fVar13 = ((fVar22 * fVar21 - fVar8 * fVar9) - fVar13 * fVar11) - fVar18 * fVar17;
      fStack0000000000000088 = fVar27;
      fStack000000000000008c = fVar26;
      fStack0000000000000090 = fVar25;
      fStack0000000000000094 = fVar13;
      if (unaff_x21 == 0) goto LAB_04f88b24;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
      fVar18 = (float)FUN_04f88ff4(unaff_x25 + unaff_x27 * 0x10,&stack0x00000088);
      if (in_stack_00000070 <= fVar18) {
        in_stack_00000070 = fVar18;
      }
      if (fVar18 < 0.0) {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
        uVar12 = *(undefined4 *)(unaff_x28 + 0x24);
        uVar16 = *(undefined4 *)(unaff_x28 + 0x28);
        uVar20 = *(undefined4 *)(unaff_x28 + 0x2c);
        uVar10 = FUN_05c7b59c(*(undefined4 *)(unaff_x28 + 0x20),0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_04f88b20;
        *(undefined4 *)(unaff_x28 + 0x20) = uVar10;
        *(undefined4 *)(unaff_x28 + 0x24) = uVar12;
        *(undefined4 *)(unaff_x28 + 0x28) = uVar16;
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
    fVar22 = unaff_s15;
    fVar8 = unaff_s13;
    uVar10 = FUN_05c7bd38(0);
    uVar12 = FUN_05c7bd38(fVar27,fVar26,fVar25,fVar13,uVar14,fVar15,fVar29,0);
    fVar9 = (float)((ulong)uVar23 >> 0x20);
    FUN_05c7bd38(unaff_s11,unaff_s15,unaff_s13,in_stack_00000050,uVar23,fVar9,fVar28,0);
    fVar22 = (float)FUN_02cdfa10(uVar10,fVar22,fVar8,uVar12,fVar26,fVar25,0);
    fVar18 = fVar18 * *(float *)(unaff_x19 + 0xb0);
    fVar13 = 1.0;
    if (fVar18 <= 1.0) {
      fVar13 = fVar18;
    }
    param_4 = (ulong)(uint)(1.0 - fVar13);
    fVar8 = 1.0;
    if (0.0 <= fVar18) {
      fVar8 = 1.0 - fVar13;
    }
    param_3 = (ulong)(uint)(fVar28 * fVar22 * fVar8 * in_stack_00000040._4_4_);
    param_2 = (ulong)(uint)(fVar9 * fVar22 * fVar8 * fVar19);
    param_1 = (float)FUN_05c7b824(0);
    in_CY = *(uint *)(unaff_x21 + 0x18) <= uVar7;
  }
LAB_04f88b20:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


