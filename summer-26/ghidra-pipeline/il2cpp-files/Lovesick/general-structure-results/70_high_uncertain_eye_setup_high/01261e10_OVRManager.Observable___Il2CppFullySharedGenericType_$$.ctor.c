/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 01261e10
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<__Il2CppFullySharedGenericType>___ctor(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  size_t unaff_x24;
  long *plVar5;
  long unaff_x26;
  long unaff_x29;
  
  FUN_017936fc(0x1c,0);
  plVar5 = (long *)unaff_x19[2];
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
    lVar1 = FUN_00d5941c(lVar1);
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == lVar1) {
        lVar1 = lVar2 + (long)*piVar4 * 0x10 + 0x138;
        goto LAB_01261e8c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  lVar1 = FUN_00d59724(plVar5,lVar1,0);
LAB_01261e8c:
  lVar1 = *(long *)(lVar1 + 8);
  (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 8),lVar1,plVar5,0,unaff_x29 + -0x60);
  if (*(uint *)(unaff_x29 + -0x60) < unaff_w20) {
    FUN_01793968(0);
  }
  lVar2 = *(long *)(unaff_x23 + 0x20);
  lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
  if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
    lVar1 = FUN_00d5941c();
    lVar2 = *(long *)(unaff_x23 + 0x20);
  }
  if (-1 < *(int *)(lVar1 + 0x28)) {
    unaff_x22 = (void *)(unaff_x29 + -0x68);
  }
  memcpy(unaff_x21,unaff_x22,unaff_x24);
  lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
  if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
    lVar1 = FUN_00d5941c();
  }
  if (-1 < *(int *)(lVar1 + 0x28)) {
    unaff_x21 = (undefined8 *)*unaff_x21;
  }
  *(uint *)(unaff_x29 + -0x4c) = unaff_w20;
  lVar1 = *unaff_x19;
  *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x4c;
  *(undefined8 **)(unaff_x29 + -0x58) = unaff_x21;
  (**(code **)(*(long *)(lVar1 + 0x380) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 0x380) + 8));
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -0x48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


