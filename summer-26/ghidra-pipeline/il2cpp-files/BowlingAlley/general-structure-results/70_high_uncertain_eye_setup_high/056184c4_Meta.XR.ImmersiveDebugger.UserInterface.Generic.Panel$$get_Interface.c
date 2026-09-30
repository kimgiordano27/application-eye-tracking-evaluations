/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$get_Interface
ENTRY_POINT: 056184c4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__get_Interface(void)

{
  void *__src;
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x22;
  size_t unaff_x23;
  long unaff_x25;
  void *unaff_x26;
  long unaff_x29;
  
  FUN_032d66d4();
  lVar4 = *(long *)(unaff_x19 + 0x38);
  if (lVar4 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    __src = *(void **)(unaff_x29 + -0x18);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x38) + 0x28)) {
      __src = unaff_x26;
    }
    memcpy(unaff_x22,__src,unaff_x23);
    lVar3 = *(long *)(lVar3 + 0xc0);
    puVar2 = *(undefined8 **)(lVar3 + 0x68);
    uVar1 = *puVar2;
    if (-1 < *(int *)(*(long *)(lVar3 + 0x38) + 0x28)) {
      unaff_x22 = (undefined8 *)*unaff_x22;
    }
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x22;
    (*(code *)puVar2[2])(uVar1,puVar2,lVar4,unaff_x29 + -0x10,unaff_x22);
  }
  lVar4 = *(long *)(unaff_x19 + 0x48);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


