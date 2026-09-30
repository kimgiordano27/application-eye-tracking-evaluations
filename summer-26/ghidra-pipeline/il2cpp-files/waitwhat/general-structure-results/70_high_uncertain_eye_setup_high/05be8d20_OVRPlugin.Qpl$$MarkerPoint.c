/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPoint
ENTRY_POINT: 05be8d20
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


void OVRPlugin_Qpl__MarkerPoint(long param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  float unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  int unaff_w29;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
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
  float fVar27;
  float unaff_s12;
  float fVar28;
  float fVar29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  while( true ) {
    plVar4 = *(long **)(param_1 + 0xb8);
    lVar6 = *plVar4;
    if (lVar6 == 0) break;
    do {
      if (*(uint *)(lVar6 + 0x18) <= unaff_w21) goto LAB_05be921c;
      uVar3 = *(uint *)(lVar6 + unaff_x26 * 4 + 0x20);
      lVar6 = unaff_x20 + (long)(int)uVar3 * 0x10;
      if (unaff_w29 == 1) {
        if (*(int *)(param_1 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          plVar4 = *(long **)(*unaff_x22 + 0xb8);
        }
        lVar5 = plVar4[3];
        if (lVar5 == 0) goto LAB_05be9220;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05be921c;
        lVar7 = *unaff_x24;
        cVar2 = *(char *)(lVar5 + unaff_x26 + 0x20);
        if (cVar2 != '\0') {
          unaff_s11 = 0.0;
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar7 = *unaff_x24;
        }
        lVar5 = *(long *)(lVar7 + 0xb8);
        uVar14 = *(undefined8 *)(lVar5 + 0x24);
        fVar29 = *(float *)(lVar5 + 0x2c);
        uVar21 = *(undefined8 *)(lVar5 + 0x3c);
        fVar26 = *(float *)(lVar5 + 0x44);
        fVar15 = (float)((ulong)uVar14 >> 0x20);
        fVar12 = (float)((ulong)in_stack_00000048 >> 0x20);
        fVar11 = fVar15 * (float)((ulong)in_stack_00000038 >> 0x20) * unaff_s11 * fVar12;
        fVar17 = unaff_s11 * fVar29 * unaff_w23 * in_stack_00000040._4_4_;
        uVar22 = uVar21;
        fVar9 = (float)FUN_069c5208(0);
        fVar20 = (float)uVar22;
        fVar25 = (unaff_s9 * fVar17 + unaff_s12 * fVar9 + unaff_s10 * fVar20) - unaff_s8 * fVar11;
        fVar24 = (unaff_s8 * fVar9 + unaff_s12 * fVar11 + unaff_s9 * fVar20) - unaff_s10 * fVar17;
        fVar23 = (unaff_s10 * fVar11 + unaff_s12 * fVar17 + unaff_s8 * fVar20) - unaff_s9 * fVar9;
        fVar9 = ((unaff_s12 * fVar20 - unaff_s10 * fVar9) - unaff_s9 * fVar11) - unaff_s8 * fVar17;
        fStack0000000000000080 = fVar25;
        fStack0000000000000084 = fVar24;
        fStack0000000000000088 = fVar23;
        fStack000000000000008c = fVar9;
        if (unaff_x20 == 0) goto LAB_05be9220;
        if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05be921c;
        fVar11 = (float)FUN_05be9384(unaff_x25 + (long)(int)uVar3 * 0x10,&stack0x00000080);
        if (unaff_s11 <= fVar11) {
          unaff_s11 = fVar11;
        }
        if (0.0 <= fVar11) {
          if (cVar2 != '\0') {
            if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05be921c;
            fVar10 = *(float *)(lVar6 + 0x20);
            fVar28 = *(float *)(lVar6 + 0x24);
            fVar18 = *(float *)(lVar6 + 0x28);
            fVar27 = *(float *)(lVar6 + 0x2c);
            fVar17 = fVar28;
            fVar20 = fVar18;
            uVar8 = FUN_069c57a8(0);
            uVar13 = FUN_069c57a8(fVar25,fVar24,fVar23,fVar9,uVar14,fVar15,fVar29,0);
            fVar15 = (float)((ulong)uVar21 >> 0x20);
            FUN_069c57a8(fVar10,fVar28,fVar18,fVar27,uVar21,fVar15,fVar26,0);
            fVar24 = (float)FUN_05a73c9c(uVar8,fVar17,fVar20,uVar13,fVar24,fVar23,0);
            fVar11 = fVar11 * *(float *)(unaff_x19 + 0xb0);
            fVar9 = 1.0;
            if (fVar11 <= 1.0) {
              fVar9 = fVar11;
            }
            fVar9 = 1.0 - fVar9;
            fVar17 = 1.0;
            if (0.0 <= fVar11) {
              fVar17 = fVar9;
            }
            fVar12 = fVar15 * fVar24 * fVar17 * fVar12;
            fVar24 = fVar26 * fVar24 * fVar17 * in_stack_00000040._4_4_;
            fVar11 = (float)FUN_069c5208(0);
            if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05be921c;
            *(float *)(lVar6 + 0x20) =
                 (fVar28 * fVar24 + fVar27 * fVar11 + fVar10 * fVar9) - fVar18 * fVar12;
            *(float *)(lVar6 + 0x24) =
                 (fVar18 * fVar11 + fVar27 * fVar12 + fVar28 * fVar9) - fVar10 * fVar24;
            *(float *)(lVar6 + 0x28) =
                 (fVar10 * fVar12 + fVar27 * fVar24 + fVar18 * fVar9) - fVar28 * fVar11;
            *(float *)(lVar6 + 0x2c) =
                 ((fVar27 * fVar9 - fVar10 * fVar11) - fVar28 * fVar12) - fVar18 * fVar24;
          }
        }
        else {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05be921c;
          uVar13 = *(undefined4 *)(lVar6 + 0x24);
          uVar16 = *(undefined4 *)(lVar6 + 0x28);
          uVar19 = *(undefined4 *)(lVar6 + 0x2c);
          uVar8 = FUN_069c4f80(*(undefined4 *)(lVar6 + 0x20),0);
          if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05be921c;
          *(undefined4 *)(lVar6 + 0x20) = uVar8;
          *(undefined4 *)(lVar6 + 0x24) = uVar13;
          *(undefined4 *)(lVar6 + 0x28) = uVar16;
          *(undefined4 *)(lVar6 + 0x2c) = uVar19;
        }
      }
      else if (unaff_w29 == 2) {
        if (unaff_x20 == 0) goto LAB_05be9220;
        if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05be921c;
        uVar13 = *(undefined4 *)(lVar6 + 0x24);
        uVar16 = *(undefined4 *)(lVar6 + 0x28);
        uVar19 = *(undefined4 *)(lVar6 + 0x2c);
        uVar8 = FUN_069c4f80(*(undefined4 *)(lVar6 + 0x20),0);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05be921c;
        *(undefined4 *)(lVar6 + 0x20) = uVar8;
        *(undefined4 *)(lVar6 + 0x24) = uVar13;
        *(undefined4 *)(lVar6 + 0x28) = uVar16;
        *(undefined4 *)(lVar6 + 0x2c) = uVar19;
      }
      lVar5 = *(long *)(unaff_x19 + 0x158);
      if (lVar5 == 0) goto LAB_05be9220;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) {
LAB_05be921c:
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
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
      if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05be921c;
      lVar5 = lVar5 + unaff_x26 * 0x10;
      uVar13 = *(undefined4 *)(lVar5 + 0x24);
      uVar16 = *(undefined4 *)(lVar5 + 0x28);
      uVar19 = *(undefined4 *)(lVar5 + 0x2c);
      uVar8 = FUN_069c4f80(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05be921c;
      *(undefined4 *)(lVar6 + 0x24) = uVar13;
      *(undefined4 *)(lVar6 + 0x28) = uVar16;
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      *(undefined4 *)(lVar6 + 0x20) = uVar8;
      *(undefined4 *)(lVar6 + 0x2c) = uVar19;
      if (uVar1 <= uVar3) goto LAB_05be921c;
      lVar6 = *(long *)(unaff_x19 + 0x150);
      if (lVar6 == 0) goto LAB_05be9220;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w21) goto LAB_05be921c;
      lVar6 = lVar6 + unaff_x26 * 0x10;
      unaff_w21 = unaff_w21 + 1;
      *(undefined4 *)(lVar6 + 0x20) = uVar8;
      *(undefined4 *)(lVar6 + 0x24) = uVar13;
      *(undefined4 *)(lVar6 + 0x28) = uVar16;
      *(undefined4 *)(lVar6 + 0x2c) = uVar19;
      param_1 = *unaff_x22;
      if (*(int *)(param_1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        param_1 = *unaff_x22;
      }
      plVar4 = *(long **)(param_1 + 0xb8);
      lVar6 = *plVar4;
      if (lVar6 == 0) goto LAB_05be9220;
      if (*(int *)(lVar6 + 0x18) <= (int)unaff_w21) {
        return;
      }
      lVar5 = *(long *)(unaff_x19 + 0x158);
      if (lVar5 == 0) goto LAB_05be9220;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05be921c;
      lVar7 = *(long *)(unaff_x19 + 0x140);
      if (lVar7 == 0) goto LAB_05be9220;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w21) goto LAB_05be921c;
      if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05be9220;
      if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) goto LAB_05be921c;
      unaff_x26 = (long)(int)unaff_w21;
      lVar7 = lVar7 + unaff_x26 * 0x10;
      unaff_s10 = *(float *)(lVar7 + 0x20);
      unaff_s9 = *(float *)(lVar7 + 0x24);
      unaff_w29 = *(int *)(lVar5 + unaff_x26 * 4 + 0x20);
      unaff_s8 = *(float *)(lVar7 + 0x28);
      unaff_s12 = *(float *)(lVar7 + 0x2c);
    } while (*(int *)(param_1 + 0xe4) != 0);
    thunk_FUN_031e5338();
    param_1 = *unaff_x22;
  }
LAB_05be9220:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


