/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Equals
ENTRY_POINT: 03b5eee0
PROGRAM: hellodot-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Equals
               (long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_04f7383c(param_1,0);
  if (param_2 < 0) {
    FUN_04f51f34(0xc,4,0);
    lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    if (param_2 == 0) {
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02ce0978();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02ce0978();
      }
      *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(lVar2 + 0xb8);
      return;
    }
  }
  lVar2 = *(long *)(lVar2 + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  uVar1 = FUN_02ce7ad4(lVar2,param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}


