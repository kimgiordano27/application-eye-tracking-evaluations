/*
FUNCTION_NAME: OVRNodeStateProperties$$GetUnityXRNodeStateVector3
ENTRY_POINT: 019adc98
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x019add20) */

bool OVRNodeStateProperties__GetUnityXRNodeStateVector3(float param_1,float param_2,float param_3)

{
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  float fVar1;
  float fVar2;
  float unaff_s8;
  float fVar3;
  float unaff_s9;
  float fVar4;
  float unaff_s10;
  float fVar5;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined8 in_stack_00000008;
  
  if (*(char *)(unaff_x21 + 0xe1a) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0xe1a) = 1;
  }
  fVar5 = (unaff_s8 + param_1) - unaff_s10;
  fVar4 = (unaff_s11 + param_3) - unaff_s9;
  in_stack_00000008._4_4_ = (unaff_s12 + param_2) - in_stack_00000008._4_4_;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar3 = *(float *)(unaff_x19 + 0x1c);
  fVar1 = tanf(*(float *)(unaff_x19 + 0x24) * DAT_028aa044);
  fVar2 = unaff_s13 / fVar3;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  return SQRT(in_stack_00000008._4_4_ * in_stack_00000008._4_4_ + fVar5 * fVar5 + fVar4 * fVar4) <=
         *(float *)(unaff_x19 + 0x20) + (fVar3 * fVar1 - *(float *)(unaff_x19 + 0x20)) * fVar2;
}


