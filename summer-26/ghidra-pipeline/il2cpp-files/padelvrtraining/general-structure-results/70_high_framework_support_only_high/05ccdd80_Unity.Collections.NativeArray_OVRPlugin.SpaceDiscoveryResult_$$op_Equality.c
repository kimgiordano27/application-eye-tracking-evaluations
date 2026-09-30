/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$op_Equality
ENTRY_POINT: 05ccdd80
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__op_Equality
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x21;
  undefined8 *puVar4;
  long unaff_x23;
  
  puVar1 = PTR_StringLiteral_51627_091f8ab8;
  puVar4 = *(undefined8 **)(unaff_x21 + 0xb78);
  if ((*(byte *)(unaff_x23 + 0x4e8) & 1) == 0) {
    FUN_03d2d2b0(PTR_StringLiteral_51627_091f8ab8);
    FUN_03d2d2b0(PTR_StringLiteral_51636_091fcb78);
    *(undefined1 *)(unaff_x23 + 0x4e8) = 1;
  }
  FUN_06653c08(param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10));
  uVar2 = thunk_FUN_03d2ef40(*puVar4);
  FUN_06ae3328(uVar2,param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28),0);
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  thunk_FUN_03d1023c((undefined8 *)(param_1 + 0xd0),uVar2);
  uVar2 = thunk_FUN_03d2ef40(*(undefined8 *)puVar1);
  FUN_06ae3328(uVar2,param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30),0);
  *(undefined8 *)(param_1 + 0xd8) = uVar2;
  thunk_FUN_03d1023c((undefined8 *)(param_1 + 0xd8),uVar2);
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  uVar2 = thunk_FUN_03d2ef40();
  lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  FUN_06ae3328(uVar2,param_1,*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(lVar3 + 0x40));
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  thunk_FUN_03d1023c((undefined8 *)(param_1 + 0xe0),uVar2);
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  uVar2 = thunk_FUN_03d2ef40();
  lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  FUN_06ae3328(uVar2,param_1,*(undefined8 *)(lVar3 + 0x48),*(undefined8 *)(lVar3 + 0x40));
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  thunk_FUN_03d1023c((undefined8 *)(param_1 + 0xe8),uVar2);
  return;
}


