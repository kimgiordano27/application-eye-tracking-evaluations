/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyFrom
ENTRY_POINT: 050a334c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyFrom(void)

{
  ushort uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int iVar2;
  long lVar3;
  int in_w8;
  int unaff_w20;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  
  while( true ) {
    if ((bool)in_ZR || in_NG != in_OV) {
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
        if (in_w8 != 1) {
          if ((uVar1 & 1) == 0) {
            lVar3 = FUN_03ac4090();
          }
                    /* try { // try from 050a35f4 to 051a366b has its CatchHandler @ 050a366c */
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
          FUN_050a3cbc();
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
      FUN_050a3064();
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
      FUN_050a394c();
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
    iVar2 = Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Equals();
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090(*(long *)(unaff_x23 + 0x20));
    }
    FUN_050a3310();
    unaff_w20 = iVar2 + -1;
    unaff_w24 = unaff_w24 + -1;
    if (unaff_w20 <= unaff_w22) break;
    in_w8 = unaff_w20 - unaff_w22;
    in_OV = SBORROW4(in_w8 + 1,0x10);
    in_NG = in_w8 + -0xf < 0;
    in_ZR = in_w8 + 1 == 0x10;
  }
  return;
}


