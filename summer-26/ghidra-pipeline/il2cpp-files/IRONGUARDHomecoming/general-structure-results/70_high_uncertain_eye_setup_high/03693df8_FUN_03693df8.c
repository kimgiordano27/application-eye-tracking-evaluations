/*
FUNCTION_NAME: FUN_03693df8
ENTRY_POINT: 03693df8
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


void FUN_03693df8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_68__;
  if ((DAT_04833edb & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_Antlr3_Runtime_Collections_HashList_HashListEnumerator_get_Entry__
                      );
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_69__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_7__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_8__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_68__);
    DAT_04833edb = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Unity_VisualScripting_Antlr3_Runtime_Collections_HashList_HashListEnumerator_get_Entry__
                              );
    FUN_02b874a4(lVar5,uVar6,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_8__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar5;
    thunk_FUN_01f51358(plVar4,lVar5);
  }
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__653_7__;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_69__;
  if (param_1 != 0) {
    *(long *)(param_1 + 0x30) = lVar5;
    thunk_FUN_01f51358((long *)(param_1 + 0x30),lVar5);
    uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_02605c5c(uVar6,*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x40),uVar6);
    thunk_FUN_0406f928(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


