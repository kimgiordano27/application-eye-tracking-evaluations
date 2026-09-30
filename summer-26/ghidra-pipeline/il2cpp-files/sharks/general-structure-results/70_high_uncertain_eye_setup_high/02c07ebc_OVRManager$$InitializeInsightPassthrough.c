/*
FUNCTION_NAME: OVRManager$$InitializeInsightPassthrough
ENTRY_POINT: 02c07ebc
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__InitializeInsightPassthrough(long param_1)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long *plVar10;
  uint unaff_w23;
  long *unaff_x24;
  long lVar11;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack000000000000002c;
  char in_stack_00000030;
  char cStack0000000000000034;
  undefined8 in_stack_00000038;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0xed8));
  FUN_017fc350(PTR_DAT_0380aee0);
  FUN_017fc350(PTR_DAT_037f87b8);
  *(undefined1 *)(unaff_x19 + 0xe0c) = 1;
  cStack0000000000000034 = '\0';
  in_stack_00000030 = '\0';
  uStack000000000000002c = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02c06b78(unaff_w22,&stack0x00000038,unaff_w23 & 1,&stack0x00000034,&stack0x00000030,
               &stack0x0000002c);
  lVar7 = FUN_02c08074();
  if (lVar7 != 0) {
    FUN_0264f5dc(&stack0x00000010,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_0380aee0);
    cVar3 = cStack0000000000000034;
    cVar2 = in_stack_00000030;
    puVar1 = PTR_DAT_0380aed8;
    uVar5 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar5) {
                    /* try { // try from 02c07f70 to 02d080af has its CatchHandler @ 02c07f70
                       catch() { ... } // from try @ 02c07f70 with catch @ 02c07f70
                       catch() { ... } // from try @ 02c08200 with catch @ 02c07f70
                       catch() { ... } // from try @ 02c08318 with catch @ 02c07f70
                       catch() { ... } // from try @ 02c08334 with catch @ 02c07f70
                       catch() { ... } // from try @ 02c08390 with catch @ 02c07f70
                       catch() { ... } // from try @ 02c08444 with catch @ 02c07f70 */
      lVar11 = 0;
      do {
        if (uVar5 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        plVar10 = *(long **)(lVar7 + 0x20 + lVar11 * 8);
        if (plVar10 == (long *)0x0) goto LAB_02c0806c;
        uVar5 = FUN_02b1f8a0(plVar10,0);
        uVar6 = FUN_02b1f8a0(plVar10,0);
        uVar4 = in_stack_00000038;
        if ((uVar5 & (unaff_w22 ^ 2)) == uVar6) {
          if (cVar3 != '\0') {
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            uVar8 = FUN_02c06d3c(plVar10,uVar4,cVar2 != '\0');
            if ((uVar8 & 1) == 0) goto LAB_02c08028;
          }
          if (unaff_x20 != 0) {
            lVar9 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
            if (lVar9 == 0) goto LAB_02c0806c;
            if (*(int *)(lVar9 + 0x18) != *(int *)(unaff_x20 + 0x18)) goto LAB_02c08028;
          }
          FUN_0264f80c(&stack0x00000010,plVar10,*(undefined8 *)puVar1);
        }
LAB_02c08028:
        uVar5 = *(uint *)(lVar7 + 0x18);
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < (int)uVar5);
    }
    in_stack_00000008[2] = in_stack_00000020;
    in_stack_00000008[1] = in_stack_00000018;
    *in_stack_00000008 = in_stack_00000010;
    return;
  }
LAB_02c0806c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


