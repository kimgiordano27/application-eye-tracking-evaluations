/*
FUNCTION_NAME: FUN_0149991c
ENTRY_POINT: 0149991c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0149991c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined2 local_24 [2];
  
  if ((DAT_03776c66 & 1) == 0) {
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(StringLiteral_7073);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<GlyphRect>__ctor__);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_TryGetValue__
                      );
    DAT_03776c66 = 1;
  }
  local_24[0] = 0;
  uVar3 = FUN_015ff8a0(param_1,0);
  puVar2 = StringLiteral_7073;
  puVar1 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar5 = FUN_02020414(param_1,*(undefined8 *)puVar2,*(undefined8 *)puVar1,0);
    puVar2 = Method_System_Collections_Generic_List<GlyphRect>__ctor__;
    puVar1 = Newtonsoft_Json_JsonReader_State_TypeInfo;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    local_24[0] = FUN_015fa29c(lVar5,0,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar4 = FUN_016e8b00(local_24,0);
    uVar3 = FUN_0201fbe8(uVar4,*(undefined8 *)puVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar5 = FUN_015f5b28(*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_TryGetValue__
                           ,lVar5,0);
    }
  }
  else {
    lVar5 = **(long **)(*(long *)
                         System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                       + 0xb8);
  }
  return lVar5;
}


