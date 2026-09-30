/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.RoomFace>$$Copy
ENTRY_POINT: 047a4b74
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_RoomFace>__Copy(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  int unaff_w24;
  int unaff_w25;
  
  while( true ) {
    FUN_047a4c5c();
    iVar1 = unaff_w25 + -1;
    if (iVar1 == 0 || unaff_w25 < 1) break;
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    unaff_w25 = iVar1;
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
  }
  if (1 < unaff_w24) {
    do {
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      FUN_047a42cc();
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      FUN_047a4c5c();
      unaff_w21 = unaff_w21 + -1;
    } while (2 < (unaff_w21 - unaff_w22) + 2U);
  }
  return;
}


