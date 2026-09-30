/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRawPose
ENTRY_POINT: 01f7c9f4
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
OVRPlugin__GetTrackingTransformRawPose
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_027be4d0;
  if ((DAT_0293ddf2 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027be4d0);
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    DAT_0293ddf2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  if (DAT_0293daf8 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027be4d0);
    DAT_0293daf8 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01220628();
    lVar2 = *(long *)puVar1;
  }
  if (**(char **)(lVar2 + 0xb8) != '\0') {
    uVar3 = FUN_01f7cb04(param_1,param_2,param_3,param_4);
    return uVar3;
  }
  if ((int)param_2 == 0) {
    return 0;
  }
  if (param_5 != 0) {
    uVar3 = thunk_FUN_01f1723c(param_5,param_1,param_2,param_3,param_4,1,0);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


