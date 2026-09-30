/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$.ctor
ENTRY_POINT: 028c264c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>___ctor(long param_1)

{
  size_t __n;
  uint uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x20;
  void *unaff_x22;
  long *unaff_x26;
  long *unaff_x28;
  long unaff_x29;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_01ecaf44();
  }
  thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x20));
  lVar6 = *unaff_x28;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x26) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__TrySerialize;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__TrySerialize:
  uVar7 = (*(code *)*puVar2)();
  if ((uVar7 & 1) != 0) {
    lVar6 = *unaff_x20;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    pvVar4 = *(void **)(unaff_x29 + -0x78);
    pvVar5 = *(void **)(unaff_x29 + -0x70);
    pvVar3 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                        *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x80)
                                        + 0x60);
    memcpy(pvVar4,pvVar3,*(size_t *)(unaff_x29 + -0x20));
    lVar6 = *unaff_x20;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),pvVar4);
    memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
    if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    pvVar4 = (void *)thunk_FUN_01ee7388();
    memcpy(pvVar5,pvVar4,*(size_t *)(unaff_x29 + -0x20));
    lVar6 = *unaff_x20;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),pvVar5);
    lVar6 = *unaff_x28;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_028c27e8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_028c27e8:
    uVar7 = (*(code *)*puVar2)();
    if ((uVar7 & 1) != 0) {
      lVar6 = *unaff_x20;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      pvVar4 = *(void **)(unaff_x29 + -0x88);
      pvVar5 = *(void **)(unaff_x29 + -0x80);
      pvVar3 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                          *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x80
                                                   ) + 0x80);
      memcpy(pvVar4,pvVar3,*(size_t *)(unaff_x29 + -0x28));
      lVar6 = *unaff_x20;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x30),pvVar4);
      memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
      if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      pvVar4 = (void *)thunk_FUN_01ee7388();
      memcpy(pvVar5,pvVar4,*(size_t *)(unaff_x29 + -0x28));
      lVar6 = *unaff_x20;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x30),pvVar5);
      lVar6 = *unaff_x28;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_028c2918;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_028c2918:
      uVar7 = (*(code *)*puVar2)();
      if ((uVar7 & 1) != 0) {
        lVar6 = *unaff_x20;
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44();
        }
        pvVar4 = *(void **)(unaff_x29 + -0x98);
        pvVar5 = *(void **)(unaff_x29 + -0x90);
        pvVar3 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                            *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) +
                                                     0x80) + 0xa0);
        memcpy(pvVar4,pvVar3,*(size_t *)(unaff_x29 + -0x30));
        lVar6 = *unaff_x20;
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44();
        }
        thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38),pvVar4);
        memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
        if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
          FUN_01ecaf44();
        }
        pvVar4 = (void *)thunk_FUN_01ee7388();
        memcpy(pvVar5,pvVar4,*(size_t *)(unaff_x29 + -0x30));
        lVar6 = *unaff_x20;
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44();
        }
        thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38),pvVar5);
        lVar6 = *unaff_x28;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x26) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_028c2a48;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238();
LAB_028c2a48:
        uVar7 = (*(code *)*puVar2)();
        if ((uVar7 & 1) != 0) {
          lVar6 = *unaff_x20;
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01ecaf44();
          }
          pvVar4 = *(void **)(unaff_x29 + -0xb0);
          pvVar5 = *(void **)(unaff_x29 + -0xa8);
          pvVar3 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                              *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) +
                                                       0x80) + 0xc0);
          memcpy(pvVar4,pvVar3,*(size_t *)(unaff_x29 + -0x38));
          lVar6 = *unaff_x20;
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01ecaf44();
          }
          thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40),pvVar4);
          memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
          if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
            FUN_01ecaf44();
          }
          pvVar4 = (void *)thunk_FUN_01ee7388();
          memcpy(pvVar5,pvVar4,*(size_t *)(unaff_x29 + -0x38));
          lVar6 = *unaff_x20;
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01ecaf44();
          }
          thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40),pvVar5);
          lVar6 = *unaff_x28;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *unaff_x26) {
                puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_028c2b78;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar2 = (undefined8 *)FUN_01ecb238();
LAB_028c2b78:
          uVar7 = (*(code *)*puVar2)();
          if ((uVar7 & 1) != 0) {
            lVar6 = *unaff_x20;
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01ecaf44();
            }
            pvVar4 = *(void **)(unaff_x29 + -0xc0);
            __n = *(size_t *)(unaff_x29 + -0xb8);
            pvVar5 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x50),
                                                *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10)
                                                         + 0x80) + 0xe0);
            memcpy(pvVar4,pvVar5,__n);
            lVar6 = *unaff_x20;
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01ecaf44();
            }
            thunk_FUN_01f113fc(**(undefined8 **)(lVar6 + 0xc0),pvVar4);
            memcpy(unaff_x22,*(void **)(unaff_x29 + -0x48),*(size_t *)(unaff_x29 + -0x18));
            if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
              FUN_01ecaf44();
            }
            pvVar4 = (void *)thunk_FUN_01ee7388();
            memcpy(*(void **)(unaff_x29 + -0xa0),pvVar4,__n);
            lVar6 = *unaff_x20;
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01ecaf44();
            }
            thunk_FUN_01f113fc(**(undefined8 **)(lVar6 + 0xc0),*(undefined8 *)(unaff_x29 + -0xa0));
            lVar6 = *unaff_x28;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *unaff_x26) {
                  puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_028c2ce4;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar2 = (undefined8 *)FUN_01ecb238();
LAB_028c2ce4:
            uVar1 = (*(code *)*puVar2)();
            goto LAB_028c2ca0;
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


