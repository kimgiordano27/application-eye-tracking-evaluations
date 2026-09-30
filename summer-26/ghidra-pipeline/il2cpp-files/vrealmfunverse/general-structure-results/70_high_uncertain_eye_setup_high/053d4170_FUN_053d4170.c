/*
FUNCTION_NAME: FUN_053d4170
ENTRY_POINT: 053d4170
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_053d4170(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_35_0_TypeInfo;
  puVar2 = PTR_DAT_06313048;
                    /* try { // try from 053d4184 to 054d41af has its CatchHandler @ 053d4290 */
                    /* try { // try from 053d41b0 to 054d420b has its CatchHandler @ 053d4000 */
  if ((DAT_066d09d9 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(OVRPlugin_OVRP_1_38_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_35_0_TypeInfo);
    DAT_066d09d9 = 1;
  }
  if ((param_2 & 1) == 0) {
    puVar1 = (undefined8 *)puVar3;
  }
                    /* try { // try from 053d420c to 054d422f has its CatchHandler @ 053d42a4 */
  uVar7 = *puVar1;
  plVar4 = (long *)FUN_02b3c908(*(undefined8 *)puVar2,1);
  lVar5 = FUN_053d6158(param_1,0);
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 053d4230 to 054d4233 has its CatchHandler @ 053d42a0 */
                    /* try { // try from 053d4234 to 054d4237 has its CatchHandler @ 053d429c */
                    /* try { // try from 053d4238 to 054d423b has its CatchHandler @ 053d4298 */
                    /* try { // try from 053d423c to 054d423f has its CatchHandler @ 053d4294 */
                    /* try { // try from 053d4240 to 054d424b has its CatchHandler @ 053d4000 */
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_053d4338:
      uVar7 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar7,0);
    }
    if ((int)plVar4[3] != 0) {
                    /* try { // try from 053d424c to 054d424f has its CatchHandler @ 053d4284 */
                    /* try { // try from 053d4250 to 054d4253 has its CatchHandler @ 053d4280 */
                    /* try { // try from 053d4254 to 054d4277 has its CatchHandler @ 053d427c */
      plVar4[4] = lVar5;
      thunk_FUN_02bb0e9c(plVar4 + 4,lVar5);
      uVar7 = FUN_0540ce80(uVar7,plVar4,0);
                    /* try { // try from 053d4278 to 054d427b has its CatchHandler @ 053d4290 */
      uVar7 = FUN_053d472c(param_3,uVar7,param_4);
                    /* catch() { ... } // from try @ 053d4254 with catch @ 053d427c
                       try { // try from 053d427c to 054d42bf has its CatchHandler @ 053d4000 */
                    /* catch() { ... } // from try @ 053d4250 with catch @ 053d4280 */
      *param_5 = uVar7;
                    /* catch() { ... } // from try @ 053d424c with catch @ 053d4284 */
                    /* catch() { ... } // from try @ 053d40f8 with catch @ 053d4288 */
      thunk_FUN_02bb0e9c(param_5,uVar7);
                    /* catch() { ... } // from try @ 053d40d0 with catch @ 053d428c */
                    /* catch() { ... } // from try @ 053d4184 with catch @ 053d4290
                       catch() { ... } // from try @ 053d4278 with catch @ 053d4290 */
                    /* catch() { ... } // from try @ 053d423c with catch @ 053d4294 */
      plVar4 = (long *)FUN_02b3c908(*(undefined8 *)puVar2,1);
                    /* catch() { ... } // from try @ 053d4238 with catch @ 053d4298 */
                    /* catch() { ... } // from try @ 053d4234 with catch @ 053d429c */
                    /* catch() { ... } // from try @ 053d4230 with catch @ 053d42a0 */
                    /* catch() { ... } // from try @ 053d420c with catch @ 053d42a4 */
      lVar5 = FUN_053d6158(param_1,0);
      if (plVar4 == (long *)0x0) goto LAB_053d4330;
                    /* try { // try from 053d42c0 to 054d42c3 has its CatchHandler @ 053d42c8 */
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
      goto LAB_053d4338;
      puVar2 = OVRPlugin_OVRP_1_38_0_TypeInfo;
                    /* catch() { ... } // from try @ 053d42c0 with catch @ 053d42c8 */
                    /* try { // try from 053d42cc to 054d42d3 has its CatchHandler @ 053d42dc */
      if ((int)plVar4[3] != 0) {
                    /* try { // try from 053d42d4 to 054d42df has its CatchHandler @ 053d4000 */
                    /* catch() { ... } // from try @ 053d42cc with catch @ 053d42dc */
        plVar4[4] = lVar5;
        thunk_FUN_02bb0e9c(plVar4 + 4,lVar5);
        uVar7 = FUN_0540ce80(*(undefined8 *)puVar2,plVar4,0);
        uVar7 = FUN_053d472c(param_3,uVar7,param_4);
        *param_6 = uVar7;
        thunk_FUN_02bb0e9c(param_6);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
LAB_053d4330:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


