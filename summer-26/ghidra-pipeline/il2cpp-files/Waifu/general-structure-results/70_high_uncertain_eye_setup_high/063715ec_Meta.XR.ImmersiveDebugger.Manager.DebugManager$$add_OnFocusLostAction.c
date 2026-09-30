/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$add_OnFocusLostAction
ENTRY_POINT: 063715ec
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_DebugManager__add_OnFocusLostAction
               (undefined8 param_1,undefined1 param_2 [16],float param_3,float param_4,
               undefined1 param_5 [16])

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
  ulong uVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float fVar11;
  float unaff_s10;
  float unaff_s11;
  undefined8 uVar12;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar13;
  float fVar14;
  undefined8 in_d18;
  undefined8 in_d19;
  float in_s20;
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
  
  fVar14 = param_5._4_4_;
  fVar10 = param_5._0_4_;
  fVar9 = param_2._4_4_;
  fVar11 = param_2._0_4_;
  do {
    fVar7 = (float)in_d19;
    uVar8 = CONCAT44((float)((ulong)in_d18 >> 0x20) + fVar14 * param_4 +
                     (fVar9 * fVar10 - (float)((ulong)param_1 >> 0x20) * param_3),
                     (float)in_d18 + fVar10 * param_4 + (fVar11 * param_3 - (float)param_1 * fVar14)
                    ) & 0x7fffffff7fffffff;
    if ((float)(uVar8 >> 0x20) <= fStack0000000000000084 && (float)uVar8 <= fStack0000000000000080)
    goto LAB_06371688;
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
      uVar12 = *puVar5;
      fVar11 = *(float *)(puVar5 + 1);
      unaff_s14 = *pfVar6;
      in_d19 = *(undefined8 *)(pfVar6 + 1);
      unaff_s15 = pfVar6[3];
      if (*(char *)(unaff_x29 + 0xcb) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x29 + 0xcb) = 1;
      }
      if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      in_s20 = unaff_s8 - fVar11;
      unaff_s12 = (float)((ulong)in_d19 >> 0x20);
      fVar14 = (float)in_stack_00000050 - (float)uVar12;
      unaff_s10 = (float)((ulong)in_stack_00000050 >> 0x20) - (float)((ulong)uVar12 >> 0x20);
      in_d18 = CONCAT44(unaff_s10,fVar14);
      unaff_s11 = SQRT(in_s20 * in_s20 + fVar14 * fVar14 + unaff_s10 * unaff_s10);
      fVar7 = (float)in_d19;
      if (iStack0000000000000078 == 1) {
        if (*(char *)(unaff_x29 + 0xcb) == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          *(undefined1 *)(unaff_x29 + 0xcb) = 1;
        }
        if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
          FUN_033b9870();
        }
        if (unaff_s11 <= fStack0000000000000080) {
LAB_06371688:
          if ((fStack00000000000000a8 <= fStack000000000000002c) || ((unaff_w22 >> 1 & 1) != 0)) {
            if (iStack00000000000000a4 == 1) {
              if (unaff_s11 < fStack0000000000000028) goto LAB_06371850;
              if (*(char *)(unaff_x29 + 0xcb) == '\0') {
                FUN_0335b6c8(&DAT_083ce8b0,1);
                DataMemoryBarrier(2,3);
                *(undefined1 *)(unaff_x29 + 0xcb) = 1;
              }
              if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
                FUN_033b9870();
              }
              fVar11 = fStack000000000000008c;
              fVar9 = unaff_s13 / unaff_s11;
              fVar14 = (float)in_d18 * fVar9;
              fVar10 = unaff_s10 * fVar9;
              fVar9 = in_s20 * fVar9;
              if (((iStack00000000000000a4 == 1) && (iStack0000000000000074 == 2)) &&
                 (unaff_s9 < fStack00000000000000ac)) {
                fVar7 = unaff_s11 / fStack00000000000000ac;
                bVar2 = false;
                bVar3 = false;
                bVar4 = false;
                if ((uint)ABS(fVar7) < 0x7f800001) {
                  bVar2 = false;
                  bVar3 = false;
                  bVar4 = true;
                  if (!NAN(fVar7)) {
                    bVar2 = fVar7 < 1.0;
                    bVar3 = fVar7 == 1.0;
                    bVar4 = false;
                  }
                }
                fVar13 = 1.0;
                if (bVar3 || bVar2 != bVar4) {
                  fVar13 = fVar7;
                }
                bVar2 = true;
                if (((uint)ABS(fVar13) < 0x7f800001) && (bVar2 = false, !NAN(fVar13))) {
                  bVar2 = fVar13 < 0.0;
                }
                fVar7 = 0.0;
                if (!bVar2) {
                  fVar7 = fVar13;
                }
                fVar7 = (float)FUN_06358bac(fVar7,in_stack_00000008,0);
                fVar11 = fVar11 * fVar7;
              }
            }
            else {
              if (iStack00000000000000a4 != 0) goto LAB_06371850;
              fVar11 = unaff_s14 * fStack000000000000009c - fVar7 * fStack0000000000000098;
              fVar9 = fVar7 * fStack00000000000000a0 - unaff_s12 * fStack000000000000009c;
              fVar13 = unaff_s12 * fStack0000000000000098 - unaff_s14 * fStack00000000000000a0;
              fVar9 = fVar9 + fVar9;
              fVar13 = fVar13 + fVar13;
              fVar11 = fVar11 + fVar11;
              fVar14 = fStack0000000000000098 + unaff_s15 * fVar9 +
                       (fVar7 * fVar11 - unaff_s12 * fVar13);
              fVar10 = fStack000000000000009c + unaff_s15 * fVar13 +
                       (unaff_s12 * fVar9 - unaff_s14 * fVar11);
              fVar9 = fStack00000000000000a0 + unaff_s15 * fVar11 +
                      (unaff_s14 * fVar13 - fVar7 * fVar9);
              fVar11 = fStack000000000000008c;
            }
            if (unaff_s9 <= fVar11) {
              iVar1 = 0;
              if ((unaff_w22 & 2) != 0) {
                iVar1 = unaff_w24 + 1;
              }
              *(int *)(in_stack_00000020 + (long)iVar1 * 4) = (int)unaff_x27;
              pfVar6 = (float *)(in_stack_00000018 + (long)iVar1 * (long)(int)unaff_x28);
              *pfVar6 = fVar14;
              pfVar6[1] = fVar10;
              pfVar6[2] = fVar9;
              *(float *)(in_stack_00000010 + (long)iVar1 * 4) = fVar11;
              if ((unaff_w22 >> 1 & 1) == 0) {
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
        goto LAB_06371850;
      }
      if (iStack0000000000000078 != 0) goto LAB_06371850;
      param_4 = unaff_s13 /
                (unaff_s15 * unaff_s15 +
                unaff_s12 * unaff_s12 + unaff_s14 * unaff_s14 + fVar7 * fVar7);
      fVar13 = param_4 * -unaff_s14;
      fVar11 = -fVar7 * param_4;
      fVar9 = -unaff_s12 * param_4;
      param_4 = unaff_s15 * param_4;
      param_3 = fVar13 * unaff_s10 - fVar14 * fVar11;
      param_1 = CONCAT44(fVar13,fVar9);
      fVar10 = in_s20 * fVar11 - unaff_s10 * fVar9;
      fVar14 = fVar14 * fVar9 - in_s20 * fVar13;
      fVar10 = fVar10 + fVar10;
      fVar14 = fVar14 + fVar14;
      param_3 = param_3 + param_3;
    } while (fStack0000000000000088 <
             ABS(in_s20 + param_4 * param_3 + (fVar13 * fVar14 - fVar11 * fVar10)));
  } while( true );
}


