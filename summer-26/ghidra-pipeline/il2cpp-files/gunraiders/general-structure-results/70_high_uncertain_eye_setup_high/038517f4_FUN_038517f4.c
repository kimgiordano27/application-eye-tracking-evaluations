/*
FUNCTION_NAME: FUN_038517f4
ENTRY_POINT: 038517f4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_038517f4(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
  ;
                    /* try { // try from 03851810 to 03951813 has its CatchHandler @ 03851fd4 */
                    /* try { // try from 03851814 to 0395181f has its CatchHandler @ 03852020 */
  if ((DAT_045392f2 & 1) == 0) {
    FUN_01c5d288(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                );
    DAT_045392f2 = 1;
  }
  FUN_03850fd8(param_1,*(undefined8 *)puVar1);
  if (param_2 < 0x20) {
    *(uint *)(param_1 + 0x54) = param_2;
    return;
  }
  thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
  uVar2 = thunk_FUN_01c496e0();
                    /* try { // try from 03851870 to 03951873 has its CatchHandler @ 03851fd0 */
                    /* try { // try from 03851874 to 0395187f has its CatchHandler @ 03851fa8 */
  uVar3 = thunk_FUN_01c273e8(PTR_DAT_0422fa28);
  FUN_03247e00(uVar2,uVar3,0);
  uVar3 = thunk_FUN_01c273e8(
                            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar2,uVar3);
}


