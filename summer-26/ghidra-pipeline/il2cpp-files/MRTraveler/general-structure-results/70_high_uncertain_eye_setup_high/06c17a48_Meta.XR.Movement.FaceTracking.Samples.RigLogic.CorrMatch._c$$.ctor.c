/*
FUNCTION_NAME: Meta.XR.Movement.FaceTracking.Samples.RigLogic.CorrMatch.<>c$$.ctor
ENTRY_POINT: 06c17a48
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Movement_FaceTracking_Samples_RigLogic_CorrMatch_<>c___ctor(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int unaff_w19;
  int iVar15;
  int iVar16;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  int unaff_w23;
  undefined8 *unaff_x24;
  undefined8 uVar17;
  undefined8 *unaff_x25;
  undefined8 uVar18;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
  while (unaff_x20 != 0) {
    lVar11 = *(long *)(unaff_x20 + 0x10);
    lVar14 = *unaff_x22;
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = param_1;
      thunk_FUN_03d233cc();
    }
    else {
      FUN_05212cf4(unaff_x20,param_1,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    while( true ) {
      unaff_w19 = unaff_w19 + 1;
      while( true ) {
        if (unaff_w23 < unaff_w19) {
          lVar11 = *unaff_x28;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar11 = *unaff_x28;
          }
          lVar14 = *(long *)(lVar11 + 0xb8);
          if (*(long *)(lVar14 + 0x10) == 0) goto LAB_06c18310;
          iVar16 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18);
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar14 = *(long *)(*unaff_x28 + 0xb8);
          }
          lVar11 = *(long *)(lVar14 + 0x28);
          if (lVar11 == 0) goto LAB_06c18310;
          if (iVar16 != 0) {
            plVar6 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,
                                          *(int *)(lVar11 + 0x18) + -1);
            puVar5 = PTR_DAT_08e87d40;
            puVar4 = PTR_DAT_08e80b78;
            iVar16 = 0;
            uVar17 = 0;
            lVar11 = 0;
            goto LAB_06c17b50;
          }
          lVar11 = FUN_05212a24(lVar11,0,*unaff_x29);
          FUN_06c1558c(lVar11,unaff_w21 & 1 ^ 1,*(undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 0x10)
                      );
          puVar4 = PTR_DAT_08e87b78;
          lVar14 = *unaff_x28;
          lVar12 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
          if (lVar12 == 0) goto LAB_06c18310;
          if (*(int *)(lVar12 + 0x18) == 0) {
            uVar7 = FUN_06f7465c(*(undefined8 *)PTR_DAT_08e87bf8,lVar11,
                                 *(undefined8 *)PTR_DAT_08e82af0,0);
            lVar11 = *(long *)PTR_DAT_08e69670;
            iVar16 = *(int *)(lVar11 + 0xe0);
            goto joined_r0x06c1808c;
          }
          if (lVar11 == 0) goto LAB_06c18310;
          iVar15 = 0;
          iVar16 = *(int *)(lVar11 + 0x10) + 0x4b;
          goto LAB_06c17e0c;
        }
        lVar11 = *unaff_x28;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar11 = *unaff_x28;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
        if ((lVar11 == 0) || (lVar11 = FUN_05212a24(lVar11,unaff_w19,*unaff_x24), lVar11 == 0))
        goto LAB_06c18310;
        uVar10 = FUN_06c12174();
        lVar11 = *unaff_x28;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar11);
          lVar11 = *unaff_x28;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
        if (lVar11 == 0) goto LAB_06c18310;
        if ((uVar10 & 1) != 0) break;
        FUN_052143ec(lVar11,unaff_w19,*unaff_x25);
        unaff_w23 = unaff_w23 + -1;
      }
      lVar11 = FUN_05212a24(lVar11,unaff_w19,*unaff_x24);
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x18) == 0)) goto LAB_06c18310;
      lVar14 = *(long *)(*unaff_x28 + 0xb8);
      if (*(long *)(lVar14 + 0x28) == 0) goto LAB_06c18310;
      if (*(int *)(*(long *)(lVar14 + 0x28) + 0x18) + -1 ==
          *(int *)(*(long *)(lVar11 + 0x18) + 0x18)) break;
      unaff_w21 = 1;
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar14 = *(long *)(*unaff_x28 + 0xb8);
    }
    if (*(long *)(lVar14 + 8) == 0) break;
    unaff_x20 = *(long *)(lVar14 + 0x10);
    param_1 = FUN_05212a24(*(long *)(lVar14 + 8),unaff_w19,*unaff_x24);
  }
LAB_06c18310:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06c17b50:
  lVar14 = *unaff_x28;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar14 = *unaff_x28;
  }
  lVar12 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
  if (lVar12 == 0) goto LAB_06c18310;
  if (*(int *)(lVar12 + 0x18) <= iVar16) {
    if (lVar11 == 0) {
      uVar10 = FUN_06f74e14(uVar17,0);
      lVar11 = *(long *)PTR_DAT_08e69670;
      iVar16 = *(int *)(lVar11 + 0xe0);
      uVar7 = *(undefined8 *)PTR_DAT_08e87d48;
      if ((uVar10 & 1) == 0) {
        uVar7 = uVar17;
      }
joined_r0x06c1808c:
      if (iVar16 == 0) {
        thunk_FUN_03cd7500(lVar11);
      }
      FUN_085a48e4(uVar7,0);
      return;
    }
LAB_06c17e88:
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_06c18310;
    plVar9 = (long *)FUN_0702dc3c(*(long *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x20),plVar6,0);
    plVar13 = *(long **)(lVar11 + 0x10);
    if (plVar13 == (long *)0x0) goto LAB_06c18310;
    uVar17 = (**(code **)(*plVar13 + 0x408))(plVar13,*(undefined8 *)(*plVar13 + 0x410));
    uVar7 = *(undefined8 *)PTR_DAT_08e81430;
    if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
    }
    uVar7 = FUN_0710fcf0(uVar7,0);
    uVar10 = FUN_0711a11c(uVar17,uVar7,0);
    if ((uVar10 & 1) != 0) {
      if ((plVar9 == (long *)0x0) ||
         (uVar10 = (**(code **)(*plVar9 + 0x138))(plVar9,0,*(undefined8 *)(*plVar9 + 0x140)),
         (uVar10 & 1) != 0)) {
        if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar17 = *(undefined8 *)PTR_DAT_08e87d78;
      }
      else {
        uVar17 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        uVar17 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e87d70,uVar17,0);
        if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
        }
      }
      FUN_085a3c50(uVar17,0);
    }
    lVar14 = *unaff_x28;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar14 = *unaff_x28;
    }
    lVar12 = **(long **)(lVar14 + 0xb8);
    if (lVar12 == 0) {
      return;
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar12 = **(long **)(*unaff_x28 + 0xb8);
      if (lVar12 == 0) goto LAB_06c18310;
    }
    (**(code **)(lVar12 + 0x18))
              (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar11 + 0x28),plVar6,
               *(undefined8 *)(lVar12 + 0x28));
    return;
  }
  if (lVar11 != 0) goto LAB_06c17e88;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar12 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
    if (lVar12 == 0) goto LAB_06c18310;
  }
  lVar11 = FUN_05212a24(lVar12,iVar16,*(undefined8 *)PTR_DAT_08e87b78);
  if ((lVar11 == 0) || (lVar14 = *(long *)(lVar11 + 0x18), lVar14 == 0)) goto LAB_06c18310;
  bVar2 = true;
  uVar10 = 0;
  while ((bVar2 && ((long)uVar10 < (long)*(int *)(lVar14 + 0x18)))) {
    lVar14 = *unaff_x28;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar14 = *unaff_x28;
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x28);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar7 = FUN_05212a24(lVar14,uVar10 + 1 & 0xffffffff,*unaff_x29);
    lVar14 = *(long *)(lVar11 + 0x18);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    uVar18 = *(undefined8 *)(lVar14 + uVar10 * 8 + 0x20);
    uVar8 = FUN_06c185e4(uVar7,uVar18,&stack0x00000008);
    lVar14 = in_stack_00000008;
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar17 = FUN_06c16d78(uVar18);
      uVar17 = FUN_06f74e30(*(undefined8 *)puVar5,uVar7,*(undefined8 *)puVar4,uVar17,0);
      bVar2 = false;
    }
    else {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if ((in_stack_00000008 != 0) &&
         (lVar12 = thunk_FUN_03cf5138(in_stack_00000008,*(undefined8 *)(*plVar6 + 0x40)),
         lVar12 == 0)) {
        uVar17 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar17,0);
      }
      if (*(uint *)(plVar6 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      plVar6[uVar10 + 4] = lVar14;
      thunk_FUN_03d233cc(plVar6 + uVar10 + 4,lVar14);
      bVar2 = true;
    }
    lVar14 = *(long *)(lVar11 + 0x18);
    uVar10 = uVar10 + 1;
    if (lVar14 == 0) goto LAB_06c18310;
  }
  if (!bVar2) {
    lVar11 = 0;
  }
  iVar16 = iVar16 + 1;
  goto LAB_06c17b50;
LAB_06c17e0c:
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar14 = *unaff_x28;
  }
  lVar12 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
  if (lVar12 == 0) goto LAB_06c18310;
  if (*(int *)(lVar12 + 0x18) <= iVar15) {
    plVar6 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6a338);
    FUN_06f7c298(plVar6,iVar16,0);
    if (plVar6 == (long *)0x0) goto LAB_06c18310;
    if ((unaff_w21 & 1) == 0) {
      lVar14 = FUN_06f7c2f0(plVar6,*(undefined8 *)PTR_DAT_08e87bf8,0);
      if (lVar14 == 0) goto LAB_06c18310;
      lVar11 = FUN_06f7c2f0(lVar14,lVar11,0);
      puVar3 = (undefined8 *)PTR_DAT_08e87d50;
    }
    else {
      lVar14 = FUN_06f7c2f0(plVar6,*(undefined8 *)PTR_DAT_08e87d58,0);
      if ((lVar14 == 0) || (lVar11 = FUN_06f7c2f0(lVar14,lVar11,0), lVar11 == 0)) goto LAB_06c18310;
      lVar11 = FUN_06f7c2f0(lVar11,*(undefined8 *)PTR_DAT_08e87d60,0);
      lVar14 = *unaff_x28;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar14);
        lVar14 = *unaff_x28;
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x28);
      if ((lVar14 == 0) || (lVar11 == 0)) goto LAB_06c18310;
      lVar11 = FUN_06f85304(lVar11,*(int *)(lVar14 + 0x18) + -1,0);
      puVar3 = (undefined8 *)PTR_DAT_08e87d68;
    }
    if (lVar11 != 0) {
      FUN_06f7c2f0(lVar11,*puVar3,0);
      puVar5 = PTR_DAT_08e87bb8;
      iVar16 = 0;
      goto LAB_06c180e0;
    }
    goto LAB_06c18310;
  }
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar12 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
    if (lVar12 == 0) goto LAB_06c18310;
  }
  lVar12 = FUN_05212a24(lVar12,iVar15,*(undefined8 *)puVar4);
  if ((lVar12 == 0) || (*(long *)(lVar12 + 0x30) == 0)) goto LAB_06c18310;
  lVar14 = *unaff_x28;
  iVar15 = iVar15 + 1;
  iVar16 = iVar16 + *(int *)(*(long *)(lVar12 + 0x30) + 0x10) + 7;
  goto LAB_06c17e0c;
LAB_06c180e0:
  lVar11 = *unaff_x28;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar11 = *unaff_x28;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
  if (lVar11 == 0) goto LAB_06c18310;
  if (*(int *)(lVar11 + 0x18) <= iVar16) {
    uVar17 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
    }
    FUN_085a48e4(uVar17,0);
    if (DAT_09418fe9 == '\0') {
      FUN_03c8f898(PTR_DAT_08e87bc8);
      DAT_09418fe9 = '\x01';
    }
    puVar4 = PTR_DAT_08e87bc8;
    uVar17 = **(undefined8 **)(*(long *)PTR_DAT_08e87bc8 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar10 = FUN_085e285c(uVar17,0);
    if ((uVar10 & 1) == 0) {
      return;
    }
    if (DAT_09418fe9 == '\0') {
      FUN_03c8f898(PTR_DAT_08e87bc8);
      DAT_09418fe9 = '\x01';
    }
    if (**(long **)(*(long *)puVar4 + 0xb8) != 0) {
      FUN_06c14f7c(**(long **)(*(long *)puVar4 + 0xb8),1,1);
      return;
    }
    goto LAB_06c18310;
  }
  lVar11 = FUN_06f7c2f0(plVar6,*(undefined8 *)puVar5,0);
  lVar14 = *unaff_x28;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar14);
    lVar14 = *unaff_x28;
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
  if (((lVar14 == 0) || (lVar14 = FUN_05212a24(lVar14,iVar16,*(undefined8 *)puVar4), lVar14 == 0))
     || (lVar11 == 0)) goto LAB_06c18310;
  FUN_06f7c2f0(lVar11,*(undefined8 *)(lVar14 + 0x30),0);
  iVar16 = iVar16 + 1;
  goto LAB_06c180e0;
}


