/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetLines
ENTRY_POINT: 06378848
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetLines(void)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float *pfVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int unaff_w23;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float in_stack_000000b0;
  undefined8 in_stack_000000d0;
  
  if (0 < in_stack_000000d0._4_2_) {
    pfVar4 = (float *)(unaff_x20 + 0x34);
    lVar6 = 0;
    fVar13 = 0.0;
    fVar12 = 0.0;
    fVar10 = 0.0;
    fVar9 = 0.0;
    fVar8 = 0.0;
    fVar21 = 0.0;
    fVar23 = 0.0;
    fVar25 = 0.0;
    fVar14 = 0.0;
    do {
      fStack0000000000000078 = fVar14;
      fStack0000000000000068 = *pfVar4;
      lVar5 = (long)*(int *)(*(long *)(unaff_x19 + 0x40) + (long)((int)pfVar4[-4] + unaff_w22) * 4);
      fStack0000000000000038 = fStack00000000000000a0;
      fStack000000000000003c = fStack0000000000000094;
      pfVar1 = (float *)(*(long *)(unaff_x19 + 0x20) + (long)((int)pfVar4[-4] + unaff_w23) * 0x40);
      fStack000000000000004c = fStack00000000000000a4;
      fStack0000000000000050 = fStack0000000000000098;
      fStack0000000000000020 = pfVar1[4];
      fVar14 = *pfVar1;
      fStack000000000000000c = pfVar1[1];
      fStack0000000000000024 = fStack00000000000000a8;
      fStack000000000000001c = pfVar1[5];
      fStack0000000000000018 = pfVar1[6];
      fVar19 = pfVar1[2];
      pfVar2 = (float *)(*(long *)(unaff_x19 + 0x60) + lVar5 * 0x10);
      fStack0000000000000030 = pfVar1[8];
      fStack000000000000002c = pfVar1[9];
      fVar15 = *pfVar2;
      fVar16 = pfVar2[1];
      fVar17 = pfVar2[2];
      fVar18 = pfVar2[3];
      fStack0000000000000034 = fStack00000000000000ac;
      fStack0000000000000028 = pfVar1[10];
      fStack0000000000000010 = pfVar1[0xc];
      fStack0000000000000058 = pfVar1[0xd];
      fStack0000000000000054 = pfVar1[0xe];
      pfVar1 = (float *)(*(long *)(unaff_x19 + 0x50) + lVar5 * 0xc);
      fStack000000000000005c = *pfVar1;
      pfVar2 = (float *)(*(long *)(unaff_x19 + 0x70) + lVar5 * 0xc);
      fStack0000000000000014 = in_stack_000000b0;
      fStack0000000000000060 = pfVar1[1];
      fStack0000000000000064 = pfVar1[2];
      fStack0000000000000048 = *pfVar2;
      fStack0000000000000044 = pfVar2[1];
      fStack0000000000000040 = pfVar2[2];
      fStack000000000000006c = fVar25;
      fStack0000000000000070 = fVar23;
      fStack0000000000000074 = fVar21;
      fStack000000000000007c = fVar8;
      fStack0000000000000080 = fVar9;
      fStack0000000000000084 = fVar10;
      fStack0000000000000088 = fVar12;
      fStack000000000000008c = fVar13;
      if (DAT_086d90cb == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d90cb = '\x01';
      }
      if ((*(int *)(DAT_083ce8b0 + 0xe0) == 0) && (FUN_033b9870(), DAT_086d90cb == '\0')) {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d90cb = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar9 = fStack0000000000000010 * 0.0 +
              fVar14 * fStack000000000000009c + fStack0000000000000020 * fStack0000000000000038 +
              fStack0000000000000030 * fStack000000000000004c;
      fVar11 = (fStack0000000000000010 +
               fVar14 * fStack0000000000000090 + fStack0000000000000020 * fStack000000000000003c +
               fStack0000000000000030 * fStack0000000000000050) * fStack0000000000000048;
      fVar8 = fStack000000000000002c * fStack000000000000004c;
      fVar12 = fStack0000000000000028 * fStack000000000000004c;
      fStack000000000000004c =
           (fStack0000000000000058 +
           fStack000000000000000c * fStack0000000000000090 +
           fStack000000000000001c * fStack000000000000003c +
           fStack000000000000002c * fStack0000000000000050) * fStack0000000000000044;
      fVar10 = fStack0000000000000058 * 0.0 +
               fStack000000000000000c * fStack000000000000009c +
               fStack000000000000001c * fStack0000000000000038 + fVar8;
      fVar12 = fStack0000000000000054 * 0.0 +
               fVar19 * fStack000000000000009c + fStack0000000000000018 * fStack0000000000000038 +
               fVar12;
      fStack0000000000000048 =
           fStack0000000000000054 +
           fVar19 * fStack0000000000000090 + fStack0000000000000018 * fStack000000000000003c +
           fStack0000000000000028 * fStack0000000000000050;
      fVar8 = fStack0000000000000058 * 0.0 +
              fStack000000000000000c * fStack0000000000000024 +
              fStack000000000000001c * fStack0000000000000034 +
              fStack000000000000002c * fStack0000000000000014;
      fStack0000000000000058 =
           fStack0000000000000054 * 0.0 +
           fVar19 * fStack0000000000000024 + fStack0000000000000018 * fStack0000000000000034 +
           fStack0000000000000028 * fStack0000000000000014;
      fStack0000000000000054 =
           fStack0000000000000010 * 0.0 +
           fVar14 * fStack0000000000000024 + fStack0000000000000020 * fStack0000000000000034 +
           fStack0000000000000030 * fStack0000000000000014;
      fStack0000000000000048 = fStack0000000000000048 * fStack0000000000000040;
      fVar21 = fVar12 * fVar16 - fVar10 * fVar17;
      fVar23 = fVar9 * fVar17 - fVar12 * fVar15;
      fVar21 = fVar21 + fVar21;
      fVar23 = fVar23 + fVar23;
      fVar25 = fVar8 * fVar15 - fStack0000000000000054 * fVar16;
      fVar26 = fVar17 * fVar11 - fVar15 * fStack0000000000000048;
      fVar27 = fStack0000000000000058 * fVar16 - fVar8 * fVar17;
      fVar28 = fStack0000000000000054 * fVar17 - fStack0000000000000058 * fVar15;
      fVar27 = fVar27 + fVar27;
      fVar28 = fVar28 + fVar28;
      fVar25 = fVar25 + fVar25;
      fVar14 = fVar10 * fVar15 - fVar9 * fVar16;
      fVar24 = fVar16 * fStack0000000000000048 - fVar17 * fStack000000000000004c;
      fVar14 = fVar14 + fVar14;
      fVar24 = fVar24 + fVar24;
      fVar26 = fVar26 + fVar26;
      fVar22 = fVar15 * fStack000000000000004c - fVar16 * fVar11;
      fVar22 = fVar22 + fVar22;
      fVar20 = fVar12 + fVar18 * fVar14 + (fVar15 * fVar23 - fVar16 * fVar21);
      fVar13 = fStack0000000000000058 + fVar18 * fVar25 + (fVar15 * fVar28 - fVar16 * fVar27);
      fVar19 = fVar9 + fVar18 * fVar21 + (fVar16 * fVar14 - fVar17 * fVar23);
      fVar12 = fVar8 + fVar18 * fVar28 + (fVar17 * fVar27 - fVar15 * fVar25);
      fVar8 = fVar10 + fVar18 * fVar23 + (fVar17 * fVar21 - fVar15 * fVar14);
      fVar9 = fStack0000000000000054 + fVar18 * fVar27 + (fVar16 * fVar25 - fVar17 * fVar28);
      fVar25 = fStack000000000000006c +
               fStack0000000000000068 *
               (fStack000000000000005c +
               fVar11 + fVar18 * fVar24 + (fVar16 * fVar22 - fVar17 * fVar26));
      fVar23 = fStack0000000000000070 +
               fStack0000000000000068 *
               (fStack0000000000000060 +
               fStack000000000000004c + fVar18 * fVar26 + (fVar17 * fVar24 - fVar15 * fVar22));
      fVar21 = fStack0000000000000074 +
               fStack0000000000000068 *
               (fStack0000000000000064 +
               fStack0000000000000048 + fVar18 * fVar22 + (fVar15 * fVar26 - fVar16 * fVar24));
      fVar14 = 1.0 / SQRT(fVar20 * fVar20 + fVar19 * fVar19 + fVar8 * fVar8);
      fVar15 = 1.0 / SQRT(fVar13 * fVar13 + fVar9 * fVar9 + fVar12 * fVar12);
      fVar8 = fStack000000000000007c + fStack0000000000000068 * fVar8 * fVar14;
      fVar10 = fStack0000000000000084 + fStack0000000000000068 * fVar9 * fVar15;
      lVar6 = lVar6 + 1;
      fVar9 = fStack0000000000000080 + fStack0000000000000068 * fVar20 * fVar14;
      fVar12 = fStack0000000000000088 + fStack0000000000000068 * fVar12 * fVar15;
      fVar13 = fStack000000000000008c + fStack0000000000000068 * fVar13 * fVar15;
      pfVar4 = pfVar4 + 1;
      fVar14 = fStack0000000000000078 + fStack0000000000000068 * fVar19 * fVar14;
    } while (lVar6 < in_stack_000000d0._4_2_);
    pfVar4 = (float *)(*(long *)(unaff_x19 + 0xa0) + unaff_x21 * 0xc);
    *pfVar4 = fVar25;
    pfVar4[1] = fVar23;
    pfVar4[2] = fVar21;
    fStack0000000000000050 = fVar11;
    uVar7 = FUN_03794fcc(0);
    puVar3 = (undefined4 *)(*(long *)(unaff_x19 + 0xb0) + unaff_x21 * 0x10);
    *puVar3 = uVar7;
    puVar3[1] = fVar8;
    puVar3[2] = fVar9;
    puVar3[3] = fVar10;
  }
  return;
}


