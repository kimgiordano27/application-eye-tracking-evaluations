/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawAxis
ENTRY_POINT: 01b3bb84
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawAxis(undefined8 param_1,long *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  void *__src;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  undefined1 *__dest;
  void *pvVar15;
  size_t sVar16;
  ulong uVar17;
  undefined8 unaff_x22;
  undefined1 *__dest_00;
  ulong uVar18;
  undefined1 *__dest_01;
  long unaff_x24;
  undefined1 *__dest_02;
  ulong uVar19;
  void *pvVar20;
  long *plVar21;
  ulong uVar22;
  long unaff_x29;
  
  bVar1 = *(byte *)(unaff_x19 + 0x78a);
  *(undefined8 *)(unaff_x29 + -0x20) = param_1;
  if ((bVar1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234d9d8);
    *(undefined1 *)(unaff_x19 + 0x78a) = 1;
  }
  plVar21 = (long *)(unaff_x24 + 0x20);
  lVar10 = *plVar21;
  uVar2 = *(ushort *)(lVar10 + 0x135);
  lVar4 = lVar10;
  if ((uVar2 & 1) == 0) {
    lVar10 = FUN_0103c244(lVar10);
    uVar2 = *(ushort *)(*plVar21 + 0x135);
    lVar4 = *plVar21;
  }
  plVar12 = *(long **)(lVar10 + 0xc0);
  *(undefined8 *)(unaff_x29 + -0x28) = unaff_x22;
  uVar17 = (ulong)*(uint *)(*plVar12 + 0xfc);
  lVar10 = lVar4;
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
    uVar2 = *(ushort *)(*plVar21 + 0x135);
    lVar10 = *plVar21;
  }
  uVar22 = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0xfc);
  lVar4 = lVar10;
  if ((uVar2 & 1) == 0) {
    lVar10 = FUN_0103c244(lVar10);
    uVar2 = *(ushort *)(*plVar21 + 0x135);
    lVar4 = *plVar21;
  }
  uVar18 = (ulong)*(uint *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x58) + 0xfc);
  lVar10 = lVar4;
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
    uVar2 = *(ushort *)(*plVar21 + 0x135);
    lVar10 = *plVar21;
  }
  uVar19 = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x80) + 0xfc);
  if ((uVar2 & 1) == 0) {
    lVar10 = FUN_0103c244(lVar10);
  }
  uVar11 = uVar22 + 0xf & 0x1fffffff0;
  uVar13 = (ulong)*(uint *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0xa8) + 0xfc);
  __dest_00 = &stack0x00000000 + -uVar11;
  __dest = __dest_00 + -uVar11;
  uVar11 = uVar18 + 0xf & 0x1fffffff0;
  __dest_02 = __dest + -uVar11;
  *(ulong *)(unaff_x29 + -0x38) = uVar19;
  *(ulong *)(unaff_x29 + -0x30) = uVar18;
  __dest_01 = __dest_02 + -uVar11;
  uVar18 = uVar19 + 0xf & 0x1fffffff0;
  lVar4 = (long)__dest_01 - uVar18;
  *(ulong *)(unaff_x29 + -0x50) = uVar13;
  *(long *)(unaff_x29 + -0x48) = lVar4;
  lVar4 = lVar4 - uVar18;
  *(long *)(unaff_x29 + -0x40) = lVar4;
  uVar18 = uVar13 + 0xf & 0x1fffffff0;
  lVar4 = lVar4 - uVar18;
  *(long *)(unaff_x29 + -0x60) = lVar4;
  lVar4 = lVar4 - uVar18;
  *(long *)(unaff_x29 + -0x58) = lVar4;
  uVar18 = uVar17 + 0xf & 0x1fffffff0;
  lVar4 = lVar4 - uVar18;
  *(long *)(unaff_x29 + -0x10) = lVar4;
  pvVar20 = (void *)(lVar4 - uVar18);
  memset(pvVar20,0,uVar17);
  if (param_2 == (long *)0x0) {
    uVar6 = 1;
  }
  else {
    lVar4 = *plVar21;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    if (*param_2 != lVar4) {
      pvVar20 = *(void **)(unaff_x29 + -0x10);
      memcpy(pvVar20,*(void **)(unaff_x29 + -0x20),uVar17);
      lVar4 = FUN_00e5db00(*(undefined8 *)(unaff_x24 + 0x20));
      uVar6 = thunk_FUN_0103fd0c(**(undefined8 **)(lVar4 + 0xc0),pvVar20);
      plVar21 = (long *)thunk_FUN_0105d828(uVar6,0);
      FUN_00e5db80();
      uVar6 = (**(code **)(*plVar21 + 0x168))(plVar21,*(undefined8 *)(*plVar21 + 0x170));
      uVar7 = thunk_FUN_010303a8(PTR_DAT_0234d9e0);
      uVar6 = FUN_01c42574(uVar7,uVar6,0);
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar7 = thunk_FUN_010400dc();
      uVar9 = thunk_FUN_010303a8(PTR_DAT_0234d120);
      FUN_01c5e198(uVar7,uVar6,uVar9,0);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar7);
    }
    lVar4 = *plVar21;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244(lVar4);
    }
    if (*(long *)(*param_2 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(param_2);
    }
    pvVar5 = (void *)thunk_FUN_01040230();
    memcpy(pvVar20,pvVar5,uVar17);
    lVar4 = *plVar21;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    pvVar5 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x20),
                                        *(undefined8 *)(**(long **)(lVar4 + 0xc0) + 0x80));
    memcpy(__dest_00,pvVar5,uVar22);
    lVar4 = *plVar21;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x30),__dest_00);
    memcpy(*(void **)(unaff_x29 + -0x10),pvVar20,uVar17);
    lVar4 = *plVar21;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    pvVar5 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x10),
                                        *(undefined8 *)(**(long **)(lVar4 + 0xc0) + 0x80));
    memcpy(__dest,pvVar5,uVar22);
    lVar4 = *plVar21;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    plVar12 = *(long **)(unaff_x29 + -0x28);
    uVar7 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x30),__dest);
    puVar3 = PTR_DAT_0234d9d8;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar4 = *plVar12;
    uVar22 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar22 != 0) {
      piVar14 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0234d9d8) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_01b3bf00;
        }
        uVar22 = uVar22 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar22 != 0);
    }
    puVar8 = (undefined8 *)FUN_0103c348(plVar12,*(long *)PTR_DAT_0234d9d8,0);
LAB_01b3bf00:
    uVar6 = (*(code *)*puVar8)(plVar12,uVar6,uVar7,puVar8[1]);
    if ((int)uVar6 == 0) {
      lVar4 = *plVar21;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      pvVar5 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x20),
                                          *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x20);
      memcpy(__dest_02,pvVar5,*(size_t *)(unaff_x29 + -0x30));
      lVar4 = *plVar21;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x58),__dest_02);
      memcpy(*(void **)(unaff_x29 + -0x10),pvVar20,uVar17);
      lVar4 = *plVar21;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      sVar16 = *(size_t *)(unaff_x29 + -0x30);
      pvVar5 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x10),
                                          *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x20);
      memcpy(__dest_01,pvVar5,sVar16);
      lVar4 = *plVar21;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      uVar7 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x58),__dest_01);
      lVar4 = *plVar12;
      uVar22 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar22 != 0) {
        piVar14 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar4 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_01b3c030;
          }
          uVar22 = uVar22 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar22 != 0);
      }
      puVar8 = (undefined8 *)FUN_0103c348(plVar12,*(long *)puVar3,0);
LAB_01b3c030:
      uVar6 = (*(code *)*puVar8)(plVar12,uVar6,uVar7,puVar8[1]);
      if ((int)uVar6 == 0) {
        lVar4 = *plVar21;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244();
        }
        pvVar5 = *(void **)(unaff_x29 + -0x48);
        pvVar15 = *(void **)(unaff_x29 + -0x40);
        __src = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x20),
                                           *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x40);
        memcpy(pvVar5,__src,*(size_t *)(unaff_x29 + -0x38));
        lVar4 = *plVar21;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244();
        }
        uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x80),pvVar5);
        memcpy(*(void **)(unaff_x29 + -0x10),pvVar20,uVar17);
        lVar4 = *plVar21;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244();
        }
        pvVar5 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x10),
                                            *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x40);
        memcpy(pvVar15,pvVar5,*(size_t *)(unaff_x29 + -0x38));
        lVar4 = *plVar21;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244();
        }
        uVar7 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x80),pvVar15);
        lVar4 = *plVar12;
        uVar22 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar22 != 0) {
          piVar14 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar4 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_01b3c160;
            }
            uVar22 = uVar22 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar22 != 0);
        }
        puVar8 = (undefined8 *)FUN_0103c348(plVar12,*(long *)puVar3,0);
LAB_01b3c160:
        uVar6 = (*(code *)*puVar8)(plVar12,uVar6,uVar7,puVar8[1]);
        if ((int)uVar6 == 0) {
          lVar4 = *plVar21;
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0103c244();
          }
          sVar16 = *(size_t *)(unaff_x29 + -0x50);
          pvVar15 = *(void **)(unaff_x29 + -0x60);
          pvVar5 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x20),
                                              *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x60);
          memcpy(pvVar15,pvVar5,sVar16);
          lVar4 = *plVar21;
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0103c244();
          }
          uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xa8),pvVar15);
          memcpy(*(void **)(unaff_x29 + -0x10),pvVar20,uVar17);
          lVar4 = *plVar21;
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0103c244();
          }
          pvVar5 = *(void **)(unaff_x29 + -0x58);
          pvVar20 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x10),
                                               *(long *)(**(long **)(lVar4 + 0xc0) + 0x80) + 0x60);
          memcpy(pvVar5,pvVar20,sVar16);
          lVar4 = *plVar21;
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0103c244();
          }
          uVar7 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xa8),pvVar5);
          lVar4 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar17 != 0) {
            piVar14 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar4 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_01b3c298;
              }
              uVar17 = uVar17 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar17 != 0);
          }
          puVar8 = (undefined8 *)FUN_0103c348(plVar12,*(long *)puVar3,0);
LAB_01b3c298:
          uVar6 = (*(code *)*puVar8)(plVar12,uVar6,uVar7,puVar8[1]);
        }
      }
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


