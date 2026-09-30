/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$SetTransparencyRecursive
ENTRY_POINT: 08a02fcc
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__SetTransparencyRecursive(void)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long *unaff_x21;
  long lVar3;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long unaff_x26;
  undefined1 unaff_w27;
  
  while( true ) {
    while( true ) {
      while( true ) {
        uVar1 = FUN_088e7824();
        if ((uVar1 == 0) || ((uVar1 & 7) == 4)) {
          return;
        }
        if (uVar1 != 10) break;
        if (*(long *)(unaff_x20 + 0x18) == 0) {
          uVar2 = thunk_FUN_04983f60(*unaff_x23);
          FUN_0897320c(uVar2,0);
          *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
          thunk_FUN_049ee3d8(unaff_x20 + 0x18,uVar2);
        }
        if (*(char *)(unaff_x26 + 0xc32) == '\0') {
          FUN_04947ee4();
          *(undefined1 *)(unaff_x26 + 0xc32) = unaff_w27;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_088e96e0();
      }
      if (uVar1 == 0x12) break;
      uVar2 = FUN_088ed628(*(undefined8 *)(unaff_x20 + 0x10));
      *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
      thunk_FUN_049ee3d8(unaff_x20 + 0x10,uVar2);
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (lVar3 == 0) break;
    FUN_075065a8(lVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


