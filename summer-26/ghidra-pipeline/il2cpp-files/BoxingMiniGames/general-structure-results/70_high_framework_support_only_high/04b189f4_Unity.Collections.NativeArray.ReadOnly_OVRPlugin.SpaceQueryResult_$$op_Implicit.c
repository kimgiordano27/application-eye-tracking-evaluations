/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$op_Implicit
ENTRY_POINT: 04b189f4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__op_Implicit
               (ulong param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0367c9fc();
  }
  puVar1 = PTR_DAT_07a00be8;
  lVar2 = *(long *)(*(long *)(param_2 + 0xc0) + 0x60);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  uVar3 = FUN_05c8d7b8(*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x98),*(undefined8 *)puVar1,0);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x60);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0xa8) = uVar3;
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  lVar2 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x60);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  thunk_FUN_036b7ad0(*(long *)(lVar2 + 0xb8) + 0xa8,uVar3);
  return;
}


