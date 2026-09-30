/*
FUNCTION_NAME: FUN_023d1824
ENTRY_POINT: 023d1824
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_023d1824(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_033ebcd0;
  if ((DAT_037820ca & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerable<Exception>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11101);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_100__);
    thunk_FUN_00d48444(System_Collections_Generic_List<Selectable>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ebcd0);
    DAT_037820ca = 1;
  }
  lVar3 = FUN_023d1454(param_1,param_2);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *(long *)puVar1;
  }
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_100__;
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar5 == 0) goto LAB_023d1958;
    FUN_0136b58c(lVar5,uVar6,*(undefined8 *)System_Collections_Generic_List<Selectable>_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar5;
  }
  puVar1 = StringLiteral_11101;
  if (lVar3 != 0) {
    FUN_0132478c(lVar3,lVar5,
                 *(undefined8 *)System_Collections_Generic_IEnumerable<Exception>_TypeInfo);
    FUN_01325140(lVar3,*(undefined8 *)puVar1);
    return;
  }
LAB_023d1958:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


