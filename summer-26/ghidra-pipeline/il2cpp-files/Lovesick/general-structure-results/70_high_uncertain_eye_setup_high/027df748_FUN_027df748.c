/*
FUNCTION_NAME: FUN_027df748
ENTRY_POINT: 027df748
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


void FUN_027df748(long param_1)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_24__;
  if ((DAT_0378896e & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_24__);
    thunk_FUN_00d48444(StringLiteral_11321);
    DAT_0378896e = 1;
  }
  FUN_027da0b0(param_1);
  lVar2 = **(long **)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_00d5941c();
  }
  pcVar3 = (char *)thunk_FUN_00d32ed4(param_1,*(long *)(lVar2 + 0x80) + 0x260);
  puVar1 = StringLiteral_11321;
  lVar2 = *(long *)(param_1 + 0x428);
  if (*pcVar3 == '\0') {
    if (lVar2 != 0) {
      FUN_02751e94(lVar2,*(undefined8 *)(param_1 + 0x410),0);
      lVar2 = FUN_011d3f64(param_1,*(undefined8 *)puVar1);
      if (lVar2 != 0) {
        FUN_02751e94(lVar2,*(undefined8 *)(param_1 + 0x428),0);
        return;
      }
    }
  }
  else if (lVar2 != 0) {
    FUN_0275301c(lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


