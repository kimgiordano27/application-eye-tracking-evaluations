/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 051b7b70
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__OverrideExternalCameraStaticPose
                (float param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5,
                undefined8 param_6,float param_7)

{
  float fVar1;
  long unaff_x19;
  long *unaff_x20;
  float fVar2;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  float in_stack_00000020;
  float in_stack_00000030;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  
  if (ABS(param_7 * (unaff_s10 / param_1) + unaff_s12 * param_5 + unaff_s13 * param_4) <=
      DAT_013ddee8) {
    FUN_051b85d4(param_6,param_2,param_3,in_stack_00000010._4_4_,uStack0000000000000018,
                 uStack000000000000001c,&stack0x00000030,0);
  }
  else {
    if (*(char *)(unaff_x19 + 0x22e) == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
      *(undefined1 *)(unaff_x19 + 0x22e) = 1;
    }
    fVar2 = in_stack_000000b8;
    fVar1 = fStack00000000000000b0;
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar2 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fStack00000000000000b4 * fStack00000000000000b4);
    if (fVar2 <= in_stack_00000020) {
      if (DAT_06a67148 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
        DAT_06a67148 = '\x01';
      }
      in_stack_00000030 = **(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
    }
    else {
      in_stack_00000030 = fVar1 / fVar2;
    }
  }
  return in_stack_00000030;
}


