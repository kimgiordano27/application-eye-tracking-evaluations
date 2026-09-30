/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetCurrentTrackingTransformPose
ENTRY_POINT: 06afa2a8
PROGRAM: Waifu-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetCurrentTrackingTransformPose(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int in_w9;
  undefined8 unaff_x19;
  long unaff_x22;
  
  if (in_w9 == 0x773889f6) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      FUN_033b9870();
      param_1 = *(long *)(*(long *)(unaff_x22 + 0x658) + 0xb8);
    }
    puVar4 = (undefined8 *)(param_1 + 0x18);
    *puVar4 = unaff_x19;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar4 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}


