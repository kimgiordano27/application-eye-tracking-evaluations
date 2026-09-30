/*
FUNCTION_NAME: FUN_059b2744
ENTRY_POINT: 059b2744
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_8
*/


uint FUN_059b2744(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 059b274c to 05ab2777 has its CatchHandler @ 059b2d18 */
  if ((DAT_06dc14a6 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_37_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_38_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a05290);
                    /* try { // try from 059b2794 to 05ab279f has its CatchHandler @ 059b2ce0 */
    FUN_02d965b8(OVRPlugin_OVRP_1_39_0_TypeInfo);
    DAT_06dc14a6 = 1;
  }
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = thunk_FUN_0536b75c(uVar3,*(undefined8 *)PTR_DAT_06a05290,0);
                    /* try { // try from 059b2808 to 05ab280f has its CatchHandler @ 059b2c84 */
    if (((((uVar2 & 1) == 0) &&
         (uVar2 = thunk_FUN_0536b75c(uVar3,*(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo,0),
         (uVar2 & 1) == 0)) &&
        (uVar2 = thunk_FUN_0536b75c(uVar3,*(undefined8 *)OVRPlugin_OVRP_1_39_0_TypeInfo,0),
        (uVar2 & 1) == 0)) &&
       (uVar2 = thunk_FUN_0536b75c(uVar3,*(undefined8 *)OVRPlugin_OVRP_1_37_0_TypeInfo,0),
       (uVar2 & 1) == 0)) {
                    /* try { // try from 059b2834 to 05ab2837 has its CatchHandler @ 059b2ce4 */
      uVar1 = thunk_FUN_0536b75c(uVar3,*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,0);
      uVar1 = uVar1 ^ 1;
    }
    else {
      uVar1 = 0;
    }
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


