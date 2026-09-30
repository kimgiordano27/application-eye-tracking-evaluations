/*
FUNCTION_NAME: UniGLTF.MeshData$$HasSharedVertexBuffer
ENTRY_POINT: 02f8bb80
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x02f8c5a4) */
/* WARNING: Removing unreachable block (ram,0x02f8c9c8) */
/* WARNING: Removing unreachable block (ram,0x02f8ca10) */
/* WARNING: Removing unreachable block (ram,0x02f8ca2c) */
/* WARNING: Removing unreachable block (ram,0x02f8bd98) */
/* WARNING: Removing unreachable block (ram,0x02f8c4d4) */
/* WARNING: Removing unreachable block (ram,0x02f8ca00) */
/* WARNING: Removing unreachable block (ram,0x02f8ca1c) */
/* WARNING: Removing unreachable block (ram,0x02f8be70) */
/* WARNING: Removing unreachable block (ram,0x02f8c354) */
/* WARNING: Removing unreachable block (ram,0x02f8bdc0) */
/* WARNING: Removing unreachable block (ram,0x02f8c97c) */
/* WARNING: Removing unreachable block (ram,0x02f8c388) */
/* WARNING: Removing unreachable block (ram,0x02f8c758) */

uint UniGLTF_MeshData__HasSharedVertexBuffer(long param_1)

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
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  uint extraout_w8;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int *in_x10;
  int *piVar22;
  long unaff_x19;
  undefined8 uVar23;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  int unaff_w26;
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
  
code_r0x02f8bb80:
                    /* catch() { ... } // from try @ 02f8bb2c with catch @ 02f8bb80 */
                    /* catch() { ... } // from try @ 02f8b834 with catch @ 02f8bb84 */
                    /* catch() { ... } // from try @ 02f8bb28 with catch @ 02f8bb88 */
  puVar13 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  plVar11 = unaff_x23;
  lVar19 = unaff_x27;
LAB_02f8bb8c:
                    /* catch() { ... } // from try @ 02f8b818 with catch @ 02f8bb8c */
                    /* catch() { ... } // from try @ 02f8bb24 with catch @ 02f8bb90 */
                    /* catch() { ... } // from try @ 02f8b800 with catch @ 02f8bb94 */
  uVar12 = (*(code *)*puVar13)(unaff_x25,puVar13[1]);
                    /* catch() { ... } // from try @ 02f8bb20 with catch @ 02f8bb98 */
  unaff_x23 = plVar11;
  unaff_x27 = lVar19;
  if ((uVar12 & 1) == 0) {
    plVar14 = (long *)thunk_FUN_01a89d6c(unaff_x25,*(undefined8 *)PTR_DAT_03cbed08);
    if (plVar14 != (long *)0x0) {
      lVar20 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar12 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_03cbed08) {
            puVar13 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_02f8bd80;
          }
          uVar12 = uVar12 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8bd80:
      (*(code *)*puVar13)(plVar14,puVar13[1]);
    }
    if (cStack0000000000000068 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000030,0);
    }
    uVar8 = *(undefined4 *)(unaff_x19 + 0x1c);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar7 = FUN_0276c214(uVar2,uVar8,0);
    iVar6 = -0x80000000;
    if (unaff_s8 * (float)unaff_w29 != INFINITY) {
      iVar6 = (int)(unaff_s8 * (float)unaff_w29);
    }
    iVar6 = FUN_0276c214(iVar6,iVar7 + -1,0);
    if (iVar6 < unaff_w29) {
      plVar14 = (long *)in_stack_00000028[2];
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar16 = (**(code **)(*plVar14 + 0x308))(plVar14,*(undefined8 *)(*plVar14 + 0x310));
      cStack0000000000000068 = '\0';
      FUN_027e0bd8(uVar16,&stack0x00000068,0);
      uVar23 = *(undefined8 *)PTR_DAT_03d25720;
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar23 = FUN_0277b678(uVar23,0);
      plVar14 = (long *)in_stack_00000028[2];
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar8 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
      lVar20 = FUN_02796df8(uVar23,uVar8,0);
      uVar23 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5228,0);
      plVar14 = (long *)in_stack_00000028[2];
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar8 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
      lVar17 = FUN_02796df8(uVar23,uVar8,0);
      plVar14 = (long *)in_stack_00000028[2];
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar14 = (long *)(**(code **)(*plVar14 + 0x2c8))(plVar14,*(undefined8 *)(*plVar14 + 0x2d0));
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar21 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar21 + 0x12e);
      if (uVar12 != 0) {
        piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_03cc6e60) {
            puVar13 = (undefined8 *)(lVar21 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_02f8c138;
          }
          uVar12 = uVar12 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)PTR_DAT_03cc6e60,0);
LAB_02f8c138:
      plVar14 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      do {
        lVar21 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar12 != 0) {
          piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *unaff_x22) {
              puVar13 = (undefined8 *)(lVar21 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_02f8c198;
            }
            uVar12 = uVar12 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_01a472ec(plVar14,*unaff_x22,0);
LAB_02f8c198:
        uVar12 = (*(code *)*puVar13)(plVar14,puVar13[1]);
        if ((uVar12 & 1) == 0) goto LAB_02f8c2b8;
        lVar21 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar12 != 0) {
          piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *unaff_x22) {
              puVar13 = (undefined8 *)(lVar21 + (long)(*piVar22 + 1) * 0x10 + 0x138);
              goto LAB_02f8c1f8;
            }
            uVar12 = uVar12 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_01a472ec(plVar14,*unaff_x22,1);
LAB_02f8c1f8:
        plVar15 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
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
        uVar23 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeeb0,&stack0x00000058);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(uVar23,uVar23);
        }
        FUN_02793798(lVar17,uVar23,unaff_w26,0);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02793798(lVar20,plVar15,unaff_w26,0);
        unaff_w26 = unaff_w26 + 1;
      } while( true );
    }
    goto LAB_02f8b8e4;
  }
                    /* catch() { ... } // from try @ 02f8b774 with catch @ 02f8bb9c */
  lVar20 = *unaff_x25;
                    /* catch() { ... } // from try @ 02f8bb1c with catch @ 02f8bba0 */
                    /* catch() { ... } // from try @ 02f8b758 with catch @ 02f8bba4 */
  uVar12 = (ulong)*(ushort *)(lVar20 + 0x12e);
                    /* catch() { ... } // from try @ 02f8b744 with catch @ 02f8bba8 */
  if (uVar12 != 0) {
                    /* catch() { ... } // from try @ 02f8b8ac with catch @ 02f8bbac */
                    /* catch() { ... } // from try @ 02f8bad0 with catch @ 02f8bbb0 */
    piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 02f8bacc with catch @ 02f8bbb4 */
                    /* catch() { ... } // from try @ 02f8b940 with catch @ 02f8bbb8 */
                    /* catch() { ... } // from try @ 02f8b8d0 with catch @ 02f8bbbc */
      if (*(long *)(piVar22 + -2) == *unaff_x22) {
        puVar13 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
        goto LAB_02f8bbec;
      }
                    /* catch() { ... } // from try @ 02f8bac8 with catch @ 02f8bbc0 */
      uVar12 = uVar12 - 1;
                    /* catch() { ... } // from try @ 02f8b910 with catch @ 02f8bbc4 */
      piVar22 = piVar22 + 4;
                    /* catch() { ... } // from try @ 02f8b8b0 with catch @ 02f8bbc8 */
    } while (uVar12 != 0);
  }
                    /* catch() { ... } // from try @ 02f8bac4 with catch @ 02f8bbcc */
                    /* catch() { ... } // from try @ 02f8b87c with catch @ 02f8bbd0 */
                    /* catch() { ... } // from try @ 02f8b868 with catch @ 02f8bbd4 */
  puVar13 = (undefined8 *)FUN_01a472ec(unaff_x25,*unaff_x22,1);
LAB_02f8bbec:
                    /* try { // try from 02f8bbec to 0308bc57 has its CatchHandler @ 02f8bc88 */
  plVar14 = (long *)(*(code *)*puVar13)(unaff_x25,puVar13[1]);
  if (plVar14 != (long *)0x0) {
    bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
    if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03d256f0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar14);
    }
  }
  unaff_w26 = FUN_02f8ccbc(plVar14,plVar14);
  unaff_w28 = unaff_w26 + unaff_w28;
  *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) - unaff_w26;
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar15 = (long *)plVar14[3];
                    /* try { // try from 02f8bc58 to 0308bc77 has its CatchHandler @ 02f8b68c */
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar6 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0));
  plVar15 = (long *)plVar14[3];
  unaff_w29 = iVar6 + unaff_w29;
                    /* try { // try from 02f8bc78 to 0308bc87 has its CatchHandler @ 02f8bc88 */
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* catch() { ... } // from try @ 02f8bbec with catch @ 02f8bc88
                       catch() { ... } // from try @ 02f8bc78 with catch @ 02f8bc88 */
  iVar6 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0));
                    /* try { // try from 02f8bc8c to 0308bc8f has its CatchHandler @ 02f8bc98 */
                    /* try { // try from 02f8bc90 to 0308bc9b has its CatchHandler @ 02f8b68c */
  if (0 < iVar6) {
                    /* catch() { ... } // from try @ 02f8bc8c with catch @ 02f8bc98 */
    if ((DAT_0412ad52 & 1) == 0) {
      FUN_01ab69ac(PTR_DAT_03cbeeb0);
      DAT_0412ad52 = 1;
    }
    unaff_x27 = plVar14[4];
    if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_0274871c(unaff_x27,lVar19,0);
    unaff_x23 = plVar14;
    if ((uVar12 & 1) == 0) {
      unaff_x23 = plVar11;
      unaff_x27 = lVar19;
    }
  }
  goto LAB_02f8bb3c;
LAB_02f8c2b8:
  plVar14 = (long *)thunk_FUN_01a89d6c(plVar14,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar14 != (long *)0x0) {
    lVar21 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar12 != 0) {
      piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar13 = (undefined8 *)(lVar21 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_02f8c334;
        }
        uVar12 = uVar12 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8c334:
    (*(code *)*puVar13)(plVar14,puVar13[1]);
  }
  if (cStack0000000000000068 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar16,0);
  }
  FUN_02796604(lVar17,lVar20,0);
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar7 = 0;
  do {
    iVar9 = FUN_02787790(lVar20,0);
    if (iVar9 <= iVar7) break;
    plVar14 = (long *)FUN_027877f0(lVar20,iVar7,0);
    if (plVar14 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03d256f0)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar14);
      }
    }
    cStack0000000000000068 = '\0';
    FUN_027e0bd8(plVar14,&stack0x00000068,0);
    if (unaff_w29 - iVar6 != 0 && iVar6 <= unaff_w29) {
      iVar1 = (unaff_w29 - iVar6) + unaff_w28;
      iVar9 = unaff_w28;
      iVar4 = unaff_w29;
      do {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar15 = (long *)plVar14[3];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar10 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0));
        unaff_w29 = iVar4;
        unaff_w28 = iVar9;
        if (iVar10 < 1) break;
        plVar15 = (long *)plVar14[3];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*plVar15 + 0x3d8))(plVar15,0,*(undefined8 *)(*plVar15 + 0x3e0));
        iVar4 = iVar4 + -1;
        iVar9 = iVar9 + 1;
        *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) + -1;
        unaff_w29 = iVar6;
        unaff_w28 = iVar1;
      } while (iVar6 < iVar4);
    }
    if (cStack0000000000000068 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(plVar14,0);
    }
    iVar7 = iVar7 + 1;
  } while (iVar6 < unaff_w29);
  if ((iVar6 < unaff_w29) && (in_stack_00000038 != 0)) {
    cStack0000000000000068 = '\0';
    iVar6 = 0x16;
  }
  else {
    unaff_w26 = 0;
LAB_02f8b8e4:
    if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar20 = *in_stack_00000050;
    uVar12 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar12 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *unaff_x22) {
          puVar13 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_02f8b938;
        }
        uVar12 = uVar12 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)FUN_01a472ec(in_stack_00000050,*unaff_x22,0);
LAB_02f8b938:
    uVar12 = (*(code *)*puVar13)(in_stack_00000050,puVar13[1]);
    if ((uVar12 & 1) != 0) {
      lVar19 = *in_stack_00000050;
      uVar12 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar12 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *unaff_x22) {
            puVar13 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
            goto LAB_02f8b99c;
          }
          uVar12 = uVar12 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_01a472ec(in_stack_00000050,*unaff_x22,1);
LAB_02f8b99c:
      plVar11 = (long *)(*(code *)*puVar13)(in_stack_00000050,puVar13[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)PTR_DAT_03cdb5d0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0();
      }
      lVar19 = thunk_FUN_01a89fbc();
      if (in_stack_00000038 == 0) {
        in_stack_00000028 = *(long **)(lVar19 + 8);
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
        plVar11 = *(long **)(unaff_x19 + 0x10);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        in_stack_00000028 =
             (long *)(**(code **)(*plVar11 + 0x308))
                               (plVar11,in_stack_00000038,*(undefined8 *)(*plVar11 + 0x310));
        if (in_stack_00000028 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f8 + 0x130);
          if ((*(byte *)(*in_stack_00000028 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*in_stack_00000028 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)PTR_DAT_03d256f8)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(in_stack_00000028);
          }
LAB_02f8ba70:
          plVar11 = (long *)in_stack_00000028[2];
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          in_stack_00000030 =
               (**(code **)(*plVar11 + 0x308))(plVar11,*(undefined8 *)(*plVar11 + 0x310));
          cStack0000000000000068 = '\0';
          FUN_027e0bd8(in_stack_00000030,&stack0x00000068,0);
          plVar11 = (long *)in_stack_00000028[2];
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          plVar11 = (long *)(**(code **)(*plVar11 + 0x2c8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar19 = *plVar11;
          uVar12 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar12 != 0) {
            piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_03cc6e60) {
                puVar13 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_02f8bb1c;
              }
              uVar12 = uVar12 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar12 != 0);
          }
          puVar13 = (undefined8 *)FUN_01a472ec(plVar11,*(long *)PTR_DAT_03cc6e60,0);
LAB_02f8bb1c:
          unaff_x25 = (long *)(*(code *)*puVar13)(plVar11,puVar13[1]);
          unaff_w29 = 0;
LAB_02f8bb3c:
          if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          param_1 = *unaff_x25;
          uVar12 = (ulong)*(ushort *)(param_1 + 0x12e);
          if (uVar12 != 0) {
            in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
            do {
              if (*(long *)(in_x10 + -2) == *unaff_x22) goto code_r0x02f8bb80;
              uVar12 = uVar12 - 1;
              in_x10 = in_x10 + 4;
            } while (uVar12 != 0);
          }
          puVar13 = (undefined8 *)FUN_01a472ec(unaff_x25,*unaff_x22,0);
          plVar11 = unaff_x23;
          lVar19 = unaff_x27;
          goto LAB_02f8bb8c;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar6 = 0x17;
  }
  plVar14 = (long *)thunk_FUN_01a89d6c(in_stack_00000050,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar14 == (long *)0x0) goto LAB_02f8c7dc;
  lVar20 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar12 == 0) goto LAB_02f8c7b4;
  piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
  goto LAB_02f8c79c;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar22 = piVar22 + 4;
    if (uVar12 == 0) break;
LAB_02f8c79c:
    if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar13 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_02f8c7d0;
    }
  }
LAB_02f8c7b4:
  puVar13 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8c7d0:
  (*(code *)*puVar13)(plVar14,puVar13[1]);
LAB_02f8c7dc:
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  uVar18 = (uint)bStack000000000000006c;
  if (bStack000000000000006c != 0) {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000008,0);
    uVar18 = extraout_w8;
  }
  puVar5 = PTR_DAT_03cbeeb0;
  if (iVar6 != 0x17) {
    if (iVar6 == 0x16) {
      uVar18 = (uint)(cStack0000000000000068 != '\0');
      goto LAB_02f8c724;
    }
    if (iVar6 != 0) goto LAB_02f8c724;
  }
  uVar18 = 1;
  if ((in_stack_00000038 == 0) && (unaff_w28 == 0)) {
    lVar20 = *(long *)PTR_DAT_03cbeeb0;
    if (*(int *)(lVar20 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar20 = *(long *)puVar5;
    }
    uVar12 = FUN_0274864c(lVar19,*(undefined8 *)(*(long *)(lVar20 + 0xb8) + 0x18),0);
    if ((uVar12 & 1) == 0) {
      bStack000000000000006c = '\0';
      FUN_027e0bd8(plVar11,(long)&stack0x00000068 + 4,0);
      if (*(int *)(unaff_x19 + 0x1c) <= *(int *)(unaff_x19 + 0x24)) {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        do {
          plVar14 = (long *)plVar11[3];
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          iVar6 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0));
          if (iVar6 < 1) break;
          plVar14 = (long *)plVar11[3];
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          (**(code **)(*plVar14 + 0x3d8))(plVar14,0,*(undefined8 *)(*plVar14 + 0x3e0));
          iVar6 = *(int *)(unaff_x19 + 0x24) + -1;
          *(int *)(unaff_x19 + 0x24) = iVar6;
        } while (*(int *)(unaff_x19 + 0x1c) <= iVar6);
      }
      if (bStack000000000000006c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(plVar11,0);
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


