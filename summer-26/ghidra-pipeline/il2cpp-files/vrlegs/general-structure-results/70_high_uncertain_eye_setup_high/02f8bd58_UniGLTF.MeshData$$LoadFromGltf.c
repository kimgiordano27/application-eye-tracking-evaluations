/*
FUNCTION_NAME: UniGLTF.MeshData$$LoadFromGltf
ENTRY_POINT: 02f8bd58
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x02f8ca10) */
/* WARNING: Removing unreachable block (ram,0x02f8ca2c) */
/* WARNING: Removing unreachable block (ram,0x02f8c4d4) */
/* WARNING: Removing unreachable block (ram,0x02f8ca00) */
/* WARNING: Removing unreachable block (ram,0x02f8ca1c) */
/* WARNING: Removing unreachable block (ram,0x02f8c9c8) */
/* WARNING: Removing unreachable block (ram,0x02f8c5a4) */
/* WARNING: Removing unreachable block (ram,0x02f8c354) */
/* WARNING: Removing unreachable block (ram,0x02f8c388) */
/* WARNING: Removing unreachable block (ram,0x02f8c97c) */

uint UniGLTF_MeshData__LoadFromGltf(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  uint extraout_w8;
  uint uVar18;
  long lVar19;
  ulong in_x9;
  ulong uVar20;
  int *piVar21;
  int *in_x10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar22;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w27;
  int unaff_w28;
  int unaff_w29;
  float unaff_s8;
  undefined8 in_stack_00000008;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long *in_stack_00000048;
  long *in_stack_00000050;
  long in_stack_00000058;
  char cStack0000000000000068;
  byte bStack000000000000006c;
  
code_r0x02f8bd58:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_02f8bd4c;
LAB_02f8bd64:
  puVar12 = (undefined8 *)FUN_01a472ec(unaff_x20,param_3,0);
LAB_02f8bd80:
  (*(code *)*puVar12)(unaff_x20,puVar12[1]);
LAB_02f8bd8c:
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(unaff_x21);
  }
  if ((unaff_w24 & 1) != 0) {
    unaff_w27 = 0;
  }
  if (cStack0000000000000068 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000030,0);
  }
  if ((unaff_w27 == 0xb) || (unaff_w27 == 0)) {
    uVar8 = *(undefined4 *)(unaff_x19 + 0x1c);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar6 = FUN_0276c214(uVar2,uVar8,0);
    iVar7 = -0x80000000;
    if (unaff_s8 * (float)unaff_w29 != INFINITY) {
      iVar7 = (int)(unaff_s8 * (float)unaff_w29);
    }
    iVar7 = FUN_0276c214(iVar7,iVar6 + -1,0);
    if (iVar7 < unaff_w29) {
      plVar13 = (long *)in_stack_00000028[2];
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar14 = (**(code **)(*plVar13 + 0x308))(plVar13,*(undefined8 *)(*plVar13 + 0x310));
      cStack0000000000000068 = '\0';
      FUN_027e0bd8(uVar14,&stack0x00000068,0);
      uVar22 = *(undefined8 *)PTR_DAT_03d25720;
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar22 = FUN_0277b678(uVar22,0);
      plVar13 = (long *)in_stack_00000028[2];
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar8 = (**(code **)(*plVar13 + 0x2a8))(plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
      lVar15 = FUN_02796df8(uVar22,uVar8,0);
      uVar22 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5228,0);
      plVar13 = (long *)in_stack_00000028[2];
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar8 = (**(code **)(*plVar13 + 0x2a8))(plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
      lVar16 = FUN_02796df8(uVar22,uVar8,0);
      plVar13 = (long *)in_stack_00000028[2];
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar13 = (long *)(**(code **)(*plVar13 + 0x2c8))(plVar13,*(undefined8 *)(*plVar13 + 0x2d0));
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar19 = *plVar13;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_03cc6e60) {
            puVar12 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_02f8c138;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)PTR_DAT_03cc6e60,0);
LAB_02f8c138:
      plVar13 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      do {
        lVar19 = *plVar13;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *unaff_x22) {
              puVar12 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_02f8c198;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*unaff_x22,0);
LAB_02f8c198:
        uVar20 = (*(code *)*puVar12)(plVar13,puVar12[1]);
        if ((uVar20 & 1) == 0) goto LAB_02f8c2b8;
        lVar19 = *plVar13;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *unaff_x22) {
              puVar12 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
              goto LAB_02f8c1f8;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*unaff_x22,1);
LAB_02f8c1f8:
        plVar17 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
        if ((*(byte *)(*plVar17 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)PTR_DAT_03d256f0)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar17);
        }
        if ((DAT_0412ad52 & 1) == 0) {
          FUN_01ab69ac(PTR_DAT_03cbeeb0);
          DAT_0412ad52 = 1;
        }
        in_stack_00000058 = plVar17[4];
        uVar22 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeeb0,&stack0x00000058);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(uVar22,uVar22);
        }
        FUN_02793798(lVar16,uVar22,unaff_w23,0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02793798(lVar15,plVar17,unaff_w23,0);
        unaff_w23 = unaff_w23 + 1;
      } while( true );
    }
    goto LAB_02f8b8e4;
  }
  goto LAB_02f8c75c;
LAB_02f8c2b8:
  plVar13 = (long *)thunk_FUN_01a89d6c(plVar13,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar13 != (long *)0x0) {
    lVar19 = *plVar13;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar12 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_02f8c334;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8c334:
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  if (cStack0000000000000068 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar14,0);
  }
  FUN_02796604(lVar16,lVar15,0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar6 = 0;
  do {
    iVar9 = FUN_02787790(lVar15,0);
    if (iVar9 <= iVar6) break;
    plVar13 = (long *)FUN_027877f0(lVar15,iVar6,0);
    if (plVar13 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03d256f0)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar13);
      }
    }
    cStack0000000000000068 = '\0';
    FUN_027e0bd8(plVar13,&stack0x00000068,0);
    if (unaff_w29 - iVar7 != 0 && iVar7 <= unaff_w29) {
      iVar1 = (unaff_w29 - iVar7) + unaff_w28;
      iVar9 = unaff_w28;
      iVar4 = unaff_w29;
      do {
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar17 = (long *)plVar13[3];
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar10 = (**(code **)(*plVar17 + 0x298))(plVar17,*(undefined8 *)(*plVar17 + 0x2a0));
        unaff_w29 = iVar4;
        unaff_w28 = iVar9;
        if (iVar10 < 1) break;
        plVar17 = (long *)plVar13[3];
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*plVar17 + 0x3d8))(plVar17,0,*(undefined8 *)(*plVar17 + 0x3e0));
        iVar4 = iVar4 + -1;
        iVar9 = iVar9 + 1;
        *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) + -1;
        unaff_w29 = iVar7;
        unaff_w28 = iVar1;
      } while (iVar7 < iVar4);
    }
    if (cStack0000000000000068 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(plVar13,0);
    }
    iVar6 = iVar6 + 1;
  } while (iVar7 < unaff_w29);
  if ((iVar7 < unaff_w29) && (in_stack_00000038 != 0)) {
    cStack0000000000000068 = '\0';
    unaff_w27 = 0x16;
  }
  else {
    unaff_w23 = 0;
LAB_02f8b8e4:
    if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar15 = *in_stack_00000050;
    uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x22) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_02f8b938;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar12 = (undefined8 *)FUN_01a472ec(in_stack_00000050,*unaff_x22,0);
LAB_02f8b938:
    uVar20 = (*(code *)*puVar12)(in_stack_00000050,puVar12[1]);
    if ((uVar20 & 1) != 0) {
      lVar15 = *in_stack_00000050;
      uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *unaff_x22) {
            puVar12 = (undefined8 *)(lVar15 + (long)(*piVar21 + 1) * 0x10 + 0x138);
            goto LAB_02f8b99c;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar12 = (undefined8 *)FUN_01a472ec(in_stack_00000050,*unaff_x22,1);
LAB_02f8b99c:
      plVar13 = (long *)(*(code *)*puVar12)(in_stack_00000050,puVar12[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)PTR_DAT_03cdb5d0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0();
      }
      lVar15 = thunk_FUN_01a89fbc();
      if (in_stack_00000038 == 0) {
        in_stack_00000028 = *(long **)(lVar15 + 8);
        if (in_stack_00000028 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f8 + 0x130);
          if ((*(byte *)(*in_stack_00000028 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*in_stack_00000028 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)PTR_DAT_03d256f8)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(in_stack_00000028);
          }
          goto LAB_02f8ba70;
        }
      }
      else {
        plVar13 = *(long **)(unaff_x19 + 0x10);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        in_stack_00000028 =
             (long *)(**(code **)(*plVar13 + 0x308))
                               (plVar13,in_stack_00000038,*(undefined8 *)(*plVar13 + 0x310));
        if (in_stack_00000028 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f8 + 0x130);
          if ((*(byte *)(*in_stack_00000028 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*in_stack_00000028 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)PTR_DAT_03d256f8)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(in_stack_00000028);
          }
LAB_02f8ba70:
          plVar13 = (long *)in_stack_00000028[2];
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          in_stack_00000030 =
               (**(code **)(*plVar13 + 0x308))(plVar13,*(undefined8 *)(*plVar13 + 0x310));
          cStack0000000000000068 = '\0';
          FUN_027e0bd8(in_stack_00000030,&stack0x00000068,0);
          plVar13 = (long *)in_stack_00000028[2];
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          plVar13 = (long *)(**(code **)(*plVar13 + 0x2c8))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x2d0));
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar15 = *plVar13;
          uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_03cc6e60) {
                puVar12 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_02f8bb1c;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)PTR_DAT_03cc6e60,0);
LAB_02f8bb1c:
          plVar17 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
          unaff_w29 = 0;
          plVar13 = in_stack_00000048;
          lVar15 = in_stack_00000040;
LAB_02f8bb3c:
          in_stack_00000040 = lVar15;
          in_stack_00000048 = plVar13;
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar15 = *plVar17;
          uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *unaff_x22) {
                puVar12 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_02f8bb8c;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar12 = (undefined8 *)FUN_01a472ec(plVar17,*unaff_x22,0);
LAB_02f8bb8c:
          uVar20 = (*(code *)*puVar12)(plVar17,puVar12[1]);
          if ((uVar20 & 1) != 0) {
            lVar15 = *plVar17;
            uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *unaff_x22) {
                  puVar12 = (undefined8 *)(lVar15 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                  goto LAB_02f8bbec;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
            puVar12 = (undefined8 *)FUN_01a472ec(plVar17,*unaff_x22,1);
LAB_02f8bbec:
            plVar11 = (long *)(*(code *)*puVar12)(plVar17,puVar12[1]);
            if (plVar11 != (long *)0x0) {
              bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar3) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) !=
                  *(long *)PTR_DAT_03d256f0)) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6ee0(plVar11);
              }
            }
            unaff_w23 = FUN_02f8ccbc(plVar11,plVar11);
            unaff_w28 = unaff_w23 + unaff_w28;
            *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) - unaff_w23;
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            plVar13 = (long *)plVar11[3];
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            iVar7 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
            plVar13 = (long *)plVar11[3];
            unaff_w29 = iVar7 + unaff_w29;
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            iVar7 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
            plVar13 = in_stack_00000048;
            lVar15 = in_stack_00000040;
            if (0 < iVar7) {
              if ((DAT_0412ad52 & 1) == 0) {
                FUN_01ab69ac(PTR_DAT_03cbeeb0);
                DAT_0412ad52 = 1;
              }
              lVar15 = plVar11[4];
              if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar20 = FUN_0274871c(lVar15,in_stack_00000040,0);
              plVar13 = plVar11;
              if ((uVar20 & 1) == 0) {
                plVar13 = in_stack_00000048;
                lVar15 = in_stack_00000040;
              }
            }
            goto LAB_02f8bb3c;
          }
          unaff_x21 = 0;
          unaff_w24 = 0;
          unaff_w27 = 0xb;
          unaff_x20 = (long *)thunk_FUN_01a89d6c(plVar17,*(undefined8 *)PTR_DAT_03cbed08);
          if (unaff_x20 != (long *)0x0) goto code_r0x02f8bd2c;
          goto LAB_02f8bd8c;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    unaff_w27 = 0x17;
  }
LAB_02f8c75c:
                    /* try { // try from 02f8c760 to 0308c76b has its CatchHandler @ 02f8c8d8 */
  plVar13 = (long *)thunk_FUN_01a89d6c(in_stack_00000050,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar13 == (long *)0x0) goto LAB_02f8c7dc;
  lVar15 = *plVar13;
                    /* try { // try from 02f8c784 to 0308c7a7 has its CatchHandler @ 02f8c8f8 */
  uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar20 == 0) goto LAB_02f8c7b4;
  piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
  goto LAB_02f8c79c;
code_r0x02f8bd2c:
  param_1 = *unaff_x20;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  param_3 = *(long *)PTR_DAT_03cbed08;
  if (in_x9 == 0) goto LAB_02f8bd64;
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_02f8bd4c:
  if (*(long *)(in_x10 + -2) != param_3) goto code_r0x02f8bd58;
  puVar12 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  goto LAB_02f8bd80;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
                    /* try { // try from 02f8c7b0 to 0308c7b7 has its CatchHandler @ 02f8c8ec */
    if (uVar20 == 0) break;
LAB_02f8c79c:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_02f8c7d0;
    }
  }
LAB_02f8c7b4:
  puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8c7d0:
                    /* try { // try from 02f8c7d0 to 0308c7d3 has its CatchHandler @ 02f8c8c8 */
  (*(code *)*puVar12)(plVar13,puVar12[1]);
LAB_02f8c7dc:
  if (unaff_w27 == 0) {
    unaff_w27 = 0;
                    /* try { // try from 02f8c7f0 to 0308c7f7 has its CatchHandler @ 02f8c8d0 */
  }
  uVar18 = (uint)bStack000000000000006c;
                    /* try { // try from 02f8c7f8 to 0308c8b7 has its CatchHandler @ 02f8c510 */
  if (bStack000000000000006c != 0) {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000008,0);
    uVar18 = extraout_w8;
  }
  puVar5 = PTR_DAT_03cbeeb0;
  if (unaff_w27 != 0x17) {
    if (unaff_w27 == 0x16) {
      uVar18 = (uint)(cStack0000000000000068 != '\0');
      goto LAB_02f8c724;
    }
    if (unaff_w27 != 0) goto LAB_02f8c724;
  }
  uVar18 = 1;
  if ((in_stack_00000038 == 0) && (unaff_w28 == 0)) {
    lVar15 = *(long *)PTR_DAT_03cbeeb0;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar15 = *(long *)puVar5;
    }
    uVar20 = FUN_0274864c(in_stack_00000040,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x18),0);
    if ((uVar20 & 1) == 0) {
      bStack000000000000006c = '\0';
      FUN_027e0bd8(in_stack_00000048,(long)&stack0x00000068 + 4,0);
      if (*(int *)(unaff_x19 + 0x1c) <= *(int *)(unaff_x19 + 0x24)) {
        if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        do {
          plVar13 = (long *)in_stack_00000048[3];
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
                    /* try { // try from 02f8c8b8 to 0308c8bb has its CatchHandler @ 02f8c8e0 */
                    /* try { // try from 02f8c8bc to 0308c8bf has its CatchHandler @ 02f8c8dc */
                    /* try { // try from 02f8c8c0 to 0308c8c3 has its CatchHandler @ 02f8c8d4 */
          iVar7 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
                    /* try { // try from 02f8c8c4 to 0308c8c7 has its CatchHandler @ 02f8c8f0 */
                    /* catch() { ... } // from try @ 02f8c7d0 with catch @ 02f8c8c8
                       try { // try from 02f8c8c8 to 0308c90f has its CatchHandler @ 02f8c510 */
          if (iVar7 < 1) break;
                    /* catch() { ... } // from try @ 02f8c6e0 with catch @ 02f8c8cc */
                    /* catch() { ... } // from try @ 02f8c7f0 with catch @ 02f8c8d0 */
          plVar13 = (long *)in_stack_00000048[3];
                    /* catch() { ... } // from try @ 02f8c8c0 with catch @ 02f8c8d4 */
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
                    /* catch() { ... } // from try @ 02f8c760 with catch @ 02f8c8d8 */
                    /* catch() { ... } // from try @ 02f8c8bc with catch @ 02f8c8dc */
                    /* catch() { ... } // from try @ 02f8c8b8 with catch @ 02f8c8e0 */
                    /* catch() { ... } // from try @ 02f8c6e4 with catch @ 02f8c8e4 */
                    /* catch() { ... } // from try @ 02f8c6b0 with catch @ 02f8c8e8 */
          (**(code **)(*plVar13 + 0x3d8))(plVar13,0,*(undefined8 *)(*plVar13 + 0x3e0));
                    /* catch() { ... } // from try @ 02f8c7b0 with catch @ 02f8c8ec */
                    /* catch() { ... } // from try @ 02f8c704 with catch @ 02f8c8f0
                       catch() { ... } // from try @ 02f8c8c4 with catch @ 02f8c8f0 */
                    /* catch() { ... } // from try @ 02f8c69c with catch @ 02f8c8f4 */
          iVar7 = *(int *)(unaff_x19 + 0x24) + -1;
                    /* catch() { ... } // from try @ 02f8c784 with catch @ 02f8c8f8 */
          *(int *)(unaff_x19 + 0x24) = iVar7;
        } while (*(int *)(unaff_x19 + 0x1c) <= iVar7);
      }
      if (bStack000000000000006c != '\0') {
                    /* try { // try from 02f8c910 to 0308c97b has its CatchHandler @ 02f8c9ac */
        OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000048,0);
      }
      uVar18 = 1;
    }
    else {
      uVar18 = 0;
    }
  }
LAB_02f8c724:
  return uVar18 & 1;
}


