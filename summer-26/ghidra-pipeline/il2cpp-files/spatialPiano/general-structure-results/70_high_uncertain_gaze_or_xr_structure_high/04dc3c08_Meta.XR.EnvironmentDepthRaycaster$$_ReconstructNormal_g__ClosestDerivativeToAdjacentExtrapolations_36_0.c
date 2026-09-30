/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations|36_0
ENTRY_POINT: 04dc3c08
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ray_interaction;data_collection
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations_36_0
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  long in_stack_00000088;
  
  lVar2 = FUN_02f41e9c();
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0x160);
  if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c(*(long *)(param_3 + 0x20));
  }
  iVar1 = (*pcVar3)();
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000088) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


