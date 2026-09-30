/*
FUNCTION_NAME: thunk_FUN_076a1a20
ENTRY_POINT: 076a1a1c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void thunk_FUN_076a1a20(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  
  if ((DAT_082710a7 & 1) == 0) {
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetException__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetResult__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_get_Task__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<BufferOffsetSize>,_HttpWebRequest_<GetResponseFromData>d__244>__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Create__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetException__
                );
    FUN_0373b518(System_Func<FocusEvent>_TypeInfo);
    DAT_082710a7 = 1;
  }
  plVar13 = (long *)(param_1 + 0x20);
  lVar14 = *plVar13;
  if (lVar14 == 0) {
    lVar14 = thunk_FUN_037788cc(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<BufferOffsetSize>,_HttpWebRequest_<GetResponseFromData>d__244>__
                               );
    FUN_05a37e78(lVar14,*(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_get_Task__
                );
  }
  else {
    FUN_05a38dd4(lVar14,*(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetResult__
                );
  }
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Create__
  ;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
  ;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetException__
  ;
  puVar2 = System_Func<FocusEvent>_TypeInfo;
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 != 0) {
    iVar15 = 0;
    while (iVar15 < *(int *)(lVar7 + 0x18)) {
      lVar7 = FUN_049cec24(lVar7,iVar15,*(undefined8 *)puVar5);
      if (lVar7 == 0) goto LAB_076a1ce4;
      FUN_076a182c();
      if (((*(long *)(param_1 + 0x18) == 0) ||
          (lVar7 = FUN_049cec24(*(long *)(param_1 + 0x18),iVar15,*(undefined8 *)puVar5), lVar7 == 0)
          ) || (lVar14 == 0)) goto LAB_076a1ce4;
      uVar8 = FUN_05a38e40(lVar14,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)puVar4);
      if ((uVar8 & 1) == 0) {
        if (((*(long *)(param_1 + 0x18) == 0) ||
            (lVar7 = FUN_049cec24(*(long *)(param_1 + 0x18),iVar15,*(undefined8 *)puVar5),
            lVar7 == 0)) || (*(long *)(param_1 + 0x18) == 0)) goto LAB_076a1ce4;
        uVar6 = *(undefined4 *)(lVar7 + 0x18);
        uVar9 = FUN_049cec24(*(long *)(param_1 + 0x18),iVar15,*(undefined8 *)puVar5);
        FUN_05a38c4c(lVar14,uVar6,uVar9,*(undefined8 *)puVar3);
      }
      lVar7 = *(long *)(param_1 + 0x18);
      iVar15 = iVar15 + 1;
      if (lVar7 == 0) goto LAB_076a1ce4;
    }
    uVar6 = FUN_076b3228(*(undefined8 *)puVar2,0);
    if (lVar14 != 0) {
      uVar8 = FUN_05a38e40(lVar14,uVar6,*(undefined8 *)puVar4);
      if ((uVar8 & 1) != 0) {
LAB_076a1cc0:
        *plVar13 = lVar14;
        thunk_FUN_037aeb94(plVar13,lVar14);
        return;
      }
      uVar16 = **(undefined8 **)(*(long *)(PTR_DAT_07d86548 + 0x90) + 0xb8);
      uVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetException__
                                );
      FUN_076a17b4(uVar9,*(undefined8 *)puVar2,uVar16,uVar16);
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 != 0) {
        lVar10 = *(long *)(lVar7 + 0x10);
        lVar12 = *(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
        ;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
            *puVar11 = uVar9;
            thunk_FUN_037aeb94(puVar11,uVar9);
          }
          else {
            FUN_049ceef4(lVar7,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          FUN_05a38c4c(lVar14,uVar6,uVar9,*(undefined8 *)puVar3);
          goto LAB_076a1cc0;
        }
      }
    }
  }
LAB_076a1ce4:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


