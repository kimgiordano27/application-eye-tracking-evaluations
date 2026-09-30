/*
FUNCTION_NAME: FUN_02a308e8
ENTRY_POINT: 02a308e8
PROGRAM: vrfs-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_02a308e8(undefined1 param_1 [16],undefined8 param_2,float param_3,float param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_051e5130(param_5,0);
  lVar2 = FUN_0322c8c4(0);
  if (lVar2 != 0) {
    uVar3 = OVRPlugin__StartBodyTracking(lVar2,0);
    lVar2 = FUN_0322c8c4(0);
    if (lVar2 != 0) {
      OVRPlugin__StartBodyTracking(lVar2,0);
      lVar2 = FUN_0322c8c4(0);
      if (lVar2 != 0) {
        OVRPlugin__StartBodyTracking(lVar2,0);
        lVar2 = FUN_0322c8c4(0);
        if ((lVar2 != 0) && (OVRPlugin__StartBodyTracking(lVar2,0), lVar1 != 0)) {
          FUN_04f1af7c(uVar3,param_2,-param_3,-param_4,lVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


