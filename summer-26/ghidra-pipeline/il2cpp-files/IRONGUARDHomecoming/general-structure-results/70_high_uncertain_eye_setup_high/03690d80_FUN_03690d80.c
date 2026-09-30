/*
FUNCTION_NAME: FUN_03690d80
ENTRY_POINT: 03690d80
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


void FUN_03690d80(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_5__;
  if ((DAT_04833ec1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_50__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_51__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_52__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_5__);
    DAT_04833ec1 = 1;
  }
  lVar2 = *(long *)puVar1;
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar2 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_50__);
    FUN_02a7036c(lVar5,uVar6,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_52__,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar3 = lVar5;
    thunk_FUN_01f51358(plVar3,lVar5);
  }
  puVar1 = Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_32__;
  if (lVar4 != 0) {
    uVar6 = FUN_02134528(lVar4,lVar5,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_51__);
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    thunk_FUN_01f51358();
    uVar6 = thunk_FUN_01f116d0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x38) = uVar6;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38),uVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


