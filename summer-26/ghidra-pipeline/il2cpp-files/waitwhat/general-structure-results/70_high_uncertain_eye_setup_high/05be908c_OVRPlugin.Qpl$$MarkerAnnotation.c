/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerAnnotation
ENTRY_POINT: 05be908c
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


void OVRPlugin_Qpl__MarkerAnnotation
               (float param_1,ulong param_2,ulong param_3,ulong param_4,undefined1 param_5 [16],
               float param_6)

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
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float unaff_s12;
  float fVar31;
  float unaff_s13;
  float unaff_s15;
  float in_s18;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  float in_stack_00000070;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  do {
    fVar27 = (float)param_4;
    fVar23 = (float)param_2;
    fVar25 = (float)param_3;
    *unaff_x29 = (unaff_s15 * fVar25 + in_s18 * param_1 + param_6) - unaff_s13 * fVar23;
    unaff_x29[1] = (unaff_s13 * param_1 + in_s18 * fVar23 + unaff_s15 * fVar27) - unaff_s12 * fVar25
    ;
    unaff_x29[2] = (unaff_s12 * fVar23 + in_s18 * fVar25 + unaff_s13 * fVar27) - unaff_s15 * param_1
    ;
    unaff_x29[3] = ((in_s18 * fVar27 - unaff_s12 * param_1) - unaff_s15 * fVar23) -
                   unaff_s13 * fVar25;
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
      uVar13 = *(undefined4 *)(lVar5 + 0x24);
      uVar17 = *(undefined4 *)(lVar5 + 0x28);
      uVar20 = *(undefined4 *)(lVar5 + 0x2c);
      uVar11 = FUN_069c4f80(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
      *(undefined4 *)(unaff_x28 + 0x24) = uVar13;
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
      *(undefined4 *)(lVar5 + 0x24) = uVar13;
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
      fVar27 = *(float *)(lVar8 + 0x20);
      fVar25 = *(float *)(lVar8 + 0x24);
      iVar1 = *(int *)(lVar7 + unaff_x26 * 4 + 0x20);
      fVar23 = *(float *)(lVar8 + 0x28);
      fVar30 = *(float *)(lVar8 + 0x2c);
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
          uVar13 = *(undefined4 *)(unaff_x28 + 0x24);
          uVar17 = *(undefined4 *)(unaff_x28 + 0x28);
          uVar20 = *(undefined4 *)(unaff_x28 + 0x2c);
          uVar11 = FUN_069c4f80(*(undefined4 *)(unaff_x28 + 0x20),0);
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
          *(undefined4 *)(unaff_x28 + 0x20) = uVar11;
          *(undefined4 *)(unaff_x28 + 0x24) = uVar13;
          *(undefined4 *)(unaff_x28 + 0x28) = uVar17;
          *(undefined4 *)(unaff_x28 + 0x2c) = uVar20;
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
      uVar14 = *(undefined8 *)(lVar5 + 0x24);
      fVar31 = *(float *)(lVar5 + 0x2c);
      uVar21 = *(undefined8 *)(lVar5 + 0x3c);
      fVar29 = *(float *)(lVar5 + 0x44);
      fVar15 = (float)((ulong)uVar14 >> 0x20);
      fVar18 = (float)((ulong)in_stack_00000048 >> 0x20);
      fVar12 = fVar15 * (float)((ulong)in_stack_00000038 >> 0x20) * in_stack_00000070 * fVar18;
      fVar16 = in_stack_00000070 * fVar31 * unaff_w23 * in_stack_00000040._4_4_;
      uVar22 = uVar21;
      fVar10 = (float)FUN_069c5208(0);
      fVar19 = (float)uVar22;
      fVar28 = (fVar25 * fVar16 + fVar30 * fVar10 + fVar27 * fVar19) - fVar23 * fVar12;
      fVar26 = (fVar23 * fVar10 + fVar30 * fVar12 + fVar25 * fVar19) - fVar27 * fVar16;
      fVar24 = (fVar27 * fVar12 + fVar30 * fVar16 + fVar23 * fVar19) - fVar25 * fVar10;
      fVar23 = ((fVar30 * fVar19 - fVar27 * fVar10) - fVar25 * fVar12) - fVar23 * fVar16;
      fStack0000000000000080 = fVar28;
      fStack0000000000000084 = fVar26;
      fStack0000000000000088 = fVar24;
      fStack000000000000008c = fVar23;
      if (unaff_x20 == 0) goto LAB_05be9220;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
      fVar25 = (float)FUN_05be9384(unaff_x25 + unaff_x27 * 0x10,&stack0x00000080);
      if (in_stack_00000070 <= fVar25) {
        in_stack_00000070 = fVar25;
      }
      if (fVar25 < 0.0) {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
        uVar13 = *(undefined4 *)(unaff_x28 + 0x24);
        uVar17 = *(undefined4 *)(unaff_x28 + 0x28);
        uVar20 = *(undefined4 *)(unaff_x28 + 0x2c);
        uVar11 = FUN_069c4f80(*(undefined4 *)(unaff_x28 + 0x20),0);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
        *(undefined4 *)(unaff_x28 + 0x20) = uVar11;
        *(undefined4 *)(unaff_x28 + 0x24) = uVar13;
        *(undefined4 *)(unaff_x28 + 0x28) = uVar17;
        *(undefined4 *)(unaff_x28 + 0x2c) = uVar20;
        goto LAB_05be9104;
      }
    } while (cVar3 == '\0');
    if (*(uint *)(unaff_x20 + 0x18) <= uVar9) {
LAB_05be921c:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    unaff_x29 = (float *)(unaff_x28 + 0x20);
    unaff_s12 = *unaff_x29;
    unaff_s15 = *(float *)(unaff_x28 + 0x24);
    unaff_s13 = *(float *)(unaff_x28 + 0x28);
    in_s18 = *(float *)(unaff_x28 + 0x2c);
    fVar27 = unaff_s15;
    fVar30 = unaff_s13;
    uVar11 = FUN_069c57a8(0);
    uVar13 = FUN_069c57a8(fVar28,fVar26,fVar24,fVar23,uVar14,fVar15,fVar31,0);
    fVar10 = (float)((ulong)uVar21 >> 0x20);
    FUN_069c57a8(unaff_s12,unaff_s15,unaff_s13,in_s18,uVar21,fVar10,fVar29,0);
    fVar27 = (float)FUN_05a73c9c(uVar11,fVar27,fVar30,uVar13,fVar26,fVar24,0);
    fVar25 = fVar25 * *(float *)(unaff_x19 + 0xb0);
    fVar23 = 1.0;
    if (fVar25 <= 1.0) {
      fVar23 = fVar25;
    }
    param_4 = (ulong)(uint)(1.0 - fVar23);
    fVar30 = 1.0;
    if (0.0 <= fVar25) {
      fVar30 = 1.0 - fVar23;
    }
    param_3 = (ulong)(uint)(fVar29 * fVar27 * fVar30 * in_stack_00000040._4_4_);
    param_2 = (ulong)(uint)(fVar10 * fVar27 * fVar30 * fVar18);
    param_1 = (float)FUN_069c5208(0);
    if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
    param_6 = unaff_s12 * (float)param_4;
  } while( true );
}


