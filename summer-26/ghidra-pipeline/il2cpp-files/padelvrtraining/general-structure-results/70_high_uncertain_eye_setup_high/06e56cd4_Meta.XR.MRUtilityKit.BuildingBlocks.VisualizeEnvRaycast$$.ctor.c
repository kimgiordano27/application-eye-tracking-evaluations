/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.VisualizeEnvRaycast$$.ctor
ENTRY_POINT: 06e56cd4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_BuildingBlocks_VisualizeEnvRaycast___ctor(void)

{
  long lVar1;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uStack000000000000000c;
  
  if (*unaff_x20 != 0) {
    if (in_w8 == *(int *)(*unaff_x20 + 0x20) + 1) {
      FUN_07199c28(0);
    }
    uStack000000000000000c = (undefined4)unaff_x20[2];
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
    thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10),&stack0x0000000c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


