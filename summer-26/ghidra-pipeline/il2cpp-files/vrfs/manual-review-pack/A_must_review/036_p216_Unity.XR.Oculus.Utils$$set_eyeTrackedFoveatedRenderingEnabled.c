/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 039e318c
PROGRAM: vrfs-libil2cpp.so
SCORE: 148
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_Utils__set_eyeTrackedFoveatedRenderingEnabled(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  int iVar3;
  long lVar4;
  ulong unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  while ((long)unaff_x21 < (long)(int)param_1) {
    if (param_1 <= unaff_x21) {
LAB_039e3328:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    lVar4 = unaff_x22[unaff_x21 + 4];
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    lVar4 = FUN_039e3690(lVar4);
    if ((lVar4 != 0) &&
       (lVar1 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar1 == 0)) {
                    /* try { // try from 039e332c to 03ae3343 has its CatchHandler @ 039e3378 */
      uVar2 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar2,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_x21) goto LAB_039e3328;
    unaff_x22[unaff_x21 + 4] = lVar4;
    thunk_FUN_01656ef8((long)unaff_x22 + unaff_x26,lVar4);
    unaff_x22 = *(long **)(unaff_x19 + 0x50);
    unaff_x21 = unaff_x21 + 1;
    unaff_x26 = unaff_x26 + 8;
    if (unaff_x22 == (long *)0x0) goto LAB_039e330c;
    param_1 = (ulong)*(uint *)(unaff_x22 + 3);
  }
  lVar4 = *(long *)(unaff_x19 + 0xd8);
  if (lVar4 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar3) {
        lVar4 = *(long *)(unaff_x19 + 0xd0);
        if (lVar4 != 0) {
          iVar3 = 0;
          goto Unity_XR_Oculus_Utils__SetFoveationLevel;
        }
        break;
      }
      lVar4 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                        (lVar4,iVar3,*unaff_x24);
      if (lVar4 != 0) {
        lVar4 = *(long *)(unaff_x19 + 0xd8);
        if (lVar4 == 0) break;
                    /* try { // try from 039e3238 to 03ae323f has its CatchHandler @ 039e3310 */
        uVar2 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                          (lVar4,iVar3,*unaff_x24);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                    /* try { // try from 039e325c to 03ae32a3 has its CatchHandler @ 039e3314 */
          thunk_FUN_016466fc(*unaff_x23);
        }
        uVar2 = FUN_039e3690(uVar2);
        FUN_043c219c(lVar4,iVar3,uVar2,*unaff_x25);
      }
      lVar4 = *(long *)(unaff_x19 + 0xd8);
      iVar3 = iVar3 + 1;
    } while (lVar4 != 0);
  }
  goto LAB_039e330c;
Unity_XR_Oculus_Utils__SetFoveationLevel:
  do {
    if (*(int *)(lVar4 + 0x18) <= iVar3) {
      return;
    }
    lVar4 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                      (lVar4,iVar3,*unaff_x24);
    if (lVar4 != 0) {
      lVar4 = *(long *)(unaff_x19 + 0xd0);
      if (lVar4 == 0) break;
      uVar2 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                        (lVar4,iVar3,*unaff_x24);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_016466fc(*unaff_x23);
      }
      uVar2 = FUN_039e3690(uVar2);
      FUN_043c219c(lVar4,iVar3,uVar2,*unaff_x25);
    }
    lVar4 = *(long *)(unaff_x19 + 0xd0);
    iVar3 = iVar3 + 1;
  } while (lVar4 != 0);
LAB_039e330c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


