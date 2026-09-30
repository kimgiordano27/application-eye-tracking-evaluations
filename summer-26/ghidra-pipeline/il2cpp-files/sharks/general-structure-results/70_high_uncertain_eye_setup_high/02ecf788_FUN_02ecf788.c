/*
FUNCTION_NAME: FUN_02ecf788
ENTRY_POINT: 02ecf788
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_02ecf788(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_0381bf68;
  puVar1 = PTR_DAT_037f9758;
  if ((DAT_03a2a6e4 & 1) == 0) {
    FUN_017fc350(PTR_DAT_0381bf68);
    FUN_017fc350(PTR_DAT_037f9758);
    DAT_03a2a6e4 = 1;
  }
  uVar3 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
  FUN_02ecd968(uVar3,param_1,1,param_2,param_3,param_4);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar4 = FUN_02c303d4(0);
  lVar5 = FUN_02ecf62c(param_1,1,uVar3,uVar4);
  if (lVar5 != 0) {
    OVRPlugin_Media__SetMrcHeadsetControllerPose(lVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


