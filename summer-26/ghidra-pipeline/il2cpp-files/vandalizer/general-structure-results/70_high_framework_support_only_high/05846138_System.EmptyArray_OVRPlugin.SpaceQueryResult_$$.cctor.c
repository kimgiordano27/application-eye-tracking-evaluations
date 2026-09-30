/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 05846138
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_SpaceQueryResult>___cctor(long param_1)

{
  long in_x9;
  long lVar1;
  long in_x10;
  long unaff_x19;
  undefined4 unaff_w24;
  undefined4 *unaff_x25;
  long unaff_x26;
  long unaff_x28;
  
  *(int *)(param_1 + in_x10 * 4 + 0x20) = *(int *)(in_x9 + 0x24) + 1;
  *unaff_x25 = 0xffffffff;
  lVar1 = unaff_x26 + unaff_x28 * 0xe0;
  *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
  memset((void *)(lVar1 + 0x28),0,0xd8);
  *(undefined4 *)(unaff_x19 + 0x24) = unaff_w24;
  *(ulong *)(unaff_x19 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
  return 1;
}


