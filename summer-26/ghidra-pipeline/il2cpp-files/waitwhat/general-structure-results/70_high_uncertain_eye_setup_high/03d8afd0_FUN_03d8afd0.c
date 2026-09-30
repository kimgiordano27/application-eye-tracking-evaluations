/*
FUNCTION_NAME: FUN_03d8afd0
ENTRY_POINT: 03d8afd0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_03d8afd0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
                    /* try { // try from 03d8afd4 to 03e8afe7 has its CatchHandler @ 03d8b2c0 */
                    /* try { // try from 03d8afe8 to 03e8aff3 has its CatchHandler @ 03d8b2c4 */
  lVar1 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar3 = *(long *)(param_2 + 0x20);
  lVar1 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
    lVar3 = *(long *)(param_2 + 0x20);
  }
                    /* try { // try from 03d8b028 to 03e8b033 has its CatchHandler @ 03d8b2bc */
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar1 == 0) {
                    /* try { // try from 03d8b034 to 03e8b1b3 has its CatchHandler @ 03d8abcc */
    lVar1 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    lVar1 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
      lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    }
    lVar3 = *(long *)(lVar3 + 0x18);
    uVar5 = **(undefined8 **)(lVar1 + 0xb8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4(lVar3);
    }
    lVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(lVar3);
    lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    FUN_0570ec28(lVar1,uVar5,*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x28));
    lVar3 = *(long *)(param_2 + 0x20);
    lVar4 = *(long *)(lVar3 + 0xc0);
    lVar2 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
      lVar3 = *(long *)(param_2 + 0x20);
      lVar4 = *(long *)(lVar3 + 0xc0);
    }
    *(long *)(*(long *)(lVar2 + 0xb8) + 8) = lVar1;
    if ((*(ushort *)(*(long *)(lVar4 + 0x10) + 0x135) & 1) == 0) {
      FUN_031c09d4();
      lVar3 = *(long *)(param_2 + 0x20);
    }
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__get_Length
            (uVar5,lVar1,0,0,0,0,10,10000,
             *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38));
  return uVar5;
}


