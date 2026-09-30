/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ReceiveAnchorUpdatedCallback
ENTRY_POINT: 0146656c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ReceiveAnchorUpdatedCallback
               (undefined1 param_1 [16],float param_2)

{
  long unaff_x20;
  float fVar1;
  double dVar2;
  float fVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar8;
  double unaff_d13;
  float unaff_s15;
  float fVar9;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  double in_stack_00000018;
  
  fVar9 = (float)in_stack_00000018;
  if (((long)in_stack_00000018 & 1U) != 0) {
    fVar9 = (float)in_stack_00000018 + param_2;
  }
  fVar6 = unaff_s11 / unaff_s9;
  dVar2 = modf((double)fVar6,&stack0x00000018);
  if (0.0 <= fVar6) {
    if (dVar2 == unaff_d13) {
      fVar6 = 1.0;
      goto LAB_014665f4;
    }
    fVar1 = (float)(int)(fVar6 + 0.5);
  }
  else if (dVar2 == -0.5) {
    fVar6 = -1.0;
LAB_014665f4:
    fVar1 = (float)in_stack_00000018;
    if (((long)in_stack_00000018 & 1U) != 0) {
      fVar1 = (float)in_stack_00000018 + fVar6;
    }
  }
  else {
    fVar1 = (float)(int)(fVar6 + -0.5);
  }
  fVar6 = (fStack0000000000000008 - in_stack_00000000._4_4_) / unaff_s10;
  fVar9 = unaff_s15 + fStack0000000000000014 * fVar9;
  fStack000000000000000c = fStack000000000000000c + unaff_s9 * fVar1;
  dVar2 = modf((double)fVar6,&stack0x00000018);
  if (0.0 <= fVar6) {
    if (dVar2 != unaff_d13) {
      fVar6 = (float)(int)(fVar6 + 0.5);
      goto LAB_014666b4;
    }
    fVar1 = 1.0;
  }
  else {
    if (dVar2 != -0.5) {
      fVar6 = (float)(int)(fVar6 + -0.5);
      goto LAB_014666b4;
    }
    fVar1 = -1.0;
  }
  fVar6 = (float)in_stack_00000018;
  if (((long)in_stack_00000018 & 1U) != 0) {
    fVar6 = (float)in_stack_00000018 + fVar1;
  }
LAB_014666b4:
  fVar7 = fStack0000000000000010 + unaff_s10 * fVar6;
  fVar6 = (float)FUN_02687a80();
  fVar1 = (float)FUN_02687a8c();
  fVar3 = fVar9 - fStack0000000000000014;
  fStack0000000000000008 = fVar3;
  if (fVar9 <= fVar6 - fVar1) {
    fStack0000000000000008 = fVar9;
  }
  FUN_02687a80();
  fVar6 = fVar3;
  FUN_02687a8c();
  fVar9 = fStack000000000000000c - unaff_s9;
  if (fStack000000000000000c <= fVar3 - fVar6) {
    fVar9 = fStack000000000000000c;
  }
  FUN_02687a80();
  fVar1 = fStack0000000000000010;
  FUN_02687a8c();
  fVar3 = fVar7 - unaff_s10;
  fVar6 = fVar3;
  if (fVar7 <= fStack0000000000000010 - fVar1) {
    fVar6 = fVar7;
  }
  fVar7 = (float)FUN_02687be0();
  FUN_02687be0();
  FUN_02687be0();
  fVar8 = fVar1 / unaff_s10;
  if (DAT_03775e60 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775e60 = '\x01';
  }
  fVar8 = fVar7 / fStack0000000000000014 + fVar3 / unaff_s9 + fVar8;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (((float)(int)fVar8 != INFINITY) && (200 < (int)fVar8)) {
    FUN_0269e21c(fStack0000000000000014 * 0.5 + *(float *)(unaff_x20 + 0x14),
                 unaff_s9 * 0.5 + *(float *)(unaff_x20 + 0x18),
                 unaff_s10 * 0.5 + *(float *)(unaff_x20 + 0x1c),fStack0000000000000014,0);
    return;
  }
  fVar3 = (float)FUN_02687a80();
  fVar7 = (float)FUN_02687a8c();
  if (fStack0000000000000008 < fVar3 + fVar7) {
    uVar4 = (ulong)(uint)(unaff_s9 * 0.5);
    do {
      fVar7 = (float)uVar4;
      FUN_02687a80();
      fVar3 = fVar7;
      FUN_02687a8c();
      uVar4 = (ulong)(uint)fVar9;
      if (fVar9 < fVar7 + fVar3) {
        fVar3 = fVar1;
        fVar7 = fVar9;
        do {
          FUN_02687a80();
          fVar1 = fVar3;
          FUN_02687a8c();
          uVar5 = (ulong)(uint)fVar6;
          if (fVar6 < fVar3 + fVar1) {
            uVar4 = (ulong)(uint)(unaff_s9 * 0.5 + fVar7);
            fVar3 = fVar6;
            do {
              fVar8 = unaff_s10 * 0.5 + fVar3;
              uVar5 = uVar4;
              FUN_0269e21c(fStack0000000000000014 * 0.5 + fStack0000000000000008,uVar4,fVar8,
                           fStack0000000000000014,0);
              fVar3 = unaff_s10 + fVar3;
              FUN_02687a80();
              fVar1 = fVar8;
              FUN_02687a8c();
            } while (fVar3 < fVar8 + fVar1);
          }
          fVar7 = unaff_s9 + fVar7;
          FUN_02687a80();
          uVar4 = uVar5;
          FUN_02687a8c();
          fVar3 = fVar1;
        } while (fVar7 < (float)uVar5 + (float)uVar4);
      }
      fStack0000000000000008 = fStack0000000000000014 + fStack0000000000000008;
      fVar3 = (float)FUN_02687a80();
      fVar7 = (float)FUN_02687a8c();
    } while (fStack0000000000000008 < fVar3 + fVar7);
  }
  return;
}


