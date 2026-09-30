/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 01d79a58
PROGRAM: LethalApe-libil2cpp.so
SCORE: 131
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8
Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_009ddef4();
  }
  FUN_00bec868();
  if (0 < (int)unaff_x20) {
    uVar5 = 0;
    lVar6 = 0x20;
    do {
      plVar4 = (long *)*unaff_x21;
      if (uVar5 == 0) {
        lVar3 = FUN_01da6000();
        if (plVar4 == (long *)0x0) goto LAB_01d79b98;
        if ((lVar3 != 0) &&
           (lVar1 = thunk_FUN_00a05b84(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar1 == 0)) {
LAB_01d79ba0:
          uVar2 = thunk_FUN_00a1ec00();
                    /* WARNING: Subroutine does not return */
          FUN_00a190b8(uVar2,0);
        }
        if ((int)plVar4[3] == 0) goto LAB_01d79b9c;
        plVar4 = plVar4 + 4;
        *plVar4 = lVar3;
      }
      else {
        lVar3 = *(long *)(unaff_x19 + 0x700);
        if (lVar3 == 0) {
LAB_01d79b98:
                    /* WARNING: Subroutine does not return */
          FUN_00a190f0();
        }
        if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_01d79b9c:
                    /* WARNING: Subroutine does not return */
          FUN_00a190f8();
        }
        lVar3 = *(long *)(lVar3 + uVar5 * 8 + 0x20);
        if ((lVar3 == 0) || (lVar3 = FUN_01dce1c0(lVar3,0), plVar4 == (long *)0x0))
        goto LAB_01d79b98;
        if ((lVar3 != 0) &&
           (lVar1 = thunk_FUN_00a05b84(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar1 == 0))
        goto LAB_01d79ba0;
        if (*(uint *)(plVar4 + 3) <= uVar5) goto LAB_01d79b9c;
        plVar4 = (long *)((long)plVar4 + lVar6);
        *plVar4 = lVar3;
      }
      thunk_FUN_00a502ec(plVar4,lVar3);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (unaff_x20 != uVar5);
  }
  *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0x130);
  thunk_FUN_00a502ec(unaff_x19 + 0x120);
  return *(undefined8 *)(unaff_x19 + 0x130);
}


