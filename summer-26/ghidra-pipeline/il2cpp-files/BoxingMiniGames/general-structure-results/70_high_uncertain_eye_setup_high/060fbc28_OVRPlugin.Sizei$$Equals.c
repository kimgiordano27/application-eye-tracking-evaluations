/*
FUNCTION_NAME: OVRPlugin.Sizei$$Equals
ENTRY_POINT: 060fbc28
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Sizei__Equals(undefined1 param_1 [16],long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined4 *unaff_x22;
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
  
  uStack0000000000000028 = param_1._8_4_;
  uStack0000000000000020 = param_1._0_8_;
  do {
    uStack0000000000000034 = in_stack_00000018;
    uStack000000000000002c = uStack0000000000000010;
    uStack0000000000000030 = uStack0000000000000014;
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar1 = FUN_060fbccc(unaff_x20 & 0xffffffff,&stack0x00000048);
    if (unaff_x19 == 0) {
LAB_060fbc88:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
LAB_060fbcc8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    *unaff_x22 = uVar1;
    unaff_x22[8] = 0;
    unaff_x20 = unaff_x20 + 1;
    *(ulong *)(unaff_x22 + 3) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *(undefined8 *)(unaff_x22 + 1) = uStack0000000000000020;
    *(undefined8 *)(unaff_x22 + 6) = uStack0000000000000034;
    *(ulong *)(unaff_x22 + 4) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    if (in_stack_00000048 == 0) goto LAB_060fbc88;
    if ((long)(int)*(uint *)(in_stack_00000048 + 0x18) <= (long)unaff_x20) {
      lVar2 = thunk_FUN_0367fe20(*unaff_x21);
      FUN_060fbddc();
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = unaff_x19;
        thunk_FUN_036b7ad0();
        return lVar2;
      }
      goto LAB_060fbc88;
    }
    if (*(uint *)(in_stack_00000048 + 0x18) <= unaff_x20) goto LAB_060fbcc8;
    FUN_0606b2f8(&stack0x00000000 + 4,*(undefined8 *)(in_stack_00000048 + unaff_x20 * 8 + 0x20),1,0)
    ;
    param_2 = *unaff_x21;
    unaff_x22 = unaff_x22 + 9;
    uStack0000000000000020 = in_stack_00000000._4_8_;
    uStack0000000000000028 = in_stack_00000000._12_4_;
  } while( true );
}


