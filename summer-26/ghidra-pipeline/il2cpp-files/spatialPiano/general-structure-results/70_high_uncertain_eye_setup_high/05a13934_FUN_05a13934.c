/*
FUNCTION_NAME: FUN_05a13934
ENTRY_POINT: 05a13934
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05a13934(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar4 = Method_OVRResult<ulong,_OVRPlugin_Result>_get_Status__;
  puVar3 = Method_OVRNativeList<OVRAnchor_FilterUnion>_get_Count__;
  puVar2 = PTR_DAT_067c9aa0;
  if ((DAT_06bc202d & 1) == 0) {
    FUN_02f08768(Method_OVRNativeList<OVRAnchor_FilterUnion>_get_Count__);
    FUN_02f08768(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Status__);
    FUN_02f08768(PTR_DAT_067c9aa0);
    FUN_02f08768(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Success__);
    DAT_06bc202d = 1;
  }
  uVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_05a13a20(uVar5,1);
  uVar7 = *(undefined8 *)puVar4;
  iVar1 = *(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar5;
  if (iVar1 == 0) {
    thunk_FUN_02f6670c();
  }
  lVar6 = FUN_050e4454(uVar7,0);
  if (lVar6 != 0) {
    uVar5 = FUN_050ef6a8(lVar6,*(undefined8 *)
                                Method_OVRResult<ulong,_OVRPlugin_Result>_get_Success__,0x28,0);
    *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = uVar5;
                    /* try { // try from 05a13a18 to 05b13a27 has its CatchHandler @ 05a13d60 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


