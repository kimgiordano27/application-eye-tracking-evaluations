/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 04c8eaf8
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__Dispose(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long in_x9;
  long lVar5;
  long unaff_x21;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  lVar5 = param_1 + in_x9 * 0x30;
  *(undefined8 *)(lVar5 + 0x38) = in_stack_00000048;
  *(undefined8 *)(lVar5 + 0x30) = in_stack_00000040;
  *(undefined8 *)(lVar5 + 0x48) = in_stack_00000058;
  *(undefined8 *)(lVar5 + 0x40) = in_stack_00000050;
  *(undefined8 *)(lVar5 + 0x28) = in_stack_00000038;
  *(undefined8 *)(lVar5 + 0x20) = in_stack_00000030;
  if (DAT_08908cd0 != 0) {
    uVar1 = param_1 + in_x9 * 0x30 + 0x28;
    puVar2 = &DAT_0873ccb0 + (uVar1 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 | 1L << (uVar1 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return *(int *)(unaff_x21 + 0x18) + -1;
}


