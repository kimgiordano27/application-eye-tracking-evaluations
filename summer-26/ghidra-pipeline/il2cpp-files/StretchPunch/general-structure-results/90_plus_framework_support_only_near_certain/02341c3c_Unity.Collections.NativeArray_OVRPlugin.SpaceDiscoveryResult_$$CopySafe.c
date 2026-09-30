/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 02341c3c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  int unaff_w20;
  
  FUN_033d8040();
  if (unaff_w20 < 0) {
    FUN_033b3224(0xc,4,0);
    lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    if (unaff_w20 == 0) {
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8();
      }
      uVar1 = **(undefined8 **)(lVar2 + 0xb8);
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      goto LAB_02341cd4;
    }
  }
  lVar2 = *(long *)(lVar2 + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  uVar1 = FUN_01d7d9bc(lVar2,unaff_w20);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
LAB_02341cd4:
  thunk_FUN_01e10808(param_1 + 0x10,uVar1);
  return;
}


