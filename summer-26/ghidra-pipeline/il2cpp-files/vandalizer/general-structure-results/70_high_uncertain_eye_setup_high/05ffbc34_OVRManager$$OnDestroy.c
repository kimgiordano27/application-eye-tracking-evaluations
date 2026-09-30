/*
FUNCTION_NAME: OVRManager$$OnDestroy
ENTRY_POINT: 05ffbc34
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnDestroy(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x21;
  undefined4 uVar8;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_04d11a00();
  *(undefined8 *)(unaff_x21 + 0x180) = 0;
  uVar8 = thunk_FUN_0329bf60(unaff_x21 + 0x180,0);
  plVar7 = *(long **)(unaff_x21 + 0x158);
  *(undefined4 *)(unaff_x21 + 0x178) = 0;
  puVar1 = PTR_DAT_075f49e8;
  if (plVar7 == (long *)0x0) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    _uStack0000000000000018 = 0;
    _uStack0000000000000010 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = 0;
    in_stack_00000030 = 0;
    FUN_05fb6a50(&stack0x00000010,0,0);
  }
  else {
    if (unaff_x19 == 0) goto LAB_05ffbd74;
    uVar2 = FUN_06e5502c();
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05ffbd34;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar1,0);
LAB_05ffbd34:
    (*(code *)*puVar3)(&stack0x00000010,plVar7,uVar2,puVar3[1]);
  }
  uVar8 = uStack0000000000000010;
  if (unaff_x19 != 0) {
    FUN_05ffa9c0(uStack0000000000000010,uStack0000000000000014,uStack0000000000000018,
                 uStack000000000000001c,in_stack_00000020 & 0xffffffff,in_stack_00000020._4_4_);
    return;
  }
LAB_05ffbd74:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390(uVar8);
}


