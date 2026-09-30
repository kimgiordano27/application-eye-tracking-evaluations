/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$remove_OnImmersiveDebuggerEnabledChanged
ENTRY_POINT: 06352e58
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__remove_OnImmersiveDebuggerEnabledChanged
               (long param_1,float *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int unaff_w20;
  long lVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 unaff_d9;
  float fVar28;
  float unaff_s10;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fStack000000000000001c;
  float fStack0000000000000024;
  uint uStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000060;
  int in_stack_00000098;
  undefined8 in_stack_000000c8;
  
  if ((*(uint *)(param_1 + (long)param_3 * 4) & 7) == 1) {
    lVar18 = (long)unaff_w20;
    lVar15 = (long)*(int *)(*(long *)(param_2 + 0x14) + lVar18 * 4);
    lVar10 = *(long *)(param_2 + 0x10) + lVar15 * 0xfc;
    if ((-1 < (short)*(ushort *)(lVar10 + 0xd4)) &&
       ((int)param_2[1] < *(int *)(*(long *)(param_2 + 0x10) + lVar15 * 0xfc + 0x88))) {
      uStack0000000000000028 = *(uint *)(lVar10 + 0x30);
      iVar4 = *(int *)(lVar10 + 4);
      fVar34 = *(float *)(lVar10 + 0x50);
      memcpy(&stack0x00000050,
             (void *)(*(long *)(param_2 + 8) + (ulong)*(ushort *)(lVar10 + 0xd4) * 0xb0),0xb0);
      if (param_2[2] == 1.4013e-45) {
        if (in_stack_00000098 != 1) {
          return;
        }
        puVar13 = (undefined8 *)&stack0x000000ac;
        puVar14 = &stack0x000000bc;
        puVar16 = (undefined8 *)&stack0x0000009c;
        puVar17 = (undefined8 *)&stack0x000000a4;
      }
      else if (param_2[2] == 0.0) {
        puVar13 = (undefined8 *)&stack0x00000078;
        puVar14 = &stack0x00000088;
        puVar16 = (undefined8 *)&stack0x00000068;
        puVar17 = (undefined8 *)&stack0x00000070;
      }
      else {
        if (in_stack_000000c8._4_4_ != 1) {
          return;
        }
        puVar13 = (undefined8 *)&stack0x000000e0;
        puVar14 = &stack0x000000f0;
        puVar16 = (undefined8 *)&stack0x000000d0;
        puVar17 = (undefined8 *)&stack0x000000d8;
      }
      in_stack_00000040 = *puVar16;
      in_stack_00000048 = *puVar17;
      uVar11 = *puVar13;
      iVar2 = (unaff_w20 - iVar4) + *(int *)(puVar14 + 4);
      iVar5 = *(int *)(*(long *)(param_2 + 0xc) + (long)iVar2 * 8 + 4);
      if (0 < iVar5) {
        uVar25 = *(undefined4 *)(*(long *)(param_2 + 0x1c) + lVar18 * 4);
        iVar2 = *(int *)(*(long *)(param_2 + 0xc) + (long)iVar2 * 8);
        fVar29 = *(float *)(*(long *)(param_2 + 0x20) + lVar18 * 4);
        fVar20 = (float)FUN_06358bac(uVar25,&stack0x00000040,0);
        fVar20 = fVar20 * *param_2;
        bVar7 = false;
        bVar8 = false;
        bVar9 = false;
        if ((uint)ABS(fVar20) < 0x7f800001) {
          bVar7 = false;
          bVar8 = false;
          bVar9 = true;
          if (!NAN(fVar20)) {
            bVar7 = fVar20 < 1.0;
            bVar8 = fVar20 == 1.0;
            bVar9 = false;
          }
        }
        fVar21 = 1.0;
        if (bVar8 || bVar7 != bVar9) {
          fVar21 = fVar20;
        }
        bVar7 = true;
        if (((uint)ABS(fVar21) < 0x7f800001) && (bVar7 = false, !NAN(fVar21))) {
          bVar7 = fVar21 < 0.0;
        }
        fStack0000000000000024 = 0.0;
        if (!bVar7) {
          fStack0000000000000024 = fVar21;
        }
        fStack000000000000003c = 0.0;
        fVar20 = (float)FUN_06358bac(uVar25,(ulong)&stack0x00000050 | 4,0);
        fStack0000000000000030 = 0.0;
        fStack0000000000000034 = 0.0;
        pfVar12 = (float *)(*(long *)(param_2 + 0x24) + lVar18 * 0xc);
        fVar21 = *pfVar12;
        iVar19 = 0;
        uVar22 = *(undefined8 *)(pfVar12 + 1);
        fStack000000000000002c = DAT_012edb5c;
        fStack000000000000001c = unaff_s10;
        do {
          puVar1 = (uint *)(*(long *)(param_2 + 4) +
                           (long)(iVar2 + (int)((ulong)uVar11 >> 0x20) + iVar19) * 8);
          uVar6 = *puVar1;
          fVar27 = (float)unaff_d9;
          fVar28 = (float)((ulong)unaff_d9 >> 0x20);
          if ((uVar6 & 0xffff) != 0 || uVar6 >> 0x10 != 0) {
            fVar32 = (float)puVar1[1];
            iVar3 = (uVar6 >> 0x10) + iVar4;
            puVar13 = (undefined8 *)(*(long *)(param_2 + 0x28) + (long)iVar3 * 0xc);
            uVar26 = *puVar13;
            fVar33 = *(float *)(puVar13 + 1);
            if (DAT_086d90cb == '\0') {
              FUN_0335b6c8(&DAT_083ce8b0,1);
              DataMemoryBarrier(2,3);
              DAT_086d90cb = '\x01';
            }
            if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
              FUN_033b9870();
            }
            fVar30 = (float)uVar26 - fVar27;
            fVar31 = (float)((ulong)uVar26 >> 0x20) - fVar28;
            fVar33 = fVar33 - unaff_s10;
            fVar36 = SQRT(fVar33 * fVar33 + fVar30 * fVar30 + fVar31 * fVar31);
            if (fStack000000000000002c <= fVar36) {
              lVar10 = (long)iVar3;
              fVar32 = fVar34 * fVar32;
              if ((uStack0000000000000028 >> 3 & 1) != 0) {
                pfVar12 = (float *)(*(long *)(param_2 + 0x24) + lVar10 * 0xc);
                fVar35 = *pfVar12;
                uVar26 = *(undefined8 *)(pfVar12 + 1);
                if (DAT_086d90cb == '\0') {
                  FUN_0335b6c8(&DAT_083ce8b0,1);
                  DataMemoryBarrier(2,3);
                  DAT_086d90cb = '\x01';
                }
                if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                fVar35 = fVar35 - fVar21;
                fVar23 = (float)uVar26 - (float)uVar22;
                fVar24 = (float)((ulong)uVar26 >> 0x20) - (float)((ulong)uVar22 >> 0x20);
                fVar32 = (fVar32 + SQRT(fVar24 * fVar24 + fVar35 * fVar35 + fVar23 * fVar23)) * 0.5;
                unaff_s10 = fStack000000000000001c;
              }
              fVar35 = (float)FUN_06358bac(*(undefined4 *)(*(long *)(param_2 + 0x1c) + lVar10 * 4),
                                           (ulong)&stack0x00000050 | 4,0);
              fVar35 = fVar35 + *(float *)(*(long *)(param_2 + 0x20) + lVar10 * 4) * 5.0;
              fVar36 = ((fVar36 - fVar32) *
                       fStack0000000000000024 * (fVar35 / (fVar29 * 5.0 + fVar20 + fVar35))) /
                       fVar36;
              fStack0000000000000030 = fStack0000000000000030 + fVar30 * fVar36;
              fStack0000000000000034 = fStack0000000000000034 + fVar31 * fVar36;
              fStack000000000000003c = fStack000000000000003c + fVar33 * fVar36;
            }
          }
          iVar19 = iVar19 + 1;
        } while (iVar5 != iVar19);
        fVar34 = (float)iVar5;
        fVar29 = unaff_s10 + fStack000000000000003c / fVar34;
        fVar20 = fVar27 + fStack0000000000000030 / fVar34;
        fVar34 = fVar28 + fStack0000000000000034 / fVar34;
        puVar13 = (undefined8 *)(*(long *)(param_2 + 0x2c) + lVar18 * 0xc);
        *puVar13 = CONCAT44(fVar34,fVar20);
        *(float *)(puVar13 + 1) = fVar29;
        puVar13 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar18 * 0xc);
        in_stack_00000060._4_4_ = 1.0 - in_stack_00000060._4_4_;
        *puVar13 = CONCAT44((float)((ulong)*puVar13 >> 0x20) +
                            (fVar34 - fVar28) * in_stack_00000060._4_4_,
                            (float)*puVar13 + (fVar20 - fVar27) * in_stack_00000060._4_4_);
        *(float *)(puVar13 + 1) =
             (fVar29 - unaff_s10) * in_stack_00000060._4_4_ + *(float *)(puVar13 + 1);
      }
    }
  }
  return;
}


