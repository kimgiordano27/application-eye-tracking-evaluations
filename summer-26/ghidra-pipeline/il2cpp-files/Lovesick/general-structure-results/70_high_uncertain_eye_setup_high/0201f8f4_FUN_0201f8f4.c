/*
FUNCTION_NAME: FUN_0201f8f4
ENTRY_POINT: 0201f8f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0201f8f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  if ((DAT_0378099f & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Queue_Peek__);
    thunk_FUN_00d48444(System_Xml_Schema_Datatype_string_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    DAT_0378099f = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 == 0) {
LAB_0201f9f4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0129a9f4(lVar3,*(undefined8 *)System_Xml_Schema_Datatype_string_TypeInfo);
  puVar1 = Method_System_Collections_Queue_Peek__;
  lVar3 = *(long *)puVar2;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
  if (lVar4 != 0) {
    while( true ) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      local_30 = *(undefined8 *)(lVar4 + 0x30);
      uStack_38 = *(undefined8 *)(lVar4 + 0x28);
      local_40 = *(undefined8 *)(lVar4 + 0x20);
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_0201f9f4;
      local_60 = local_40;
      uStack_58 = uStack_38;
      local_50 = local_30;
      FUN_0129a054(lVar3,&local_60,lVar4,*(undefined8 *)puVar1);
      lVar4 = *(long *)(lVar4 + 0x18);
      if (lVar4 == 0) break;
      lVar3 = *(long *)puVar2;
    }
  }
  return;
}


