/*
FUNCTION_NAME: FUN_05a18b54
ENTRY_POINT: 05a18b54
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05a18b54(void *param_1,uint param_2)

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
  uint local_d8;
  int local_d4;
  long local_48;
  
  puVar4 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
                    /* catch() { ... } // from try @ 05a18aec with catch @ 05a18b5c
                       catch() { ... } // from try @ 05a18b4c with catch @ 05a18b5c */
                    /* try { // try from 05a18b60 to 05b18b63 has its CatchHandler @ 05a18b6c */
                    /* try { // try from 05a18b64 to 05b18b6f has its CatchHandler @ 05a18a78 */
  lVar2 = tpidr_el0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05a18b60 with catch @ 05a18b6c
                        */
                    /* try { // try from 05a18b70 to 05b18bf7 has its CatchHandler @ 05a18b70
                       catch() { ... } // from try @ 05a18b70 with catch @ 05a18b70
                       catch() { ... } // from try @ 05a18c68 with catch @ 05a18b70
                       catch() { ... } // from try @ 05a18cd8 with catch @ 05a18b70 */
  local_48 = *(long *)(lVar2 + 0x28);
  if ((DAT_06bc2064 & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc2064 = 1;
  }
  memset(&local_d8,0,0x90);
  memset(auStack_168,0,0x90);
  memset(auStack_1f8,0,0x90);
  memset(&local_d8,0,0x90);
  memset(auStack_168,0,0x90);
  lVar5 = *(long *)puVar4;
                    /* try { // try from 05a18bf8 to 05b18c67 has its CatchHandler @ 05a18ca4 */
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar5 = *(long *)puVar4;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else if ((param_2 & 7) < *(uint *)(lVar5 + 0x18)) {
    iVar6 = *(int *)(lVar5 + (ulong)(param_2 & 7) * 4 + 0x20);
    if (iVar6 != 0) {
      local_d4 = iVar6;
    }
    local_d8 = (uint)(iVar6 != 0);
    if (7 < param_2) {
      iVar6 = 0;
      uVar3 = param_2 >> 3;
      do {
        if ((uVar3 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05a18900(auStack_288,iVar6);
          memcpy(auStack_1f8,auStack_288,0x90);
          FUN_05a185d0(auStack_168,&local_d8,auStack_1f8);
          memcpy(&local_d8,auStack_168,0x90);
        }
        iVar6 = iVar6 + 1;
        bVar1 = 1 < uVar3;
        uVar3 = uVar3 >> 1;
      } while (bVar1);
    }
    memcpy(param_1,&local_d8,0x90);
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


