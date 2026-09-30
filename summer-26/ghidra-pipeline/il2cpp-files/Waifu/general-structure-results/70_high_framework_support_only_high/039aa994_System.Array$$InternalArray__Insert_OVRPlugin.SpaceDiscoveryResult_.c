/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 039aa994
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_SpaceDiscoveryResult>(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long in_x10;
  long in_x11;
  ulong in_x12;
  long unaff_x19;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar1 = (ulong *)(param_1 + in_x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | in_x11 << (in_x12 & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uStack0000000000000008 = CONCAT44(in_stack_00000018._4_4_,0xfffffffe);
  uStack0000000000000000 = in_stack_00000010;
  FUN_03398650(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
  return;
}


