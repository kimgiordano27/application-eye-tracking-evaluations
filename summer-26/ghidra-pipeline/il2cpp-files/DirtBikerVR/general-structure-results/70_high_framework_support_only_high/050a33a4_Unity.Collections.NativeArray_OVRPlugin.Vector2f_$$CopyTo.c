/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyTo
ENTRY_POINT: 050a33a4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyTo(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  
  while( true ) {
    iVar3 = Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Equals();
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090(*(long *)(unaff_x23 + 0x20));
    }
    FUN_050a3310();
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
        FUN_050a3064();
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        FUN_050a3064();
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
      }
      else {
        if (iVar2 != 1) {
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
          FUN_050a3cbc();
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
      FUN_050a3064();
      return;
    }
    if (unaff_w24 == -1) break;
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
  FUN_050a394c();
  return;
}


