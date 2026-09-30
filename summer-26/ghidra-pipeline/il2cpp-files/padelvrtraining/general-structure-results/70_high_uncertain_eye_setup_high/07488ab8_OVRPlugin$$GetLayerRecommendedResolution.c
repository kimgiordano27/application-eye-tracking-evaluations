/*
FUNCTION_NAME: OVRPlugin$$GetLayerRecommendedResolution
ENTRY_POINT: 07488ab8
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


long OVRPlugin__GetLayerRecommendedResolution(undefined4 param_1)

{
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
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
  
  while (!(bool)in_CY) {
    *(undefined4 *)((long)unaff_x22 + -4) = param_1;
    unaff_x20 = unaff_x20 + 1;
    *(undefined8 *)((long)unaff_x22 + 0x14) = uStack0000000000000014;
    *(ulong *)((long)unaff_x22 + 0xc) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
    unaff_x22[1] = CONCAT44(uStack000000000000000c,uStack0000000000000008);
    *unaff_x22 = in_stack_00000000;
    if (in_stack_00000068 == 0) {
LAB_07488b20:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if ((long)(int)*(uint *)(in_stack_00000068 + 0x18) <= (long)unaff_x20) {
      lVar1 = thunk_FUN_03d2ef40(*unaff_x21);
      FUN_07488c20();
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = unaff_x19;
        thunk_FUN_03d1023c();
        return lVar1;
      }
      goto LAB_07488b20;
    }
    if (*(uint *)(in_stack_00000068 + 0x18) <= unaff_x20) break;
    FUN_073fcea8(&stack0x00000020,*(undefined8 *)(in_stack_00000068 + unaff_x20 * 8 + 0x20),1,0);
    in_stack_00000048 = uStack0000000000000028;
    in_stack_00000040 = in_stack_00000020;
    uStack0000000000000054 = uStack0000000000000034;
    uStack000000000000004c = uStack000000000000002c;
    uStack0000000000000050 = uStack0000000000000030;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    param_1 = FUN_07488b24(unaff_x20 & 0xffffffff,&stack0x00000068);
    uStack0000000000000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    uStack0000000000000034 = uStack0000000000000054;
    uStack000000000000002c = uStack000000000000004c;
    uStack0000000000000030 = uStack0000000000000050;
    if (unaff_x19 == 0) goto LAB_07488b20;
    uStack0000000000000008 = in_stack_00000048;
    in_stack_00000000 = in_stack_00000040;
    uStack0000000000000014 = uStack0000000000000054;
    uStack000000000000000c = uStack000000000000004c;
    uStack0000000000000010 = uStack0000000000000050;
    unaff_x22 = unaff_x22 + 4;
    in_CY = *(uint *)(unaff_x19 + 0x18) <= unaff_x20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


