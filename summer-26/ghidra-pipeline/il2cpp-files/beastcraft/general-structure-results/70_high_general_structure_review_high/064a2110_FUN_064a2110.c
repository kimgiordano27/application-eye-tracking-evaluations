/*
FUNCTION_NAME: FUN_064a2110
ENTRY_POINT: 064a2110
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_064a2110(long *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lStack_38;
  undefined1 auStack_30 [16];
  
  if ((bRam0000000006e9c86d & 1) == 0) {
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Create__
                );
    FUN_02e3ca1c(System_Security_Cryptography_X509Certificates_X509ChainElement_TypeInfo);
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_AsyncProtocolRequest_<StartOperation>d__23>__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_Start<AsyncProtocolRequest_<StartOperation>d__23>__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetException__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetResult__
                );
    bRam0000000006e9c86d = 1;
  }
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  lStack_38 = 0;
  if (param_1[0xaf] != 0) {
    uVar4 = FUN_03f2b9a8(param_1[0xaf],param_2,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_Start<AsyncProtocolRequest_<StartOperation>d__23>__
                        );
    if ((uVar4 & 1) != 0) {
      return;
    }
    lVar5 = param_1[0xaf];
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar8 = *(long *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_AsyncProtocolRequest_<StartOperation>d__23>__
      ;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *plVar7 = (long)param_2;
          thunk_FUN_02ee2be8(plVar7,param_2);
        }
        else {
          FUN_03f2b60c(lVar5,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        FUN_0392ea34(param_2,param_1[0xb1],
                     *(undefined8 *)
                      System_Security_Cryptography_X509Certificates_X509ChainElement_TypeInfo);
        iVar2 = (**(code **)(*param_1 + 0xa38))(param_1,*(undefined8 *)(*param_1 + 0xa40));
        if (iVar2 == -1) {
          if (param_2 == (long *)0x0) goto LAB_064a2314;
          uVar4 = (**(code **)(*param_2 + 0xa38))(param_2,*(undefined8 *)(*param_2 + 0xa40));
          if ((uVar4 & 1) != 0) {
            if (*(int *)(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Create__
                        + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            auStack_30 = FUN_04b9ac08(&lStack_38,
                                      *(undefined8 *)
                                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
                                     );
            FUN_064a1b1c(param_1,lStack_38);
            if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            uVar3 = FUN_03f2c1b4(lStack_38,param_2,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetException__
                                );
            (**(code **)(*param_1 + 0xae8))(param_1,uVar3,*(undefined8 *)(*param_1 + 0xaf0));
            System_Collections_ObjectModel_ReadOnlyCollection<IntPtr>__System_Collections_Generic_IList<T>_get_Item
                      (auStack_30,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetResult__
                      );
          }
        }
        FUN_064a1438(param_1);
        return;
      }
    }
  }
LAB_064a2314:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


