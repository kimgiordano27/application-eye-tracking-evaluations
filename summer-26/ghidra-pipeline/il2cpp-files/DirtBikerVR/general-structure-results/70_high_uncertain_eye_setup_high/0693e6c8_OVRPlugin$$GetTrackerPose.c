/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 0693e6c8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackerPose(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_08486738;
  if ((DAT_0897cf85 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486738);
    FUN_03a8a718(PTR_DAT_084b61f0);
    DAT_0897cf85 = 1;
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0x3d4ccccd;
  uVar2 = FUN_0693d5ac(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)puVar1);
  }
  uVar3 = FUN_07c9e200(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0693e76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x338))
              (param_1,*(undefined8 *)PTR_DAT_084b61f0,*(undefined8 *)(*param_1 + 0x340));
    return;
  }
  return;
}


