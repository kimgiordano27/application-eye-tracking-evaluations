/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 08469c44
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 124
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8 Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingEnabled(void)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *unaff_x19;
  long *unaff_x21;
  
  uVar2 = FUN_0860c9e0();
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar2 = FUN_0860c9e0();
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar2 = FUN_0860c9e0();
      if ((uVar2 & 1) == 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar2 = FUN_0860c9e0();
        if ((uVar2 & 1) == 0) {
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar2 = FUN_0860c9e0();
          if ((uVar2 & 1) == 0) {
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            uVar2 = FUN_0860c9e0();
            if ((uVar2 & 1) == 0) {
              uVar3 = *(undefined8 *)PTR_DAT_08f0fe68;
              if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar3 = FUN_0710fcf0(uVar3,0);
              if (*(int *)(*(long *)PTR_DAT_08e6b480 + 0xe0) == 0) {
                thunk_FUN_03cd7500(*(long *)PTR_DAT_08e6b480);
              }
              lVar4 = FUN_0713670c(uVar3,0);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              uVar1 = FUN_07119d8c(lVar4,0);
              uVar3 = 0;
            }
            else {
              uVar3 = 1;
              uVar1 = 6;
            }
          }
          else {
            uVar3 = 1;
            uVar1 = 7;
          }
        }
        else {
          uVar3 = 1;
          uVar1 = 5;
        }
      }
      else {
        uVar3 = 1;
        uVar1 = 4;
      }
    }
    else {
      uVar3 = 1;
      uVar1 = 3;
    }
  }
  else {
    uVar3 = 1;
    uVar1 = 2;
  }
  *unaff_x19 = uVar1;
  return uVar3;
}


