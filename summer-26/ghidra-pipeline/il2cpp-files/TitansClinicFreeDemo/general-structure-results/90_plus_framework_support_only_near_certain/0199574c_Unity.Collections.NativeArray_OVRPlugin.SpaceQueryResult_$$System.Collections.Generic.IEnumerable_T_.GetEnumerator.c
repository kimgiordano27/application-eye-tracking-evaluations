/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 0199574c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1)

{
  char in_NG;
  char in_OV;
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  
  if (in_NG == in_OV) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0122e748();
    }
    uVar2 = FUN_01230af8(lVar1,unaff_w22);
    if (0 < *(int *)(unaff_x20 + 0x18)) {
      FUN_01f89ca0(*unaff_x19,0,uVar2,0,*(int *)(unaff_x20 + 0x18),0);
    }
    *unaff_x19 = uVar2;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0122e748();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0122e748();
    }
    *unaff_x19 = **(undefined8 **)(lVar1 + 0xb8);
  }
  thunk_FUN_01286abc();
  return;
}


