/*
FUNCTION_NAME: UniGLTF.ImporterContextSpeedLog.KeyElapsed$$.ctor
ENTRY_POINT: 02f84464
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f84a60) */
/* WARNING: Removing unreachable block (ram,0x02f8494c) */
/* WARNING: Removing unreachable block (ram,0x02f849e0) */
/* WARNING: Removing unreachable block (ram,0x02f84a7c) */

long * UniGLTF_ImporterContextSpeedLog_KeyElapsed___ctor
                 (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined4 *puVar14;
  long lVar15;
  long in_x9;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined4 unaff_w21;
  int iVar19;
  long *plVar20;
  long *plVar21;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  char cStack0000000000000004;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  if (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0();
  }
  plVar7 = (long *)(**(code **)(param_1 + 0x198))(param_2,*(undefined8 *)(param_1 + 0x1a0));
  if (plVar7 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_03d254e0 + 0x130);
    if ((bVar2 <= *(byte *)(*plVar7 + 0x130)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_03d254e0)) {
      return plVar7;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0(plVar7);
  }
  lVar8 = *unaff_x26;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar8 = *unaff_x26;
  }
  uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  cStack0000000000000004 = '\0';
  FUN_027e0bd8(uVar18,&stack0x00000004,0);
  lVar8 = *unaff_x26;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar8 = *unaff_x26;
  }
  plVar7 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x38);
  uStack000000000000000c = unaff_w21;
  uVar9 = thunk_FUN_01a89a98(*unaff_x27,&stack0x0000000c);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar9,uVar9);
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x308))(plVar7,uVar9,*(undefined8 *)(*plVar7 + 0x310));
  if (plVar7 == (long *)0x0) {
    lVar8 = *(long *)PTR_DAT_03d254e0;
  }
  else {
    lVar8 = *plVar7;
    bVar2 = *(byte *)(*unaff_x24 + 0x130);
    if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0();
    }
    plVar7 = (long *)(**(code **)(lVar8 + 0x198))(plVar7,*(undefined8 *)(lVar8 + 0x1a0));
    lVar8 = *(long *)PTR_DAT_03d254e0;
    if (plVar7 != (long *)0x0) {
      if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar7);
      }
      goto LAB_02f846a4;
    }
  }
  plVar7 = (long *)thunk_FUN_01a89e68(lVar8);
  FUN_02f8423c(plVar7,unaff_w21);
  uVar9 = thunk_FUN_01a89e68(*unaff_x24);
  FUN_027ce35c(uVar9,plVar7,0);
  lVar8 = *unaff_x26;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar8 = *unaff_x26;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_02210dd4(lVar8,uVar9,*(undefined8 *)PTR_DAT_03d254d8);
  plVar20 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 0x38);
  uStack000000000000000c = unaff_w21;
  uVar10 = thunk_FUN_01a89a98(*unaff_x27,&stack0x0000000c);
  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar10,uVar10);
  }
  (**(code **)(*plVar20 + 0x318))(plVar20,uVar10,uVar9,*(undefined8 *)(*plVar20 + 800));
  uVar1 = *(int *)(*(long *)(*unaff_x26 + 0xb8) + 0x30) + 1;
  *(uint *)(*(long *)(*unaff_x26 + 0xb8) + 0x30) = uVar1;
  if ((uVar1 & 0x1f) == 0) {
    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe518);
    Animancer_AnimancerState__OnSetIsPlaying(lVar8,*(undefined8 *)PTR_DAT_03cbe510);
    lVar11 = *unaff_x26;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar11 = *unaff_x26;
    }
    plVar20 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x38);
    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar20 = (long *)(**(code **)(*plVar20 + 0x328))(plVar20,*(undefined8 *)(*plVar20 + 0x330));
    puVar6 = PTR_DAT_03cdb5d0;
    puVar5 = PTR_DAT_03cbed20;
    puVar3 = PTR_DAT_03cbe508;
    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar15 = *plVar20;
      lVar11 = *(long *)puVar5;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_02f847ac;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)FUN_01a472ec(plVar20,lVar11,0);
LAB_02f847ac:
      uVar16 = (*(code *)*puVar12)(plVar20,puVar12[1]);
      puVar4 = PTR_DAT_03cbed08;
      if ((uVar16 & 1) == 0) {
        plVar20 = (long *)thunk_FUN_01a89d6c(plVar20,*(undefined8 *)PTR_DAT_03cbed08);
        if (plVar20 == (long *)0x0) goto LAB_02f84940;
        lVar11 = *plVar20;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 == 0) goto LAB_02f84918;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_02f84900;
      }
      lVar15 = *plVar20;
      lVar11 = *(long *)puVar5;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_02f8480c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)FUN_01a472ec(plVar20,lVar11,1);
LAB_02f8480c:
      plVar13 = (long *)(*(code *)*puVar12)(plVar20,puVar12[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0();
      }
      puVar12 = (undefined8 *)thunk_FUN_01a89fbc();
      plVar13 = (long *)puVar12[1];
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar11 = *plVar13;
      bVar2 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(lVar11 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0();
      }
      plVar21 = (long *)*puVar12;
      lVar11 = (**(code **)(lVar11 + 0x198))(plVar13,*(undefined8 *)(lVar11 + 0x1a0));
      if (lVar11 == 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(*plVar21 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar21);
        }
        puVar14 = (undefined4 *)thunk_FUN_01a89fbc(plVar21);
        uStack000000000000000c = *puVar14;
        FUN_01b5f01c(lVar8,&stack0x0000000c,*(undefined8 *)puVar3);
      }
    } while( true );
  }
  goto LAB_02f846a4;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_02f84900:
    if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
      puVar12 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_02f84934;
    }
  }
LAB_02f84918:
  puVar12 = (undefined8 *)FUN_01a472ec(plVar20,*(long *)puVar4,0);
LAB_02f84934:
  (*(code *)*puVar12)(plVar20,puVar12[1]);
LAB_02f84940:
  puVar3 = PTR_DAT_03cbe590;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (0 < *(int *)(lVar8 + 0x18)) {
    iVar19 = 0;
    do {
      lVar11 = *unaff_x26;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar11 = *unaff_x26;
      }
      plVar20 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x38);
      FUN_02215a88(lVar8,iVar19,&stack0x00000008,*(undefined8 *)puVar3);
      uVar9 = thunk_FUN_01a89a98(*unaff_x27,&stack0x00000008);
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c(uVar9,uVar9);
      }
      (**(code **)(*plVar20 + 0x3a8))(plVar20,uVar9,*(undefined8 *)(*plVar20 + 0x3b0));
      iVar19 = iVar19 + 1;
    } while (iVar19 < *(int *)(lVar8 + 0x18));
  }
LAB_02f846a4:
  if (cStack0000000000000004 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar18,0);
  }
  return plVar7;
}


