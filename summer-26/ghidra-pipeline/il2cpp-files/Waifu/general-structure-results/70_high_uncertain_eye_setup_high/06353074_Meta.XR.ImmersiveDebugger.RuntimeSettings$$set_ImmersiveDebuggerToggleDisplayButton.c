/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_ImmersiveDebuggerToggleDisplayButton
ENTRY_POINT: 06353074
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ImmersiveDebuggerToggleDisplayButton(void)

{
  uint *puVar1;
  int iVar2;
  uint in_w8;
  undefined8 *puVar3;
  float *pfVar4;
  long in_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long lVar5;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 unaff_d9;
  float fVar10;
  float unaff_s10;
  float fVar11;
  float fVar12;
  float unaff_s12;
  float fVar13;
  float fVar14;
  float unaff_s14;
  float fVar15;
  float fVar16;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  uint uStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000060;
  
  do {
    iVar2 = (in_w8 >> 0x10) + unaff_w23;
    puVar3 = (undefined8 *)(in_x9 + (long)iVar2 * (long)(int)unaff_x27);
    uVar8 = *puVar3;
    fVar14 = *(float *)(puVar3 + 1);
    if (*(char *)(unaff_x29 + 0xcb) == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x29 + 0xcb) = 1;
    }
    if (*(int *)(*(long *)(unaff_x21 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar9 = (float)unaff_d9;
    fVar11 = (float)uVar8 - fVar9;
    fVar10 = (float)((ulong)unaff_d9 >> 0x20);
    fVar12 = (float)((ulong)uVar8 >> 0x20) - fVar10;
    fVar14 = fVar14 - unaff_s10;
    fVar16 = SQRT(fVar14 * fVar14 + fVar11 * fVar11 + fVar12 * fVar12);
    if (fStack000000000000002c <= fVar16) {
      lVar5 = (long)iVar2;
      fVar13 = unaff_s14 * unaff_s12;
      if ((uStack0000000000000028 >> 3 & 1) != 0) {
        pfVar4 = (float *)(*(long *)(unaff_x19 + 0x90) + lVar5 * unaff_x27);
        fVar15 = *pfVar4;
        uVar8 = *(undefined8 *)(pfVar4 + 1);
        if (*(char *)(unaff_x29 + 0xcb) == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          *(undefined1 *)(unaff_x29 + 0xcb) = 1;
        }
        if (*(int *)(*(long *)(unaff_x21 + 0x8b0) + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar15 = fVar15 - fStack0000000000000018;
        fVar6 = (float)uVar8 - (float)in_stack_00000010;
        fVar7 = (float)((ulong)uVar8 >> 0x20) - (float)((ulong)in_stack_00000010 >> 0x20);
        fVar13 = (fVar13 + SQRT(fVar7 * fVar7 + fVar15 * fVar15 + fVar6 * fVar6)) * 0.5;
        unaff_s10 = fStack000000000000001c;
      }
      fVar15 = (float)FUN_06358bac(*(undefined4 *)(*(long *)(unaff_x19 + 0x70) + lVar5 * 4));
      fVar15 = fVar15 + *(float *)(*(long *)(unaff_x19 + 0x80) + lVar5 * 4) * 5.0;
      fVar16 = ((fVar16 - fVar13) *
               fStack0000000000000024 * (fVar15 / (fStack0000000000000020 + fVar15))) / fVar16;
      in_stack_00000030 =
           CONCAT44((float)((ulong)in_stack_00000030 >> 0x20) + fVar12 * fVar16,
                    (float)in_stack_00000030 + fVar11 * fVar16);
      in_stack_00000038._4_4_ = in_stack_00000038._4_4_ + fVar14 * fVar16;
    }
    do {
      unaff_w26 = unaff_w26 + 1;
      if (unaff_w25 == unaff_w26) {
        fVar14 = (float)unaff_w25;
        fVar11 = unaff_s10 + in_stack_00000038._4_4_ / fVar14;
        fVar16 = fVar9 + (float)in_stack_00000030 / fVar14;
        fVar14 = fVar10 + (float)((ulong)in_stack_00000030 >> 0x20) / fVar14;
        puVar3 = (undefined8 *)(*(long *)(unaff_x19 + 0xb0) + unaff_x22 * 0xc);
        *puVar3 = CONCAT44(fVar14,fVar16);
        *(float *)(puVar3 + 1) = fVar11;
        puVar3 = (undefined8 *)(*(long *)(unaff_x19 + 0xc0) + unaff_x22 * 0xc);
        in_stack_00000060._4_4_ = 1.0 - in_stack_00000060._4_4_;
        *puVar3 = CONCAT44((float)((ulong)*puVar3 >> 0x20) +
                           (fVar14 - fVar10) * in_stack_00000060._4_4_,
                           (float)*puVar3 + (fVar16 - fVar9) * in_stack_00000060._4_4_);
        *(float *)(puVar3 + 1) =
             (fVar11 - unaff_s10) * in_stack_00000060._4_4_ + *(float *)(puVar3 + 1);
        return;
      }
      puVar1 = (uint *)(*(long *)(unaff_x19 + 0x10) + (long)(unaff_w28 + unaff_w26) * 8);
      in_w8 = *puVar1;
    } while ((in_w8 & 0xffff) == 0 && in_w8 >> 0x10 == 0);
    unaff_s12 = (float)puVar1[1];
    in_x9 = *(long *)(unaff_x19 + 0xa0);
  } while( true );
}


