/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspector.InspectionRegistry$$TryGetHandle
ENTRY_POINT: 0634e2fc
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspector_InspectionRegistry__TryGetHandle
               (long param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float param_9)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  float *pfVar8;
  float *pfVar9;
  long in_x9;
  long lVar10;
  undefined8 *puVar11;
  float *unaff_x19;
  float unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  int unaff_w25;
  long lVar12;
  long unaff_x28;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
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
  ulong uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float unaff_s14;
  float unaff_s15;
  float in_s16;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000080;
  float fStack0000000000000084;
  long in_stack_00000088;
  undefined4 uStack0000000000000090;
  float fStack0000000000000094;
  undefined4 uStack0000000000000098;
  uint uStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float in_stack_000000b0;
  undefined8 uStack00000000000000b8;
  ulong uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  float fStack00000000000000f8;
  float fStack00000000000000fc;
  undefined8 in_stack_00000100;
  float fStack0000000000000108;
  float fStack000000000000010c;
  float fStack0000000000000110;
  float fStack0000000000000114;
  float fStack0000000000000118;
  float fStack000000000000011c;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 in_stack_00000130;
  undefined8 uStack0000000000000138;
  ulong in_stack_00000140;
  float in_stack_00000148;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000158;
  undefined8 in_stack_00000160;
  int in_stack_00000168;
  undefined8 in_stack_00000188;
  
  do {
    pfVar8 = (float *)(param_1 + in_x9 * 4);
    *pfVar8 = param_8 + *pfVar8;
    pfVar8[1] = param_9 + pfVar8[1];
    pfVar8[2] = in_s16 * param_7 + pfVar8[2];
    do {
      if ((in_stack_00000100._4_4_ & 6) == 0) {
        fVar20 = in_stack_000000b0 *
                 ((param_4 - param_2 * fStack0000000000000114) - (float)in_stack_00000130);
        fVar26 = in_stack_000000b0 * ((param_5 - param_2 * unaff_s15) - unaff_s14);
        in_stack_000000b0 =
             in_stack_000000b0 *
             ((param_6 - param_2 * fStack0000000000000110) - fStack000000000000011c);
        pfVar8 = (float *)(*(long *)(unaff_x19 + 0x30) + unaff_x24 * 0xc);
        *pfVar8 = (float)in_stack_00000130 + fVar20;
        pfVar8[1] = unaff_s14 + fVar26;
        pfVar8[2] = fStack000000000000011c + in_stack_000000b0;
        param_3 = 1.0 - param_3;
        pfVar8 = (float *)(*(long *)(unaff_x19 + 0x38) + unaff_x24 * 0xc);
                    /* try { // try from 0634e3c4 to 0644e3c7 has its CatchHandler @ 0634e4a8 */
        *pfVar8 = param_3 * fVar20 + *pfVar8;
        pfVar8[1] = param_3 * fVar26 + pfVar8[1];
                    /* try { // try from 0634e3c8 to 0644e3cb has its CatchHandler @ 0634e49c */
        pfVar8[2] = param_3 * in_stack_000000b0 + pfVar8[2];
      }
LAB_0634e3cc:
      do {
        do {
          do {
                    /* try { // try from 0634e3cc to 0644e3cf has its CatchHandler @ 0634e4a8 */
            unaff_x21 = unaff_x21 + -1;
                    /* try { // try from 0634e3d0 to 0644e3d3 has its CatchHandler @ 0634e498 */
            iVar6 = (int)unaff_x22 + 1;
                    /* try { // try from 0634e3d4 to 0644e3d7 has its CatchHandler @ 0634e490 */
            if (unaff_x21 == 0) {
              do {
                    /* try { // try from 0634e3d8 to 0644e3df has its CatchHandler @ 0634e48c */
                    /* try { // try from 0634e3e0 to 0644e3e3 has its CatchHandler @ 0634e460 */
                if ((in_stack_00000038._4_4_ & 1) != 0) {
                    /* try { // try from 0634e3e4 to 0644e3e7 has its CatchHandler @ 0634e45c */
                    /* try { // try from 0634e3e8 to 0644e3eb has its CatchHandler @ 0634e478 */
                    /* try { // try from 0634e3ec to 0644e3ef has its CatchHandler @ 0634e458 */
                    /* try { // try from 0634e3f0 to 0644e3f3 has its CatchHandler @ 0634e474 */
                    /* try { // try from 0634e3f4 to 0644e3f7 has its CatchHandler @ 0634e450 */
                    /* try { // try from 0634e3f8 to 0644e3fb has its CatchHandler @ 0634e44c */
                    /* try { // try from 0634e3fc to 0644e3ff has its CatchHandler @ 0634e444 */
                    /* try { // try from 0634e400 to 0644e403 has its CatchHandler @ 0634e43c */
                    /* try { // try from 0634e404 to 0644e407 has its CatchHandler @ 0634e434 */
                    /* try { // try from 0634e408 to 0644e40b has its CatchHandler @ 0634e470 */
                    /* try { // try from 0634e40c to 0644e40f has its CatchHandler @ 0634e430 */
                    /* try { // try from 0634e410 to 0644e413 has its CatchHandler @ 0634e42c */
                  return;
                }
                in_stack_00000038._4_4_ = 1;
                unaff_x21 = in_stack_00000018;
                iVar6 = in_stack_00000010._4_4_;
              } while ((int)in_stack_00000018 == 0);
            }
            unaff_x22 = (long)iVar6;
            lVar10 = *(long *)(unaff_x19 + 4) + (long)iVar6 * (long)(int)unaff_x28;
          } while (*(int *)(lVar10 + 4) < 0);
          iVar6 = *(int *)(*(long *)(unaff_x19 + 4) + unaff_x22 * unaff_x28) + unaff_w25;
          uVar1 = *(uint *)(*(long *)(unaff_x19 + 0x20) + (long)iVar6 * 4);
        } while ((uVar1 & 1) == 0);
        fVar37 = *(float *)(lVar10 + 8);
        fStack00000000000000fc = *(float *)(lVar10 + 0xc);
        fStack00000000000000f8 = *(float *)(lVar10 + 0x10);
        fVar39 = *(float *)(lVar10 + 0x14);
        fVar32 = *(float *)(lVar10 + 0x18);
        fVar35 = *(float *)(lVar10 + 0x1c);
        fVar38 = *(float *)(lVar10 + 0x20);
        lVar12 = (long)iVar6;
        uVar28 = *(undefined4 *)(*(long *)(unaff_x19 + 0x1c) + lVar12 * 4);
        iVar6 = *(int *)(lVar10 + 4) + unaff_w25;
        in_stack_00000100._4_4_ = *(uint *)(*(long *)(unaff_x19 + 0x20) + (long)iVar6 * 4);
        puVar7 = (undefined8 *)(*(long *)(unaff_x19 + 0x18) + in_stack_00000088 * 0x10);
        uStack0000000000000158 = puVar7[1];
        uStack0000000000000150 = *puVar7;
        puVar11 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + lVar12 * 0xc);
        fStack0000000000000118 = *(float *)(puVar11 + 1);
        puVar7 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + (long)iVar6 * 0xc);
        uStack0000000000000120 = *puVar11;
        in_stack_00000130 = *puVar7;
        lVar10 = *(long *)(unaff_x19 + 0x2c);
        uStack0000000000000128 = 0;
        uStack0000000000000138 = 0;
        fStack000000000000011c = *(float *)(puVar7 + 1);
        unaff_x24 = (long)iVar6;
        pfVar8 = (float *)(*(long *)(unaff_x19 + 0x34) + (long)iVar6 * 0x10);
        pfVar9 = (float *)(lVar10 + (long)iVar6 * 0x10);
        fVar21 = *pfVar9;
        fStack00000000000000ac = *pfVar8;
        fVar34 = 0.0;
        fVar22 = pfVar9[1];
        fStack000000000000010c = pfVar9[2];
        fStack0000000000000108 = pfVar9[3];
        fStack00000000000000a8 = pfVar8[1];
        fVar20 = 1.0 - *(float *)(*(long *)(unaff_x19 + 0x24) + lVar12 * 4) * 0.5;
        fVar26 = 1.0 - *(float *)(*(long *)(unaff_x19 + 0x24) + (long)iVar6 * 4) * 0.5;
        bVar2 = false;
        bVar3 = false;
        bVar4 = false;
        if ((uint)ABS(fVar20) <= (uint)unaff_w20) {
          bVar2 = false;
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar20)) {
            bVar2 = fVar20 < 1.0;
            bVar3 = fVar20 == 1.0;
            bVar4 = false;
          }
        }
        fVar19 = 1.0;
        if (bVar3 || bVar2 != bVar4) {
          fVar19 = fVar20;
        }
        bVar2 = true;
        if (((uint)ABS(fVar19) <= (uint)unaff_w20) && (bVar2 = false, !NAN(fVar19))) {
          bVar2 = fVar19 < 0.0;
        }
        fVar20 = fVar34;
        if (!bVar2) {
          fVar20 = fVar19;
        }
        uStack00000000000000c0 = (ulong)(uint)fVar20;
        bVar2 = false;
        bVar3 = false;
        bVar4 = false;
        if ((uint)ABS(fVar26) <= (uint)unaff_w20) {
          bVar2 = false;
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar26)) {
            bVar2 = fVar26 < 1.0;
            bVar3 = fVar26 == 1.0;
            bVar4 = false;
          }
        }
        fVar20 = 1.0;
        if (bVar3 || bVar2 != bVar4) {
          fVar20 = fVar26;
        }
        fStack00000000000000a4 = pfVar8[2];
        fStack00000000000000a0 = pfVar8[3];
        bVar2 = true;
        if (((uint)ABS(fVar20) <= (uint)unaff_w20) && (bVar2 = false, !NAN(fVar20))) {
          bVar2 = fVar20 < 0.0;
        }
        in_stack_000000b0 = fVar34;
        if (!bVar2) {
          in_stack_000000b0 = fVar20;
        }
        uStack00000000000000b8 = 0;
        uStack00000000000000c8 = 0;
        fVar26 = (float)FUN_06358bac(uVar28,&stack0x00000150,0);
        uVar14 = uStack0000000000000098;
        fVar20 = fStack0000000000000094;
        uVar13 = uStack0000000000000090;
        if (ABS(fVar26) <= fStack0000000000000084) {
          uVar13 = 0;
          uVar14 = 0;
          fVar20 = fVar34;
        }
        if ((uStack000000000000009c >> 3 & 1) == 0) {
          fVar37 = fStack0000000000000074 * fVar37;
          fStack00000000000000fc = fStack0000000000000070 * fStack00000000000000fc;
          fStack00000000000000f8 = fStack000000000000006c * fStack00000000000000f8;
          fVar39 = fStack0000000000000068 * fVar39;
          fVar32 = fStack0000000000000064 * fVar32;
          fVar35 = fStack0000000000000060 * fVar35;
          fVar38 = in_stack_00000058._4_4_ * fVar38;
        }
        else {
          pfVar9 = (float *)(*(long *)(unaff_x19 + 0x28) + lVar12 * 0xc);
          pfVar8 = (float *)(*(long *)(unaff_x19 + 0x28) + unaff_x24 * 0xc);
          fVar37 = *pfVar9 - *pfVar8;
          fVar35 = pfVar9[1] - pfVar8[1];
          fVar32 = pfVar9[2] - pfVar8[2];
          fVar38 = fVar32 * fVar32 + fVar37 * fVar37 + fVar35 * fVar35;
          if (fVar38 < DAT_012ed990) goto LAB_0634e3cc;
          pfVar8 = (float *)(lVar10 + lVar12 * 0x10);
          fVar34 = *pfVar8;
          fVar25 = pfVar8[1];
          fVar19 = pfVar8[2];
          fVar30 = pfVar8[3];
          if (DAT_086d90cb == '\0') {
            FUN_0335b6c8(&DAT_083ce8b0,1);
            DataMemoryBarrier(2,3);
            DAT_086d90cb = '\x01';
          }
          if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
            FUN_033b9870();
          }
          fVar38 = 1.0 / SQRT(fVar38);
          fVar31 = 1.0 / (fStack0000000000000108 * fStack0000000000000108 +
                         fStack000000000000010c * fStack000000000000010c +
                         fVar21 * fVar21 + fVar22 * fVar22);
          fVar37 = fVar37 * fVar38;
          fVar35 = fVar35 * fVar38;
          fVar32 = fVar32 * fVar38;
          fVar38 = fStack0000000000000108 * fVar31;
          fVar33 = fVar31 * -fVar21;
          fVar16 = fVar31 * -fVar22;
          fVar31 = fVar31 * -fStack000000000000010c;
          fVar24 = fVar31 * fVar37 - fVar33 * fVar32;
          fVar17 = fVar33 * fVar35 - fVar16 * fVar37;
          fVar23 = fVar16 * fVar32 - fVar31 * fVar35;
          fVar23 = fVar23 + fVar23;
          fVar24 = fVar24 + fVar24;
          fVar17 = fVar17 + fVar17;
          fStack00000000000000fc = fVar35 + fVar38 * fVar24 + (fVar31 * fVar23 - fVar33 * fVar17);
          fStack00000000000000f8 = fVar32 + fVar38 * fVar17 + (fVar33 * fVar24 - fVar16 * fVar23);
          fVar39 = (fVar38 * fVar34 + fVar16 * fVar19 + fVar33 * fVar30) - fVar31 * fVar25;
          fVar32 = (fVar38 * fVar25 + fVar31 * fVar34 + fVar16 * fVar30) - fVar33 * fVar19;
          fVar35 = (fVar38 * fVar19 + fVar33 * fVar25 + fVar31 * fVar30) - fVar16 * fVar34;
          fVar37 = fVar37 + fVar38 * fVar23 + (fVar16 * fVar17 - fVar31 * fVar24);
          fVar38 = (fVar38 * fVar30 - (fVar33 * fVar34 + fVar16 * fVar25)) - fVar31 * fVar19;
        }
        unaff_s14 = (float)((ulong)in_stack_00000130 >> 0x20);
        fVar34 = (float)((ulong)uStack0000000000000120 >> 0x20);
        if (in_stack_00000160._4_4_ == 1) {
          fVar19 = fStack0000000000000108;
          fVar25 = fStack000000000000010c;
          fVar30 = fVar22;
          fVar31 = fVar21;
          if ((in_stack_00000100._4_4_ & 6) == 0) {
            fVar19 = fStack00000000000000a0;
            fVar25 = fStack00000000000000a4;
            fVar30 = fStack00000000000000a8;
            fVar31 = fStack00000000000000ac;
          }
          if (DAT_086d90cb == '\0') {
            FUN_0335b6c8(&DAT_083ce8b0,1);
            DataMemoryBarrier(2,3);
            DAT_086d90cb = '\x01';
          }
          if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
            FUN_033b9870();
            cVar5 = DAT_086d90cb;
          }
          else {
            cVar5 = '\x01';
          }
          fVar33 = *(float *)(*(long *)(unaff_x19 + 0x3c) + unaff_x22 * 4);
          if (cVar5 == '\0') {
            FUN_0335b6c8(&DAT_083ce8b0,1);
            DataMemoryBarrier(2,3);
            DAT_086d90cb = '\x01';
          }
          if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
            FUN_033b9870();
          }
          fStack00000000000000a4 = (float)FUN_06358bac(uVar28,in_stack_00000050,0);
          if (DAT_086de4d6 == '\0') {
            FUN_0335b6c8(&DAT_083ce8b0,1);
            DataMemoryBarrier(2,3);
            DAT_086de4d6 = '\x01';
          }
          fStack00000000000000a8 = fVar38;
          fStack00000000000000ac = fVar35;
          if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
            FUN_033b9870();
          }
          fVar35 = (float)in_stack_00000130;
          fVar40 = (float)uStack0000000000000120 - fVar35;
          fVar41 = (float)((ulong)uStack0000000000000120 >> 0x20) - unaff_s14;
          fVar42 = fStack0000000000000118 - fStack000000000000011c;
          fVar23 = fStack00000000000000f8 * fVar30 - fStack00000000000000fc * fVar25;
          fVar29 = fVar37 * fVar25 - fStack00000000000000f8 * fVar31;
          fVar17 = fStack00000000000000fc * fVar31 - fVar37 * fVar30;
          fVar23 = fVar23 + fVar23;
          fVar29 = fVar29 + fVar29;
          fVar17 = fVar17 + fVar17;
          fVar24 = SQRT(fVar42 * fVar42 + fVar40 * fVar40 + fVar41 * fVar41);
          fVar38 = fVar37 + fVar19 * fVar23 + (fVar30 * fVar17 - fVar25 * fVar29);
          fVar16 = fStack00000000000000fc + fVar19 * fVar29 + (fVar25 * fVar23 - fVar31 * fVar17);
          fVar17 = fStack00000000000000f8 + fVar19 * fVar17 + (fVar31 * fVar29 - fVar30 * fVar23);
          fVar29 = 1.0 / fVar24;
          fVar24 = fVar24 + (fVar33 - fVar24) * 0.5;
          fVar33 = fVar40 * fVar29 * fVar24;
          fVar23 = fVar41 * fVar29 * fVar24;
          uVar27 = CONCAT44(fVar23,fVar33);
          fVar24 = fVar42 * fVar29 * fVar24;
          fStack0000000000000080 = unaff_s14;
          if ((uVar1 & 6) == 0) {
            fVar34 = fStack00000000000000a4 * DAT_012edabc;
            fStack00000000000000a0 = fVar38;
            dVar15 = acos((double)(fVar17 * fVar24 + fVar38 * fVar33 + fVar16 * fVar23));
            in_stack_00000140 = uVar27;
            in_stack_00000148 = fVar24;
            if (fVar34 < (float)dVar15) {
              FUN_0638db74(uVar27,fVar23,fVar24,fStack00000000000000a0,fVar16,fVar17,fVar34,
                           &stack0x00000140,0);
            }
            fVar38 = in_stack_00000148;
            uVar27 = in_stack_00000140;
            fVar34 = fStack00000000000000a4 / 90.0;
            bVar2 = false;
            bVar3 = false;
            bVar4 = false;
            if ((uint)ABS(fVar34) <= (uint)unaff_w20) {
              bVar2 = false;
              bVar3 = false;
              bVar4 = true;
              if (!NAN(fVar34)) {
                bVar2 = fVar34 < 1.0;
                bVar3 = fVar34 == 1.0;
                bVar4 = false;
              }
            }
            fVar29 = 1.0;
            if (bVar3 || bVar2 != bVar4) {
              fVar29 = fVar34;
            }
            if (DAT_086de61e == '\0') {
              FUN_0335b6c8(&DAT_083ce8b0,1);
              DataMemoryBarrier(2,3);
              DAT_086de61e = '\x01';
            }
            if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
              FUN_033b9870();
            }
            fVar40 = (float)uVar27 * 0.5;
            fVar41 = (float)(uVar27 >> 0x20) * 0.5;
            fStack00000000000000a4 = fVar38 * 0.5;
            fVar38 = fVar35 + fVar33 * 0.5;
            fVar33 = unaff_s14 + fVar23 * 0.5;
            fVar23 = fStack000000000000011c + fVar24 * 0.5;
            fVar24 = (float)uStack00000000000000c0;
            fVar42 = ((fVar38 + fVar40) - (float)uStack0000000000000120) * fVar24;
            fVar36 = ((fVar33 + fVar41) - (float)((ulong)uStack0000000000000120 >> 0x20)) * fVar24;
            fVar24 = fVar24 * ((fVar23 + fStack00000000000000a4) - fStack0000000000000118);
            dVar15 = 0.0;
            if (0.0 <= fVar29 && (uint)ABS(fVar29) <= (uint)unaff_w20) {
              dVar15 = (double)fVar29;
            }
            dVar15 = (double)FUN_033a3c74(dVar15,0x3fe0000000000000);
            fVar29 = DAT_012edea4;
            fStack0000000000000118 = fStack0000000000000118 + fVar24;
            puVar7 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + lVar12 * 0xc);
            fVar18 = (float)uStack0000000000000120 + fVar42;
            fVar34 = (float)((ulong)uStack0000000000000120 >> 0x20) + fVar36;
            uStack0000000000000120 = CONCAT44(fVar34,fVar18);
            *puVar7 = uStack0000000000000120;
            *(float *)(puVar7 + 1) = fStack0000000000000118;
            puVar7 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + lVar12 * 0xc);
            uStack0000000000000128 = 0;
            fVar29 = (float)dVar15 * fVar29 + -0.5 + 1.0;
            *puVar7 = CONCAT44(fVar36 * fVar29 + (float)((ulong)*puVar7 >> 0x20),
                               fVar42 * fVar29 + (float)*puVar7);
            *(float *)(puVar7 + 1) = fVar24 * fVar29 + *(float *)(puVar7 + 1);
            if ((in_stack_00000100._4_4_ & 6) == 0) {
              puVar7 = (undefined8 *)(*(long *)(unaff_x19 + 0x30) + unaff_x24 * 0xc);
              fVar38 = ((fVar38 - fVar40) - fVar35) * in_stack_000000b0;
              fVar33 = ((fVar33 - fVar41) - unaff_s14) * in_stack_000000b0;
              fVar23 = in_stack_000000b0 *
                       ((fVar23 - fStack00000000000000a4) - fStack000000000000011c);
              unaff_s14 = unaff_s14 + fVar33;
              in_stack_00000130 = CONCAT44(unaff_s14,fVar35 + fVar38);
              fStack000000000000011c = fStack000000000000011c + fVar23;
              *puVar7 = in_stack_00000130;
              *(float *)(puVar7 + 1) = fStack000000000000011c;
              puVar7 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + unaff_x24 * 0xc);
              *puVar7 = CONCAT44(fVar33 * fVar29 + (float)((ulong)*puVar7 >> 0x20),
                                 fVar38 * fVar29 + (float)*puVar7);
              *(float *)(puVar7 + 1) = fVar23 * fVar29 + *(float *)(puVar7 + 1);
              uStack0000000000000138 = 0;
            }
            uVar27 = (ulong)(uint)(fVar18 - (float)in_stack_00000130);
            fStack0000000000000080 = unaff_s14;
          }
          fVar35 = (float)uVar27;
          fVar38 = (fVar39 * fVar19 +
                   fStack00000000000000ac * fVar30 + fStack00000000000000a8 * fVar31) -
                   fVar32 * fVar25;
          fVar33 = (fVar32 * fVar19 + fVar39 * fVar25 + fStack00000000000000a8 * fVar30) -
                   fStack00000000000000ac * fVar31;
          fVar23 = (fStack00000000000000ac * fVar19 +
                   fStack00000000000000a8 * fVar25 + fVar32 * fVar31) - fVar39 * fVar30;
          fVar39 = (fStack00000000000000a8 * fVar19 - (fVar32 * fVar30 + fVar39 * fVar31)) -
                   fStack00000000000000ac * fVar25;
          fVar32 = (float)FUN_0638dfac(0);
          pfVar8 = (float *)(*(long *)(unaff_x19 + 0x34) + lVar12 * 0x10);
          *pfVar8 = (fVar38 * fVar35 + fVar39 * fVar32 + fVar23 * fVar16) - fVar33 * fVar17;
          pfVar8[1] = (fVar33 * fVar35 + fVar39 * fVar16 + fVar38 * fVar17) - fVar23 * fVar32;
          pfVar8[2] = (fVar23 * fVar35 + fVar39 * fVar17 + fVar33 * fVar32) - fVar38 * fVar16;
          pfVar8[3] = (fVar39 * fVar35 - (fVar38 * fVar32 + fVar33 * fVar16)) - fVar23 * fVar17;
          unaff_s14 = fStack0000000000000080;
        }
      } while (in_stack_00000168 != 1);
      fVar32 = (float)FUN_06358bac(uVar28,in_stack_00000048,0);
      fVar35 = *unaff_x19;
      if (DAT_086de61e == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086de61e = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar24 = (float)uStack0000000000000120 - (float)in_stack_00000130;
      fVar40 = fStack0000000000000118 - fStack000000000000011c;
      fVar25 = fVar21 * fStack00000000000000fc - fVar22 * fVar37;
      fVar39 = fVar22 * fStack00000000000000f8 - fStack000000000000010c * fStack00000000000000fc;
      fVar19 = fStack000000000000010c * fVar37 - fVar21 * fStack00000000000000f8;
      fVar39 = fVar39 + fVar39;
      fVar19 = fVar19 + fVar19;
      fVar25 = fVar25 + fVar25;
      fVar31 = fStack0000000000000108 * fVar19;
      fVar16 = fStack0000000000000108 * fVar25;
      fVar41 = fStack000000000000010c * fVar39;
      fVar29 = fVar34 - unaff_s14;
      fVar23 = fVar37 + fStack0000000000000108 * fVar39 +
               (fVar22 * fVar25 - fStack000000000000010c * fVar19);
      FUN_033a3c74((double)(1.0 - fVar32),(double)fVar35);
      fVar32 = fVar29;
      fVar35 = fVar40;
      fVar37 = fVar23;
      fVar38 = (float)FUN_0638dfac(fVar24,0);
      fVar30 = fVar29 * fVar38 - fVar24 * fVar32;
      fVar33 = fVar40 * fVar32 - fVar29 * fVar35;
      fVar17 = fVar24 * fVar35 - fVar40 * fVar38;
      fVar33 = fVar33 + fVar33;
      fVar17 = fVar17 + fVar17;
      fVar30 = fVar30 + fVar30;
      fStack0000000000000114 = fVar24 + fVar37 * fVar33 + (fVar32 * fVar30 - fVar35 * fVar17);
      unaff_s15 = fVar29 + fVar37 * fVar17 + (fVar35 * fVar33 - fVar38 * fVar30);
      fStack0000000000000110 = fVar40 + fVar37 * fVar30 + (fVar38 * fVar17 - fVar32 * fVar33);
      param_2 = (float)FUN_0635881c(fVar23,fStack00000000000000fc + fVar31 +
                                           (fVar41 - fVar21 * fVar25),
                                    fStack00000000000000f8 + fVar16 +
                                    (fVar21 * fVar19 - fVar22 * fVar39),uVar14,fVar20,uVar13,
                                    ABS(fVar26),0x3e800000);
      param_4 = (float)in_stack_00000130 + fVar24 * param_2;
      param_5 = unaff_s14 + fVar29 * param_2;
      param_6 = fStack000000000000011c + fVar40 * param_2;
      param_3 = in_stack_00000188._4_4_;
    } while ((uVar1 & 6) != 0);
    fVar20 = 1.0 - param_2;
    in_x9 = lVar12 * 3;
    param_7 = (float)uStack00000000000000c0;
    param_8 = param_7 * ((param_4 + fVar20 * fStack0000000000000114) - (float)uStack0000000000000120
                        );
    param_9 = param_7 * ((param_5 + fVar20 * unaff_s15) - fVar34);
    param_7 = param_7 * ((param_6 + fVar20 * fStack0000000000000110) - fStack0000000000000118);
    pfVar8 = (float *)(*(long *)(unaff_x19 + 0x30) + lVar12 * 0xc);
    *pfVar8 = (float)uStack0000000000000120 + param_8;
    pfVar8[1] = fVar34 + param_9;
    pfVar8[2] = fStack0000000000000118 + param_7;
    param_1 = *(long *)(unaff_x19 + 0x38);
    in_s16 = 1.0 - in_stack_00000188._4_4_;
    param_8 = in_s16 * param_8;
    param_9 = in_s16 * param_9;
  } while( true );
}


