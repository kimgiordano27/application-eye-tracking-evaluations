/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_SetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 07cb1420
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
OVRPlugin_OVRP_1_99_0__ovrp_SetTrackingPoseEnabledForInvisibleSession
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_0a526ae3 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f51348);
    FUN_04447ba8(PTR_DAT_09f51360);
    FUN_04447ba8(PTR_DAT_09f51368);
    DAT_0a526ae3 = 1;
  }
                    /* try { // try from 07cb145c to 07db1483 has its CatchHandler @ 07cb163c */
  uVar3 = FUN_078b4450(param_2,0);
  puVar2 = PTR_DAT_09f51368;
  puVar1 = PTR_DAT_09f51360;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_09f51348 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar4 = FUN_07cb1514(param_2);
    uVar5 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
    FUN_06669d4c(uVar5,uVar4,*(undefined8 *)puVar1);
    return uVar5;
  }
  thunk_FUN_044adef4(PTR_DAT_09f26ee0);
  uVar4 = thunk_FUN_0448520c();
  uVar5 = thunk_FUN_044adef4(PTR_DAT_09f51350);
  FUN_0952c8a0(uVar4,uVar5,0);
  uVar5 = thunk_FUN_044adef4(PTR_DAT_09f51370);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar4,uVar5);
}


