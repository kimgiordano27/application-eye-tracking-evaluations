/*
FUNCTION_NAME: FUN_021fca68
ENTRY_POINT: 021fca68
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021fd1dc) */

bool FUN_021fca68(long param_1,long *param_2,uint param_3,uint *param_4,long param_5)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  bool bVar15;
  long *plVar16;
  long *plVar17;
  ulong __n;
  undefined8 *__src;
  void *__s;
  long *local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  void *local_90;
  ulong local_88;
  uint *local_80;
  undefined4 local_78;
  char local_74 [4];
  undefined8 *local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  local_80 = param_4;
  if ((DAT_0412221d & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03cd9c70);
    DAT_0412221d = 1;
  }
  puVar4 = local_80;
  lVar8 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
  local_88 = (ulong)*(uint *)(*(long *)(lVar8 + 0x68) + 0xfc);
  __n = (ulong)*(uint *)(*(long *)(lVar8 + 0x70) + 0xfc);
  uVar11 = local_88 + 0xf & 0x1fffffff0;
  __src = (undefined8 *)((long)&local_b0 - uVar11);
  local_90 = (void *)((long)__src - uVar11);
  __s = (void *)((long)local_90 - (__n + 0xf & 0x1fffffff0));
  local_78 = 0;
  FUN_021fc3ec(param_1,param_2,param_3,local_80);
  if (*puVar4 == param_3) {
    bVar15 = true;
  }
  else {
    if (*(long *)(param_1 + 0x40) == 0) {
LAB_021fd1b4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    cVar2 = *(char *)(*(long *)(param_1 + 0x40) + 0x10);
    thunk_FUN_01a4b338();
    if (cVar2 == '\0') {
      local_a0 = *(undefined8 *)(param_1 + 0x48);
      local_74[0] = '\0';
      local_98 = lVar9;
      FUN_027e0bd8(local_a0,local_74,0);
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      cVar2 = *(char *)(*(long *)(param_1 + 0x40) + 0x10);
      thunk_FUN_01a4b338();
      if (cVar2 == '\0') {
        iVar14 = *(int *)(param_1 + 0x30);
        local_a8 = param_1;
        thunk_FUN_01a4b338();
        puVar3 = PTR_DAT_03cd9c70;
        if (0 < iVar14) {
          local_78 = 0;
          while (iVar14 = *(int *)(param_1 + 0x30), thunk_FUN_01a4b338(), 0 < iVar14) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_027d94b8(&local_78,0);
          }
        }
        uVar1 = *local_80;
        while ((int)uVar1 < (int)param_3) {
          plVar17 = *(long **)(param_1 + 0x10);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar9 = *plVar17;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cbed20) {
                puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_021fccdc;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_01a472ec(plVar17,*(long *)PTR_DAT_03cbed20,0);
LAB_021fccdc:
          uVar11 = (*(code *)*puVar5)(plVar17,puVar5[1]);
          if ((uVar11 & 1) == 0) {
            lVar9 = *(long *)(param_1 + 0x40);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            thunk_FUN_01a4b338();
            *(undefined1 *)(lVar9 + 0x10) = 1;
            break;
          }
          lVar9 = *(long *)(param_1 + 0x18);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar8 = *(long *)(lVar9 + 0x10);
          if ((lVar8 == 0x7fffffffffffffff) || ((lVar8 < 0 && (1 < -0x8000000000000000 - lVar8)))) {
            uVar6 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar6,param_5);
          }
          *(undefined8 **)(lVar9 + 0x10) = (undefined8 *)(lVar8 + 1);
          plVar17 = *(long **)(param_1 + 0x10);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar1 = *local_80;
          lVar9 = **(long **)(*(long *)(param_5 + 0x20) + 0xc0);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01a46ff8(lVar9);
          }
          lVar10 = *plVar17;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar9) {
                lVar9 = lVar10 + (long)*piVar13 * 0x10 + 0x138;
                goto LAB_021fcd98;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          lVar9 = FUN_01a472ec(plVar17,lVar9,0);
LAB_021fcd98:
          lVar9 = *(long *)(lVar9 + 8);
          local_70 = __src;
          (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar17,&local_70,__src);
          memset(__s,0,__n);
          pvVar7 = local_90;
          lVar10 = *(long *)(param_5 + 0x20);
          lVar9 = *(long *)(lVar10 + 0xc0);
          if (*(int *)(*(long *)(lVar9 + 0x68) + 0x28) < 0) {
            memcpy(local_90,__src,local_88);
            lVar9 = *(long *)(lVar10 + 0xc0);
            param_1 = local_a8;
          }
          else {
            pvVar7 = (void *)*__src;
          }
          local_70 = (undefined8 *)(lVar8 + 1);
          FUN_02207c1c(__s,&local_70,pvVar7,*(undefined8 *)(lVar9 + 0x78));
          if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(param_2 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          memcpy((void *)((long)param_2 +
                         (ulong)*(uint *)(*param_2 + 0x104) * (long)(int)uVar1 + 0x20),__s,__n);
          lVar9 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01a46ff8();
          }
          if (*(uint *)(param_2 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          FUN_01ab6954(lVar9,(long)param_2 +
                             (ulong)*(uint *)(*param_2 + 0x104) * (long)(int)uVar1 + 0x20,__s);
          uVar1 = *local_80 + 1;
          *local_80 = uVar1;
        }
        plVar17 = *(long **)(param_1 + 0x20);
        thunk_FUN_01a4b338();
        if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        cVar2 = *(char *)(*(long *)(param_1 + 0x40) + 0x10);
        thunk_FUN_01a4b338();
        bVar15 = false;
        iVar14 = 0x17;
        if ((plVar17 != (long *)0x0) && (cVar2 == '\0')) {
          iVar14 = *(int *)(param_1 + 0x2c);
          thunk_FUN_01a4b338();
          puVar3 = PTR_DAT_03cbed20;
          if ((int)plVar17[3] <= iVar14) {
            if (0 < (int)plVar17[3]) {
              uVar11 = 0;
              local_b0 = plVar17;
              do {
                plVar16 = *(long **)(param_1 + 0x10);
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                lVar9 = *plVar16;
                uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                      puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_021fcf80;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar5 = (undefined8 *)FUN_01a472ec(plVar16,*(long *)puVar3,0);
LAB_021fcf80:
                uVar12 = (*(code *)*puVar5)(plVar16,puVar5[1]);
                if ((uVar12 & 1) == 0) {
                  lVar9 = *(long *)(param_1 + 0x40);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  thunk_FUN_01a4b338();
                  *(undefined1 *)(lVar9 + 0x10) = 1;
                  thunk_FUN_01a4b338();
                  *(int *)(param_1 + 0x28) = (int)uVar11;
                  break;
                }
                lVar9 = *(long *)(param_1 + 0x18);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                lVar8 = *(long *)(lVar9 + 0x10);
                if ((lVar8 == 0x7fffffffffffffff) ||
                   ((lVar8 < 0 && (1 < -0x8000000000000000 - lVar8)))) {
                  uVar6 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6b14(uVar6,param_5);
                }
                *(undefined8 **)(lVar9 + 0x10) = (undefined8 *)(lVar8 + 1);
                plVar16 = *(long **)(param_1 + 0x10);
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                lVar9 = **(long **)(*(long *)(param_5 + 0x20) + 0xc0);
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_01a46ff8(lVar9);
                }
                lVar10 = *plVar16;
                uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == lVar9) {
                      lVar9 = lVar10 + (long)*piVar13 * 0x10 + 0x138;
                      goto LAB_021fd034;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                lVar9 = FUN_01a472ec(plVar16,lVar9,0);
LAB_021fd034:
                lVar9 = *(long *)(lVar9 + 8);
                local_70 = __src;
                (**(code **)(lVar9 + 0x10))
                          (*(undefined8 *)(lVar9 + 8),lVar9,plVar16,&local_70,__src);
                memset(__s,0,__n);
                pvVar7 = local_90;
                lVar10 = *(long *)(param_5 + 0x20);
                lVar9 = *(long *)(lVar10 + 0xc0);
                if (*(int *)(*(long *)(lVar9 + 0x68) + 0x28) < 0) {
                  memcpy(local_90,__src,local_88);
                  lVar9 = *(long *)(lVar10 + 0xc0);
                  plVar17 = local_b0;
                }
                else {
                  pvVar7 = (void *)*__src;
                }
                local_70 = (undefined8 *)(lVar8 + 1);
                FUN_02207c1c(__s,&local_70,pvVar7,*(undefined8 *)(lVar9 + 0x78));
                uVar12 = (ulong)*(uint *)(plVar17 + 3);
                if (uVar12 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                memcpy((void *)((long)plVar17 + uVar11 * *(uint *)(*plVar17 + 0x104) + 0x20),__s,__n
                      );
                lVar9 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70);
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_01a46ff8();
                  uVar12 = (ulong)*(uint *)(plVar17 + 3);
                }
                if (uVar12 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                FUN_01ab6954(lVar9,(long)plVar17 + uVar11 * *(uint *)(*plVar17 + 0x104) + 0x20,__s);
                uVar11 = uVar11 + 1;
              } while ((long)uVar11 < (long)(int)plVar17[3]);
            }
            thunk_FUN_01a4b338();
            *(undefined4 *)(param_1 + 0x2c) = 0;
          }
          bVar15 = false;
          iVar14 = 0x17;
        }
      }
      else {
        iVar14 = 5;
        bVar15 = 0 < (int)*local_80;
      }
      if (local_74[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(local_a0,0);
      }
      lVar9 = local_98;
      if ((iVar14 != 0x17) && (iVar14 != 0)) goto FUN_021fcba0;
    }
    else {
      lVar8 = *(long *)(param_1 + 0x38);
      if (lVar8 == 0) goto LAB_021fd1b4;
      thunk_FUN_01a4b338();
      *(undefined1 *)(lVar8 + 0x10) = 1;
      thunk_FUN_01a4b338();
      *(undefined8 *)(param_1 + 0x20) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(param_1 + 0x20),0);
    }
    bVar15 = 0 < (int)*local_80;
  }
FUN_021fcba0:
  if (*(long *)(lVar9 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar15;
}


