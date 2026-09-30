/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 01f7c8d4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__GetCurrentTrackingTransformPose
          (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027be4d0);
    thunk_FUN_01279b34(PTR_DAT_027c0dc0);
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    *(undefined1 *)(unaff_x25 + 0xdf1) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  if (DAT_0293daf8 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027be4d0);
    DAT_0293daf8 = '\x01';
  }
  lVar1 = *unaff_x24;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01220628();
    lVar1 = *unaff_x24;
  }
  if (**(char **)(lVar1 + 0xb8) != '\0') {
    uVar2 = FUN_01f78a78(param_2,param_3,param_4);
    return uVar2;
  }
  if ((int)param_3 == 0) {
    return 0;
  }
  if (unaff_x23 != 0) {
    uVar2 = thunk_FUN_01f1723c();
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


