/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Rectf>$$MoveNext
ENTRY_POINT: 0291a15c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Rectf>__MoveNext(void)

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
          lVar2 = FUN_01ae9e74();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01ae9e74();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_01ae9e74();
        }
        FUN_02919f3c();
        if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_01ae9e74();
        }
        FUN_02919f3c();
        if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_01ae9e74();
        }
      }
      else {
        if (iVar1 != 1) {
          lVar2 = *(long *)(unaff_x23 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01ae9e74();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01ae9e74();
          }
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
            FUN_01ae9e74();
          }
          FUN_0291a9bc();
          return;
        }
        lVar2 = *(long *)(unaff_x23 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01ae9e74();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01ae9e74();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_01ae9e74();
        }
      }
      FUN_02919f3c();
      return;
    }
    if (in_w3 == -1) break;
    lVar2 = *(long *)(unaff_x23 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ae9e74();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ae9e74();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ae9e74();
    }
    iVar1 = FUN_0291a440();
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ae9e74(*(long *)(unaff_x23 + 0x20));
    }
    FUN_0291a130();
    unaff_w20 = iVar1 + -1;
    if (unaff_w20 <= unaff_w22) {
      return;
    }
  }
  lVar2 = *(long *)(unaff_x23 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ae9e74();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ae9e74();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  FUN_0291a6d0();
  return;
}


