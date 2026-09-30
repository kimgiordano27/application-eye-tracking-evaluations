/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$get_IsOpenXRAvailable
ENTRY_POINT: 08a4a644
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__get_IsOpenXRAvailable(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x20;
  byte unaff_w21;
  long *plVar15;
  long *unaff_x25;
  double dVar16;
  float fVar17;
  float fVar18;
  double in_stack_00000008;
  double in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_049a583c(param_1);
  }
  uVar6 = FUN_08d92e68(0x3fe0000000000000,0);
  bVar2 = FUN_08d93638(param_2,uVar6,0);
  uVar6 = FUN_08a49a3c();
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_049a583c(*unaff_x25);
  }
  uVar7 = FUN_08d92e68(0x4014000000000000,0);
  bVar3 = FUN_08d93638(uVar6,uVar7,0);
  uVar6 = FUN_08a49a3c();
  bVar4 = FUN_08d93650(uVar6,*(undefined8 *)(unaff_x20 + 0x108),0);
  uVar6 = FUN_08a49a3c();
  bVar5 = FUN_08d93650(uVar6,*(undefined8 *)(unaff_x20 + 0x110),0);
  dVar16 = (double)FUN_08a4ae40();
  if (((bVar2 ^ 1 | bVar3 & 0.0 <= dVar16 & (unaff_w21 | bVar4) ^ 0xff) & 1) == 0) {
    lVar8 = FUN_08a4607c();
    if ((lVar8 == 0) || (lVar8 = FUN_08a28f34(lVar8,0), lVar8 == 0)) {
LAB_08a4adc4:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    fVar18 = *(float *)(lVar8 + 0x20);
    fVar17 = *(float *)(lVar8 + 0x24);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x100);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x118);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_049a583c(*unaff_x25);
    }
    in_stack_00000028 = FUN_08d93358(uVar6,uVar7,0);
    uVar13 = FUN_08d93644(in_stack_00000028,*(undefined8 *)(unaff_x20 + 0x108),0);
    puVar1 = PTR_DAT_0ac46eb8;
    if ((uVar13 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if (DAT_0b32acf7 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac46eb8);
        DAT_0b32acf7 = '\x01';
      }
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar8 = *(long *)puVar1;
      }
      if ((*(long *)(unaff_x20 + 0x18) != 0) &&
         (lVar10 = *(long *)(*(long *)(unaff_x20 + 0x18) + 0x20), lVar10 != 0)) {
        plVar15 = (long *)**(undefined8 **)(lVar8 + 0xb8);
        uVar6 = FUN_08bd9aa0(*(undefined8 *)PTR_DAT_0ac158c8,*(undefined8 *)(lVar10 + 0x20),
                             *(undefined8 *)PTR_DAT_0ac53608,0);
        if (plVar15 != (long *)0x0) {
          lVar8 = *plVar15;
          uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0ac46ed8) {
                puVar12 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_08a4ad94;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar12 = (undefined8 *)FUN_04980e68(plVar15,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a4ad94:
                    /* WARNING: Could not recover jumptable at 0x08a4adc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar12)(plVar15,uVar6,puVar12[1]);
          return;
        }
      }
      goto LAB_08a4adc4;
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    fVar17 = fVar17 - fVar18;
    uVar6 = FUN_08d9283c(&stack0x00000028,0);
    in_stack_00000020 = FUN_08a49a3c();
    uVar7 = FUN_08d9283c(&stack0x00000020,0);
    if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    dVar16 = (double)FUN_08d7af1c(uVar6,uVar7,0);
    dVar16 = (double)(long)((dVar16 + -15.0) / 50.0) * 50.0;
    FUN_08a4aea4((double)fVar17,dVar16);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x118);
    uVar6 = FUN_08d92cf8(dVar16,0);
    uVar6 = FUN_08d933c0(uVar7,uVar6,0);
    puVar1 = PTR_DAT_0ac46eb8;
    *(undefined8 *)(unaff_x20 + 0x118) = uVar6;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar8 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_0ac09758;
    if ((*(long *)(unaff_x20 + 0x18) == 0) ||
       (lVar10 = *(long *)(*(long *)(unaff_x20 + 0x18) + 0x20), lVar10 == 0)) goto LAB_08a4adc4;
    uVar7 = *(undefined8 *)(lVar10 + 0x20);
    plVar15 = (long *)**(undefined8 **)(lVar8 + 0xb8);
    in_stack_00000018._4_4_ = fVar17;
    uVar6 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x78),(long)&stack0x00000018 + 4);
    uVar6 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac53610,uVar7,uVar6,0);
    in_stack_00000010 = dVar16;
    uVar7 = thunk_FUN_04983b98(*(undefined8 *)(puVar1 + 0x80),&stack0x00000010);
    in_stack_00000020 = FUN_08a49a3c();
    in_stack_00000008 = (double)FUN_08d9283c(&stack0x00000020,0);
    uVar11 = thunk_FUN_04983b98(*(undefined8 *)(puVar1 + 0x80),&stack0x00000008);
    uVar7 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac53620,uVar7,uVar11,0);
    FUN_08d9283c(unaff_x20 + 0x118,0);
    uVar11 = thunk_FUN_04983b98(*(undefined8 *)(puVar1 + 0x80));
    uVar11 = FUN_08bc9f74(*(undefined8 *)PTR_DAT_0ac53600,uVar11,0);
    uVar6 = FUN_08bd9aa0(uVar6,uVar7,uVar11,0);
    if (plVar15 == (long *)0x0) goto LAB_08a4adc4;
    lVar10 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    lVar8 = *(long *)PTR_DAT_0ac46ed8;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar8) goto LAB_08a4ad48;
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
  }
  else {
    if ((unaff_w21 & bVar5 & 1) == 0) {
      return;
    }
    in_stack_00000020 = FUN_08a49a3c();
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_049a583c(*unaff_x25);
    }
    dVar16 = (double)FUN_08d9283c(&stack0x00000020,0);
    if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    dVar16 = (double)(long)((dVar16 + -30.0) / 50.0) * 50.0;
    FUN_08a4aea4(0x3ff0000000000000,dVar16);
    puVar1 = PTR_DAT_0ac46eb8;
    lVar8 = *(long *)PTR_DAT_0ac46eb8;
    *(undefined8 *)(unaff_x20 + 0x118) = **(undefined8 **)(*unaff_x25 + 0xb8);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar8 = *(long *)puVar1;
    }
    plVar15 = (long *)**(undefined8 **)(lVar8 + 0xb8);
    plVar9 = (long *)FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac09b30,4);
    if (((*(long *)(unaff_x20 + 0x18) == 0) ||
        (lVar8 = *(long *)(*(long *)(unaff_x20 + 0x18) + 0x20), lVar8 == 0)) ||
       (plVar9 == (long *)0x0)) goto LAB_08a4adc4;
    lVar8 = *(long *)(lVar8 + 0x20);
    if ((lVar8 != 0) &&
       (lVar10 = thunk_FUN_04983e64(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_08a4adcc:
      uVar6 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar6,0);
    }
    if ((int)plVar9[3] == 0) {
LAB_08a4adc8:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    plVar9[4] = lVar8;
    thunk_FUN_049ee3d8(plVar9 + 4,lVar8);
    puVar1 = PTR_DAT_0ac09758;
    in_stack_00000010 = 1.0;
    lVar8 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x80),&stack0x00000010);
    if ((lVar8 != 0) &&
       (lVar10 = thunk_FUN_04983e64(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto LAB_08a4adcc;
    if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) goto LAB_08a4adc8;
    plVar9[5] = lVar8;
    thunk_FUN_049ee3d8(plVar9 + 5,lVar8);
    in_stack_00000008 = dVar16;
    lVar8 = thunk_FUN_04983b98(*(undefined8 *)(puVar1 + 0x80),&stack0x00000008);
    if ((lVar8 != 0) &&
       (lVar10 = thunk_FUN_04983e64(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto LAB_08a4adcc;
    if (*(uint *)(plVar9 + 3) < 3) goto LAB_08a4adc8;
    plVar9[6] = lVar8;
    thunk_FUN_049ee3d8(plVar9 + 6,lVar8);
    in_stack_00000020 = FUN_08a49a3c();
    FUN_08d9283c(&stack0x00000020,0);
    lVar8 = thunk_FUN_04983b98(*(undefined8 *)(puVar1 + 0x80));
    if ((lVar8 != 0) &&
       (lVar10 = thunk_FUN_04983e64(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
    goto LAB_08a4adcc;
    if ((*(uint *)(plVar9 + 3) & 0xfffffffc) == 0) goto LAB_08a4adc8;
    plVar9[7] = lVar8;
    thunk_FUN_049ee3d8(plVar9 + 7,lVar8);
    uVar6 = FUN_08bda6b0(*(undefined8 *)PTR_DAT_0ac53618,plVar9,0);
    if (plVar15 == (long *)0x0) goto LAB_08a4adc4;
    lVar10 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    lVar8 = *(long *)PTR_DAT_0ac46ed8;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar8) goto LAB_08a4ad48;
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
  }
  puVar12 = (undefined8 *)FUN_04980e68(plVar15,lVar8,0);
LAB_08a4ad54:
  (*(code *)*puVar12)(plVar15,uVar6,puVar12[1]);
  return;
LAB_08a4ad48:
  puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
  goto LAB_08a4ad54;
}


