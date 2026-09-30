/*
FUNCTION_NAME: FUN_057a75b4
ENTRY_POINT: 057a75b4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_057a75b4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_06bc0b4b & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_Awaitable_Awaiter<XRResultStatus>_get_IsCompleted__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<PersistentCall>_get_Current__);
    FUN_02f08768(Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_get_IsCompleted__);
    FUN_02f08768(Method_OVRTask_Awaiter<MRUKNativeFuncs_MrukResult>_GetResult__);
    FUN_02f08768(Method_OVRTask_Awaiter<MRUKNativeFuncs_MrukResult>_get_IsCompleted__);
    FUN_02f08768(Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__);
    FUN_02f08768(Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__);
    FUN_02f08768(Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_GetResult__);
    FUN_02f08768(Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_get_IsCompleted__);
    FUN_02f08768(Method_OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>_GetResult__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<PlaneClassification>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<PlaneClassification>_MoveNext__);
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<PlaneClassification>_get_Current__
                );
    DAT_06bc0b4b = 1;
  }
  if ((param_1 == 0) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_057a7908;
  iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x10);
  if (iVar1 < 0x65) {
    if (0x61 < iVar1) {
      if (iVar1 == 0x62) {
        uVar2 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_OVRTask_Awaiter<MRUKNativeFuncs_MrukResult>_get_IsCompleted__
                                  );
        FUN_05770c38(uVar2,0);
      }
      else if (iVar1 == 99) {
        uVar2 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<PlaneClassification>_Dispose__
                                  );
        FUN_05770c58(uVar2,0);
      }
      else {
        if (iVar1 != 100) goto LAB_057a7900;
        uVar2 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<PersistentCall>_get_Current__
                                  );
        FUN_05770c78(uVar2,0);
      }
      goto LAB_057a7874;
    }
    if (iVar1 == 0x5f) {
      uVar2 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__);
      FUN_05770bd8(uVar2,0);
      goto LAB_057a7874;
    }
    if (iVar1 == 0x60) {
      uVar2 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_GetResult__
                                );
      FUN_05770bf8(uVar2,0);
      goto LAB_057a7874;
    }
    if (iVar1 == 0x61) {
      uVar2 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_OVRTask_Awaiter<MRUKNativeFuncs_MrukResult>_GetResult__);
      FUN_05770c18(uVar2,0);
      goto LAB_057a7874;
    }
LAB_057a7900:
    uVar2 = *(undefined8 *)(param_1 + 0x170);
  }
  else {
    if (iVar1 < 0x68) {
      if (iVar1 == 0x65) {
        uVar2 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_get_IsCompleted__)
        ;
        FUN_05770b38(uVar2,0);
      }
      else if (iVar1 == 0x66) {
        uVar2 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_get_IsCompleted__
                                  );
        FUN_05770b58(uVar2,0);
      }
      else {
        if (iVar1 != 0x67) goto LAB_057a7900;
        uVar2 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__);
        FUN_05770b78(uVar2,0);
      }
    }
    else if (iVar1 == 0x68) {
      uVar2 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_UnityEngine_Awaitable_Awaiter<XRResultStatus>_get_IsCompleted__
                                );
      FUN_05770bb8(uVar2,0);
    }
    else if (iVar1 == 0x69) {
      uVar2 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>_GetResult__);
      FUN_05770b98(uVar2,0);
    }
    else {
      if (iVar1 != 0x75) goto LAB_057a7900;
      uVar2 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<PlaneClassification>_MoveNext__
                                );
      FUN_05770c98(uVar2,0);
    }
LAB_057a7874:
    *(undefined8 *)(param_1 + 0x170) = uVar2;
  }
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  iVar1 = FUN_057a3e5c(param_1);
  if (iVar1 == 0x73) {
    lVar3 = *(long *)(param_1 + 0xe8);
joined_r0x057a78e0:
    if (lVar3 == 0) goto LAB_057a7908;
  }
  else {
    if ((*(long *)(param_1 + 0xd0) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0xd0) + 0x68), lVar3 == 0)) goto LAB_057a7908;
    iVar1 = FUN_05079c6c(lVar3,0);
    if (iVar1 != 0) {
LAB_057a78c4:
      FUN_057a28e8(param_1,*(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<PlaneClassification>_get_Current__
                   ,0);
      lVar3 = *(long *)(param_1 + 0xd0);
      goto joined_r0x057a78e0;
    }
    lVar3 = *(long *)(param_1 + 0xd0);
    if (lVar3 == 0) goto LAB_057a7908;
    if (*(long *)(lVar3 + 0x70) != 0) goto LAB_057a78c4;
  }
  if (*(long *)(lVar3 + 0x60) != 0) {
    FUN_0576aff0(*(long *)(lVar3 + 0x60),*(undefined8 *)(param_1 + 0x170),0);
    return;
  }
LAB_057a7908:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


