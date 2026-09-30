/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 01997e5c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Dispose(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  if (*(int *)(param_1 + 0x18) == unaff_w22) {
    return;
  }
  lVar2 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  if (unaff_w22 < 1) {
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0122e748();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0122e748();
    }
    *unaff_x19 = **(undefined8 **)(lVar2 + 0xb8);
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x18);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0122e748();
    }
    uVar1 = FUN_01230af8(lVar2,unaff_w22);
    if (0 < *(int *)(unaff_x20 + 0x18)) {
      FUN_01f89ca0(*unaff_x19,0,uVar1,0,*(int *)(unaff_x20 + 0x18),0);
    }
    *unaff_x19 = uVar1;
  }
  thunk_FUN_01286abc();
  return;
}


