/*
FUNCTION_NAME: OVRPlugin$$CreateSpaceUser
ENTRY_POINT: 060e485c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin__CreateSpaceUser(undefined4 param_1,long param_2,undefined4 param_3)

{
  byte bVar1;
  long *plVar2;
  
  if ((DAT_07ee0c1f & 1) == 0) {
    FUN_03642964(PTR_DAT_07a24908);
    DAT_07ee0c1f = 1;
  }
  plVar2 = *(long **)(param_2 + 0x40);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07a24908 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07a24908)) {
      OVRPlugin__StartFaceTracking2(param_1,plVar2,param_3);
      return;
    }
  }
  return;
}


