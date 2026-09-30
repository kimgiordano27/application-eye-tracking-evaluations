/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 02b75e04
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4f>__Dispose(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  long *unaff_x25;
  
  if (*(long *)(unaff_x21 + 0x30) == 0) {
    FUN_021bb118(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
  }
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033a87c8(uVar4,0);
  FUN_032dfad4();
  FUN_032e11f0();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar1 = *(int *)(unaff_x21 + 0x28);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x150);
    iVar2 = *(int *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01dde7f8();
    }
    FUN_01d7d9bc(lVar3,iVar2 - iVar1);
    FUN_02b75b9c();
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x160);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033a87c8(uVar4,0);
    FUN_032dfad4();
    return;
  }
  return;
}


