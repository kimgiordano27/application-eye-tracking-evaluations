/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopySafe
ENTRY_POINT: 04a106bc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopySafe(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  
  lVar1 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4(lVar1);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar2 = (ulong)*(ushort *)(*unaff_x20 + 0x12e);
  if (uVar2 != 0) {
    lVar3 = *(long *)(*unaff_x20 + 0xb0) + 8;
    do {
      if (*(long *)(lVar3 + -8) == lVar1) goto LAB_04a1072c;
      uVar2 = uVar2 - 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar2 != 0);
  }
                    /* try { // try from 04a10714 to 04b1075b has its CatchHandler @ 04a10714
                       catch() { ... } // from try @ 04a10714 with catch @ 04a10714
                       catch() { ... } // from try @ 04a107b4 with catch @ 04a10714
                       catch() { ... } // from try @ 04a107e4 with catch @ 04a10714
                       catch() { ... } // from try @ 04a10860 with catch @ 04a10714 */
  FUN_0322c1e8();
LAB_04a1072c:
  FUN_05586ca4(param_1);
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 04a1075c to 04b107b3 has its CatchHandler @ 04a107b4 */
    lVar1 = FUN_0322bef4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_04a10e4c();
  return;
}


