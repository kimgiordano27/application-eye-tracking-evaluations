/*
FUNCTION_NAME: FUN_05e66e9c
ENTRY_POINT: 05e66e9c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05e66e9c(float *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  ulong local_a0;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  ulong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer>d__40>__
  ;
  if ((DAT_06b8383f & 1) == 0) {
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer>d__40>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_StreamWriter_<FlushAsyncInternal>d__74>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuidAsync>d__29>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<WaitForInit>d__22>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AssemblyParser_<LoadAssembliesMainThread>d__18>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AsyncProtocolRequest_<ProcessOperation>d__24>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<Base64Encoder_<EncodeAsync>d__13>__
                );
    FUN_02d6084c(PTR_DAT_06767fe8);
    FUN_02d6084c(PTR_DAT_06767ff0);
                    /* try { // try from 05e66f44 to 05f66f57 has its CatchHandler @ 05e6720c */
    DAT_06b8383f = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if (param_2 != 0) {
    FUN_0335be3c(param_2,**(undefined8 **)(*(long *)puVar1 + 0xb8),
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_StreamWriter_<FlushAsyncInternal>d__74>__
                );
    FUN_05e674a0(&local_90,**(undefined8 **)(*(long *)puVar1 + 0xb8));
    fVar9 = (float)local_80;
    fVar18 = (float)(local_80 >> 0x20);
    local_a0 = local_80;
    if (DAT_06b7224b == '\0') {
      FUN_02d6084c(PTR_DAT_0675e318);
      DAT_06b7224b = '\x01';
    }
    uVar10 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_0675e318 + 0xb8) + 1);
    fVar5 = (fStack_84 + fStack_84) - **(float **)(*(long *)PTR_DAT_0675e318 + 0xb8);
    fVar8 = (fVar9 + fVar9) - (float)uVar10;
    fVar11 = (fVar18 + fVar18) - (float)((ulong)uVar10 >> 0x20);
    fVar11 = fVar11 * fVar11;
    uVar3 = (ulong)(uint)fVar11;
    fVar15 = local_88;
    fVar17 = fStack_84;
    fVar6 = local_90;
    fVar12 = fStack_8c;
    if (DAT_01208240 <= fVar11 + fVar5 * fVar5 + fVar8 * fVar8) {
LAB_05e671a0:
      local_a0._0_4_ = fVar9;
      *param_1 = fVar6;
      param_1[1] = fVar12;
      param_1[2] = fVar15;
      param_1[3] = fVar17;
      param_1[4] = (float)local_a0;
      param_1[5] = fVar18;
      return;
    }
    lVar2 = *(long *)puVar1;
    fVar9 = DAT_01208240;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *(long *)puVar1;
    }
    FUN_0335be3c(param_2,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8),
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuidAsync>d__29>__
                );
    lVar2 = *(long *)puVar1;
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar4 != 0) {
      uVar16 = (ulong)(uint)fStack_8c;
      if (0 < *(int *)(lVar4 + 0x18)) {
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
          if (lVar4 == 0) goto LAB_05e671d4;
        }
        lVar2 = FUN_03aac1c4(lVar4,0,*(undefined8 *)PTR_DAT_06767ff0);
        if (lVar2 == 0) goto LAB_05e671d4;
        fVar6 = (float)FUN_06078c44(lVar2,0);
        lVar2 = *(long *)puVar1;
        uVar16 = uVar3;
        fVar15 = fVar9;
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar2 != 0) {
        FUN_03aaceb0(&local_78,lVar2,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<Base64Encoder_<EncodeAsync>d__13>__
                    );
        puVar1 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AssemblyParser_<LoadAssembliesMainThread>d__18>__
        ;
        while( true ) {
          fVar5 = (float)uVar3;
          fVar12 = (float)uVar16;
          uVar3 = FUN_04a7a4a0(&local_78,*(undefined8 *)puVar1);
          if ((uVar3 & 1) == 0) break;
          if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          fVar11 = (float)FUN_06078c44(local_68,0);
          fVar8 = fVar6 - fVar17;
          if (fVar11 <= fVar6 - fVar17) {
            fVar8 = fVar11;
          }
          fVar13 = fVar12 - (float)local_a0;
          if (fVar5 <= fVar12 - (float)local_a0) {
            fVar13 = fVar5;
          }
          fVar14 = fVar15 - fVar18;
          if (fVar9 <= fVar15 - fVar18) {
            fVar14 = fVar9;
          }
          fVar7 = fVar17 + fVar6;
          if (fVar17 + fVar6 <= fVar11) {
            fVar7 = fVar11;
          }
          fVar6 = (float)local_a0 + fVar12;
          if ((float)local_a0 + fVar12 <= fVar5) {
            fVar6 = fVar5;
          }
          fVar12 = fVar15 + fVar18;
          if (fVar15 + fVar18 <= fVar9) {
            fVar12 = fVar9;
          }
          fVar17 = (fVar7 - fVar8) * 0.5;
          fVar9 = (fVar6 - fVar13) * 0.5;
          uVar3 = (ulong)(uint)fVar9;
          fVar18 = (fVar12 - fVar14) * 0.5;
          fVar6 = fVar8 + fVar17;
          uVar16 = (ulong)(uint)(fVar13 + fVar9);
          fVar15 = fVar14 + fVar18;
          fVar9 = fVar12;
          local_a0 = uVar3;
        }
        FUN_04a7a49c(&local_78,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<WaitForInit>d__22>__
                    );
        fVar9 = (float)local_a0;
        goto LAB_05e671a0;
      }
    }
  }
LAB_05e671d4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


