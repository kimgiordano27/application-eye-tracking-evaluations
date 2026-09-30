/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$ToArray
ENTRY_POINT: 032036b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__ToArray(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  
  if (unaff_w20 < 0) {
    FUN_0358b620(0xc,4,0);
    lVar2 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  }
  else {
    lVar2 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    if (unaff_w20 == 0) {
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      uVar1 = **(undefined8 **)(lVar2 + 0xb8);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
      goto Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetEnumerator;
    }
  }
  lVar2 = *(long *)(lVar2 + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  uVar1 = FUN_01f08890(lVar2,unaff_w20);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetEnumerator:
  thunk_FUN_01f51358(unaff_x19 + 0x10,uVar1);
  return;
}


