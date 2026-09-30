/*
FUNCTION_NAME: FUN_053df7e4
ENTRY_POINT: 053df7e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_7;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_053df7e4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long local_38;
  
  if ((DAT_066d0a1a & 1) == 0) {
    FUN_02b3c81c(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_70_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_71_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_72_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_73_0_TypeInfo);
    DAT_066d0a1a = 1;
  }
  local_38 = 0;
  uVar1 = FUN_053d62d8(param_1);
  lVar2 = FUN_053d718c();
  if (*param_3 == 0) {
    lVar5 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_OVRP_1_73_0_TypeInfo);
    FUN_0452d044(lVar5,*(undefined8 *)OVRPlugin_OVRP_1_72_0_TypeInfo);
    *param_3 = lVar5;
    thunk_FUN_02bb0e9c(param_3,lVar5);
    if (lVar2 == 0) goto LAB_053dfac8;
  }
  else {
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) goto LAB_053dfac8;
    uVar3 = FUN_0452f928(*param_3,*(undefined8 *)(*(long *)(lVar2 + 0x20) + 0x28),&local_38,
                         *(undefined8 *)OVRPlugin_OVRP_1_71_0_TypeInfo);
    if ((uVar3 & 1) != 0) {
      if ((local_38 != 0) && (*(long *)(local_38 + 0x20) != 0)) {
        uVar6 = *(undefined8 *)(*(long *)(local_38 + 0x20) + 0x10);
        if (*(int *)(*(long *)OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar4 = FUN_053dfd64(uVar1);
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
        }
        uVar3 = FUN_04d94540(uVar6,uVar4,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        uVar6 = thunk_FUN_02ba3594(PTR_DAT_06313048);
        uVar6 = FUN_02b3c908(uVar6,4);
        FUN_0275e13c();
        FUN_0275a400(uVar6,uVar1);
        FUN_0275a434(uVar6,0,uVar1);
        lVar5 = local_38;
        FUN_0275e13c(local_38);
        uVar1 = FUN_053d7bb8(lVar5);
        FUN_0275a400(uVar6,uVar1);
        FUN_0275a434(uVar6,1,uVar1);
        FUN_0275e13c(lVar2);
        lVar5 = FUN_053d699c(lVar2);
        FUN_0275e13c();
        uVar1 = *(undefined8 *)(lVar5 + 0x18);
        FUN_0275a400(uVar6,uVar1);
                    /* try { // try from 053df998 to 054dfa93 has its CatchHandler @ 053df998
                       catch() { ... } // from try @ 053df998 with catch @ 053df998
                       catch() { ... } // from try @ 053dfb40 with catch @ 053df998
                       catch() { ... } // from try @ 053dfd04 with catch @ 053df998
                       catch() { ... } // from try @ 053dfd54 with catch @ 053df998
                       catch() { ... } // from try @ 053dfdd8 with catch @ 053df998 */
        FUN_0275a434(uVar6,2,uVar1);
        FUN_0275e13c(lVar2);
        lVar2 = FUN_053d699c(lVar2);
        FUN_0275e13c();
        uVar1 = *(undefined8 *)(lVar2 + 0x10);
        FUN_0275a400(uVar6,uVar1);
        FUN_0275a434(uVar6,3,uVar1);
        uVar1 = thunk_FUN_02ba3594(OVRTelemetry_QPLTelemetryClient_TypeInfo);
        uVar1 = FUN_0540ce80(uVar1,uVar6,0);
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar6 = thunk_FUN_02b79644();
        FUN_04d7b3f4(uVar6,uVar1,0);
        uVar1 = FUN_0540c738(uVar6,0);
        uVar6 = thunk_FUN_02ba3594(OVRTelemetryConstants_OVRManager_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar1,uVar6);
      }
      goto LAB_053dfac8;
    }
  }
  if ((*(long *)(lVar2 + 0x20) != 0) && (*param_3 != 0)) {
                    /* try { // try from 053dfa94 to 054dfab7 has its CatchHandler @ 053dfda0 */
    FUN_0452ddc0(*param_3,*(undefined8 *)(*(long *)(lVar2 + 0x20) + 0x28),lVar2,
                 *(undefined8 *)OVRPlugin_OVRP_1_70_0_TypeInfo);
    FUN_053dec70(uVar1,param_2,param_3);
                    /* try { // try from 053dfabc to 054dfaeb has its CatchHandler @ 053dfd9c */
    return;
  }
LAB_053dfac8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


