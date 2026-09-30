/*
FUNCTION_NAME: FUN_053d3ed4
ENTRY_POINT: 053d3ed4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint FUN_053d3ed4(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_066d09d8 & 1) == 0) {
    FUN_02b3c81c(OVRPassthroughLayer_ColorLutHandler_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(OVRPlugin_OVRP_1_35_0_TypeInfo);
    DAT_066d09d8 = 1;
  }
  if ((param_3 & 1) == 0) {
    if (((param_2 & 1) == 0) || ((param_4 & 1) == 0)) goto LAB_053d40cc;
    plVar3 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,1);
    lVar4 = FUN_053d6158(param_1,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
      uVar1 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 053d40f8 to 054d411b has its CatchHandler @ 053d4288 */
      FUN_02b3c988(uVar1,0);
    }
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    plVar3[4] = lVar4;
    thunk_FUN_02bb0e9c(plVar3 + 4,lVar4);
    uVar1 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_35_0_TypeInfo,plVar3,0);
    uVar1 = FUN_053d472c(param_5,uVar1,param_6);
    uVar2 = thunk_FUN_02b79644(*(undefined8 *)OVRPassthroughLayer_ColorLutHandler_TypeInfo);
    FUN_053d1ef8(uVar2,param_1,uVar1);
    *param_7 = uVar2;
    thunk_FUN_02bb0e9c(param_7,uVar2);
  }
  else if ((param_2 & 1) != 0) {
    uVar1 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar1 = FUN_02b3c908(uVar1,1);
    uVar2 = FUN_053d6158(param_1,0);
    FUN_0275e13c(uVar1);
    FUN_0275a400(uVar1,uVar2);
    FUN_0275a434(uVar1,0,uVar2);
    uVar2 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_36_0_TypeInfo);
    uVar1 = FUN_0540ce80(uVar2,uVar1,0);
    uVar1 = FUN_053d472c(param_5,uVar1,param_6);
    thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    uVar2 = thunk_FUN_02b79644();
    FUN_053f0c5c(uVar2,uVar1,0);
    uVar1 = FUN_0540c738(uVar2,0);
    uVar2 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_37_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 053d4000 to 054d40cf has its CatchHandler @ 053d4000
                       catch() { ... } // from try @ 053d4000 with catch @ 053d4000
                       catch() { ... } // from try @ 053d41b0 with catch @ 053d4000
                       catch() { ... } // from try @ 053d4240 with catch @ 053d4000
                       catch() { ... } // from try @ 053d427c with catch @ 053d4000
                       catch() { ... } // from try @ 053d42d4 with catch @ 053d4000 */
    FUN_02b3c988(uVar1,uVar2);
  }
  param_4 = 1;
LAB_053d40cc:
                    /* try { // try from 053d40d0 to 054d40f3 has its CatchHandler @ 053d428c */
  return param_4 & 1;
}


