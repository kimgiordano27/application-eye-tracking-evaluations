/*
FUNCTION_NAME: FUN_02774eb4
ENTRY_POINT: 02774eb4
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


void FUN_02774eb4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = Method_System_Linq_Enumerable_FirstOrDefault<LocalizationData>__;
  if ((DAT_037885fe & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f1a48);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_FirstOrDefault<LocalizationData>__);
    thunk_FUN_00d48444(
                      System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanDouble_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_UIR_ShaderInfoStorageRGBA32_<>c_<_cctor>b__2_0__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
                      );
    thunk_FUN_00d48444(Obi_OniTetherConstraintsBatchImpl_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10396);
    DAT_037885fe = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_033f1a48;
  if (lVar2 != 0) {
    FUN_012d1810(lVar2,0,*(undefined8 *)
                          Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
                 ,0);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_UnityEngine_UIElements_UIR_ShaderInfoStorageRGBA32_<>c_<_cctor>b__2_0__;
    if (lVar3 != 0) {
      FUN_011c181c(lVar3,0,*(undefined8 *)Obi_OniTetherConstraintsBatchImpl_TypeInfo,0);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = StringLiteral_10396;
      if (lVar4 != 0) {
        FUN_0131cf68(lVar4,lVar2,lVar3,0x100,
                     *(undefined8 *)
                      System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanDouble_TypeInfo
                    );
        **(long **)(*(long *)puVar1 + 0xb8) = lVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


