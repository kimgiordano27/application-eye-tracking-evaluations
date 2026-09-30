/*
FUNCTION_NAME: OVRPlugin.OVRP_1_41_0$$.cctor
ENTRY_POINT: 0569f778
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_41_0___cctor(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = System_Collections_Generic_IEnumerable<KeyValuePair<int,_object>>_TypeInfo;
  if ((DAT_06dbc897 & 1) == 0) {
    FUN_02d965b8(System_Collections_Generic_IEnumerable<KeyValuePair<int,_object>>_TypeInfo);
    DAT_06dbc897 = 1;
  }
  lVar4 = *(long *)puVar1;
  lVar3 = *(long *)(lVar4 + 0x38);
  if (lVar3 == 0) {
    FUN_02dcfd74(lVar4);
    lVar3 = *(long *)(lVar4 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 8);
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_02dcfd74(lVar3);
  }
  if (((0 < (int)param_1[1]) && (*param_1 != 0)) &&
     (lVar3 = FUN_036eca2c(*param_1,param_1[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x28)),
     lVar3 != 0)) {
    uVar2 = FUN_036ec948(*param_1,param_1[1],*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x18));
    return uVar2;
  }
  return 0;
}


