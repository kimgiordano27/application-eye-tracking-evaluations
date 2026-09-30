/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$TryDeserialize
ENTRY_POINT: 028c2474
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_8;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__TryDeserialize
               (ulong param_1,long param_2)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulong uVar6;
  int *piVar7;
  void *unaff_x19;
  long *unaff_x20;
  size_t sVar8;
  void *unaff_x22;
  void *pvVar9;
  void *unaff_x25;
  long *unaff_x26;
  void *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_01ecaf44();
  }
  pvVar2 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                      *(long *)(*(long *)(*(long *)(param_2 + 0xc0) + 0x10) + 0x80)
                                      + 0x20);
  memcpy(unaff_x27,pvVar2,*(size_t *)(unaff_x29 + -0x58));
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
  memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
  if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  sVar8 = *(size_t *)(unaff_x29 + -0x58);
  pvVar2 = (void *)thunk_FUN_01ee7388();
  memcpy(unaff_x19,pvVar2,sVar8);
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
  lVar3 = *unaff_x28;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x26) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_028c2584;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_028c2584:
  uVar6 = (*(code *)*puVar4)();
  if ((uVar6 & 1) != 0) {
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    pvVar9 = *(void **)(unaff_x29 + -0x68);
    pvVar2 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                        *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x80)
                                        + 0x40);
    memcpy(unaff_x25,pvVar2,*(size_t *)(unaff_x29 + -0x60));
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x20));
    memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
    if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    sVar8 = *(size_t *)(unaff_x29 + -0x60);
    pvVar2 = (void *)thunk_FUN_01ee7388();
    memcpy(pvVar9,pvVar2,sVar8);
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x20),pvVar9);
    lVar3 = *unaff_x28;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__TrySerialize;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__TrySerialize:
    uVar6 = (*(code *)*puVar4)();
    if ((uVar6 & 1) != 0) {
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      pvVar2 = *(void **)(unaff_x29 + -0x78);
      pvVar9 = *(void **)(unaff_x29 + -0x70);
      pvVar5 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                          *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x80
                                                   ) + 0x60);
      memcpy(pvVar2,pvVar5,*(size_t *)(unaff_x29 + -0x20));
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),pvVar2);
      memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
      if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      pvVar2 = (void *)thunk_FUN_01ee7388();
      memcpy(pvVar9,pvVar2,*(size_t *)(unaff_x29 + -0x20));
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),pvVar9);
      lVar3 = *unaff_x28;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_028c27e8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_028c27e8:
      uVar6 = (*(code *)*puVar4)();
      if ((uVar6 & 1) != 0) {
        lVar3 = *unaff_x20;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44();
        }
        pvVar2 = *(void **)(unaff_x29 + -0x88);
        pvVar9 = *(void **)(unaff_x29 + -0x80);
        pvVar5 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                            *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) +
                                                     0x80) + 0x80);
        memcpy(pvVar2,pvVar5,*(size_t *)(unaff_x29 + -0x28));
        lVar3 = *unaff_x20;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44();
        }
        thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x30),pvVar2);
        memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
        if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
          FUN_01ecaf44();
        }
        pvVar2 = (void *)thunk_FUN_01ee7388();
        memcpy(pvVar9,pvVar2,*(size_t *)(unaff_x29 + -0x28));
        lVar3 = *unaff_x20;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44();
        }
        thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x30),pvVar9);
        lVar3 = *unaff_x28;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_028c2918;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238();
LAB_028c2918:
        uVar6 = (*(code *)*puVar4)();
        if ((uVar6 & 1) != 0) {
          lVar3 = *unaff_x20;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01ecaf44();
          }
          pvVar2 = *(void **)(unaff_x29 + -0x98);
          pvVar9 = *(void **)(unaff_x29 + -0x90);
          pvVar5 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                              *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) +
                                                       0x80) + 0xa0);
          memcpy(pvVar2,pvVar5,*(size_t *)(unaff_x29 + -0x30));
          lVar3 = *unaff_x20;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01ecaf44();
          }
          thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38),pvVar2);
          memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
          if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
            FUN_01ecaf44();
          }
          pvVar2 = (void *)thunk_FUN_01ee7388();
          memcpy(pvVar9,pvVar2,*(size_t *)(unaff_x29 + -0x30));
          lVar3 = *unaff_x20;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01ecaf44();
          }
          thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38),pvVar9);
          lVar3 = *unaff_x28;
          uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x26) {
                puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_028c2a48;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ecb238();
LAB_028c2a48:
          uVar6 = (*(code *)*puVar4)();
          if ((uVar6 & 1) != 0) {
            lVar3 = *unaff_x20;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_01ecaf44();
            }
            pvVar2 = *(void **)(unaff_x29 + -0xb0);
            pvVar9 = *(void **)(unaff_x29 + -0xa8);
            pvVar5 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                                *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10)
                                                         + 0x80) + 0xc0);
            memcpy(pvVar2,pvVar5,*(size_t *)(unaff_x29 + -0x38));
            lVar3 = *unaff_x20;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_01ecaf44();
            }
            thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x40),pvVar2);
            memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
            if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
              FUN_01ecaf44();
            }
            pvVar2 = (void *)thunk_FUN_01ee7388();
            memcpy(pvVar9,pvVar2,*(size_t *)(unaff_x29 + -0x38));
            lVar3 = *unaff_x20;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_01ecaf44();
            }
            thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x40),pvVar9);
            lVar3 = *unaff_x28;
            uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *unaff_x26) {
                  puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_028c2b78;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined8 *)FUN_01ecb238();
LAB_028c2b78:
            uVar6 = (*(code *)*puVar4)();
            if ((uVar6 & 1) != 0) {
              lVar3 = *unaff_x20;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01ecaf44();
              }
              pvVar2 = *(void **)(unaff_x29 + -0xc0);
              sVar8 = *(size_t *)(unaff_x29 + -0xb8);
              pvVar9 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                                  *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10
                                                                     ) + 0x80) + 0xe0);
              memcpy(pvVar2,pvVar9,sVar8);
              lVar3 = *unaff_x20;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01ecaf44();
              }
              thunk_FUN_01f113fc(**(undefined8 **)(lVar3 + 0xc0),pvVar2);
              memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
              if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
                FUN_01ecaf44();
              }
              pvVar2 = (void *)thunk_FUN_01ee7388();
              memcpy(*(void **)(unaff_x29 + -0xa0),pvVar2,sVar8);
              lVar3 = *unaff_x20;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01ecaf44();
              }
              thunk_FUN_01f113fc(**(undefined8 **)(lVar3 + 0xc0),*(undefined8 *)(unaff_x29 + -0xa0))
              ;
              lVar3 = *unaff_x28;
              uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *unaff_x26) {
                    puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_028c2ce4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar4 = (undefined8 *)FUN_01ecb238();
LAB_028c2ce4:
              uVar1 = (*(code *)*puVar4)();
              goto LAB_028c2ca0;
            }
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_028c2ca0:
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


