/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 047a5c1c
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ushort *in_x9;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  
  while( true ) {
    if ((*in_x9 & 1) == 0) {
      FUN_0367c9fc(param_1);
    }
    FUN_047a5b60();
    iVar2 = unaff_w25 + -1;
    unaff_w24 = unaff_w24 + -1;
    if (iVar2 <= unaff_w22) {
      return;
    }
    iVar3 = iVar2 - unaff_w22;
    if (iVar3 + 1 < 0x11) {
      if (iVar2 == unaff_w22) {
        return;
      }
      lVar4 = *(long *)(unaff_x23 + 0x20);
      uVar1 = *(ushort *)(lVar4 + 0x135);
      if (iVar3 == 2) {
        if ((uVar1 & 1) == 0) {
          lVar4 = FUN_0367c9fc();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0367c9fc();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        FUN_047a58a4();
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        FUN_047a58a4();
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
      }
      else {
        if (iVar3 != 1) {
          if ((uVar1 & 1) == 0) {
            lVar4 = FUN_0367c9fc();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0367c9fc();
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
            FUN_0367c9fc();
          }
          FUN_047a64cc();
          return;
        }
        if ((uVar1 & 1) == 0) {
          lVar4 = FUN_0367c9fc();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0367c9fc();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
      }
      FUN_047a58a4();
      return;
    }
    if (unaff_w24 == -1) break;
    lVar4 = *(long *)(unaff_x23 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    unaff_w25 = FUN_047a5ea4();
    param_1 = *(long *)(unaff_x23 + 0x20);
    in_x9 = (ushort *)(param_1 + 0x135);
  }
  lVar4 = *(long *)(unaff_x23 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  FUN_047a6184();
  return;
}


