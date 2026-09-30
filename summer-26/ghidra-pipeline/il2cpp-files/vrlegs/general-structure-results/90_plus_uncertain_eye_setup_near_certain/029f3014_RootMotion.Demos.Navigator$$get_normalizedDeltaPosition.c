/*
FUNCTION_NAME: RootMotion.Demos.Navigator$$get_normalizedDeltaPosition
ENTRY_POINT: 029f3014
PROGRAM: vrlegs-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029f326c) */

void RootMotion_Demos_Navigator__get_normalizedDeltaPosition(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  lVar2 = thunk_FUN_01a89d6c();
  if (lVar2 == 0) {
    uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,0);
  }
  if (*(uint *)(unaff_x21 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined8 *)(unaff_x21 + 0x30) = unaff_x22;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  puVar1 = PTR_DAT_03ccf278;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar2 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03ccf278) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_029f30a0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01a472ec();
LAB_029f30a0:
  (*(code *)*puVar3)();
  if (*(char *)(unaff_x19 + 0x26) == '\0') {
    uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c00);
    FUN_027d737c();
    lVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c08);
    FUN_027e22f4(lVar2,uVar4,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_027e2600(lVar2,0);
    FUN_029e4c9c(lVar2,*(undefined8 *)PTR_DAT_03d098c0);
  }
  if (*(int *)(unaff_x19 + 0x70) != *(int *)(unaff_x19 + 0x4c)) {
    plVar9 = *(long **)(unaff_x19 + 0x78);
    plVar5 = (long *)FUN_01ab6a94(*unaff_x24,2);
    uStack0000000000000008 = *(undefined4 *)(unaff_x19 + 0x70);
    lVar2 = thunk_FUN_01a89a98(*unaff_x23,&stack0x00000008);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((lVar2 != 0) &&
       (lVar6 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
      uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,0);
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar5[4] = lVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 4,lVar2);
    in_stack_00000000._4_4_ = *(undefined4 *)(unaff_x19 + 0x4c);
    lVar2 = thunk_FUN_01a89a98(*unaff_x23,(long)&stack0x00000000 + 4);
    if ((lVar2 != 0) &&
       (lVar6 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
      uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,0);
    }
    if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar5[5] = lVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 5,lVar2);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar2 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    uVar4 = *(undefined8 *)PTR_DAT_03d098d0;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_029f3248;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar1,1);
LAB_029f3248:
    (*(code *)*puVar3)(plVar9,uVar4,plVar5,puVar3[1]);
  }
  *(undefined1 *)(unaff_x19 + 0x80) = 1;
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


