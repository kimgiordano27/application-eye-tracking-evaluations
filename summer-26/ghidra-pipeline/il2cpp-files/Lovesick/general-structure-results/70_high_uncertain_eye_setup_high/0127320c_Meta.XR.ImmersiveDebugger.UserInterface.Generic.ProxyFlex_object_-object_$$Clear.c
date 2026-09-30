/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ProxyFlex<object,-object>$$Clear
ENTRY_POINT: 0127320c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<object,_object>__Clear
               (undefined8 param_1,long param_2)

{
  void *__src;
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar5;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar6;
  void *unaff_x24;
  size_t unaff_x25;
  long lVar7;
  long *plVar8;
  long unaff_x27;
  long unaff_x29;
  
  (**(code **)(param_2 + 0x10))();
  lVar7 = *(long *)(unaff_x21 + 0x20);
  lVar2 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x60);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_00d5941c();
    lVar7 = *(long *)(unaff_x21 + 0x20);
  }
  __src = unaff_x24;
  if (-1 < *(int *)(lVar2 + 0x28)) {
    __src = (void *)(unaff_x29 + -0x80);
  }
  memcpy(unaff_x22,__src,unaff_x25);
  plVar8 = *(long **)(unaff_x20 + 0x18);
  lVar2 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x60);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_00d5941c();
  }
  if (-1 < *(int *)(lVar2 + 0x28)) {
    unaff_x24 = (void *)(unaff_x29 + -0x80);
  }
  memcpy(unaff_x23,unaff_x24,unaff_x25);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  lVar2 = *(long *)(lVar7 + 0x20);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_00d5941c(lVar2);
    lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  }
  lVar7 = *(long *)(lVar7 + 0x60);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  if (-1 < *(int *)(lVar7 + 0x28)) {
    unaff_x23 = (undefined8 *)*unaff_x23;
  }
  lVar7 = *plVar8;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == lVar2) {
        lVar2 = lVar7 + (long)(*piVar4 + 1) * 0x10 + 0x138;
        goto LAB_01273314;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  lVar2 = FUN_00d59724(plVar8,lVar2,1);
LAB_01273314:
  *(undefined8 **)(unaff_x29 + -0x78) = unaff_x23;
  lVar2 = *(long *)(lVar2 + 8);
  (**(code **)(lVar2 + 0x10))
            (*(undefined8 *)(lVar2 + 8),lVar2,plVar8,unaff_x29 + -0x78,unaff_x29 + -0x5c);
  uVar1 = *(undefined4 *)(unaff_x29 + -0x5c);
  lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  lVar2 = *(long *)(lVar7 + 0x60);
  puVar5 = *(undefined8 **)(lVar7 + 0x140);
  uVar6 = *puVar5;
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_00d5941c();
  }
  if (-1 < *(int *)(lVar2 + 0x28)) {
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
  *(undefined4 *)(unaff_x29 + -0x5c) = uVar1;
  *(undefined8 *)(unaff_x29 + -0x68) = unaff_x19;
  *(undefined8 **)(unaff_x29 + -0x78) = unaff_x22;
  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x5c;
  (*(code *)puVar5[2])(uVar6,puVar5);
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -0x58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(char *)(unaff_x29 + -0x60) != '\0');
}


