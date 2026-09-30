/*
FUNCTION_NAME: OVRPlugin.OVRP_1_108_0$$ovrp_UnityOpenXR_OnAppSpaceChange2
ENTRY_POINT: 063ad914
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_108_0__ovrp_UnityOpenXR_OnAppSpaceChange2(code *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
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
  
code_r0x063ad914:
                    /* try { // try from 063ad914 to 064ad917 has its CatchHandler @ 063ad940 */
                    /* try { // try from 063ad918 to 064ad94f has its CatchHandler @ 063ad4b8 */
  (*param_1)();
  do {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 063ad914 with catch @ 063ad940 */
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
                    /* catch() { ... } // from try @ 063ad850 with catch @ 063ad96c
                       catch() { ... } // from try @ 063ad8d8 with catch @ 063ad96c
                       catch() { ... } // from try @ 063ad950 with catch @ 063ad96c
                       catch() { ... } // from try @ 063ad964 with catch @ 063ad96c */
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnAppSpaceChange;
        }
                    /* try { // try from 063ad950 to 064ad957 has its CatchHandler @ 063ad96c */
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
                    /* try { // try from 063ad958 to 064ad963 has its CatchHandler @ 063ad4b8 */
      } while (uVar6 != 0);
    }
                    /* try { // try from 063ad964 to 064ad96b has its CatchHandler @ 063ad96c */
    puVar4 = (undefined8 *)FUN_0377596c();
OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnAppSpaceChange:
    (*(code *)*puVar4)();
    uVar6 = FUN_05e3d424(&stack0x00000030,*unaff_x29);
    uVar3 = in_stack_00000040;
    if ((uVar6 & 1) == 0) {
      FUN_05e3d544(&stack0x00000030,*(undefined8 *)PTR_DAT_07db6f28);
      puVar1 = PTR_DAT_07db6c00;
      if (unaff_x22 == (long *)0x0) goto LAB_063adb9c;
      uVar2 = (**(code **)(*unaff_x22 + 0x238))();
      if (uVar2 < 0x12) {
        if ((1 << (ulong)(uVar2 & 0x1f) & 0x30780U) != 0) {
          if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          lVar5 = FUN_063ab8e0();
          if (lVar5 == 0) {
            return;
          }
          if (unaff_x19 == (long *)0x0) goto LAB_063adb9c;
          lVar5 = *unaff_x19;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 == 0) goto LAB_063ada3c;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_063ada24;
        }
        if (uVar2 == 0xb) {
          return;
        }
        if (uVar2 == 0xd) {
          if (unaff_x21 != (long *)0x0) goto LAB_063adb2c;
          goto LAB_063adb9c;
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
      goto LAB_063adb9c;
    }
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_06a0d350(uVar3,0);
    uVar3 = FUN_0632ed40(uVar3,0);
    uVar6 = FUN_063349dc(uVar3,0);
    if ((uVar6 & 1) == 0) break;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 10) * 0x10 + 0x138);
          goto LAB_063ad8e4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_063ad8e4:
    (*(code *)*puVar4)();
  } while( true );
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  (**(code **)(*unaff_x21 + 0x238))();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x28) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
        goto LAB_063ad90c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_063ad90c:
  param_1 = (code *)*puVar4;
  goto code_r0x063ad914;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_063ada24:
    if (*(long *)(piVar7 + -2) == *unaff_x28) {
      puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
      goto LAB_063ada74;
    }
  }
LAB_063ada3c:
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_063ada74:
  (*(code *)*puVar4)();
  if (unaff_x20 == (long *)0x0) {
LAB_063adb9c:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
        goto LAB_063adadc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_063adadc:
  (*(code *)*puVar4)();
  return;
}


