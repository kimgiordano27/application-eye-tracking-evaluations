/*
FUNCTION_NAME: RootMotion.Demos.Navigator$$set_state
ENTRY_POINT: 029f3034
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029f326c) */

void RootMotion_Demos_Navigator__set_state(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  puVar1 = PTR_DAT_03ccf278;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar6 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03ccf278) {
        puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_029f30a0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01a472ec();
LAB_029f30a0:
  (*(code *)*puVar2)();
  if (*(char *)(unaff_x19 + 0x26) == '\0') {
    uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c00);
    FUN_027d737c();
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c08);
    FUN_027e22f4(lVar6,uVar3,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_027e2600(lVar6,0);
    FUN_029e4c9c(lVar6,*(undefined8 *)PTR_DAT_03d098c0);
  }
  if (*(int *)(unaff_x19 + 0x70) != *(int *)(unaff_x19 + 0x4c)) {
    plVar9 = *(long **)(unaff_x19 + 0x78);
    plVar4 = (long *)FUN_01ab6a94(*unaff_x24,2);
    uStack0000000000000008 = *(undefined4 *)(unaff_x19 + 0x70);
    lVar6 = thunk_FUN_01a89a98(*unaff_x23,&stack0x00000008);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((lVar6 != 0) &&
       (lVar5 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
      uVar3 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar3,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[4] = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar6);
    in_stack_00000000._4_4_ = *(undefined4 *)(unaff_x19 + 0x4c);
    lVar6 = thunk_FUN_01a89a98(*unaff_x23,(long)&stack0x00000000 + 4);
    if ((lVar6 != 0) &&
       (lVar5 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
      uVar3 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar3,0);
    }
    if (*(uint *)(plVar4 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[5] = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 5,lVar6);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    uVar3 = *(undefined8 *)PTR_DAT_03d098d0;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_029f3248;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar1,1);
LAB_029f3248:
    (*(code *)*puVar2)(plVar9,uVar3,plVar4,puVar2[1]);
  }
  *(undefined1 *)(unaff_x19 + 0x80) = 1;
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


