/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$get_Item
ENTRY_POINT: 02476d78
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


bool Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__get_Item
               (undefined8 param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((DAT_044a354e & 1) == 0) {
    FUN_01d7d918(StringLiteral_1132);
    FUN_01d7d918(StringLiteral_1134);
    DAT_044a354e = 1;
  }
  lVar1 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01dde7f8();
  }
  uVar2 = FUN_02476df4(param_1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38));
  *param_2 = (int)(uVar2 >> 0x20);
  return (uVar2 & 0xff) != 0;
}


