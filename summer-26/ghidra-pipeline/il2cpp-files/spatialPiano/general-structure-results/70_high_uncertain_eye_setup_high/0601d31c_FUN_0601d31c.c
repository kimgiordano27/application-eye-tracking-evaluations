/*
FUNCTION_NAME: FUN_0601d31c
ENTRY_POINT: 0601d31c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0601d31c(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if ((DAT_06bc537f & 1) == 0) {
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_79__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_8__);
    DAT_06bc537f = 1;
  }
  if (*(char *)(param_5 + 0x54) != '\0') {
    return;
  }
  if (*(long *)(param_5 + 0xb0) != 0) {
    uVar2 = FUN_060b85f8(*(long *)(param_5 + 0xb0),0);
    *(undefined4 *)(param_5 + 0xc0) = uVar2;
    *(undefined4 *)(param_5 + 0xc4) = param_2;
    *(undefined4 *)(param_5 + 200) = param_3;
    *(undefined4 *)(param_5 + 0xcc) = param_4;
    if (*(long *)(param_5 + 0xb0) != 0) {
      uVar2 = FUN_060b87a4(*(long *)(param_5 + 0xb0),0);
      puVar1 = Method_OVRPlugin_<>c_<_cctor>b__837_79__;
      *(undefined4 *)(param_5 + 0xd0) = uVar2;
      *(undefined4 *)(param_5 + 0xd4) = param_2;
      *(undefined4 *)(param_5 + 0xd8) = param_3;
      *(undefined4 *)(param_5 + 0xdc) = param_4;
      FUN_03ebed24(param_5,*(undefined8 *)puVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


