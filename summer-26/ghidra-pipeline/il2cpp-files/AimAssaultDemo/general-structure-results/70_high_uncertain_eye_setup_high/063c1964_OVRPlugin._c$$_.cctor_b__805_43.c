/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__805_43
ENTRY_POINT: 063c1964
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


void OVRPlugin_<>c__<_cctor>b__805_43(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
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
  
  puVar4 = PTR_DAT_07db7680;
                    /* try { // try from 063c1978 to 064c19a7 has its CatchHandler @ 063c1978
                       catch() { ... } // from try @ 063c1978 with catch @ 063c1978
                       catch() { ... } // from try @ 063c19cc with catch @ 063c1978
                       catch() { ... } // from try @ 063c1a10 with catch @ 063c1978
                       catch() { ... } // from try @ 063c1a5c with catch @ 063c1978
                       catch() { ... } // from try @ 063c1a98 with catch @ 063c1978
                       catch() { ... } // from try @ 063c1af0 with catch @ 063c1978 */
  if ((DAT_0825c911 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db7680);
                    /* try { // try from 063c19a8 to 064c19b3 has its CatchHandler @ 063c1a10 */
    FUN_0373b518(PTR_DAT_07db6f20);
    FUN_0373b518(PTR_DAT_07db77b0);
    FUN_0373b518(PTR_DAT_07db6f28);
                    /* try { // try from 063c19c4 to 064c19cb has its CatchHandler @ 063c1a18 */
                    /* try { // try from 063c19cc to 064c1a0b has its CatchHandler @ 063c1978 */
    FUN_0373b518(PTR_DAT_07db6f30);
    FUN_0373b518(PTR_DAT_07db6f38);
    FUN_0373b518(PTR_DAT_07d95898);
    FUN_0373b518(PTR_DAT_07db6f40);
    FUN_0373b518(PTR_DAT_07db6f48);
    FUN_0373b518(PTR_DAT_07d889a0);
    DAT_0825c911 = 1;
  }
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  puVar2 = PTR_DAT_07d95898;
  pvVar7 = (void *)FUN_063c08cc(param_1);
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_05b0f3d0(param_2,*(undefined8 *)PTR_DAT_07db77b0);
  }
  lVar8 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar2,iVar6 << 1);
  puVar3 = PTR_DAT_07db6f30;
  puVar2 = PTR_DAT_07db6f28;
  if (0 < iVar6) {
    if (param_2 == 0) goto LAB_063c1c14;
    FUN_05b0fb30(&stack0x00000008,param_2,*(undefined8 *)PTR_DAT_07db6f20);
    uVar12 = 1;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    while (uVar9 = FUN_05e3d424(&stack0x00000030,*(undefined8 *)puVar3), uVar5 = in_stack_00000048,
          uVar10 = in_stack_00000040, (uVar9 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar10 = FUN_063c08cc(uVar10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar12 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      *(undefined8 *)(lVar8 + (long)(int)(uVar12 - 1) * 8 + 0x20) = uVar10;
      uVar10 = FUN_063c08cc(uVar5);
      if (*(uint *)(lVar8 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      lVar1 = (long)(int)uVar12;
      uVar12 = uVar12 + 2;
      *(undefined8 *)(lVar8 + lVar1 * 8 + 0x20) = uVar10;
    }
    FUN_05e3d544(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_07d889a0;
  uVar10 = FUN_0629d2ec((long)iVar6,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)puVar4);
  }
  FUN_063c1c90(pvVar7,lVar8,uVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  free(pvVar7);
  if (lVar8 != 0) {
    if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
      uVar9 = 0;
      uVar11 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      do {
        if (uVar11 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        pvVar7 = *(void **)(lVar8 + 0x20 + uVar9 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        free(pvVar7);
        uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
    }
    return;
  }
LAB_063c1c14:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


