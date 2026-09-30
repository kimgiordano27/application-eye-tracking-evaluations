/*
FUNCTION_NAME: FUN_05d83b44
ENTRY_POINT: 05d83b44
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d83cfc) */
/* WARNING: Removing unreachable block (ram,0x05d83d7c) */

undefined8 FUN_05d83b44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  char local_4c [4];
  undefined8 local_48;
  long local_38;
  
  puVar1 = 
  Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_ContinueWith<IEnumerable<OVRSpatialAnchor>>__;
  if ((DAT_06b82d00 & 1) == 0) {
    FUN_02d6084c(Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__);
    FUN_02d6084c(Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__);
    FUN_02d6084c(
                Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TryGetInternalData<OVRAnchor_FetchTaskData>__
                );
    FUN_02d6084c(
                Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_WithInternalData<OVRAnchor_FetchTaskData>__
                );
    FUN_02d6084c(Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetAwaiter__);
    FUN_02d6084c(Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetResult__);
    FUN_02d6084c(
                Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_ContinueWith<IEnumerable<OVRSpatialAnchor>>__
                );
    FUN_02d6084c(Method_System_Collections_Generic_List<MeshInfo>_Clear__);
    DAT_06b82d00 = 1;
  }
  local_38 = 0;
  local_48 = 0;
  local_4c[0] = '\0';
  uVar4 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar1 = Method_System_Collections_Generic_List<MeshInfo>_Clear__;
  uVar4 = FUN_05015c2c(uVar4,0);
  local_4c[0] = '\0';
  FUN_0506ac34(uVar4,local_4c,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar3 = FUN_0489720c(**(long **)(lVar2 + 0xb8),param_1,&local_38,
                       *(undefined8 *)Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__);
  if ((uVar3 & 1) == 0) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *(long *)puVar1;
    }
    lVar5 = **(long **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetResult__
                              );
    FUN_04894d4c(lVar2,*(undefined8 *)
                        Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TryGetInternalData<OVRAnchor_FetchTaskData>__
                );
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_048956dc(lVar5,param_1,lVar2,
                 *(undefined8 *)
                  Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_WithInternalData<OVRAnchor_FetchTaskData>__
                );
    local_38 = lVar2;
  }
  if (local_4c[0] != '\0') {
    thunk_FUN_02d6ec70(uVar4,0);
  }
  if (local_38 == 0) {
LAB_05d83d84:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar3 = FUN_0489720c(local_38,param_2,&local_48,
                       *(undefined8 *)
                        Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__);
  if ((uVar3 & 1) == 0) {
    uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
    FUN_05d82c48(uVar4,param_1,param_2);
    local_48 = uVar4;
    if (local_38 == 0) goto LAB_05d83d84;
    FUN_048956dc(local_38,param_2,uVar4,
                 *(undefined8 *)
                  Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetAwaiter__);
  }
  return local_48;
}


