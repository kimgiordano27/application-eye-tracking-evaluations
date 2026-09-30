/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$.ctor
ENTRY_POINT: 04a054a4
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


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>___ctor
               (undefined8 param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long unaff_x23;
  
  while( true ) {
    param_4 = param_4 + -1;
    iVar2 = param_3 - param_2;
    if (iVar2 + 1 < 0x11) {
      if (param_3 == param_2) {
        return;
      }
      lVar3 = *(long *)(unaff_x23 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
      if (iVar2 == 2) {
        if ((uVar1 & 1) == 0) {
          lVar3 = FUN_0367c9fc();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0367c9fc();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        FUN_04a0514c(param_1);
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        FUN_04a0514c(param_1);
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
      }
      else {
        if (iVar2 != 1) {
          if ((uVar1 & 1) == 0) {
            lVar3 = FUN_0367c9fc();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0367c9fc();
          }
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
            FUN_0367c9fc();
          }
          FUN_04a05ec8(param_1,param_2,param_3);
          return;
        }
        if ((uVar1 & 1) == 0) {
          lVar3 = FUN_0367c9fc();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0367c9fc();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
      }
      FUN_04a0514c(param_1);
      return;
    }
    if (param_4 == -1) break;
    lVar3 = *(long *)(unaff_x23 + 0x20);
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
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    iVar2 = FUN_04a057c8(param_1,param_2,param_3);
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc(*(long *)(unaff_x23 + 0x20));
    }
    OVRPlugin_PinnedArray<Guid>__Dispose(param_1,iVar2 + 1,param_3,param_4);
    param_3 = iVar2 + -1;
    if (param_3 <= param_2) {
      return;
    }
  }
  lVar3 = *(long *)(unaff_x23 + 0x20);
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
  if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  FUN_04a05b00(param_1,param_2,param_3);
  return;
}


