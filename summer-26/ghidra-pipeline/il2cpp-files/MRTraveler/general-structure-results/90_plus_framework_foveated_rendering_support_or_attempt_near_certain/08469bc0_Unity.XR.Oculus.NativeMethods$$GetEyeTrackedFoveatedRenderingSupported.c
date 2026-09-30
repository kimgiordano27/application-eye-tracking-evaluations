/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 08469bc0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 122
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8 Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingSupported(void)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  
  thunk_FUN_03cd7500();
  uVar2 = FUN_0860c9e0(unaff_w20,*(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 4),0);
  if ((uVar2 & 1) == 0) {
    lVar3 = *unaff_x21;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar3 = *unaff_x21;
    }
    uVar2 = FUN_0860c9e0(unaff_w20,**(undefined4 **)(lVar3 + 0xb8),0);
    if ((uVar2 & 1) == 0) {
      lVar3 = *unaff_x21;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar3 = *unaff_x21;
      }
      uVar2 = FUN_0860c9e0(unaff_w20,*(undefined4 *)(*(long *)(lVar3 + 0xb8) + 8),0);
      if ((uVar2 & 1) == 0) {
        lVar3 = *unaff_x21;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar3 = *unaff_x21;
        }
        uVar2 = FUN_0860c9e0(unaff_w20,*(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0xc),0);
        if ((uVar2 & 1) == 0) {
          lVar3 = *unaff_x21;
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar3 = *unaff_x21;
          }
          uVar2 = FUN_0860c9e0(unaff_w20,*(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x10),0);
          if ((uVar2 & 1) == 0) {
            lVar3 = *unaff_x21;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar3 = *unaff_x21;
            }
            uVar2 = FUN_0860c9e0(unaff_w20,*(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x14),0);
            if ((uVar2 & 1) == 0) {
              lVar3 = *unaff_x21;
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar3 = *unaff_x21;
              }
              uVar2 = FUN_0860c9e0(unaff_w20,*(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x1c),0);
              if ((uVar2 & 1) == 0) {
                lVar3 = *unaff_x21;
                if (*(int *)(lVar3 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                  lVar3 = *unaff_x21;
                }
                uVar2 = FUN_0860c9e0(unaff_w20,*(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x18),0);
                if ((uVar2 & 1) == 0) {
                  uVar4 = *(undefined8 *)PTR_DAT_08f0fe68;
                  if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                  }
                  uVar4 = FUN_0710fcf0(uVar4,0);
                  if (*(int *)(*(long *)PTR_DAT_08e6b480 + 0xe0) == 0) {
                    thunk_FUN_03cd7500(*(long *)PTR_DAT_08e6b480);
                  }
                  lVar3 = FUN_0713670c(uVar4,0);
                  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  uVar1 = FUN_07119d8c(lVar3,0);
                  uVar4 = 0;
                }
                else {
                  uVar4 = 1;
                  uVar1 = 6;
                }
              }
              else {
                uVar4 = 1;
                uVar1 = 7;
              }
            }
            else {
              uVar4 = 1;
              uVar1 = 5;
            }
          }
          else {
            uVar4 = 1;
            uVar1 = 4;
          }
        }
        else {
          uVar4 = 1;
          uVar1 = 3;
        }
      }
      else {
        uVar4 = 1;
        uVar1 = 2;
      }
      goto LAB_08469c20;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  uVar4 = 1;
LAB_08469c20:
  *unaff_x19 = uVar1;
  return uVar4;
}


