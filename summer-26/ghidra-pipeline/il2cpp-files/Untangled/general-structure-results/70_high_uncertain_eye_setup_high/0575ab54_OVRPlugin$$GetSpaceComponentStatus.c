/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatus
ENTRY_POINT: 0575ab54
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceComponentStatus(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar13;
  long *unaff_x19;
  long unaff_x21;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 *unaff_x25;
  long lVar17;
  undefined8 in_stack_00000008;
  undefined *puVar12;
  
  iVar5 = (**(code **)(*unaff_x19 + 0x238))();
  puVar4 = PTR_DAT_06d59790;
  puVar3 = PTR_DAT_06d576a8;
  puVar12 = PTR_DAT_06d37b78;
  if (iVar5 == 4) {
    lVar16 = 0;
    plVar15 = (long *)0x0;
    do {
      plVar6 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar6 == (long *)0x0) goto LAB_0575af20;
      uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      uVar8 = FUN_05464bbc(uVar7,*(undefined8 *)puVar4,5,0);
      if ((uVar8 & 1) == 0) {
        uVar8 = FUN_05464bbc(uVar7,*(undefined8 *)PTR_DAT_06d59798,5,0);
        if ((uVar8 & 1) == 0) {
          thunk_FUN_02f239f0(PTR_DAT_06d06338);
          FUN_02a55ad4();
          uVar10 = FUN_055b5920(0);
          uVar11 = thunk_FUN_02f239f0(PTR_DAT_06d597c0);
          goto LAB_0575afa0;
        }
        FUN_05698e6c();
        iVar5 = (**(code **)(*unaff_x19 + 0x238))();
        if (iVar5 != 2) {
          thunk_FUN_02f239f0(PTR_DAT_06d597c8);
          goto LAB_0575afb8;
        }
        if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        plVar15 = (long *)FUN_05743890();
        if (plVar15 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_06d586b0 + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_06d586b0)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar15);
          }
        }
      }
      else {
        FUN_05698e6c();
        lVar16 = *(long *)puVar3;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar16 = *(long *)puVar3;
        }
        if (**(long **)(lVar16 + 0xb8) == 0) goto LAB_0575af20;
        lVar16 = FUN_046e8380();
        plVar6 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar6 == (long *)0x0) goto LAB_0575af20;
        uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        *unaff_x25 = uVar7;
        thunk_FUN_02f411dc();
        if (lVar16 == 0) goto LAB_0575af20;
        lVar17 = *(long *)(unaff_x21 + 0x18);
        uVar7 = *(undefined8 *)(lVar16 + 0x18);
        if (lVar17 == 0) {
          lVar17 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d59778);
          FUN_0513bd28();
          *(long *)(unaff_x21 + 0x18) = lVar17;
          thunk_FUN_02f411dc((long *)(unaff_x21 + 0x18),lVar17);
        }
        lVar16 = FUN_03a2d668(uVar7,lVar17,*(undefined8 *)PTR_DAT_06d597a8);
        if (lVar16 == 0) {
          thunk_FUN_02f239f0(PTR_DAT_06d06338);
          FUN_02a55ad4();
          uVar10 = FUN_055b5920(0);
          FUN_02a551a0();
          uVar7 = *(undefined8 *)(unaff_x21 + 0x10);
          puVar12 = PTR_DAT_06d597b8;
          goto LAB_0575af60;
        }
      }
      FUN_05698e6c();
      iVar5 = (**(code **)(*unaff_x19 + 0x238))();
      puVar2 = PTR_DAT_06d02bd0;
    } while (iVar5 == 4);
    if (lVar16 == 0) goto LAB_0575aff0;
    if (*(long *)(lVar16 + 0x20) == 0) {
LAB_0575af20:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,
                                  *(undefined4 *)(*(long *)(lVar16 + 0x20) + 0x18));
    lVar17 = *(long *)(lVar16 + 0x20);
    if (lVar17 == 0) goto LAB_0575af20;
    if ((plVar15 != (long *)0x0) || (*(long *)(lVar17 + 0x18) == 0)) {
      if (plVar15 != (long *)0x0) {
        iVar5 = FUN_0572fd34(plVar15,0);
        if (iVar5 != *(int *)(lVar17 + 0x18)) {
          thunk_FUN_02f239f0(PTR_DAT_06d06338);
          FUN_02a55ad4();
          uVar10 = FUN_055b5920(0);
          FUN_02a551a0();
          uVar7 = *(undefined8 *)(unaff_x21 + 0x10);
          puVar12 = PTR_DAT_06d597e8;
LAB_0575af60:
          uVar11 = thunk_FUN_02f239f0(puVar12);
          goto LAB_0575afa0;
        }
        iVar5 = FUN_0572fd34(plVar15,0);
        if (0 < iVar5) {
          uVar8 = 0;
          plVar14 = plVar6 + 4;
          do {
            lVar17 = FUN_0572902c(plVar15,uVar8 & 0xffffffff,0);
            lVar13 = *(long *)(lVar16 + 0x20);
            if (lVar13 == 0) goto LAB_0575af20;
            if (*(uint *)(lVar13 + 0x18) <= (uint)uVar8) goto LAB_0575af24;
            plVar9 = *(long **)(lVar13 + uVar8 * 8 + 0x20);
            if (plVar9 == (long *)0x0) goto LAB_0575af20;
            uVar7 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
            if ((lVar17 == 0) ||
               (lVar17 = FUN_05743620(lVar17,uVar7,in_stack_00000008,0), plVar6 == (long *)0x0))
            goto LAB_0575af20;
            if ((lVar17 != 0) &&
               (lVar13 = thunk_FUN_02ef170c(lVar17,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0))
            goto LAB_0575afe4;
            if (*(uint *)(plVar6 + 3) <= (uint)uVar8) goto LAB_0575af24;
            *plVar14 = lVar17;
            thunk_FUN_02f411dc(plVar14,lVar17);
            iVar5 = FUN_0572fd34(plVar15,0);
            uVar8 = uVar8 + 1;
            plVar14 = plVar14 + 1;
          } while ((int)uVar8 < iVar5);
        }
      }
      plVar15 = (long *)FUN_02f07f14(*(undefined8 *)puVar2,1);
      if (plVar15 != (long *)0x0) {
        if ((plVar6 != (long *)0x0) &&
           (lVar17 = thunk_FUN_02ef170c(plVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0)) {
LAB_0575afe4:
          uVar7 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
          FUN_02f07f94(uVar7,0);
        }
        if ((int)plVar15[3] == 0) {
LAB_0575af24:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        plVar15[4] = (long)plVar6;
        thunk_FUN_02f411dc(plVar15 + 4,plVar6);
        if (*(long *)(lVar16 + 0x30) != 0) {
          FUN_056e4c2c(*(long *)(lVar16 + 0x30),plVar15,0);
          return;
        }
      }
      goto LAB_0575af20;
    }
    thunk_FUN_02f239f0(PTR_DAT_06d06338);
    FUN_02a55ad4();
    uVar10 = FUN_055b5920(0);
    uVar11 = thunk_FUN_02f239f0(PTR_DAT_06d597e0);
    puVar12 = PTR_DAT_06d59798;
  }
  else {
LAB_0575aff0:
    thunk_FUN_02f239f0(PTR_DAT_06d06338);
    FUN_02a55ad4();
    uVar10 = FUN_055b5920(0);
    uVar11 = thunk_FUN_02f239f0(PTR_DAT_06d597d8);
    puVar12 = PTR_DAT_06d59790;
  }
  uVar7 = thunk_FUN_02f239f0(puVar12);
LAB_0575afa0:
  FUN_056f1630(uVar11,uVar10,uVar7,0);
LAB_0575afb8:
  uVar7 = FUN_05692378();
  uVar10 = thunk_FUN_02f239f0(PTR_DAT_06d597d0);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar7,uVar10);
}


