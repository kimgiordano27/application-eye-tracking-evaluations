/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$AsSpan
ENTRY_POINT: 047a61a8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__AsSpan
               (undefined8 param_1,int param_2,int param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int unaff_w24;
  int unaff_w25;
  
  do {
    lVar3 = *(long *)(param_5 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar3 = *(long *)(param_5 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    FUN_047a62f4(param_1,unaff_w25,unaff_w24,param_2,param_4,
                 *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x98));
    iVar2 = unaff_w25 + -1;
    bVar1 = 0 < unaff_w25;
    unaff_w25 = iVar2;
  } while (iVar2 != 0 && bVar1);
  if (1 < unaff_w24) {
    do {
      lVar3 = *(long *)(param_5 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      FUN_047a59e8(param_1,param_2,param_3);
      lVar3 = *(long *)(param_5 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc();
      }
      FUN_047a62f4(param_1,1,-param_2 + param_3,param_2,param_4,
                   *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x98));
      param_3 = param_3 + -1;
    } while (2 < -param_2 + param_3 + 2U);
  }
  return;
}


