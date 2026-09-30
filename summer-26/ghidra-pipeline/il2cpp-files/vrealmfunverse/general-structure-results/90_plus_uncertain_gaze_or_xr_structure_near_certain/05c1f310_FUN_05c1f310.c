/*
FUNCTION_NAME: FUN_05c1f310
ENTRY_POINT: 05c1f310
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_permission_setup
*/


long * FUN_05c1f310(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_066d5f7f & 1) == 0) {
    FUN_02b3c81c(Method_OVRManager_OnPermissionGranted__);
    FUN_02b3c81c(Method_OVRMicrogesturesSample_<Start>b__19_0__);
    DAT_066d5f7f = 1;
  }
  puVar2 = Method_OVRMicrogesturesSample_<Start>b__19_0__;
  if ((*(long *)(param_1 + 0x58) == 0) && (*(long *)(param_1 + 0x60) == 0)) {
    plVar3 = (long *)FUN_02b3c908(*(undefined8 *)Method_OVRManager_OnPermissionGranted__,0);
    return plVar3;
  }
  plVar3 = (long *)FUN_02b3c908(*(undefined8 *)Method_OVRManager_OnPermissionGranted__,1);
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_05c1f22c(lVar4,uVar6,uVar1);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
    uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_02bb0e9c(plVar3 + 4,lVar4);
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


