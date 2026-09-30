/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 05f5720c
PROGRAM: m3ar-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_SpaceQueryResult>__ToArray
               (undefined8 *param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((*(ushort *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
    FUN_0406aaec();
  }
  if (param_3 < uVar1) {
    FUN_075059f4(0);
    return;
  }
  lVar3 = *(long *)(param_4 + 0x20);
  uVar4 = *param_1;
  iVar2 = *(int *)(param_1 + 1);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0406aaec();
  }
  FUN_04a382f4(param_2,uVar4,(long)iVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x68));
  return;
}


