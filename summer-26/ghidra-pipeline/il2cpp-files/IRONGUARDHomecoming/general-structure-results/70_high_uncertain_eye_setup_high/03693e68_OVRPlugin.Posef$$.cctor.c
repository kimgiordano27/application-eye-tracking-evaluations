/*
FUNCTION_NAME: OVRPlugin.Posef$$.cctor
ENTRY_POINT: 03693e68
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRPlugin_Posef___cctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int in_w8;
  long unaff_x19;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
    param_1 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
  if (lVar4 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_1 = *unaff_x22;
    }
    uVar5 = **(undefined8 **)(param_1 + 0xb8);
    lVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Unity_VisualScripting_Antlr3_Runtime_Collections_HashList_HashListEnumerator_get_Entry__
                              );
    FUN_02b874a4(lVar4,uVar5,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_8__,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar3 = lVar4;
    thunk_FUN_01f51358(plVar3,lVar4);
  }
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__653_7__;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_69__;
  if (unaff_x19 != 0) {
    *(long *)(unaff_x19 + 0x30) = lVar4;
    thunk_FUN_01f51358((long *)(unaff_x19 + 0x30),lVar4);
    uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_02605c5c(uVar5,*(undefined8 *)puVar1);
    *(undefined8 *)(unaff_x19 + 0x40) = uVar5;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x40),uVar5);
    thunk_FUN_0406f928();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


