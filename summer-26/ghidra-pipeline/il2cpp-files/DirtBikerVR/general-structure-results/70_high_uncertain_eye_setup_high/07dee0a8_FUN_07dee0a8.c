/*
FUNCTION_NAME: FUN_07dee0a8
ENTRY_POINT: 07dee0a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_8
*/


undefined8 FUN_07dee0a8(long param_1,int param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_0899a1e0 & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OVRP_1_96_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_98_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_9_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_Posef_TypeInfo);
    DAT_0899a1e0 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined4 *)param_3 = 0;
  puVar1 = OVRPlugin_OVRP_1_98_0_TypeInfo;
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  uVar4 = 0;
  if (lVar2 != 0) {
                    /* try { // try from 07dee11c to 07eee17b has its CatchHandler @ 07dee11c
                       catch() { ... } // from try @ 07dee11c with catch @ 07dee11c
                       catch() { ... } // from try @ 07dee280 with catch @ 07dee11c
                       catch() { ... } // from try @ 07dee2ac with catch @ 07dee11c */
    FUN_04e9de50(&local_50,lVar2,*(undefined8 *)OVRPlugin_Posef_TypeInfo);
    do {
      uVar3 = FUN_061dc5b8(&local_50,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
                    /* try { // try from 07dee1a0 to 07eee1bf has its CatchHandler @ 07dee28c */
        FUN_061dc5b4(&local_50,*(undefined8 *)OVRPlugin_OVRP_1_96_0_TypeInfo);
        return 0;
      }
    } while ((int)local_40 != param_2);
    *param_3 = local_40;
    param_3[1] = local_38;
    thunk_FUN_03afed3c(param_3 + 1,0);
                    /* try { // try from 07dee17c to 07eee187 has its CatchHandler @ 07dee280 */
    FUN_061dc5b4(&local_50,*(undefined8 *)OVRPlugin_OVRP_1_96_0_TypeInfo);
    uVar4 = 1;
  }
  return uVar4;
}


