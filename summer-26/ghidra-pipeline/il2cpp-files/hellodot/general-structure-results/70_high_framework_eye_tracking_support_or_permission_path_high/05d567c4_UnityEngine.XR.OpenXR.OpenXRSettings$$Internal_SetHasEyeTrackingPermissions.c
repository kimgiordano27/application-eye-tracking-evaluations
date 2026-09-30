/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_SetHasEyeTrackingPermissions
ENTRY_POINT: 05d567c4
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_9;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


void UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetHasEyeTrackingPermissions(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int in_w9;
  undefined4 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  
  while( true ) {
    if (in_w9 == 0) {
      thunk_FUN_02cd038c(param_1);
    }
    uVar3 = FUN_04f497f4(unaff_x21,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (unaff_x21 == (long *)0x0) break;
    lVar2 = (**(code **)(*unaff_x21 + 0x6e8))
                      (unaff_x21,unaff_w19,*(undefined8 *)(*unaff_x21 + 0x6f0));
    if (lVar2 == 0) break;
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar3 = 0;
      uVar5 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        if (unaff_x20 == 0) goto LAB_05d567fc;
        uVar4 = *(undefined8 *)(lVar2 + 0x20 + uVar3 * 8);
        lVar6 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_05d567fc;
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
        }
        else {
          FUN_039683cc();
        }
        uVar5 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    unaff_x21 = (long *)(**(code **)(*unaff_x21 + 0x8a8))
                                  (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x8b0));
    param_1 = *unaff_x24;
    in_w9 = *(int *)(param_1 + 0xe0);
  }
LAB_05d567fc:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


