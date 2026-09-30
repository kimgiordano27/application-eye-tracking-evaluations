/*
FUNCTION_NAME: FUN_059a8cac
ENTRY_POINT: 059a8cac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_059a8cac(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  
  puVar8 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AssemblyParser_<LoadAssembliesMainThread>d__18>__
  ;
  puVar7 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<WaitForInit>d__22>__
  ;
  puVar6 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuidAsync>d__29>__
  ;
  puVar4 = Method_System_Collections_Generic_List<XRDisplaySubsystem>_get_Item__;
  puVar3 = PTR_DAT_06336608;
  puVar2 = PTR_DAT_06336600;
  if ((DAT_066d3a16 & 1) == 0) {
    FUN_02b3c81c(Method_System_WeakReference<RegexReplacement>_TryGetTarget__);
    FUN_02b3c81c(PTR_DAT_063183d0);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AsyncProtocolRequest_<ProcessOperation>d__24>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AssemblyParser_<LoadAssembliesMainThread>d__18>__
                );
    FUN_02b3c81c(PTR_DAT_0632aae8);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<WaitForInit>d__22>__
                );
    FUN_02b3c81c(PTR_DAT_06336608);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuidAsync>d__29>__
                );
    FUN_02b3c81c(PTR_DAT_06336600);
    FUN_02b3c81c(PTR_DAT_06312c90);
    FUN_02b3c81c(PTR_DAT_063190c8);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<BufferedStream_<FlushAsyncInternal>d__38>__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_List<XRDisplaySubsystem>_get_Item__);
    FUN_02b3c81c(Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<string>_HandleEventBubbleUp__);
    FUN_02b3c81c(PTR_DAT_063203a0);
    FUN_02b3c81c(PTR_DAT_0631b3d0);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<BufferedStream_<FlushWriteAsync>d__42>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<BufferedStream_<WriteToUnderlyingStreamAsync>d__63>__
                );
    DAT_066d3a16 = 1;
  }
  puVar10 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<BufferedStream_<FlushWriteAsync>d__42>__
  ;
  puVar9 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<BufferedStream_<FlushAsyncInternal>d__38>__
  ;
  puVar5 = Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__;
  uVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_036ffb84(uVar14,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x118) = uVar14;
  thunk_FUN_02bb0e9c(param_1 + 0x118,uVar14);
  uVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
  FUN_0375000c(uVar14,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x120) = uVar14;
  thunk_FUN_02bb0e9c(param_1 + 0x120,uVar14);
  uVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
  FUN_0448c3f0(uVar14,*(undefined8 *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AsyncProtocolRequest_<ProcessOperation>d__24>__
              );
  *(undefined8 *)(param_1 + 0x128) = uVar14;
  thunk_FUN_02bb0e9c(param_1 + 0x128,uVar14);
  uVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_05814874(uVar14,*(undefined8 *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<BufferedStream_<WriteToUnderlyingStreamAsync>d__63>__
               ,0);
  *(undefined8 *)(param_1 + 0x130) = uVar14;
  thunk_FUN_02bb0e9c(param_1 + 0x130,uVar14);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_TextInputBaseField<string>_HandleEventBubbleUp__ +
              0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar2 = PTR_DAT_063203a0;
  FUN_05906ddc(param_1,0);
  uVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_05814874(uVar14,*(undefined8 *)puVar10,0);
  FUN_059070dc(param_1,uVar14,0);
  uVar14 = *(undefined8 *)puVar9;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  uVar14 = thunk_FUN_02b79644(uVar14);
  FUN_059a9134();
  *(undefined8 *)(param_1 + 0xd8) = uVar14;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xd8),uVar14);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  bVar11 = FUN_0596848c(0);
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *(byte *)(param_1 + 0xcf) = bVar11 & 1;
  if (iVar1 == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar6 = Method_System_WeakReference<RegexReplacement>_TryGetTarget__;
  puVar4 = PTR_DAT_0632aae8;
  puVar3 = PTR_DAT_0631b3d0;
  puVar2 = PTR_DAT_063183d0;
  iVar12 = FUN_059907ac(0);
  iVar1 = iVar12 + 1;
  iVar13 = iVar1;
  if (*(char *)(param_1 + 0xcf) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    iVar13 = FUN_04d7c5dc(iVar1,iVar12,0);
  }
  uVar14 = FUN_02b3c908(*(undefined8 *)puVar4,iVar13);
  *(undefined8 *)(param_1 + 0xf8) = uVar14;
  thunk_FUN_02bb0e9c();
  uVar14 = FUN_02b3c908(*(undefined8 *)puVar4,iVar1);
  *(undefined8 *)(param_1 + 0xf0) = uVar14;
  thunk_FUN_02bb0e9c();
  uVar14 = FUN_02b3c908(*(undefined8 *)puVar2,iVar1);
  *(undefined8 *)(param_1 + 0xe8) = uVar14;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xe8),uVar14);
  uVar14 = FUN_02b3c908(*(undefined8 *)puVar3,iVar13);
  *(undefined8 *)(param_1 + 0x100) = uVar14;
  thunk_FUN_02bb0e9c(param_1 + 0x100,uVar14);
  uVar14 = FUN_02b3c908(*(undefined8 *)puVar3,iVar13);
  lVar16 = *(long *)puVar6;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar16);
    lVar16 = *(long *)puVar6;
  }
  puVar15 = (undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x30);
  *puVar15 = uVar14;
  thunk_FUN_02bb0e9c(puVar15,uVar14);
  uVar19 = 0;
  while( true ) {
    lVar16 = *(long *)puVar6;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar16 = *(long *)puVar6;
    }
    lVar17 = *(long *)(lVar16 + 0xb8);
    lVar18 = *(long *)(lVar17 + 0x30);
    if (lVar18 == 0) break;
    if ((long)*(int *)(lVar18 + 0x18) <= (long)uVar19) {
      if (*(char *)(param_1 + 0xcf) == '\0') {
        uVar14 = FUN_02b3c908(*(undefined8 *)PTR_DAT_063190c8,iVar12);
        *(undefined8 *)(param_1 + 0x108) = uVar14;
        thunk_FUN_02bb0e9c(param_1 + 0x108,uVar14);
      }
      *(undefined1 *)(param_1 + 0xca) = 1;
      return;
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar17 = *(long *)(*(long *)puVar6 + 0xb8);
      lVar18 = *(long *)(lVar17 + 0x30);
      if (lVar18 == 0) break;
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar18 = lVar18 + uVar19 * 0x10;
    uVar14 = *(undefined8 *)(lVar17 + 0xc);
    uVar19 = uVar19 + 1;
    *(undefined8 *)(lVar18 + 0x28) = *(undefined8 *)(lVar17 + 0x14);
    *(undefined8 *)(lVar18 + 0x20) = uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


