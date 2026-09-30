/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 01f09250
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__set_Item<OVRPlugin_SpaceDiscoveryResult>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x23;
  
  uVar1 = *(undefined8 *)(unaff_x23 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x23 + 0x28);
  uVar3 = FUN_020a9170(*(undefined8 *)(unaff_x23 + 0x30));
  lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01dde7f8(lVar5);
  }
  uVar4 = thunk_FUN_01de27b8(lVar5);
  FUN_028bf510(uVar4,uVar1,uVar2,uVar3,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
  return uVar4;
}


