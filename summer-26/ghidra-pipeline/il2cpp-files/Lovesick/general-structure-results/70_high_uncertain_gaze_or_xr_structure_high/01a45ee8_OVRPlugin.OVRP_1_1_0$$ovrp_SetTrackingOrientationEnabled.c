/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetTrackingOrientationEnabled
ENTRY_POINT: 01a45ee8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_possible_biometrics_hits_1
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetTrackingOrientationEnabled(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x19;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  long *unaff_x24;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  puVar6 = StringLiteral_7580;
  puVar5 = StringLiteral_6807;
  puVar4 = Method_Obi_ObiPathDataChannelIdentity<float>__ctor__;
  puVar3 = Method_System_Collections_Generic_List<GenericDropdownMenu_MenuItem>_Add__;
  puVar2 = System_Predicate<Volume>_TypeInfo;
  FUN_0129b5d0();
  uVar10 = 1;
  in_stack_00000048 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000008;
  in_stack_00000058 = in_stack_00000020;
  in_stack_00000050 = in_stack_00000018;
  in_stack_00000060 = in_stack_00000028;
  while( true ) {
    uVar7 = FUN_012bf140(&stack0x00000040,*(undefined8 *)puVar5);
    if ((uVar7 & 1) == 0) {
      FUN_012bf83c(&stack0x00000040,*(undefined8 *)puVar2);
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
          uVar7 = 0;
          uVar9 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
          do {
            if (uVar9 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            __ptr = *(void **)(unaff_x19 + 0x20 + uVar7 * 8);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            free(__ptr);
            uVar9 = (ulong)*(uint *)(unaff_x19 + 0x18);
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < (long)(int)*(uint *)(unaff_x19 + 0x18));
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    auVar11 = FUN_00bc1db0(&stack0x00000040,*(undefined8 *)puVar4);
    _in_stack_00000030 = auVar11;
    uVar8 = FUN_00ad598c(&stack0x00000030,*(undefined8 *)puVar3);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_01a44d20(uVar8);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= uVar10 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined8 *)(unaff_x19 + (long)(int)(uVar10 - 1) * 8 + 0x20) = uVar8;
    FUN_00ad5c80(&stack0x00000030,*(undefined8 *)puVar6);
    uVar8 = FUN_01a44d20();
    if (*(uint *)(unaff_x19 + 0x18) <= uVar10) break;
    lVar1 = (long)(int)uVar10;
    uVar10 = uVar10 + 2;
    *(undefined8 *)(unaff_x19 + lVar1 * 8 + 0x20) = uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


