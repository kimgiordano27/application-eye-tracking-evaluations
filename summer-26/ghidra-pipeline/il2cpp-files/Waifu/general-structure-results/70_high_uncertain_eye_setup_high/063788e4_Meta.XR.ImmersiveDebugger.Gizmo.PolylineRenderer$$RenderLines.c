/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$RenderLines
ENTRY_POINT: 063788e4
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


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__RenderLines
               (float *param_1,float param_2,float param_3,float param_4,float param_5,float param_6
               ,float param_7)

{
  float *pfVar1;
  undefined4 *puVar2;
  float *pfVar3;
  long in_x9;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  int unaff_w23;
  long unaff_x24;
  float *unaff_x25;
  long unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s13;
  float unaff_s14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float in_s21;
  float fVar22;
  float in_s22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
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
  undefined8 in_stack_00000048;
  float in_stack_00000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
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
  
  fStack0000000000000024 = param_7;
  while( true ) {
    fVar11 = *param_1;
    fStack000000000000000c = param_1[1];
    fStack000000000000001c = param_1[5];
    fStack0000000000000018 = param_1[6];
    fVar16 = param_1[2];
    pfVar3 = (float *)(*(long *)(unaff_x19 + 0x60) + in_x9 * 0x10);
    fStack0000000000000030 = param_1[8];
    fStack000000000000002c = param_1[9];
    fVar12 = *pfVar3;
    fVar13 = pfVar3[1];
    fVar14 = pfVar3[2];
    fVar15 = pfVar3[3];
    fStack0000000000000034 = fStack00000000000000ac;
    fStack0000000000000028 = param_1[10];
    fStack0000000000000010 = param_1[0xc];
    fStack0000000000000058 = param_1[0xd];
    fStack0000000000000054 = param_1[0xe];
    pfVar3 = (float *)(*(long *)(unaff_x19 + 0x50) + in_x9 * 0xc);
    fStack000000000000005c = *pfVar3;
    pfVar1 = (float *)(*(long *)(unaff_x19 + 0x70) + in_x9 * 0xc);
    fStack0000000000000014 = in_stack_000000b0;
    fStack0000000000000060 = pfVar3[1];
    fStack0000000000000064 = pfVar3[2];
    fVar7 = *pfVar1;
    fStack0000000000000044 = pfVar1[1];
    fStack0000000000000040 = pfVar1[2];
    fStack0000000000000020 = param_2;
    fStack000000000000006c = in_s22;
    fStack000000000000007c = param_3;
    fStack0000000000000080 = param_4;
    fStack0000000000000084 = param_5;
    fStack0000000000000088 = param_6;
    if (*(char *)(unaff_x26 + 0xcb) == '\0') {
      FUN_0335b6c8();
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x26 + 0xcb) = unaff_w27;
    }
    if ((*(int *)(*(long *)(unaff_x28 + 0x8b0) + 0xe0) == 0) &&
       (FUN_033b9870(), *(char *)(unaff_x26 + 0xcb) == '\0')) {
      FUN_0335b6c8();
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x26 + 0xcb) = unaff_w27;
    }
    if (*(int *)(*(long *)(unaff_x28 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar9 = fStack0000000000000010 * 0.0 +
            fVar11 * unaff_s13 + fStack0000000000000020 * fStack0000000000000038 +
            fStack0000000000000030 * in_stack_00000048._4_4_;
    fVar7 = (fStack0000000000000010 +
            fVar11 * unaff_s14 + fStack0000000000000020 * fStack000000000000003c +
            fStack0000000000000030 * in_stack_00000050) * fVar7;
    fVar5 = (fStack0000000000000058 +
            fStack000000000000000c * unaff_s14 + fStack000000000000001c * fStack000000000000003c +
            fStack000000000000002c * in_stack_00000050) * fStack0000000000000044;
    fVar10 = fStack0000000000000058 * 0.0 +
             fStack000000000000000c * unaff_s13 + fStack000000000000001c * fStack0000000000000038 +
             fStack000000000000002c * in_stack_00000048._4_4_;
    fVar17 = fStack0000000000000054 * 0.0 +
             fVar16 * unaff_s13 + fStack0000000000000018 * fStack0000000000000038 +
             fStack0000000000000028 * in_stack_00000048._4_4_;
    fVar6 = fStack0000000000000054 +
            fVar16 * unaff_s14 + fStack0000000000000018 * fStack000000000000003c +
            fStack0000000000000028 * in_stack_00000050;
    fVar8 = fStack0000000000000058 * 0.0 +
            fStack000000000000000c * fStack0000000000000024 +
            fStack000000000000001c * fStack0000000000000034 +
            fStack000000000000002c * fStack0000000000000014;
    fStack0000000000000058 =
         fStack0000000000000054 * 0.0 +
         fVar16 * fStack0000000000000024 + fStack0000000000000018 * fStack0000000000000034 +
         fStack0000000000000028 * fStack0000000000000014;
    fStack0000000000000054 =
         fStack0000000000000010 * 0.0 +
         fVar11 * fStack0000000000000024 + fStack0000000000000020 * fStack0000000000000034 +
         fStack0000000000000030 * fStack0000000000000014;
    fVar6 = fVar6 * fStack0000000000000040;
    fVar19 = fVar17 * fVar13 - fVar10 * fVar14;
    fVar20 = fVar9 * fVar14 - fVar17 * fVar12;
    fVar19 = fVar19 + fVar19;
    fVar20 = fVar20 + fVar20;
    fVar24 = fVar8 * fVar12 - fStack0000000000000054 * fVar13;
    fVar23 = fVar14 * fVar7 - fVar12 * fVar6;
    fVar25 = fStack0000000000000058 * fVar13 - fVar8 * fVar14;
    fVar26 = fStack0000000000000054 * fVar14 - fStack0000000000000058 * fVar12;
    fVar25 = fVar25 + fVar25;
    fVar26 = fVar26 + fVar26;
    fVar24 = fVar24 + fVar24;
    fVar18 = fVar10 * fVar12 - fVar9 * fVar13;
    fVar22 = fVar13 * fVar6 - fVar14 * fVar5;
    fVar18 = fVar18 + fVar18;
    fVar22 = fVar22 + fVar22;
    fVar23 = fVar23 + fVar23;
    fVar21 = fVar12 * fVar5 - fVar13 * fVar7;
    fVar21 = fVar21 + fVar21;
    fVar17 = fVar17 + fVar15 * fVar18 + (fVar12 * fVar20 - fVar13 * fVar19);
    fVar11 = fStack0000000000000058 + fVar15 * fVar24 + (fVar12 * fVar26 - fVar13 * fVar25);
    fVar9 = fVar9 + fVar15 * fVar19 + (fVar13 * fVar18 - fVar14 * fVar20);
    fVar16 = fVar8 + fVar15 * fVar26 + (fVar14 * fVar25 - fVar12 * fVar24);
    fVar8 = fVar10 + fVar15 * fVar20 + (fVar14 * fVar19 - fVar12 * fVar18);
    fVar10 = fStack0000000000000054 + fVar15 * fVar25 + (fVar13 * fVar24 - fVar14 * fVar26);
    in_s22 = fStack000000000000006c +
             in_stack_00000068 *
             (fStack000000000000005c + fVar7 + fVar15 * fVar22 + (fVar13 * fVar21 - fVar14 * fVar23)
             );
    in_s21 = in_s21 + in_stack_00000068 *
                      (fStack0000000000000060 +
                      fVar5 + fVar15 * fVar23 + (fVar14 * fVar22 - fVar12 * fVar21));
    in_stack_00000070._4_4_ =
         in_stack_00000070._4_4_ +
         in_stack_00000068 *
         (fStack0000000000000064 + fVar6 + fVar15 * fVar21 + (fVar12 * fVar23 - fVar13 * fVar22));
    fVar7 = 1.0 / SQRT(fVar17 * fVar17 + fVar9 * fVar9 + fVar8 * fVar8);
    fVar11 = 1.0 / SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar16 * fVar16);
    param_3 = fStack000000000000007c + in_stack_00000068 * fVar8 * fVar7;
    param_5 = fStack0000000000000084 + in_stack_00000068 * fVar10 * fVar11;
    unaff_x24 = unaff_x24 + 1;
    param_4 = fStack0000000000000080 + in_stack_00000068 * fVar17 * fVar7;
    param_6 = fStack0000000000000088 + in_stack_00000068 * fVar16 * fVar11;
    if (in_stack_000000d0._4_2_ <= unaff_x24) break;
    in_stack_00000068 = unaff_x25[1];
    in_x9 = (long)*(int *)(*(long *)(unaff_x19 + 0x40) + (long)((int)unaff_x25[-3] + unaff_w22) * 4)
    ;
    fStack0000000000000038 = fStack00000000000000a0;
    fStack000000000000003c = fStack0000000000000094;
    param_1 = (float *)(*(long *)(unaff_x19 + 0x20) + (long)((int)unaff_x25[-3] + unaff_w23) * 0x40)
    ;
    in_stack_00000048._4_4_ = fStack00000000000000a4;
    in_stack_00000050 = fStack0000000000000098;
    param_2 = param_1[4];
    unaff_x25 = unaff_x25 + 1;
    fStack0000000000000024 = fStack00000000000000a8;
    unaff_s14 = fStack0000000000000090;
    unaff_s13 = fStack000000000000009c;
  }
  pfVar3 = (float *)(*(long *)(unaff_x19 + 0xa0) + unaff_x21 * 0xc);
  *pfVar3 = in_s22;
  pfVar3[1] = in_s21;
  pfVar3[2] = in_stack_00000070._4_4_;
  uVar4 = FUN_03794fcc(0);
  puVar2 = (undefined4 *)(*(long *)(unaff_x19 + 0xb0) + unaff_x21 * 0x10);
  *puVar2 = uVar4;
  puVar2[1] = param_3;
  puVar2[2] = param_4;
  puVar2[3] = param_5;
  return;
}


