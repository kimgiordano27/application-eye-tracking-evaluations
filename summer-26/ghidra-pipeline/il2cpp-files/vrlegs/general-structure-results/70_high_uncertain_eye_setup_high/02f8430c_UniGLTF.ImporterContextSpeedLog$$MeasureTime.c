/*
FUNCTION_NAME: UniGLTF.ImporterContextSpeedLog$$MeasureTime
ENTRY_POINT: 02f8430c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f84a60) */
/* WARNING: Removing unreachable block (ram,0x02f8494c) */
/* WARNING: Removing unreachable block (ram,0x02f849e0) */
/* WARNING: Removing unreachable block (ram,0x02f84a7c) */

long * UniGLTF_ImporterContextSpeedLog__MeasureTime(int param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  int *piVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  int iVar21;
  long *plVar22;
  long *plVar23;
  char cStack0000000000000004;
  undefined4 in_stack_00000008;
  int iStack000000000000000c;
  
  if ((DAT_0412ad2b & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cdb5d0);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03d254d0);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03d254d8);
    FUN_01ab69ac(PTR_DAT_03cbe508);
    FUN_01ab69ac(PTR_DAT_03cbe510);
    FUN_01ab69ac(PTR_DAT_03cbe588);
    FUN_01ab69ac(PTR_DAT_03cbe590);
    FUN_01ab69ac(PTR_DAT_03cbe518);
    FUN_01ab69ac(PTR_DAT_03d254e0);
    FUN_01ab69ac(PTR_DAT_03d25118);
    FUN_01ab69ac(PTR_DAT_03cf21b8);
    DAT_0412ad2b = 1;
  }
  puVar9 = PTR_DAT_03d25118;
  puVar7 = PTR_DAT_03cbeda8;
  cStack0000000000000004 = 0;
  if (param_1 == -1) {
    plVar20 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d254d0);
    FUN_027b3d9c(plVar20,0);
    *(undefined4 *)(plVar20 + 2) = 0xffffffff;
    return plVar20;
  }
  if (param_1 < 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
    uVar11 = thunk_FUN_01a89e68();
    uVar12 = thunk_FUN_01a6ca08(PTR_DAT_03d254e8);
    FUN_026b3fc8(uVar11,uVar12,0);
    uVar12 = thunk_FUN_01a6ca08(PTR_DAT_03d255a0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar11,uVar12);
  }
  lVar10 = *(long *)PTR_DAT_03d25118;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar10 = *(long *)puVar9;
  }
  plVar20 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x38);
  iStack000000000000000c = param_1;
  uVar11 = thunk_FUN_01a89a98(*(undefined8 *)puVar7,&stack0x0000000c);
  puVar4 = PTR_DAT_03cf21b8;
  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar20 = (long *)(**(code **)(*plVar20 + 0x308))
                              (plVar20,uVar11,*(undefined8 *)(*plVar20 + 0x310));
  if (plVar20 != (long *)0x0) {
    lVar10 = *plVar20;
    bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(lVar10 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0();
    }
    plVar20 = (long *)(**(code **)(lVar10 + 0x198))(plVar20,*(undefined8 *)(lVar10 + 0x1a0));
    if (plVar20 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_03d254e0 + 0x130);
      if ((bVar2 <= *(byte *)(*plVar20 + 0x130)) &&
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_03d254e0)
         ) {
        return plVar20;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar20);
    }
  }
  lVar10 = *(long *)puVar9;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar10 = *(long *)puVar9;
  }
  uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
  cStack0000000000000004 = '\0';
  FUN_027e0bd8(uVar11,&stack0x00000004,0);
  lVar10 = *(long *)puVar9;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar10 = *(long *)puVar9;
  }
  plVar20 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x38);
  iStack000000000000000c = param_1;
  uVar12 = thunk_FUN_01a89a98(*(undefined8 *)puVar7,&stack0x0000000c);
  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar12,uVar12);
  }
  plVar20 = (long *)(**(code **)(*plVar20 + 0x308))
                              (plVar20,uVar12,*(undefined8 *)(*plVar20 + 0x310));
  if (plVar20 == (long *)0x0) {
    lVar10 = *(long *)PTR_DAT_03d254e0;
  }
  else {
    lVar10 = *plVar20;
    bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(lVar10 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0();
    }
    plVar20 = (long *)(**(code **)(lVar10 + 0x198))(plVar20,*(undefined8 *)(lVar10 + 0x1a0));
    lVar10 = *(long *)PTR_DAT_03d254e0;
    if (plVar20 != (long *)0x0) {
      if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar20);
      }
      goto LAB_02f846a4;
    }
  }
  plVar20 = (long *)thunk_FUN_01a89e68(lVar10);
  FUN_02f8423c(plVar20,param_1);
  uVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
  FUN_027ce35c(uVar12,plVar20,0);
  lVar10 = *(long *)puVar9;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar10 = *(long *)puVar9;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_02210dd4(lVar10,uVar12,*(undefined8 *)PTR_DAT_03d254d8);
  plVar22 = *(long **)(*(long *)(*(long *)puVar9 + 0xb8) + 0x38);
  iStack000000000000000c = param_1;
  uVar13 = thunk_FUN_01a89a98(*(undefined8 *)puVar7,&stack0x0000000c);
  if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar13,uVar13);
  }
  (**(code **)(*plVar22 + 0x318))(plVar22,uVar13,uVar12,*(undefined8 *)(*plVar22 + 800));
  uVar1 = *(int *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x30) + 1;
  *(uint *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x30) = uVar1;
  if ((uVar1 & 0x1f) == 0) {
    lVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
    Animancer_AnimancerState__OnSetIsPlaying(lVar10,*(undefined8 *)PTR_DAT_03cbe510);
    lVar14 = *(long *)puVar9;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar14 = *(long *)puVar9;
    }
    plVar22 = *(long **)(*(long *)(lVar14 + 0xb8) + 0x38);
    if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar22 = (long *)(**(code **)(*plVar22 + 0x328))(plVar22,*(undefined8 *)(*plVar22 + 0x330));
    puVar8 = PTR_DAT_03cdb5d0;
    puVar6 = PTR_DAT_03cbed20;
    puVar3 = PTR_DAT_03cbe508;
    if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar18 = *plVar22;
      lVar14 = *(long *)puVar6;
      uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar19 != 0) {
        piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar15 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_02f847ac;
          }
          uVar19 = uVar19 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar19 != 0);
      }
      puVar15 = (undefined8 *)FUN_01a472ec(plVar22,lVar14,0);
LAB_02f847ac:
      uVar19 = (*(code *)*puVar15)(plVar22,puVar15[1]);
      puVar5 = PTR_DAT_03cbed08;
      if ((uVar19 & 1) == 0) {
        plVar22 = (long *)thunk_FUN_01a89d6c(plVar22,*(undefined8 *)PTR_DAT_03cbed08);
        if (plVar22 == (long *)0x0) goto LAB_02f84940;
        lVar14 = *plVar22;
        uVar19 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar19 == 0) goto LAB_02f84918;
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        goto LAB_02f84900;
      }
      lVar18 = *plVar22;
      lVar14 = *(long *)puVar6;
      uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar19 != 0) {
        piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar15 = (undefined8 *)(lVar18 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_02f8480c;
          }
          uVar19 = uVar19 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar19 != 0);
      }
      puVar15 = (undefined8 *)FUN_01a472ec(plVar22,lVar14,1);
LAB_02f8480c:
      plVar16 = (long *)(*(code *)*puVar15)(plVar22,puVar15[1]);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(*plVar16 + 0x40) != *(long *)(*(long *)puVar8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0();
      }
      puVar15 = (undefined8 *)thunk_FUN_01a89fbc();
      plVar16 = (long *)puVar15[1];
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar14 = *plVar16;
      bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(lVar14 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0();
      }
      plVar23 = (long *)*puVar15;
      lVar14 = (**(code **)(lVar14 + 0x198))(plVar16,*(undefined8 *)(lVar14 + 0x1a0));
      if (lVar14 == 0) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(*plVar23 + 0x40) != *(long *)(*(long *)puVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar23);
        }
        piVar17 = (int *)thunk_FUN_01a89fbc(plVar23);
        iStack000000000000000c = *piVar17;
        FUN_01b5f01c(lVar10,&stack0x0000000c,*(undefined8 *)puVar3);
      }
    } while( true );
  }
  goto LAB_02f846a4;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar17 = piVar17 + 4;
    if (uVar19 == 0) break;
LAB_02f84900:
    if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
      puVar15 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_02f84934;
    }
  }
LAB_02f84918:
  puVar15 = (undefined8 *)FUN_01a472ec(plVar22,*(long *)puVar5,0);
LAB_02f84934:
  (*(code *)*puVar15)(plVar22,puVar15[1]);
LAB_02f84940:
  puVar4 = PTR_DAT_03cbe590;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (0 < *(int *)(lVar10 + 0x18)) {
    iVar21 = 0;
    do {
      lVar14 = *(long *)puVar9;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar14 = *(long *)puVar9;
      }
      plVar22 = *(long **)(*(long *)(lVar14 + 0xb8) + 0x38);
      FUN_02215a88(lVar10,iVar21,&stack0x00000008,*(undefined8 *)puVar4);
      uVar12 = thunk_FUN_01a89a98(*(undefined8 *)puVar7,&stack0x00000008);
      if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c(uVar12,uVar12);
      }
      (**(code **)(*plVar22 + 0x3a8))(plVar22,uVar12,*(undefined8 *)(*plVar22 + 0x3b0));
      iVar21 = iVar21 + 1;
    } while (iVar21 < *(int *)(lVar10 + 0x18));
  }
LAB_02f846a4:
  if (cStack0000000000000004 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar11,0);
  }
  return plVar20;
}


