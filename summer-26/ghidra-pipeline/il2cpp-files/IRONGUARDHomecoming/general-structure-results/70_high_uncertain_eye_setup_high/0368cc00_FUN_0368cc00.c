/*
FUNCTION_NAME: FUN_0368cc00
ENTRY_POINT: 0368cc00
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_0368cc00(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_29__;
  if ((DAT_04833ea9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_26__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_27__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_3__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_29__);
    DAT_04833ea9 = 1;
  }
  lVar2 = *(long *)puVar1;
  lVar4 = *(long *)(param_1 + 0x28);
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar2 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_26__);
    FUN_02a7036c(lVar5,uVar6,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_3__,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar3 = lVar5;
    thunk_FUN_01f51358(plVar3,lVar5);
  }
  if (lVar4 != 0) {
    uVar6 = FUN_02134528(lVar4,lVar5,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_27__);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x30),uVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


