/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingPositionEnabled
ENTRY_POINT: 01a45fcc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionEnabled(void)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  uint unaff_w29;
  undefined1 auVar6 [16];
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while( true ) {
    uVar3 = FUN_012bf140(&stack0x00000040,*unaff_x25);
    if ((uVar3 & 1) == 0) {
      FUN_012bf83c(&stack0x00000040,*unaff_x23);
      if (*(int *)(*(long *)PTR_DAT_033f1148 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar2 = StringLiteral_5238;
      FUN_017cc47c((long)unaff_w21,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x24);
      }
      FUN_01a46164();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      free(unaff_x20);
      if (unaff_x19 != 0) {
        if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
          uVar3 = 0;
          uVar5 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
          do {
            if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            __ptr = *(void **)(unaff_x19 + 0x20 + uVar3 * 8);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            free(__ptr);
            uVar5 = (ulong)*(uint *)(unaff_x19 + 0x18);
            uVar3 = uVar3 + 1;
          } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x19 + 0x18));
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    auVar6 = FUN_00bc1db0(&stack0x00000040,*unaff_x26);
    _in_stack_00000030 = auVar6;
    uVar4 = FUN_00ad598c(&stack0x00000030,*unaff_x27);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01a44d20(uVar4);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined8 *)(unaff_x19 + (long)(int)(unaff_w29 - 1) * 8 + 0x20) = uVar4;
    FUN_00ad5c80(&stack0x00000030,*unaff_x28);
    uVar4 = FUN_01a44d20();
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) break;
    lVar1 = (long)(int)unaff_w29;
    unaff_w29 = unaff_w29 + 2;
    *(undefined8 *)(unaff_x19 + lVar1 * 8 + 0x20) = uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


