/*
FUNCTION_NAME: FUN_07505ad0
ENTRY_POINT: 07505ad0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_07505ad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  puVar2 = Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_SetResult__;
  if ((DAT_07ef4aa5 & 1) == 0) {
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__70>__
                );
    FUN_03642964(PTR_DAT_079fdb98);
    FUN_03642964(PTR_DAT_079ffb90);
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__);
    FUN_03642964(PTR_DAT_079ffb80);
    FUN_03642964(PTR_DAT_079fd4b0);
    FUN_03642964(
                Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_SetStateMachine__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_SetResult__
                );
    FUN_03642964(PTR_DAT_079ffb88);
    DAT_07ef4aa5 = 1;
  }
  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_05e5ae34(lVar9,0);
  puVar7 = 
  Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_SetStateMachine__;
  puVar6 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__70>__
  ;
  puVar5 = PTR_DAT_079ffb88;
  puVar4 = PTR_DAT_079ffb80;
  puVar3 = PTR_DAT_079fdb98;
  puVar2 = PTR_DAT_079fd4b0;
  if (lVar9 != 0) {
    puVar14 = (undefined8 *)(lVar9 + 0x10);
    *puVar14 = param_2;
    thunk_FUN_036b7ad0(puVar14,param_2);
    puVar12 = (undefined8 *)(lVar9 + 0x20);
    *puVar12 = param_3;
    thunk_FUN_036b7ad0(puVar12,param_3);
    *(long *)(lVar9 + 0x28) = param_1;
    thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),param_1);
    FUN_074fbdec(*puVar14);
    uVar11 = *puVar12;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar8 = OVRTask_CombinedTaskData_<>c<OVRResult<Guid,_Int32Enum>>__<_cctor>b__10_0
                      (uVar11,*(undefined8 *)puVar4);
    FUN_074ef3c8(uVar8 & 1,*(undefined8 *)puVar5,*(undefined8 *)(lVar9 + 0x20));
    uVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
    FUN_05e5ae34(uVar11,0);
    puVar12 = (undefined8 *)(lVar9 + 0x18);
    *puVar12 = uVar11;
    thunk_FUN_036b7ad0(puVar12,uVar11);
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined1 *)(param_1 + 0x28);
    uVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
    FUN_04159c38(uVar11,lVar9,*(undefined8 *)puVar7,0);
    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                 Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__)
    ;
    FUN_0750bafc(uVar10,uVar13,uVar15,uVar1,uVar11,0);
    puVar2 = PTR_DAT_079ffb90;
    if (*(long *)(param_1 + 0x18) != 0) {
      puVar14 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
      *puVar14 = uVar10;
      thunk_FUN_036b7ad0(puVar14,uVar10);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar13 = *puVar12;
      uVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
      FUN_0750480c(uVar11,uVar10,uVar13);
      return uVar11;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


