/*
FUNCTION_NAME: FUN_05a1a474
ENTRY_POINT: 05a1a474
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05a1a474(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  
  puVar1 = PTR_DAT_067ca110;
                    /* try { // try from 05a1a494 to 05b1a4f7 has its CatchHandler @ 05a1a494
                       catch() { ... } // from try @ 05a1a494 with catch @ 05a1a494
                       catch() { ... } // from try @ 05a1a504 with catch @ 05a1a494
                       catch() { ... } // from try @ 05a1a5d8 with catch @ 05a1a494
                       catch() { ... } // from try @ 05a1a628 with catch @ 05a1a494 */
  if ((DAT_06bc206d & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    FUN_02f08768(PTR_DAT_067c9320);
    FUN_02f08768(PTR_DAT_067ca110);
    FUN_02f08768(
                Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_SetResult__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_SetStateMachine__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_get_Task__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<List<bool>>,_OVRSceneRoom_<LoadRoom>d__19>__
                );
    FUN_02f08768(PTR_DAT_067cec80);
                    /* try { // try from 05a1a4f8 to 05b1a4fb has its CatchHandler @ 05a1a5a4 */
                    /* try { // try from 05a1a4fc to 05b1a503 has its CatchHandler @ 05a1a5a8 */
    DAT_06bc206d = 1;
  }
                    /* try { // try from 05a1a504 to 05b1a5bf has its CatchHandler @ 05a1a494 */
  lVar8 = FUN_02f0880c(*(undefined8 *)puVar1,1);
  puVar7 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<List<bool>>,_OVRSceneRoom_<LoadRoom>d__19>__
  ;
  puVar6 = Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_get_Task__;
  puVar5 = 
  Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_SetStateMachine__;
  puVar4 = Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_SetResult__;
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  puVar2 = PTR_DAT_067cec80;
  puVar1 = PTR_DAT_067c9320;
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) != 0) {
      plVar11 = *(long **)(*(long *)
                            Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                          + 0xb8);
      *(undefined2 *)(lVar8 + 0x20) = 0x3a;
      *plVar11 = lVar8;
      uVar9 = FUN_02f0880c(*(undefined8 *)puVar1,0x100);
      FUN_05009b54(uVar9,*(undefined8 *)puVar4,0);
      uVar10 = *(undefined8 *)puVar2;
      *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar9;
      uVar9 = FUN_02f0880c(uVar10,8);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05a1a4f8 with catch @ 05a1a5a4
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05a1a4fc with catch @ 05a1a5a8
                        */
      FUN_05009b54(uVar9,*(undefined8 *)puVar5,0);
      uVar10 = *(undefined8 *)puVar1;
      *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = uVar9;
                    /* try { // try from 05a1a5c0 to 05b1a5d7 has its CatchHandler @ 05a1a620 */
      uVar9 = FUN_02f0880c(uVar10,8);
      FUN_05009b54(uVar9,*(undefined8 *)puVar6,0);
                    /* try { // try from 05a1a5d8 to 05b1a60f has its CatchHandler @ 05a1a494 */
      uVar10 = *(undefined8 *)puVar1;
      *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar9;
      uVar9 = FUN_02f0880c(uVar10,3);
      FUN_05009b54(uVar9,*(undefined8 *)puVar7,0);
      *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = uVar9;
                    /* try { // try from 05a1a610 to 05b1a61f has its CatchHandler @ 05a1a620 */
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05a1a5c0 with catch @ 05a1a620
                       catch() { ... } // from try @ 05a1a610 with catch @ 05a1a620 */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


