/*
FUNCTION_NAME: OVRPlugin.BodyJointLocation$$get_PositionValid
ENTRY_POINT: 01a3ee9c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin_BodyJointLocation__get_PositionValid(void)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined4 *unaff_x24;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  do {
    uVar1 = FUN_01a3ef40(unaff_x21 & 0xffffffff,&stack0x00000068);
    in_stack_00000020 = in_stack_00000040;
    uStack0000000000000034 = uStack0000000000000054;
    in_stack_00000028 = uStack0000000000000048;
    uStack000000000000002c = uStack000000000000004c;
    uStack0000000000000030 = uStack0000000000000050;
    if (unaff_x20 == 0) {
LAB_01a3ef3c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x21) {
LAB_01a3ef38:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *unaff_x24 = uVar1;
    unaff_x24[8] = 0;
    unaff_x21 = unaff_x21 + 1;
    *(undefined8 *)(unaff_x24 + 6) = uStack0000000000000054;
    *(ulong *)(unaff_x24 + 4) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    *(ulong *)(unaff_x24 + 3) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    *(undefined8 *)(unaff_x24 + 1) = in_stack_00000040;
    unaff_x24 = unaff_x24 + 9;
    if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x21) {
      lVar2 = thunk_FUN_00d62348(*unaff_x22);
      if (lVar2 != 0) {
        FUN_01a3f050();
        *(long *)(lVar2 + 0x10) = unaff_x20;
        return lVar2;
      }
      goto LAB_01a3ef3c;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x21) goto LAB_01a3ef38;
    FUN_019aa6e4(&stack0x00000020,*(undefined8 *)(unaff_x23 + unaff_x21 * 8),1,0);
    uStack0000000000000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    uStack0000000000000054 = uStack0000000000000034;
    uStack000000000000004c = uStack000000000000002c;
    uStack0000000000000050 = uStack0000000000000030;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
  } while( true );
}


