/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.GizmoManagerFromInspector.<>c__DisplayClass1_0$$<RegisterSpecialisedWidget>g__GetState|1
ENTRY_POINT: 06351258
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_GizmoManagerFromInspector_<>c__DisplayClass1_0__<RegisterSpecialisedWidget>g__GetState_1
               (long param_1,ulong param_2,int *param_3,int param_4)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  uint in_w9;
  long lVar10;
  int unaff_w20;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float unaff_s8;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fStack0000000000000004;
  float fStack000000000000000c;
  ulong uStack0000000000000010;
  short sStack0000000000000020;
  short sStack0000000000000022;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  int iStack0000000000000048;
  float fStack000000000000004c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  
  *(float *)(param_1 + 8) = unaff_s8;
  lVar13 = *(long *)(param_3 + 0x12);
  if ((*(uint *)(lVar13 + (long)param_4 * 4) & in_w9) == 1) {
    lVar12 = (long)unaff_w20;
    lVar10 = (long)*(int *)(*(long *)(param_3 + 0x16) + lVar12 * 4);
    lVar6 = *(long *)(param_3 + 0x42) + lVar10 * 0xfc;
                    /* try { // try from 0635129c to 0645129f has its CatchHandler @ 063516dc */
    if ((((*(byte *)(lVar6 + 0x30) & 1) != 0) && (-1 < (short)*(ushort *)(lVar6 + 0xf2))) &&
       (*param_3 < *(int *)(*(long *)(param_3 + 0x42) + lVar10 * 0xfc + 0x88))) {
      fVar26 = *(float *)(lVar6 + 0x50);
      fStack000000000000000c = *(float *)(lVar6 + 0x54);
      iVar15 = *(int *)(lVar6 + 4);
      iVar3 = *(int *)(lVar6 + 0x14);
      fVar24 = *(float *)(lVar6 + 0x58);
      fVar25 = *(float *)(lVar6 + 0x5c);
      uStack0000000000000010 = param_2;
      memcpy(&stack0x00000040,
             (void *)(*(long *)(param_3 + 2) + (ulong)*(ushort *)(lVar6 + 0xf2) * 0x60),0x60);
      if (in_stack_00000040._4_4_ != 0) {
        iVar15 = unaff_w20 - iVar15;
        fVar22 = *(float *)(*(long *)(param_3 + 0x26) + lVar12 * 4);
        fVar16 = (float)FUN_06358bac(fVar22,&stack0x00000050,0);
        fVar17 = (float)FUN_06358bac(fVar22,&stack0x00000060,0);
        fVar17 = fVar26 * fVar17;
        fVar16 = fVar26 * fVar16;
        fVar23 = (float)(uStack0000000000000010 >> 0x20);
        fStack0000000000000004 = fVar23;
        if (iStack0000000000000048 == 1) {
          iVar11 = *(int *)(*(long *)(param_3 + 10) + (long)(in_stack_00000080._4_4_ + iVar15) * 8 +
                           4);
          if (0 < iVar11) {
            lVar6 = *(long *)(param_3 + 6);
            iVar14 = 0;
            fVar19 = 0.0;
            fVar22 = 0.0;
            iVar15 = in_stack_00000070._4_4_ +
                     *(int *)(*(long *)(param_3 + 10) + (long)(in_stack_00000080._4_4_ + iVar15) * 8
                             );
            fVar23 = 0.0;
            do {
              puVar8 = (undefined8 *)(lVar6 + (long)iVar15 * 0x20);
              in_stack_00000028 = puVar8[1];
              _sStack0000000000000020 = *puVar8;
              in_stack_00000038 = puVar8[3];
              in_stack_00000030 = puVar8[2];
              bVar4 = -1 < sStack0000000000000020;
              if ((bVar4) &&
                 (sStack0000000000000022 = (short)((ulong)_sStack0000000000000020 >> 0x10),
                 iVar5 = (int)sStack0000000000000022,
                 (*(uint *)(lVar13 + (long)*(int *)(*(long *)(param_3 + 0x32) +
                                                   (long)(iVar3 + iVar5) * 4) * 4) & 1) != 0)) {
                fVar21 = fStack000000000000000c;
                fVar27 = fVar24;
                fVar28 = (float)FUN_06351850(fVar26,fStack000000000000000c,fVar24,fVar25,fVar17,
                                             param_3,&stack0x00000020);
                fVar19 = fVar19 + fVar28;
                fVar22 = fVar22 + fVar21;
                fVar23 = fVar23 + fVar27;
                iVar14 = iVar14 + 1;
              }
              fVar21 = fStack0000000000000004;
              iVar11 = iVar11 + -1;
              iVar15 = iVar15 + 1;
            } while (iVar11 != 0);
            if (0 < iVar14) {
              fVar25 = (float)iVar14;
              fVar22 = fVar22 / fVar25;
              fVar23 = fVar23 / fVar25;
              fVar25 = (float)FUN_063519d8(fVar19 / fVar25,fVar22,fVar23,fVar16,
                                           uStack0000000000000010,fStack0000000000000004);
              uStack0000000000000010 =
                   (ulong)(uint)((float)uStack0000000000000010 +
                                (fVar25 - (float)uStack0000000000000010));
              unaff_s8 = unaff_s8 + (fVar23 - unaff_s8);
              fStack0000000000000004 = fVar21 + (fVar22 - fVar21);
            }
          }
        }
        else if (iStack0000000000000048 == 0) {
          if (0 < *(int *)(*(long *)(param_3 + 10) + (long)(in_stack_00000080._4_4_ + iVar15) * 8 +
                          4)) {
            uVar1 = in_stack_00000070._4_4_ +
                    *(int *)(*(long *)(param_3 + 10) + (long)(in_stack_00000080._4_4_ + iVar15) * 8)
            ;
            if (-1 < *(short *)(*(long *)(param_3 + 6) +
                               (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5)))
            {
              lVar13 = *(long *)(param_3 + 6) + (long)(int)uVar1 * 0x20;
              pfVar7 = (float *)(*(long *)(param_3 + 0x2a) + lVar12 * 0xc);
              pfVar2 = (float *)(*(long *)(param_3 + 0x2e) + lVar12 * 0x10);
              fVar22 = *pfVar2;
              fVar30 = pfVar2[1];
              fVar19 = pfVar2[2];
              fVar21 = pfVar2[3];
              fVar26 = fStack000000000000000c * *(float *)(lVar13 + 0x10);
              fVar24 = fVar24 * *(float *)(lVar13 + 0x14);
              fVar25 = fVar25 * *(float *)(lVar13 + 0x18);
              fVar27 = fVar22 * fVar24 - fVar30 * fVar26;
              fVar28 = fVar30 * fVar25 - fVar19 * fVar24;
              fVar29 = fVar19 * fVar26 - fVar22 * fVar25;
              fVar28 = fVar28 + fVar28;
              fVar29 = fVar29 + fVar29;
              fVar27 = fVar27 + fVar27;
              fVar17 = fVar17 - fVar16;
              fVar26 = *pfVar7 + fVar17 * (fVar26 + fVar21 * fVar28 +
                                          (fVar30 * fVar27 - fVar19 * fVar29));
              fVar24 = pfVar7[1] +
                       fVar17 * (fVar24 + fVar21 * fVar29 + (fVar19 * fVar28 - fVar22 * fVar27));
              fVar25 = pfVar7[2] +
                       fVar17 * (fVar25 + fVar21 * fVar27 + (fVar22 * fVar29 - fVar30 * fVar28));
              if (DAT_086d90cb == '\0') {
                FUN_0335b6c8(&DAT_083ce8b0,1);
                DataMemoryBarrier(2,3);
                DAT_086d90cb = '\x01';
              }
              fVar23 = fVar23 - fVar24;
              fVar17 = unaff_s8 - fVar25;
              fVar22 = (float)uStack0000000000000010 - fVar26;
              if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                FUN_033b9870();
              }
              fVar19 = SQRT(fVar17 * fVar17 + fVar22 * fVar22 + fVar23 * fVar23);
              if (fVar16 < fVar19) {
                fVar16 = fVar16 / fVar19;
                unaff_s8 = fVar25 + fVar17 * fVar16;
                fStack0000000000000004 = fVar24 + fVar23 * fVar16;
                uStack0000000000000010 = (ulong)(uint)(fVar26 + fVar22 * fVar16);
              }
            }
          }
        }
        else if ((iStack0000000000000048 == 2) && (fVar22 <= fStack000000000000004c)) {
          puVar8 = (undefined8 *)
                   (*(long *)(param_3 + 0xe) + (long)(in_stack_00000090._4_4_ + iVar15) * 0xc);
          uVar20 = *puVar8;
          fVar19 = *(float *)(puVar8 + 1);
          pfVar2 = (float *)(*(long *)(param_3 + 0x2e) + lVar12 * 0x10);
          fVar25 = *pfVar2;
          fVar29 = pfVar2[3];
          puVar8 = (undefined8 *)(*(long *)(param_3 + 0x2a) + lVar12 * 0xc);
          fVar23 = (float)((ulong)uVar20 >> 0x20);
          fVar26 = (float)((ulong)*(undefined8 *)(pfVar2 + 1) >> 0x20);
          fVar24 = (float)*(undefined8 *)(pfVar2 + 1);
          fVar22 = (float)uVar20;
          fVar28 = fVar25 * fVar23 - fVar24 * fVar22;
          fVar21 = fVar19 * fVar24 - fVar26 * fVar23;
          fVar27 = fVar26 * fVar22 - fVar25 * fVar19;
          fVar28 = fVar28 + fVar28;
          fVar21 = fVar21 + fVar21;
          fVar27 = fVar27 + fVar27;
          uVar20 = *puVar8;
          bVar4 = true;
          if (((uint)ABS(fVar16) < 0x7f800001) && (bVar4 = false, !NAN(fVar17) && !NAN(fVar16))) {
            bVar4 = fVar17 < fVar16;
          }
          if (!bVar4) {
            fVar17 = fVar16;
          }
          fVar17 = fVar16 - fVar17;
          fVar22 = (float)uVar20 +
                   (fVar22 + fVar21 * fVar29 + (fVar24 * fVar28 - fVar26 * fVar27)) * fVar17;
          fVar26 = (float)((ulong)uVar20 >> 0x20) +
                   (fVar23 + fVar27 * fVar29 + (fVar26 * fVar21 - fVar25 * fVar28)) * fVar17;
          fVar25 = *(float *)(puVar8 + 1) +
                   fVar17 * (fVar19 + fVar29 * fVar28 + (fVar25 * fVar27 - fVar24 * fVar21));
          if (DAT_086d90cb == '\0') {
            FUN_0335b6c8(&DAT_083ce8b0,1);
            DataMemoryBarrier(2,3);
            DAT_086d90cb = '\x01';
          }
          fVar24 = (float)uStack0000000000000010 - fVar22;
          fVar17 = (float)(uStack0000000000000010 >> 0x20) - fVar26;
          fVar23 = unaff_s8 - fVar25;
          if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
            FUN_033b9870();
          }
          fVar21 = SQRT(fVar23 * fVar23 + fVar24 * fVar24 + fVar17 * fVar17);
          uVar18 = uStack0000000000000010;
          fVar19 = unaff_s8;
          if (fVar16 < fVar21) {
            fVar16 = fVar16 / fVar21;
            uVar18 = CONCAT44(fVar26 + fVar17 * fVar16,fVar22 + fVar24 * fVar16);
            fVar19 = fVar25 + fVar23 * fVar16;
          }
          fStack0000000000000004 = (float)(uVar18 >> 0x20);
          puVar8 = (undefined8 *)(*(long *)(param_3 + 0x4e) + lVar12 * 0xc);
          fVar25 = (fVar19 - unaff_s8) * DAT_012edacc;
          *puVar8 = CONCAT44((float)((ulong)*puVar8 >> 0x20) +
                             (fStack0000000000000004 - (float)(uStack0000000000000010 >> 0x20)) *
                             0.7,(float)*puVar8 +
                                 ((float)uVar18 - (float)uStack0000000000000010) * 0.7);
          *(float *)(puVar8 + 1) = fVar25 + *(float *)(puVar8 + 1);
          unaff_s8 = fVar19;
          uStack0000000000000010 = uVar18;
        }
        puVar9 = (undefined4 *)(*(long *)(param_3 + 0x4a) + lVar12 * 0xc);
        *puVar9 = (int)uStack0000000000000010;
        puVar9[1] = fStack0000000000000004;
        puVar9[2] = unaff_s8;
      }
    }
  }
  return;
}


