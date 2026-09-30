/*
FUNCTION_NAME: OVRPlugin$$SetSpaceComponentStatus
ENTRY_POINT: 0575aa34
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__SetSpaceComponentStatus
          (ulong param_1,undefined8 param_2,long *param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined *puVar13;
  
  puVar14 = *(undefined8 **)(unaff_x21 + 0x7a0);
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d576a8);
    FUN_02f07e70(PTR_DAT_06d597a8);
    FUN_02f07e70(PTR_DAT_06d59778);
    FUN_02f07e70(PTR_DAT_06d586b0);
    FUN_02f07e70(PTR_DAT_06d37b78);
    FUN_02f07e70(PTR_DAT_06d02bd0);
    FUN_02f07e70(PTR_DAT_06d59780);
    FUN_02f07e70(PTR_DAT_06d597b0);
    FUN_02f07e70(PTR_DAT_06d597a0);
    FUN_02f07e70(PTR_DAT_06d59790);
    FUN_02f07e70(PTR_DAT_06d59798);
    *(undefined1 *)(unaff_x20 + 0xa77) = 1;
  }
  lVar6 = thunk_FUN_02ef1808(*puVar14);
  FUN_05645a04(lVar6,0);
  if (param_3 == (long *)0x0) {
LAB_0575af20:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  iVar5 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
  if (iVar5 == 0xb) {
    return 0;
  }
  if (lVar6 == 0) goto LAB_0575af20;
  puVar14 = (undefined8 *)(lVar6 + 0x10);
  *puVar14 = 0;
  thunk_FUN_02f411dc(puVar14,0);
  FUN_05698e6c(param_3,0);
  iVar5 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
  puVar4 = PTR_DAT_06d59790;
  puVar3 = PTR_DAT_06d576a8;
  puVar13 = PTR_DAT_06d37b78;
  if (iVar5 == 4) {
    lVar17 = 0;
    plVar16 = (long *)0x0;
    do {
      plVar7 = (long *)(**(code **)(*param_3 + 0x248))(param_3,*(undefined8 *)(*param_3 + 0x250));
      if (plVar7 == (long *)0x0) goto LAB_0575af20;
      uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      uVar9 = FUN_05464bbc(uVar8,*(undefined8 *)puVar4,5,0);
      if ((uVar9 & 1) == 0) {
        uVar9 = FUN_05464bbc(uVar8,*(undefined8 *)PTR_DAT_06d59798,5,0);
        if ((uVar9 & 1) == 0) {
          thunk_FUN_02f239f0(PTR_DAT_06d06338);
          FUN_02a55ad4();
          uVar11 = FUN_055b5920(0);
          uVar12 = thunk_FUN_02f239f0(PTR_DAT_06d597c0);
          goto LAB_0575afa0;
        }
        FUN_05698e6c(param_3,0);
        iVar5 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
        if (iVar5 != 2) {
          uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d597c8);
          goto LAB_0575afb8;
        }
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        plVar16 = (long *)FUN_05743890(param_3,0);
        if (plVar16 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_06d586b0 + 0x130);
          if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_06d586b0)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar16);
          }
        }
      }
      else {
        FUN_05698e6c(param_3,0);
        lVar17 = *(long *)puVar3;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar17 = *(long *)puVar3;
        }
        if (**(long **)(lVar17 + 0xb8) == 0) goto LAB_0575af20;
        lVar17 = FUN_046e8380(**(long **)(lVar17 + 0xb8),param_4,*(undefined8 *)PTR_DAT_06d59780);
        plVar7 = (long *)(**(code **)(*param_3 + 0x248))(param_3,*(undefined8 *)(*param_3 + 0x250));
        if (plVar7 == (long *)0x0) goto LAB_0575af20;
        uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        *puVar14 = uVar8;
        thunk_FUN_02f411dc(puVar14,uVar8);
        if (lVar17 == 0) goto LAB_0575af20;
        lVar18 = *(long *)(lVar6 + 0x18);
        uVar8 = *(undefined8 *)(lVar17 + 0x18);
        if (lVar18 == 0) {
          lVar18 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d59778);
          FUN_0513bd28(lVar18,lVar6,*(undefined8 *)PTR_DAT_06d597b0,0);
          *(long *)(lVar6 + 0x18) = lVar18;
          thunk_FUN_02f411dc((long *)(lVar6 + 0x18),lVar18);
        }
        lVar17 = FUN_03a2d668(uVar8,lVar18,*(undefined8 *)PTR_DAT_06d597a8);
        if (lVar17 == 0) {
          thunk_FUN_02f239f0(PTR_DAT_06d06338);
          FUN_02a55ad4();
          uVar11 = FUN_055b5920(0);
          FUN_02a551a0(lVar6);
          uVar8 = *(undefined8 *)(lVar6 + 0x10);
          puVar13 = PTR_DAT_06d597b8;
          goto LAB_0575af60;
        }
      }
      FUN_05698e6c(param_3,0);
      iVar5 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
      puVar2 = PTR_DAT_06d02bd0;
    } while (iVar5 == 4);
    if (lVar17 == 0) goto LAB_0575aff0;
    if (*(long *)(lVar17 + 0x20) == 0) goto LAB_0575af20;
    plVar7 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,
                                  *(undefined4 *)(*(long *)(lVar17 + 0x20) + 0x18));
    lVar18 = *(long *)(lVar17 + 0x20);
    if (lVar18 == 0) goto LAB_0575af20;
    if ((plVar16 != (long *)0x0) || (*(long *)(lVar18 + 0x18) == 0)) {
      if (plVar16 != (long *)0x0) {
        iVar5 = FUN_0572fd34(plVar16,0);
        if (iVar5 != *(int *)(lVar18 + 0x18)) {
          thunk_FUN_02f239f0(PTR_DAT_06d06338);
          FUN_02a55ad4();
          uVar11 = FUN_055b5920(0);
          FUN_02a551a0(lVar6);
          uVar8 = *(undefined8 *)(lVar6 + 0x10);
          puVar13 = PTR_DAT_06d597e8;
LAB_0575af60:
          uVar12 = thunk_FUN_02f239f0(puVar13);
          goto LAB_0575afa0;
        }
        iVar5 = FUN_0572fd34(plVar16,0);
        if (0 < iVar5) {
          uVar9 = 0;
          plVar15 = plVar7 + 4;
          do {
            lVar6 = FUN_0572902c(plVar16,uVar9 & 0xffffffff,0);
            lVar18 = *(long *)(lVar17 + 0x20);
            if (lVar18 == 0) goto LAB_0575af20;
            if (*(uint *)(lVar18 + 0x18) <= (uint)uVar9) goto LAB_0575af24;
            plVar10 = *(long **)(lVar18 + uVar9 * 8 + 0x20);
            if (plVar10 == (long *)0x0) goto LAB_0575af20;
            uVar8 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
            if ((lVar6 == 0) || (lVar6 = FUN_05743620(lVar6,uVar8,param_6,0), plVar7 == (long *)0x0)
               ) goto LAB_0575af20;
            if ((lVar6 != 0) &&
               (lVar18 = thunk_FUN_02ef170c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar18 == 0))
            goto LAB_0575afe4;
            if (*(uint *)(plVar7 + 3) <= (uint)uVar9) goto LAB_0575af24;
            *plVar15 = lVar6;
            thunk_FUN_02f411dc(plVar15,lVar6);
            iVar5 = FUN_0572fd34(plVar16,0);
            uVar9 = uVar9 + 1;
            plVar15 = plVar15 + 1;
          } while ((int)uVar9 < iVar5);
        }
      }
      plVar16 = (long *)FUN_02f07f14(*(undefined8 *)puVar2,1);
      if (plVar16 != (long *)0x0) {
        if ((plVar7 != (long *)0x0) &&
           (lVar6 = thunk_FUN_02ef170c(plVar7,*(undefined8 *)(*plVar16 + 0x40)), lVar6 == 0)) {
LAB_0575afe4:
          uVar8 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
          FUN_02f07f94(uVar8,0);
        }
        if ((int)plVar16[3] == 0) {
LAB_0575af24:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        plVar16[4] = (long)plVar7;
        thunk_FUN_02f411dc(plVar16 + 4,plVar7);
        if (*(long *)(lVar17 + 0x30) != 0) {
          uVar8 = FUN_056e4c2c(*(long *)(lVar17 + 0x30),plVar16,0);
          return uVar8;
        }
      }
      goto LAB_0575af20;
    }
    thunk_FUN_02f239f0(PTR_DAT_06d06338);
    FUN_02a55ad4();
    uVar11 = FUN_055b5920(0);
    uVar12 = thunk_FUN_02f239f0(PTR_DAT_06d597e0);
    puVar13 = PTR_DAT_06d59798;
  }
  else {
LAB_0575aff0:
    thunk_FUN_02f239f0(PTR_DAT_06d06338);
    FUN_02a55ad4();
    uVar11 = FUN_055b5920(0);
    uVar12 = thunk_FUN_02f239f0(PTR_DAT_06d597d8);
    puVar13 = PTR_DAT_06d59790;
  }
  uVar8 = thunk_FUN_02f239f0(puVar13);
LAB_0575afa0:
  uVar8 = FUN_056f1630(uVar12,uVar11,uVar8,0);
LAB_0575afb8:
  uVar8 = FUN_05692378(param_3,uVar8,0);
  uVar11 = thunk_FUN_02f239f0(PTR_DAT_06d597d0);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar8,uVar11);
}


