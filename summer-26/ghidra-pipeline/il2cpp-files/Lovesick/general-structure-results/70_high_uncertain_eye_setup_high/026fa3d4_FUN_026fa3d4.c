/*
FUNCTION_NAME: FUN_026fa3d4
ENTRY_POINT: 026fa3d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_026fa3d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = StringLiteral_4757;
  if ((DAT_03788091 & 1) == 0) {
    thunk_FUN_00d48444(
                      System_Linq_Expressions_Interpreter_ExclusiveOrInstruction_ExclusiveOrSByte_TypeInfo
                      );
    thunk_FUN_00d48444(GuitarPick_<OnPickGrabbedCoroutine>d__10_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033efeb0);
    thunk_FUN_00d48444(StringLiteral_9030);
    thunk_FUN_00d48444(PTR_DAT_033ed610);
    thunk_FUN_00d48444(StringLiteral_4757);
    thunk_FUN_00d48444(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__);
    DAT_03788091 = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar2 = Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__;
  puVar1 = PTR_DAT_033ed610;
  if (lVar3 != 0) {
    FUN_01320e50(lVar3,*(undefined8 *)
                        System_Linq_Expressions_Interpreter_ExclusiveOrInstruction_ExclusiveOrSByte_TypeInfo
                );
    **(long **)(*(long *)puVar2 + 0xb8) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = StringLiteral_9030;
    if (lVar3 != 0) {
      FUN_01320e50(lVar3,*(undefined8 *)GuitarPick_<OnPickGrabbedCoroutine>d__10_TypeInfo);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar3;
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        FUN_01320e50(lVar3,*(undefined8 *)PTR_DAT_033efeb0);
        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


