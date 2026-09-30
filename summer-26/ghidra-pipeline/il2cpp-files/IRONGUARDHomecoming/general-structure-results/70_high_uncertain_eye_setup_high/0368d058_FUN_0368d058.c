/*
FUNCTION_NAME: FUN_0368d058
ENTRY_POINT: 0368d058
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_12
*/


void FUN_0368d058(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__653_29__;
  if ((DAT_04833eab & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_33__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_34__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_35__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_36__);
    thunk_FUN_01efb3a4(Method_System_IO_FileSystem_CreateDirectory__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_37__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_29__);
    DAT_04833eab = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__653_36__;
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__653_33__;
  puVar1 = Method_System_IO_FileSystem_CreateDirectory__;
  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar2;
    }
    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_35__);
    FUN_02e6c748(lVar8,uVar9,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_37__,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar6 = lVar8;
    thunk_FUN_01f51358(plVar6,lVar8);
  }
  uVar9 = FUN_02300e64(param_2,lVar8,*(undefined8 *)puVar3);
  uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_030f24a8(uVar7,uVar9,*(undefined8 *)puVar4);
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__653_34__;
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x28),uVar7);
    uVar9 = FUN_0230ab8c(param_2,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x30) = uVar9;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x30),uVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


