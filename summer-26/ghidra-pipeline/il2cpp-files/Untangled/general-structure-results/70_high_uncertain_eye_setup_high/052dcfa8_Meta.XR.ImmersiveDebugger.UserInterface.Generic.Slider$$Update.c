/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$Update
ENTRY_POINT: 052dcfa8
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__Update(long param_1)

{
  long lVar1;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = *(float *)(unaff_x20 + 0x28);
  fVar6 = *(float *)(unaff_x20 + 0x2c);
  fVar7 = *(float *)(unaff_x20 + 0x30);
  lVar1 = FUN_066c67b0();
  if (lVar1 != 0) {
    fVar3 = *(float *)(unaff_x20 + 0x38);
    fVar4 = *(float *)(unaff_x20 + 0x3c);
    fVar2 = (float)FUN_066d55cc(*(undefined4 *)(unaff_x20 + 0x34),fVar3,fVar4,lVar1,0);
    if (param_1 != 0) {
      FUN_066d4960(fVar5 + fVar2,fVar6 + fVar3,fVar7 + fVar4,param_1,0);
      FUN_052d96d0();
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


