/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 085cc8c4
PROGRAM: cac-libil2cpp.so
SCORE: 130
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingEnabled(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  
code_r0x085cc8c4:
  FUN_056b08d0();
  do {
    uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
    unaff_x25 = unaff_x25 + 1;
    if ((long)(int)*(uint *)(unaff_x22 + 0x18) <= (long)unaff_x25) {
      do {
        unaff_x21 = (long *)(**(code **)(*unaff_x21 + 0x8f8))
                                      (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x900));
        if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)(unaff_x24 + 0xe0));
        }
        uVar4 = FUN_074cf3e8(unaff_x21,0,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        if ((unaff_x21 == (long *)0x0) ||
           (unaff_x22 = (**(code **)(*unaff_x21 + 0x8b8))
                                  (unaff_x21,unaff_w19,*(undefined8 *)(*unaff_x21 + 0x8c0)),
           unaff_x22 == 0)) goto LAB_085cc938;
      } while ((int)*(ulong *)(unaff_x22 + 0x18) < 1);
      unaff_x25 = 0;
      uVar4 = *(ulong *)(unaff_x22 + 0x18) & 0xffffffff;
      unaff_x26 = unaff_x22 + 0x20;
    }
    if (uVar4 <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    if (unaff_x20 == 0) {
LAB_085cc938:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar3 = *(long *)(unaff_x20 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x26 + unaff_x25 * 8);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar3 == 0) goto LAB_085cc938;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (*(uint *)(lVar3 + 0x18) <= uVar1) goto code_r0x085cc8c4;
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
    thunk_FUN_03f86000();
  } while( true );
}


