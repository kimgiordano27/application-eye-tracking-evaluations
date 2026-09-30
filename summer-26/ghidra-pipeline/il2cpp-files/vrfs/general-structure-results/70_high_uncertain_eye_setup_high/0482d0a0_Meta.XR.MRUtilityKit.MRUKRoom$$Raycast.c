/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$Raycast
ENTRY_POINT: 0482d0a0
PROGRAM: vrfs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__Raycast(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (lVar1 = FUN_02511da8(param_1,0), lVar1 != 0)) {
    uVar2 = FUN_01a2b738(lVar1,*unaff_x20);
    *(undefined4 *)(unaff_x19 + 0xd8) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


