/*
FUNCTION_NAME: OVRPlugin$$GuidToUuidString
ENTRY_POINT: 04f58a8c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GuidToUuidString(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
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
  
  fVar8 = in_stack_00000028;
  uVar2 = in_stack_00000010;
  fVar7 = fStack0000000000000024;
  fVar6 = fStack0000000000000020;
  fVar5 = fStack000000000000001c;
  fVar16 = fStack0000000000000018;
  if (unaff_x21 != 0) {
    uVar1 = in_stack_00000010 >> 0x20;
    *(undefined1 *)(unaff_x21 + 0x10) = 0;
    lVar9 = FUN_05c89340();
    if (lVar9 != 0) {
      fVar13 = (float)FUN_05c9bf94(lVar9,0);
      fVar15 = (float)(uVar2 >> 0x20);
      FUN_04f65d9c(uVar2 & 0xffffffff,uVar1,fVar16,fVar13,param_2,param_3);
      *(undefined4 *)(unaff_x21 + 0x44) = 0;
      *(undefined8 *)(unaff_x21 + 0x3c) = 0;
      if (*(long *)(unaff_x19 + 200) != 0) {
        lVar9 = *unaff_x20;
        uVar10 = FUN_05c89340(*(long *)(unaff_x19 + 200),0);
        uVar11 = FUN_05c89340();
        FUN_04f0d180(&stack0x00000010,uVar10,uVar11,0);
        fVar4 = fStack0000000000000018;
        uVar2 = in_stack_00000010;
        if (*(long *)(unaff_x19 + 200) != 0) {
          uVar3 = in_stack_00000010._4_4_;
          lVar12 = FUN_05c89340(*(long *)(unaff_x19 + 200),0);
          if (lVar12 != 0) {
            FUN_05c9a10c(lVar12,0);
            fVar14 = (float)FUN_05c7b504(0);
            in_stack_00000010 = 0;
            fStack0000000000000018 = 0.0;
            fStack000000000000001c = 0.0;
            in_stack_00000028 = 0.0;
            fStack0000000000000020 = 0.0;
            fStack0000000000000024 = 0.0;
            FUN_05c99d80(uVar2 & 0xffffffff,uVar3,fVar4,
                         (fVar7 * fVar15 + fVar5 * fVar13 + fVar8 * fVar14) - fVar6 * fVar16,
                         (fVar5 * fVar16 + fVar6 * fVar13 + fVar8 * fVar15) - fVar7 * fVar14,
                         (fVar6 * fVar14 + fVar7 * fVar13 + fVar8 * fVar16) - fVar5 * fVar15,
                         ((fVar8 * fVar13 - fVar5 * fVar14) - fVar6 * fVar15) - fVar7 * fVar16,
                         &stack0x00000010,0);
            if (lVar9 != 0) {
              *(ulong *)(lVar9 + 0x28) = CONCAT44(fStack000000000000001c,fStack0000000000000018);
              *(ulong *)(lVar9 + 0x20) = in_stack_00000010;
              *(ulong *)(lVar9 + 0x34) = CONCAT44(in_stack_00000028,fStack0000000000000024);
              *(ulong *)(lVar9 + 0x2c) = CONCAT44(fStack0000000000000020,fStack000000000000001c);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


