/*
FUNCTION_NAME: FUN_021d9e94
ENTRY_POINT: 021d9e94
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_021d9e94(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_0378171d & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_InputDevice>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(StringLiteral_14346);
    thunk_FUN_00d48444(Method_DialogueSkip_SkipPressed__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                      );
    DAT_0378171d = 1;
  }
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
  ;
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (*(long *)(param_1 + 0xa0) == 0) {
      uVar4 = FUN_0265ef98(*(undefined8 *)(param_1 + 0x78),4,4,0);
      *(undefined8 *)(param_1 + 0xa0) = uVar4;
    }
    puVar2 = Method_System_Collections_Generic_Dictionary<int,_InputDevice>__ctor__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    Unity_Mathematics_bool2x4__op_BitwiseAnd(0);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar5 == 0) {
LAB_021d9fe4:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar4 = FUN_011c21b8(lVar5,param_1,*(undefined8 *)Method_DialogueSkip_SkipPressed__,0);
    uVar3 = FUN_021d0d88(uVar4,lVar5);
    FUN_021416c4(uVar3,0);
    if (*(char *)(param_1 + 0xb9) != '\0') {
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
      if (lVar5 == 0) goto LAB_021d9fe4;
      FUN_016f27fc(lVar5,param_1,*(undefined8 *)StringLiteral_14346,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      Unity_Mathematics_bool3__op_BitwiseAnd(lVar5,0);
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}


