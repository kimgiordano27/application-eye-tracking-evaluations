/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions$$GetDataType
ENTRY_POINT: 04d9a25c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_MemberInfoExtensions__GetDataType(void)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 uVar13;
  double *pdVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  code *pcVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  size_t unaff_x19;
  long *plVar23;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x23;
  long unaff_x24;
  void *unaff_x25;
  long *plVar24;
  long lVar25;
  undefined8 unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  float fVar26;
  double dVar27;
  double dVar28;
  
  uVar21 = unaff_x21 + 0xf & 0x1fffffff0;
  puVar17 = (undefined8 *)(&stack0x00000000 + -uVar21);
  *(ulong *)(unaff_x29 + -0x70) = (long)puVar17 - uVar21;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  pvVar6 = (void *)(((long)puVar17 - uVar21) - uVar21);
  *(void **)(unaff_x29 + -0x60) = pvVar6;
  memset(pvVar6,0,unaff_x21);
  plVar24 = *(long **)(unaff_x23 + 0x18);
  memcpy(unaff_x25,unaff_x28,unaff_x19);
  puVar16 = *(undefined8 **)(*(long *)(unaff_x24 + 0xc0) + 0x98);
  uVar7 = *puVar16;
  pcVar19 = (code *)puVar16[2];
  *(void **)(unaff_x29 + -0x38) = unaff_x25;
  (*pcVar19)(uVar7);
  if (plVar24 == (long *)0x0) goto LAB_04d9a8e0;
  if (*(uint *)(plVar24 + 3) <= *(uint *)(unaff_x29 + -0x40)) {
    if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    goto LAB_04d9a910;
  }
  lVar3 = (ulong)*(uint *)(*plVar24 + 0x104) * (long)(int)*(uint *)(unaff_x29 + -0x40);
  piVar8 = (int *)thunk_FUN_02f66c64((long)plVar24 + lVar3 + 0x20,
                                     *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) +
                                                                  0xc0) + 0x100) + 0x80) + 0x60);
  iVar1 = *piVar8;
  iVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x118))();
  if (iVar1 == iVar4) goto LAB_04d9a868;
  lVar25 = *(long *)(unaff_x23 + 0x28);
  memcpy(unaff_x25,unaff_x28,unaff_x19);
  if (lVar25 != 0) {
    puVar16 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x120);
    uVar7 = *puVar16;
    pcVar19 = (code *)puVar16[2];
    *(void **)(unaff_x29 + -0x40) = unaff_x25;
    (*pcVar19)(uVar7,puVar16,lVar25,unaff_x29 + -0x40,unaff_x29 + -0x38);
    lVar25 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    *(ulong *)(unaff_x29 + -0x48) = *(ulong *)(unaff_x29 + -0x38);
    if ((*(ulong *)(unaff_x29 + -0x38) & 0xff) == 0) {
LAB_04d9a870:
      pvVar6 = (void *)thunk_FUN_02f66c64((long)plVar24 + lVar3 + 0x20,
                                          *(long *)(*(long *)(lVar25 + 0x100) + 0x80) + 0x20);
      memcpy(puVar17,pvVar6,unaff_x21);
      memmove(*(void **)(unaff_x29 + -0x58),pvVar6,unaff_x21);
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        return;
      }
      goto LAB_04d9a910;
    }
    puVar16 = *(undefined8 **)(lVar25 + 0x118);
    *(undefined8 *)(unaff_x29 + -0x80) = unaff_x27;
    *(undefined8 **)(unaff_x29 + -0x78) = puVar17;
    uVar5 = (*(code *)*puVar16)();
    lVar25 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x100) + 0x80);
    FUN_02f08788(lVar25 + 0x60,4);
    puVar9 = (undefined4 *)thunk_FUN_02f66c64((long)plVar24 + lVar3 + 0x20,lVar25 + 0x60);
    *puVar9 = uVar5;
    memcpy(unaff_x25,unaff_x28,unaff_x19);
    puVar17 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
    uVar7 = *puVar17;
    pcVar19 = (code *)puVar17[2];
    *(void **)(unaff_x29 + -0x40) = unaff_x25;
    (*pcVar19)(uVar7);
    plVar23 = (long *)**(undefined8 **)(unaff_x29 + -0x38);
    if (plVar23 != (long *)0x0) {
      lVar25 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x88);
      if ((*(ushort *)(lVar25 + 0x135) & 1) == 0) {
        lVar25 = FUN_02f41e9c(lVar25);
      }
      lVar20 = *plVar23;
      uVar7 = *(undefined8 *)(unaff_x29 + -0x80);
      puVar17 = *(undefined8 **)(unaff_x29 + -0x78);
      puVar16 = *(undefined8 **)(unaff_x29 + -0x70);
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar8 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar25) {
            puVar10 = (undefined8 *)(lVar20 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_04d9a4a0;
          }
          uVar21 = uVar21 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar21 != 0);
      }
      puVar10 = (undefined8 *)FUN_02f421d0(plVar23,lVar25,1);
LAB_04d9a4a0:
      uVar11 = (*(code *)*puVar10)(plVar23,puVar10[1]);
      pcVar12 = (char *)thunk_FUN_02f66c64((long)plVar24 + lVar3 + 0x20,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0)
                                                      + 0x100) + 0x80));
      cVar2 = *pcVar12;
      uVar5 = FUN_03e22398(unaff_x29 + -0x48,*(undefined8 *)PTR_DAT_067ce4f8);
      lVar25 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if (cVar2 == '\0') {
        puVar16 = *(undefined8 **)(lVar25 + 0x130);
        uVar13 = *puVar16;
        *(undefined8 *)(unaff_x29 + -0x30) = uVar11;
        *(undefined8 **)(unaff_x29 + -0x28) = puVar17;
        pcVar19 = (code *)puVar16[2];
        *(undefined4 *)(unaff_x29 + -0x40) = uVar5;
        *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x40;
        (*pcVar19)(uVar13);
        puVar16 = puVar17;
      }
      else {
        pvVar6 = (void *)thunk_FUN_02f66c64((long)plVar24 + lVar3 + 0x20,
                                            *(long *)(*(long *)(lVar25 + 0x100) + 0x80) + 0x20);
        memcpy(puVar17,pvVar6,unaff_x21);
        lVar25 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        puVar18 = *(undefined8 **)(lVar25 + 0x138);
        uVar13 = *puVar18;
        puVar10 = puVar17;
        if (-1 < *(int *)(*(long *)(lVar25 + 0x108) + 0x28)) {
          puVar10 = (undefined8 *)*puVar17;
        }
        *(undefined8 **)(unaff_x29 + -0x28) = puVar10;
        *(undefined8 **)(unaff_x29 + -0x20) = puVar16;
        pcVar19 = (code *)puVar18[2];
        *(undefined4 *)(unaff_x29 + -0x40) = uVar5;
        *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x40;
        *(undefined8 *)(unaff_x29 + -0x30) = uVar11;
        (*pcVar19)(uVar13);
      }
      memcpy(*(void **)(unaff_x29 + -0x60),puVar16,unaff_x21);
      pvVar6 = (void *)thunk_FUN_02f66c64((long)plVar24 + lVar3 + 0x20,
                                          *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20)
                                                                       + 0xc0) + 0x100) + 0x80) +
                                          0x20);
      memcpy(puVar17,pvVar6,unaff_x21);
      lVar22 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      lVar20 = *(long *)(lVar22 + 0x108);
      lVar25 = lVar20;
      if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = FUN_02f41e9c(lVar20);
        lVar22 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        lVar25 = *(long *)(lVar22 + 0x108);
      }
      uVar11 = *(undefined8 *)(lVar22 + 0x148);
      puVar16 = puVar17;
      if (-1 < *(int *)(lVar25 + 0x28)) {
        puVar16 = (undefined8 *)*puVar17;
      }
      *(undefined8 **)(unaff_x29 + -0x38) = puVar16;
      FUN_02f0939c(lVar20,uVar11,*(undefined8 *)(unaff_x29 + -0x68),
                   *(undefined8 *)(unaff_x29 + -0x60),unaff_x29 + -0x38,unaff_x29 + -0x40);
      if (*(char *)(unaff_x29 + -0x40) != '\0') {
LAB_04d9a868:
        lVar25 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        goto LAB_04d9a870;
      }
      lVar25 = *(long *)(unaff_x23 + 0x38);
      if (lVar25 != 0) {
        fVar26 = (float)(**(code **)(lVar25 + 0x18))
                                  (*(undefined8 *)(lVar25 + 0x40),*(undefined8 *)(lVar25 + 0x28));
        pvVar6 = (void *)thunk_FUN_02f66c64((long)plVar24 + lVar3 + 0x20,
                                            *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20
                                                                                   ) + 0xc0) + 0x100
                                                               ) + 0x80) + 0x40);
        memcpy(puVar17,pvVar6,unaff_x21);
        lVar22 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        lVar20 = *(long *)(lVar22 + 0x108);
        lVar25 = lVar20;
        if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = FUN_02f41e9c(lVar20);
          lVar22 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
          lVar25 = *(long *)(lVar22 + 0x108);
        }
        uVar11 = *(undefined8 *)(lVar22 + 0x148);
        puVar16 = puVar17;
        if (-1 < *(int *)(lVar25 + 0x28)) {
          puVar16 = (undefined8 *)*puVar17;
        }
        *(undefined8 **)(unaff_x29 + -0x38) = puVar16;
        FUN_02f0939c(lVar20,uVar11,uVar7,*(undefined8 *)(unaff_x29 + -0x60),unaff_x29 + -0x38,
                     unaff_x29 + -0x40);
        if (*(char *)(unaff_x29 + -0x40) == '\0') {
          lVar25 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x100) + 0x80
                            );
          FUN_02f08788(lVar25 + 0x80,8);
          pdVar14 = (double *)thunk_FUN_02f66c64((long)plVar24 + lVar3 + 0x20,lVar25 + 0x80);
          pvVar6 = *(void **)(unaff_x29 + -0x60);
          *pdVar14 = (double)fVar26;
          memcpy(puVar17,pvVar6,unaff_x21);
          FUN_02f08790((long)plVar24 + lVar3 + 0x20,
                       *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x100) +
                                0x80) + 0x40,puVar17,unaff_x21 & 0xffffffff);
        }
        pdVar14 = (double *)
                  thunk_FUN_02f66c64((long)plVar24 + lVar3 + 0x20,
                                     *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) +
                                                                  0xc0) + 0x100) + 0x80) + 0x80);
        plVar23 = *(long **)(unaff_x23 + 0x40);
        if (plVar23 != (long *)0x0) {
          dVar28 = *pdVar14;
          lVar25 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
          if ((*(ushort *)(lVar25 + 0x135) & 1) == 0) {
            lVar25 = FUN_02f41e9c(lVar25);
          }
          lVar20 = *plVar23;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar8 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar25) {
                puVar16 = (undefined8 *)(lVar20 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_04d9a7e8;
              }
              uVar21 = uVar21 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar21 != 0);
          }
          puVar16 = (undefined8 *)FUN_02f421d0(plVar23,lVar25,1);
LAB_04d9a7e8:
          dVar27 = (double)(*(code *)*puVar16)(plVar23,puVar16[1]);
          if (dVar28 + dVar27 <= (double)fVar26) {
            uVar7 = *(undefined8 *)
                     (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x100) + 0x80);
            FUN_02f08788(uVar7,1);
            puVar15 = (undefined1 *)thunk_FUN_02f66c64((long)plVar24 + lVar3 + 0x20,uVar7);
            pvVar6 = *(void **)(unaff_x29 + -0x60);
            *puVar15 = 1;
            memcpy(puVar17,pvVar6,unaff_x21);
            FUN_02f08790((long)plVar24 + lVar3 + 0x20,
                         *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x100)
                                  + 0x80) + 0x20,puVar17,unaff_x21 & 0xffffffff);
          }
          goto LAB_04d9a868;
        }
      }
    }
  }
LAB_04d9a8e0:
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_04d9a910:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


