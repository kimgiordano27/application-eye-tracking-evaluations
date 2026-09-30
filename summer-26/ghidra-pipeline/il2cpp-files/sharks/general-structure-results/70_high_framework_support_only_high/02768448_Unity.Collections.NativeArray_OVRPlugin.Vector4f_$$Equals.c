/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Equals
ENTRY_POINT: 02768448
PROGRAM: sharks-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Equals(void)

{
  int iVar1;
  long lVar2;
  int in_w3;
  int unaff_w20;
  int unaff_w22;
  long unaff_x23;
  
  while( true ) {
    in_w3 = in_w3 + -1;
    iVar1 = unaff_w20 - unaff_w22;
    if (iVar1 + 1 < 0x11) {
      if (iVar1 == 0) {
        return;
      }
      if (iVar1 == 2) {
        lVar2 = *(long *)(unaff_x23 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        FUN_02768154();
        if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        FUN_02768154();
        if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
      }
      else {
        if (iVar1 != 1) {
          lVar2 = *(long *)(unaff_x23 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_0185daa4();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_0185daa4();
          }
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          FUN_02768d18();
          return;
        }
        lVar2 = *(long *)(unaff_x23 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
      }
      FUN_02768154();
      return;
    }
    if (in_w3 == -1) break;
    lVar2 = *(long *)(unaff_x23 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    iVar1 = Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy();
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4(*(long *)(unaff_x23 + 0x20));
    }
    FUN_0276841c();
    unaff_w20 = iVar1 + -1;
    if (unaff_w20 <= unaff_w22) {
      return;
    }
  }
  lVar2 = *(long *)(unaff_x23 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  FUN_027689e0();
  return;
}


