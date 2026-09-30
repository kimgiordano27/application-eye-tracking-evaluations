/*
FUNCTION_NAME: FUN_06a07688
ENTRY_POINT: 06a07688
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_06a07688(void *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 local_140;
  ulong local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [208];
  
  puVar2 = Method_OVRTask<bool>_SetResult__;
  puVar1 = PTR_DAT_0727cc98;
  if ((DAT_076e28a9 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072a3f58);
    thunk_FUN_032e1da0(PTR_DAT_0727d800);
    thunk_FUN_032e1da0(Method_OVRTask<bool>_get_IsPending__);
    thunk_FUN_032e1da0(Method_OVRTask<OVRPlugin_Result>_SetInternalData<IList<OVRAnchor>>__);
    thunk_FUN_032e1da0(PTR_DAT_072809f8);
    thunk_FUN_032e1da0(PTR_DAT_0727cc98);
    thunk_FUN_032e1da0(Method_OVRTask<OVRPlugin_Result>_TryGetInternalData<IList<OVRAnchor>>__);
    thunk_FUN_032e1da0(Method_OVRTask<OVRPlugin_Result>_GetAwaiter__);
    thunk_FUN_032e1da0(Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_GetAwaiter__);
    thunk_FUN_032e1da0(PTR_DAT_07280228);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_IReadOnlyCollection<IMaterialsVariantsSlot>_TypeInfo
                      );
    thunk_FUN_032e1da0(Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_GetResult__);
    thunk_FUN_032e1da0(Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_get_IsCompleted__);
    thunk_FUN_032e1da0(
                      Method_OVRTask<OVRSpatialAnchor_OperationResult>_ContinueWith<IEnumerable<OVRSpatialAnchor>>__
                      );
    thunk_FUN_032e1da0(Method_OVRTask<bool>_SetResult__);
    DAT_076e28a9 = 1;
  }
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  local_184 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  plVar7 = (long *)thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  System_IO_Enumeration_FileSystemEntry__set_OriginalRootDirectory(plVar7,0);
  memcpy(auStack_120,param_1,0xd0);
  uVar8 = FUN_06a07a34(auStack_120);
  uVar8 = FUN_057a19ac(*(undefined8 *)puVar2,uVar8,0);
  puVar6 = Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_get_IsCompleted__;
  puVar5 = Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_GetResult__;
  puVar4 = Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_GetAwaiter__;
  puVar3 = Method_OVRTask<OVRPlugin_Result>_TryGetInternalData<IList<OVRAnchor>>__;
  puVar2 = Method_OVRTask<OVRPlugin_Result>_SetInternalData<IList<OVRAnchor>>__;
  puVar1 = Method_OVRTask<bool>_get_IsPending__;
  if (plVar7 != (long *)0x0) {
    FUN_057b7f84(plVar7,uVar8,0);
    uStack_128 = *(undefined8 *)((long)param_1 + 0xd8);
    local_130 = *(ulong *)((long)param_1 + 0xd0);
    uVar8 = UnityEngine_UIElements_BaseField<Hash128>__get_rawValue
                      (&local_130,*(undefined8 *)puVar1);
    uVar8 = FUN_057a19ac(*(undefined8 *)puVar6,uVar8,0);
    FUN_057b7f84(plVar7,uVar8,0);
    uStack_128 = *(undefined8 *)((long)param_1 + 0xd8);
    local_130 = *(ulong *)((long)param_1 + 0xd0);
    if ((local_130 & 0xff) != 0) {
      FUN_057b7f84(plVar7,*(undefined8 *)
                           System_Collections_Generic_IReadOnlyCollection<IMaterialsVariantsSlot>_TypeInfo
                   ,0);
    }
    puVar1 = Method_OVRTask<OVRPlugin_Result>_GetAwaiter__;
    memcpy(&local_180,(void *)((long)param_1 + 0xe0),0x44);
    uVar8 = FUN_046497cc(&local_180,*(undefined8 *)puVar2);
    uVar8 = FUN_057a19ac(*(undefined8 *)puVar5,uVar8,0);
    FUN_057b7f84(plVar7,uVar8,0);
    memcpy(&local_180,(void *)((long)param_1 + 0x124),0x44);
    uVar8 = FUN_046497cc(&local_180,*(undefined8 *)puVar2);
    uVar8 = FUN_057a19ac(*(undefined8 *)puVar4,uVar8,0);
    FUN_057b7f84(plVar7,uVar8,0);
    puVar2 = 
    Method_OVRTask<OVRSpatialAnchor_OperationResult>_ContinueWith<IEnumerable<OVRSpatialAnchor>>__;
    uVar8 = *(undefined8 *)puVar3;
    local_184 = 0;
    if (*(long *)((long)param_1 + 0x168) != 0) {
      local_184 = *(undefined4 *)(*(long *)((long)param_1 + 0x168) + 0x18);
    }
    uVar9 = FUN_05920f80(&local_184,0);
    uVar8 = FUN_057a19ac(uVar8,uVar9,0);
    FUN_057b7f84(plVar7,uVar8,0);
    uVar8 = *(undefined8 *)puVar1;
    local_184 = 0;
    if (*(long *)((long)param_1 + 0x170) != 0) {
      local_184 = *(undefined4 *)(*(long *)((long)param_1 + 0x170) + 0x18);
    }
    uVar9 = FUN_05920f80(&local_184,0);
    uVar8 = FUN_057a19ac(uVar8,uVar9,0);
    FUN_057b7f84(plVar7,uVar8,0);
    uStack_1a8 = *(undefined8 *)((long)param_1 + 0x1d8);
    local_1b0 = *(undefined8 *)((long)param_1 + 0x1d0);
    uStack_198 = *(undefined8 *)((long)param_1 + 0x1e8);
    uStack_1a0 = *(undefined8 *)((long)param_1 + 0x1e0);
    uStack_1c8 = *(undefined8 *)((long)param_1 + 0x1b8);
    local_1d0 = *(undefined8 *)((long)param_1 + 0x1b0);
    uStack_1b8 = *(undefined8 *)((long)param_1 + 0x1c8);
    uStack_1c0 = *(undefined8 *)((long)param_1 + 0x1c0);
    uVar10 = FUN_06a3212c(&local_1d0,0);
    uVar8 = *(undefined8 *)puVar2;
    if ((uVar10 & 1) == 0) {
      uVar9 = *(undefined8 *)PTR_DAT_07280228;
    }
    else {
      uStack_1a8 = *(undefined8 *)((long)param_1 + 0x1d8);
      local_1b0 = *(undefined8 *)((long)param_1 + 0x1d0);
      uStack_198 = *(undefined8 *)((long)param_1 + 0x1e8);
      uStack_1a0 = *(undefined8 *)((long)param_1 + 0x1e0);
      uStack_1c8 = *(undefined8 *)((long)param_1 + 0x1b8);
      local_1d0 = *(undefined8 *)((long)param_1 + 0x1b0);
      uStack_1b8 = *(undefined8 *)((long)param_1 + 0x1c8);
      uStack_1c0 = *(undefined8 *)((long)param_1 + 0x1c0);
      uVar9 = FUN_06a31b14(&local_1d0,0);
    }
    uVar8 = FUN_057a19ac(uVar8,uVar9,0);
    FUN_057b7f84(plVar7,uVar8,0);
    (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


