/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetTranslation
ENTRY_POINT: 060ba0e8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_headPoseRelativeOffsetTranslation
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9)

{
  ulong uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x19;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  
  uVar8 = FUN_060ba2bc();
  if ((uVar8 & 1) != 0) {
    return;
  }
  FUN_0606b4ac(&stack0x00000010,param_5,param_6,0);
  fVar7 = in_stack_00000028;
  fVar6 = fStack0000000000000024;
  fVar5 = fStack0000000000000020;
  fVar4 = fStack000000000000001c;
  fVar16 = fStack0000000000000018;
  uVar8 = in_stack_00000010;
  lVar12 = *param_9;
  if (lVar12 != 0) {
    uVar1 = in_stack_00000010 >> 0x20;
    *(undefined1 *)(lVar12 + 0x10) = 0;
    lVar9 = FUN_071bd0d0();
    if (lVar9 != 0) {
      fVar13 = (float)FUN_071d0360(lVar9,0);
      fVar15 = (float)(uVar8 >> 0x20);
      FUN_060ba3bc(uVar8 & 0xffffffff,uVar1,fVar16,fVar13,param_2,param_3);
      *(undefined4 *)(lVar12 + 0x44) = 0;
      *(undefined8 *)(lVar12 + 0x3c) = 0;
      if (*(long *)(unaff_x19 + 200) != 0) {
        lVar12 = *param_9;
        uVar10 = FUN_071bd0d0(*(long *)(unaff_x19 + 200),0);
        uVar11 = FUN_071bd0d0();
        FUN_0606b5f4(&stack0x00000010,uVar10,uVar11,0);
        fVar3 = fStack0000000000000018;
        uVar8 = in_stack_00000010;
        if (*(long *)(unaff_x19 + 200) != 0) {
          uVar2 = in_stack_00000010._4_4_;
          lVar9 = FUN_071bd0d0(*(long *)(unaff_x19 + 200),0);
          if (lVar9 != 0) {
            FUN_071d05c8(lVar9,0);
            fVar14 = (float)FUN_071aee04(0);
            in_stack_00000010 = 0;
            fStack0000000000000018 = 0.0;
            fStack000000000000001c = 0.0;
            in_stack_00000028 = 0.0;
            fStack0000000000000020 = 0.0;
            fStack0000000000000024 = 0.0;
            FUN_071ce4a0(uVar8 & 0xffffffff,uVar2,fVar3,
                         (fVar6 * fVar15 + fVar4 * fVar13 + fVar7 * fVar14) - fVar5 * fVar16,
                         (fVar4 * fVar16 + fVar5 * fVar13 + fVar7 * fVar15) - fVar6 * fVar14,
                         (fVar5 * fVar14 + fVar6 * fVar13 + fVar7 * fVar16) - fVar4 * fVar15,
                         ((fVar7 * fVar13 - fVar4 * fVar14) - fVar5 * fVar15) - fVar6 * fVar16,
                         &stack0x00000010,0);
            if (lVar12 != 0) {
              *(ulong *)(lVar12 + 0x28) = CONCAT44(fStack000000000000001c,fStack0000000000000018);
              *(ulong *)(lVar12 + 0x20) = in_stack_00000010;
              *(ulong *)(lVar12 + 0x34) = CONCAT44(in_stack_00000028,fStack0000000000000024);
              *(ulong *)(lVar12 + 0x2c) = CONCAT44(fStack0000000000000020,fStack000000000000001c);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


