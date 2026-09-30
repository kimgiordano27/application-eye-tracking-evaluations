/*
FUNCTION_NAME: FUN_019959dc
ENTRY_POINT: 019959dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8
*/


void FUN_019959dc(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  if ((DAT_0377a47d & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_string>>_AwaitUnsafeOnCompleted<TaskAwaiter,_VRequest_<DecodeFileHeaders>d__105>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<bool>>_AwaitUnsafeOnCompleted<TaskAwaiter,_VRequest_<RequestFileDownload>d__108>__
                      );
    thunk_FUN_00d48444(Method_System_Threading_Tasks_Task_Run<string>__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputControlList<InputControl>_Dispose__);
    thunk_FUN_00d48444(PTR_DAT_033ef138);
    thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_XRCameraIntrinsics_TypeInfo);
    DAT_0377a47d = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar2 = UnityEngine_XR_ARSubsystems_XRCameraIntrinsics_TypeInfo;
  if (lVar3 == 0) {
LAB_01995b94:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_016f27fc(lVar3,param_1,*(undefined8 *)PTR_DAT_033ef138,0);
  FUN_01954c14(param_1,param_1 + 8,lVar3,0);
  if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<bool>>_AwaitUnsafeOnCompleted<TaskAwaiter,_VRequest_<RequestFileDownload>d__108>__
                              );
    if (lVar3 == 0) goto LAB_01995b94;
    FUN_0126412c(lVar3,*(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_string>>_AwaitUnsafeOnCompleted<TaskAwaiter,_VRequest_<DecodeFileHeaders>d__105>__
                );
    **(long **)(*(long *)puVar2 + 0xb8) = lVar3;
    (**(code **)(*param_1 + 0x368))
              (param_1,**(undefined8 **)(*(long *)puVar2 + 0xb8),*(undefined8 *)(*param_1 + 0x370));
  }
  if (param_1[0x19] != 0) goto LAB_01995b78;
  lVar3 = FUN_0268fd4c(param_1,0);
  if (lVar3 == 0) goto LAB_01995b94;
  plVar4 = (long *)FUN_010e5800(lVar3,*(undefined8 *)
                                       Method_System_Threading_Tasks_Task_Run<string>__);
  param_1[0x19] = (long)plVar4;
  if (plVar4 == (long *)0x0) {
LAB_01995b58:
    plVar4 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_InputSystem_InputControlList<InputControl>_Dispose__ + 300
                     );
    if (*(byte *)(*plVar4 + 300) < bVar1) goto LAB_01995b58;
    if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Dispose__) {
      plVar4 = (long *)0x0;
    }
  }
  param_1[0x18] = (long)plVar4;
LAB_01995b78:
  FUN_01954cb8(param_1,param_1 + 8,0);
  return;
}


