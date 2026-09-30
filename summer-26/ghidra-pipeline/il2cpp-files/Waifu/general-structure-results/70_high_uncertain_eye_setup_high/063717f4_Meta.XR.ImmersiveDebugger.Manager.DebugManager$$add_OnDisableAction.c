/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$add_OnDisableAction
ENTRY_POINT: 063717f4
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_DebugManager__add_OnDisableAction(float param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  float *pfVar6;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined8 uVar15;
  float unaff_s12;
  float unaff_s13;
  float fVar16;
  float unaff_s14;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000050;
  uint uStack0000000000000070;
  int iStack0000000000000074;
  int iStack0000000000000078;
  int iStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  int iStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  int in_stack_000000c0;
  
  do {
    param_1 = unaff_s11 / param_1;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if ((uint)ABS(param_1) < 0x7f800001) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(param_1)) {
        bVar2 = param_1 < 1.0;
        bVar3 = param_1 == 1.0;
        bVar4 = false;
      }
    }
    fVar8 = 1.0;
    if (bVar3 || bVar2 != bVar4) {
      fVar8 = param_1;
    }
    bVar2 = true;
    if (((uint)ABS(fVar8) < 0x7f800001) && (bVar2 = false, !NAN(fVar8))) {
      bVar2 = fVar8 < 0.0;
    }
    fVar16 = 0.0;
    if (!bVar2) {
      fVar16 = fVar8;
    }
    fVar8 = (float)FUN_06358bac(fVar16,in_stack_00000008,0);
    fVar8 = unaff_s13 * fVar8;
LAB_06371730:
    do {
      if (unaff_s9 <= fVar8) {
        iVar1 = 0;
        if ((unaff_w22 & 2) != 0) {
          iVar1 = unaff_w24 + 1;
        }
        *(int *)(in_stack_00000020 + (long)iVar1 * 4) = (int)unaff_x27;
        pfVar6 = (float *)(in_stack_00000018 + (long)iVar1 * (long)(int)unaff_x28);
        *pfVar6 = unaff_s12;
        pfVar6[1] = unaff_s10;
        pfVar6[2] = unaff_s14;
        *(float *)(in_stack_00000010 + (long)iVar1 * 4) = fVar8;
        if ((unaff_w22 >> 1 & 1) == 0) {
          unaff_w25 = 1;
          fStack000000000000002c = fStack00000000000000a8;
        }
        else {
          unaff_w24 = unaff_w24 + 1;
        }
      }
LAB_06371850:
      do {
        do {
          unaff_x27 = unaff_x27 + 1;
          unaff_x26 = unaff_x26 + 0x50;
          if (*(int *)(unaff_x21 + 0x90) <= unaff_x27) {
            in_stack_000000c0 = unaff_w25 + unaff_w24;
            memmove((void *)(*(long *)(unaff_x21 + 0x40) + (long)unaff_w19 * 0x54),&stack0x000000c0,
                    0x54);
            *(uint *)(unaff_x20 + 0x30) =
                 *(uint *)(unaff_x20 + 0x30) & 0xffe00000 |
                 *(uint *)(unaff_x20 + 0x30) & 0xfffff | (uint)(0 < in_stack_000000c0) << 0x14;
            return;
          }
          memcpy(&stack0x00000070,(void *)(*(long *)(unaff_x21 + 0x88) + unaff_x26),0x50);
          unaff_w22 = uStack0000000000000070;
        } while (((uStack0000000000000070 & 1) == 0) ||
                ((2 < unaff_w24 && ((uStack0000000000000070 >> 1 & 1) != 0))));
        puVar5 = (undefined8 *)(*(long *)(unaff_x21 + 0x50) + iStack000000000000007c * unaff_x28);
        pfVar6 = (float *)(*(long *)(unaff_x21 + 0x60) + (long)iStack000000000000007c * 0x10);
        uVar15 = *puVar5;
        fVar8 = *(float *)(puVar5 + 1);
        fVar16 = *pfVar6;
        uVar22 = *(undefined8 *)(pfVar6 + 1);
        fVar17 = pfVar6[3];
        if (*(char *)(unaff_x29 + 0xcb) == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          *(undefined1 *)(unaff_x29 + 0xcb) = 1;
        }
        if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar8 = unaff_s8 - fVar8;
        fVar23 = (float)((ulong)uVar22 >> 0x20);
        fVar19 = (float)in_stack_00000050 - (float)uVar15;
        fVar20 = (float)((ulong)in_stack_00000050 >> 0x20) - (float)((ulong)uVar15 >> 0x20);
        unaff_s11 = SQRT(fVar8 * fVar8 + fVar19 * fVar19 + fVar20 * fVar20);
        fVar21 = (float)uVar22;
        if (iStack0000000000000078 == 1) {
          if (*(char *)(unaff_x29 + 0xcb) == '\0') {
            FUN_0335b6c8(&DAT_083ce8b0,1);
            DataMemoryBarrier(2,3);
            *(undefined1 *)(unaff_x29 + 0xcb) = 1;
          }
          if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
            FUN_033b9870();
          }
          if (fStack0000000000000080 < unaff_s11) goto LAB_06371850;
        }
        else {
          if (iStack0000000000000078 != 0) goto LAB_06371850;
          fVar7 = 1.0 / (fVar17 * fVar17 + fVar23 * fVar23 + fVar16 * fVar16 + fVar21 * fVar21);
          fVar18 = fVar7 * -fVar16;
          fVar10 = -fVar21 * fVar7;
          fVar11 = -fVar23 * fVar7;
          fVar7 = fVar17 * fVar7;
          fVar12 = fVar18 * fVar20 - fVar19 * fVar10;
          fVar13 = fVar8 * fVar10 - fVar20 * fVar11;
          fVar14 = fVar19 * fVar11 - fVar8 * fVar18;
          fVar13 = fVar13 + fVar13;
          fVar14 = fVar14 + fVar14;
          fVar12 = fVar12 + fVar12;
          if ((fStack0000000000000088 <
               ABS(fVar8 + fVar7 * fVar12 + (fVar18 * fVar14 - fVar10 * fVar13))) ||
             (uVar9 = CONCAT44(fVar20 + fVar14 * fVar7 + (fVar11 * fVar13 - fVar18 * fVar12),
                               fVar19 + fVar13 * fVar7 + (fVar10 * fVar12 - fVar11 * fVar14)) &
                      0x7fffffff7fffffff,
             fStack0000000000000084 < (float)(uVar9 >> 0x20) ||
             fStack0000000000000080 < (float)uVar9)) goto LAB_06371850;
        }
        if ((fStack000000000000002c < fStack00000000000000a8) && ((unaff_w22 >> 1 & 1) == 0))
        goto LAB_06371850;
        if (iStack00000000000000a4 != 1) {
          if (iStack00000000000000a4 == 0) {
            fVar8 = fVar16 * fStack000000000000009c - fVar21 * fStack0000000000000098;
            fVar19 = fVar21 * fStack00000000000000a0 - fVar23 * fStack000000000000009c;
            fVar20 = fVar23 * fStack0000000000000098 - fVar16 * fStack00000000000000a0;
            fVar19 = fVar19 + fVar19;
            fVar20 = fVar20 + fVar20;
            fVar8 = fVar8 + fVar8;
            unaff_s12 = fStack0000000000000098 + fVar17 * fVar19 +
                        (fVar21 * fVar8 - fVar23 * fVar20);
            unaff_s10 = fStack000000000000009c + fVar17 * fVar20 +
                        (fVar23 * fVar19 - fVar16 * fVar8);
            unaff_s14 = fStack00000000000000a0 + fVar17 * fVar8 +
                        (fVar16 * fVar20 - fVar21 * fVar19);
            fVar8 = fStack000000000000008c;
            goto LAB_06371730;
          }
          goto LAB_06371850;
        }
      } while (unaff_s11 < fStack0000000000000028);
      if (*(char *)(unaff_x29 + 0xcb) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x29 + 0xcb) = 1;
      }
      if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar16 = 1.0 / unaff_s11;
      unaff_s12 = fVar19 * fVar16;
      unaff_s10 = fVar20 * fVar16;
      unaff_s14 = fVar8 * fVar16;
      fVar8 = fStack000000000000008c;
    } while (((iStack00000000000000a4 != 1) || (iStack0000000000000074 != 2)) ||
            (unaff_s13 = fStack000000000000008c, param_1 = fStack00000000000000ac,
            fStack00000000000000ac <= unaff_s9));
  } while( true );
}


