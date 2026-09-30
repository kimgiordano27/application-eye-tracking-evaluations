/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetTranslation
ENTRY_POINT: 060ba0dc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_headPoseRelativeOffsetTranslation
               (undefined8 param_1,undefined1 param_2 [16],undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x19;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  ulong in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  
  if (*(long *)(param_4 + 0x140) != 0) {
    uVar14 = *(undefined4 *)(unaff_x19 + 0x148);
    uVar7 = FUN_060ba2bc(param_1,uVar14);
    if ((uVar7 & 1) != 0) {
      return;
    }
    FUN_0606b4ac(&stack0x00000010,param_5,param_6,0);
    fVar6 = in_stack_00000028;
    fVar5 = fStack0000000000000024;
    fVar4 = fStack0000000000000020;
    fVar3 = fStack000000000000001c;
    fVar16 = fStack0000000000000018;
    uVar7 = in_stack_00000010;
    lVar11 = *param_9;
    if (lVar11 != 0) {
      uVar1 = in_stack_00000010 >> 0x20;
      *(undefined1 *)(lVar11 + 0x10) = 0;
      lVar8 = FUN_071bd0d0();
      if (lVar8 != 0) {
        fVar12 = (float)FUN_071d0360(lVar8,0);
        fVar15 = (float)(uVar7 >> 0x20);
        FUN_060ba3bc(uVar7 & 0xffffffff,uVar1,fVar16,fVar12,uVar14,param_3);
        *(undefined4 *)(lVar11 + 0x44) = 0;
        *(undefined8 *)(lVar11 + 0x3c) = 0;
        if (*(long *)(unaff_x19 + 200) != 0) {
          lVar11 = *param_9;
          uVar9 = FUN_071bd0d0(*(long *)(unaff_x19 + 200),0);
          uVar10 = FUN_071bd0d0();
          FUN_0606b5f4(&stack0x00000010,uVar9,uVar10,0);
          fVar2 = fStack0000000000000018;
          uVar7 = in_stack_00000010;
          if (*(long *)(unaff_x19 + 200) != 0) {
            uVar14 = in_stack_00000010._4_4_;
            lVar8 = FUN_071bd0d0(*(long *)(unaff_x19 + 200),0);
            if (lVar8 != 0) {
              FUN_071d05c8(lVar8,0);
              fVar13 = (float)FUN_071aee04(0);
              in_stack_00000010 = 0;
              fStack0000000000000018 = 0.0;
              fStack000000000000001c = 0.0;
              in_stack_00000028 = 0.0;
              fStack0000000000000020 = 0.0;
              fStack0000000000000024 = 0.0;
              FUN_071ce4a0(uVar7 & 0xffffffff,uVar14,fVar2,
                           (fVar5 * fVar15 + fVar3 * fVar12 + fVar6 * fVar13) - fVar4 * fVar16,
                           (fVar3 * fVar16 + fVar4 * fVar12 + fVar6 * fVar15) - fVar5 * fVar13,
                           (fVar4 * fVar13 + fVar5 * fVar12 + fVar6 * fVar16) - fVar3 * fVar15,
                           ((fVar6 * fVar12 - fVar3 * fVar13) - fVar4 * fVar15) - fVar5 * fVar16,
                           &stack0x00000010,0);
              if (lVar11 != 0) {
                *(ulong *)(lVar11 + 0x28) = CONCAT44(fStack000000000000001c,fStack0000000000000018);
                *(ulong *)(lVar11 + 0x20) = in_stack_00000010;
                *(ulong *)(lVar11 + 0x34) = CONCAT44(in_stack_00000028,fStack0000000000000024);
                *(ulong *)(lVar11 + 0x2c) = CONCAT44(fStack0000000000000020,fStack000000000000001c);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


