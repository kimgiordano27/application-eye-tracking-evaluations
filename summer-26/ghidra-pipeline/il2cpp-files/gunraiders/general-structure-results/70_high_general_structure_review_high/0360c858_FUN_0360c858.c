/*
FUNCTION_NAME: FUN_0360c858
ENTRY_POINT: 0360c858
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_12
*/


long FUN_0360c858(long *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  if ((DAT_04538060 & 1) == 0) {
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteRequestAsync>d__38>__
                );
    FUN_01c5d288(PTR_DAT_0422fb88);
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteAsyncInner>d__33>__
                );
    FUN_01c5d288(PTR_DAT_04230910);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebSocketHandle_<ConnectAsyncCore>d__26>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_MqttChannelAdapter_<>c__DisplayClass30_0_<<ConnectAsync>b__1>d>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer_inner>d__39>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_BufferedStream_<FlushWriteAsync>d__42>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_BufferedStream_<WriteToUnderlyingStreamAsync>d__63>__
                );
    DAT_04538060 = 1;
  }
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer_inner>d__39>__
  ;
  if (param_1 == (long *)0x0) goto LAB_0360cccc;
  plVar4 = (long *)(**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  uVar5 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  uVar6 = thunk_FUN_03152714(uVar5,*(undefined8 *)puVar2,0);
  if (plVar4 == (long *)0x0) goto LAB_0360cccc;
  iVar3 = (**(code **)(*plVar4 + 0x428))(plVar4,*(undefined8 *)(*plVar4 + 0x430));
  if (iVar3 == 3) {
    if ((uVar6 & 1) != 0) {
      plVar7 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,3);
      puVar2 = PTR_DAT_0422fb88;
      uVar5 = *(undefined8 *)PTR_DAT_0422fb88;
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
      }
      lVar8 = FUN_032e04b8(uVar5,0);
      if (plVar7 == (long *)0x0) goto LAB_0360cccc;
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_0360ccd4:
        uVar5 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar5,0);
      }
      if ((int)plVar7[3] == 0) {
LAB_0360ccd0:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar7[4] = lVar8;
      lVar8 = FUN_032e04b8(*(undefined8 *)puVar2,0);
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
      goto LAB_0360ccd4;
      if (*(uint *)(plVar7 + 3) < 2) goto LAB_0360ccd0;
      plVar7[5] = lVar8;
      lVar8 = FUN_032e04b8(*(undefined8 *)puVar2,0);
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
      goto LAB_0360ccd4;
      if (*(uint *)(plVar7 + 3) < 3) goto LAB_0360ccd0;
      plVar7[6] = lVar8;
      goto LAB_0360cb90;
    }
    uVar5 = *(undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteRequestAsync>d__38>__
    ;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar8 = FUN_032e04b8(uVar5,0);
    puVar1 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebSocketHandle_<ConnectAsyncCore>d__26>__
    ;
joined_r0x0360cc5c:
    if (lVar8 == 0) {
LAB_0360cccc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar8 = FUN_032eb960(lVar8,*puVar1,0);
  }
  else {
    if (iVar3 == 2) {
      if ((uVar6 & 1) == 0) {
        uVar5 = *(undefined8 *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteRequestAsync>d__38>__
        ;
        if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar8 = FUN_032e04b8(uVar5,0);
        puVar1 = (undefined8 *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_BufferedStream_<FlushWriteAsync>d__42>__
        ;
        goto joined_r0x0360cc5c;
      }
      plVar7 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,2);
      puVar2 = PTR_DAT_0422fb88;
      uVar5 = *(undefined8 *)PTR_DAT_0422fb88;
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
      }
      lVar8 = FUN_032e04b8(uVar5,0);
      if (plVar7 == (long *)0x0) goto LAB_0360cccc;
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
      goto LAB_0360ccd4;
      if ((int)plVar7[3] == 0) goto LAB_0360ccd0;
      plVar7[4] = lVar8;
      lVar8 = FUN_032e04b8(*(undefined8 *)puVar2,0);
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
      goto LAB_0360ccd4;
      if (*(uint *)(plVar7 + 3) < 2) goto LAB_0360ccd0;
      plVar7[5] = lVar8;
    }
    else {
      if (iVar3 != 1) goto LAB_0360cbb0;
      if ((uVar6 & 1) == 0) {
        uVar5 = *(undefined8 *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteRequestAsync>d__38>__
        ;
        if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar8 = FUN_032e04b8(uVar5,0);
        puVar1 = (undefined8 *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_BufferedStream_<WriteToUnderlyingStreamAsync>d__63>__
        ;
        goto joined_r0x0360cc5c;
      }
      plVar7 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,1);
      uVar5 = *(undefined8 *)PTR_DAT_0422fb88;
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
      }
      lVar8 = FUN_032e04b8(uVar5,0);
      if (plVar7 == (long *)0x0) goto LAB_0360cccc;
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
      goto LAB_0360ccd4;
      if ((int)plVar7[3] == 0) goto LAB_0360ccd0;
      plVar7[4] = lVar8;
    }
LAB_0360cb90:
    lVar8 = FUN_032eb9dc(plVar4,*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_MqttChannelAdapter_<>c__DisplayClass30_0_<<ConnectAsync>b__1>d>__
                         ,plVar7,0);
  }
  if (lVar8 != 0) {
    lVar8 = FUN_0360c670();
    return lVar8;
  }
LAB_0360cbb0:
  lVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteAsyncInner>d__33>__
                            );
  FUN_03614850(lVar8,0);
  *(long **)(lVar8 + 0x10) = param_1;
  *(undefined4 *)(lVar8 + 0x18) = param_2;
  return lVar8;
}


