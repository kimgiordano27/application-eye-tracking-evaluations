/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$MoveNext
ENTRY_POINT: 076ea594
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__MoveNext
               (float param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5)

{
  undefined8 uVar1;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  fVar6 = unaff_s13 - param_4;
  fVar3 = unaff_s12 - param_5;
  fVar5 = param_4;
  if (fVar6 <= param_4) {
    fVar5 = fVar6;
  }
  fVar4 = param_5;
  if (fVar3 <= param_5) {
    fVar4 = fVar3;
  }
  if (fVar4 <= fVar5) {
    fVar6 = *(float *)(unaff_x19 + 0x28);
    fVar5 = *(float *)(unaff_x19 + 0x2c);
    if (fVar3 <= param_5) {
      fVar5 = unaff_s12 - *(float *)(unaff_x19 + 0x2c);
    }
    fVar3 = fVar6;
    if ((fVar6 <= param_4) && (fVar3 = unaff_s13 - fVar6, param_4 <= unaff_s13 - fVar6)) {
      fVar3 = param_4;
    }
  }
  else {
    fVar4 = *(float *)(unaff_x19 + 0x2c);
    fVar3 = *(float *)(unaff_x19 + 0x28);
    if (fVar6 <= param_4) {
      fVar3 = unaff_s13 - *(float *)(unaff_x19 + 0x28);
    }
    fVar5 = fVar4;
    if ((fVar4 <= param_5) && (fVar5 = unaff_s12 - fVar4, param_5 <= unaff_s12 - fVar4)) {
      fVar5 = param_5;
    }
  }
  plVar2 = (long *)(unaff_x19 + 0xb8);
  *(float *)(unaff_x19 + 0xb0) = (fVar3 - param_2) / unaff_s13;
  *(float *)(unaff_x19 + 0xb4) = (fVar5 - param_1) / unaff_s12;
  if (*plVar2 != 0) {
    FUN_0952d068();
    *(undefined8 *)(unaff_x19 + 0xb8) = 0;
    thunk_FUN_044bb4b4(plVar2,0);
  }
  if ((unaff_x20 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_09538e64(*(long *)(unaff_x19 + 0x20),0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar1 = FUN_076eca08(unaff_s11 + (fVar3 - param_2),unaff_s10 + (fVar5 - param_1));
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar1;
  thunk_FUN_044bb4b4(plVar2,uVar1);
  UnityEngine_TextCore_Text_TextHandle__GetCorrespondingStringIndex();
  return;
}


