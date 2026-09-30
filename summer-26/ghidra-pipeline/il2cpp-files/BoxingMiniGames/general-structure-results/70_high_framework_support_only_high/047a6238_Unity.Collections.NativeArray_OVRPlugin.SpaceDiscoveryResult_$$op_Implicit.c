/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 047a6238
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__op_Implicit(void)

{
  long lVar1;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  
  do {
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    FUN_047a59e8();
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    FUN_047a62f4();
    unaff_w21 = unaff_w21 + -1;
  } while (2 < (unaff_w21 - unaff_w22) + 2U);
  return;
}


