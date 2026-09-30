/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerPointCached
ENTRY_POINT: 05be8ff0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerPointCached
               (ulong param_1,ulong param_2,undefined1 param_3 [16],ulong param_4,undefined8 param_5
               ,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  char cVar3;
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
  float *unaff_x29;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined4 unaff_s8;
  float unaff_s9;
  float fVar26;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar27;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  float in_stack_00000050;
  undefined8 in_stack_00000060;
  float in_stack_00000070;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  while( true ) {
    FUN_069c57a8(param_1,param_2,unaff_s13,param_4,param_5,param_6,unaff_s11,0);
    fVar11 = (float)FUN_05a73c9c(in_stack_00000030,fStack000000000000002c,fStack0000000000000028,
                                 unaff_s8,unaff_s9,unaff_s10,0);
    fVar15 = unaff_s14 * *(float *)(unaff_x19 + 0xb0);
    fVar23 = 1.0;
    if (fVar15 <= 1.0) {
      fVar23 = fVar15;
    }
    fVar23 = 1.0 - fVar23;
    fVar20 = 1.0;
    if (0.0 <= fVar15) {
      fVar20 = fVar23;
    }
    fVar14 = (float)((ulong)in_stack_00000048 >> 0x20);
    fVar15 = (float)((ulong)in_stack_00000060 >> 0x20) * fVar11 * fVar20 * fVar14;
    fVar20 = unaff_s11 * fVar11 * fVar20 * in_stack_00000040._4_4_;
    fVar11 = (float)FUN_069c5208(0);
    if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x27) break;
    *unaff_x29 = (unaff_s15 * fVar20 + in_stack_00000050 * fVar11 + unaff_s12 * fVar23) -
                 unaff_s13 * fVar15;
    unaff_x29[1] = (unaff_s13 * fVar11 + in_stack_00000050 * fVar15 + unaff_s15 * fVar23) -
                   unaff_s12 * fVar20;
    unaff_x29[2] = (unaff_s12 * fVar15 + in_stack_00000050 * fVar20 + unaff_s13 * fVar23) -
                   unaff_s15 * fVar11;
    unaff_x29[3] = ((in_stack_00000050 * fVar23 - unaff_s12 * fVar11) - unaff_s15 * fVar15) -
                   unaff_s13 * fVar20;
LAB_05be9104:
    do {
      lVar5 = *(long *)(unaff_x19 + 0x158);
      if (lVar5 == 0) {
LAB_05be9220:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
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
      uVar16 = *(undefined4 *)(lVar5 + 0x24);
      uVar21 = *(undefined4 *)(lVar5 + 0x28);
      uVar24 = *(undefined4 *)(lVar5 + 0x2c);
      uVar12 = FUN_069c4f80(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
      *(undefined4 *)(unaff_x28 + 0x24) = uVar16;
      *(undefined4 *)(unaff_x28 + 0x28) = uVar21;
      uVar2 = *(uint *)(unaff_x20 + 0x18);
      *(undefined4 *)(unaff_x28 + 0x20) = uVar12;
      *(undefined4 *)(unaff_x28 + 0x2c) = uVar24;
      if (uVar2 <= uVar9) goto LAB_05be921c;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_05be9220;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05be921c;
      lVar5 = lVar5 + unaff_x26 * 0x10;
      unaff_w21 = unaff_w21 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar12;
      *(undefined4 *)(lVar5 + 0x24) = uVar16;
      *(undefined4 *)(lVar5 + 0x28) = uVar21;
      *(undefined4 *)(lVar5 + 0x2c) = uVar24;
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
      fVar15 = *(float *)(lVar8 + 0x20);
      fVar11 = *(float *)(lVar8 + 0x24);
      iVar1 = *(int *)(lVar7 + unaff_x26 * 4 + 0x20);
      fVar23 = *(float *)(lVar8 + 0x28);
      fVar20 = *(float *)(lVar8 + 0x2c);
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
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          if (unaff_x20 == 0) goto LAB_05be9220;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
          uVar16 = *(undefined4 *)(unaff_x28 + 0x24);
          uVar21 = *(undefined4 *)(unaff_x28 + 0x28);
          uVar24 = *(undefined4 *)(unaff_x28 + 0x2c);
          uVar12 = FUN_069c4f80(*(undefined4 *)(unaff_x28 + 0x20),0);
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
          *(undefined4 *)(unaff_x28 + 0x20) = uVar12;
          *(undefined4 *)(unaff_x28 + 0x24) = uVar16;
          *(undefined4 *)(unaff_x28 + 0x28) = uVar21;
          *(undefined4 *)(unaff_x28 + 0x2c) = uVar24;
        }
        goto LAB_05be9104;
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        plVar4 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar5 = plVar4[3];
      if (lVar5 == 0) goto LAB_05be9220;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05be921c;
      lVar6 = *unaff_x24;
      cVar3 = *(char *)(lVar5 + unaff_x26 + 0x20);
      if (cVar3 != '\0') {
        in_stack_00000070 = 0.0;
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar6 = *unaff_x24;
      }
      lVar5 = *(long *)(lVar6 + 0xb8);
      uVar17 = *(undefined8 *)(lVar5 + 0x24);
      fVar27 = *(float *)(lVar5 + 0x2c);
      param_5 = *(undefined8 *)(lVar5 + 0x3c);
      unaff_s11 = *(float *)(lVar5 + 0x44);
      fVar18 = (float)((ulong)uVar17 >> 0x20);
      fVar13 = fVar18 * (float)((ulong)in_stack_00000038 >> 0x20) * in_stack_00000070 * fVar14;
      fVar19 = in_stack_00000070 * fVar27 * unaff_w23 * in_stack_00000040._4_4_;
      uVar25 = param_5;
      fVar10 = (float)FUN_069c5208(0);
      fVar22 = (float)uVar25;
      fVar26 = (fVar11 * fVar19 + fVar20 * fVar10 + fVar15 * fVar22) - fVar23 * fVar13;
      unaff_s9 = (fVar23 * fVar10 + fVar20 * fVar13 + fVar11 * fVar22) - fVar15 * fVar19;
      unaff_s10 = (fVar15 * fVar13 + fVar20 * fVar19 + fVar23 * fVar22) - fVar11 * fVar10;
      fVar23 = ((fVar20 * fVar22 - fVar15 * fVar10) - fVar11 * fVar13) - fVar23 * fVar19;
      fStack0000000000000080 = fVar26;
      fStack0000000000000084 = unaff_s9;
      fStack0000000000000088 = unaff_s10;
      fStack000000000000008c = fVar23;
      if (unaff_x20 == 0) goto LAB_05be9220;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
      unaff_s14 = (float)FUN_05be9384(unaff_x25 + unaff_x27 * 0x10,&stack0x00000080);
      if (in_stack_00000070 <= unaff_s14) {
        in_stack_00000070 = unaff_s14;
      }
      if (unaff_s14 < 0.0) {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
        uVar16 = *(undefined4 *)(unaff_x28 + 0x24);
        uVar21 = *(undefined4 *)(unaff_x28 + 0x28);
        uVar24 = *(undefined4 *)(unaff_x28 + 0x2c);
        uVar12 = FUN_069c4f80(*(undefined4 *)(unaff_x28 + 0x20),0);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
        *(undefined4 *)(unaff_x28 + 0x20) = uVar12;
        *(undefined4 *)(unaff_x28 + 0x24) = uVar16;
        *(undefined4 *)(unaff_x28 + 0x28) = uVar21;
        *(undefined4 *)(unaff_x28 + 0x2c) = uVar24;
        goto LAB_05be9104;
      }
    } while (cVar3 == '\0');
    if (*(uint *)(unaff_x20 + 0x18) <= uVar9) break;
    unaff_x29 = (float *)(unaff_x28 + 0x20);
    unaff_s12 = *unaff_x29;
    unaff_s15 = *(float *)(unaff_x28 + 0x24);
    unaff_s13 = *(float *)(unaff_x28 + 0x28);
    in_stack_00000050 = *(float *)(unaff_x28 + 0x2c);
    fStack000000000000002c = unaff_s15;
    fStack0000000000000028 = unaff_s13;
    in_stack_00000030 = FUN_069c57a8(0);
    unaff_s8 = FUN_069c57a8(fVar26,unaff_s9,unaff_s10,fVar23,uVar17,fVar18,fVar27,0);
    param_4 = (ulong)(uint)in_stack_00000050;
    param_6 = (undefined4)((ulong)param_5 >> 0x20);
    param_1 = (ulong)(uint)unaff_s12;
    param_2 = (ulong)(uint)unaff_s15;
    in_stack_00000060 = param_5;
  }
LAB_05be921c:
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


