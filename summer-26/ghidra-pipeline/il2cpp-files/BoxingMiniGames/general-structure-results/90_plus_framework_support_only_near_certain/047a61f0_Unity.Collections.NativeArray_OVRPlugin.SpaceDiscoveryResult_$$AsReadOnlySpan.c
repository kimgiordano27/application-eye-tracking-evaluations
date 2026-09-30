/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$AsReadOnlySpan
ENTRY_POINT: 047a61f0
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__AsReadOnlySpan(void)

{
  long lVar1;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  int unaff_w24;
  int unaff_w25;
  int iVar2;
  
  do {
    thunk_FUN_036a1978();
    iVar2 = unaff_w25;
    do {
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      FUN_047a62f4();
      unaff_w25 = iVar2 + -1;
      if (unaff_w25 == 0 || iVar2 < 1) {
        if (1 < unaff_w24) {
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
        }
        return;
      }
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      iVar2 = unaff_w25;
    } while (*(int *)(lVar1 + 0xe4) != 0);
  } while( true );
}


