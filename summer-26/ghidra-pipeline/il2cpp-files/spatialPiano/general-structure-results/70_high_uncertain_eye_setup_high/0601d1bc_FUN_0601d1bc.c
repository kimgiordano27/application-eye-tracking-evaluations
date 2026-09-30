/*
FUNCTION_NAME: FUN_0601d1bc
ENTRY_POINT: 0601d1bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_0601d1bc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__837_77__;
  if ((DAT_06bc537e & 1) == 0) {
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_77__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_78__);
    FUN_02f08768(PTR_DAT_067c8f20);
    DAT_06bc537e = 1;
  }
  FUN_03ebe65c(param_1,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_067c8f20;
  if (*(char *)(param_1 + 0xbc) != '\0') {
    lVar2 = FUN_03356cdc(param_1,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_78__);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar1);
    }
    uVar3 = FUN_060f078c(lVar2,0,0);
    if ((uVar3 & 1) != 0) {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      *(undefined1 *)(lVar2 + 0x48) = 0;
    }
  }
  return;
}


