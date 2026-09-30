/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ClearPrefabs
ENTRY_POINT: 0146676c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ClearPrefabs
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long unaff_x20;
  float fVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar5;
  float fVar6;
  float fVar7;
  ulong unaff_d13;
  undefined8 in_stack_00000000;
  float in_stack_00000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  
  FUN_02687be0(param_4,0);
  fVar7 = (float)unaff_d13;
  fVar5 = param_3 / unaff_s10;
  if (DAT_03775e60 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775e60 = '\x01';
  }
  fVar5 = unaff_s11 / fVar7 + param_2 / unaff_s9 + fVar5;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (((float)(int)fVar5 != INFINITY) && (200 < (int)fVar5)) {
    FUN_0269e21c(fVar7 * 0.5 + *(float *)(unaff_x20 + 0x14),
                 unaff_s9 * 0.5 + *(float *)(unaff_x20 + 0x18),
                 unaff_s10 * 0.5 + *(float *)(unaff_x20 + 0x1c),0);
    return;
  }
  fVar5 = (float)FUN_02687a80();
  fVar1 = (float)FUN_02687a8c();
  if (in_stack_00000008 < fVar5 + fVar1) {
    fStack000000000000000c = unaff_s9 * 0.5;
    uVar2 = (ulong)(uint)fStack000000000000000c;
    do {
      fVar1 = (float)uVar2;
      FUN_02687a80();
      fVar5 = fVar1;
      FUN_02687a8c();
      uVar2 = (ulong)(uint)in_stack_00000000._4_4_;
      if (in_stack_00000000._4_4_ < fVar1 + fVar5) {
        fVar5 = param_3;
        fVar1 = in_stack_00000000._4_4_;
        do {
          FUN_02687a80();
          param_3 = fVar5;
          FUN_02687a8c();
          uVar3 = _fStack0000000000000010 & 0xffffffff;
          if (fStack0000000000000010 < fVar5 + param_3) {
            fVar6 = fStack000000000000000c + fVar1;
            fVar5 = fStack0000000000000010;
            do {
              fVar4 = unaff_s10 * 0.5 + fVar5;
              uVar3 = (ulong)(uint)fVar6;
              FUN_0269e21c(fVar7 * 0.5 + in_stack_00000008,(ulong)(uint)fVar6,fVar4,unaff_d13,0);
              fVar5 = unaff_s10 + fVar5;
              FUN_02687a80();
              param_3 = fVar4;
              FUN_02687a8c();
              unaff_d13 = _fStack0000000000000010 >> 0x20;
            } while (fVar5 < fVar4 + param_3);
          }
          fVar1 = unaff_s9 + fVar1;
          FUN_02687a80();
          uVar2 = uVar3;
          FUN_02687a8c();
          fVar5 = param_3;
        } while (fVar1 < (float)uVar3 + (float)uVar2);
      }
      in_stack_00000008 = (float)unaff_d13 + in_stack_00000008;
      fVar5 = (float)FUN_02687a80();
      fVar1 = (float)FUN_02687a8c();
    } while (in_stack_00000008 < fVar5 + fVar1);
  }
  return;
}


