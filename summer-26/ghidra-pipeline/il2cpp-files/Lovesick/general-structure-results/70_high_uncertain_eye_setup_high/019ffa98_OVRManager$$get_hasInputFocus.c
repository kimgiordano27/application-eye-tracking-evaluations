/*
FUNCTION_NAME: OVRManager$$get_hasInputFocus
ENTRY_POINT: 019ffa98
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_hasInputFocus(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<BaseEventData>_Invoke__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__
                      );
    thunk_FUN_00d48444(StringLiteral_9090);
    thunk_FUN_00d48444(System_Func<DateTimeParse_MatchNumberDelegate>_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x8b2) = 1;
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_037766a4 == '\0') {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<BaseEventData>_Invoke__);
    DAT_037766a4 = '\x01';
  }
  lVar4 = *unaff_x20;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *unaff_x20;
  }
  puVar3 = StringLiteral_9090;
  puVar2 = Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__;
  puVar1 = System_Func<DateTimeParse_MatchNumberDelegate>_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (lVar4 != 0) {
    uVar5 = FUN_019a688c(lVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar5 = FUN_01979494(uVar5,param_2,0);
    *(undefined8 *)(param_2 + 0x50) = uVar5;
    uVar5 = thunk_FUN_00d6225c(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)puVar3);
    *(undefined8 *)(param_2 + 0x20) = uVar5;
    uVar5 = thunk_FUN_00d6225c(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)puVar2);
    *(undefined8 *)(param_2 + 0x30) = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


