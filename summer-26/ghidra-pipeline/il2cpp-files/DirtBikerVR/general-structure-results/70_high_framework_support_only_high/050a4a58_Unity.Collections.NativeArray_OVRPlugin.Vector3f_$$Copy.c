/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 050a4a58
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(void)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  int in_w8;
  int in_w9;
  int unaff_w20;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  
  while( true ) {
    if (in_w9 < 0x11) {
      if (unaff_w20 == unaff_w22) {
        return;
      }
      lVar3 = *(long *)(unaff_x23 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
      if (in_w8 == 2) {
        if ((uVar1 & 1) == 0) {
          lVar3 = FUN_03ac4090();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03ac4090();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        FUN_050a46dc();
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        FUN_050a46dc();
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
      }
      else {
        if (in_w8 != 1) {
          if ((uVar1 & 1) == 0) {
            lVar3 = FUN_03ac4090();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03ac4090();
          }
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          FUN_050a5458();
          return;
        }
        if ((uVar1 & 1) == 0) {
          lVar3 = FUN_03ac4090();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03ac4090();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
      }
      FUN_050a46dc();
      return;
    }
    if (unaff_w24 == -1) {
      lVar3 = *(long *)(unaff_x23 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03ac4090();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03ac4090();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      FUN_050a5090();
      return;
    }
    lVar3 = *(long *)(unaff_x23 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    iVar2 = FUN_050a4d64();
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090(*(long *)(unaff_x23 + 0x20));
    }
    FUN_050a4a20();
    unaff_w20 = iVar2 + -1;
    unaff_w24 = unaff_w24 + -1;
    if (unaff_w20 <= unaff_w22) break;
    in_w8 = unaff_w20 - unaff_w22;
    in_w9 = in_w8 + 1;
  }
  return;
}


