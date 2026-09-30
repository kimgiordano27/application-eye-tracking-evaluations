/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$OnHoverChanged
ENTRY_POINT: 0561871c
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__OnHoverChanged(long param_1)

{
  long lVar1;
  void *__src;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 *__dest;
  long unaff_x26;
  long unaff_x29;
  
  lVar5 = *(long *)(in_x9 + 0x38);
  lVar8 = (long)&stack0x00000000 - ((ulong)(*(int *)(param_1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar2 = *(uint *)(lVar5 + 0xfc);
  __dest = (undefined8 *)(lVar8 - ((ulong)uVar2 + 0xf & 0x1fffffff0));
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8(lVar5);
    in_x9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  uVar3 = *(undefined8 *)(in_x9 + 0x50);
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  FUN_032d66d4(lVar5,uVar3);
  lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar6 = *(long *)(lVar7 + 0x38);
  lVar5 = lVar6;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_032934b8(lVar6);
    lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar1 = *(long *)(unaff_x29 + -0x18);
  if (-1 < *(int *)(lVar5 + 0x28)) {
    lVar1 = unaff_x29 + -0x18;
  }
  FUN_032d66d4(lVar6,*(undefined8 *)(lVar7 + 0x78),lVar8,lVar1,0,0);
  lVar5 = *(long *)(unaff_x19 + 0x40);
  if (lVar5 != 0) {
    lVar8 = *(long *)(unaff_x20 + 0x20);
    __src = *(void **)(unaff_x29 + -0x18);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x38) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x18);
    }
    memcpy(__dest,__src,(ulong)uVar2);
    lVar8 = *(long *)(lVar8 + 0xc0);
    puVar4 = *(undefined8 **)(lVar8 + 0x68);
    uVar3 = *puVar4;
    if (-1 < *(int *)(*(long *)(lVar8 + 0x38) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    *(undefined8 **)(unaff_x29 + -0x10) = __dest;
    (*(code *)puVar4[2])(uVar3,puVar4,lVar5,unaff_x29 + -0x10,__dest);
  }
  lVar5 = *(long *)(unaff_x19 + 0x48);
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


