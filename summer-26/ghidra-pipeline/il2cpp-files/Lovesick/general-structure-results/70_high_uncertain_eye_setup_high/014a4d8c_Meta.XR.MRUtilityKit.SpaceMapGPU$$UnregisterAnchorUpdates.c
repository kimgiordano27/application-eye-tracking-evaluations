/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$UnregisterAnchorUpdates
ENTRY_POINT: 014a4d8c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__UnregisterAnchorUpdates
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *unaff_x21;
  
  FUN_015f5b28(param_1,param_2,0);
  (**(code **)(*unaff_x21 + 0x288))();
  lVar1 = (**(code **)(*unaff_x21 + 0x198))();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0xd0) != 0)) {
    FUN_013dfa68();
  }
  lVar1 = (**(code **)(*unaff_x21 + 0x198))();
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0xe0), lVar1 != 0)) {
    lVar2 = FUN_00bc379c();
    if (lVar2 != 0) {
      FUN_013e0100(lVar1,*(undefined8 *)(lVar2 + 0x18));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  return;
}


