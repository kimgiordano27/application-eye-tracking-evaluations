/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$RefreshRaycaster
ENTRY_POINT: 05618a38
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__RefreshRaycaster
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  void *__src;
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long unaff_x19;
  void *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  size_t unaff_x23;
  undefined4 unaff_w24;
  long lVar5;
  long unaff_x26;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x20) = param_5;
  (**(code **)(param_2 + 0x10))();
  lVar5 = *(long *)(unaff_x22 + 0x20);
  __src = unaff_x20;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x38) + 0x28)) {
    __src = (void *)(unaff_x29 + -0x28);
  }
  memcpy(unaff_x21,__src,unaff_x23);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar5 = *(long *)(lVar5 + 0xc0);
  puVar3 = *(undefined8 **)(lVar5 + 0x98);
  uVar1 = *puVar3;
  puVar4 = unaff_x21;
  if (-1 < *(int *)(*(long *)(lVar5 + 0x38) + 0x28)) {
    puVar4 = (undefined8 *)*unaff_x21;
  }
  *(undefined4 *)(unaff_x29 + -0xc) = unaff_w24;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
  (*(code *)puVar3[2])(uVar1);
  uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x88))();
  if ((uVar2 & 1) == 0) {
    lVar5 = *(long *)(unaff_x22 + 0x20);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x38) + 0x28)) {
      unaff_x20 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x21,unaff_x20,unaff_x23);
    lVar5 = *(long *)(lVar5 + 0xc0);
    puVar4 = *(undefined8 **)(lVar5 + 0xa0);
    uVar1 = *puVar4;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x38) + 0x28)) {
      unaff_x21 = (undefined8 *)*unaff_x21;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
    (*(code *)puVar4[2])(uVar1);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


