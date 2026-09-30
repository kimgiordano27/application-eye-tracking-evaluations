/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 0494b3ac
PROGRAM: spatialPiano-libil2cpp.so
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
  undefined4 uVar1;
  long lVar2;
  ulong in_x9;
  long in_x11;
  undefined4 unaff_w25;
  ulong unaff_x26;
  long unaff_x27;
  undefined4 *unaff_x28;
  ulong unaff_x29;
  undefined8 *in_stack_00000008;
  
  *(undefined4 *)(param_1 + (unaff_x26 & 0xffffffff) * (in_x9 & 0xffffffff) + 0x24) =
       *(undefined4 *)(unaff_x27 + (unaff_x29 & 0xffffffff) * (in_x9 & 0xffffffff) + 4);
  lVar2 = unaff_x27 + (unaff_x29 & 0xffffffff) * 0x18;
  *in_stack_00000008 = *(undefined8 *)(lVar2 + 0x10);
  uVar1 = *(undefined4 *)(in_x11 + 0x24);
  *unaff_x28 = 0xffffffff;
  *(undefined8 *)(lVar2 + 8) = 0;
  *(undefined4 *)(lVar2 + 4) = uVar1;
  *(undefined4 *)(in_x11 + 0x24) = unaff_w25;
  *(ulong *)(in_x11 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(in_x11 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(in_x11 + 0x28) + 1);
  return 1;
}


