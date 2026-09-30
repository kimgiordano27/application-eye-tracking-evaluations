/*
FUNCTION_NAME: OVRPlugin$$PollEvent
ENTRY_POINT: 0532c2d8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__PollEvent(undefined1 param_1 [16],undefined1 param_2 [16])

{
  ulong uVar1;
  undefined4 uVar2;
  long unaff_x19;
  int unaff_w20;
  long lVar3;
  long unaff_x21;
  long lVar4;
  undefined4 unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined4 in_stack_00000080;
  
  uStack0000000000000014 = param_2._8_8_;
  uVar6 = param_2._0_8_;
  uVar5 = param_1._8_8_;
  uStack0000000000000000 = param_1._0_8_;
  while( true ) {
    uStack0000000000000008 = (undefined4)uVar5;
    uStack000000000000000c = (undefined4)uVar6;
    uStack0000000000000010 = (undefined4)((ulong)uVar6 >> 0x20);
    FUN_048b42ec(unaff_x21,unaff_w22);
    if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x10);
    FUN_03b96dd4(*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
    if (lVar4 == 0) break;
    FUN_0372a908(lVar4,uStack0000000000000000 & 0xffffffff,*unaff_x25);
    if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x18);
    FUN_03b96dd4(*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
    uVar1 = uStack0000000000000000;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_03b96dd4(*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
    if (lVar4 == 0) break;
    FUN_048adec8(lVar4,uVar1 & 0xffffffff,uStack0000000000000000._4_4_,*unaff_x26);
    lVar4 = *(long *)(unaff_x19 + 0x28);
    unaff_w20 = unaff_w20 + 1;
    if (lVar4 == 0) break;
    if (*(int *)(lVar4 + 0x18) <= unaff_w20) {
      return;
    }
    lVar3 = *(long *)(unaff_x19 + 0x38);
    FUN_03b96dd4(&stack0x00000080,lVar4,unaff_w20,*unaff_x23);
    uVar2 = in_stack_00000080;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    FUN_03b96dd4(&stack0x00000080,*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
    if (lVar3 == 0) break;
    _uStack0000000000000040 = *(undefined8 *)(unaff_x27 + 0x24);
    uStack0000000000000054 = *(undefined8 *)(unaff_x27 + 0x38);
    uStack0000000000000048 = (undefined4)*(undefined8 *)(unaff_x27 + 0x2c);
    uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x27 + 0x30);
    uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x30) >> 0x20);
    FUN_048b42ec(lVar3,uVar2,&stack0x00000040,*unaff_x24);
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    unaff_x21 = *(long *)(unaff_x19 + 0x30);
    FUN_03b96dd4(&stack0x00000040,*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    unaff_w22 = uStack0000000000000040;
    FUN_03b96dd4(&stack0x00000040,*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23);
    if (unaff_x21 == 0) break;
    uVar5 = *(undefined8 *)(unaff_x28 + 0x10);
    uStack0000000000000000 = *(ulong *)(unaff_x28 + 8);
    uStack0000000000000014 = *(undefined8 *)(unaff_x28 + 0x1c);
    uVar6 = *(undefined8 *)(unaff_x28 + 0x14);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


