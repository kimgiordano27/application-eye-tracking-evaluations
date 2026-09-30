/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnAppSpaceChange
ENTRY_POINT: 063ad7c4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnAppSpaceChange(void)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  while (uVar3 = FUN_05e3d424(&stack0x00000030,*unaff_x29), uVar4 = in_stack_00000040,
        (uVar3 & 1) != 0) {
                    /* try { // try from 063ad7e0 to 064ad7e3 has its CatchHandler @ 063ad814 */
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                    /* try { // try from 063ad7e4 to 064ad7e7 has its CatchHandler @ 063ad808 */
      thunk_FUN_03798b70();
    }
                    /* try { // try from 063ad7e8 to 064ad7ef has its CatchHandler @ 063ad7f4 */
                    /* catch() { ... } // from try @ 063ad6a0 with catch @ 063ad7f0
                       try { // try from 063ad7f0 to 064ad837 has its CatchHandler @ 063ad4b8 */
    FUN_06a0d350(uVar4,0);
                    /* catch() { ... } // from try @ 063ad7b8 with catch @ 063ad7f4
                       catch() { ... } // from try @ 063ad7e8 with catch @ 063ad7f4 */
                    /* catch() { ... } // from try @ 063ad6f8 with catch @ 063ad800 */
    uVar4 = FUN_0632ed40(uVar4,0);
                    /* catch() { ... } // from try @ 063ad5d4 with catch @ 063ad804 */
                    /* catch() { ... } // from try @ 063ad7e4 with catch @ 063ad808 */
                    /* catch() { ... } // from try @ 063ad718 with catch @ 063ad80c */
    uVar3 = FUN_063349dc(uVar4,0);
                    /* catch() { ... } // from try @ 063ad5b4 with catch @ 063ad810 */
    if ((uVar3 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      (**(code **)(*unaff_x21 + 0x238))();
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar6 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
            goto LAB_063ad90c;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c();
LAB_063ad90c:
      (*(code *)*puVar5)();
    }
    else {
                    /* catch() { ... } // from try @ 063ad7e0 with catch @ 063ad814 */
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
                    /* catch() { ... } // from try @ 063ad770 with catch @ 063ad818 */
      lVar6 = *unaff_x19;
                    /* catch() { ... } // from try @ 063ad6d4 with catch @ 063ad81c */
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
                    /* try { // try from 063ad838 to 064ad83b has its CatchHandler @ 063ad8e0 */
          if (*(long *)(piVar7 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 10) * 0x10 + 0x138);
            goto LAB_063ad8e4;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c();
LAB_063ad8e4:
      (*(code *)*puVar5)();
    }
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar6 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_063ad978;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c();
LAB_063ad978:
    (*(code *)*puVar5)();
  }
  FUN_05e3d544(&stack0x00000030,*(undefined8 *)PTR_DAT_07db6f28);
  puVar1 = PTR_DAT_07db6c00;
  if (unaff_x22 != (long *)0x0) {
    uVar2 = (**(code **)(*unaff_x22 + 0x238))();
    if (uVar2 < 0x12) {
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x30780U) != 0) {
        if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar6 = FUN_063ab8e0();
        if (lVar6 == 0) {
          return;
        }
        if (unaff_x19 != (long *)0x0) {
          lVar6 = *unaff_x19;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x28) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_063ada74;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c();
LAB_063ada74:
          (*(code *)*puVar5)();
          if (unaff_x20 != (long *)0x0) {
            lVar6 = *unaff_x20;
            uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar3 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 7) * 0x10 + 0x138);
                  goto LAB_063adadc;
                }
                uVar3 = uVar3 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar3 != 0);
            }
            puVar5 = (undefined8 *)FUN_0377596c();
LAB_063adadc:
            (*(code *)*puVar5)();
            return;
          }
        }
        goto LAB_063adb9c;
      }
      if (uVar2 == 0xb) {
        return;
      }
      if (uVar2 == 0xd) {
        if (unaff_x21 == (long *)0x0) goto LAB_063adb9c;
        goto LAB_063adb2c;
      }
    }
    if (unaff_x21 != (long *)0x0) {
      (**(code **)(*unaff_x21 + 0x1d8))();
      FUN_063aab78(in_stack_00000000);
      (**(code **)(*unaff_x21 + 0x1e8))();
LAB_063adb2c:
      (**(code **)(*unaff_x21 + 0x1c8))();
      (**(code **)(*unaff_x21 + 0x208))();
      return;
    }
  }
LAB_063adb9c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


