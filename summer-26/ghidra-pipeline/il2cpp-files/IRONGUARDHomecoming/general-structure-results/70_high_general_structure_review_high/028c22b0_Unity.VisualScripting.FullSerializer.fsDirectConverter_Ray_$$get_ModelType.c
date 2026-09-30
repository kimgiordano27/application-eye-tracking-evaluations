/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$get_ModelType
ENTRY_POINT: 028c22b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__get_ModelType(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  int *piVar8;
  void *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  size_t sVar9;
  void *unaff_x22;
  size_t unaff_x23;
  void *pvVar10;
  long *unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  if (*unaff_x24 == lVar3) {
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    if (*(long *)(*unaff_x24 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    pvVar4 = (void *)thunk_FUN_01f11920();
    memcpy(*(void **)(unaff_x29 + -0x48),pvVar4,*(size_t *)(unaff_x29 + -0x18));
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    pvVar4 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x80));
    memcpy(unaff_x28,pvVar4,unaff_x23);
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 8));
    memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
    if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    pvVar4 = (void *)thunk_FUN_01ee7388();
    memcpy(unaff_x26,pvVar4,unaff_x23);
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 8));
    puVar1 = Method_Drawing_DrawingData_Render__;
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)Method_Drawing_DrawingData_Render__) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_028c2454;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_028c2454:
    uVar7 = (*(code *)*puVar5)();
    if ((uVar7 & 1) != 0) {
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      pvVar4 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                          *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x80
                                                   ) + 0x20);
      memcpy(unaff_x27,pvVar4,*(size_t *)(unaff_x29 + -0x58));
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
      memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
      if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      sVar9 = *(size_t *)(unaff_x29 + -0x58);
      pvVar4 = (void *)thunk_FUN_01ee7388();
      memcpy(unaff_x19,pvVar4,sVar9);
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
      lVar3 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_028c2584;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238();
LAB_028c2584:
      uVar7 = (*(code *)*puVar5)();
      if ((uVar7 & 1) != 0) {
        lVar3 = *unaff_x20;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44();
        }
        pvVar10 = *(void **)(unaff_x29 + -0x68);
        pvVar4 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                            *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) +
                                                     0x80) + 0x40);
        memcpy(unaff_x25,pvVar4,*(size_t *)(unaff_x29 + -0x60));
        lVar3 = *unaff_x20;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44();
        }
        thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x20));
        memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
        if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
          FUN_01ecaf44();
        }
        sVar9 = *(size_t *)(unaff_x29 + -0x60);
        pvVar4 = (void *)thunk_FUN_01ee7388();
        memcpy(pvVar10,pvVar4,sVar9);
        lVar3 = *unaff_x20;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44();
        }
        thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x20),pvVar10);
        lVar3 = *unaff_x21;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
              goto Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__TrySerialize;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238();
Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__TrySerialize:
        uVar7 = (*(code *)*puVar5)();
        if ((uVar7 & 1) != 0) {
          lVar3 = *unaff_x20;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01ecaf44();
          }
          pvVar4 = *(void **)(unaff_x29 + -0x78);
          pvVar10 = *(void **)(unaff_x29 + -0x70);
          pvVar6 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                              *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) +
                                                       0x80) + 0x60);
          memcpy(pvVar4,pvVar6,*(size_t *)(unaff_x29 + -0x20));
          lVar3 = *unaff_x20;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01ecaf44();
          }
          thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),pvVar4);
          memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
          if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
            FUN_01ecaf44();
          }
          pvVar4 = (void *)thunk_FUN_01ee7388();
          memcpy(pvVar10,pvVar4,*(size_t *)(unaff_x29 + -0x20));
          lVar3 = *unaff_x20;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01ecaf44();
          }
          thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),pvVar10);
          lVar3 = *unaff_x21;
          uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_028c27e8;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238();
LAB_028c27e8:
          uVar7 = (*(code *)*puVar5)();
          if ((uVar7 & 1) != 0) {
            lVar3 = *unaff_x20;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_01ecaf44();
            }
            pvVar4 = *(void **)(unaff_x29 + -0x88);
            pvVar10 = *(void **)(unaff_x29 + -0x80);
            pvVar6 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                                *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10)
                                                         + 0x80) + 0x80);
            memcpy(pvVar4,pvVar6,*(size_t *)(unaff_x29 + -0x28));
            lVar3 = *unaff_x20;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_01ecaf44();
            }
            thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x30),pvVar4);
            memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
            if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
              FUN_01ecaf44();
            }
            pvVar4 = (void *)thunk_FUN_01ee7388();
            memcpy(pvVar10,pvVar4,*(size_t *)(unaff_x29 + -0x28));
            lVar3 = *unaff_x20;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_01ecaf44();
            }
            thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x30),pvVar10);
            lVar3 = *unaff_x21;
            uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_028c2918;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ecb238();
LAB_028c2918:
            uVar7 = (*(code *)*puVar5)();
            if ((uVar7 & 1) != 0) {
              lVar3 = *unaff_x20;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01ecaf44();
              }
              pvVar4 = *(void **)(unaff_x29 + -0x98);
              pvVar10 = *(void **)(unaff_x29 + -0x90);
              pvVar6 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                                  *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10
                                                                     ) + 0x80) + 0xa0);
              memcpy(pvVar4,pvVar6,*(size_t *)(unaff_x29 + -0x30));
              lVar3 = *unaff_x20;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01ecaf44();
              }
              thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38),pvVar4);
              memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
              if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
                FUN_01ecaf44();
              }
              pvVar4 = (void *)thunk_FUN_01ee7388();
              memcpy(pvVar10,pvVar4,*(size_t *)(unaff_x29 + -0x30));
              lVar3 = *unaff_x20;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01ecaf44();
              }
              thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38),pvVar10);
              lVar3 = *unaff_x21;
              uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                    puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_028c2a48;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar5 = (undefined8 *)FUN_01ecb238();
LAB_028c2a48:
              uVar7 = (*(code *)*puVar5)();
              if ((uVar7 & 1) != 0) {
                lVar3 = *unaff_x20;
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_01ecaf44();
                }
                pvVar4 = *(void **)(unaff_x29 + -0xb0);
                pvVar10 = *(void **)(unaff_x29 + -0xa8);
                pvVar6 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                                    *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) +
                                                                       0x10) + 0x80) + 0xc0);
                memcpy(pvVar4,pvVar6,*(size_t *)(unaff_x29 + -0x38));
                lVar3 = *unaff_x20;
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_01ecaf44();
                }
                thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x40),pvVar4);
                memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
                if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
                  FUN_01ecaf44();
                }
                pvVar4 = (void *)thunk_FUN_01ee7388();
                memcpy(pvVar10,pvVar4,*(size_t *)(unaff_x29 + -0x38));
                lVar3 = *unaff_x20;
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_01ecaf44();
                }
                thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x40),pvVar10);
                lVar3 = *unaff_x21;
                uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                      puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                      goto LAB_028c2b78;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar5 = (undefined8 *)FUN_01ecb238();
LAB_028c2b78:
                uVar7 = (*(code *)*puVar5)();
                if ((uVar7 & 1) != 0) {
                  lVar3 = *unaff_x20;
                  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    lVar3 = FUN_01ecaf44();
                  }
                  pvVar4 = *(void **)(unaff_x29 + -0xc0);
                  sVar9 = *(size_t *)(unaff_x29 + -0xb8);
                  pvVar10 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                                       *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) +
                                                                          0x10) + 0x80) + 0xe0);
                  memcpy(pvVar4,pvVar10,sVar9);
                  lVar3 = *unaff_x20;
                  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    lVar3 = FUN_01ecaf44();
                  }
                  thunk_FUN_01f113fc(**(undefined8 **)(lVar3 + 0xc0),pvVar4);
                  memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
                  if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
                    FUN_01ecaf44();
                  }
                  pvVar4 = (void *)thunk_FUN_01ee7388();
                  memcpy(*(void **)(unaff_x29 + -0xa0),pvVar4,sVar9);
                  lVar3 = *unaff_x20;
                  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    lVar3 = FUN_01ecaf44();
                  }
                  thunk_FUN_01f113fc(**(undefined8 **)(lVar3 + 0xc0),
                                     *(undefined8 *)(unaff_x29 + -0xa0));
                  lVar3 = *unaff_x21;
                  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
                  if (uVar7 != 0) {
                    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                        puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                        goto LAB_028c2ce4;
                      }
                      uVar7 = uVar7 - 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_028c2ce4:
                  uVar2 = (*(code *)*puVar5)();
                  goto LAB_028c2ca0;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_028c2ca0:
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


