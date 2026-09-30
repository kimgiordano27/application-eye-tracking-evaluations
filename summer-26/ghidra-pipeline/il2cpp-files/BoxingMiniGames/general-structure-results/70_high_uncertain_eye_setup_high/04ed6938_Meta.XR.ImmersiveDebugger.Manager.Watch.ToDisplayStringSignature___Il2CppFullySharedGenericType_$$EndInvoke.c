/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<__Il2CppFullySharedGenericType>$$EndInvoke
ENTRY_POINT: 04ed6938
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<__Il2CppFullySharedGenericType>__EndInvoke
               (void)

{
  undefined8 uVar1;
  long lVar2;
  int in_w8;
  long lVar3;
  long unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_036a1978();
  }
  uVar1 = FUN_071bad10(0);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc();
  }
  lVar3 = **(long **)(lVar3 + 0xb8);
  if (lVar3 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar3 = FUN_04fbefa4(lVar3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x20));
    if (lVar3 != 0) {
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc();
      }
      lVar3 = FUN_037623e0(lVar3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x10) = uVar1;
        thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x10),uVar1);
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


