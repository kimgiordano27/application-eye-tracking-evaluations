/*
FUNCTION_NAME: FUN_018d39fc
ENTRY_POINT: 018d39fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_018d39fc(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  if ((DAT_03779a39 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer__
                      );
    uVar2 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    DAT_03779a39 = 1;
  }
  if (param_3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__ + 300);
    if ((*(byte *)(*param_3 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(param_3);
    }
    if (param_2 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer__
                       + 300);
      if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)
           Method_System_Collections_Generic_IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer__))
      {
        FUN_018d3b1c(param_1,param_2,param_3);
        return;
      }
    }
    FUN_018d3c54(uVar2,param_2,param_3,param_4);
    return;
  }
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x018d3af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x658))(param_2,*(undefined8 *)(*param_2 + 0x660));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


