/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Equals
ENTRY_POINT: 054df390
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Equals(void)

{
  int iVar1;
  long lVar2;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  
  do {
    lVar2 = FUN_03cf1244();
    do {
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
      iVar1 = FUN_054df64c();
      if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244(*(long *)(unaff_x23 + 0x20));
      }
      FUN_054df33c();
      unaff_w24 = unaff_w24 + -1;
      if (iVar1 + -1 <= unaff_w22) {
        return;
      }
      iVar1 = (iVar1 + -1) - unaff_w22;
      if (iVar1 + 1 < 0x11) {
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
          FUN_054df074();
          if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
            FUN_03cf1244();
          }
          FUN_054df074();
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
            FUN_054dfc38();
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
        FUN_054df074();
        return;
      }
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
        FUN_054df900();
        return;
      }
      lVar2 = *(long *)(unaff_x23 + 0x20);
    } while ((*(byte *)(lVar2 + 0x135) & 1) != 0);
  } while( true );
}


