/*
FUNCTION_NAME: FUN_058ad150
ENTRY_POINT: 058ad150
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_058ad150(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_066d31e5 & 1) == 0) {
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                );
    DAT_066d31e5 = 1;
  }
  if (*(char *)(param_1 + 0x2c0) != '\0') {
    iVar1 = FUN_05c9729c(0);
    if (iVar1 == 0x15) {
      if (*(int *)(*(long *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar3 = FUN_0499dea4(param_1 + 0xd0,0,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                          );
      uVar2 = (*(uint *)(lVar3 + 0xc) ^ 0xffffffff) & 2;
    }
    else {
      uVar2 = 2;
    }
    return uVar2;
  }
  thunk_FUN_02ba3594(PTR_DAT_06312bc0);
  uVar4 = thunk_FUN_02b79644();
  uVar5 = thunk_FUN_02ba3594(Method_UnityEngine_Pool_ObjectPool<HashSet<int>>__ctor__);
  FUN_04db2a6c(uVar4,uVar5,0);
  uVar5 = thunk_FUN_02ba3594(Method_UnityEngine_Pool_ObjectPool<List<NativeSlice<ushort>>>__ctor__);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar4,uVar5);
}


