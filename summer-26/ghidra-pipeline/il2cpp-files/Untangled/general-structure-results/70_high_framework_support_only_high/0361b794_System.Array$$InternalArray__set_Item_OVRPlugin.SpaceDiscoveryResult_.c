/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0361b794
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_SpaceDiscoveryResult>
              (undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  
  while( true ) {
    uVar2 = FUN_0435dfc8(param_1,param_2,param_3);
    if ((uVar2 & 1) != 0) {
      iVar1 = thunk_FUN_02ebb478();
      return iVar1 + (int)unaff_x24;
    }
    unaff_x24 = unaff_x24 + 1;
    if (unaff_x26 == unaff_x24) break;
    memcpy(&stack0x00000010,(void *)(unaff_x25 + unaff_x24 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    param_2 = thunk_FUN_02ef1438(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x27);
    }
    param_1 = &stack0x00000010;
    param_3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  }
  iVar1 = thunk_FUN_02ebb478();
  return iVar1 + -1;
}


