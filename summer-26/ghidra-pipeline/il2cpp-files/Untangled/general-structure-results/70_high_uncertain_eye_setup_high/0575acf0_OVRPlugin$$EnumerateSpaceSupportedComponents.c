/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 0575acf0
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnumerateSpaceSupportedComponents(void)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  long lVar10;
  code *in_x9;
  long *unaff_x19;
  ulong uVar11;
  long *unaff_x20;
  long unaff_x21;
  long *plVar12;
  long unaff_x24;
  undefined8 *unaff_x25;
  long lVar13;
  long *unaff_x26;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  undefined *puVar8;
  
  do {
    iVar2 = (*in_x9)();
    if (iVar2 != 2) {
      thunk_FUN_02f239f0(PTR_DAT_06d597c8);
LAB_0575afb8:
      uVar6 = FUN_05692378();
      uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d597d0);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar6,uVar9);
    }
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    plVar3 = (long *)FUN_05743890();
    if (plVar3 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06d586b0 + 0x130);
      if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06d586b0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar3);
      }
    }
LAB_0575ad58:
    FUN_05698e6c();
    iVar2 = (**(code **)(*unaff_x19 + 0x238))();
    puVar8 = PTR_DAT_06d02bd0;
    if (iVar2 != 4) {
      if (unaff_x24 == 0) {
        thunk_FUN_02f239f0(PTR_DAT_06d06338);
        FUN_02a55ad4();
        uVar9 = FUN_055b5920(0);
        uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d597d8);
        puVar8 = PTR_DAT_06d59790;
LAB_0575b05c:
        uVar6 = thunk_FUN_02f239f0(puVar8);
        goto LAB_0575afa0;
      }
      if (*(long *)(unaff_x24 + 0x20) == 0) goto LAB_0575af20;
      plVar4 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,
                                    *(undefined4 *)(*(long *)(unaff_x24 + 0x20) + 0x18));
      lVar13 = *(long *)(unaff_x24 + 0x20);
      if (lVar13 == 0) goto LAB_0575af20;
      if ((plVar3 == (long *)0x0) && (*(long *)(lVar13 + 0x18) != 0)) {
        thunk_FUN_02f239f0(PTR_DAT_06d06338);
        FUN_02a55ad4();
        uVar9 = FUN_055b5920(0);
        uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d597e0);
        puVar8 = PTR_DAT_06d59798;
        goto LAB_0575b05c;
      }
      if (plVar3 == (long *)0x0) goto LAB_0575aeac;
      iVar2 = FUN_0572fd34(plVar3,0);
      if (iVar2 != *(int *)(lVar13 + 0x18)) {
        thunk_FUN_02f239f0(PTR_DAT_06d06338);
        FUN_02a55ad4();
        uVar9 = FUN_055b5920(0);
        FUN_02a551a0();
        uVar6 = *(undefined8 *)(unaff_x21 + 0x10);
        puVar8 = PTR_DAT_06d597e8;
        goto LAB_0575af60;
      }
      iVar2 = FUN_0572fd34(plVar3,0);
      if (iVar2 < 1) goto LAB_0575aeac;
      uVar11 = 0;
      plVar12 = plVar4 + 4;
      goto LAB_0575adf4;
    }
    plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar4 == (long *)0x0) goto LAB_0575af20;
    uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar11 = FUN_05464bbc(uVar6,*unaff_x28,5,0);
    if ((uVar11 & 1) != 0) {
      FUN_05698e6c();
      lVar13 = *unaff_x29;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar13 = *unaff_x29;
      }
      if (**(long **)(lVar13 + 0xb8) != 0) {
        lVar13 = FUN_046e8380();
        plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar4 != (long *)0x0) {
          uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          *unaff_x25 = uVar6;
          thunk_FUN_02f411dc();
          if (lVar13 != 0) break;
        }
      }
      goto LAB_0575af20;
    }
    uVar11 = FUN_05464bbc(uVar6,*(undefined8 *)PTR_DAT_06d59798,5,0);
    if ((uVar11 & 1) == 0) {
      thunk_FUN_02f239f0(PTR_DAT_06d06338);
      FUN_02a55ad4();
      uVar9 = FUN_055b5920(0);
      uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d597c0);
LAB_0575afa0:
      FUN_056f1630(uVar7,uVar9,uVar6,0);
      goto LAB_0575afb8;
    }
    FUN_05698e6c();
    in_x9 = *(code **)(*unaff_x19 + 0x238);
  } while( true );
  lVar10 = *unaff_x26;
  uVar6 = *(undefined8 *)(lVar13 + 0x18);
  if (lVar10 == 0) {
    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d59778);
    FUN_0513bd28();
    *(long *)(unaff_x21 + 0x18) = lVar10;
    thunk_FUN_02f411dc();
  }
  unaff_x24 = FUN_03a2d668(uVar6,lVar10,*(undefined8 *)PTR_DAT_06d597a8);
  if (unaff_x24 == 0) {
    thunk_FUN_02f239f0(PTR_DAT_06d06338);
    FUN_02a55ad4();
    uVar9 = FUN_055b5920(0);
    FUN_02a551a0();
    uVar6 = *(undefined8 *)(unaff_x21 + 0x10);
    puVar8 = PTR_DAT_06d597b8;
LAB_0575af60:
    uVar7 = thunk_FUN_02f239f0(puVar8);
    goto LAB_0575afa0;
  }
  goto LAB_0575ad58;
  while( true ) {
    if (*(uint *)(lVar10 + 0x18) <= (uint)uVar11) goto LAB_0575af24;
    plVar5 = *(long **)(lVar10 + uVar11 * 8 + 0x20);
    if (plVar5 == (long *)0x0) goto LAB_0575af20;
    uVar6 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    if ((lVar13 == 0) ||
       (lVar13 = FUN_05743620(lVar13,uVar6,in_stack_00000008,0), plVar4 == (long *)0x0))
    goto LAB_0575af20;
    if ((lVar13 != 0) &&
       (lVar10 = thunk_FUN_02ef170c(lVar13,*(undefined8 *)(*plVar4 + 0x40)), lVar10 == 0))
    goto LAB_0575afe4;
    if (*(uint *)(plVar4 + 3) <= (uint)uVar11) goto LAB_0575af24;
    *plVar12 = lVar13;
    thunk_FUN_02f411dc(plVar12,lVar13);
    iVar2 = FUN_0572fd34(plVar3,0);
    uVar11 = uVar11 + 1;
    plVar12 = plVar12 + 1;
    if (iVar2 <= (int)uVar11) break;
LAB_0575adf4:
    lVar13 = FUN_0572902c(plVar3,uVar11 & 0xffffffff,0);
    lVar10 = *(long *)(unaff_x24 + 0x20);
    if (lVar10 == 0) goto LAB_0575af20;
  }
LAB_0575aeac:
  plVar3 = (long *)FUN_02f07f14(*(undefined8 *)puVar8,1);
  if (plVar3 != (long *)0x0) {
    if ((plVar4 != (long *)0x0) &&
       (lVar13 = thunk_FUN_02ef170c(plVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar13 == 0)) {
LAB_0575afe4:
      uVar6 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar6,0);
    }
    if ((int)plVar3[3] == 0) {
LAB_0575af24:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    plVar3[4] = (long)plVar4;
    thunk_FUN_02f411dc(plVar3 + 4,plVar4);
    if (*(long *)(unaff_x24 + 0x30) != 0) {
      FUN_056e4c2c(*(long *)(unaff_x24 + 0x30),plVar3,0);
      return;
    }
  }
LAB_0575af20:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


