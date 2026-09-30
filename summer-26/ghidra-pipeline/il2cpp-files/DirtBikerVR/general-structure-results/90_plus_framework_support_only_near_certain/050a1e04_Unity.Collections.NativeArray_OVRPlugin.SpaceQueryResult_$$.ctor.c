/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 050a1e04
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  
  while( true ) {
    FUN_050a1d1c();
    iVar2 = unaff_w25 + -1;
    unaff_w24 = unaff_w24 + -1;
    if (iVar2 <= unaff_w22) {
      return;
    }
    iVar3 = iVar2 - unaff_w22;
    if (iVar3 + 1 < 0x11) break;
    if (unaff_w24 == -1) {
      lVar4 = *(long *)(unaff_x23 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03ac4090();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03ac4090();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      FUN_050a2340();
      return;
    }
    lVar4 = *(long *)(unaff_x23 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    unaff_w25 = FUN_050a2060();
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090(*(long *)(unaff_x23 + 0x20));
    }
  }
  if (iVar2 == unaff_w22) {
    return;
  }
  lVar4 = *(long *)(unaff_x23 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  if (iVar3 == 2) {
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_03ac4090();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    FUN_050a1a54();
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    FUN_050a1a54();
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
  }
  else {
    if (iVar3 != 1) {
      if ((uVar1 & 1) == 0) {
        lVar4 = FUN_03ac4090();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03ac4090();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      FUN_050a2690();
      return;
    }
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_03ac4090();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
  }
  FUN_050a1a54();
  return;
}


