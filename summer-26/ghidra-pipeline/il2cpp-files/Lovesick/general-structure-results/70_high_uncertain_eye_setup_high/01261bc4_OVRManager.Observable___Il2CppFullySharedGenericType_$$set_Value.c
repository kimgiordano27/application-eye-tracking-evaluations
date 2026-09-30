/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$set_Value
ENTRY_POINT: 01261bc4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<__Il2CppFullySharedGenericType>__set_Value(long param_1)

{
  long lVar1;
  long lVar2;
  ulong in_x9;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  undefined8 *__dest;
  long unaff_x21;
  void *unaff_x22;
  size_t unaff_x23;
  long unaff_x24;
  long unaff_x29;
  
  __dest = (undefined8 *)(param_1 - (in_x9 & 0x1fffffff0));
  plVar5 = *(long **)(unaff_x19 + 0x10);
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
    lVar1 = FUN_00d5941c();
  }
  if (-1 < *(int *)(lVar1 + 0x28)) {
    unaff_x22 = (void *)(unaff_x29 + -0x50);
  }
  memcpy(__dest,unaff_x22,unaff_x23);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar2 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  lVar1 = *(long *)(lVar2 + 0x18);
  if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
    lVar1 = FUN_00d5941c(lVar1);
    lVar2 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  }
  lVar2 = *(long *)(lVar2 + 0x38);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_00d5941c();
  }
  if (-1 < *(int *)(lVar2 + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == lVar1) {
        lVar1 = lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138;
        goto LAB_01261ca0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  lVar1 = FUN_00d59724(plVar5,lVar1,2);
LAB_01261ca0:
  *(undefined8 **)(unaff_x29 + -0x48) = __dest;
  lVar1 = *(long *)(lVar1 + 8);
  (**(code **)(lVar1 + 0x10))
            (*(undefined8 *)(lVar1 + 8),lVar1,plVar5,unaff_x29 + -0x48,unaff_x29 + -0x3c);
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -0x38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)(unaff_x29 + -0x3c));
}


