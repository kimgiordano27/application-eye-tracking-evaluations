/*
FUNCTION_NAME: OVRPlugin$$SetKeyboardOverlayUV
ENTRY_POINT: 0368de58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_10
*/


void OVRPlugin__SetKeyboardOverlayUV(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar6;
  long *unaff_x23;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_47__);
  thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_48__);
  thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_36__);
  thunk_FUN_01efb3a4(Method_System_IO_FileSystem_CreateDirectory__);
  thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_49__);
  thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_40__);
  *(undefined1 *)(unaff_x21 + 0xeb6) = 1;
  lVar3 = *unaff_x23;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *unaff_x23;
  }
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__653_36__;
  puVar1 = Method_System_IO_FileSystem_CreateDirectory__;
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x18) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *unaff_x23;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_48__);
    FUN_02e6c748(uVar4,uVar6,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_49__,0);
                    /* try { // try from 0368df28 to 0378e063 has its CatchHandler @ 0368df28
                       catch() { ... } // from try @ 0368df28 with catch @ 0368df28
                       catch() { ... } // from try @ 0368e188 with catch @ 0368df28
                       catch() { ... } // from try @ 0368e2cc with catch @ 0368df28
                       catch() { ... } // from try @ 0368e2fc with catch @ 0368df28
                       catch() { ... } // from try @ 0368e330 with catch @ 0368df28
                       catch() { ... } // from try @ 0368e3b0 with catch @ 0368df28 */
    puVar5 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
    *puVar5 = uVar4;
    thunk_FUN_01f51358(puVar5,uVar4);
  }
  uVar4 = FUN_02300e64();
  uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_030f24a8(uVar6,uVar4,*(undefined8 *)puVar2);
  if (unaff_x19 != 0) {
    *(undefined8 *)(unaff_x19 + 0x28) = uVar6;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x28),uVar6);
    uVar4 = FUN_0230ab8c();
    *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x30),uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


