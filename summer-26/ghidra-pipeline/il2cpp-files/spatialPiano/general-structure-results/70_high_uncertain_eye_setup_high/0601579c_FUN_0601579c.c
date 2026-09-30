/*
FUNCTION_NAME: FUN_0601579c
ENTRY_POINT: 0601579c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_0601579c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__837_15__;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__837_149__;
  if ((DAT_06bc533a & 1) == 0) {
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_149__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_15__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_150__);
    DAT_06bc533a = 1;
  }
  (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  uVar3 = *(undefined8 *)puVar1;
  lVar4 = param_1[5];
  *(undefined1 *)((long)param_1 + 0x5c) = 1;
  uVar3 = thunk_FUN_02f45270(uVar3);
  FUN_0475db6c(uVar3,param_1,*(undefined8 *)puVar2,0);
  if (lVar4 != 0) {
    uVar3 = FUN_042b651c(lVar4,uVar3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_150__);
    if (param_1[10] != 0) {
      FUN_05f07bcc(param_1[10],uVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


