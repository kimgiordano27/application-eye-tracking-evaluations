/*
FUNCTION_NAME: OVRPlugin$$UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 0600e988
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0600ea34) */

float OVRPlugin__UpdateInsightPassthroughGeometryTransform
                (float param_1,undefined1 param_2 [16],float param_3)

{
  long unaff_x20;
  float fVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float unaff_s11;
  undefined8 in_stack_00000010;
  
  if (param_1 <= param_3) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    param_1 = **(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
  }
  else {
    param_1 = unaff_s11 / param_1;
  }
  uVar2 = FUN_0600d840();
  fVar1 = (float)FUN_05f58000(uVar2,0);
  fVar1 = fVar1 - (float)(int)(fVar1 / 360.0) * 360.0;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  fVar4 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
  uVar3 = (ulong)(uint)param_1;
  if ((fVar4 < fVar1) && (uVar3 = uVar2, ABS(fVar1 - fVar4) < ABS(360.0 - fVar1))) {
    uVar3 = FUN_0600d8ec();
  }
  fVar1 = (float)FUN_0600db00();
  return in_stack_00000010._4_4_ + (float)uVar3 * fVar1;
}


