/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 018b2750
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  int in_w4;
  int in_w5;
  long lVar4;
  long unaff_x20;
  int unaff_w21;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  in_stack_00000008 = FUN_01cbacec();
  uVar2 = FUN_01cbabfc(&stack0x00000008,0);
  lVar3 = FUN_01d91144(uVar2,0);
  lVar4 = *(long *)(unaff_x23 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_0103c244(lVar4);
    lVar4 = *(long *)(unaff_x23 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_0103c244(lVar4);
    lVar4 = *(long *)(unaff_x23 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_0103c244(lVar4);
  }
  FUN_01fcbcf0(lVar3 + in_w4 * 0x38,unaff_x20 + unaff_w21 * 0x38,(long)(in_w5 * 0x38),0);
  FUN_01cbad00(&stack0x00000008,0);
  return;
}


