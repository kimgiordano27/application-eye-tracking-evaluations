/*
FUNCTION_NAME: OVRPlugin.Size3f$$.cctor
ENTRY_POINT: 04f81b9c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Size3f___cctor(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined4 uVar1;
  long lVar2;
  int in_w8;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar3;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  long in_stack_00000048;
  
  uStack0000000000000034 = param_2._8_8_;
  uVar3 = param_2._0_8_;
  uStack0000000000000028 = param_1._8_4_;
  uStack0000000000000020 = param_1._0_8_;
  do {
    uStack000000000000002c = (undefined4)uVar3;
    uStack0000000000000030 = (undefined4)((ulong)uVar3 >> 0x20);
    if (in_w8 == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar1 = FUN_04f81c34(unaff_x20 & 0xffffffff,&stack0x00000048);
    if (unaff_x19 == 0) {
LAB_04f81bf0:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
LAB_04f81c30:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    *(undefined4 *)((long)unaff_x22 + -4) = uVar1;
    unaff_x20 = unaff_x20 + 1;
    unaff_x22[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *unaff_x22 = uStack0000000000000020;
    *(undefined8 *)((long)unaff_x22 + 0x14) = uStack0000000000000034;
    *(ulong *)((long)unaff_x22 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    if (in_stack_00000048 == 0) goto LAB_04f81bf0;
    if ((long)(int)*(uint *)(in_stack_00000048 + 0x18) <= (long)unaff_x20) {
      lVar2 = thunk_FUN_02b79644(*unaff_x21);
      FUN_04f81d44();
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = unaff_x19;
        thunk_FUN_02bb0e9c();
        return lVar2;
      }
      goto LAB_04f81bf0;
    }
    if (*(uint *)(in_stack_00000048 + 0x18) <= unaff_x20) goto LAB_04f81c30;
    FUN_04ef8cd4(&stack0x00000000 + 4,*(undefined8 *)(in_stack_00000048 + unaff_x20 * 8 + 0x20),1,0)
    ;
    uVar3 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    in_w8 = *(int *)(*unaff_x21 + 0xe4);
    unaff_x22 = unaff_x22 + 4;
    uStack0000000000000020 = in_stack_00000000._4_8_;
    uStack0000000000000034 = in_stack_00000018;
    uStack0000000000000028 = in_stack_00000000._12_4_;
  } while( true );
}


