/*
FUNCTION_NAME: FUN_0115cea4
ENTRY_POINT: 0115cea4
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


void FUN_0115cea4(long param_1,undefined1 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    thunk_FUN_00d48444(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_7396);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_00d59478(param_3);
    }
  }
  if (param_1 != 0) {
    uVar3 = **(undefined8 **)(param_3 + 0x38);
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_01780344(uVar3,0);
    lVar1 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_7396);
    if (lVar1 != 0) {
      FUN_02557ee8(lVar1,param_1,uVar3,0,param_2,0);
      if (*(int *)(*(long *)Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__ + 0xe0) ==
          0) {
        thunk_FUN_00d32864();
      }
      FUN_026fa344(lVar1,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  thunk_FUN_00d48444(PTR_DAT_033f37c8);
  uVar3 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar2 = thunk_FUN_00d48444(System_Func<JsonProperty,_int>_TypeInfo);
  FUN_016ec5b8(uVar3,uVar2,0);
  uVar2 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<IBinding>_GetEnumerator__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar3,uVar2);
}


