/*
FUNCTION_NAME: RootMotion.Demos.SlowMo$$Update
ENTRY_POINT: 029f2f38
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029f326c) */

void RootMotion_Demos_SlowMo__Update(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  undefined4 unaff_w22;
  undefined8 uVar10;
  long unaff_x24;
  undefined8 *puVar11;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  plVar9 = *(long **)(unaff_x19 + 0x78);
  puVar11 = *(undefined8 **)(unaff_x24 + 0xb18);
  plVar3 = (long *)FUN_01ab6a94(*puVar11,3);
  puVar1 = PTR_DAT_03cbeda8;
  uStack0000000000000008 = unaff_w22;
  lVar4 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000008);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_01a89d6c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
    uVar10 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar10,0);
  }
  if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar3[4] = lVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 4,lVar4);
  uStack0000000000000004 = *(undefined4 *)(unaff_x19 + 0x70);
  lVar4 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000004);
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_01a89d6c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
    uVar10 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar10,0);
  }
  if (*(uint *)(plVar3 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar3[5] = lVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 5,lVar4);
  lVar4 = thunk_FUN_01a89a98(*(undefined8 *)puVar1);
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_01a89d6c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
    uVar10 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar10,0);
  }
  if (*(uint *)(plVar3 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar3[6] = lVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 6,lVar4);
  puVar2 = PTR_DAT_03ccf278;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  uVar10 = *(undefined8 *)PTR_DAT_03d098d8;
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03ccf278) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_029f30a0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)PTR_DAT_03ccf278,2);
LAB_029f30a0:
  (*(code *)*puVar6)(plVar9,uVar10,plVar3,puVar6[1]);
  if (*(char *)(unaff_x19 + 0x26) == '\0') {
    uVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c00);
    FUN_027d737c();
    lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c08);
    FUN_027e22f4(lVar4,uVar10,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_027e2600(lVar4,0);
    FUN_029e4c9c(lVar4,*(undefined8 *)PTR_DAT_03d098c0);
  }
  if (*(int *)(unaff_x19 + 0x70) != *(int *)(unaff_x19 + 0x4c)) {
    plVar9 = *(long **)(unaff_x19 + 0x78);
    plVar3 = (long *)FUN_01ab6a94(*puVar11,2);
    uStack0000000000000008 = *(undefined4 *)(unaff_x19 + 0x70);
    lVar4 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000008);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_01a89d6c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
      uVar10 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar10,0);
    }
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar3[4] = lVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 4,lVar4);
    uStack0000000000000004 = *(undefined4 *)(unaff_x19 + 0x4c);
    lVar4 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000004);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_01a89d6c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
      uVar10 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar10,0);
    }
    if (*(uint *)(plVar3 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar3[5] = lVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 5,lVar4);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar10 = *(undefined8 *)PTR_DAT_03d098d0;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar11 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_029f3248;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar2,1);
LAB_029f3248:
    (*(code *)*puVar11)(plVar9,uVar10,plVar3,puVar11[1]);
  }
  *(undefined1 *)(unaff_x19 + 0x80) = 1;
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


