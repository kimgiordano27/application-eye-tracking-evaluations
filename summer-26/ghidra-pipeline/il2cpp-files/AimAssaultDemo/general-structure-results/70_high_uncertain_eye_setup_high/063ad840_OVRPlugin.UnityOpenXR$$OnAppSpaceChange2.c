/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnAppSpaceChange2
ENTRY_POINT: 063ad840
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


void OVRPlugin_UnityOpenXR__OnAppSpaceChange2(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong in_x9;
  ulong uVar6;
  int *in_x10;
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
  
code_r0x063ad840:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_063ad830;
LAB_063ad848:
                    /* try { // try from 063ad850 to 064ad857 has its CatchHandler @ 063ad96c */
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_063ad8e4:
                    /* catch() { ... } // from try @ 063ad870 with catch @ 063ad8ec
                       catch() { ... } // from try @ 063ad8c8 with catch @ 063ad8ec */
                    /* try { // try from 063ad8f4 to 064ad913 has its CatchHandler @ 063ad4b8 */
  (*(code *)*puVar4)();
                    /* catch() { ... } // from try @ 063ad594 with catch @ 063ad8f8 */
  do {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnAppSpaceChange;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
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
    if ((uVar6 & 1) != 0) break;
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
    (*(code *)*puVar4)();
  } while( true );
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  param_1 = *unaff_x19;
  param_3 = *unaff_x28;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 == 0) goto LAB_063ad848;
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_063ad830:
  if (*(long *)(in_x10 + -2) != param_3) {
    in_x9 = in_x9 - 1;
    in_ZR = in_x9 == 0;
    goto code_r0x063ad840;
  }
                    /* try { // try from 063ad8d8 to 064ad8f3 has its CatchHandler @ 063ad96c */
                    /* catch() { ... } // from try @ 063ad838 with catch @ 063ad8e0 */
  puVar4 = (undefined8 *)(param_1 + (long)(*in_x10 + 10) * 0x10 + 0x138);
  goto LAB_063ad8e4;
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


