/*
FUNCTION_NAME: UniGLTF.MeshData$$Dispose
ENTRY_POINT: 02f8b944
PROGRAM: vrlegs-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x02f8c9c8) */
/* WARNING: Removing unreachable block (ram,0x02f8ca10) */
/* WARNING: Removing unreachable block (ram,0x02f8ca2c) */
/* WARNING: Removing unreachable block (ram,0x02f8bd98) */
/* WARNING: Removing unreachable block (ram,0x02f8c4d4) */
/* WARNING: Removing unreachable block (ram,0x02f8ca00) */
/* WARNING: Removing unreachable block (ram,0x02f8be70) */
/* WARNING: Removing unreachable block (ram,0x02f8bdc0) */
/* WARNING: Removing unreachable block (ram,0x02f8c97c) */
/* WARNING: Removing unreachable block (ram,0x02f8c354) */
/* WARNING: Removing unreachable block (ram,0x02f8c5a4) */
/* WARNING: Removing unreachable block (ram,0x02f8c388) */
/* WARNING: Removing unreachable block (ram,0x02f8c758) */
/* WARNING: Removing unreachable block (ram,0x02f8ca1c) */

uint UniGLTF_MeshData__Dispose(ulong param_1)

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
  int iVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  uint extraout_w8;
  uint uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  long unaff_x19;
  undefined8 uVar24;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w28;
  float unaff_s8;
  undefined8 in_stack_00000008;
  long in_stack_00000038;
  long in_stack_00000040;
  long *in_stack_00000048;
  long *in_stack_00000050;
  long in_stack_00000058;
  char cStack0000000000000068;
  byte bStack000000000000006c;
  
code_r0x02f8b944:
  if ((param_1 & 1) != 0) {
    lVar20 = *in_stack_00000050;
    uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
                    /* try { // try from 02f8b964 to 0308b96b has its CatchHandler @ 02f8bb74 */
        if (*(long *)(piVar23 + -2) == *unaff_x22) {
          puVar12 = (undefined8 *)(lVar20 + (long)(*piVar23 + 1) * 0x10 + 0x138);
          goto LAB_02f8b99c;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
                    /* try { // try from 02f8b978 to 0308b97f has its CatchHandler @ 02f8bb68 */
      } while (uVar22 != 0);
    }
    puVar12 = (undefined8 *)FUN_01a472ec(in_stack_00000050,*unaff_x22,1);
LAB_02f8b99c:
                    /* try { // try from 02f8b99c to 0308b99f has its CatchHandler @ 02f8bb48 */
                    /* try { // try from 02f8b9a0 to 0308b9ab has its CatchHandler @ 02f8bb64 */
    plVar13 = (long *)(*(code *)*puVar12)(in_stack_00000050,puVar12[1]);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* try { // try from 02f8b9c0 to 0308ba0b has its CatchHandler @ 02f8bb70 */
    if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)PTR_DAT_03cdb5d0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0();
    }
    lVar20 = thunk_FUN_01a89fbc();
    if (in_stack_00000038 == 0) {
      plVar13 = *(long **)(lVar20 + 8);
      if (plVar13 == (long *)0x0) goto LAB_02f8c970;
      bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f8 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03d256f8)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar13);
      }
    }
    else {
      plVar13 = *(long **)(unaff_x19 + 0x10);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                  (plVar13,in_stack_00000038,*(undefined8 *)(*plVar13 + 0x310));
      if (plVar13 == (long *)0x0) {
LAB_02f8c970:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f8 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03d256f8)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar13);
      }
    }
    plVar14 = (long *)plVar13[2];
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar15 = (**(code **)(*plVar14 + 0x308))(plVar14,*(undefined8 *)(*plVar14 + 0x310));
    cStack0000000000000068 = '\0';
    FUN_027e0bd8(uVar15,&stack0x00000068,0);
    plVar14 = (long *)plVar13[2];
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar14 = (long *)(**(code **)(*plVar14 + 0x2c8))(plVar14,*(undefined8 *)(*plVar14 + 0x2d0));
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar20 = *plVar14;
    uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_03cc6e60) {
          puVar12 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_02f8bb1c;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar12 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)PTR_DAT_03cc6e60,0);
LAB_02f8bb1c:
    plVar16 = (long *)(*(code *)*puVar12)(plVar14,puVar12[1]);
    iVar11 = 0;
    plVar14 = in_stack_00000048;
    lVar20 = in_stack_00000040;
LAB_02f8bb3c:
    in_stack_00000040 = lVar20;
    in_stack_00000048 = plVar14;
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar20 = *plVar16;
    uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *unaff_x22) {
          puVar12 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_02f8bb8c;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar12 = (undefined8 *)FUN_01a472ec(plVar16,*unaff_x22,0);
LAB_02f8bb8c:
    uVar22 = (*(code *)*puVar12)(plVar16,puVar12[1]);
    if ((uVar22 & 1) != 0) {
      lVar20 = *plVar16;
      uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar22 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *unaff_x22) {
            puVar12 = (undefined8 *)(lVar20 + (long)(*piVar23 + 1) * 0x10 + 0x138);
            goto LAB_02f8bbec;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar22 != 0);
      }
      puVar12 = (undefined8 *)FUN_01a472ec(plVar16,*unaff_x22,1);
LAB_02f8bbec:
      plVar17 = (long *)(*(code *)*puVar12)(plVar16,puVar12[1]);
      if (plVar17 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
        if ((*(byte *)(*plVar17 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)PTR_DAT_03d256f0)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar17);
        }
      }
      unaff_w23 = FUN_02f8ccbc(plVar17,plVar17);
      unaff_w28 = unaff_w23 + unaff_w28;
      *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) - unaff_w23;
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar14 = (long *)plVar17[3];
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar6 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0));
      plVar14 = (long *)plVar17[3];
      iVar11 = iVar6 + iVar11;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar6 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0));
      plVar14 = in_stack_00000048;
      lVar20 = in_stack_00000040;
      if (0 < iVar6) {
        if ((DAT_0412ad52 & 1) == 0) {
          FUN_01ab69ac(PTR_DAT_03cbeeb0);
          DAT_0412ad52 = 1;
        }
        lVar20 = plVar17[4];
        if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar22 = FUN_0274871c(lVar20,in_stack_00000040,0);
        plVar14 = plVar17;
        if ((uVar22 & 1) == 0) {
          plVar14 = in_stack_00000048;
          lVar20 = in_stack_00000040;
        }
      }
      goto LAB_02f8bb3c;
    }
    plVar14 = (long *)thunk_FUN_01a89d6c(plVar16,*(undefined8 *)PTR_DAT_03cbed08);
    if (plVar14 != (long *)0x0) {
      lVar20 = *plVar14;
      uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar22 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_03cbed08) {
            puVar12 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_02f8bd80;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar22 != 0);
      }
      puVar12 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8bd80:
      (*(code *)*puVar12)(plVar14,puVar12[1]);
    }
    if (cStack0000000000000068 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar15,0);
    }
    uVar8 = *(undefined4 *)(unaff_x19 + 0x1c);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar7 = FUN_0276c214(uVar2,uVar8,0);
    iVar6 = -0x80000000;
    if (unaff_s8 * (float)iVar11 != INFINITY) {
      iVar6 = (int)(unaff_s8 * (float)iVar11);
    }
    iVar6 = FUN_0276c214(iVar6,iVar7 + -1,0);
    if (iVar6 < iVar11) {
      plVar14 = (long *)plVar13[2];
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar15 = (**(code **)(*plVar14 + 0x308))(plVar14,*(undefined8 *)(*plVar14 + 0x310));
      cStack0000000000000068 = '\0';
      FUN_027e0bd8(uVar15,&stack0x00000068,0);
      uVar24 = *(undefined8 *)PTR_DAT_03d25720;
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar24 = FUN_0277b678(uVar24,0);
      plVar14 = (long *)plVar13[2];
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar8 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
      lVar20 = FUN_02796df8(uVar24,uVar8,0);
      uVar24 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5228,0);
      plVar14 = (long *)plVar13[2];
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar8 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
      lVar18 = FUN_02796df8(uVar24,uVar8,0);
      plVar13 = (long *)plVar13[2];
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar13 = (long *)(**(code **)(*plVar13 + 0x2c8))(plVar13,*(undefined8 *)(*plVar13 + 0x2d0));
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar21 = *plVar13;
      uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar22 != 0) {
        piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_03cc6e60) {
            puVar12 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_02f8c138;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar22 != 0);
      }
      puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)PTR_DAT_03cc6e60,0);
LAB_02f8c138:
      plVar13 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      do {
        lVar21 = *plVar13;
        uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar22 != 0) {
          piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *unaff_x22) {
              puVar12 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_02f8c198;
            }
            uVar22 = uVar22 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar22 != 0);
        }
        puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*unaff_x22,0);
LAB_02f8c198:
        uVar22 = (*(code *)*puVar12)(plVar13,puVar12[1]);
        if ((uVar22 & 1) == 0) goto LAB_02f8c2b8;
        lVar21 = *plVar13;
        uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar22 != 0) {
          piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *unaff_x22) {
              puVar12 = (undefined8 *)(lVar21 + (long)(*piVar23 + 1) * 0x10 + 0x138);
              goto LAB_02f8c1f8;
            }
            uVar22 = uVar22 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar22 != 0);
        }
        puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*unaff_x22,1);
LAB_02f8c1f8:
        plVar14 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)PTR_DAT_03d256f0)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar14);
        }
        if ((DAT_0412ad52 & 1) == 0) {
          FUN_01ab69ac(PTR_DAT_03cbeeb0);
          DAT_0412ad52 = 1;
        }
        in_stack_00000058 = plVar14[4];
        uVar24 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeeb0,&stack0x00000058);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(uVar24,uVar24);
        }
        FUN_02793798(lVar18,uVar24,unaff_w23,0);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02793798(lVar20,plVar14,unaff_w23,0);
        unaff_w23 = unaff_w23 + 1;
      } while( true );
    }
    goto LAB_02f8b8e4;
  }
  iVar11 = 0x17;
LAB_02f8c75c:
  plVar13 = (long *)thunk_FUN_01a89d6c(in_stack_00000050,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar13 != (long *)0x0) {
    lVar20 = *plVar13;
    uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar12 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_02f8c7d0;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8c7d0:
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  if (iVar11 == 0) {
    iVar11 = 0;
  }
  uVar19 = (uint)bStack000000000000006c;
  if (bStack000000000000006c != 0) {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000008,0);
    uVar19 = extraout_w8;
  }
  puVar5 = PTR_DAT_03cbeeb0;
  if (iVar11 != 0x17) {
    if (iVar11 == 0x16) {
      uVar19 = (uint)(cStack0000000000000068 != '\0');
      goto LAB_02f8c724;
    }
    if (iVar11 != 0) goto LAB_02f8c724;
  }
  uVar19 = 1;
  if ((in_stack_00000038 == 0) && (unaff_w28 == 0)) {
    lVar20 = *(long *)PTR_DAT_03cbeeb0;
    if (*(int *)(lVar20 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar20 = *(long *)puVar5;
    }
    uVar22 = FUN_0274864c(in_stack_00000040,*(undefined8 *)(*(long *)(lVar20 + 0xb8) + 0x18),0);
    if ((uVar22 & 1) == 0) {
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
          iVar11 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
          if (iVar11 < 1) break;
          plVar13 = (long *)in_stack_00000048[3];
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          (**(code **)(*plVar13 + 0x3d8))(plVar13,0,*(undefined8 *)(*plVar13 + 0x3e0));
          iVar11 = *(int *)(unaff_x19 + 0x24) + -1;
          *(int *)(unaff_x19 + 0x24) = iVar11;
        } while (*(int *)(unaff_x19 + 0x1c) <= iVar11);
      }
      if (bStack000000000000006c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000048,0);
      }
      uVar19 = 1;
    }
    else {
      uVar19 = 0;
    }
  }
LAB_02f8c724:
  return uVar19 & 1;
LAB_02f8c2b8:
  plVar13 = (long *)thunk_FUN_01a89d6c(plVar13,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar13 != (long *)0x0) {
    lVar21 = *plVar13;
    uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar12 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_02f8c334;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar12 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8c334:
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  if (cStack0000000000000068 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar15,0);
  }
  FUN_02796604(lVar18,lVar20,0);
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar7 = 0;
  do {
    iVar9 = FUN_02787790(lVar20,0);
    if (iVar9 <= iVar7) break;
    plVar13 = (long *)FUN_027877f0(lVar20,iVar7,0);
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
    if (iVar11 - iVar6 != 0 && iVar6 <= iVar11) {
      iVar1 = (iVar11 - iVar6) + unaff_w28;
      iVar9 = unaff_w28;
      iVar4 = iVar11;
      do {
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar14 = (long *)plVar13[3];
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar10 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0));
        iVar11 = iVar4;
        unaff_w28 = iVar9;
        if (iVar10 < 1) break;
        plVar14 = (long *)plVar13[3];
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*plVar14 + 0x3d8))(plVar14,0,*(undefined8 *)(*plVar14 + 0x3e0));
        iVar4 = iVar4 + -1;
        iVar9 = iVar9 + 1;
        *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) + -1;
        iVar11 = iVar6;
        unaff_w28 = iVar1;
      } while (iVar6 < iVar4);
    }
    if (cStack0000000000000068 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(plVar13,0);
    }
    iVar7 = iVar7 + 1;
  } while (iVar6 < iVar11);
  if ((iVar6 < iVar11) && (in_stack_00000038 != 0)) {
    cStack0000000000000068 = '\0';
    iVar11 = 0x16;
    goto LAB_02f8c75c;
  }
  unaff_w23 = 0;
LAB_02f8b8e4:
  if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar20 = *in_stack_00000050;
  uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar22 != 0) {
    piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar23 + -2) == *unaff_x22) {
        puVar12 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
        goto LAB_02f8b938;
      }
      uVar22 = uVar22 - 1;
      piVar23 = piVar23 + 4;
    } while (uVar22 != 0);
  }
  puVar12 = (undefined8 *)FUN_01a472ec(in_stack_00000050,*unaff_x22,0);
LAB_02f8b938:
  param_1 = (*(code *)*puVar12)(in_stack_00000050,puVar12[1]);
  goto code_r0x02f8b944;
}


