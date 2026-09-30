/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$op_Implicit
ENTRY_POINT: 04a054d0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_7;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__op_Implicit(long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  
  while( true ) {
    if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_0367c9fc();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    iVar3 = FUN_04a057c8();
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc(*(long *)(unaff_x23 + 0x20));
    }
    OVRPlugin_PinnedArray<Guid>__Dispose();
    iVar3 = iVar3 + -1;
    unaff_w24 = unaff_w24 + -1;
    if (iVar3 <= unaff_w22) {
      return;
    }
    iVar2 = iVar3 - unaff_w22;
    if (iVar2 + 1 < 0x11) {
      if (iVar3 == unaff_w22) {
        return;
      }
      lVar4 = *(long *)(unaff_x23 + 0x20);
      uVar1 = *(ushort *)(lVar4 + 0x135);
      if (iVar2 == 2) {
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
        FUN_04a0514c();
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        FUN_04a0514c();
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
      }
      else {
        if (iVar2 != 1) {
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
          FUN_04a05ec8();
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
      FUN_04a0514c();
      return;
    }
    if (unaff_w24 == -1) break;
    param_1 = *(long *)(unaff_x23 + 0x20);
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
  FUN_04a05b00();
  return;
}


