/*
FUNCTION_NAME: FUN_02112c14
ENTRY_POINT: 02112c14
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_02112c14(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = OVRPlugin_AppPerfFrameStats___TypeInfo;
  if ((DAT_0452f706 & 1) == 0) {
                    /* try { // try from 02112c48 to 02212dbb has its CatchHandler @ 02112c48
                       catch() { ... } // from try @ 02112c48 with catch @ 02112c48
                       catch() { ... } // from try @ 02112f64 with catch @ 02112c48
                       catch() { ... } // from try @ 02112fd0 with catch @ 02112c48
                       catch() { ... } // from try @ 0211303c with catch @ 02112c48
                       catch() { ... } // from try @ 0211307c with catch @ 02112c48 */
    FUN_01c5d288(PTR_DAT_042393a8);
    FUN_01c5d288(OVRPlugin_BodyJointLocation___TypeInfo);
    FUN_01c5d288(OVRPlugin_AppPerfFrameStats___TypeInfo);
    FUN_01c5d288(System_Collections_Hashtable_bucket___TypeInfo);
    DAT_0452f706 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_042393a8;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar3 = *(long *)puVar2;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_01c496e0(*(undefined8 *)System_Collections_Hashtable_bucket___TypeInfo);
    FUN_02112d1c(lVar4,uVar5,*(undefined8 *)OVRPlugin_BodyJointLocation___TypeInfo);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar4;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_02112db8(param_1,lVar4,param_2 & 1);
  return;
}


