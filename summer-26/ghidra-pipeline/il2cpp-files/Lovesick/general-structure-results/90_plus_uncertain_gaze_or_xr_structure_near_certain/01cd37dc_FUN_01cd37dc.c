/*
FUNCTION_NAME: FUN_01cd37dc
ENTRY_POINT: 01cd37dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_01cd37dc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar4 = param_2;
  if ((DAT_0377f042 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_95__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JObject_<LoadAsync>d__2>__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_MetaXRAcousticMap_<LoadMapFromMemory>d__35>__
                      );
    thunk_FUN_00d48444(System_IO_FileStream_WriteDelegate_TypeInfo);
    thunk_FUN_00d48444(Method_System_DateTime_AddYears__);
    DAT_0377f042 = 1;
  }
  for (; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
    uVar3 = FUN_01cd3f44(param_1,lVar4);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 6) break;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar8 = *(undefined8 *)Method_System_DateTime_AddYears__;
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_01780344(uVar8,0);
    uVar3 = FUN_0178a8c4(uVar6,uVar8,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x10);
      FUN_00ac2be8(lVar4);
      uVar6 = FUN_01cb2d04(*(undefined8 *)(lVar4 + 0x10),0);
      goto LAB_01cd3a20;
    }
  }
  uVar3 = FUN_01cd3ec8(param_1);
  puVar1 = System_IO_FileStream_WriteDelegate_TypeInfo;
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_01cd4004(param_1);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar1;
    }
    puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_95__;
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar5 = *(long *)puVar1;
      }
      uVar6 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar7 == 0) {
LAB_01cd39e8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_012d239c(lVar7,uVar6,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_MetaXRAcousticMap_<LoadMapFromMemory>d__35>__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar7;
    }
    lVar5 = FUN_01101f4c(lVar4,param_2,lVar7,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JObject_<LoadAsync>d__2>__
                        );
    for (; lVar5 != param_2; param_2 = *(long *)(param_2 + 0x20)) {
      if (param_2 == 0) goto LAB_01cd39e8;
      if (*(int *)(param_2 + 0x18) == 7) {
        uVar6 = FUN_01cb29e0(0);
        goto LAB_01cd3a20;
      }
      if (*(int *)(param_2 + 0x18) == 6) {
        uVar6 = FUN_01cb2914(0);
        goto LAB_01cd3a20;
      }
    }
    while( true ) {
      if (lVar4 == lVar5) {
        return;
      }
      if (lVar4 == 0) goto LAB_01cd39e8;
      if (3 < *(uint *)(lVar4 + 0x18)) break;
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    if (*(uint *)(lVar4 + 0x18) == 8) {
      uVar6 = FUN_01cb2c38(0);
    }
    else {
      uVar6 = FUN_01cb2b6c(0);
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x10);
    FUN_00ac2be8(lVar4);
    uVar6 = FUN_01cb2aac(*(undefined8 *)(lVar4 + 0x10),0);
  }
LAB_01cd3a20:
  uVar8 = thunk_FUN_00d48444(Method_System_ParseNumbers_IntToString__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar6,uVar8);
}


