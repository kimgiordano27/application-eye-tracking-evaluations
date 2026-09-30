/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$remove_OnFocusLostAction
ENTRY_POINT: 063716f0
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


void Meta_XR_ImmersiveDebugger_Manager_DebugManager__remove_OnFocusLostAction
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  float unaff_s9;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float unaff_s12;
  float fVar17;
  float unaff_s13;
  float unaff_s14;
  float fVar18;
  float unaff_s15;
  float fVar19;
  float fVar20;
  undefined8 in_d19;
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
  
code_r0x063716f0:
  fVar17 = param_3 + param_7 + ((float)in_d19 * param_4 - unaff_s12 * param_6);
  fVar14 = param_1 + param_8 + (unaff_s12 * param_5 - unaff_s14 * param_4);
  fVar18 = param_2 + unaff_s15 * param_4 + (unaff_s14 * param_6 - (float)in_d19 * param_5);
  do {
    if (unaff_s9 <= unaff_s13) {
      iVar1 = 0;
      if ((unaff_w22 & 2) != 0) {
        iVar1 = unaff_w24 + 1;
      }
      *(int *)(in_stack_00000020 + (long)iVar1 * 4) = (int)unaff_x27;
      pfVar6 = (float *)(in_stack_00000018 + (long)iVar1 * (long)(int)unaff_x28);
      *pfVar6 = fVar17;
      pfVar6[1] = fVar14;
      pfVar6[2] = fVar18;
      *(float *)(in_stack_00000010 + (long)iVar1 * 4) = unaff_s13;
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
      uVar16 = *puVar5;
      fVar18 = *(float *)(puVar5 + 1);
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
      fVar18 = unaff_s8 - fVar18;
      unaff_s12 = (float)((ulong)in_d19 >> 0x20);
      fVar17 = (float)in_stack_00000050 - (float)uVar16;
      fVar14 = (float)((ulong)in_stack_00000050 >> 0x20) - (float)((ulong)uVar16 >> 0x20);
      fVar15 = SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar14 * fVar14);
      fVar20 = (float)in_d19;
      if (iStack0000000000000078 == 1) {
        if (*(char *)(unaff_x29 + 0xcb) == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          *(undefined1 *)(unaff_x29 + 0xcb) = 1;
        }
        if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
          FUN_033b9870();
        }
        if (fStack0000000000000080 < fVar15) goto LAB_06371850;
      }
      else {
        if (iStack0000000000000078 != 0) goto LAB_06371850;
        fVar7 = 1.0 / (unaff_s15 * unaff_s15 +
                      unaff_s12 * unaff_s12 + unaff_s14 * unaff_s14 + fVar20 * fVar20);
        fVar19 = fVar7 * -unaff_s14;
        fVar9 = -fVar20 * fVar7;
        fVar10 = -unaff_s12 * fVar7;
        fVar7 = unaff_s15 * fVar7;
        fVar11 = fVar19 * fVar14 - fVar17 * fVar9;
        fVar12 = fVar18 * fVar9 - fVar14 * fVar10;
        fVar13 = fVar17 * fVar10 - fVar18 * fVar19;
        fVar12 = fVar12 + fVar12;
        fVar13 = fVar13 + fVar13;
        fVar11 = fVar11 + fVar11;
        if ((fStack0000000000000088 <
             ABS(fVar18 + fVar7 * fVar11 + (fVar19 * fVar13 - fVar9 * fVar12))) ||
           (uVar8 = CONCAT44(fVar14 + fVar13 * fVar7 + (fVar10 * fVar12 - fVar19 * fVar11),
                             fVar17 + fVar12 * fVar7 + (fVar9 * fVar11 - fVar10 * fVar13)) &
                    0x7fffffff7fffffff,
           fStack0000000000000084 < (float)(uVar8 >> 0x20) || fStack0000000000000080 < (float)uVar8)
           ) goto LAB_06371850;
      }
      if ((fStack000000000000002c < fStack00000000000000a8) && ((unaff_w22 >> 1 & 1) == 0))
      goto LAB_06371850;
      if (iStack00000000000000a4 != 1) {
        if (iStack00000000000000a4 == 0) {
          param_4 = unaff_s14 * fStack000000000000009c - fVar20 * fStack0000000000000098;
          param_5 = fVar20 * fStack00000000000000a0 - unaff_s12 * fStack000000000000009c;
          param_6 = unaff_s12 * fStack0000000000000098 - unaff_s14 * fStack00000000000000a0;
          param_5 = param_5 + param_5;
          param_6 = param_6 + param_6;
          param_4 = param_4 + param_4;
          param_7 = unaff_s15 * param_5;
          param_8 = unaff_s15 * param_6;
          param_2 = fStack00000000000000a0;
          param_1 = fStack000000000000009c;
          param_3 = fStack0000000000000098;
          unaff_s13 = fStack000000000000008c;
          goto code_r0x063716f0;
        }
        goto LAB_06371850;
      }
    } while (fVar15 < fStack0000000000000028);
    if (*(char *)(unaff_x29 + 0xcb) == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x29 + 0xcb) = 1;
    }
    if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar20 = fStack000000000000008c;
    fVar7 = 1.0 / fVar15;
    fVar17 = fVar17 * fVar7;
    fVar14 = fVar14 * fVar7;
    fVar18 = fVar18 * fVar7;
    unaff_s13 = fStack000000000000008c;
    if (((iStack00000000000000a4 == 1) && (iStack0000000000000074 == 2)) &&
       (unaff_s9 < fStack00000000000000ac)) {
      fVar15 = fVar15 / fStack00000000000000ac;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      if ((uint)ABS(fVar15) < 0x7f800001) {
        bVar2 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar15)) {
          bVar2 = fVar15 < 1.0;
          bVar3 = fVar15 == 1.0;
          bVar4 = false;
        }
      }
      fVar7 = 1.0;
      if (bVar3 || bVar2 != bVar4) {
        fVar7 = fVar15;
      }
      bVar2 = true;
      if (((uint)ABS(fVar7) < 0x7f800001) && (bVar2 = false, !NAN(fVar7))) {
        bVar2 = fVar7 < 0.0;
      }
      fVar15 = 0.0;
      if (!bVar2) {
        fVar15 = fVar7;
      }
      fVar15 = (float)FUN_06358bac(fVar15,in_stack_00000008,0);
      unaff_s13 = fVar20 * fVar15;
    }
  } while( true );
}


