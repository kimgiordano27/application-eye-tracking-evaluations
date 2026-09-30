/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$UpdatePillPosition
ENTRY_POINT: 052dcf00
PROGRAM: Untangled-libil2cpp.so
SCORE: 140
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__UpdatePillPosition
          (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s9;
  float fVar7;
  float fVar8;
  
  fVar6 = param_2;
  fVar7 = param_3;
  fVar8 = param_4;
  lVar1 = FUN_066c67b0();
  if ((lVar1 != 0) && (fVar3 = (float)FUN_066d320c(lVar1,0), unaff_x21 != 0)) {
                    /* try { // try from 052dcf3c to 053dcf4b has its CatchHandler @ 052dd010 */
                    /* try { // try from 052dcf4c to 053dcfff has its CatchHandler @ 052dcd84 */
    FUN_066d4ae0((param_2 * fVar7 + param_4 * fVar3 + unaff_s9 * fVar8) - param_3 * fVar6,
                 (param_3 * fVar3 + param_4 * fVar6 + param_2 * fVar8) - unaff_s9 * fVar7,
                 (unaff_s9 * fVar6 + param_4 * fVar7 + param_3 * fVar8) - param_2 * fVar3,
                 ((param_4 * fVar8 - unaff_s9 * fVar3) - param_2 * fVar6) - param_3 * fVar7);
    lVar1 = FUN_066c67b0();
    fVar6 = *(float *)(unaff_x20 + 0x28);
    fVar7 = *(float *)(unaff_x20 + 0x2c);
    fVar8 = *(float *)(unaff_x20 + 0x30);
    lVar2 = FUN_066c67b0();
    if (lVar2 != 0) {
      fVar4 = *(float *)(unaff_x20 + 0x38);
      fVar5 = *(float *)(unaff_x20 + 0x3c);
      fVar3 = (float)FUN_066d55cc(*(undefined4 *)(unaff_x20 + 0x34),fVar4,fVar5,lVar2,0);
      if (lVar1 != 0) {
        FUN_066d4960(fVar6 + fVar3,fVar7 + fVar4,fVar8 + fVar5,lVar1,0);
        FUN_052d96d0();
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


