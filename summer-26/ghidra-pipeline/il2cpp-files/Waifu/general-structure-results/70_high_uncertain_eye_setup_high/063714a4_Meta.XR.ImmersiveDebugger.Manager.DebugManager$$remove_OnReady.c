/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$remove_OnReady
ENTRY_POINT: 063714a4
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


void Meta_XR_ImmersiveDebugger_Manager_DebugManager__remove_OnReady(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  float *pfVar7;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  float unaff_s9;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float unaff_s13;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
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
    uVar2 = uStack0000000000000070;
    if (((uStack0000000000000070 & 1) != 0) &&
       ((unaff_w24 < 3 || ((uStack0000000000000070 >> 1 & 1) == 0)))) {
      puVar6 = (undefined8 *)(*(long *)(unaff_x21 + 0x50) + iStack000000000000007c * unaff_x28);
      pfVar7 = (float *)(*(long *)(unaff_x21 + 0x60) + (long)iStack000000000000007c * 0x10);
      uVar17 = *puVar6;
      fVar15 = *(float *)(puVar6 + 1);
      fVar18 = *pfVar7;
      uVar24 = *(undefined8 *)(pfVar7 + 1);
      fVar19 = pfVar7[3];
      if (*(char *)(unaff_x29 + 0xcb) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x29 + 0xcb) = 1;
      }
      if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar15 = unaff_s8 - fVar15;
      fVar25 = (float)((ulong)uVar24 >> 0x20);
      fVar21 = (float)in_stack_00000050 - (float)uVar17;
      fVar22 = (float)((ulong)in_stack_00000050 >> 0x20) - (float)((ulong)uVar17 >> 0x20);
      fVar16 = SQRT(fVar15 * fVar15 + fVar21 * fVar21 + fVar22 * fVar22);
      fVar23 = (float)uVar24;
      if (iStack0000000000000078 == 1) {
        if (*(char *)(unaff_x29 + 0xcb) == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          *(undefined1 *)(unaff_x29 + 0xcb) = 1;
        }
        if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
          FUN_033b9870();
        }
        if (fVar16 <= fStack0000000000000080) {
LAB_06371688:
          if ((fStack00000000000000a8 <= fStack000000000000002c) || ((uVar2 >> 1 & 1) != 0)) {
            if (iStack00000000000000a4 == 1) {
              if (fStack0000000000000028 <= fVar16) {
                if (*(char *)(unaff_x29 + 0xcb) == '\0') {
                  FUN_0335b6c8(&DAT_083ce8b0,1);
                  DataMemoryBarrier(2,3);
                  *(undefined1 *)(unaff_x29 + 0xcb) = 1;
                }
                if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
                  FUN_033b9870();
                }
                fVar18 = fStack000000000000008c;
                fVar19 = unaff_s13 / fVar16;
                fVar21 = fVar21 * fVar19;
                fVar22 = fVar22 * fVar19;
                fVar15 = fVar15 * fVar19;
                if (((iStack00000000000000a4 == 1) && (iStack0000000000000074 == 2)) &&
                   (unaff_s9 < fStack00000000000000ac)) {
                  fVar16 = fVar16 / fStack00000000000000ac;
                  bVar3 = false;
                  bVar4 = false;
                  bVar5 = false;
                  if ((uint)ABS(fVar16) < 0x7f800001) {
                    bVar3 = false;
                    bVar4 = false;
                    bVar5 = true;
                    if (!NAN(fVar16)) {
                      bVar3 = fVar16 < 1.0;
                      bVar4 = fVar16 == 1.0;
                      bVar5 = false;
                    }
                  }
                  fVar19 = 1.0;
                  if (bVar4 || bVar3 != bVar5) {
                    fVar19 = fVar16;
                  }
                  bVar3 = true;
                  if (((uint)ABS(fVar19) < 0x7f800001) && (bVar3 = false, !NAN(fVar19))) {
                    bVar3 = fVar19 < 0.0;
                  }
                  fVar16 = 0.0;
                  if (!bVar3) {
                    fVar16 = fVar19;
                  }
                  fVar19 = (float)FUN_06358bac(fVar16,in_stack_00000008,0);
                  fVar18 = fVar18 * fVar19;
                }
                goto LAB_06371730;
              }
            }
            else if (iStack00000000000000a4 == 0) {
              fVar15 = fVar18 * fStack000000000000009c - fVar23 * fStack0000000000000098;
              fVar16 = fVar23 * fStack00000000000000a0 - fVar25 * fStack000000000000009c;
              fVar8 = fVar25 * fStack0000000000000098 - fVar18 * fStack00000000000000a0;
              fVar16 = fVar16 + fVar16;
              fVar8 = fVar8 + fVar8;
              fVar15 = fVar15 + fVar15;
              fVar21 = fStack0000000000000098 + fVar19 * fVar16 + (fVar23 * fVar15 - fVar25 * fVar8)
              ;
              fVar22 = fStack000000000000009c + fVar19 * fVar8 + (fVar25 * fVar16 - fVar18 * fVar15)
              ;
              fVar15 = fStack00000000000000a0 + fVar19 * fVar15 + (fVar18 * fVar8 - fVar23 * fVar16)
              ;
              fVar18 = fStack000000000000008c;
LAB_06371730:
              if (unaff_s9 <= fVar18) {
                iVar1 = 0;
                if ((uVar2 & 2) != 0) {
                  iVar1 = unaff_w24 + 1;
                }
                *(int *)(in_stack_00000020 + (long)iVar1 * 4) = (int)unaff_x27;
                pfVar7 = (float *)(in_stack_00000018 + (long)iVar1 * (long)(int)unaff_x28);
                *pfVar7 = fVar21;
                pfVar7[1] = fVar22;
                pfVar7[2] = fVar15;
                *(float *)(in_stack_00000010 + (long)iVar1 * 4) = fVar18;
                if ((uVar2 >> 1 & 1) == 0) {
                  unaff_w25 = 1;
                  fStack000000000000002c = fStack00000000000000a8;
                }
                else {
                  unaff_w24 = unaff_w24 + 1;
                }
              }
              unaff_s13 = 1.0;
            }
          }
        }
      }
      else if (iStack0000000000000078 == 0) {
        fVar8 = unaff_s13 / (fVar19 * fVar19 + fVar25 * fVar25 + fVar18 * fVar18 + fVar23 * fVar23);
        fVar20 = fVar8 * -fVar18;
        fVar10 = -fVar23 * fVar8;
        fVar11 = -fVar25 * fVar8;
        fVar8 = fVar19 * fVar8;
        fVar12 = fVar20 * fVar22 - fVar21 * fVar10;
        fVar13 = fVar15 * fVar10 - fVar22 * fVar11;
        fVar14 = fVar21 * fVar11 - fVar15 * fVar20;
        fVar13 = fVar13 + fVar13;
        fVar14 = fVar14 + fVar14;
        fVar12 = fVar12 + fVar12;
        if ((ABS(fVar15 + fVar8 * fVar12 + (fVar20 * fVar14 - fVar10 * fVar13)) <=
             fStack0000000000000088) &&
           (uVar9 = CONCAT44(fVar22 + fVar14 * fVar8 + (fVar11 * fVar13 - fVar20 * fVar12),
                             fVar21 + fVar13 * fVar8 + (fVar10 * fVar12 - fVar11 * fVar14)) &
                    0x7fffffff7fffffff,
           (float)(uVar9 >> 0x20) <= fStack0000000000000084 &&
           (float)uVar9 <= fStack0000000000000080)) goto LAB_06371688;
      }
    }
    unaff_x27 = unaff_x27 + 1;
    unaff_x26 = unaff_x26 + 0x50;
    if (*(int *)(unaff_x21 + 0x90) <= unaff_x27) {
      in_stack_000000c0 = unaff_w25 + unaff_w24;
      memmove((void *)(*(long *)(unaff_x21 + 0x40) + (long)unaff_w19 * 0x54),&stack0x000000c0,0x54);
      *(uint *)(unaff_x20 + 0x30) =
           *(uint *)(unaff_x20 + 0x30) & 0xffe00000 |
           *(uint *)(unaff_x20 + 0x30) & 0xfffff | (uint)(0 < in_stack_000000c0) << 0x14;
      return;
    }
    memcpy(&stack0x00000070,(void *)(*(long *)(unaff_x21 + 0x88) + unaff_x26),0x50);
  } while( true );
}


