/*
FUNCTION_NAME: FUN_0103bcc0
ENTRY_POINT: 0103bcc0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0103bcc0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  if ((DAT_03775f95 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(
                      Method_ExtendableGrapplingHook_<AttachHook>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(StringLiteral_12772);
    thunk_FUN_00d48444(StringLiteral_6323);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Component_GetComponentsInChildren<PathOfTheTricksterWrongPoint>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__99>__
                      );
    thunk_FUN_00d48444(System_Threading_SemaphoreSlim_TaskNode_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_6041);
    thunk_FUN_00d48444(StringLiteral_11238);
    DAT_03775f95 = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar1 = StringLiteral_11238;
  if (lVar3 != 0) {
    FUN_016f27fc(lVar3,param_1,
                 *(undefined8 *)
                  Method_ExtendableGrapplingHook_<AttachHook>d__16_System_Collections_IEnumerator_Reset__
                 ,0);
    FUN_00fe0700(*(undefined8 *)puVar1,lVar3,0);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar1 = System_Threading_SemaphoreSlim_TaskNode_TypeInfo;
    if (lVar3 != 0) {
      FUN_016f27fc(lVar3,param_1,*(undefined8 *)StringLiteral_6323,0);
      FUN_00fe0700(*(undefined8 *)puVar1,lVar3,0);
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar1 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__99>__
      ;
      if (lVar3 != 0) {
        FUN_016f27fc(lVar3,param_1,
                     *(undefined8 *)
                      Method_UnityEngine_Component_GetComponentsInChildren<PathOfTheTricksterWrongPoint>__
                     ,0);
        FUN_00fe0700(*(undefined8 *)puVar1,lVar3,0);
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar2 = StringLiteral_6041;
        if (lVar3 != 0) {
          FUN_016f27fc(lVar3,param_1,*(undefined8 *)StringLiteral_12772,0);
          FUN_00fe0700(*(undefined8 *)puVar2,lVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


