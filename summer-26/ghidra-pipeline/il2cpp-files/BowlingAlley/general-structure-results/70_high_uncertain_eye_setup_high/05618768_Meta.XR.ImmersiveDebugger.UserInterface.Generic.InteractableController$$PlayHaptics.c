/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController$$PlayHaptics
ENTRY_POINT: 05618768
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__PlayHaptics
               (undefined8 param_1)

{
  void *__src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  size_t unaff_x23;
  long unaff_x26;
  long unaff_x29;
  
  uVar1 = FUN_032934b8(param_1);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50);
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  FUN_032d66d4(uVar1,uVar2);
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar4 = *(long *)(lVar5 + 0x38);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8(lVar4);
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  FUN_032d66d4(lVar4,*(undefined8 *)(lVar5 + 0x78));
  lVar4 = *(long *)(unaff_x19 + 0x40);
  if (lVar4 != 0) {
    lVar5 = *(long *)(unaff_x20 + 0x20);
    __src = *(void **)(unaff_x29 + -0x18);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x38) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x18);
    }
    memcpy(unaff_x21,__src,unaff_x23);
    lVar5 = *(long *)(lVar5 + 0xc0);
    puVar3 = *(undefined8 **)(lVar5 + 0x68);
    uVar1 = *puVar3;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x38) + 0x28)) {
      unaff_x21 = (undefined8 *)*unaff_x21;
    }
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x21;
    (*(code *)puVar3[2])(uVar1,puVar3,lVar4,unaff_x29 + -0x10,unaff_x21);
  }
  lVar4 = *(long *)(unaff_x19 + 0x48);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


