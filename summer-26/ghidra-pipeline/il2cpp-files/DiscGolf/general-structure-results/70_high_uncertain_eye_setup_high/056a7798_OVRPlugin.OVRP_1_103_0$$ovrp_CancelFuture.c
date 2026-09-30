/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_CancelFuture
ENTRY_POINT: 056a7798
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


bool OVRPlugin_OVRP_1_103_0__ovrp_CancelFuture(long param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((DAT_06dbca52 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0d468);
    FUN_02d965b8(System_Collections_Generic_IEnumerable<ServicePoint>_TypeInfo);
    FUN_02d965b8(TMPro_TMP_ListPool<Mask>_TypeInfo);
    DAT_06dbca52 = 1;
  }
  plVar3 = (long *)(param_1 + 0x40);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*plVar3 == 0) {
    bVar1 = false;
  }
  else {
    FUN_056a9f68(&local_38,*plVar3,2,0);
    auVar4 = OVRPlugin_<>c__<_cctor>b__807_26(&local_38,0);
    if (*(int *)(*(long *)PTR_DAT_06a0d468 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar2 = FUN_056a4688(auVar4._0_8_,auVar4._8_8_);
    bVar1 = iVar2 == 0;
    if (iVar2 == 0) {
      *plVar3 = 0;
      LeanTween__value(plVar3,0);
    }
    thunk_FUN_056a9c0c(&local_38,0);
  }
  return bVar1;
}


