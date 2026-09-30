/*
FUNCTION_NAME: FUN_05cf040c
ENTRY_POINT: 05cf040c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05cf040c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 05cf0410 to 05df0417 has its CatchHandler @ 05cf07a4 */
                    /* try { // try from 05cf041c to 05df042f has its CatchHandler @ 05cf0794 */
  if ((DAT_06dc2dc0 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ff488);
                    /* try { // try from 05cf0438 to 05df043b has its CatchHandler @ 05cf07a8 */
    FUN_02d965b8(OVRPlugin_OVRP_1_102_0_TypeInfo);
                    /* try { // try from 05cf043c to 05df057f has its CatchHandler @ 05cf017c */
    DAT_06dc2dc0 = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_102_0_TypeInfo;
  if (param_1 != 0) {
    uVar2 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff488);
    FUN_05c08998(uVar2,param_1,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05ceffd8(uVar2,0);
    return;
  }
  thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
  uVar2 = thunk_FUN_02dd3144();
  uVar3 = thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_HashSet<INetworkUpdateSystem>_Remove__
                            );
  FUN_0544bf54(uVar2,uVar3,0);
  uVar3 = thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_HashSet<INetworkUpdateSystem>_get_Count__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar2,uVar3);
}


