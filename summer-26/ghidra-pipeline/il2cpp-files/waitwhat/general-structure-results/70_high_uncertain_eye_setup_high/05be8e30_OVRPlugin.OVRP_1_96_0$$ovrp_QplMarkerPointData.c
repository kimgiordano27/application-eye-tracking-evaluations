/*
FUNCTION_NAME: OVRPlugin.OVRP_1_96_0$$ovrp_QplMarkerPointData
ENTRY_POINT: 05be8e30
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_96_0__ovrp_QplMarkerPointData
               (long param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  float unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  uint uVar9;
  long unaff_x27;
  long unaff_x28;
  uint unaff_w29;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float unaff_s8;
  float fVar21;
  float unaff_s9;
  float fVar22;
  float unaff_s10;
  float fVar23;
  float unaff_s11;
  float fVar24;
  float unaff_s12;
  float fVar25;
  float unaff_s13;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  float in_stack_00000070;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  while( true ) {
    fVar19 = (float)param_4;
    fVar14 = (float)((ulong)in_stack_00000048 >> 0x20);
    fVar13 = (float)((ulong)param_1 >> 0x20) * fVar14;
    fVar16 = param_3 * param_2 * in_stack_00000040._4_4_;
    fVar10 = (float)FUN_069c5208(param_5);
    fVar23 = (unaff_s9 * fVar16 + unaff_s12 * fVar10 + unaff_s10 * fVar19) - unaff_s8 * fVar13;
    fVar22 = (unaff_s8 * fVar10 + unaff_s12 * fVar13 + unaff_s9 * fVar19) - unaff_s10 * fVar16;
    fVar21 = (unaff_s10 * fVar13 + unaff_s12 * fVar16 + unaff_s8 * fVar19) - unaff_s9 * fVar10;
    fVar10 = ((unaff_s12 * fVar19 - unaff_s10 * fVar10) - unaff_s9 * fVar13) - unaff_s8 * fVar16;
    fStack0000000000000080 = fVar23;
    fStack0000000000000084 = fVar22;
    fStack0000000000000088 = fVar21;
    fStack000000000000008c = fVar10;
    if (unaff_x20 == 0) break;
    uVar9 = (uint)unaff_x27;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
    fVar13 = (float)FUN_05be9384(unaff_x25 + unaff_x27 * 0x10,&stack0x00000080);
    if (in_stack_00000070 <= fVar13) {
      in_stack_00000070 = fVar13;
    }
    if (0.0 <= fVar13) {
      if (unaff_w29 != 0) {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
        fVar12 = *(float *)(unaff_x28 + 0x20);
        fVar25 = *(float *)(unaff_x28 + 0x24);
        fVar18 = *(float *)(unaff_x28 + 0x28);
        fVar24 = *(float *)(unaff_x28 + 0x2c);
        fVar16 = fVar25;
        fVar19 = fVar18;
        uVar11 = FUN_069c57a8(0);
        uVar15 = FUN_069c57a8(fVar23,fVar22,fVar21,fVar10,in_stack_00000050,
                              (int)((ulong)in_stack_00000050 >> 0x20),unaff_s13,0);
        fVar23 = (float)((ulong)in_stack_00000060 >> 0x20);
        FUN_069c57a8(fVar12,fVar25,fVar18,fVar24,in_stack_00000060,fVar23,unaff_s11,0);
        fVar22 = (float)FUN_05a73c9c(uVar11,fVar16,fVar19,uVar15,fVar22,fVar21,0);
        fVar13 = fVar13 * *(float *)(unaff_x19 + 0xb0);
        fVar10 = 1.0;
        if (fVar13 <= 1.0) {
          fVar10 = fVar13;
        }
        fVar10 = 1.0 - fVar10;
        fVar16 = 1.0;
        if (0.0 <= fVar13) {
          fVar16 = fVar10;
        }
        fVar14 = fVar23 * fVar22 * fVar16 * fVar14;
        fVar22 = unaff_s11 * fVar22 * fVar16 * in_stack_00000040._4_4_;
        fVar13 = (float)FUN_069c5208(0);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
        *(float *)(unaff_x28 + 0x20) =
             (fVar25 * fVar22 + fVar24 * fVar13 + fVar12 * fVar10) - fVar18 * fVar14;
        *(float *)(unaff_x28 + 0x24) =
             (fVar18 * fVar13 + fVar24 * fVar14 + fVar25 * fVar10) - fVar12 * fVar22;
        *(float *)(unaff_x28 + 0x28) =
             (fVar12 * fVar14 + fVar24 * fVar22 + fVar18 * fVar10) - fVar25 * fVar13;
        *(float *)(unaff_x28 + 0x2c) =
             ((fVar24 * fVar10 - fVar12 * fVar13) - fVar25 * fVar14) - fVar18 * fVar22;
      }
    }
    else {
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
      uVar15 = *(undefined4 *)(unaff_x28 + 0x24);
      uVar17 = *(undefined4 *)(unaff_x28 + 0x28);
      uVar20 = *(undefined4 *)(unaff_x28 + 0x2c);
      uVar11 = FUN_069c4f80(*(undefined4 *)(unaff_x28 + 0x20),0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
      *(undefined4 *)(unaff_x28 + 0x20) = uVar11;
      *(undefined4 *)(unaff_x28 + 0x24) = uVar15;
      *(undefined4 *)(unaff_x28 + 0x28) = uVar17;
      *(undefined4 *)(unaff_x28 + 0x2c) = uVar20;
    }
    while( true ) {
      lVar5 = *(long *)(unaff_x19 + 0x158);
      if (lVar5 == 0) goto LAB_05be9220;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05be921c;
      if (*(int *)(lVar5 + unaff_x26 * 4 + 0x20) == 0) {
        lVar5 = *(long *)(unaff_x19 + 0xe0);
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0xd8);
      }
      if (lVar5 == 0) goto LAB_05be9220;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05be921c;
      lVar5 = *(long *)(lVar5 + unaff_x26 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_05be9220;
      FUN_05b75e5c(lVar5,0);
      lVar5 = *(long *)(unaff_x19 + 0x148);
      if (lVar5 == 0) goto LAB_05be9220;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05be921c;
      if (unaff_x20 == 0) goto LAB_05be9220;
      uVar9 = (uint)unaff_x27;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
      lVar5 = lVar5 + unaff_x26 * 0x10;
      uVar15 = *(undefined4 *)(lVar5 + 0x24);
      uVar17 = *(undefined4 *)(lVar5 + 0x28);
      uVar20 = *(undefined4 *)(lVar5 + 0x2c);
      uVar11 = FUN_069c4f80(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
      *(undefined4 *)(unaff_x28 + 0x24) = uVar15;
      *(undefined4 *)(unaff_x28 + 0x28) = uVar17;
      uVar2 = *(uint *)(unaff_x20 + 0x18);
      *(undefined4 *)(unaff_x28 + 0x20) = uVar11;
      *(undefined4 *)(unaff_x28 + 0x2c) = uVar20;
      if (uVar2 <= uVar9) goto LAB_05be921c;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_05be9220;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05be921c;
      lVar5 = lVar5 + unaff_x26 * 0x10;
      unaff_w21 = unaff_w21 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar11;
      *(undefined4 *)(lVar5 + 0x24) = uVar15;
      *(undefined4 *)(lVar5 + 0x28) = uVar17;
      *(undefined4 *)(lVar5 + 0x2c) = uVar20;
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar5 = *unaff_x22;
      }
      plVar4 = *(long **)(lVar5 + 0xb8);
      lVar6 = *plVar4;
      if (lVar6 == 0) goto LAB_05be9220;
      if (*(int *)(lVar6 + 0x18) <= (int)unaff_w21) {
        return;
      }
      lVar7 = *(long *)(unaff_x19 + 0x158);
      if (lVar7 == 0) goto LAB_05be9220;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w21) goto LAB_05be921c;
      lVar8 = *(long *)(unaff_x19 + 0x140);
      if (lVar8 == 0) goto LAB_05be9220;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w21) goto LAB_05be921c;
      if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05be9220;
      if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) goto LAB_05be921c;
      unaff_x26 = (long)(int)unaff_w21;
      lVar8 = lVar8 + unaff_x26 * 0x10;
      unaff_s10 = *(float *)(lVar8 + 0x20);
      unaff_s9 = *(float *)(lVar8 + 0x24);
      iVar1 = *(int *)(lVar7 + unaff_x26 * 4 + 0x20);
      unaff_s8 = *(float *)(lVar8 + 0x28);
      unaff_s12 = *(float *)(lVar8 + 0x2c);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar5 = *unaff_x22;
        plVar4 = *(long **)(lVar5 + 0xb8);
        lVar6 = *plVar4;
        if (lVar6 == 0) goto LAB_05be9220;
      }
      if (*(uint *)(lVar6 + 0x18) <= unaff_w21) goto LAB_05be921c;
      uVar9 = *(uint *)(lVar6 + unaff_x26 * 4 + 0x20);
      unaff_x27 = (long)(int)uVar9;
      unaff_x28 = unaff_x20 + unaff_x27 * 0x10;
      if (iVar1 == 1) break;
      if (iVar1 == 2) {
        if (unaff_x20 == 0) goto LAB_05be9220;
        if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
        uVar15 = *(undefined4 *)(unaff_x28 + 0x24);
        uVar17 = *(undefined4 *)(unaff_x28 + 0x28);
        uVar20 = *(undefined4 *)(unaff_x28 + 0x2c);
        uVar11 = FUN_069c4f80(*(undefined4 *)(unaff_x28 + 0x20),0);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
        *(undefined4 *)(unaff_x28 + 0x20) = uVar11;
        *(undefined4 *)(unaff_x28 + 0x24) = uVar15;
        *(undefined4 *)(unaff_x28 + 0x28) = uVar17;
        *(undefined4 *)(unaff_x28 + 0x2c) = uVar20;
      }
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      plVar4 = *(long **)(*unaff_x22 + 0xb8);
    }
    lVar5 = plVar4[3];
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) {
LAB_05be921c:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar6 = *unaff_x24;
    bVar3 = *(byte *)(lVar5 + unaff_x26 + 0x20);
    unaff_w29 = (uint)bVar3;
    if (bVar3 != 0) {
      in_stack_00000070 = 0.0;
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar6 = *unaff_x24;
    }
    lVar5 = *(long *)(lVar6 + 0xb8);
    param_5 = 0;
    in_stack_00000050 = *(undefined8 *)(lVar5 + 0x24);
    unaff_s13 = *(float *)(lVar5 + 0x2c);
    param_4 = *(undefined8 *)(lVar5 + 0x3c);
    unaff_s11 = *(float *)(lVar5 + 0x44);
    param_2 = unaff_s13 * unaff_w23;
    param_1 = (ulong)(uint)((float)((ulong)in_stack_00000050 >> 0x20) *
                            (float)((ulong)in_stack_00000038 >> 0x20) * in_stack_00000070) << 0x20;
    in_stack_00000060 = param_4;
    param_3 = in_stack_00000070;
  }
LAB_05be9220:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


