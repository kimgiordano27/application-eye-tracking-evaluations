/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 033c34a0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


uint OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(long *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  long *unaff_x25;
  
  do {
    uVar3 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24 - 1) {
LAB_033c3524:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    plVar4 = *(long **)(unaff_x20 + unaff_x22 * 8 + 0x20);
    if (plVar4 == (long *)0x0) break;
    uVar5 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
                    /* try { // try from 033c34dc to 034c3503 has its CatchHandler @ 033c39cc */
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*unaff_x25);
    }
    uVar2 = FUN_033ab18c(uVar3,uVar5,0);
                    /* try { // try from 033c3508 to 034c350f has its CatchHandler @ 033c39c8 */
    if (((uVar2 & 1) != 0) || (unaff_w23 == unaff_w24)) {
                    /* try { // try from 033c3544 to 034c356f has its CatchHandler @ 033c39f4 */
      return (uVar2 ^ 1) & 1;
    }
    unaff_x22 = (long)(int)unaff_w24;
    bVar1 = *(uint *)(unaff_x19 + 0x18) <= unaff_w24;
    unaff_w24 = unaff_w24 + 1;
    if (bVar1) goto LAB_033c3524;
    param_1 = *(long **)(unaff_x19 + unaff_x22 * 8 + 0x20);
  } while (param_1 != (long *)0x0);
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


