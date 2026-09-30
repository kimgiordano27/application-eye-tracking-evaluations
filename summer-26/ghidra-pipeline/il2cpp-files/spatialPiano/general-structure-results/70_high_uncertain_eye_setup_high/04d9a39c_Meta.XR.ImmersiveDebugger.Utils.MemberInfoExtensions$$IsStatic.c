/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions$$IsStatic
ENTRY_POINT: 04d9a39c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_MemberInfoExtensions__IsStatic
               (undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  void *pvVar8;
  undefined8 uVar9;
  double *pdVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  size_t unaff_x19;
  long *plVar19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar20;
  void *unaff_x25;
  undefined8 unaff_x27;
  undefined8 *puVar21;
  void *unaff_x28;
  long unaff_x29;
  float fVar22;
  double dVar23;
  double dVar24;
  
  *(undefined8 *)(unaff_x29 + -0x80) = unaff_x27;
  *(undefined8 *)(unaff_x29 + -0x78) = unaff_x22;
  uVar2 = (*(code *)*param_2)();
  lVar20 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x100) + 0x80);
  FUN_02f08788(lVar20 + 0x60,4);
  puVar3 = (undefined4 *)thunk_FUN_02f66c64(unaff_x24 + 0x20,lVar20 + 0x60);
  *puVar3 = uVar2;
  memcpy(unaff_x25,unaff_x28,unaff_x19);
  puVar12 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
  uVar4 = *puVar12;
  pcVar14 = (code *)puVar12[2];
  *(void **)(unaff_x29 + -0x40) = unaff_x25;
  (*pcVar14)(uVar4);
  plVar19 = (long *)**(undefined8 **)(unaff_x29 + -0x38);
  if (plVar19 != (long *)0x0) {
    lVar20 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x88);
    if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = FUN_02f41e9c(lVar20);
    }
    lVar15 = *plVar19;
    uVar4 = *(undefined8 *)(unaff_x29 + -0x80);
    puVar12 = *(undefined8 **)(unaff_x29 + -0x78);
    puVar21 = *(undefined8 **)(unaff_x29 + -0x70);
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar20) {
          puVar5 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_04d9a4a0;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0(plVar19,lVar20,1);
LAB_04d9a4a0:
    uVar6 = (*(code *)*puVar5)(plVar19,puVar5[1]);
    pcVar7 = (char *)thunk_FUN_02f66c64(unaff_x24 + 0x20,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) +
                                                   0x100) + 0x80));
    cVar1 = *pcVar7;
    uVar2 = FUN_03e22398(unaff_x29 + -0x48,*(undefined8 *)PTR_DAT_067ce4f8);
    lVar20 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if (cVar1 == '\0') {
      puVar21 = *(undefined8 **)(lVar20 + 0x130);
      uVar9 = *puVar21;
      *(undefined8 *)(unaff_x29 + -0x30) = uVar6;
      *(undefined8 **)(unaff_x29 + -0x28) = puVar12;
      pcVar14 = (code *)puVar21[2];
      *(undefined4 *)(unaff_x29 + -0x40) = uVar2;
      *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x40;
      (*pcVar14)(uVar9);
      puVar21 = puVar12;
    }
    else {
      pvVar8 = (void *)thunk_FUN_02f66c64(unaff_x24 + 0x20,
                                          *(long *)(*(long *)(lVar20 + 0x100) + 0x80) + 0x20);
      memcpy(puVar12,pvVar8,unaff_x21);
      lVar20 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      puVar13 = *(undefined8 **)(lVar20 + 0x138);
      uVar9 = *puVar13;
      puVar5 = puVar12;
      if (-1 < *(int *)(*(long *)(lVar20 + 0x108) + 0x28)) {
        puVar5 = (undefined8 *)*puVar12;
      }
      *(undefined8 **)(unaff_x29 + -0x28) = puVar5;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar21;
      pcVar14 = (code *)puVar13[2];
      *(undefined4 *)(unaff_x29 + -0x40) = uVar2;
      *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x40;
      *(undefined8 *)(unaff_x29 + -0x30) = uVar6;
      (*pcVar14)(uVar9);
    }
    memcpy(*(void **)(unaff_x29 + -0x60),puVar21,unaff_x21);
    pvVar8 = (void *)thunk_FUN_02f66c64(unaff_x24 + 0x20,
                                        *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) +
                                                                     0xc0) + 0x100) + 0x80) + 0x20);
    memcpy(puVar12,pvVar8,unaff_x21);
    lVar17 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    lVar15 = *(long *)(lVar17 + 0x108);
    lVar20 = lVar15;
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_02f41e9c(lVar15);
      lVar17 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      lVar20 = *(long *)(lVar17 + 0x108);
    }
    uVar6 = *(undefined8 *)(lVar17 + 0x148);
    puVar21 = puVar12;
    if (-1 < *(int *)(lVar20 + 0x28)) {
      puVar21 = (undefined8 *)*puVar12;
    }
    *(undefined8 **)(unaff_x29 + -0x38) = puVar21;
    FUN_02f0939c(lVar15,uVar6,*(undefined8 *)(unaff_x29 + -0x68),*(undefined8 *)(unaff_x29 + -0x60),
                 unaff_x29 + -0x38,unaff_x29 + -0x40);
    if (*(char *)(unaff_x29 + -0x40) != '\0') {
LAB_04d9a868:
      pvVar8 = (void *)thunk_FUN_02f66c64(unaff_x24 + 0x20,
                                          *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20)
                                                                       + 0xc0) + 0x100) + 0x80) +
                                          0x20);
      memcpy(puVar12,pvVar8,unaff_x21);
      memmove(*(void **)(unaff_x29 + -0x58),pvVar8,unaff_x21);
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        return;
      }
      goto LAB_04d9a910;
    }
    lVar20 = *(long *)(unaff_x23 + 0x38);
    if (lVar20 != 0) {
      fVar22 = (float)(**(code **)(lVar20 + 0x18))
                                (*(undefined8 *)(lVar20 + 0x40),*(undefined8 *)(lVar20 + 0x28));
      pvVar8 = (void *)thunk_FUN_02f66c64(unaff_x24 + 0x20,
                                          *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20)
                                                                       + 0xc0) + 0x100) + 0x80) +
                                          0x40);
      memcpy(puVar12,pvVar8,unaff_x21);
      lVar17 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      lVar15 = *(long *)(lVar17 + 0x108);
      lVar20 = lVar15;
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_02f41e9c(lVar15);
        lVar17 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        lVar20 = *(long *)(lVar17 + 0x108);
      }
      uVar6 = *(undefined8 *)(lVar17 + 0x148);
      puVar21 = puVar12;
      if (-1 < *(int *)(lVar20 + 0x28)) {
        puVar21 = (undefined8 *)*puVar12;
      }
      *(undefined8 **)(unaff_x29 + -0x38) = puVar21;
      FUN_02f0939c(lVar15,uVar6,uVar4,*(undefined8 *)(unaff_x29 + -0x60),unaff_x29 + -0x38,
                   unaff_x29 + -0x40);
      if (*(char *)(unaff_x29 + -0x40) == '\0') {
        lVar20 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x100) + 0x80);
        FUN_02f08788(lVar20 + 0x80,8);
        pdVar10 = (double *)thunk_FUN_02f66c64(unaff_x24 + 0x20,lVar20 + 0x80);
        pvVar8 = *(void **)(unaff_x29 + -0x60);
        *pdVar10 = (double)fVar22;
        memcpy(puVar12,pvVar8,unaff_x21);
        FUN_02f08790(unaff_x24 + 0x20,
                     *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x100) +
                              0x80) + 0x40,puVar12,unaff_x21 & 0xffffffff);
      }
      pdVar10 = (double *)
                thunk_FUN_02f66c64(unaff_x24 + 0x20,
                                   *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0)
                                                      + 0x100) + 0x80) + 0x80);
      plVar19 = *(long **)(unaff_x23 + 0x40);
      if (plVar19 != (long *)0x0) {
        dVar24 = *pdVar10;
        lVar20 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
        if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = FUN_02f41e9c(lVar20);
        }
        lVar15 = *plVar19;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar20) {
              puVar21 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_04d9a7e8;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar21 = (undefined8 *)FUN_02f421d0(plVar19,lVar20,1);
LAB_04d9a7e8:
        dVar23 = (double)(*(code *)*puVar21)(plVar19,puVar21[1]);
        if (dVar24 + dVar23 <= (double)fVar22) {
          uVar4 = *(undefined8 *)
                   (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x100) + 0x80);
          FUN_02f08788(uVar4,1);
          puVar11 = (undefined1 *)thunk_FUN_02f66c64(unaff_x24 + 0x20,uVar4);
          pvVar8 = *(void **)(unaff_x29 + -0x60);
          *puVar11 = 1;
          memcpy(puVar12,pvVar8,unaff_x21);
          FUN_02f08790(unaff_x24 + 0x20,
                       *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x100) +
                                0x80) + 0x20,puVar12,unaff_x21 & 0xffffffff);
        }
        goto LAB_04d9a868;
      }
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_04d9a910:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


