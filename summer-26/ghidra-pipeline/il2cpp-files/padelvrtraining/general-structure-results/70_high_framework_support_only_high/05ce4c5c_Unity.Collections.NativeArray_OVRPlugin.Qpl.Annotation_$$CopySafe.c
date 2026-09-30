/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopySafe
ENTRY_POINT: 05ce4c5c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopySafe(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30) + 0x135) & 1) == 0)
  {
    FUN_03d8f26c();
  }
  uVar1 = thunk_FUN_03d2ef40();
  lVar2 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03d8f26c(lVar2);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar3 = (ulong)*(ushort *)(*unaff_x20 + 0x12e);
  if (uVar3 != 0) {
    lVar4 = *(long *)(*unaff_x20 + 0xb0) + 8;
    do {
      if (*(long *)(lVar4 + -8) == lVar2) goto LAB_05ce4ce8;
      uVar3 = uVar3 - 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar3 != 0);
  }
  FUN_03d8f370();
LAB_05ce4ce8:
  FUN_06860dd8(uVar1);
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03d8f26c();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_05ce54fc();
  return;
}


