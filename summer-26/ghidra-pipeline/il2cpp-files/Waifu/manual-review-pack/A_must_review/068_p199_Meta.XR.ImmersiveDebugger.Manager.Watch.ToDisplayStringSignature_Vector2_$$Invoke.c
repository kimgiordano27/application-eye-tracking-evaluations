/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$Invoke
ENTRY_POINT: 0533c4a4
PROGRAM: Waifu-libil2cpp.so
SCORE: 131
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


long Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__Invoke(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *unaff_x19;
  
  lVar4 = FUN_03398a84(*(undefined8 *)(param_1 + 2000));
  do {
    if (*unaff_x19 != 0) {
      ClearExclusiveLocal();
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
    if (bVar3) {
      *unaff_x19 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x19 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return *unaff_x19;
}


