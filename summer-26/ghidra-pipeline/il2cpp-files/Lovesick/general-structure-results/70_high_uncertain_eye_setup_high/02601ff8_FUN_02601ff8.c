/*
FUNCTION_NAME: FUN_02601ff8
ENTRY_POINT: 02601ff8
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


long * FUN_02601ff8(undefined8 param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_03783372 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_137__);
    DAT_03783372 = 1;
  }
  uVar2 = FUN_02601efc(param_1);
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)FUN_0179c590(param_1,0);
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    bVar1 = *(byte *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_137__ + 300);
    if (bVar1 <= *(byte *)(*plVar3 + 300)) {
      if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_OVRPlugin_<>c_<_cctor>b__796_137__) {
        return (long *)0x0;
      }
      if (plVar3 != (long *)0x0) {
        plVar3[2] = param_2;
        lVar4 = FUN_0265fee4(0,0,0x3f800000,0x3f800000,0);
        plVar3[4] = lVar4;
        return plVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c(0);
    }
  }
  return (long *)0x0;
}


