/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$set_Item
ENTRY_POINT: 04c3db0c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__set_Item(void)

{
  byte bVar1;
  long *plVar2;
  long *unaff_x19;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_078370e4();
  plVar2 = (long *)(**(code **)(*unaff_x19 + 0x1e8))();
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07d96030 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07d96030)) {
      uVar4 = *(undefined4 *)((long)unaff_x19 + 0x6c);
      uVar3 = FUN_077699d4((int)unaff_x19[0xd],plVar2,0);
      goto LAB_04c3db64;
    }
  }
  uVar3 = (undefined4)unaff_x19[0xd];
  uVar4 = *(undefined4 *)((long)unaff_x19 + 0x6c);
LAB_04c3db64:
  *(undefined4 *)(unaff_x19 + 0xe) = uVar3;
  *(undefined4 *)((long)unaff_x19 + 0x74) = uVar4;
  return;
}


