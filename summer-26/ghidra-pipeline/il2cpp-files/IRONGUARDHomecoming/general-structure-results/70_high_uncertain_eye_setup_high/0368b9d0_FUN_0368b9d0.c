/*
FUNCTION_NAME: FUN_0368b9d0
ENTRY_POINT: 0368b9d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_0368b9d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__653_24__;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_23__;
  if ((DAT_04833ea6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_25__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_24__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_23__);
    DAT_04833ea6 = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  lVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_02b38568(lVar3,*(undefined8 *)puVar2);
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_25__;
  if (lVar3 != 0) {
    FUN_02b38e00(0,lVar3,0,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_25__);
    FUN_02b38e00(0,lVar3,1,*(undefined8 *)puVar1);
    FUN_02b38e00(0,lVar3,2,*(undefined8 *)puVar1);
    FUN_02b38e00(0,lVar3,3,*(undefined8 *)puVar1);
    FUN_02b38e00(0,lVar3,4,*(undefined8 *)puVar1);
    FUN_02b38e00(0,lVar3,5,*(undefined8 *)puVar1);
    *(long *)(param_1 + 0x30) = lVar3;
    thunk_FUN_01f51358((long *)(param_1 + 0x30),lVar3);
    thunk_FUN_0406f928(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


