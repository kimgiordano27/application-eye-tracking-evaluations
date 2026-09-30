/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetTrackingTransformRawPose
ENTRY_POINT: 01db5048
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetTrackingTransformRawPose
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    *(long *)(param_1 + 0x18) = param_2;
    thunk_FUN_0106e12c();
    *(undefined8 *)(param_1 + 0x20) = param_3;
    thunk_FUN_0106e12c((undefined8 *)(param_1 + 0x20),param_3);
    *(undefined2 *)(param_1 + 0x41) = 0;
    FUN_01db51b8(param_1,param_4,param_5,1);
    return;
  }
  thunk_FUN_010303a8(PTR_DAT_0234bbe8);
  uVar1 = thunk_FUN_010400dc();
  uVar2 = thunk_FUN_010303a8(PTR_DAT_0234f340);
  FUN_01c5e120(uVar1,uVar2,0);
  uVar2 = thunk_FUN_010303a8(PTR_DAT_0235a580);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar1,uVar2);
}


