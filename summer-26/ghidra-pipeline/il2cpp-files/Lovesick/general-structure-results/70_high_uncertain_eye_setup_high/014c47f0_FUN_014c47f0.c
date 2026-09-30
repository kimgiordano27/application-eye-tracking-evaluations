/*
FUNCTION_NAME: FUN_014c47f0
ENTRY_POINT: 014c47f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_014c47f0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_03776e39 & 1) == 0) {
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass23_0_<DOPivotX>b__1__);
    thunk_FUN_00d48444(Obi_IBendTwistConstraintsUser_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PlacePoint>__ctor__);
    DAT_03776e39 = 1;
  }
  if (param_2 != 0) {
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    puVar1 = Obi_IBendTwistConstraintsUser_TypeInfo;
    if (lVar2 != 0) {
      FUN_020217f0(lVar2,*(undefined8 *)Method_System_Collections_Generic_List<PlacePoint>__ctor__,0
                  );
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        FUN_02021c48(lVar3,param_1,
                     *(undefined8 *)
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass23_0_<DOPivotX>b__1__,0);
        uVar4 = FUN_0202088c(lVar2,param_2,lVar3,0);
        return uVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  return **(undefined8 **)
           (*(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo +
           0xb8);
}


