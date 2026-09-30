/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderMeta.<WaitForPermissionsAndCreateHandle>d__10$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 05ae586c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_3;functionality_permission_setup
*/


void Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderMeta_<WaitForPermissionsAndCreateHandle>d__10__System_Collections_IEnumerator_Reset
               (ulong param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_0367c9fc(param_3);
  }
  if (unaff_x20 != (long *)0x0) {
    if ((*(byte *)(*unaff_x20 + 0x130) < *(byte *)(param_3 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8) !=
        param_3)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084();
    }
  }
  return;
}


