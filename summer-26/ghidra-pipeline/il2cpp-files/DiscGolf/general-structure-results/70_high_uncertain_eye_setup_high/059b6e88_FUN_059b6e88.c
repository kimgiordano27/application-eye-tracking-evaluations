/*
FUNCTION_NAME: FUN_059b6e88
ENTRY_POINT: 059b6e88
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_059b6e88(long *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_18;
  
                    /* try { // try from 059b6e8c to 05ab6e93 has its CatchHandler @ 059b6f80 */
                    /* try { // try from 059b6e9c to 05ab6eab has its CatchHandler @ 059b6f90 */
  lVar1 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
  local_18 = param_1[10];
                    /* try { // try from 059b6eb4 to 05ab6eb7 has its CatchHandler @ 059b6fa8 */
  if (lVar1 + param_2 <= local_18) {
                    /* try { // try from 059b6eb8 to 05ab6f4b has its CatchHandler @ 059b6ad0 */
    return;
  }
  uVar2 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x68),&local_18);
  uVar3 = thunk_FUN_02dfd288(OVRRaycaster_<>c_TypeInfo);
  uVar2 = FUN_0536388c(uVar3,uVar2,0);
  thunk_FUN_02dfd288(OVRPlugin_OVRP_1_73_0_TypeInfo);
  uVar3 = thunk_FUN_02dd3144();
  FUN_059b6f30(uVar3,uVar2);
  uVar2 = thunk_FUN_02dfd288(OVRRaycaster_RaycastHit_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar3,uVar2);
}


