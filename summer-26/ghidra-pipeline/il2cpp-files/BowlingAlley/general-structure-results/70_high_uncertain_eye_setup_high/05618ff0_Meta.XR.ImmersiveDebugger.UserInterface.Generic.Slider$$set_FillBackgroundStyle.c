/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$set_FillBackgroundStyle
ENTRY_POINT: 05618ff0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x056193a8) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__set_FillBackgroundStyle(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *unaff_x19;
  void *unaff_x20;
  void *__src;
  void *unaff_x21;
  size_t unaff_x22;
  long unaff_x24;
  void *unaff_x25;
  undefined8 *unaff_x26;
  void *unaff_x28;
  long unaff_x29;
  
  while (uVar1 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x110))(), (uVar1 & 1) != 0
        ) {
    puVar5 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xf8);
    uVar2 = *puVar5;
    *(void **)(unaff_x29 + -0x18) = unaff_x25;
    (*(code *)puVar5[2])(uVar2);
    memcpy(unaff_x20,unaff_x25,unaff_x22);
    memcpy(unaff_x26,unaff_x20,unaff_x22);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    puVar5 = unaff_x26;
    if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x38) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x26;
    }
    puVar6 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x108);
    uVar2 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    (*(code *)puVar6[2])(uVar2);
    param_1 = *unaff_x19;
  }
  lVar7 = *(long *)(*unaff_x19 + 0xc0);
  lVar3 = *(long *)(lVar7 + 0xf0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
    lVar7 = *(long *)(*unaff_x19 + 0xc0);
  }
  FUN_032d66d4(lVar3,*(undefined8 *)(lVar7 + 0x118),*(undefined8 *)(unaff_x29 + -0x30));
  lVar3 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x130);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar3 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x130);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 8) == 0) {
    lVar3 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x130);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar7 = *(long *)(*unaff_x19 + 0xc0);
    lVar3 = *(long *)(lVar7 + 0x130);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
      lVar7 = *(long *)(*unaff_x19 + 0xc0);
    }
    lVar7 = *(long *)(lVar7 + 0x128);
    uVar2 = **(undefined8 **)(lVar3 + 0xb8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_032934b8(lVar7);
    }
    uVar4 = thunk_FUN_032a56a0(lVar7);
    (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x140))
              (uVar4,uVar2,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x138));
    lVar7 = *(long *)(*unaff_x19 + 0xc0);
    lVar3 = *(long *)(lVar7 + 0x130);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
      lVar7 = *(long *)(*unaff_x19 + 0xc0);
    }
    *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8) = uVar4;
    lVar3 = *(long *)(lVar7 + 0x130);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    thunk_FUN_0333a630(*(long *)(lVar3 + 0xb8) + 8,uVar4);
  }
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x148))();
  __src = *(void **)(unaff_x29 + -0x50);
  puVar5 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x150);
  uVar2 = *puVar5;
  *(void **)(unaff_x29 + -0x18) = __src;
  (*(code *)puVar5[2])(uVar2);
  memcpy(unaff_x21,__src,*(size_t *)(unaff_x29 + -0x20));
  lVar3 = *(long *)(unaff_x29 + -0x28);
  while (uVar1 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x178))(),
        (uVar1 & 1) != 0) {
    puVar5 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x160);
    uVar2 = *puVar5;
    *(void **)(unaff_x29 + -0x18) = unaff_x25;
    (*(code *)puVar5[2])(uVar2);
    memcpy(unaff_x28,unaff_x25,unaff_x22);
    memcpy(unaff_x26,unaff_x28,unaff_x22);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    puVar5 = unaff_x26;
    if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x38) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x26;
    }
    puVar6 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x170);
    uVar2 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    (*(code *)puVar6[2])(uVar2,puVar6,lVar3,unaff_x29 + -0x18,unaff_x29 + -0xc);
  }
  lVar7 = *(long *)(*unaff_x19 + 0xc0);
  lVar3 = *(long *)(lVar7 + 0x158);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
    lVar7 = *(long *)(*unaff_x19 + 0xc0);
  }
  FUN_032d66d4(lVar3,*(undefined8 *)(lVar7 + 0x180),*(undefined8 *)(unaff_x29 + -0x48));
  lVar3 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0xd8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x188))();
  if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


