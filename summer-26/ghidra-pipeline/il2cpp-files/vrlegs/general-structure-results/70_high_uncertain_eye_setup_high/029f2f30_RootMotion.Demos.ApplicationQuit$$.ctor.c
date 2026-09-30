/*
FUNCTION_NAME: RootMotion.Demos.ApplicationQuit$$.ctor
ENTRY_POINT: 029f2f30
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029f326c) */

void RootMotion_Demos_ApplicationQuit___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *plVar10;
  undefined4 unaff_w22;
  undefined8 uVar11;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  puVar1 = PTR_DAT_03cbeb18;
  plVar10 = *(long **)(unaff_x19 + 0x78);
  plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,3);
  puVar2 = PTR_DAT_03cbeda8;
  uStack0000000000000008 = unaff_w22;
  lVar5 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000008);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
    uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar11,0);
  }
  if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar4[4] = lVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar5);
  uStack0000000000000004 = *(undefined4 *)(unaff_x19 + 0x70);
  lVar5 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&stack0x00000004);
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
    uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar11,0);
  }
  if (*(uint *)(plVar4 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar4[5] = lVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 5,lVar5);
  lVar5 = thunk_FUN_01a89a98(*(undefined8 *)puVar2);
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
    uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar11,0);
  }
  if (*(uint *)(plVar4 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar4[6] = lVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 6,lVar5);
  puVar3 = PTR_DAT_03ccf278;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar5 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  uVar11 = *(undefined8 *)PTR_DAT_03d098d8;
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03ccf278) {
        puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_029f30a0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03ccf278,2);
LAB_029f30a0:
  (*(code *)*puVar7)(plVar10,uVar11,plVar4,puVar7[1]);
  if (*(char *)(unaff_x19 + 0x26) == '\0') {
    uVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c00);
    FUN_027d737c();
    lVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c08);
    FUN_027e22f4(lVar5,uVar11,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_027e2600(lVar5,0);
    FUN_029e4c9c(lVar5,*(undefined8 *)PTR_DAT_03d098c0);
  }
  if (*(int *)(unaff_x19 + 0x70) != *(int *)(unaff_x19 + 0x4c)) {
    plVar10 = *(long **)(unaff_x19 + 0x78);
    plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)puVar1,2);
    uStack0000000000000008 = *(undefined4 *)(unaff_x19 + 0x70);
    lVar5 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&stack0x00000008);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar11,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[4] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar5);
    uStack0000000000000004 = *(undefined4 *)(unaff_x19 + 0x4c);
    lVar5 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&stack0x00000004);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar11,0);
    }
    if (*(uint *)(plVar4 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[5] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 5,lVar5);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar5 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    uVar11 = *(undefined8 *)PTR_DAT_03d098d0;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_029f3248;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)puVar3,1);
LAB_029f3248:
    (*(code *)*puVar7)(plVar10,uVar11,plVar4,puVar7[1]);
  }
  *(undefined1 *)(unaff_x19 + 0x80) = 1;
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


