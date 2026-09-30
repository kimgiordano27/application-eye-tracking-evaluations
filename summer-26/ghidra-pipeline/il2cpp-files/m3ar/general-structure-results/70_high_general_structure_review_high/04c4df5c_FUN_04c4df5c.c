/*
FUNCTION_NAME: FUN_04c4df5c
ENTRY_POINT: 04c4df5c
PROGRAM: m3ar-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04c4e9d4) */
/* WARNING: Removing unreachable block (ram,0x04c4e700) */
/* WARNING: Removing unreachable block (ram,0x04c4ea5c) */

void FUN_04c4df5c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined1 auVar15 [16];
  undefined8 local_1d0;
  undefined8 *puStack_1c8;
  undefined8 *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 local_170 [16];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 auStack_110 [144];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *local_58;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_0403162c(&DAT_09151d58);
    FUN_0403162c(&DAT_09180148);
    FUN_0403162c(&DAT_09180140);
    FUN_0403162c(&DAT_09180150);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_0406ab48(param_4);
    }
  }
  local_58 = (long *)0x0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_170._0_8_ = 0;
  local_170._8_8_ = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  memcpy(auStack_110,(void *)(param_1 + 0x18),0x90);
  iVar2 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  UnityEngine_UIElements_TextElement__OnGenerateVisualContent(&local_1d0,auStack_110,iVar2,0);
  uStack_78 = puStack_1c8;
  local_80 = local_1d0;
  uVar6 = local_80;
  uStack_68 = uStack_1b8;
  uStack_70 = local_1c0;
  local_80._0_4_ = (int)local_1d0;
  local_80 = uVar6;
  if ((int)local_80 == 2) {
    lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x78);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0406aaec(lVar11);
    }
    plVar5 = (long *)thunk_FUN_0406ddbc(param_2,lVar11);
    if (plVar5 != (long *)0x0) {
      uVar6 = FUN_08629a88(&local_80,0);
      lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x78);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0406aaec(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04c4e260;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,0);
LAB_04c4e260:
      uVar13 = (*(code *)*puVar7)(plVar5,param_3,uVar6,&local_58,puVar7[1]);
      plVar5 = local_58;
      if ((uVar13 & 1) != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0xa8);
        lVar12 = thunk_FUN_0406ddbc(local_58,DAT_09151d58);
        lVar11 = DAT_09151d58;
        if (lVar12 != 0) {
          plVar5 = (long *)thunk_FUN_0406ddbc(plVar5,DAT_09151d58);
          uVar6 = thunk_FUN_0406ddbc(uVar6,DAT_09151d58);
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                goto LAB_04c4e558;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,4);
LAB_04c4e558:
          local_170 = (*(code *)*puVar7)(plVar5,uVar6,puVar7[1]);
          plVar5 = local_58;
          puStack_1c8 = (undefined8 *)local_170;
          local_1d0 = 0;
          if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0406aaec(lVar11);
          }
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_04c4e608;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,0);
LAB_04c4e608:
          (*(code *)*puVar7)(plVar5,param_1,param_3,puVar7[1]);
          FUN_08629918(local_170,0);
          return;
        }
LAB_04c4ea58:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
    }
  }
  else if ((int)local_80 == 1) {
    lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x38);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0406aaec(lVar11);
    }
    plVar5 = (long *)thunk_FUN_0406ddbc(param_2,lVar11);
    if (plVar5 != (long *)0x0) {
      lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0406aaec(lVar11);
      }
      plVar8 = (long *)thunk_FUN_0406ddbc(param_2,lVar11);
      if (plVar8 != (long *)0x0) {
        iVar2 = FUN_08629a3c(&local_80,0);
        lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0406aaec(lVar11);
        }
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto 
              System_ThrowHelper__IfNullAndNullsAreIllegalThenThrow<UnitySynchronizationContext_WorkRequest>
              ;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_0406ae20(plVar8,lVar11,0);
System_ThrowHelper__IfNullAndNullsAreIllegalThenThrow<UnitySynchronizationContext_WorkRequest>:
        iVar3 = (*(code *)*puVar7)(plVar8,param_3,puVar7[1]);
        if (iVar2 < iVar3) {
          lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0406aaec(lVar11);
          }
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                goto LAB_04c4e714;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0406ae20(plVar8,lVar11,2);
LAB_04c4e714:
          uVar6 = (*(code *)*puVar7)(plVar8,puVar7[1]);
          uVar4 = FUN_08629a3c(&local_80,0);
          lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0406aaec(lVar11);
          }
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                goto LAB_04c4e7a0;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0406ae20(plVar8,lVar11,3);
LAB_04c4e7a0:
          (*(code *)*puVar7)(plVar8,uVar4,puVar7[1]);
          lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0406aaec(lVar11);
          }
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_04c4e81c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0406ae20(plVar8,lVar11,1);
LAB_04c4e81c:
          plVar5 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
          puVar1 = PTR_DAT_08f8c040;
          plVar9 = (long *)thunk_FUN_0406ddbc(plVar5,*(undefined8 *)PTR_DAT_08f8c040);
          if (plVar9 == (long *)0x0) {
            local_190 = 0;
            uStack_188 = 0;
            local_180 = 0;
          }
          else {
            lVar12 = *(long *)puVar1;
            uVar10 = thunk_FUN_0406ddbc(*(undefined8 *)(param_1 + 0xa8),lVar12);
            lVar11 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar12) {
                  puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                  goto LAB_04c4e8b4;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_0406ae20(plVar9,lVar12,4);
LAB_04c4e8b4:
            auVar15 = (*(code *)*puVar7)(plVar9,uVar10,puVar7[1]);
            local_1d0 = 0;
            puStack_1c8 = (undefined8 *)0x0;
            local_1c0 = (undefined8 *)0x0;
            FUN_05b8d128(&local_1d0,auVar15._0_8_,auVar15._8_8_,*(undefined8 *)PTR_DAT_08f8c050);
            uStack_188 = puStack_1c8;
            local_190 = local_1d0;
            local_180 = local_1c0;
          }
          local_120 = local_180;
          puStack_1c8 = &local_130;
          local_1d0 = 0;
          local_1c0 = &local_140;
          uStack_128 = uStack_188;
          local_130 = local_190;
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0406aaec(lVar11);
          }
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_04c4e98c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,0);
LAB_04c4e98c:
          (*(code *)*puVar7)(plVar5,param_1,param_3,puVar7[1]);
          uVar10 = uStack_128;
          if ((char)local_130 != '\0') {
            local_1c0[1] = local_120;
            *local_1c0 = uVar10;
            FUN_08629918(local_1c0,0);
          }
          lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0406aaec(lVar11);
          }
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                goto LAB_04c4ea44;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0406ae20(plVar8,lVar11,3);
LAB_04c4ea44:
          (*(code *)*puVar7)(plVar8,uVar6,puVar7[1]);
          return;
        }
      }
      uVar4 = FUN_08629a3c(&local_80,0);
      lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x38);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0406aaec(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto FUN_04c4e484;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,0);
FUN_04c4e484:
      uVar13 = (*(code *)*puVar7)(plVar5,param_3,uVar4,&local_58,puVar7[1]);
      if ((uVar13 & 1) != 0) {
        lVar12 = thunk_FUN_0406ddbc(local_58,DAT_09151d58);
        lVar11 = DAT_09151d58;
        if (lVar12 == 0) {
          local_1b0 = 0;
          uStack_1a8 = 0;
          local_1a0 = 0;
        }
        else {
          uVar6 = thunk_FUN_0406ddbc(*(undefined8 *)(param_1 + 0xa8),DAT_09151d58);
          auVar15 = FUN_03a90f00(4,lVar11,lVar12,uVar6);
          local_1d0 = 0;
          puStack_1c8 = (undefined8 *)0x0;
          local_1c0 = (undefined8 *)0x0;
          FUN_05b8d128(&local_1d0,auVar15._0_8_,auVar15._8_8_,*(undefined8 *)PTR_DAT_08f8c050);
          uStack_1a8 = puStack_1c8;
          local_1b0 = local_1d0;
          local_1a0 = local_1c0;
        }
        plVar5 = local_58;
        local_150 = local_1a0;
        puStack_1c8 = &local_160;
        local_1d0 = 0;
        local_1c0 = &local_140;
        uStack_158 = uStack_1a8;
        local_160 = local_1b0;
        if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0406aaec(lVar11);
        }
        lVar12 = *plVar5;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_04c4e6c4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,0);
LAB_04c4e6c4:
        (*(code *)*puVar7)(plVar5,param_1,param_3,puVar7[1]);
        if ((char)local_160 == '\0') {
          return;
        }
        local_1c0[1] = local_150;
        *local_1c0 = uStack_158;
        FUN_08629918(local_1c0,0);
        return;
      }
    }
  }
  else if ((int)local_80 == 0) {
    lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0406aaec(lVar11);
    }
    plVar5 = (long *)thunk_FUN_0406ddbc(param_2,lVar11);
    if (plVar5 != (long *)0x0) {
      uVar6 = FUN_086299f4(&local_80,0);
      lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0406aaec(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto 
            System_ThrowHelper__IfNullAndNullsAreIllegalThenThrow<TrackedDeviceRaycaster_RaycastHitData>
            ;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,0);
System_ThrowHelper__IfNullAndNullsAreIllegalThenThrow<TrackedDeviceRaycaster_RaycastHitData>:
      uVar13 = (*(code *)*puVar7)(plVar5,param_3,uVar6,&local_58,puVar7[1]);
      plVar5 = local_58;
      if ((uVar13 & 1) != 0) {
        if (local_58 != (long *)0x0) {
          lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0406aaec(lVar11);
          }
          lVar12 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto System_ThrowHelper__ThrowArgumentValidationException<char>;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0406ae20(plVar5,lVar11,0);
System_ThrowHelper__ThrowArgumentValidationException<char>:
          (*(code *)*puVar7)(plVar5,param_1,param_3,puVar7[1]);
          return;
        }
        goto LAB_04c4ea58;
      }
    }
  }
  *(undefined4 *)(param_1 + 0xb4) = 4;
  return;
}


