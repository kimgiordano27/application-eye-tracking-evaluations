/*
FUNCTION_NAME: OVRPlugin.RectiPair$$get_Item
ENTRY_POINT: 04f81be8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_RectiPair__get_Item(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *in_x9;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  long in_stack_00000048;
  
  do {
    if (param_1 == 0) {
LAB_04f81bf0:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((long)(int)*(uint *)(param_1 + 0x18) <= (long)unaff_x20) {
      lVar2 = thunk_FUN_02b79644(*unaff_x21);
      FUN_04f81d44();
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = unaff_x19;
        thunk_FUN_02bb0e9c();
        return lVar2;
      }
      goto LAB_04f81bf0;
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_x20) {
LAB_04f81c30:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    FUN_04ef8cd4(&stack0x00000000 + 4,*(undefined8 *)(param_1 + unaff_x20 * 8 + 0x20),1,0);
    uStack0000000000000028 = in_stack_00000000._12_4_;
    in_stack_00000020 = in_stack_00000000._4_8_;
    uStack0000000000000034 = in_stack_00000018;
    uStack000000000000002c = uStack0000000000000010;
    uStack0000000000000030 = uStack0000000000000014;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar1 = FUN_04f81c34(unaff_x20 & 0xffffffff,&stack0x00000048);
    if (unaff_x19 == 0) goto LAB_04f81bf0;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) goto LAB_04f81c30;
    *(undefined4 *)((long)in_x9 + -4) = uVar1;
    unaff_x20 = unaff_x20 + 1;
    in_x9[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *in_x9 = in_stack_00000020;
    *(undefined8 *)((long)in_x9 + 0x14) = uStack0000000000000034;
    *(ulong *)((long)in_x9 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    param_1 = in_stack_00000048;
    in_x9 = in_x9 + 4;
  } while( true );
}


