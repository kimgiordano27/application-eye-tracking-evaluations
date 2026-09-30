/*
FUNCTION_NAME: OVRPlugin.Sizei$$Equals
ENTRY_POINT: 0749d5b8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Sizei__Equals
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined4 *unaff_x22;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  long in_stack_00000068;
  
  do {
    FUN_073fcea8(param_1,param_2,param_3,param_4);
    in_stack_00000048 = uStack0000000000000028;
    in_stack_00000040 = in_stack_00000020;
    uStack0000000000000054 = uStack0000000000000034;
    uStack000000000000004c = uStack000000000000002c;
    uStack0000000000000050 = uStack0000000000000030;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar1 = FUN_0749d688(unaff_x20 & 0xffffffff,&stack0x00000068);
    in_stack_00000020 = in_stack_00000040;
    uStack0000000000000034 = uStack0000000000000054;
    uStack0000000000000028 = in_stack_00000048;
    uStack000000000000002c = uStack000000000000004c;
    uStack0000000000000030 = uStack0000000000000050;
    if (unaff_x19 == 0) {
LAB_0749d684:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
LAB_0749d680:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    *unaff_x22 = uVar1;
    unaff_x22[8] = 0;
    unaff_x20 = unaff_x20 + 1;
    *(undefined8 *)(unaff_x22 + 6) = uStack0000000000000054;
    *(ulong *)(unaff_x22 + 4) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    *(ulong *)(unaff_x22 + 3) = CONCAT44(uStack000000000000004c,in_stack_00000048);
    *(undefined8 *)(unaff_x22 + 1) = in_stack_00000040;
    unaff_x22 = unaff_x22 + 9;
    if (in_stack_00000068 == 0) goto LAB_0749d684;
    if ((long)(int)*(uint *)(in_stack_00000068 + 0x18) <= (long)unaff_x20) {
      lVar2 = thunk_FUN_03d2ef40(*unaff_x21);
      FUN_0749d784();
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = unaff_x19;
        thunk_FUN_03d1023c();
        return lVar2;
      }
      goto LAB_0749d684;
    }
    if (*(uint *)(in_stack_00000068 + 0x18) <= unaff_x20) goto LAB_0749d680;
    param_2 = *(undefined8 *)(in_stack_00000068 + unaff_x20 * 8 + 0x20);
    param_1 = &stack0x00000020;
    param_3 = 1;
    param_4 = 0;
  } while( true );
}


