/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPointCached
ENTRY_POINT: 05be8f00
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


void OVRPlugin_Qpl__MarkerPointCached(void)

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
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  float in_stack_00000070;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
code_r0x05be8f00:
  if ((uint)unaff_x27 < *(uint *)(unaff_x20 + 0x18)) {
    uVar14 = *(undefined4 *)(unaff_x28 + 0x24);
    uVar18 = *(undefined4 *)(unaff_x28 + 0x28);
    uVar19 = *(undefined4 *)(unaff_x28 + 0x2c);
    uVar11 = FUN_069c4f80(*(undefined4 *)(unaff_x28 + 0x20),0);
                    /* try { // try from 05be8f3c to 05ce8f43 has its CatchHandler @ 05be8f9c */
    if ((uint)unaff_x27 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x28 + 0x20) = uVar11;
      *(undefined4 *)(unaff_x28 + 0x24) = uVar14;
      *(undefined4 *)(unaff_x28 + 0x28) = uVar18;
      *(undefined4 *)(unaff_x28 + 0x2c) = uVar19;
LAB_05be9104:
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
      uVar14 = *(undefined4 *)(lVar5 + 0x24);
      uVar18 = *(undefined4 *)(lVar5 + 0x28);
      uVar19 = *(undefined4 *)(lVar5 + 0x2c);
      uVar11 = FUN_069c4f80(*(undefined4 *)(lVar5 + 0x20),0);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
      *(undefined4 *)(unaff_x28 + 0x24) = uVar14;
      *(undefined4 *)(unaff_x28 + 0x28) = uVar18;
      uVar2 = *(uint *)(unaff_x20 + 0x18);
      *(undefined4 *)(unaff_x28 + 0x20) = uVar11;
      *(undefined4 *)(unaff_x28 + 0x2c) = uVar19;
      if (uVar2 <= uVar9) goto LAB_05be921c;
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_05be9220;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05be921c;
      lVar5 = lVar5 + unaff_x26 * 0x10;
      unaff_w21 = unaff_w21 + 1;
      *(undefined4 *)(lVar5 + 0x20) = uVar11;
      *(undefined4 *)(lVar5 + 0x24) = uVar14;
      *(undefined4 *)(lVar5 + 0x28) = uVar18;
      *(undefined4 *)(lVar5 + 0x2c) = uVar19;
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
      fVar26 = *(float *)(lVar8 + 0x20);
      fVar24 = *(float *)(lVar8 + 0x24);
      iVar1 = *(int *)(lVar7 + unaff_x26 * 4 + 0x20);
      fVar22 = *(float *)(lVar8 + 0x28);
      fVar29 = *(float *)(lVar8 + 0x2c);
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
      if (iVar1 == 1) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          plVar4 = *(long **)(*unaff_x22 + 0xb8);
        }
        lVar5 = plVar4[3];
        if (lVar5 != 0) {
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
          uVar15 = *(undefined8 *)(lVar5 + 0x24);
          fVar31 = *(float *)(lVar5 + 0x2c);
          uVar20 = *(undefined8 *)(lVar5 + 0x3c);
          fVar28 = *(float *)(lVar5 + 0x44);
          fVar16 = (float)((ulong)uVar15 >> 0x20);
          fVar13 = (float)((ulong)in_stack_00000048 >> 0x20);
          fVar12 = fVar16 * (float)((ulong)in_stack_00000038 >> 0x20) * in_stack_00000070 * fVar13;
          fVar17 = in_stack_00000070 * fVar31 * unaff_w23 * in_stack_00000040._4_4_;
          uVar21 = uVar20;
          fVar10 = (float)FUN_069c5208(0);
          fVar30 = (float)uVar21;
          fVar27 = (fVar24 * fVar17 + fVar29 * fVar10 + fVar26 * fVar30) - fVar22 * fVar12;
          fVar25 = (fVar22 * fVar10 + fVar29 * fVar12 + fVar24 * fVar30) - fVar26 * fVar17;
          fVar23 = (fVar26 * fVar12 + fVar29 * fVar17 + fVar22 * fVar30) - fVar24 * fVar10;
          fVar22 = ((fVar29 * fVar30 - fVar26 * fVar10) - fVar24 * fVar12) - fVar22 * fVar17;
          fStack0000000000000080 = fVar27;
          fStack0000000000000084 = fVar25;
          fStack0000000000000088 = fVar23;
          fStack000000000000008c = fVar22;
          if (unaff_x20 == 0) goto LAB_05be9220;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
          fVar24 = (float)FUN_05be9384(unaff_x25 + unaff_x27 * 0x10,&stack0x00000080);
          if (in_stack_00000070 <= fVar24) {
            in_stack_00000070 = fVar24;
          }
          if (0.0 <= fVar24) {
            if (cVar3 != '\0') {
              if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
              fVar10 = *(float *)(unaff_x28 + 0x20);
              fVar30 = *(float *)(unaff_x28 + 0x24);
              fVar12 = *(float *)(unaff_x28 + 0x28);
              fVar17 = *(float *)(unaff_x28 + 0x2c);
              fVar26 = fVar30;
              fVar29 = fVar12;
              uVar11 = FUN_069c57a8(0);
              uVar14 = FUN_069c57a8(fVar27,fVar25,fVar23,fVar22,uVar15,fVar16,fVar31,0);
              fVar16 = (float)((ulong)uVar20 >> 0x20);
              FUN_069c57a8(fVar10,fVar30,fVar12,fVar17,uVar20,fVar16,fVar28,0);
              fVar26 = (float)FUN_05a73c9c(uVar11,fVar26,fVar29,uVar14,fVar25,fVar23,0);
              fVar24 = fVar24 * *(float *)(unaff_x19 + 0xb0);
              fVar22 = 1.0;
              if (fVar24 <= 1.0) {
                fVar22 = fVar24;
              }
              fVar22 = 1.0 - fVar22;
              fVar29 = 1.0;
              if (0.0 <= fVar24) {
                fVar29 = fVar22;
              }
              fVar13 = fVar16 * fVar26 * fVar29 * fVar13;
              fVar26 = fVar28 * fVar26 * fVar29 * in_stack_00000040._4_4_;
              fVar24 = (float)FUN_069c5208(0);
              if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
              *(float *)(unaff_x28 + 0x20) =
                   (fVar30 * fVar26 + fVar17 * fVar24 + fVar10 * fVar22) - fVar12 * fVar13;
              *(float *)(unaff_x28 + 0x24) =
                   (fVar12 * fVar24 + fVar17 * fVar13 + fVar30 * fVar22) - fVar10 * fVar26;
              *(float *)(unaff_x28 + 0x28) =
                   (fVar10 * fVar13 + fVar17 * fVar26 + fVar12 * fVar22) - fVar30 * fVar24;
              *(float *)(unaff_x28 + 0x2c) =
                   ((fVar17 * fVar22 - fVar10 * fVar24) - fVar30 * fVar13) - fVar12 * fVar26;
            }
            goto LAB_05be9104;
          }
          goto code_r0x05be8f00;
        }
      }
      else {
        if (iVar1 != 2) goto LAB_05be9104;
        if (unaff_x20 != 0) {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
          uVar14 = *(undefined4 *)(unaff_x28 + 0x24);
          uVar18 = *(undefined4 *)(unaff_x28 + 0x28);
          uVar19 = *(undefined4 *)(unaff_x28 + 0x2c);
          uVar11 = FUN_069c4f80(*(undefined4 *)(unaff_x28 + 0x20),0);
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05be921c;
          *(undefined4 *)(unaff_x28 + 0x20) = uVar11;
          *(undefined4 *)(unaff_x28 + 0x24) = uVar14;
          *(undefined4 *)(unaff_x28 + 0x28) = uVar18;
          *(undefined4 *)(unaff_x28 + 0x2c) = uVar19;
          goto LAB_05be9104;
        }
      }
LAB_05be9220:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
LAB_05be921c:
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


