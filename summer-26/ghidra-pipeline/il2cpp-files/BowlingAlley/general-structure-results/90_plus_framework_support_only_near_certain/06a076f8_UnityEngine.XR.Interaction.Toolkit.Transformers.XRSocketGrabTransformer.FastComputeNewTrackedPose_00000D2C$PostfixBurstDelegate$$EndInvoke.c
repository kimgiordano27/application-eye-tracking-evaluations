/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer.FastComputeNewTrackedPose_00000D2C$PostfixBurstDelegate$$EndInvoke
ENTRY_POINT: 06a076f8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 96
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_9;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastComputeNewTrackedPose_00000D2C_PostfixBurstDelegate__EndInvoke
               (void)

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
  void *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  thunk_FUN_032e1da0();
  thunk_FUN_032e1da0(PTR_DAT_0727cc98);
  thunk_FUN_032e1da0(Method_OVRTask<OVRPlugin_Result>_TryGetInternalData<IList<OVRAnchor>>__);
  thunk_FUN_032e1da0(Method_OVRTask<OVRPlugin_Result>_GetAwaiter__);
  thunk_FUN_032e1da0(Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_GetAwaiter__);
  thunk_FUN_032e1da0(PTR_DAT_07280228);
  thunk_FUN_032e1da0(System_Collections_Generic_IReadOnlyCollection<IMaterialsVariantsSlot>_TypeInfo
                    );
  thunk_FUN_032e1da0(Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_GetResult__);
  thunk_FUN_032e1da0(Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_get_IsCompleted__);
  thunk_FUN_032e1da0(
                    Method_OVRTask<OVRSpatialAnchor_OperationResult>_ContinueWith<IEnumerable<OVRSpatialAnchor>>__
                    );
  thunk_FUN_032e1da0(Method_OVRTask<bool>_SetResult__);
  *(undefined1 *)(unaff_x22 + 0x8a9) = 1;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_00000090 = 0;
  uStack000000000000004c = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  plVar7 = (long *)thunk_FUN_032a56a0(*unaff_x20);
  System_IO_Enumeration_FileSystemEntry__set_OriginalRootDirectory(plVar7,0);
  memcpy(&stack0x000000b0,unaff_x19,0xd0);
  uVar8 = FUN_06a07a34(&stack0x000000b0);
  uVar8 = FUN_057a19ac(*unaff_x21,uVar8,0);
  puVar6 = Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_get_IsCompleted__;
  puVar5 = Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_GetResult__;
  puVar4 = Method_OVRTask<OVRSceneManager_LoadSceneModelResult>_GetAwaiter__;
  puVar3 = Method_OVRTask<OVRPlugin_Result>_TryGetInternalData<IList<OVRAnchor>>__;
  puVar2 = Method_OVRTask<OVRPlugin_Result>_SetInternalData<IList<OVRAnchor>>__;
  puVar1 = Method_OVRTask<bool>_get_IsPending__;
  if (plVar7 != (long *)0x0) {
    FUN_057b7f84(plVar7,uVar8,0);
    in_stack_000000a8 = *(undefined8 *)((long)unaff_x19 + 0xd8);
    in_stack_000000a0 = *(undefined8 *)((long)unaff_x19 + 0xd0);
    uVar8 = UnityEngine_UIElements_BaseField<Hash128>__get_rawValue
                      (&stack0x000000a0,*(undefined8 *)puVar1);
    uVar8 = FUN_057a19ac(*(undefined8 *)puVar6,uVar8,0);
    FUN_057b7f84(plVar7,uVar8,0);
    in_stack_000000a8 = *(undefined8 *)((long)unaff_x19 + 0xd8);
    in_stack_000000a0 = *(ulong *)((long)unaff_x19 + 0xd0);
    if ((in_stack_000000a0 & 0xff) != 0) {
      FUN_057b7f84(plVar7,*(undefined8 *)
                           System_Collections_Generic_IReadOnlyCollection<IMaterialsVariantsSlot>_TypeInfo
                   ,0);
    }
    puVar1 = Method_OVRTask<OVRPlugin_Result>_GetAwaiter__;
    memcpy(&stack0x00000050,(void *)((long)unaff_x19 + 0xe0),0x44);
    uVar8 = FUN_046497cc(&stack0x00000050,*(undefined8 *)puVar2);
    uVar8 = FUN_057a19ac(*(undefined8 *)puVar5,uVar8,0);
    FUN_057b7f84(plVar7,uVar8,0);
    memcpy(&stack0x00000050,(void *)((long)unaff_x19 + 0x124),0x44);
    uVar8 = FUN_046497cc(&stack0x00000050,*(undefined8 *)puVar2);
    uVar8 = FUN_057a19ac(*(undefined8 *)puVar4,uVar8,0);
    FUN_057b7f84(plVar7,uVar8,0);
    puVar2 = 
    Method_OVRTask<OVRSpatialAnchor_OperationResult>_ContinueWith<IEnumerable<OVRSpatialAnchor>>__;
    uVar8 = *(undefined8 *)puVar3;
    uStack000000000000004c = 0;
    if (*(long *)((long)unaff_x19 + 0x168) != 0) {
      uStack000000000000004c = *(undefined4 *)(*(long *)((long)unaff_x19 + 0x168) + 0x18);
    }
    uVar9 = FUN_05920f80(&stack0x0000004c,0);
    uVar8 = FUN_057a19ac(uVar8,uVar9,0);
    FUN_057b7f84(plVar7,uVar8,0);
    uVar8 = *(undefined8 *)puVar1;
    uStack000000000000004c = 0;
    if (*(long *)((long)unaff_x19 + 0x170) != 0) {
      uStack000000000000004c = *(undefined4 *)(*(long *)((long)unaff_x19 + 0x170) + 0x18);
    }
    uVar9 = FUN_05920f80(&stack0x0000004c,0);
    uVar8 = FUN_057a19ac(uVar8,uVar9,0);
    FUN_057b7f84(plVar7,uVar8,0);
    uVar10 = FUN_06a3212c();
    uVar8 = *(undefined8 *)puVar2;
    if ((uVar10 & 1) == 0) {
      uVar9 = *(undefined8 *)PTR_DAT_07280228;
    }
    else {
      uVar9 = FUN_06a31b14();
    }
    uVar8 = FUN_057a19ac(uVar8,uVar9,0);
    FUN_057b7f84(plVar7,uVar8,0);
    (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


