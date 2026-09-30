/*
FUNCTION_NAME: Unity.Mathematics.Random$$NextFloat3Direction
ENTRY_POINT: 059cd860
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_15;functionality_data_collection_or_telemetry_hits_15
*/


undefined8 Unity_Mathematics_Random__NextFloat3Direction(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_x19;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar8;
  
  FUN_02d4dc40();
  FUN_02d4dc40(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<ProcessWrite>d__34>__
              );
  FUN_02d4dc40(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnectionTunnel_<Initialize>d__42>__
              );
  FUN_02d4dc40(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<SetHeadersAsync>d__37>__
              );
  FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<string,_ChatChannel>_Add__);
  FUN_02d4dc40(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<FinishWriting>d__31>__
              );
  FUN_02d4dc40(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteAsyncInner>d__33>__
              );
  FUN_02d4dc40(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer>d__40>__
              );
  FUN_02d4dc40(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer_inner>d__39>__
              );
  *(undefined1 *)(unaff_x21 + 0x7ca) = 1;
  lVar2 = thunk_FUN_02d8a638(*unaff_x23);
  FUN_05044d4c(lVar2,0);
  uVar3 = FUN_04e7eb78(*unaff_x20,*unaff_x22,0);
  if (((uVar3 & 1) != 0) &&
     (uVar3 = FUN_04e7eb78(*unaff_x20,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteAsyncInner>d__33>__
                           ,0), (uVar3 & 1) != 0)) {
    return 0;
  }
  uVar3 = FUN_04e7faf0(unaff_x20[6],0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  lVar4 = FUN_059cbb2c(unaff_x20[6]);
  if (lVar4 == 0) {
    return 0;
  }
  uVar3 = FUN_04e7faf0();
  uVar7 = unaff_x19;
  if ((uVar3 & 1) != 0) {
    if ((*(uint *)(lVar4 + 0x28) & 1) == 0) {
      uVar7 = *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer_inner>d__39>__
      ;
      if (((*(uint *)(lVar4 + 0x28) ^ 0xffffffff) & 0x44) != 0) {
        uVar7 = unaff_x19;
      }
    }
    else {
      uVar7 = *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer>d__40>__
      ;
    }
  }
  uVar3 = FUN_04e7faf0(unaff_x20[2],0);
  if ((uVar3 & 1) == 0) {
    lVar6 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646310,5);
    uVar8 = *unaff_x20;
    if (*(int *)(*(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<SetHeadersAsync>d__37>__
                + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<SetHeadersAsync>d__37>__
                        );
    }
    uVar8 = FUN_059cd6b4(uVar8,0);
    if (lVar6 == 0) goto LAB_059cdbbc;
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_059cdbc0:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    *(undefined8 *)(lVar6 + 0x20) = uVar8;
    thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x20),uVar8);
    puVar1 = Method_System_Collections_Generic_Dictionary<string,_ChatChannel>_Add__;
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_059cdbc0;
    *(undefined8 *)(lVar6 + 0x28) =
         *(undefined8 *)Method_System_Collections_Generic_Dictionary<string,_ChatChannel>_Add__;
    thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x28));
    uVar8 = FUN_059cd6b4(unaff_x20[2],0);
    if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_059cdbc0;
    *(undefined8 *)(lVar6 + 0x30) = uVar8;
    thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x30),uVar8);
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_059cdbc0;
    *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)puVar1;
    thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x38));
    uVar8 = FUN_059cd6b4(unaff_x20[3],0);
    if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_059cdbc0;
    *(undefined8 *)(lVar6 + 0x40) = uVar8;
    thunk_FUN_02dc1ef0();
    uVar8 = FUN_04e80ce4(lVar6,0);
  }
  else {
    uVar8 = *unaff_x20;
    if (*(int *)(*(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<SetHeadersAsync>d__37>__
                + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar8 = FUN_059cd6b4(uVar8,0);
    uVar5 = FUN_059cd6b4(unaff_x20[3],0);
    uVar8 = FUN_04e80678(uVar8,*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_ChatChannel>_Add__
                         ,uVar5,0);
  }
  lVar6 = thunk_FUN_02d8a638(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<SetHeadersAsync>d__37>__
                            );
  FUN_05044d4c(lVar6,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x20) = lVar4;
    thunk_FUN_02dc1ef0((long *)(lVar6 + 0x20),lVar4);
    *(undefined8 *)(lVar6 + 0x10) = uVar7;
    thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x10),uVar7);
    *(undefined8 *)(lVar6 + 0x18) = *unaff_x20;
    thunk_FUN_02dc1ef0();
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar6;
      thunk_FUN_02dc1ef0((long *)(lVar2 + 0x10),lVar6);
      uVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<Initialize>d__36>__
                                );
      FUN_04c43d20(uVar5,lVar2,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<ProcessWrite>d__34>__
                   ,0);
      if (*(int *)(*(long *)PTR_DAT_0664aed0 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_059518bc(uVar5,uVar8,uVar7,0,0,0);
      return uVar8;
    }
  }
LAB_059cdbbc:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


