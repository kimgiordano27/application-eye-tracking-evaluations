/*
FUNCTION_NAME: FUN_05a18d30
ENTRY_POINT: 05a18d30
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05a18d30(void *param_1,void *param_2,uint param_3)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  undefined1 auStack_288 [144];
  undefined1 auStack_1f8 [144];
  undefined1 auStack_168 [144];
  undefined1 auStack_d8 [144];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((DAT_06bc2065 & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc2065 = 1;
  }
  puVar4 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  memset(auStack_d8,0,0x90);
  memset(auStack_168,0,0x90);
  memset(auStack_1f8,0,0x90);
  memset(auStack_d8,0,0x90);
  memset(auStack_168,0,0x90);
  if ((param_3 & 7) == 0) {
    memcpy(auStack_d8,param_2,0x90);
  }
  else {
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar5 = *(long *)puVar4;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar5 == 0) {
                    /* try { // try from 05a18edc to 05b18ee7 has its CatchHandler @ 05a18f50 */
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_05a18f04;
    }
    if (*(uint *)(lVar5 + 0x18) <= (param_3 & 7)) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      goto LAB_05a18f04;
    }
    FUN_05a18794(auStack_d8,param_2,*(undefined4 *)(lVar5 + (ulong)(param_3 & 7) * 4 + 0x20));
  }
  if (7 < param_3) {
                    /* try { // try from 05a18e3c to 05b18e4b has its CatchHandler @ 05a18f94 */
    iVar6 = 0;
    uVar3 = param_3 >> 3;
    do {
      if ((uVar3 & 1) != 0) {
                    /* try { // try from 05a18e4c to 05b18ec7 has its CatchHandler @ 05a18ce4 */
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05a18900(auStack_288,iVar6);
        memcpy(auStack_1f8,auStack_288,0x90);
        FUN_05a185d0(auStack_168,auStack_d8,auStack_1f8);
        memcpy(auStack_d8,auStack_168,0x90);
      }
      iVar6 = iVar6 + 1;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar1);
  }
  memcpy(param_1,auStack_d8,0x90);
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 05a18ec8 to 05b18ed3 has its CatchHandler @ 05a18f54 */
    return;
  }
LAB_05a18f04:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05a18f04 to 05b18f07 has its CatchHandler @ 05a18fd0 */
  __stack_chk_fail();
}


