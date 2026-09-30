/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetTrackingTransformRelativePose
ENTRY_POINT: 05d4a4d8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int in_w8;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_02fdcff0();
    param_1 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 0x48);
  if (lVar4 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      param_1 = *unaff_x22;
    }
    uVar5 = **(undefined8 **)(param_1 + 0xb8);
    lVar4 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb9250);
    FUN_057fb970(lVar4,uVar5,*(undefined8 *)PTR_DAT_06fb9270,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
    *plVar3 = lVar4;
    thunk_FUN_03048534(plVar3,lVar4);
    param_1 = *unaff_x22;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    param_1 = *unaff_x22;
  }
  puVar2 = PTR_DAT_06fb9268;
  puVar1 = PTR_DAT_06fb9260;
  lVar6 = *(long *)(*(long *)(param_1 + 0xb8) + 0x50);
  if (lVar6 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      param_1 = *unaff_x22;
    }
    uVar5 = **(undefined8 **)(param_1 + 0xb8);
    lVar6 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fb9258);
    FUN_05803880(lVar6,uVar5,*(undefined8 *)PTR_DAT_06fb9278,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
    *plVar3 = lVar6;
    thunk_FUN_03048534(plVar3,lVar6);
  }
  uVar5 = thunk_FUN_0301080c(*(undefined8 *)puVar2);
  FUN_049238e4(uVar5,7,lVar4,lVar6,*(undefined8 *)puVar1);
  return uVar5;
}


