/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 01d79ac8
PROGRAM: LethalApe-libil2cpp.so
SCORE: 133
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8
Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingEnabled(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong in_x9;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *plVar4;
  ulong unaff_x24;
  long unaff_x25;
  
  while (unaff_x24 < in_x9) {
    lVar1 = *(long *)(param_1 + unaff_x24 * 8 + 0x20);
    if ((lVar1 == 0) || (lVar1 = FUN_01dce1c0(lVar1,0), unaff_x22 == (long *)0x0)) {
LAB_01d79b98:
                    /* WARNING: Subroutine does not return */
      FUN_00a190f0();
    }
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_00a05b84(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
LAB_01d79ba0:
      uVar3 = thunk_FUN_00a1ec00();
                    /* WARNING: Subroutine does not return */
      FUN_00a190b8(uVar3,0);
    }
                    /* try { // try from 01d79b04 to 01e79b9b has its CatchHandler @ 01d79b04
                       catch() { ... } // from try @ 01d79b04 with catch @ 01d79b04
                       catch() { ... } // from try @ 01d79bbc with catch @ 01d79b04
                       catch() { ... } // from try @ 01d79bec with catch @ 01d79b04
                       catch() { ... } // from try @ 01d79c14 with catch @ 01d79b04
                       catch() { ... } // from try @ 01d79c54 with catch @ 01d79b04 */
    if (*(uint *)(unaff_x22 + 3) <= unaff_x24) break;
    plVar4 = (long *)((long)unaff_x22 + unaff_x25);
    *plVar4 = lVar1;
    while( true ) {
      thunk_FUN_00a502ec(plVar4,lVar1);
      unaff_x24 = unaff_x24 + 1;
      unaff_x25 = unaff_x25 + 8;
      if (unaff_x20 == unaff_x24) {
        *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0x130);
        thunk_FUN_00a502ec(unaff_x19 + 0x120);
        return *(undefined8 *)(unaff_x19 + 0x130);
      }
      unaff_x22 = (long *)*unaff_x21;
      if (unaff_x24 != 0) break;
      lVar1 = FUN_01da6000();
      if (unaff_x22 == (long *)0x0) goto LAB_01d79b98;
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_00a05b84(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0))
      goto LAB_01d79ba0;
      if ((int)unaff_x22[3] == 0) goto LAB_01d79b9c;
      plVar4 = unaff_x22 + 4;
      *plVar4 = lVar1;
    }
    param_1 = *(long *)(unaff_x19 + 0x700);
    if (param_1 == 0) goto LAB_01d79b98;
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  }
LAB_01d79b9c:
                    /* WARNING: Subroutine does not return */
  FUN_00a190f8();
}


