/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$Dispose
ENTRY_POINT: 04a05484
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_9;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_PinnedArray<Guid>__Dispose
               (undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5,
               long param_6)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  
  while( true ) {
    if (param_3 <= param_2) {
      return;
    }
    param_4 = param_4 + -1;
    iVar2 = param_3 - param_2;
    if (iVar2 + 1 < 0x11) break;
    if (param_4 == -1) {
      lVar3 = *(long *)(param_6 + 0x20);
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
      lVar3 = *(long *)(param_6 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc();
      }
      FUN_04a05b00(param_1,param_2,param_3,param_5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x80));
      return;
    }
    lVar3 = *(long *)(param_6 + 0x20);
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
    lVar3 = *(long *)(param_6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    iVar2 = FUN_04a057c8(param_1,param_2,param_3,param_5,
                         *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x88));
    lVar3 = *(long *)(param_6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc(lVar3);
    }
    OVRPlugin_PinnedArray<Guid>__Dispose
              (param_1,iVar2 + 1,param_3,param_4,param_5,
               *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x68));
    param_3 = iVar2 + -1;
  }
  if (param_3 == param_2) {
    return;
  }
  lVar3 = *(long *)(param_6 + 0x20);
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
    lVar3 = *(long *)(param_6 + 0x20);
    iVar2 = param_3 + -1;
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    FUN_04a0514c(param_1,param_5,param_2,iVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
    lVar3 = *(long *)(param_6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    FUN_04a0514c(param_1,param_5,param_2,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
    lVar3 = *(long *)(param_6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    lVar3 = *(long *)(lVar3 + 0xc0);
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
      lVar3 = *(long *)(param_6 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc();
      }
      FUN_04a05ec8(param_1,param_2,param_3,param_5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x78));
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
    lVar3 = *(long *)(param_6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    lVar3 = *(long *)(lVar3 + 0xc0);
    iVar2 = param_2;
  }
  FUN_04a0514c(param_1,param_5,iVar2,param_3,*(undefined8 *)(lVar3 + 0x70));
  return;
}


