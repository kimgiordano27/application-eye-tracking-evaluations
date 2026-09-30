/*
FUNCTION_NAME: RootMotion.Demos.UserControlAI$$OnDrawGizmos
ENTRY_POINT: 029f2e78
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

void RootMotion_Demos_UserControlAI__OnDrawGizmos(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  undefined4 unaff_w22;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  FUN_021dca68(param_1,unaff_w22,*(undefined8 *)PTR_DAT_03d098a8);
  *(undefined8 *)(unaff_x19 + 0x68) = param_1;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x68),param_1);
  uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d09890);
  FUN_021c7ea0(uVar4,0x32,*(undefined8 *)PTR_DAT_03d098c8,unaff_w22,*(undefined8 *)PTR_DAT_03d09888)
  ;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x38),uVar4);
  puVar1 = PTR_DAT_03cbeb18;
  plVar11 = *(long **)(unaff_x19 + 0x78);
  plVar5 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,3);
  puVar2 = PTR_DAT_03cbeda8;
  uStack0000000000000008 = unaff_w22;
  lVar6 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000008);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
    uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,0);
  }
  if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar5[4] = lVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 4,lVar6);
  uStack0000000000000004 = *(undefined4 *)(unaff_x19 + 0x70);
  lVar6 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&stack0x00000004);
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
    uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,0);
  }
  if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar5[5] = lVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 5,lVar6);
  lVar6 = thunk_FUN_01a89a98(*(undefined8 *)puVar2);
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
    uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,0);
  }
  if (*(uint *)(plVar5 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar5[6] = lVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 6,lVar6);
  puVar3 = PTR_DAT_03ccf278;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar6 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
  uVar4 = *(undefined8 *)PTR_DAT_03d098d8;
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03ccf278) {
        puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
        goto LAB_029f30a0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_01a472ec(plVar11,*(long *)PTR_DAT_03ccf278,2);
LAB_029f30a0:
  (*(code *)*puVar8)(plVar11,uVar4,plVar5,puVar8[1]);
  if (*(char *)(unaff_x19 + 0x26) == '\0') {
    uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c00);
    FUN_027d737c();
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c08);
    FUN_027e22f4(lVar6,uVar4,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_027e2600(lVar6,0);
    FUN_029e4c9c(lVar6,*(undefined8 *)PTR_DAT_03d098c0);
  }
  if (*(int *)(unaff_x19 + 0x70) != *(int *)(unaff_x19 + 0x4c)) {
    plVar11 = *(long **)(unaff_x19 + 0x78);
    plVar5 = (long *)FUN_01ab6a94(*(undefined8 *)puVar1,2);
    uStack0000000000000008 = *(undefined4 *)(unaff_x19 + 0x70);
    lVar6 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&stack0x00000008);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
      uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,0);
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar5[4] = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 4,lVar6);
    uStack0000000000000004 = *(undefined4 *)(unaff_x19 + 0x4c);
    lVar6 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&stack0x00000004);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
      uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,0);
    }
    if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar5[5] = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 5,lVar6);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    uVar4 = *(undefined8 *)PTR_DAT_03d098d0;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_029f3248;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(plVar11,*(long *)puVar3,1);
LAB_029f3248:
    (*(code *)*puVar8)(plVar11,uVar4,plVar5,puVar8[1]);
  }
  *(undefined1 *)(unaff_x19 + 0x80) = 1;
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


