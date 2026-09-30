/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$OnTransparencyChanged
ENTRY_POINT: 056186b0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__OnTransparencyChanged
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  void *__src;
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 *__dest;
  long unaff_x22;
  long lVar8;
  long lVar9;
  long unaff_x26;
  long unaff_x29;
  
  lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  lVar6 = *(long *)(lVar7 + 0x38);
  uVar2 = *(ushort *)(lVar6 + 0x135);
  lVar3 = lVar6;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_032934b8(lVar6);
    lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    uVar2 = *(ushort *)(*(long *)(lVar7 + 0x38) + 0x135);
    lVar3 = *(long *)(lVar7 + 0x38);
  }
  lVar9 = (long)&stack0x00000000 - ((ulong)(*(int *)(lVar6 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar6 = lVar3;
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_032934b8(lVar3);
    lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    uVar2 = *(ushort *)(*(long *)(lVar7 + 0x38) + 0x135);
    lVar6 = *(long *)(lVar7 + 0x38);
  }
  lVar8 = lVar9 - ((ulong)(*(int *)(lVar3 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar1 = *(uint *)(lVar6 + 0xfc);
  __dest = (undefined8 *)(lVar8 - ((ulong)uVar1 + 0xf & 0x1fffffff0));
  lVar3 = lVar6;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_032934b8(lVar6);
    lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    lVar3 = *(long *)(lVar7 + 0x38);
  }
  uVar4 = *(undefined8 *)(lVar7 + 0x50);
  if (-1 < *(int *)(lVar3 + 0x28)) {
    unaff_x22 = unaff_x29 + -0x18;
  }
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  FUN_032d66d4(lVar6,uVar4,lVar9,unaff_x22,unaff_x29 + -0x10,0);
  lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar6 = *(long *)(lVar7 + 0x38);
  lVar3 = lVar6;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_032934b8(lVar6);
    lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    lVar3 = *(long *)(lVar7 + 0x38);
  }
  lVar9 = *(long *)(unaff_x29 + -0x18);
  if (-1 < *(int *)(lVar3 + 0x28)) {
    lVar9 = unaff_x29 + -0x18;
  }
  FUN_032d66d4(lVar6,*(undefined8 *)(lVar7 + 0x78),lVar8,lVar9,0,0);
  lVar3 = *(long *)(unaff_x19 + 0x40);
  if (lVar3 != 0) {
    lVar6 = *(long *)(unaff_x20 + 0x20);
    __src = *(void **)(unaff_x29 + -0x18);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x38) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x18);
    }
    memcpy(__dest,__src,(ulong)uVar1);
    lVar6 = *(long *)(lVar6 + 0xc0);
    puVar5 = *(undefined8 **)(lVar6 + 0x68);
    uVar4 = *puVar5;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x38) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    *(undefined8 **)(unaff_x29 + -0x10) = __dest;
    (*(code *)puVar5[2])(uVar4,puVar5,lVar3,unaff_x29 + -0x10,__dest);
  }
  lVar3 = *(long *)(unaff_x19 + 0x48);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


