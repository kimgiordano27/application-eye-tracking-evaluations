/*
FUNCTION_NAME: FUN_0368c35c
ENTRY_POINT: 0368c35c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_0368c35c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_04833ea7 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_26__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_27__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_28__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_29__);
    DAT_04833ea7 = 1;
  }
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_29__;
  if (*(long *)(param_1 + 0x30) != 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__653_29__;
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
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_26__);
    FUN_02a7036c(lVar5,uVar6,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_28__,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar3 = lVar5;
    thunk_FUN_01f51358(plVar3,lVar5);
  }
  if (lVar4 != 0) {
    FUN_02134528(lVar4,lVar5,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_27__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


