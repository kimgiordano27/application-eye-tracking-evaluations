/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03a1d5f8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceDiscoveryResult>
               (long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long unaff_x20;
  int unaff_w22;
  
  if (param_1 == 0) {
    FUN_0322bf50();
  }
  if (unaff_w22 < 0x11) {
    unaff_w22 = 0x10;
  }
  uVar2 = unaff_w22 - 1U | (int)(unaff_w22 - 1U) >> 1;
  uVar2 = uVar2 | (int)uVar2 >> 2;
  uVar2 = uVar2 | (int)uVar2 >> 4;
  uVar2 = uVar2 | (int)uVar2 >> 8;
  iVar1 = (uVar2 | (int)uVar2 >> 0x10) + 1;
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  if (iVar1 == *(int *)(param_2 + 0xc)) {
    return;
  }
  FUN_03a1d480(param_2,param_3,iVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8));
  return;
}


