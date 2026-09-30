/*
FUNCTION_NAME: OVRPlugin$$GetActionStateBoolean
ENTRY_POINT: 01d80418
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStateBoolean(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  uint unaff_w22;
  long *plVar9;
  long *unaff_x24;
  long lVar10;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char cStack0000000000000030;
  char cStack0000000000000034;
  undefined8 in_stack_00000038;
  
  lVar6 = FUN_01d8055c(param_1,param_2,unaff_w22);
  if (lVar6 != 0) {
    FUN_0174876c(&stack0x00000010,*(undefined4 *)(lVar6 + 0x18),*(undefined8 *)PTR_DAT_02359088);
    cVar2 = cStack0000000000000030;
    puVar1 = PTR_DAT_02359080;
    uVar4 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar4) {
      lVar10 = 0;
      do {
        if (uVar4 <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        plVar9 = *(long **)(lVar6 + 0x20 + lVar10 * 8);
        if (plVar9 == (long *)0x0) goto LAB_01d80554;
        uVar4 = FUN_01cd7a98(plVar9,0);
        uVar5 = FUN_01cd7a98(plVar9,0);
        uVar3 = in_stack_00000038;
        if ((uVar4 & (unaff_w22 ^ 2)) == uVar5) {
          if (cStack0000000000000034 != '\0') {
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            uVar7 = FUN_01d7f224(plVar9,uVar3,cVar2 != '\0');
            if ((uVar7 & 1) == 0) goto LAB_01d80510;
          }
          if (unaff_x20 != 0) {
            lVar8 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
            if (lVar8 == 0) goto LAB_01d80554;
            if (*(int *)(lVar8 + 0x18) != *(int *)(unaff_x20 + 0x18)) goto LAB_01d80510;
          }
          FUN_0174899c(&stack0x00000010,plVar9,*(undefined8 *)puVar1);
        }
LAB_01d80510:
        uVar4 = *(uint *)(lVar6 + 0x18);
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < (int)uVar4);
    }
                    /* try { // try from 01d80528 to 01e8060f has its CatchHandler @ 01d80528
                       catch() { ... } // from try @ 01d80528 with catch @ 01d80528
                       catch() { ... } // from try @ 01d80738 with catch @ 01d80528
                       catch() { ... } // from try @ 01d80944 with catch @ 01d80528
                       catch() { ... } // from try @ 01d809e8 with catch @ 01d80528
                       catch() { ... } // from try @ 01d809f0 with catch @ 01d80528
                       catch() { ... } // from try @ 01d809fc with catch @ 01d80528
                       catch() { ... } // from try @ 01d80acc with catch @ 01d80528
                       catch() { ... } // from try @ 01d80b68 with catch @ 01d80528 */
    in_stack_00000008[2] = in_stack_00000020;
    in_stack_00000008[1] = in_stack_00000018;
    *in_stack_00000008 = in_stack_00000010;
    return;
  }
LAB_01d80554:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


