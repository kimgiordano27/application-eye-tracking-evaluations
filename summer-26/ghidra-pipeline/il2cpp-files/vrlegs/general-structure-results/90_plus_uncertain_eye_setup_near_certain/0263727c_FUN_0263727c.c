/*
FUNCTION_NAME: FUN_0263727c
ENTRY_POINT: 0263727c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0263730c) */

void FUN_0263727c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char local_24 [4];
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = (**(code **)(*plVar1 + 0x2d8))(plVar1,*(undefined8 *)(*plVar1 + 0x2e0));
  local_24[0] = '\0';
  FUN_027e0bd8(uVar2,local_24,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    OVRPlugin__set_position(*(long *)(param_1 + 0x18),param_2,param_2,0);
  }
  if (local_24[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
  }
  return;
}


