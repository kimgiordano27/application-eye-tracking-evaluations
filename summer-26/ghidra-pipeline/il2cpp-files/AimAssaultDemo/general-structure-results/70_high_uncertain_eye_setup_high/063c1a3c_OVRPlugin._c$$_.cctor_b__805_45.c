/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__805_45
ENTRY_POINT: 063c1a3c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__805_45(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  uint uVar11;
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
  
  pvVar6 = (void *)FUN_063c08cc();
  if (unaff_x22 == 0) {
    iVar5 = 0;
  }
  else {
                    /* try { // try from 063c1a50 to 064c1a53 has its CatchHandler @ 063c1a84 */
                    /* try { // try from 063c1a54 to 064c1a5b has its CatchHandler @ 063c1a80 */
    iVar5 = FUN_05b0f3d0();
                    /* try { // try from 063c1a5c to 064c1a6f has its CatchHandler @ 063c1978 */
  }
                    /* try { // try from 063c1a70 to 064c1a7f has its CatchHandler @ 063c1a8c */
  lVar7 = RootMotion_FinalIK_Finger___ctor(*unaff_x23,iVar5 << 1);
  puVar3 = PTR_DAT_07db6f30;
  puVar2 = PTR_DAT_07db6f28;
  if (0 < iVar5) {
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063c1a54 with catch @ 063c1a80
                        */
    if (unaff_x22 == 0) goto LAB_063c1c14;
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063c1a50 with catch @ 063c1a84
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063c1a30 with catch @ 063c1a8c
                       catch(type#1 @ 078dda18) { ... } // from try @ 063c1a70 with catch @ 063c1a8c
                        */
                    /* try { // try from 063c1a94 to 064c1a97 has its CatchHandler @ 063c1b08 */
                    /* try { // try from 063c1a98 to 064c1ab7 has its CatchHandler @ 063c1978 */
    FUN_05b0fb30(&stack0x00000008);
    uVar11 = 1;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    while (uVar8 = FUN_05e3d424(&stack0x00000030,*(undefined8 *)puVar3), uVar4 = in_stack_00000048,
          uVar9 = in_stack_00000040, (uVar8 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar9 = FUN_063c08cc(uVar9);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar11 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      *(undefined8 *)(lVar7 + (long)(int)(uVar11 - 1) * 8 + 0x20) = uVar9;
      uVar9 = FUN_063c08cc(uVar4);
      if (*(uint *)(lVar7 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      lVar1 = (long)(int)uVar11;
      uVar11 = uVar11 + 2;
      *(undefined8 *)(lVar7 + lVar1 * 8 + 0x20) = uVar9;
    }
    FUN_05e3d544(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_07d889a0;
  uVar9 = FUN_0629d2ec((long)iVar5,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70(*unaff_x24);
  }
  FUN_063c1c90(pvVar6,lVar7,uVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  free(pvVar6);
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar8 = 0;
      uVar10 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        pvVar6 = *(void **)(lVar7 + 0x20 + uVar8 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        free(pvVar6);
        uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    return;
  }
LAB_063c1c14:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


