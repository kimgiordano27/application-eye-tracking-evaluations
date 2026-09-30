/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$set_FollowOverride
ENTRY_POINT: 06360cb8
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__set_FollowOverride(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  undefined1 auVar20 [16];
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x90) != 0)) {
    iVar16 = FUN_0638b2d4(*(long *)(param_1 + 0x90),0);
    if (iVar16 < 1) {
      return 0;
    }
    lVar17 = *(long *)(unaff_x19 + 0x18);
    if ((((lVar17 != 0) && (lVar18 = *(long *)(unaff_x19 + 0x28), lVar18 != 0)) &&
        (lVar19 = *(long *)(unaff_x19 + 0x30), lVar19 != 0)) && (*(long *)(unaff_x19 + 0x10) != 0))
    {
      uVar1 = *(undefined8 *)(lVar17 + 0x10);
      uVar8 = *(undefined8 *)(lVar17 + 0x18);
      uVar2 = *(undefined8 *)(lVar18 + 0x10);
      uVar9 = *(undefined8 *)(lVar18 + 0x18);
      uVar3 = *(undefined8 *)(lVar19 + 0x10);
      uVar10 = *(undefined8 *)(lVar19 + 0x18);
      lVar17 = FUN_063178b4(*(long *)(unaff_x19 + 0x10),0);
      if (((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0xa0), lVar17 != 0)) &&
         (*(long *)(unaff_x19 + 0x10) != 0)) {
        uVar4 = *(undefined8 *)(lVar17 + 0x10);
        uVar11 = *(undefined8 *)(lVar17 + 0x18);
        lVar17 = FUN_063178b4(*(long *)(unaff_x19 + 0x10),0);
        if (((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x98), lVar17 != 0)) &&
           (*(long *)(unaff_x19 + 0x10) != 0)) {
          uVar5 = *(undefined8 *)(lVar17 + 0x10);
          uVar12 = *(undefined8 *)(lVar17 + 0x18);
          lVar17 = FUN_063178b4(*(long *)(unaff_x19 + 0x10),0);
          if (((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x28), lVar17 != 0)) &&
             (*(long *)(unaff_x19 + 0x10) != 0)) {
            uVar6 = *(undefined8 *)(lVar17 + 0x10);
            uVar13 = *(undefined8 *)(lVar17 + 0x18);
            lVar17 = FUN_063178b4(*(long *)(unaff_x19 + 0x10),0);
            if (((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x30), lVar17 != 0)) &&
               (*(long *)(unaff_x19 + 0x10) != 0)) {
              uVar7 = *(undefined8 *)(lVar17 + 0x10);
              uVar14 = *(undefined8 *)(lVar17 + 0x18);
              lVar17 = FUN_06317a64(*(long *)(unaff_x19 + 0x10),0);
              if (((*(long *)(unaff_x19 + 0x10) != 0) &&
                  (lVar18 = FUN_063178b4(*(long *)(unaff_x19 + 0x10),0), lVar18 != 0)) &&
                 ((*(long *)(lVar18 + 0x90) != 0 && (*(long *)(unaff_x19 + 0x10) != 0)))) {
                uVar15 = *(undefined4 *)(*(long *)(lVar18 + 0x90) + 0x18);
                lVar18 = FUN_06317a64(*(long *)(unaff_x19 + 0x10),0);
                if ((lVar18 != 0) &&
                   (in_stack_00000030 = uVar1, in_stack_00000038 = uVar8, in_stack_00000040 = uVar2,
                   in_stack_00000048 = uVar9, in_stack_00000050 = uVar3, in_stack_00000058 = uVar10,
                   in_stack_00000060 = uVar4, in_stack_00000068 = uVar11, in_stack_00000070 = uVar5,
                   in_stack_00000078 = uVar12, in_stack_00000080 = uVar6, in_stack_00000088 = uVar13
                   , in_stack_00000090 = uVar7, in_stack_00000098 = uVar14,
                   auVar20 = FUN_04003d70(&stack0x00000030,uVar15,0x40,
                                          *(undefined8 *)(lVar18 + 0xd0),
                                          *(undefined8 *)(lVar18 + 0xd8),DAT_0840ef68), lVar17 != 0)
                   ) {
                  *(undefined1 (*) [16])(lVar17 + 0xd0) = auVar20;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


