/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatusInternal
ENTRY_POINT: 0575abdc
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceComponentStatusInternal(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar11;
  long *unaff_x19;
  ulong uVar12;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long lVar13;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  undefined *puVar10;
  
  while( true ) {
    lVar3 = *unaff_x29;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x29;
    }
    if (**(long **)(lVar3 + 0xb8) == 0) break;
    lVar3 = FUN_046e8380();
    plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar4 == (long *)0x0) break;
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    *unaff_x25 = uVar5;
    thunk_FUN_02f411dc();
    if (lVar3 == 0) break;
    lVar13 = *unaff_x26;
    uVar5 = *(undefined8 *)(lVar3 + 0x18);
    if (lVar13 == 0) {
      lVar13 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d59778);
      FUN_0513bd28();
      *(long *)(unaff_x21 + 0x18) = lVar13;
      thunk_FUN_02f411dc();
    }
    lVar3 = FUN_03a2d668(uVar5,lVar13,*(undefined8 *)PTR_DAT_06d597a8);
    if (lVar3 == 0) {
      thunk_FUN_02f239f0(PTR_DAT_06d06338);
      FUN_02a55ad4();
      uVar8 = FUN_055b5920(0);
      FUN_02a551a0();
      uVar5 = *(undefined8 *)(unaff_x21 + 0x10);
      puVar10 = PTR_DAT_06d597b8;
LAB_0575af60:
      uVar9 = thunk_FUN_02f239f0(puVar10);
LAB_0575afa0:
      FUN_056f1630(uVar9,uVar8,uVar5,0);
LAB_0575afb8:
      uVar5 = FUN_05692378();
      uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d597d0);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar5,uVar8);
    }
    while( true ) {
      FUN_05698e6c();
      iVar2 = (**(code **)(*unaff_x19 + 0x238))();
      puVar10 = PTR_DAT_06d02bd0;
      if (iVar2 != 4) {
        if (lVar3 == 0) {
          thunk_FUN_02f239f0(PTR_DAT_06d06338);
          FUN_02a55ad4();
          uVar8 = FUN_055b5920(0);
          uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d597d8);
          puVar10 = PTR_DAT_06d59790;
        }
        else {
          if (*(long *)(lVar3 + 0x20) == 0) goto LAB_0575af20;
          plVar4 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,
                                        *(undefined4 *)(*(long *)(lVar3 + 0x20) + 0x18));
          lVar13 = *(long *)(lVar3 + 0x20);
          if (lVar13 == 0) goto LAB_0575af20;
          if ((unaff_x23 != (long *)0x0) || (*(long *)(lVar13 + 0x18) == 0)) {
            if (unaff_x23 == (long *)0x0) goto LAB_0575aeac;
            iVar2 = FUN_0572fd34(unaff_x23,0);
            if (iVar2 != *(int *)(lVar13 + 0x18)) {
              thunk_FUN_02f239f0(PTR_DAT_06d06338);
              FUN_02a55ad4();
              uVar8 = FUN_055b5920(0);
              FUN_02a551a0();
              uVar5 = *(undefined8 *)(unaff_x21 + 0x10);
              puVar10 = PTR_DAT_06d597e8;
              goto LAB_0575af60;
            }
            iVar2 = FUN_0572fd34(unaff_x23,0);
            if (iVar2 < 1) goto LAB_0575aeac;
            uVar12 = 0;
            plVar7 = plVar4 + 4;
            goto LAB_0575adf4;
          }
          thunk_FUN_02f239f0(PTR_DAT_06d06338);
          FUN_02a55ad4();
          uVar8 = FUN_055b5920(0);
          uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d597e0);
          puVar10 = PTR_DAT_06d59798;
        }
        uVar5 = thunk_FUN_02f239f0(puVar10);
        goto LAB_0575afa0;
      }
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar4 == (long *)0x0) goto LAB_0575af20;
      uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar12 = FUN_05464bbc(uVar5,*unaff_x28,5,0);
      if ((uVar12 & 1) != 0) break;
      uVar12 = FUN_05464bbc(uVar5,*(undefined8 *)PTR_DAT_06d59798,5,0);
      if ((uVar12 & 1) == 0) {
        thunk_FUN_02f239f0(PTR_DAT_06d06338);
        FUN_02a55ad4();
        uVar8 = FUN_055b5920(0);
        uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d597c0);
        goto LAB_0575afa0;
      }
      FUN_05698e6c();
      iVar2 = (**(code **)(*unaff_x19 + 0x238))();
      if (iVar2 != 2) {
        thunk_FUN_02f239f0(PTR_DAT_06d597c8);
        goto LAB_0575afb8;
      }
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      unaff_x23 = (long *)FUN_05743890();
      if (unaff_x23 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06d586b0 + 0x130);
        if ((*(byte *)(*unaff_x23 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_06d586b0)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(unaff_x23);
        }
      }
    }
    FUN_05698e6c();
  }
  goto LAB_0575af20;
  while( true ) {
    if (*(uint *)(lVar11 + 0x18) <= (uint)uVar12) goto LAB_0575af24;
    plVar6 = *(long **)(lVar11 + uVar12 * 8 + 0x20);
    if (plVar6 == (long *)0x0) goto LAB_0575af20;
    uVar5 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
    if ((lVar13 == 0) ||
       (lVar13 = FUN_05743620(lVar13,uVar5,in_stack_00000008,0), plVar4 == (long *)0x0))
    goto LAB_0575af20;
    if ((lVar13 != 0) &&
       (lVar11 = thunk_FUN_02ef170c(lVar13,*(undefined8 *)(*plVar4 + 0x40)), lVar11 == 0))
    goto LAB_0575afe4;
    if (*(uint *)(plVar4 + 3) <= (uint)uVar12) goto LAB_0575af24;
    *plVar7 = lVar13;
    thunk_FUN_02f411dc(plVar7,lVar13);
    iVar2 = FUN_0572fd34(unaff_x23,0);
    uVar12 = uVar12 + 1;
    plVar7 = plVar7 + 1;
    if (iVar2 <= (int)uVar12) break;
LAB_0575adf4:
    lVar13 = FUN_0572902c(unaff_x23,uVar12 & 0xffffffff,0);
    lVar11 = *(long *)(lVar3 + 0x20);
    if (lVar11 == 0) goto LAB_0575af20;
  }
LAB_0575aeac:
  plVar7 = (long *)FUN_02f07f14(*(undefined8 *)puVar10,1);
  if (plVar7 != (long *)0x0) {
    if ((plVar4 != (long *)0x0) &&
       (lVar13 = thunk_FUN_02ef170c(plVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0)) {
LAB_0575afe4:
      uVar5 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar5,0);
    }
    if ((int)plVar7[3] == 0) {
LAB_0575af24:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    plVar7[4] = (long)plVar4;
    thunk_FUN_02f411dc(plVar7 + 4,plVar4);
    if (*(long *)(lVar3 + 0x30) != 0) {
      FUN_056e4c2c(*(long *)(lVar3 + 0x30),plVar7,0);
      return;
    }
  }
LAB_0575af20:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


