/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 04233f30
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceDiscoveryResult>
               (undefined8 *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x22;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  byte unaff_w27;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while( true ) {
    memcpy(param_1,param_2,param_3);
    in_stack_00000028 = in_stack_00000038;
    in_stack_00000020 = in_stack_00000030;
    thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_03cf1244(lVar2);
    }
    uVar1 = thunk_FUN_0715d3b4();
    if ((uVar1 & 1) != 0) break;
    unaff_x24 = unaff_x24 + 1;
    unaff_w27 = unaff_x24 < unaff_x26;
    if (unaff_x26 == unaff_x24) break;
    param_1 = &stack0x00000030;
    param_3 = (size_t)*(uint *)(*unaff_x22 + 0x104);
    param_2 = (void *)(unaff_x25 + unaff_x24 * param_3);
  }
  return unaff_w27 & 1;
}


