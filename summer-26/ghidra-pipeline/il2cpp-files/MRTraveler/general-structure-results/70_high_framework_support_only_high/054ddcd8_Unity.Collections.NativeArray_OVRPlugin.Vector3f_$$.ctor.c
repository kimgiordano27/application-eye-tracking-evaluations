/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 054ddcd8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>___ctor(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int iVar1;
  long lVar2;
  int unaff_w20;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  
  while( true ) {
    if ((bool)in_ZR || in_NG != in_OV) {
      return;
    }
    iVar1 = unaff_w20 - unaff_w22;
    if (iVar1 + 1 < 0x11) break;
    if (unaff_w24 == -1) {
      lVar2 = *(long *)(unaff_x23 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      FUN_054de258();
      return;
    }
    lVar2 = *(long *)(unaff_x23 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    iVar1 = FUN_054ddefc();
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244(*(long *)(unaff_x23 + 0x20));
    }
    FUN_054ddbec();
    unaff_w20 = iVar1 + -1;
    in_OV = SBORROW4(unaff_w20,unaff_w22);
    in_NG = unaff_w20 - unaff_w22 < 0;
    in_ZR = unaff_w20 == unaff_w22;
    unaff_w24 = unaff_w24 + -1;
  }
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 2) {
    lVar2 = *(long *)(unaff_x23 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    FUN_054dd8a0();
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    FUN_054dd8a0();
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
  }
  else {
    if (iVar1 != 1) {
      lVar2 = *(long *)(unaff_x23 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      FUN_054de668();
      return;
    }
    lVar2 = *(long *)(unaff_x23 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
  }
  FUN_054dd8a0();
  return;
}


