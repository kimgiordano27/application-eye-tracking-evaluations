/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 06ab75d8
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_rotation(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong in_x9;
  long in_x10;
  uint in_w11;
  
  puVar1 = (ulong *)(in_x10 + param_1 * 8 + (ulong)(in_w11 & 0xffff | 0x40000));
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1L << (in_x9 & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


