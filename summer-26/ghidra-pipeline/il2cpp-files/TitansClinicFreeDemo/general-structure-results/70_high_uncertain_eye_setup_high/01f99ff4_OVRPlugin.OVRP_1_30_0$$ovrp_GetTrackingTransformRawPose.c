/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetTrackingTransformRawPose
ENTRY_POINT: 01f99ff4
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


void OVRPlugin_OVRP_1_30_0__ovrp_GetTrackingTransformRawPose(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_x9;
  char unaff_w19;
  long unaff_x20;
  
  if (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_2) {
    unaff_x20 = 0;
  }
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  if (unaff_x20 != 0) {
    if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_011f6bec(unaff_x20,(long)unaff_w19);
    return;
  }
  uVar1 = thunk_FUN_01279b34(PTR_DAT_027bcb60);
  thunk_FUN_01279b34(PTR_DAT_027b3eb0);
  uVar2 = thunk_FUN_0124bba8();
  uVar3 = thunk_FUN_01279b34(PTR_DAT_027c1218);
  FUN_01e7598c(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_01279b34(PTR_DAT_027c1d48);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar2,uVar1);
}


