/*
FUNCTION_NAME: FUN_0750445c
ENTRY_POINT: 0750445c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_0750445c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar1 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
  ;
  if ((DAT_07ef4a98 & 1) == 0) {
    FUN_03642964(PTR_DAT_079ffa88);
    FUN_03642964(System_Globalization_InternalCodePageDataItem___TypeInfo);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                );
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetResult__);
    FUN_03642964(PTR_DAT_079ffd68);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__68>__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__69>__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__70>__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
                );
    DAT_07ef4a98 = 1;
  }
  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05e5ae34(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_2;
    thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x10),param_2);
                    /* try { // try from 0750453c to 0760455b has its CatchHandler @ 07504574 */
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (plVar6 = (long *)FUN_03c8d1b0(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_079ffa88),
       puVar4 = 
       Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__70>__
       , puVar3 = 
         Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
       , puVar2 = Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetResult__,
       puVar1 = PTR_DAT_079ffd68, plVar6 != (long *)0x0)) {
                    /* try { // try from 0750455c to 07604583 has its CatchHandler @ 075043d0 */
      uVar7 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 0750453c with catch @ 07504574
                        */
      lVar9 = *(long *)(param_1 + 0x28);
      if (lVar9 == 0) {
                    /* try { // try from 07504584 to 07604587 has its CatchHandler @ 075045a0 */
                    /* try { // try from 07504588 to 076045ab has its CatchHandler @ 075043d0 */
        lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__68>__
                                  );
                    /* catch() { ... } // from try @ 07504584 with catch @ 075045a0 */
        FUN_04159c38(lVar9,param_1,
                     *(undefined8 *)
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__69>__
                     ,0);
                    /* try { // try from 075045ac to 076045b3 has its CatchHandler @ 075045b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 075045ac with catch @ 075045b4
                        */
        *(long *)(param_1 + 0x28) = lVar9;
        thunk_FUN_036b7ad0((long *)(param_1 + 0x28),lVar9);
      }
      uVar7 = FUN_03cbc2bc(uVar7,lVar9,*(undefined8 *)puVar3);
      uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
      FUN_04159004(uVar8,lVar5,*(undefined8 *)puVar4,0);
      uVar7 = FUN_03cc7aa0(uVar7,uVar8,*(undefined8 *)puVar2);
      puVar1 = System_Globalization_InternalCodePageDataItem___TypeInfo;
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
        if (lVar5 != 0) {
          uVar7 = FUN_03cc7aa0(uVar7,lVar5,*(undefined8 *)puVar2);
        }
        FUN_03c9d4a0(uVar7,*(undefined8 *)puVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


