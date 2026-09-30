/*
FUNCTION_NAME: HurricaneVR.Framework.Components.HVRPhysicsDial$$get_Rigidbody
ENTRY_POINT: 021fcb28
PROGRAM: vrlegs-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021fd1dc) */

bool HurricaneVR_Framework_Components_HVRPhysicsDial__get_Rigidbody(void)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  int *unaff_x19;
  long lVar12;
  undefined8 uVar13;
  bool bVar14;
  long *unaff_x20;
  long *plVar15;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *plVar16;
  size_t unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x27;
  int unaff_w28;
  long unaff_x29;
  
  *(undefined4 *)(unaff_x29 + -0x18) = 0;
  FUN_021fc3ec();
  if (*unaff_x19 == unaff_w28) {
    bVar14 = true;
  }
  else {
    if (*(long *)(unaff_x21 + 0x40) == 0) {
LAB_021fd1b4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    cVar1 = *(char *)(*(long *)(unaff_x21 + 0x40) + 0x10);
    thunk_FUN_01a4b338();
    if (cVar1 == '\0') {
      uVar13 = *(undefined8 *)(unaff_x21 + 0x48);
      *(undefined1 *)(unaff_x29 + -0x14) = 0;
      *(undefined8 *)(unaff_x29 + -0x40) = uVar13;
      *(long *)(unaff_x29 + -0x38) = unaff_x23;
      FUN_027e0bd8(uVar13,unaff_x29 + -0x14,0);
      if (*(long *)(unaff_x21 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      cVar1 = *(char *)(*(long *)(unaff_x21 + 0x40) + 0x10);
      thunk_FUN_01a4b338();
      if (cVar1 == '\0') {
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
          lVar12 = *plVar16;
          uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar7 != 0) {
            piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03cbed20) {
                puVar4 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_021fccdc;
              }
              uVar7 = uVar7 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_01a472ec(plVar16,*(long *)PTR_DAT_03cbed20,0);
LAB_021fccdc:
          uVar7 = (*(code *)*puVar4)(plVar16,puVar4[1]);
          if ((uVar7 & 1) == 0) {
            lVar12 = *(long *)(unaff_x21 + 0x40);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            thunk_FUN_01a4b338();
            *(undefined1 *)(lVar12 + 0x10) = 1;
            break;
          }
          lVar12 = *(long *)(unaff_x21 + 0x18);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar8 = *(long *)(lVar12 + 0x10);
          if ((lVar8 == 0x7fffffffffffffff) || ((lVar8 < 0 && (1 < -0x8000000000000000 - lVar8)))) {
            uVar13 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar13,unaff_x22);
          }
          *(long *)(lVar12 + 0x10) = lVar8 + 1;
          plVar16 = *(long **)(unaff_x21 + 0x10);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar2 = **(uint **)(unaff_x29 + -0x20);
          lVar12 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01a46ff8(lVar12);
          }
          lVar6 = *plVar16;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar12) {
                lVar12 = lVar6 + (long)*piVar10 * 0x10 + 0x138;
                goto LAB_021fcd98;
              }
              uVar7 = uVar7 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar7 != 0);
          }
          lVar12 = FUN_01a472ec(plVar16,lVar12,0);
LAB_021fcd98:
          *(undefined8 **)(unaff_x29 + -0x10) = unaff_x25;
          lVar12 = *(long *)(lVar12 + 8);
          (**(code **)(lVar12 + 0x10))(*(undefined8 *)(lVar12 + 8),lVar12,plVar16,unaff_x29 + -0x10)
          ;
          memset(unaff_x27,0,unaff_x24);
          lVar6 = *(long *)(unaff_x22 + 0x20);
          lVar12 = *(long *)(lVar6 + 0xc0);
          if (*(int *)(*(long *)(lVar12 + 0x68) + 0x28) < 0) {
            pvVar5 = *(void **)(unaff_x29 + -0x30);
            memcpy(pvVar5,unaff_x25,*(size_t *)(unaff_x29 + -0x28));
            lVar12 = *(long *)(lVar6 + 0xc0);
            unaff_x21 = *(long *)(unaff_x29 + -0x48);
          }
          else {
            pvVar5 = (void *)*unaff_x25;
          }
          uVar13 = *(undefined8 *)(lVar12 + 0x78);
          *(long *)(unaff_x29 + -0x10) = lVar8 + 1;
          FUN_02207c1c(unaff_x27,unaff_x29 + -0x10,pvVar5,uVar13);
          if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(unaff_x20 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          memcpy((void *)((long)unaff_x20 +
                         (ulong)*(uint *)(*unaff_x20 + 0x104) * (long)(int)uVar2 + 0x20),unaff_x27,
                 unaff_x24);
          lVar12 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01a46ff8();
          }
          if (*(uint *)(unaff_x20 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          FUN_01ab6954(lVar12,(long)unaff_x20 +
                              (ulong)*(uint *)(*unaff_x20 + 0x104) * (long)(int)uVar2 + 0x20,
                       unaff_x27);
          iVar11 = **(int **)(unaff_x29 + -0x20) + 1;
          **(int **)(unaff_x29 + -0x20) = iVar11;
        }
        plVar16 = *(long **)(unaff_x21 + 0x20);
        thunk_FUN_01a4b338();
        if (*(long *)(unaff_x21 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        cVar1 = *(char *)(*(long *)(unaff_x21 + 0x40) + 0x10);
        thunk_FUN_01a4b338();
        bVar14 = false;
        iVar11 = 0x17;
        if ((plVar16 != (long *)0x0) && (cVar1 == '\0')) {
          iVar11 = *(int *)(unaff_x21 + 0x2c);
          thunk_FUN_01a4b338();
          puVar3 = PTR_DAT_03cbed20;
          if ((int)plVar16[3] <= iVar11) {
            if (0 < (int)plVar16[3]) {
              uVar7 = 0;
              *(long **)(unaff_x29 + -0x50) = plVar16;
              do {
                plVar15 = *(long **)(unaff_x21 + 0x10);
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                lVar12 = *plVar15;
                uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                      puVar4 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_021fcf80;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar4 = (undefined8 *)FUN_01a472ec(plVar15,*(long *)puVar3,0);
LAB_021fcf80:
                uVar9 = (*(code *)*puVar4)(plVar15,puVar4[1]);
                if ((uVar9 & 1) == 0) {
                  lVar12 = *(long *)(unaff_x21 + 0x40);
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  thunk_FUN_01a4b338();
                  *(undefined1 *)(lVar12 + 0x10) = 1;
                  thunk_FUN_01a4b338();
                  *(int *)(unaff_x21 + 0x28) = (int)uVar7;
                  break;
                }
                lVar12 = *(long *)(unaff_x21 + 0x18);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                lVar8 = *(long *)(lVar12 + 0x10);
                if ((lVar8 == 0x7fffffffffffffff) ||
                   ((lVar8 < 0 && (1 < -0x8000000000000000 - lVar8)))) {
                  uVar13 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6b14(uVar13,unaff_x22);
                }
                *(long *)(lVar12 + 0x10) = lVar8 + 1;
                plVar15 = *(long **)(unaff_x21 + 0x10);
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                lVar12 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
                if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                  lVar12 = FUN_01a46ff8(lVar12);
                }
                lVar6 = *plVar15;
                uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == lVar12) {
                      lVar12 = lVar6 + (long)*piVar10 * 0x10 + 0x138;
                      goto LAB_021fd034;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                lVar12 = FUN_01a472ec(plVar15,lVar12,0);
LAB_021fd034:
                *(undefined8 **)(unaff_x29 + -0x10) = unaff_x25;
                lVar12 = *(long *)(lVar12 + 8);
                (**(code **)(lVar12 + 0x10))
                          (*(undefined8 *)(lVar12 + 8),lVar12,plVar15,unaff_x29 + -0x10,unaff_x25);
                memset(unaff_x27,0,unaff_x24);
                lVar6 = *(long *)(unaff_x22 + 0x20);
                lVar12 = *(long *)(lVar6 + 0xc0);
                if (*(int *)(*(long *)(lVar12 + 0x68) + 0x28) < 0) {
                  pvVar5 = *(void **)(unaff_x29 + -0x30);
                  memcpy(pvVar5,unaff_x25,*(size_t *)(unaff_x29 + -0x28));
                  lVar12 = *(long *)(lVar6 + 0xc0);
                  plVar16 = *(long **)(unaff_x29 + -0x50);
                }
                else {
                  pvVar5 = (void *)*unaff_x25;
                }
                uVar13 = *(undefined8 *)(lVar12 + 0x78);
                *(long *)(unaff_x29 + -0x10) = lVar8 + 1;
                FUN_02207c1c(unaff_x27,unaff_x29 + -0x10,pvVar5,uVar13);
                uVar9 = (ulong)*(uint *)(plVar16 + 3);
                if (uVar9 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                memcpy((void *)((long)plVar16 + uVar7 * *(uint *)(*plVar16 + 0x104) + 0x20),
                       unaff_x27,unaff_x24);
                lVar12 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70);
                if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                  lVar12 = FUN_01a46ff8();
                  uVar9 = (ulong)*(uint *)(plVar16 + 3);
                }
                if (uVar9 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                FUN_01ab6954(lVar12,(long)plVar16 + uVar7 * *(uint *)(*plVar16 + 0x104) + 0x20,
                             unaff_x27);
                uVar7 = uVar7 + 1;
              } while ((long)uVar7 < (long)(int)plVar16[3]);
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
      lVar12 = *(long *)(unaff_x21 + 0x38);
      if (lVar12 == 0) goto LAB_021fd1b4;
      thunk_FUN_01a4b338();
      *(undefined1 *)(lVar12 + 0x10) = 1;
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


