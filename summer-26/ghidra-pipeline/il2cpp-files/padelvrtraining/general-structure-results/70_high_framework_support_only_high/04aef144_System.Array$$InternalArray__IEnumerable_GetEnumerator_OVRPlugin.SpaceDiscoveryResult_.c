/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 04aef144
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceDiscoveryResult>
               (long param_1,undefined8 param_2,undefined8 param_3,size_t param_4)

{
  ulong uVar1;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  void *unaff_x22;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  byte unaff_w27;
  long lStack0000000000000000;
  
  while( true ) {
    lStack0000000000000000 = param_1;
    memcpy(unaff_x22,unaff_x20,param_4);
    uVar1 = thunk_FUN_071d4ed8();
    if ((uVar1 & 1) != 0) break;
    unaff_x24 = unaff_x24 + 1;
    unaff_w27 = unaff_x24 < unaff_x26;
    if (unaff_x26 == unaff_x24) break;
    memcpy(&stack0x000000c0,(void *)(unaff_x25 + unaff_x24 * *(uint *)(*unaff_x21 + 0x104)),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    memcpy(&stack0x00000068,&stack0x000000c0,0x58);
    thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000068);
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_03d8f26c(param_1);
    }
    param_4 = 0x58;
  }
  return unaff_w27 & 1;
}


