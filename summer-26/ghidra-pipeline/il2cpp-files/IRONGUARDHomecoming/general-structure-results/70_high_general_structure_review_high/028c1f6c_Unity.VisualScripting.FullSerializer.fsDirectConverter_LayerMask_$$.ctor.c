/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$.ctor
ENTRY_POINT: 028c1f6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Type propagation algorithm not settling */

uint Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>___ctor
               (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,long param_5)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  long lVar11;
  void *__dest;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  ulong uVar15;
  undefined1 *__dest_00;
  long *plVar16;
  size_t sVar17;
  ulong uVar18;
  void *pvVar19;
  ulong uVar20;
  undefined1 *__dest_01;
  undefined1 *__dest_02;
  undefined1 *__dest_03;
  undefined1 *__dest_04;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x10) = param_1;
  bVar1 = *(byte *)(unaff_x19 + 0xa5f);
  *(undefined8 *)(unaff_x29 + -0x50) = param_2;
  if ((bVar1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Drawing_DrawingData_Render__);
    *(undefined1 *)(unaff_x19 + 0xa5f) = 1;
  }
  plVar16 = (long *)(param_5 + 0x20);
  lVar11 = *plVar16;
  uVar2 = *(ushort *)(lVar11 + 0x135);
  lVar5 = lVar11;
  if ((uVar2 & 1) == 0) {
    lVar11 = FUN_01ecaf44(lVar11);
    uVar2 = *(ushort *)(*plVar16 + 0x135);
    lVar5 = *plVar16;
  }
  *(ulong *)(unaff_x29 + -0x18) =
       (ulong)*(uint *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
  lVar11 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
    uVar2 = *(ushort *)(*plVar16 + 0x135);
    lVar11 = *plVar16;
  }
  uVar18 = (ulong)*(uint *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0xfc);
  lVar5 = lVar11;
  if ((uVar2 & 1) == 0) {
    lVar11 = FUN_01ecaf44(lVar11);
    uVar2 = *(ushort *)(*plVar16 + 0x135);
    lVar5 = *plVar16;
  }
  uVar15 = (ulong)*(uint *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x18) + 0xfc);
  lVar11 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
    uVar2 = *(ushort *)(*plVar16 + 0x135);
    lVar11 = *plVar16;
  }
  uVar20 = (ulong)*(uint *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0xfc);
  lVar5 = lVar11;
  if ((uVar2 & 1) == 0) {
    lVar11 = FUN_01ecaf44(lVar11);
    uVar2 = *(ushort *)(*plVar16 + 0x135);
    lVar5 = *plVar16;
  }
  *(ulong *)(unaff_x29 + -0x20) =
       (ulong)*(uint *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x28) + 0xfc);
  lVar11 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
    uVar2 = *(ushort *)(*plVar16 + 0x135);
    lVar11 = *plVar16;
  }
  *(ulong *)(unaff_x29 + -0x28) = (ulong)*(uint *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0xfc)
  ;
  lVar5 = lVar11;
  if ((uVar2 & 1) == 0) {
    lVar11 = FUN_01ecaf44(lVar11);
    uVar2 = *(ushort *)(*plVar16 + 0x135);
    lVar5 = *plVar16;
  }
  *(ulong *)(unaff_x29 + -0x30) =
       (ulong)*(uint *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x38) + 0xfc);
  lVar11 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
    uVar2 = *(ushort *)(*plVar16 + 0x135);
    lVar11 = *plVar16;
  }
  *(ulong *)(unaff_x29 + -0x38) = (ulong)*(uint *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x40) + 0xfc)
  ;
  if ((uVar2 & 1) == 0) {
    lVar11 = FUN_01ecaf44(lVar11);
  }
  uVar12 = uVar18 + 0xf & 0x1fffffff0;
  uVar13 = (ulong)*(uint *)(**(long **)(lVar11 + 0xc0) + 0xfc);
  __dest_04 = &stack0x00000000 + -uVar12;
  __dest_02 = __dest_04 + -uVar12;
  uVar12 = uVar15 + 0xf & 0x1fffffff0;
  __dest_03 = __dest_02 + -uVar12;
  *(ulong *)(unaff_x29 + -0x60) = uVar20;
  *(ulong *)(unaff_x29 + -0x58) = uVar15;
  __dest_00 = __dest_03 + -uVar12;
  uVar15 = uVar20 + 0xf & 0x1fffffff0;
  __dest_01 = __dest_00 + -uVar15;
  lVar5 = (long)__dest_01 - uVar15;
  *(long *)(unaff_x29 + -0x68) = lVar5;
  uVar15 = *(long *)(unaff_x29 + -0x20) + 0xfU & 0x1fffffff0;
  lVar5 = lVar5 - uVar15;
  *(long *)(unaff_x29 + -0x78) = lVar5;
  lVar5 = lVar5 - uVar15;
  *(long *)(unaff_x29 + -0x70) = lVar5;
  uVar15 = *(long *)(unaff_x29 + -0x28) + 0xfU & 0x1fffffff0;
  lVar5 = lVar5 - uVar15;
  *(long *)(unaff_x29 + -0x88) = lVar5;
  lVar5 = lVar5 - uVar15;
  *(long *)(unaff_x29 + -0x80) = lVar5;
  uVar15 = *(long *)(unaff_x29 + -0x30) + 0xfU & 0x1fffffff0;
  lVar5 = lVar5 - uVar15;
  *(long *)(unaff_x29 + -0x98) = lVar5;
  lVar5 = lVar5 - uVar15;
  *(long *)(unaff_x29 + -0x90) = lVar5;
  uVar15 = *(long *)(unaff_x29 + -0x38) + 0xfU & 0x1fffffff0;
  lVar5 = lVar5 - uVar15;
  *(ulong *)(unaff_x29 + -0xb8) = uVar13;
  *(long *)(unaff_x29 + -0xb0) = lVar5;
  lVar5 = lVar5 - uVar15;
  *(long *)(unaff_x29 + -0xa8) = lVar5;
  uVar15 = uVar13 + 0xf & 0x1fffffff0;
  lVar5 = lVar5 - uVar15;
  *(long *)(unaff_x29 + -0xc0) = lVar5;
  lVar5 = lVar5 - uVar15;
  *(long *)(unaff_x29 + -0xa0) = lVar5;
  uVar15 = *(size_t *)(unaff_x29 + -0x18) + 0xf & 0x1fffffff0;
  __dest = (void *)(lVar5 - uVar15);
  pvVar6 = (void *)((long)__dest - uVar15);
  *(void **)(unaff_x29 + -0x48) = pvVar6;
  memset(pvVar6,0,*(size_t *)(unaff_x29 + -0x18));
  if (param_3 != (long *)0x0) {
    lVar5 = *plVar16;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    if (*param_3 == lVar5) {
      lVar5 = *plVar16;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      if (*(long *)(*param_3 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(param_3);
      }
      pvVar6 = (void *)thunk_FUN_01f11920();
      memcpy(*(void **)(unaff_x29 + -0x48),pvVar6,*(size_t *)(unaff_x29 + -0x18));
      lVar5 = *plVar16;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      pvVar6 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x80));
      memcpy(__dest_04,pvVar6,uVar18);
      lVar5 = *plVar16;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      uVar7 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 8),__dest_04);
      memcpy(__dest,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
      lVar5 = *plVar16;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      pvVar6 = (void *)thunk_FUN_01ee7388(__dest,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x80)
                                         );
      memcpy(__dest_02,pvVar6,uVar18);
      lVar5 = *plVar16;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      uVar8 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 8),__dest_02);
      puVar3 = Method_Drawing_DrawingData_Render__;
      if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *param_4;
      uVar18 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar18 != 0) {
        piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)Method_Drawing_DrawingData_Render__) {
            puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_028c2454;
          }
          uVar18 = uVar18 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar18 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(param_4,*(long *)Method_Drawing_DrawingData_Render__,0);
LAB_028c2454:
      uVar18 = (*(code *)*puVar9)(param_4,uVar7,uVar8,puVar9[1]);
      if ((uVar18 & 1) != 0) {
        lVar5 = *plVar16;
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44();
        }
        pvVar6 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                            *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) +
                                                     0x80) + 0x20);
        memcpy(__dest_03,pvVar6,*(size_t *)(unaff_x29 + -0x58));
        lVar5 = *plVar16;
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44();
        }
        uVar7 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18),__dest_03);
        memcpy(__dest,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
        lVar5 = *plVar16;
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44();
        }
        sVar17 = *(size_t *)(unaff_x29 + -0x58);
        pvVar6 = (void *)thunk_FUN_01ee7388(__dest,*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) +
                                                                      0x10) + 0x80) + 0x20);
        memcpy(__dest_00,pvVar6,sVar17);
        lVar5 = *plVar16;
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44();
        }
        uVar8 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18),__dest_00);
        lVar5 = *param_4;
        uVar18 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar18 != 0) {
          piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_028c2584;
            }
            uVar18 = uVar18 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar18 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(param_4,*(long *)puVar3,0);
LAB_028c2584:
        uVar18 = (*(code *)*puVar9)(param_4,uVar7,uVar8,puVar9[1]);
        if ((uVar18 & 1) != 0) {
          lVar5 = *plVar16;
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44();
          }
          pvVar19 = *(void **)(unaff_x29 + -0x68);
          pvVar6 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                              *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) +
                                                       0x80) + 0x40);
          memcpy(__dest_01,pvVar6,*(size_t *)(unaff_x29 + -0x60));
          lVar5 = *plVar16;
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44();
          }
          uVar7 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20),__dest_01);
          memcpy(__dest,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
          lVar5 = *plVar16;
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44();
          }
          sVar17 = *(size_t *)(unaff_x29 + -0x60);
          pvVar6 = (void *)thunk_FUN_01ee7388(__dest,*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) +
                                                                        0x10) + 0x80) + 0x40);
          memcpy(pvVar19,pvVar6,sVar17);
          lVar5 = *plVar16;
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44();
          }
          uVar8 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20),pvVar19);
          lVar5 = *param_4;
          uVar18 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar18 != 0) {
            piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
                goto Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__TrySerialize;
              }
              uVar18 = uVar18 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar18 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(param_4,*(long *)puVar3,0);
Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__TrySerialize:
          uVar18 = (*(code *)*puVar9)(param_4,uVar7,uVar8,puVar9[1]);
          if ((uVar18 & 1) != 0) {
            lVar5 = *plVar16;
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_01ecaf44();
            }
            pvVar6 = *(void **)(unaff_x29 + -0x78);
            pvVar19 = *(void **)(unaff_x29 + -0x70);
            pvVar10 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                                 *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10)
                                                          + 0x80) + 0x60);
            memcpy(pvVar6,pvVar10,*(size_t *)(unaff_x29 + -0x20));
            lVar5 = *plVar16;
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_01ecaf44();
            }
            uVar7 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28),pvVar6);
            memcpy(__dest,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
            lVar5 = *plVar16;
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_01ecaf44();
            }
            pvVar6 = (void *)thunk_FUN_01ee7388(__dest,*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) +
                                                                          0x10) + 0x80) + 0x60);
            memcpy(pvVar19,pvVar6,*(size_t *)(unaff_x29 + -0x20));
            lVar5 = *plVar16;
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_01ecaf44();
            }
            uVar8 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28),pvVar19);
            lVar5 = *param_4;
            uVar18 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar18 != 0) {
              piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_028c27e8;
                }
                uVar18 = uVar18 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar18 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ecb238(param_4,*(long *)puVar3,0);
LAB_028c27e8:
            uVar18 = (*(code *)*puVar9)(param_4,uVar7,uVar8,puVar9[1]);
            if ((uVar18 & 1) != 0) {
              lVar5 = *plVar16;
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_01ecaf44();
              }
              pvVar6 = *(void **)(unaff_x29 + -0x88);
              pvVar19 = *(void **)(unaff_x29 + -0x80);
              pvVar10 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                                   *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) +
                                                                      0x10) + 0x80) + 0x80);
              memcpy(pvVar6,pvVar10,*(size_t *)(unaff_x29 + -0x28));
              lVar5 = *plVar16;
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_01ecaf44();
              }
              uVar7 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x30),pvVar6);
              memcpy(__dest,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
              lVar5 = *plVar16;
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_01ecaf44();
              }
              pvVar6 = (void *)thunk_FUN_01ee7388(__dest,*(long *)(*(long *)(*(long *)(lVar5 + 0xc0)
                                                                            + 0x10) + 0x80) + 0x80);
              memcpy(pvVar19,pvVar6,*(size_t *)(unaff_x29 + -0x28));
              lVar5 = *plVar16;
              if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_01ecaf44();
              }
              uVar8 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x30),pvVar19);
              lVar5 = *param_4;
              uVar18 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar18 != 0) {
                piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                    puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_028c2918;
                  }
                  uVar18 = uVar18 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar18 != 0);
              }
              puVar9 = (undefined8 *)FUN_01ecb238(param_4,*(long *)puVar3,0);
LAB_028c2918:
              uVar18 = (*(code *)*puVar9)(param_4,uVar7,uVar8,puVar9[1]);
              if ((uVar18 & 1) != 0) {
                lVar5 = *plVar16;
                if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_01ecaf44();
                }
                pvVar6 = *(void **)(unaff_x29 + -0x98);
                pvVar19 = *(void **)(unaff_x29 + -0x90);
                pvVar10 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                                     *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) +
                                                                        0x10) + 0x80) + 0xa0);
                memcpy(pvVar6,pvVar10,*(size_t *)(unaff_x29 + -0x30));
                lVar5 = *plVar16;
                if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_01ecaf44();
                }
                uVar7 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38),pvVar6);
                memcpy(__dest,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
                lVar5 = *plVar16;
                if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_01ecaf44();
                }
                pvVar6 = (void *)thunk_FUN_01ee7388(__dest,*(long *)(*(long *)(*(long *)(lVar5 + 
                                                  0xc0) + 0x10) + 0x80) + 0xa0);
                memcpy(pvVar19,pvVar6,*(size_t *)(unaff_x29 + -0x30));
                lVar5 = *plVar16;
                if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_01ecaf44();
                }
                uVar8 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38),pvVar19);
                lVar5 = *param_4;
                uVar18 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar18 != 0) {
                  piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                      puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_028c2a48;
                    }
                    uVar18 = uVar18 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar18 != 0);
                }
                puVar9 = (undefined8 *)FUN_01ecb238(param_4,*(long *)puVar3,0);
LAB_028c2a48:
                uVar18 = (*(code *)*puVar9)(param_4,uVar7,uVar8,puVar9[1]);
                if ((uVar18 & 1) != 0) {
                  lVar5 = *plVar16;
                  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    lVar5 = FUN_01ecaf44();
                  }
                  pvVar6 = *(void **)(unaff_x29 + -0xb0);
                  pvVar19 = *(void **)(unaff_x29 + -0xa8);
                  pvVar10 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                                       *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) +
                                                                          0x10) + 0x80) + 0xc0);
                  memcpy(pvVar6,pvVar10,*(size_t *)(unaff_x29 + -0x38));
                  lVar5 = *plVar16;
                  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    lVar5 = FUN_01ecaf44();
                  }
                  uVar7 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x40),pvVar6)
                  ;
                  memcpy(__dest,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
                  lVar5 = *plVar16;
                  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    lVar5 = FUN_01ecaf44();
                  }
                  pvVar6 = (void *)thunk_FUN_01ee7388(__dest,*(long *)(*(long *)(*(long *)(lVar5 + 
                                                  0xc0) + 0x10) + 0x80) + 0xc0);
                  memcpy(pvVar19,pvVar6,*(size_t *)(unaff_x29 + -0x38));
                  lVar5 = *plVar16;
                  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    lVar5 = FUN_01ecaf44();
                  }
                  uVar8 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x40),pvVar19
                                            );
                  lVar5 = *param_4;
                  uVar18 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar18 != 0) {
                    piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                        puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_028c2b78;
                      }
                      uVar18 = uVar18 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_01ecb238(param_4,*(long *)puVar3,0);
LAB_028c2b78:
                  uVar18 = (*(code *)*puVar9)(param_4,uVar7,uVar8,puVar9[1]);
                  if ((uVar18 & 1) != 0) {
                    lVar5 = *plVar16;
                    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                      lVar5 = FUN_01ecaf44();
                    }
                    pvVar6 = *(void **)(unaff_x29 + -0xc0);
                    sVar17 = *(size_t *)(unaff_x29 + -0xb8);
                    pvVar19 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                                         *(long *)(*(long *)(*(long *)(lVar5 + 0xc0)
                                                                            + 0x10) + 0x80) + 0xe0);
                    memcpy(pvVar6,pvVar19,sVar17);
                    lVar5 = *plVar16;
                    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                      lVar5 = FUN_01ecaf44();
                    }
                    uVar7 = thunk_FUN_01f113fc(**(undefined8 **)(lVar5 + 0xc0),pvVar6);
                    memcpy(__dest,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
                    lVar5 = *plVar16;
                    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                      lVar5 = FUN_01ecaf44();
                    }
                    pvVar6 = (void *)thunk_FUN_01ee7388(__dest,*(long *)(*(long *)(*(long *)(lVar5 +
                                                                                            0xc0) +
                                                                                  0x10) + 0x80) +
                                                               0xe0);
                    memcpy(*(void **)(unaff_x29 + -0xa0),pvVar6,sVar17);
                    lVar5 = *plVar16;
                    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                      lVar5 = FUN_01ecaf44();
                    }
                    uVar8 = thunk_FUN_01f113fc(**(undefined8 **)(lVar5 + 0xc0),
                                               *(undefined8 *)(unaff_x29 + -0xa0));
                    lVar5 = *param_4;
                    uVar18 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar18 != 0) {
                      piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                          puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
                          goto LAB_028c2ce4;
                        }
                        uVar18 = uVar18 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_01ecb238(param_4,*(long *)puVar3,0);
LAB_028c2ce4:
                    uVar4 = (*(code *)*puVar9)(param_4,uVar7,uVar8,puVar9[1]);
                    goto LAB_028c2ca0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_028c2ca0:
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 1;
}


