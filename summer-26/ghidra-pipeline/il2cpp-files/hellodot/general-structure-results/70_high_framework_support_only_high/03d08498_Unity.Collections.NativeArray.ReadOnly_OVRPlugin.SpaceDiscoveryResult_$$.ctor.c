/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 03d08498
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  uint in_w4;
  long in_x6;
  long unaff_x23;
  long lVar3;
  
  lVar3 = unaff_x23 + (long)(int)in_w4 * 0x10 + 0x20;
  param_1 = param_1 - (int)in_w4;
  do {
    if ((*(uint *)(unaff_x23 + 0x18) <= in_w4) ||
       (uVar1 = thunk_FUN_02cea4e8(**(undefined8 **)(*(long *)(in_x6 + 0x20) + 0xc0)),
       *(uint *)(unaff_x23 + 0x18) <= in_w4)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    uVar2 = FUN_03c6bfd8(lVar3,uVar1,*(undefined8 *)(*(long *)(*(long *)(in_x6 + 0x20) + 0xc0) + 8))
    ;
    if ((uVar2 & 1) != 0) {
      return in_w4;
    }
    in_w4 = in_w4 + 1;
    param_1 = param_1 + -1;
    lVar3 = lVar3 + 0x10;
  } while (param_1 != 0);
  return 0xffffffff;
}


