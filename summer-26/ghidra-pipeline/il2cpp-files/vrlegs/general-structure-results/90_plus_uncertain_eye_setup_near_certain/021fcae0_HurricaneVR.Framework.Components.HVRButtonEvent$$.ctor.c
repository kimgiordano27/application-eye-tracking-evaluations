/*
FUNCTION_NAME: HurricaneVR.Framework.Components.HVRButtonEvent$$.ctor
ENTRY_POINT: 021fcae0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021fd1dc) */

bool HurricaneVR_Framework_Components_HVRButtonEvent___ctor(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  int *piVar12;
  undefined8 uVar13;
  bool bVar14;
  long *unaff_x20;
  long *plVar15;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *plVar16;
  ulong __n;
  undefined8 *__src;
  void *__s;
  int unaff_w28;
  long unaff_x29;
  
  uVar1 = *(uint *)(in_x9 + 0xfc);
  __n = (ulong)*(uint *)(param_1 + 0xfc);
  *(ulong *)(unaff_x29 + -0x28) = (ulong)uVar1;
  uVar8 = (ulong)uVar1 + 0xf & 0x1fffffff0;
  __src = (undefined8 *)(&stack0x00000000 + -uVar8);
  lVar6 = (long)__src - uVar8;
  *(long *)(unaff_x29 + -0x30) = lVar6;
  __s = (void *)(lVar6 - (__n + 0xf & 0x1fffffff0));
  piVar12 = *(int **)(unaff_x29 + -0x20);
  *(undefined4 *)(unaff_x29 + -0x18) = 0;
  FUN_021fc3ec();
  if (*piVar12 == unaff_w28) {
    bVar14 = true;
  }
  else {
    if (*(long *)(unaff_x21 + 0x40) == 0) {
LAB_021fd1b4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    cVar2 = *(char *)(*(long *)(unaff_x21 + 0x40) + 0x10);
    thunk_FUN_01a4b338();
    if (cVar2 == '\0') {
      uVar13 = *(undefined8 *)(unaff_x21 + 0x48);
      *(undefined1 *)(unaff_x29 + -0x14) = 0;
      *(undefined8 *)(unaff_x29 + -0x40) = uVar13;
      *(long *)(unaff_x29 + -0x38) = unaff_x23;
      FUN_027e0bd8(uVar13,unaff_x29 + -0x14,0);
      if (*(long *)(unaff_x21 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      cVar2 = *(char *)(*(long *)(unaff_x21 + 0x40) + 0x10);
      thunk_FUN_01a4b338();
      if (cVar2 == '\0') {
        iVar11 = *(int *)(unaff_x21 + 0x30);
        *(long *)(unaff_x29 + -0x48) = unaff_x21;
        thunk_FUN_01a4b338();
        if (0 < iVar11) {
          *(undefined4 *)(unaff_x29 + -0x18) = 0;
          puVar3 = PTR_DAT_03cd9c70;
          while (iVar11 = *(int *)(unaff_x21 + 0x30), thunk_FUN_01a4b338(), 0 < iVar11) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_027d94b8(unaff_x29 + -0x18,0);
          }
        }
        iVar11 = **(int **)(unaff_x29 + -0x20);
        while (iVar11 < unaff_w28) {
          plVar16 = *(long **)(unaff_x21 + 0x10);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar6 = *plVar16;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03cbed20) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_021fccdc;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_01a472ec(plVar16,*(long *)PTR_DAT_03cbed20,0);
LAB_021fccdc:
          uVar8 = (*(code *)*puVar4)(plVar16,puVar4[1]);
          if ((uVar8 & 1) == 0) {
            lVar6 = *(long *)(unaff_x21 + 0x40);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            thunk_FUN_01a4b338();
            *(undefined1 *)(lVar6 + 0x10) = 1;
            break;
          }
          lVar6 = *(long *)(unaff_x21 + 0x18);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar9 = *(long *)(lVar6 + 0x10);
          if ((lVar9 == 0x7fffffffffffffff) || ((lVar9 < 0 && (1 < -0x8000000000000000 - lVar9)))) {
            uVar13 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar13,unaff_x22);
          }
          *(long *)(lVar6 + 0x10) = lVar9 + 1;
          plVar16 = *(long **)(unaff_x21 + 0x10);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar1 = **(uint **)(unaff_x29 + -0x20);
          lVar6 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01a46ff8(lVar6);
          }
          lVar7 = *plVar16;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar6) {
                lVar6 = lVar7 + (long)*piVar12 * 0x10 + 0x138;
                goto LAB_021fcd98;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          lVar6 = FUN_01a472ec(plVar16,lVar6,0);
LAB_021fcd98:
          *(undefined8 **)(unaff_x29 + -0x10) = __src;
          lVar6 = *(long *)(lVar6 + 8);
          (**(code **)(lVar6 + 0x10))
                    (*(undefined8 *)(lVar6 + 8),lVar6,plVar16,unaff_x29 + -0x10,__src);
          memset(__s,0,__n);
          lVar7 = *(long *)(unaff_x22 + 0x20);
          lVar6 = *(long *)(lVar7 + 0xc0);
          if (*(int *)(*(long *)(lVar6 + 0x68) + 0x28) < 0) {
            pvVar5 = *(void **)(unaff_x29 + -0x30);
            memcpy(pvVar5,__src,*(size_t *)(unaff_x29 + -0x28));
            lVar6 = *(long *)(lVar7 + 0xc0);
            unaff_x21 = *(long *)(unaff_x29 + -0x48);
          }
          else {
            pvVar5 = (void *)*__src;
          }
          uVar13 = *(undefined8 *)(lVar6 + 0x78);
          *(long *)(unaff_x29 + -0x10) = lVar9 + 1;
          FUN_02207c1c(__s,unaff_x29 + -0x10,pvVar5,uVar13);
          if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(unaff_x20 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          memcpy((void *)((long)unaff_x20 +
                         (ulong)*(uint *)(*unaff_x20 + 0x104) * (long)(int)uVar1 + 0x20),__s,__n);
          lVar6 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01a46ff8();
          }
          if (*(uint *)(unaff_x20 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          FUN_01ab6954(lVar6,(long)unaff_x20 +
                             (ulong)*(uint *)(*unaff_x20 + 0x104) * (long)(int)uVar1 + 0x20,__s);
          iVar11 = **(int **)(unaff_x29 + -0x20) + 1;
          **(int **)(unaff_x29 + -0x20) = iVar11;
        }
        plVar16 = *(long **)(unaff_x21 + 0x20);
        thunk_FUN_01a4b338();
        if (*(long *)(unaff_x21 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        cVar2 = *(char *)(*(long *)(unaff_x21 + 0x40) + 0x10);
        thunk_FUN_01a4b338();
        bVar14 = false;
        iVar11 = 0x17;
        if ((plVar16 != (long *)0x0) && (cVar2 == '\0')) {
          iVar11 = *(int *)(unaff_x21 + 0x2c);
          thunk_FUN_01a4b338();
          puVar3 = PTR_DAT_03cbed20;
          if ((int)plVar16[3] <= iVar11) {
            if (0 < (int)plVar16[3]) {
              uVar8 = 0;
              *(long **)(unaff_x29 + -0x50) = plVar16;
              do {
                plVar15 = *(long **)(unaff_x21 + 0x10);
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                lVar6 = *plVar15;
                uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar10 != 0) {
                  piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                      puVar4 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_021fcf80;
                    }
                    uVar10 = uVar10 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar10 != 0);
                }
                puVar4 = (undefined8 *)FUN_01a472ec(plVar15,*(long *)puVar3,0);
LAB_021fcf80:
                uVar10 = (*(code *)*puVar4)(plVar15,puVar4[1]);
                if ((uVar10 & 1) == 0) {
                  lVar6 = *(long *)(unaff_x21 + 0x40);
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  thunk_FUN_01a4b338();
                  *(undefined1 *)(lVar6 + 0x10) = 1;
                  thunk_FUN_01a4b338();
                  *(int *)(unaff_x21 + 0x28) = (int)uVar8;
                  break;
                }
                lVar6 = *(long *)(unaff_x21 + 0x18);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                lVar9 = *(long *)(lVar6 + 0x10);
                if ((lVar9 == 0x7fffffffffffffff) ||
                   ((lVar9 < 0 && (1 < -0x8000000000000000 - lVar9)))) {
                  uVar13 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6b14(uVar13,unaff_x22);
                }
                *(long *)(lVar6 + 0x10) = lVar9 + 1;
                plVar15 = *(long **)(unaff_x21 + 0x10);
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                lVar6 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
                if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                  lVar6 = FUN_01a46ff8(lVar6);
                }
                lVar7 = *plVar15;
                uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar10 != 0) {
                  piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == lVar6) {
                      lVar6 = lVar7 + (long)*piVar12 * 0x10 + 0x138;
                      goto LAB_021fd034;
                    }
                    uVar10 = uVar10 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar10 != 0);
                }
                lVar6 = FUN_01a472ec(plVar15,lVar6,0);
LAB_021fd034:
                *(undefined8 **)(unaff_x29 + -0x10) = __src;
                lVar6 = *(long *)(lVar6 + 8);
                (**(code **)(lVar6 + 0x10))
                          (*(undefined8 *)(lVar6 + 8),lVar6,plVar15,unaff_x29 + -0x10,__src);
                memset(__s,0,__n);
                lVar7 = *(long *)(unaff_x22 + 0x20);
                lVar6 = *(long *)(lVar7 + 0xc0);
                if (*(int *)(*(long *)(lVar6 + 0x68) + 0x28) < 0) {
                  pvVar5 = *(void **)(unaff_x29 + -0x30);
                  memcpy(pvVar5,__src,*(size_t *)(unaff_x29 + -0x28));
                  lVar6 = *(long *)(lVar7 + 0xc0);
                  plVar16 = *(long **)(unaff_x29 + -0x50);
                }
                else {
                  pvVar5 = (void *)*__src;
                }
                uVar13 = *(undefined8 *)(lVar6 + 0x78);
                *(long *)(unaff_x29 + -0x10) = lVar9 + 1;
                FUN_02207c1c(__s,unaff_x29 + -0x10,pvVar5,uVar13);
                uVar10 = (ulong)*(uint *)(plVar16 + 3);
                if (uVar10 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                memcpy((void *)((long)plVar16 + uVar8 * *(uint *)(*plVar16 + 0x104) + 0x20),__s,__n)
                ;
                lVar6 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70);
                if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                  lVar6 = FUN_01a46ff8();
                  uVar10 = (ulong)*(uint *)(plVar16 + 3);
                }
                if (uVar10 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                FUN_01ab6954(lVar6,(long)plVar16 + uVar8 * *(uint *)(*plVar16 + 0x104) + 0x20,__s);
                uVar8 = uVar8 + 1;
              } while ((long)uVar8 < (long)(int)plVar16[3]);
            }
            thunk_FUN_01a4b338();
            *(undefined4 *)(unaff_x21 + 0x2c) = 0;
          }
          bVar14 = false;
          iVar11 = 0x17;
        }
      }
      else {
        iVar11 = 5;
        bVar14 = 0 < **(int **)(unaff_x29 + -0x20);
      }
      if (*(char *)(unaff_x29 + -0x14) != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x40),0);
      }
      unaff_x23 = *(long *)(unaff_x29 + -0x38);
      if ((iVar11 != 0x17) && (iVar11 != 0)) goto FUN_021fcba0;
    }
    else {
      lVar6 = *(long *)(unaff_x21 + 0x38);
      if (lVar6 == 0) goto LAB_021fd1b4;
      thunk_FUN_01a4b338();
      *(undefined1 *)(lVar6 + 0x10) = 1;
      thunk_FUN_01a4b338();
      *(undefined8 *)(unaff_x21 + 0x20) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x21 + 0x20),0);
    }
    bVar14 = 0 < **(int **)(unaff_x29 + -0x20);
  }
FUN_021fcba0:
  if (*(long *)(unaff_x23 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar14;
}


