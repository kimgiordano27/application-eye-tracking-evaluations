/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ReceiveCreatedRoom
ENTRY_POINT: 01466704
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ReceiveCreatedRoom
               (undefined1 param_1 [16],float param_2,float param_3)

{
  float fVar1;
  long unaff_x20;
  float fVar2;
  float fVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar8;
  float unaff_s12;
  float fVar9;
  ulong unaff_d13;
  float fStack0000000000000004;
  float in_stack_00000008;
  float fStack000000000000000c;
  ulong in_stack_00000010;
  
  FUN_02687a8c();
  fStack0000000000000004 = unaff_s12 - unaff_s9;
  if (unaff_s12 <= unaff_s11 - param_2) {
    fStack0000000000000004 = unaff_s12;
  }
  FUN_02687a80();
  fVar6 = param_3;
  FUN_02687a8c();
  fVar3 = unaff_s8 - unaff_s10;
  fVar1 = fVar3;
  if (unaff_s8 <= param_3 - fVar6) {
    fVar1 = unaff_s8;
  }
  fVar2 = (float)FUN_02687be0();
  FUN_02687be0();
  FUN_02687be0();
  fVar9 = (float)unaff_d13;
  fVar8 = fVar6 / unaff_s10;
  if (DAT_03775e60 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775e60 = '\x01';
  }
  fVar8 = fVar2 / fVar9 + fVar3 / unaff_s9 + fVar8;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (((float)(int)fVar8 != INFINITY) && (200 < (int)fVar8)) {
    FUN_0269e21c(fVar9 * 0.5 + *(float *)(unaff_x20 + 0x14),
                 unaff_s9 * 0.5 + *(float *)(unaff_x20 + 0x18),
                 unaff_s10 * 0.5 + *(float *)(unaff_x20 + 0x1c),0);
    return;
  }
  fVar3 = (float)FUN_02687a80();
  fVar2 = (float)FUN_02687a8c();
  if (in_stack_00000008 < fVar3 + fVar2) {
    fStack000000000000000c = unaff_s9 * 0.5;
    uVar4 = (ulong)(uint)fStack000000000000000c;
    do {
      fVar2 = (float)uVar4;
      FUN_02687a80();
      fVar3 = fVar2;
      FUN_02687a8c();
      uVar4 = (ulong)(uint)fStack0000000000000004;
      if (fStack0000000000000004 < fVar2 + fVar3) {
        fVar3 = fVar6;
        fVar2 = fStack0000000000000004;
        do {
          FUN_02687a80();
          fVar6 = fVar3;
          FUN_02687a8c();
          uVar5 = (ulong)(uint)fVar1;
          if (fVar1 < fVar3 + fVar6) {
            fVar8 = fStack000000000000000c + fVar2;
            fVar3 = fVar1;
            do {
              fVar7 = unaff_s10 * 0.5 + fVar3;
              uVar5 = (ulong)(uint)fVar8;
              FUN_0269e21c(fVar9 * 0.5 + in_stack_00000008,(ulong)(uint)fVar8,fVar7,unaff_d13,0);
              fVar3 = unaff_s10 + fVar3;
              FUN_02687a80();
              fVar6 = fVar7;
              FUN_02687a8c();
              unaff_d13 = in_stack_00000010 >> 0x20;
            } while (fVar3 < fVar7 + fVar6);
          }
          fVar2 = unaff_s9 + fVar2;
          FUN_02687a80();
          uVar4 = uVar5;
          FUN_02687a8c();
          fVar3 = fVar6;
        } while (fVar2 < (float)uVar5 + (float)uVar4);
      }
      in_stack_00000008 = (float)unaff_d13 + in_stack_00000008;
      fVar3 = (float)FUN_02687a80();
      fVar2 = (float)FUN_02687a8c();
    } while (in_stack_00000008 < fVar3 + fVar2);
  }
  return;
}


