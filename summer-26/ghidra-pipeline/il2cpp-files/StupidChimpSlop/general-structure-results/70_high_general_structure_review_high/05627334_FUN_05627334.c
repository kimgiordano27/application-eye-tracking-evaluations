/*
FUNCTION_NAME: FUN_05627334
ENTRY_POINT: 05627334
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_7;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_05627334(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_06a545f0 & 1) == 0) {
    FUN_02d4dc40(UnityEngine_InputSystem_Controls_DpadControl_var);
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_SortingHelpers_SquareDistanceAttachPointEvaluator_SqDistanceToInteractable_000017C3_BurstDirectCall_TypeInfo
                );
    DAT_06a545f0 = 1;
  }
  if ((param_2 == 0) || (*(int *)(param_2 + 0x10) == 0)) {
    uVar5 = thunk_FUN_02db45e8(Method_Unity_Collections_ArrayOfArrays<IntPtr>_Dispose__);
    uVar5 = FUN_0565b7a8(uVar5,0);
    thunk_FUN_02db45e8(PTR_DAT_06649f68);
    uVar6 = thunk_FUN_02d8a638();
    FUN_04f6ede4(uVar6,uVar5,0);
    uVar5 = thunk_FUN_02db45e8(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar6,uVar5);
  }
  if (*(int *)(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_0565b9b8(param_2,1,0);
  if (*(int *)(param_1 + 0xa0) != 1) {
    FUN_05627050(param_1,4);
    puVar1 = 
    UnityEngine_XR_Interaction_Toolkit_SortingHelpers_SquareDistanceAttachPointEvaluator_SqDistanceToInteractable_000017C3_BurstDirectCall_TypeInfo
    ;
    if (*(char *)(param_1 + 0xa4) != '\0') {
      *(undefined4 *)(param_1 + 0x98) = 0x10;
      uVar5 = thunk_FUN_02db45e8(
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_get_Task__
                                );
      uVar5 = FUN_0565b7a8(uVar5,0);
      thunk_FUN_02db45e8(PTR_DAT_066463b8);
      uVar6 = thunk_FUN_02d8a638();
      FUN_05002ed0(uVar6,uVar5,0);
      uVar5 = thunk_FUN_02db45e8(
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar6,uVar5);
    }
    if (*(int *)(param_1 + 0xa0) == 0) {
      *(undefined4 *)(param_1 + 0xa0) = 2;
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar3 = *(long *)puVar1;
      }
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
      thunk_FUN_02dc1ef0();
    }
    if (*(char *)(param_1 + 0x9c) != '\0') {
      if (param_3 != 0) {
        iVar2 = FUN_05659ca8(param_1 + 0xa8,param_3,0);
        if (-1 < iVar2) {
          uVar5 = FUN_05658dd4(param_3,iVar2,0);
          uVar6 = thunk_FUN_02db45e8(
                                    System_Linq_Expressions_Interpreter_NegateInstruction_NegateSingle_TypeInfo
                                    );
          uVar5 = FUN_056593c4(uVar6,uVar5,0);
          thunk_FUN_02db45e8(PTR_DAT_06649f68);
          uVar6 = thunk_FUN_02d8a638();
          uVar7 = thunk_FUN_02db45e8(
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<BufferOffsetSize>,_HttpWebRequest_<GetResponseFromData>d__244>__
                                    );
          FUN_04f68234(uVar6,uVar5,uVar7,0);
          uVar5 = thunk_FUN_02db45e8(
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar6,uVar5);
        }
      }
      if (param_4 != 0) {
        iVar2 = FUN_05659b28(param_1 + 0xa8,param_4,0);
        if (-1 < iVar2) {
          uVar5 = FUN_05658dd4(param_4,iVar2,0);
          uVar6 = thunk_FUN_02db45e8(
                                    System_Linq_Expressions_Interpreter_NegateInstruction_NegateSingle_TypeInfo
                                    );
          uVar5 = FUN_056593c4(uVar6,uVar5,0);
          thunk_FUN_02db45e8(PTR_DAT_06649f68);
          uVar6 = thunk_FUN_02d8a638();
          uVar7 = thunk_FUN_02db45e8(
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
                                    );
          FUN_04f68234(uVar6,uVar5,uVar7,0);
          uVar5 = thunk_FUN_02db45e8(
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar6,uVar5);
        }
      }
      if (param_5 != 0) {
        iVar2 = FUN_05659b28(param_1 + 0xa8,param_5,0);
        if (-1 < iVar2) {
          uVar5 = FUN_05658dd4(param_5,iVar2,0);
          uVar6 = thunk_FUN_02db45e8(
                                    System_Linq_Expressions_Interpreter_NegateInstruction_NegateSingle_TypeInfo
                                    );
          uVar5 = FUN_056593c4(uVar6,uVar5,0);
          thunk_FUN_02db45e8(PTR_DAT_06649f68);
          uVar6 = thunk_FUN_02d8a638();
          uVar7 = thunk_FUN_02db45e8(
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
                                    );
          FUN_04f68234(uVar6,uVar5,uVar7,0);
          uVar5 = thunk_FUN_02db45e8(
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar6,uVar5);
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x18);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x1b8))
                (plVar4,param_2,param_3,param_4,param_5,*(undefined8 *)(*plVar4 + 0x1c0));
      *(undefined1 *)(param_1 + 0xa4) = 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar5 = thunk_FUN_02db45e8(
                            UnityEngine_Rendering_InstanceCullerBurst_SetupCullingJobInput_0000014D_PostfixBurstDelegate_TypeInfo
                            );
  uVar5 = FUN_0565b7a8(uVar5,0);
  thunk_FUN_02db45e8(PTR_DAT_066463b8);
  uVar6 = thunk_FUN_02d8a638();
  FUN_05002ed0(uVar6,uVar5,0);
  uVar5 = thunk_FUN_02db45e8(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar6,uVar5);
}


