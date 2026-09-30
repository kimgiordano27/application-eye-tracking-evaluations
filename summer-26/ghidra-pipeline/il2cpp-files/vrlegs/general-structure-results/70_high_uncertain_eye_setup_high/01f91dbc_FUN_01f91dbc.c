/*
FUNCTION_NAME: FUN_01f91dbc
ENTRY_POINT: 01f91dbc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01f91e78) */
/* WARNING: Removing unreachable block (ram,0x01f91e98) */

long FUN_01f91dbc(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char local_3c [4];
  long local_38;
  
                    /* try { // try from 01f91dc8 to 02091dcf has its CatchHandler @ 01f92010 */
                    /* try { // try from 01f91ddc to 02091ddf has its CatchHandler @ 01f9200c */
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_01a47054(param_4);
  }
  uVar1 = FUN_027d6ea0(param_2,0);
                    /* try { // try from 01f91dfc to 02091dff has its CatchHandler @ 01f9212c */
  local_3c[0] = '\0';
  FUN_027e0bd8(uVar1,local_3c,0);
  lVar3 = *param_1;
  thunk_FUN_01a4b338();
  if (lVar3 == 0) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* try { // try from 01f91e28 to 02091e33 has its CatchHandler @ 01f91ffc */
    (**(code **)(param_3 + 0x18))
              (*(undefined8 *)(param_3 + 0x40),&local_38,*(undefined8 *)(param_3 + 0x28));
    thunk_FUN_01a4b338();
    *param_1 = local_38;
                    /* try { // try from 01f91e40 to 02091e5b has its CatchHandler @ 01f92128 */
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1,local_38);
    if (*param_1 == 0) {
                    /* try { // try from 01f91ea8 to 02091eaf has its CatchHandler @ 01f91ff8 */
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
      uVar1 = thunk_FUN_01a89e68();
      uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cd8558);
      FUN_0276a4a8(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar1,param_4);
    }
  }
                    /* try { // try from 01f91e5c to 02091ea7 has its CatchHandler @ 01f91ab0 */
  if (local_3c[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar1,0);
  }
  return *param_1;
}


