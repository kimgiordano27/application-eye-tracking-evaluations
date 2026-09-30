/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 01d79b38
PROGRAM: LethalApe-libil2cpp.so
SCORE: 131
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8
Unity_XR_Oculus_NativeMethods_Internal__SetEyeTrackedFoveatedRenderingEnabled(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *plVar3;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  
  do {
    lVar1 = thunk_FUN_00a05b84(unaff_x23,*(undefined8 *)(param_1 + 0x40));
    if (lVar1 == 0) {
LAB_01d79ba0:
      uVar2 = thunk_FUN_00a1ec00();
                    /* WARNING: Subroutine does not return */
      FUN_00a190b8(uVar2,0);
    }
    do {
      if ((int)unaff_x22[3] == 0) {
LAB_01d79b9c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01d79b9c to 01e79ba3 has its CatchHandler @ 01d79bf8 */
        FUN_00a190f8();
      }
      plVar3 = unaff_x22 + 4;
      *plVar3 = unaff_x23;
      while( true ) {
        thunk_FUN_00a502ec(plVar3,unaff_x23);
        unaff_x24 = unaff_x24 + 1;
        unaff_x25 = unaff_x25 + 8;
        if (unaff_x20 == unaff_x24) {
          *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0x130);
          thunk_FUN_00a502ec(unaff_x19 + 0x120);
          return *(undefined8 *)(unaff_x19 + 0x130);
        }
        unaff_x22 = (long *)*unaff_x21;
        if (unaff_x24 == 0) break;
        lVar1 = *(long *)(unaff_x19 + 0x700);
        if (lVar1 == 0) goto LAB_01d79b98;
        if (*(uint *)(lVar1 + 0x18) <= unaff_x24) goto LAB_01d79b9c;
        lVar1 = *(long *)(lVar1 + unaff_x24 * 8 + 0x20);
        if ((lVar1 == 0) || (unaff_x23 = FUN_01dce1c0(lVar1,0), unaff_x22 == (long *)0x0))
        goto LAB_01d79b98;
        if ((unaff_x23 != 0) &&
           (lVar1 = thunk_FUN_00a05b84(unaff_x23,*(undefined8 *)(*unaff_x22 + 0x40)), lVar1 == 0))
        goto LAB_01d79ba0;
        if (*(uint *)(unaff_x22 + 3) <= unaff_x24) goto LAB_01d79b9c;
        plVar3 = (long *)((long)unaff_x22 + unaff_x25);
        *plVar3 = unaff_x23;
      }
      unaff_x23 = FUN_01da6000();
      if (unaff_x22 == (long *)0x0) {
LAB_01d79b98:
                    /* WARNING: Subroutine does not return */
        FUN_00a190f0();
      }
    } while (unaff_x23 == 0);
    param_1 = *unaff_x22;
  } while( true );
}


