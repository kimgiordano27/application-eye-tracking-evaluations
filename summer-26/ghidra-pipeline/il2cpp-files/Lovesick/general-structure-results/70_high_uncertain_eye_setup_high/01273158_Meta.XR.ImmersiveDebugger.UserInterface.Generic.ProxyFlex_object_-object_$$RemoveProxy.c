/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ProxyFlex<object,-object>$$RemoveProxy
ENTRY_POINT: 01273158
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<object,_object>__RemoveProxy(void)

{
  void *pvVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong in_x9;
  int *piVar6;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *__dest;
  undefined8 *puVar7;
  undefined8 uVar8;
  void *unaff_x24;
  size_t unaff_x25;
  long lVar9;
  long *plVar10;
  long unaff_x27;
  long unaff_x29;
  
  __dest = (undefined8 *)(&stack0x00000000 + -(in_x9 & 0x1fffffff0));
  puVar7 = (undefined8 *)((long)__dest - (in_x9 & 0x1fffffff0));
  lVar9 = *(long *)(unaff_x21 + 0x20);
  lVar3 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x60);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
    lVar9 = *(long *)(unaff_x21 + 0x20);
  }
  pvVar1 = unaff_x24;
  if (-1 < *(int *)(lVar3 + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x80);
  }
  memcpy(__dest,pvVar1,unaff_x25);
  lVar3 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x60);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  uVar4 = FUN_00da5124(lVar3,__dest);
  if ((uVar4 & 1) == 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68);
    (*(code *)puVar5[2])(*puVar5,puVar5,0,0,0);
  }
  lVar9 = *(long *)(unaff_x21 + 0x20);
  lVar3 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x60);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
    lVar9 = *(long *)(unaff_x21 + 0x20);
  }
  pvVar1 = unaff_x24;
  if (-1 < *(int *)(lVar3 + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x80);
  }
  memcpy(__dest,pvVar1,unaff_x25);
  plVar10 = *(long **)(unaff_x20 + 0x18);
  lVar3 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x60);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  if (-1 < *(int *)(lVar3 + 0x28)) {
    unaff_x24 = (void *)(unaff_x29 + -0x80);
  }
  memcpy(puVar7,unaff_x24,unaff_x25);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar9 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  lVar3 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c(lVar3);
    lVar9 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  }
  lVar9 = *(long *)(lVar9 + 0x60);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  if (-1 < *(int *)(lVar9 + 0x28)) {
    puVar7 = (undefined8 *)*puVar7;
  }
  lVar9 = *plVar10;
  uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        lVar3 = lVar9 + (long)(*piVar6 + 1) * 0x10 + 0x138;
        goto LAB_01273314;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_00d59724(plVar10,lVar3,1);
LAB_01273314:
  *(undefined8 **)(unaff_x29 + -0x78) = puVar7;
  lVar3 = *(long *)(lVar3 + 8);
  (**(code **)(lVar3 + 0x10))
            (*(undefined8 *)(lVar3 + 8),lVar3,plVar10,unaff_x29 + -0x78,unaff_x29 + -0x5c);
  uVar2 = *(undefined4 *)(unaff_x29 + -0x5c);
  lVar9 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  lVar3 = *(long *)(lVar9 + 0x60);
  puVar7 = *(undefined8 **)(lVar9 + 0x140);
  uVar8 = *puVar7;
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  if (-1 < *(int *)(lVar3 + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  *(undefined4 *)(unaff_x29 + -0x5c) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x68) = unaff_x19;
  *(undefined8 **)(unaff_x29 + -0x78) = __dest;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x5c;
  (*(code *)puVar7[2])(uVar8,puVar7);
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -0x58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(char *)(unaff_x29 + -0x60) != '\0');
}


