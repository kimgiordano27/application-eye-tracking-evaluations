/*
FUNCTION_NAME: UniGLTF.MeshData$$ImportMeshSharingVertexBuffer
ENTRY_POINT: 02f8bebc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_14
*/


/* WARNING: Removing unreachable block (ram,0x02f8ca2c) */
/* WARNING: Removing unreachable block (ram,0x02f8c4d4) */
/* WARNING: Removing unreachable block (ram,0x02f8ca1c) */
/* WARNING: Removing unreachable block (ram,0x02f8c5a4) */
/* WARNING: Removing unreachable block (ram,0x02f8c9c8) */
/* WARNING: Removing unreachable block (ram,0x02f8ca38) */
/* WARNING: Removing unreachable block (ram,0x02f8c354) */
/* WARNING: Removing unreachable block (ram,0x02f8c388) */
/* WARNING: Removing unreachable block (ram,0x02f8cc4c) */
/* WARNING: Removing unreachable block (ram,0x02f8cc84) */
/* WARNING: Removing unreachable block (ram,0x02f8c95c) */

uint UniGLTF_MeshData__ImportMeshSharingVertexBuffer(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  uint extraout_w8;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long unaff_x19;
  undefined8 uVar21;
  int unaff_w21;
  long lVar22;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  long unaff_x27;
  int unaff_w28;
  int unaff_w29;
  float unaff_s8;
  undefined8 in_stack_00000008;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  long *in_stack_00000050;
  long in_stack_00000058;
  char cStack0000000000000068;
  byte bStack000000000000006c;
  
  if (param_2 == 1) {
    plVar13 = (long *)__cxa_begin_catch(param_1);
    lVar22 = *plVar13;
    __cxa_end_catch();
    iVar8 = 0;
    bVar5 = true;
    goto code_r0x02f8bd10;
  }
  plVar13 = (long *)thunk_FUN_01a89d6c();
  if (plVar13 != (long *)0x0) {
    lVar22 = *plVar13;
    uVar19 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar12 = (undefined8 *)(lVar22 + (long)*piVar20 * 0x10 + 0x138);
          goto code_r0x02f8bfa4;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)PTR_DAT_03cbed08,0);
code_r0x02f8bfa4:
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  if (param_2 == 1) {
    plVar13 = (long *)__cxa_begin_catch(param_1);
    lVar22 = *plVar13;
    __cxa_end_catch();
code_r0x02f8bd98:
    iVar8 = 0;
    lVar17 = lVar22;
LAB_02f8bda0:
    if (cStack0000000000000068 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000030,0);
    }
    if (lVar17 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar17);
    }
    if ((iVar8 == 0xb) || (iVar8 == 0)) {
      uVar9 = *(undefined4 *)(unaff_x19 + 0x1c);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar7 = FUN_0276c214(uVar2,uVar9,0);
      iVar8 = -0x80000000;
      if (unaff_s8 * (float)unaff_w29 != INFINITY) {
        iVar8 = (int)(unaff_s8 * (float)unaff_w29);
      }
      iVar8 = FUN_0276c214(iVar8,iVar7 + -1,0);
      if (iVar8 < unaff_w29) {
        plVar13 = (long *)in_stack_00000028[2];
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar14 = (**(code **)(*plVar13 + 0x308))(plVar13,*(undefined8 *)(*plVar13 + 0x310));
        cStack0000000000000068 = '\0';
        FUN_027e0bd8(uVar14,&stack0x00000068,0);
        uVar21 = *(undefined8 *)PTR_DAT_03d25720;
        if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_0277b678(uVar21,0);
        plVar13 = (long *)in_stack_00000028[2];
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar9 = (**(code **)(*plVar13 + 0x2a8))(plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
        lVar22 = FUN_02796df8(uVar21,uVar9,0);
        uVar21 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5228,0);
        plVar13 = (long *)in_stack_00000028[2];
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar9 = (**(code **)(*plVar13 + 0x2a8))(plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
        lVar17 = FUN_02796df8(uVar21,uVar9,0);
        plVar13 = (long *)in_stack_00000028[2];
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar13 = (long *)(**(code **)(*plVar13 + 0x2c8))(plVar13,*(undefined8 *)(*plVar13 + 0x2d0))
        ;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar18 = *plVar13;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_03cc6e60) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_02f8c138;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)PTR_DAT_03cc6e60,0);
LAB_02f8c138:
        plVar13 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        do {
          lVar18 = *plVar13;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *unaff_x22) {
                puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_02f8c198;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*unaff_x22,0);
LAB_02f8c198:
          uVar19 = (*(code *)*puVar12)(plVar13,puVar12[1]);
          if ((uVar19 & 1) == 0) goto LAB_02f8c2b8;
          lVar18 = *plVar13;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *unaff_x22) {
                puVar12 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_02f8c1f8;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*unaff_x22,1);
LAB_02f8c1f8:
          plVar15 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)PTR_DAT_03d256f0)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(plVar15);
          }
          if ((DAT_0412ad52 & 1) == 0) {
            FUN_01ab69ac(PTR_DAT_03cbeeb0);
            DAT_0412ad52 = 1;
          }
          in_stack_00000058 = plVar15[4];
          uVar21 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeeb0,&stack0x00000058);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c(uVar21,uVar21);
          }
          FUN_02793798(lVar17,uVar21,unaff_w21,0);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_02793798(lVar22,plVar15,unaff_w21,0);
          unaff_w21 = unaff_w21 + 1;
        } while( true );
      }
      goto LAB_02f8b8e4;
    }
    lVar22 = 0;
    goto LAB_02f8c75c;
  }
  if (cStack0000000000000068 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000030,0);
  }
  if (param_2 != 1) {
    plVar13 = (long *)thunk_FUN_01a89d6c(in_stack_00000050,*(undefined8 *)PTR_DAT_03cbed08);
    if (plVar13 != (long *)0x0) {
      lVar22 = *plVar13;
      uVar19 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar19 == 0) {
LAB_02f8cbf8:
        puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)PTR_DAT_03cbed08,0);
      }
      else {
        piVar20 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        while (*(long *)(piVar20 + -2) != *(long *)PTR_DAT_03cbed08) {
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
          if (uVar19 == 0) goto LAB_02f8cbf8;
        }
        puVar12 = (undefined8 *)(lVar22 + (long)*piVar20 * 0x10 + 0x138);
      }
      (*(code *)*puVar12)(plVar13,puVar12[1]);
    }
    if (param_2 != 1) {
      if (bStack000000000000006c != 0) {
        OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000008,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0(param_1);
    }
    plVar13 = (long *)__cxa_begin_catch(param_1);
    lVar22 = *plVar13;
    __cxa_end_catch();
    goto LAB_02f8c7ec;
  }
  plVar13 = (long *)__cxa_begin_catch(param_1);
  lVar22 = *plVar13;
  __cxa_end_catch();
  iVar8 = 0;
LAB_02f8c75c:
  plVar13 = (long *)thunk_FUN_01a89d6c(in_stack_00000050,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar13 != (long *)0x0) {
    lVar17 = *plVar13;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_02f8c7d0;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8c7d0:
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  if (lVar22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar22);
  }
  lVar22 = 0;
  lVar17 = 0;
  if (iVar8 == 0) {
LAB_02f8c7ec:
    iVar8 = 0;
    lVar17 = lVar22;
  }
  uVar16 = (uint)bStack000000000000006c;
  if (bStack000000000000006c != 0) {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000008,0);
    uVar16 = extraout_w8;
  }
  puVar6 = PTR_DAT_03cbeeb0;
  if (lVar17 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar17);
  }
  if (iVar8 != 0x17) {
    if (iVar8 == 0x16) {
      uVar16 = (uint)(cStack0000000000000068 != '\0');
      goto LAB_02f8c724;
    }
    if (iVar8 != 0) goto LAB_02f8c724;
  }
  uVar16 = 1;
  if ((in_stack_00000038 == 0) && (unaff_w28 == 0)) {
    lVar22 = *(long *)PTR_DAT_03cbeeb0;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar22 = *(long *)puVar6;
    }
    uVar19 = FUN_0274864c(unaff_x27,*(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x18),0);
    if ((uVar19 & 1) == 0) {
      bStack000000000000006c = '\0';
      FUN_027e0bd8(unaff_x23,(long)&stack0x00000068 + 4,0);
      if (*(int *)(unaff_x19 + 0x1c) <= *(int *)(unaff_x19 + 0x24)) {
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        do {
          plVar13 = (long *)unaff_x23[3];
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          iVar8 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
          if (iVar8 < 1) break;
          plVar13 = (long *)unaff_x23[3];
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          (**(code **)(*plVar13 + 0x3d8))(plVar13,0,*(undefined8 *)(*plVar13 + 0x3e0));
          iVar8 = *(int *)(unaff_x19 + 0x24) + -1;
          *(int *)(unaff_x19 + 0x24) = iVar8;
        } while (*(int *)(unaff_x19 + 0x1c) <= iVar8);
      }
      if (bStack000000000000006c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x23,0);
      }
      uVar16 = 1;
    }
    else {
      uVar16 = 0;
    }
  }
LAB_02f8c724:
  return uVar16 & 1;
LAB_02f8c2b8:
  plVar13 = (long *)thunk_FUN_01a89d6c(plVar13,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar13 != (long *)0x0) {
    lVar18 = *plVar13;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_02f8c334;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8c334:
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  if (cStack0000000000000068 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar14,0);
  }
  FUN_02796604(lVar17,lVar22,0);
  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar7 = 0;
  do {
    iVar10 = FUN_02787790(lVar22,0);
    if (iVar10 <= iVar7) break;
    plVar13 = (long *)FUN_027877f0(lVar22,iVar7,0);
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
    if (unaff_w29 - iVar8 != 0 && iVar8 <= unaff_w29) {
      iVar1 = (unaff_w29 - iVar8) + unaff_w28;
      iVar10 = unaff_w28;
      iVar4 = unaff_w29;
      do {
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar15 = (long *)plVar13[3];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar11 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0));
        unaff_w29 = iVar4;
        unaff_w28 = iVar10;
        if (iVar11 < 1) break;
        plVar15 = (long *)plVar13[3];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*plVar15 + 0x3d8))(plVar15,0,*(undefined8 *)(*plVar15 + 0x3e0));
        iVar4 = iVar4 + -1;
        iVar10 = iVar10 + 1;
        *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) + -1;
        unaff_w29 = iVar8;
        unaff_w28 = iVar1;
      } while (iVar8 < iVar4);
    }
    if (cStack0000000000000068 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(plVar13,0);
    }
    iVar7 = iVar7 + 1;
  } while (iVar8 < unaff_w29);
  if ((iVar8 < unaff_w29) && (in_stack_00000038 != 0)) {
    lVar22 = 0;
    cStack0000000000000068 = '\0';
    iVar8 = 0x16;
    goto LAB_02f8c75c;
  }
  unaff_w21 = 0;
LAB_02f8b8e4:
  if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar22 = *in_stack_00000050;
  uVar19 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *unaff_x22) {
        puVar12 = (undefined8 *)(lVar22 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_02f8b938;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  puVar12 = (undefined8 *)FUN_01a472ec(in_stack_00000050,*unaff_x22,0);
LAB_02f8b938:
  uVar19 = (*(code *)*puVar12)(in_stack_00000050,puVar12[1]);
  if ((uVar19 & 1) == 0) {
    lVar22 = 0;
    iVar8 = 0x17;
    goto LAB_02f8c75c;
  }
  lVar22 = *in_stack_00000050;
  uVar19 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *unaff_x22) {
        puVar12 = (undefined8 *)(lVar22 + (long)(*piVar20 + 1) * 0x10 + 0x138);
        goto LAB_02f8b99c;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
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
  lVar22 = thunk_FUN_01a89fbc();
  if (in_stack_00000038 == 0) {
    in_stack_00000028 = *(long **)(lVar22 + 8);
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
      in_stack_00000030 = (**(code **)(*plVar13 + 0x308))(plVar13,*(undefined8 *)(*plVar13 + 0x310))
      ;
      cStack0000000000000068 = '\0';
      FUN_027e0bd8(in_stack_00000030,&stack0x00000068,0);
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
      lVar22 = *plVar13;
      uVar19 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_03cc6e60) {
            puVar12 = (undefined8 *)(lVar22 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_02f8bb1c;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)PTR_DAT_03cc6e60,0);
LAB_02f8bb1c:
      unaff_x25 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
      unaff_w29 = 0;
      plVar13 = unaff_x23;
      lVar22 = unaff_x27;
LAB_02f8bb3c:
      unaff_x27 = lVar22;
      unaff_x23 = plVar13;
      if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar22 = *unaff_x25;
      uVar19 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x22) {
            puVar12 = (undefined8 *)(lVar22 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_02f8bb8c;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_01a472ec(unaff_x25,*unaff_x22,0);
LAB_02f8bb8c:
      uVar19 = (*(code *)*puVar12)(unaff_x25,puVar12[1]);
      if ((uVar19 & 1) != 0) {
        lVar22 = *unaff_x25;
        uVar19 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x22) {
              puVar12 = (undefined8 *)(lVar22 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_02f8bbec;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_01a472ec(unaff_x25,*unaff_x22,1);
LAB_02f8bbec:
        plVar15 = (long *)(*(code *)*puVar12)(unaff_x25,puVar12[1]);
        if (plVar15 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)PTR_DAT_03d256f0)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(plVar15);
          }
        }
        unaff_w21 = FUN_02f8ccbc(plVar15,plVar15);
        unaff_w28 = unaff_w21 + unaff_w28;
        *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) - unaff_w21;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar13 = (long *)plVar15[3];
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar8 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
        plVar13 = (long *)plVar15[3];
        unaff_w29 = iVar8 + unaff_w29;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar8 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
        plVar13 = unaff_x23;
        lVar22 = unaff_x27;
        if (0 < iVar8) {
          if ((DAT_0412ad52 & 1) == 0) {
            FUN_01ab69ac(PTR_DAT_03cbeeb0);
            DAT_0412ad52 = 1;
          }
          lVar22 = plVar15[4];
          if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar19 = FUN_0274871c(lVar22,unaff_x27,0);
          plVar13 = plVar15;
          if ((uVar19 & 1) == 0) {
            plVar13 = unaff_x23;
            lVar22 = unaff_x27;
          }
        }
        goto LAB_02f8bb3c;
      }
      lVar22 = 0;
      bVar5 = false;
      iVar8 = 0xb;
code_r0x02f8bd10:
      plVar13 = (long *)thunk_FUN_01a89d6c(unaff_x25,*(undefined8 *)PTR_DAT_03cbed08);
      if (plVar13 != (long *)0x0) {
        lVar17 = *plVar13;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_03cbed08) {
              puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_02f8bd80;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8bd80:
        (*(code *)*puVar12)(plVar13,puVar12[1]);
      }
      if (lVar22 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01a28d1c(lVar22);
      }
      lVar22 = 0;
      lVar17 = 0;
      if (bVar5) goto code_r0x02f8bd98;
      goto LAB_02f8bda0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


