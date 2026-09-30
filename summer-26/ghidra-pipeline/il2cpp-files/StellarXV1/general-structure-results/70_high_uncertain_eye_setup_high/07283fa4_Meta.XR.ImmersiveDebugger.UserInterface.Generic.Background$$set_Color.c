/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Background$$set_Color
ENTRY_POINT: 07283fa4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_Background__set_Color(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  long unaff_x21;
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
  undefined8 in_stack_00000068;
  
  FUN_04077588(PTR_DAT_09287040);
  FUN_04077588(PTR_DAT_092c1ac8);
  FUN_04077588(PTR_DAT_092c1400);
  FUN_04077588(PTR_DAT_092c1408);
  FUN_04077588(PTR_DAT_092c1af8);
  FUN_04077588(PTR_DAT_092c1558);
  *(undefined1 *)(unaff_x21 + 0x796) = 1;
  puVar4 = PTR_DAT_092c1ac8;
  puVar3 = PTR_DAT_092c1558;
  puVar2 = PTR_DAT_092c1400;
  puVar1 = PTR_DAT_09287040;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  if (unaff_x20 != 0) {
    uVar5 = FUN_06eef5a0();
    lVar11 = *(long *)puVar4;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar11);
      lVar11 = *(long *)puVar4;
    }
    uVar12 = **(undefined8 **)(lVar11 + 0xb8);
    plVar6 = (long *)FUN_04077674(*(undefined8 *)puVar1,3);
    uVar7 = FUN_07dfb290(*(undefined8 *)puVar3,0);
    in_stack_00000008._4_4_ = uVar5;
    uVar8 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),(long)&stack0x00000008 + 4);
    lVar11 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
    FUN_07df1964(lVar11,uVar7,uVar8,0);
    if (plVar6 != (long *)0x0) {
      if ((lVar11 != 0) &&
         (lVar9 = thunk_FUN_040b4e00(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
LAB_07284214:
        uVar7 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar7,0);
      }
      if ((int)plVar6[3] != 0) {
        plVar6[4] = lVar11;
        thunk_FUN_040ec700(plVar6 + 4,lVar11);
        memcpy(&stack0x00000010,(void *)(unaff_x19 + 0x18),0x60);
        lVar11 = FUN_0727be00(&stack0x00000010);
        if ((lVar11 != 0) &&
           (lVar9 = thunk_FUN_040b4e00(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
        goto LAB_07284214;
        if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
          plVar6[5] = lVar11;
          thunk_FUN_040ec700(plVar6 + 5,lVar11);
          uVar10 = FUN_074e5d94(*(undefined8 *)(unaff_x19 + 0x78),0);
          lVar11 = 0;
          if ((uVar10 & 1) == 0) {
            uVar7 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1af8,0);
            uVar8 = *(undefined8 *)(unaff_x19 + 0x78);
            lVar11 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
            FUN_07df1964(lVar11,uVar7,uVar8,0);
            if ((lVar11 != 0) &&
               (lVar9 = thunk_FUN_040b4e00(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
            goto LAB_07284214;
          }
          puVar1 = PTR_DAT_092c1408;
          if (2 < *(uint *)(plVar6 + 3)) {
            plVar6[6] = lVar11;
            thunk_FUN_040ec700(plVar6 + 6,lVar11);
            uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
            FUN_07df868c(uVar7,uVar12,plVar6,0);
            return uVar7;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


