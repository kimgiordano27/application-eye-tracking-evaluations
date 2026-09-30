/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$set_Tweak
ENTRY_POINT: 05618f78
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x056193a8) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__set_Tweak(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *unaff_x19;
  void *unaff_x20;
  void *__src;
  void *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  void *unaff_x25;
  undefined8 *unaff_x26;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0xd8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_032934b8();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar1 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xd0))();
  puVar4 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xe8);
  uVar6 = *puVar4;
  *(void **)(unaff_x29 + -0x18) = unaff_x23;
  (*(code *)puVar4[2])(uVar6,puVar4,*(undefined8 *)(unaff_x29 + -0x28),unaff_x29 + -0x18);
  memcpy(unaff_x27,unaff_x23,*(size_t *)(unaff_x29 + -0x38));
  while (uVar2 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x110))(),
        (uVar2 & 1) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xf8);
    uVar6 = *puVar4;
    *(void **)(unaff_x29 + -0x18) = unaff_x25;
    (*(code *)puVar4[2])(uVar6);
    memcpy(unaff_x20,unaff_x25,unaff_x22);
    memcpy(unaff_x26,unaff_x20,unaff_x22);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    puVar4 = unaff_x26;
    if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x38) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x26;
    }
    puVar5 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x108);
    uVar6 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    (*(code *)puVar5[2])(uVar6,puVar5,lVar1,unaff_x29 + -0x18);
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
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 == 0) {
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
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_032934b8(lVar7);
    }
    lVar3 = thunk_FUN_032a56a0(lVar7);
    (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x140))
              (lVar3,uVar6,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x138));
    lVar8 = *(long *)(*unaff_x19 + 0xc0);
    lVar7 = *(long *)(lVar8 + 0x130);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_032934b8();
      lVar8 = *(long *)(*unaff_x19 + 0xc0);
    }
    *(long *)(*(long *)(lVar7 + 0xb8) + 8) = lVar3;
    lVar7 = *(long *)(lVar8 + 0x130);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_032934b8();
    }
    thunk_FUN_0333a630(*(long *)(lVar7 + 0xb8) + 8,lVar3);
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x148))(lVar1,lVar3);
  __src = *(void **)(unaff_x29 + -0x50);
  puVar4 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x150);
  uVar6 = *puVar4;
  *(void **)(unaff_x29 + -0x18) = __src;
  (*(code *)puVar4[2])(uVar6,puVar4,lVar1,unaff_x29 + -0x18,__src);
  memcpy(unaff_x21,__src,*(size_t *)(unaff_x29 + -0x20));
  lVar3 = *(long *)(unaff_x29 + -0x28);
  while (uVar2 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x178))(),
        (uVar2 & 1) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x160);
    uVar6 = *puVar4;
    *(void **)(unaff_x29 + -0x18) = unaff_x25;
    (*(code *)puVar4[2])(uVar6);
    memcpy(unaff_x28,unaff_x25,unaff_x22);
    memcpy(unaff_x26,unaff_x28,unaff_x22);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    puVar4 = unaff_x26;
    if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x38) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x26;
    }
    puVar5 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x170);
    uVar6 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    (*(code *)puVar5[2])(uVar6,puVar5,lVar3,unaff_x29 + -0x18,unaff_x29 + -0xc);
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
  (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x188))(lVar1);
  if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


