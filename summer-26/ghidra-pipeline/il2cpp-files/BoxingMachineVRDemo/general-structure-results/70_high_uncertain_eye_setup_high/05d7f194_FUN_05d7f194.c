/*
FUNCTION_NAME: FUN_05d7f194
ENTRY_POINT: 05d7f194
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05d7f194(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((DAT_06b82cef & 1) == 0) {
    FUN_02d6084c(Method_System_Nullable<MetadataPropertyHandling>__ctor__);
    FUN_02d6084c(Method_System_Nullable<OVRPlugin_Result>_get_HasValue__);
    FUN_02d6084c(Method_System_Nullable<MetadataPropertyHandling>_GetValueOrDefault__);
    FUN_02d6084c(PTR_DAT_067693c0);
    FUN_02d6084c(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<List<bool>>,_OVRSceneRoom_<LoadRoom>d__19>__
                );
    FUN_02d6084c(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSceneManager_<FetchAnchorsAsync>d__37>__
                );
    FUN_02d6084c(PTR_DAT_0676bc78);
    FUN_02d6084c(PTR_DAT_06769b00);
    FUN_02d6084c(PTR_DAT_0676ba80);
    FUN_02d6084c(
                Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__
                );
    DAT_06b82cef = 1;
  }
  if (*param_1 != 0) {
    uVar4 = FUN_05d69a68(*param_1,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if ((*param_1 == 0) ||
       (lVar5 = FUN_05d69ae4(*param_1,0),
       puVar1 = Method_System_Nullable<OVRPlugin_Result>_get_HasValue__, lVar5 == 0))
    goto LAB_05d7f558;
    iVar3 = FUN_048953c0(lVar5,*(undefined8 *)
                                Method_System_Nullable<OVRPlugin_Result>_get_HasValue__);
    if (2 < iVar3) {
      return;
    }
    uVar8 = *(undefined8 *)
             Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSceneManager_<FetchAnchorsAsync>d__37>__
    ;
    uVar9 = *(undefined8 *)
             Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<List<bool>>,_OVRSceneRoom_<LoadRoom>d__19>__
    ;
    uVar11 = *(undefined8 *)PTR_DAT_06769b00;
    uVar10 = *(undefined8 *)PTR_DAT_0676bc78;
    iVar3 = FUN_048953c0(lVar5,*(undefined8 *)puVar1);
    puVar2 = Method_System_Nullable<MetadataPropertyHandling>__ctor__;
    if (((iVar3 == 2) &&
        (uVar4 = FUN_048958e4(lVar5,uVar10,
                              *(undefined8 *)
                               Method_System_Nullable<MetadataPropertyHandling>__ctor__),
        (uVar4 & 1) != 0)) &&
       (uVar4 = FUN_048958e4(lVar5,uVar11,*(undefined8 *)puVar2),
       puVar2 = Method_System_Nullable<MetadataPropertyHandling>_GetValueOrDefault__,
       (uVar4 & 1) != 0)) {
      lVar6 = FUN_04895670(lVar5,uVar11,
                           *(undefined8 *)
                            Method_System_Nullable<MetadataPropertyHandling>_GetValueOrDefault__);
      *param_1 = lVar6;
      thunk_FUN_02dd37b4(param_1,lVar6);
      puVar1 = 
      Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__;
      lVar6 = *param_1;
      if (*(int *)(*(long *)
                    Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05d7e758(lVar6);
      FUN_05d7f194(param_1);
      if (*param_1 == 0) goto LAB_05d7f558;
      lVar6 = FUN_05d69ae4(*param_1,0);
      uVar8 = *(undefined8 *)puVar2;
      uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      uVar9 = uVar10;
    }
    else {
      iVar3 = FUN_048953c0(lVar5,*(undefined8 *)puVar1);
      puVar2 = Method_System_Nullable<MetadataPropertyHandling>__ctor__;
      if (((iVar3 != 2) ||
          (uVar4 = FUN_048958e4(lVar5,uVar9,
                                *(undefined8 *)
                                 Method_System_Nullable<MetadataPropertyHandling>__ctor__),
          (uVar4 & 1) == 0)) ||
         (uVar4 = FUN_048958e4(lVar5,uVar11,*(undefined8 *)puVar2),
         puVar2 = Method_System_Nullable<MetadataPropertyHandling>_GetValueOrDefault__,
         (uVar4 & 1) == 0)) {
        iVar3 = FUN_048953c0(lVar5,*(undefined8 *)puVar1);
        if (iVar3 != 1) {
          return;
        }
        uVar4 = FUN_048958e4(lVar5,uVar8,
                             *(undefined8 *)Method_System_Nullable<MetadataPropertyHandling>__ctor__
                            );
        if ((uVar4 & 1) == 0) {
          return;
        }
        if (*(int *)(*(long *)PTR_DAT_0676ba80 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar6 = FUN_05d6a700(0);
        *param_1 = lVar6;
        thunk_FUN_02dd37b4(param_1,lVar6);
        if (*param_1 == 0) goto LAB_05d7f558;
        lVar6 = FUN_05d69ae4(*param_1,0);
        puVar1 = 
        Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__;
        lVar7 = *(long *)
                 Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__
        ;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar7);
          lVar7 = *(long *)puVar1;
        }
        uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
        uVar9 = FUN_04895670(lVar5,uVar8,
                             *(undefined8 *)
                              Method_System_Nullable<MetadataPropertyHandling>_GetValueOrDefault__);
        if (lVar6 == 0) goto LAB_05d7f558;
        goto LAB_05d7f524;
      }
      lVar6 = FUN_04895670(lVar5,uVar11,
                           *(undefined8 *)
                            Method_System_Nullable<MetadataPropertyHandling>_GetValueOrDefault__);
      *param_1 = lVar6;
      thunk_FUN_02dd37b4(param_1,lVar6);
      puVar1 = 
      Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__;
      lVar6 = *param_1;
      if (*(int *)(*(long *)
                    Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05d7e758(lVar6);
      FUN_05d7f194(param_1);
      if (*param_1 == 0) goto LAB_05d7f558;
      lVar6 = FUN_05d69ae4(*param_1,0);
      uVar8 = *(undefined8 *)puVar2;
      uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    }
    uVar9 = FUN_04895670(lVar5,uVar9,uVar8);
    if (lVar6 != 0) {
LAB_05d7f524:
      FUN_048956dc(lVar6,uVar11,uVar9,*(undefined8 *)PTR_DAT_067693c0);
      return;
    }
  }
LAB_05d7f558:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


