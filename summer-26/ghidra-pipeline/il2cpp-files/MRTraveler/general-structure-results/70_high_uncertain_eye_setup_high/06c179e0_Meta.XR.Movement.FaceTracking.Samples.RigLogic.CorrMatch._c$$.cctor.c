/*
FUNCTION_NAME: Meta.XR.Movement.FaceTracking.Samples.RigLogic.CorrMatch.<>c$$.cctor
ENTRY_POINT: 06c179e0
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


void Meta_XR_Movement_FaceTracking_Samples_RigLogic_CorrMatch_<>c___cctor(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int unaff_w19;
  int iVar16;
  int iVar17;
  uint unaff_w21;
  long *unaff_x22;
  int unaff_w23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar18;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
  do {
    lVar6 = FUN_05212a24(param_1,unaff_w19,*unaff_x24);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) goto LAB_06c18310;
    lVar13 = *(long *)(*unaff_x28 + 0xb8);
    if (*(long *)(lVar13 + 0x28) == 0) goto LAB_06c18310;
    if (*(int *)(*(long *)(lVar13 + 0x28) + 0x18) + -1 == *(int *)(*(long *)(lVar6 + 0x18) + 0x18))
    {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar13 = *(long *)(*unaff_x28 + 0xb8);
      }
      if (*(long *)(lVar13 + 8) == 0) goto LAB_06c18310;
      lVar6 = *(long *)(lVar13 + 0x10);
      uVar7 = FUN_05212a24(*(long *)(lVar13 + 8),unaff_w19,*unaff_x24);
      if (lVar6 == 0) goto LAB_06c18310;
      lVar13 = *(long *)(lVar6 + 0x10);
      lVar15 = *unaff_x22;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_06c18310;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4(lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
        ;
      }
    }
    else {
      unaff_w21 = 1;
    }
    unaff_w19 = unaff_w19 + 1;
    while( true ) {
      if (unaff_w23 < unaff_w19) {
        lVar6 = *unaff_x28;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar6 = *unaff_x28;
        }
        lVar13 = *(long *)(lVar6 + 0xb8);
        if (*(long *)(lVar13 + 0x10) == 0) goto LAB_06c18310;
        iVar17 = *(int *)(*(long *)(lVar13 + 0x10) + 0x18);
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar13 = *(long *)(*unaff_x28 + 0xb8);
        }
        lVar6 = *(long *)(lVar13 + 0x28);
        if (lVar6 == 0) goto LAB_06c18310;
        if (iVar17 != 0) {
          plVar8 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,*(int *)(lVar6 + 0x18) + -1)
          ;
          puVar5 = PTR_DAT_08e87d40;
          puVar4 = PTR_DAT_08e80b78;
          iVar17 = 0;
          uVar7 = 0;
          lVar6 = 0;
          goto LAB_06c17b50;
        }
        lVar6 = FUN_05212a24(lVar6,0,*unaff_x29);
        FUN_06c1558c(lVar6,unaff_w21 & 1 ^ 1,*(undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 0x10));
        puVar4 = PTR_DAT_08e87b78;
        lVar13 = *unaff_x28;
        lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
        if (lVar15 == 0) goto LAB_06c18310;
        if (*(int *)(lVar15 + 0x18) == 0) {
          uVar9 = FUN_06f7465c(*(undefined8 *)PTR_DAT_08e87bf8,lVar6,*(undefined8 *)PTR_DAT_08e82af0
                               ,0);
          lVar6 = *(long *)PTR_DAT_08e69670;
          iVar17 = *(int *)(lVar6 + 0xe0);
          goto joined_r0x06c1808c;
        }
        if (lVar6 == 0) goto LAB_06c18310;
        iVar16 = 0;
        iVar17 = *(int *)(lVar6 + 0x10) + 0x4b;
        goto LAB_06c17e0c;
      }
      lVar6 = *unaff_x28;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar6 = *unaff_x28;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if ((lVar6 == 0) || (lVar6 = FUN_05212a24(lVar6,unaff_w19,*unaff_x24), lVar6 == 0))
      goto LAB_06c18310;
      uVar12 = FUN_06c12174();
      lVar6 = *unaff_x28;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar6);
        lVar6 = *unaff_x28;
      }
      param_1 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (param_1 == 0) goto LAB_06c18310;
      if ((uVar12 & 1) != 0) break;
      FUN_052143ec(param_1,unaff_w19,*unaff_x25);
      unaff_w23 = unaff_w23 + -1;
    }
  } while( true );
LAB_06c17b50:
  lVar13 = *unaff_x28;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar13 = *unaff_x28;
  }
  lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
  if (lVar15 == 0) goto LAB_06c18310;
  if (*(int *)(lVar15 + 0x18) <= iVar17) {
    if (lVar6 == 0) {
      uVar12 = FUN_06f74e14(uVar7,0);
      lVar6 = *(long *)PTR_DAT_08e69670;
      iVar17 = *(int *)(lVar6 + 0xe0);
      uVar9 = *(undefined8 *)PTR_DAT_08e87d48;
      if ((uVar12 & 1) == 0) {
        uVar9 = uVar7;
      }
joined_r0x06c1808c:
      if (iVar17 == 0) {
        thunk_FUN_03cd7500(lVar6);
      }
      FUN_085a48e4(uVar9,0);
      return;
    }
LAB_06c17e88:
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_06c18310;
    plVar11 = (long *)FUN_0702dc3c(*(long *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x20),plVar8,0);
    plVar14 = *(long **)(lVar6 + 0x10);
    if (plVar14 == (long *)0x0) goto LAB_06c18310;
    uVar7 = (**(code **)(*plVar14 + 0x408))(plVar14,*(undefined8 *)(*plVar14 + 0x410));
    uVar9 = *(undefined8 *)PTR_DAT_08e81430;
    if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
    }
    uVar9 = FUN_0710fcf0(uVar9,0);
    uVar12 = FUN_0711a11c(uVar7,uVar9,0);
    if ((uVar12 & 1) != 0) {
      if ((plVar11 == (long *)0x0) ||
         (uVar12 = (**(code **)(*plVar11 + 0x138))(plVar11,0,*(undefined8 *)(*plVar11 + 0x140)),
         (uVar12 & 1) != 0)) {
        if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar7 = *(undefined8 *)PTR_DAT_08e87d78;
      }
      else {
        uVar7 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        uVar7 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e87d70,uVar7,0);
        if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
        }
      }
      FUN_085a3c50(uVar7,0);
    }
    lVar13 = *unaff_x28;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar13 = *unaff_x28;
    }
    lVar15 = **(long **)(lVar13 + 0xb8);
    if (lVar15 == 0) {
      return;
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar15 = **(long **)(*unaff_x28 + 0xb8);
      if (lVar15 == 0) goto LAB_06c18310;
    }
    (**(code **)(lVar15 + 0x18))
              (*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(lVar6 + 0x28),plVar8,
               *(undefined8 *)(lVar15 + 0x28));
    return;
  }
  if (lVar6 != 0) goto LAB_06c17e88;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar15 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
    if (lVar15 == 0) goto LAB_06c18310;
  }
  lVar6 = FUN_05212a24(lVar15,iVar17,*(undefined8 *)PTR_DAT_08e87b78);
  if ((lVar6 == 0) || (lVar13 = *(long *)(lVar6 + 0x18), lVar13 == 0)) goto LAB_06c18310;
  bVar2 = true;
  uVar12 = 0;
  while ((bVar2 && ((long)uVar12 < (long)*(int *)(lVar13 + 0x18)))) {
    lVar13 = *unaff_x28;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar13 = *unaff_x28;
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x28);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar9 = FUN_05212a24(lVar13,uVar12 + 1 & 0xffffffff,*unaff_x29);
    lVar13 = *(long *)(lVar6 + 0x18);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    uVar18 = *(undefined8 *)(lVar13 + uVar12 * 8 + 0x20);
    uVar10 = FUN_06c185e4(uVar9,uVar18,&stack0x00000008);
    lVar13 = in_stack_00000008;
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar7 = FUN_06c16d78(uVar18);
      uVar7 = FUN_06f74e30(*(undefined8 *)puVar5,uVar9,*(undefined8 *)puVar4,uVar7,0);
      bVar2 = false;
    }
    else {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if ((in_stack_00000008 != 0) &&
         (lVar15 = thunk_FUN_03cf5138(in_stack_00000008,*(undefined8 *)(*plVar8 + 0x40)),
         lVar15 == 0)) {
        uVar7 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar7,0);
      }
      if (*(uint *)(plVar8 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      plVar8[uVar12 + 4] = lVar13;
      thunk_FUN_03d233cc(plVar8 + uVar12 + 4,lVar13);
      bVar2 = true;
    }
    lVar13 = *(long *)(lVar6 + 0x18);
    uVar12 = uVar12 + 1;
    if (lVar13 == 0) goto LAB_06c18310;
  }
  if (!bVar2) {
    lVar6 = 0;
  }
  iVar17 = iVar17 + 1;
  goto LAB_06c17b50;
LAB_06c17e0c:
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar13 = *unaff_x28;
  }
  lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
  if (lVar15 == 0) goto LAB_06c18310;
  if (*(int *)(lVar15 + 0x18) <= iVar16) {
    plVar8 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6a338);
    FUN_06f7c298(plVar8,iVar17,0);
    if (plVar8 == (long *)0x0) goto LAB_06c18310;
    if ((unaff_w21 & 1) == 0) {
      lVar13 = FUN_06f7c2f0(plVar8,*(undefined8 *)PTR_DAT_08e87bf8,0);
      if (lVar13 == 0) goto LAB_06c18310;
      lVar6 = FUN_06f7c2f0(lVar13,lVar6,0);
      puVar3 = (undefined8 *)PTR_DAT_08e87d50;
    }
    else {
      lVar13 = FUN_06f7c2f0(plVar8,*(undefined8 *)PTR_DAT_08e87d58,0);
      if ((lVar13 == 0) || (lVar6 = FUN_06f7c2f0(lVar13,lVar6,0), lVar6 == 0)) goto LAB_06c18310;
      lVar6 = FUN_06f7c2f0(lVar6,*(undefined8 *)PTR_DAT_08e87d60,0);
      lVar13 = *unaff_x28;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar13);
        lVar13 = *unaff_x28;
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x28);
      if ((lVar13 == 0) || (lVar6 == 0)) goto LAB_06c18310;
      lVar6 = FUN_06f85304(lVar6,*(int *)(lVar13 + 0x18) + -1,0);
      puVar3 = (undefined8 *)PTR_DAT_08e87d68;
    }
    if (lVar6 != 0) {
      FUN_06f7c2f0(lVar6,*puVar3,0);
      puVar5 = PTR_DAT_08e87bb8;
      iVar17 = 0;
      goto LAB_06c180e0;
    }
    goto LAB_06c18310;
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar15 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
    if (lVar15 == 0) goto LAB_06c18310;
  }
  lVar15 = FUN_05212a24(lVar15,iVar16,*(undefined8 *)puVar4);
  if ((lVar15 == 0) || (*(long *)(lVar15 + 0x30) == 0)) goto LAB_06c18310;
  lVar13 = *unaff_x28;
  iVar16 = iVar16 + 1;
  iVar17 = iVar17 + *(int *)(*(long *)(lVar15 + 0x30) + 0x10) + 7;
  goto LAB_06c17e0c;
LAB_06c180e0:
  lVar6 = *unaff_x28;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar6 = *unaff_x28;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar6 == 0) goto LAB_06c18310;
  if (*(int *)(lVar6 + 0x18) <= iVar17) {
    uVar7 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
    }
    FUN_085a48e4(uVar7,0);
    if (DAT_09418fe9 == '\0') {
      FUN_03c8f898(PTR_DAT_08e87bc8);
      DAT_09418fe9 = '\x01';
    }
    puVar4 = PTR_DAT_08e87bc8;
    uVar7 = **(undefined8 **)(*(long *)PTR_DAT_08e87bc8 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar12 = FUN_085e285c(uVar7,0);
    if ((uVar12 & 1) == 0) {
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
LAB_06c18310:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar6 = FUN_06f7c2f0(plVar8,*(undefined8 *)puVar5,0);
  lVar13 = *unaff_x28;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar13);
    lVar13 = *unaff_x28;
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
  if (((lVar13 == 0) || (lVar13 = FUN_05212a24(lVar13,iVar17,*(undefined8 *)puVar4), lVar13 == 0))
     || (lVar6 == 0)) goto LAB_06c18310;
  FUN_06f7c2f0(lVar6,*(undefined8 *)(lVar13 + 0x30),0);
  iVar17 = iVar17 + 1;
  goto LAB_06c180e0;
}


