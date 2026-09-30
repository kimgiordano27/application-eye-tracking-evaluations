/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 05d1371c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__GetNodePose(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  int *piVar3;
  
  piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar3 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*piVar3 + 4) * 0x10 + 0x138);
      goto LAB_05d1375c;
    }
    in_x9 = in_x9 + -1;
    piVar3 = piVar3 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_05d1375c:
  lVar2 = (*(code *)*puVar1)();
  if (lVar2 != 0) {
    return *(undefined4 *)(lVar2 + 0x24);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


