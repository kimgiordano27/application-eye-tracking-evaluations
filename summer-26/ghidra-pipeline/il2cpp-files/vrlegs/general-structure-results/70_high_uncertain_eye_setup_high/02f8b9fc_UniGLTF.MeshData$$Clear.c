/*
FUNCTION_NAME: UniGLTF.MeshData$$Clear
ENTRY_POINT: 02f8b9fc
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

uint UniGLTF_MeshData__Clear(void)

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
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  uint extraout_w8;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long unaff_x19;
  undefined8 uVar23;
  long *unaff_x21;
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
  
code_r0x02f8b9fc:
  bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f8 + 0x130);
                    /* try { // try from 02f8ba24 to 0308ba2f has its CatchHandler @ 02f8bb58 */
  if ((*(byte *)(*unaff_x21 + 0x130) < bVar3) ||
     (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03d256f8))
  {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0(unaff_x21);
  }
LAB_02f8ba70:
  plVar12 = (long *)unaff_x21[2];
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* try { // try from 02f8ba80 to 0308ba87 has its CatchHandler @ 02f8bb4c */
  uVar13 = (**(code **)(*plVar12 + 0x308))(plVar12,*(undefined8 *)(*plVar12 + 0x310));
  cStack0000000000000068 = '\0';
                    /* try { // try from 02f8ba98 to 0308ba9b has its CatchHandler @ 02f8bb54 */
  FUN_027e0bd8(uVar13,&stack0x00000068,0);
  plVar12 = (long *)unaff_x21[2];
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar12 = (long *)(**(code **)(*plVar12 + 0x2c8))(plVar12,*(undefined8 *)(*plVar12 + 0x2d0));
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar19 = *plVar12;
                    /* try { // try from 02f8bac4 to 0308bac7 has its CatchHandler @ 02f8bbcc */
                    /* try { // try from 02f8bac8 to 0308bacb has its CatchHandler @ 02f8bbc0 */
  uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
                    /* try { // try from 02f8bacc to 0308bacf has its CatchHandler @ 02f8bbb4 */
                    /* try { // try from 02f8bad0 to 0308bad3 has its CatchHandler @ 02f8bbb0 */
                    /* try { // try from 02f8bad4 to 0308bb1b has its CatchHandler @ 02f8b68c */
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_03cc6e60) {
        puVar14 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_02f8bb1c;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  puVar14 = (undefined8 *)FUN_01a472ec(plVar12,*(long *)PTR_DAT_03cc6e60,0);
LAB_02f8bb1c:
                    /* try { // try from 02f8bb1c to 0308bb1f has its CatchHandler @ 02f8bba0 */
                    /* try { // try from 02f8bb20 to 0308bb23 has its CatchHandler @ 02f8bb98 */
                    /* try { // try from 02f8bb24 to 0308bb27 has its CatchHandler @ 02f8bb90 */
  plVar15 = (long *)(*(code *)*puVar14)(plVar12,puVar14[1]);
                    /* try { // try from 02f8bb28 to 0308bb2b has its CatchHandler @ 02f8bb88 */
                    /* try { // try from 02f8bb2c to 0308bb2f has its CatchHandler @ 02f8bb80 */
                    /* try { // try from 02f8bb30 to 0308bb33 has its CatchHandler @ 02f8bb78 */
  iVar11 = 0;
                    /* try { // try from 02f8bb34 to 0308bb37 has its CatchHandler @ 02f8bb60 */
                    /* try { // try from 02f8bb38 to 0308bb3b has its CatchHandler @ 02f8bb5c */
  plVar12 = in_stack_00000048;
  lVar19 = in_stack_00000040;
LAB_02f8bb3c:
  in_stack_00000040 = lVar19;
  in_stack_00000048 = plVar12;
                    /* try { // try from 02f8bb3c to 0308bb3f has its CatchHandler @ 02f8bb50 */
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* try { // try from 02f8bb40 to 0308bb43 has its CatchHandler @ 02f8bb70 */
  lVar19 = *plVar15;
                    /* catch() { ... } // from try @ 02f8ba60 with catch @ 02f8bb44
                       try { // try from 02f8bb44 to 0308bbeb has its CatchHandler @ 02f8b68c */
                    /* catch() { ... } // from try @ 02f8b99c with catch @ 02f8bb48 */
  uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
                    /* catch() { ... } // from try @ 02f8ba80 with catch @ 02f8bb4c */
  if (uVar21 != 0) {
                    /* catch() { ... } // from try @ 02f8bb3c with catch @ 02f8bb50 */
                    /* catch() { ... } // from try @ 02f8ba98 with catch @ 02f8bb54 */
    piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 02f8ba24 with catch @ 02f8bb58 */
                    /* catch() { ... } // from try @ 02f8bb38 with catch @ 02f8bb5c */
                    /* catch() { ... } // from try @ 02f8bb34 with catch @ 02f8bb60 */
      if (*(long *)(piVar22 + -2) == *unaff_x22) {
        puVar14 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_02f8bb8c;
      }
                    /* catch() { ... } // from try @ 02f8b9a0 with catch @ 02f8bb64 */
      uVar21 = uVar21 - 1;
                    /* catch() { ... } // from try @ 02f8b978 with catch @ 02f8bb68 */
      piVar22 = piVar22 + 4;
                    /* catch() { ... } // from try @ 02f8ba40 with catch @ 02f8bb6c */
    } while (uVar21 != 0);
  }
                    /* catch() { ... } // from try @ 02f8b9c0 with catch @ 02f8bb70
                       catch() { ... } // from try @ 02f8bb40 with catch @ 02f8bb70 */
                    /* catch() { ... } // from try @ 02f8b964 with catch @ 02f8bb74 */
                    /* catch() { ... } // from try @ 02f8bb30 with catch @ 02f8bb78 */
  puVar14 = (undefined8 *)FUN_01a472ec(plVar15,*unaff_x22,0);
                    /* catch() { ... } // from try @ 02f8b84c with catch @ 02f8bb7c */
LAB_02f8bb8c:
  uVar21 = (*(code *)*puVar14)(plVar15,puVar14[1]);
  if ((uVar21 & 1) != 0) {
    lVar19 = *plVar15;
    uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *unaff_x22) {
          puVar14 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
          goto LAB_02f8bbec;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar14 = (undefined8 *)FUN_01a472ec(plVar15,*unaff_x22,1);
LAB_02f8bbec:
    plVar16 = (long *)(*(code *)*puVar14)(plVar15,puVar14[1]);
    if (plVar16 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
      if ((*(byte *)(*plVar16 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03d256f0)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar16);
      }
    }
    unaff_w23 = FUN_02f8ccbc(plVar16,plVar16);
    unaff_w28 = unaff_w23 + unaff_w28;
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) - unaff_w23;
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar12 = (long *)plVar16[3];
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar6 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
    plVar12 = (long *)plVar16[3];
    iVar11 = iVar6 + iVar11;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar6 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
    plVar12 = in_stack_00000048;
    lVar19 = in_stack_00000040;
    if (0 < iVar6) {
      if ((DAT_0412ad52 & 1) == 0) {
        FUN_01ab69ac(PTR_DAT_03cbeeb0);
        DAT_0412ad52 = 1;
      }
      lVar19 = plVar16[4];
      if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = FUN_0274871c(lVar19,in_stack_00000040,0);
      plVar12 = plVar16;
      if ((uVar21 & 1) == 0) {
        plVar12 = in_stack_00000048;
        lVar19 = in_stack_00000040;
      }
    }
    goto LAB_02f8bb3c;
  }
  plVar12 = (long *)thunk_FUN_01a89d6c(plVar15,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar12 != (long *)0x0) {
    lVar19 = *plVar12;
    uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar14 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_02f8bd80;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar14 = (undefined8 *)FUN_01a472ec(plVar12,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8bd80:
    (*(code *)*puVar14)(plVar12,puVar14[1]);
  }
  if (cStack0000000000000068 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar13,0);
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
    plVar12 = (long *)unaff_x21[2];
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar13 = (**(code **)(*plVar12 + 0x308))(plVar12,*(undefined8 *)(*plVar12 + 0x310));
    cStack0000000000000068 = '\0';
    FUN_027e0bd8(uVar13,&stack0x00000068,0);
    uVar23 = *(undefined8 *)PTR_DAT_03d25720;
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar23 = FUN_0277b678(uVar23,0);
    plVar12 = (long *)unaff_x21[2];
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar8 = (**(code **)(*plVar12 + 0x2a8))(plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
    lVar19 = FUN_02796df8(uVar23,uVar8,0);
    uVar23 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5228,0);
    plVar12 = (long *)unaff_x21[2];
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar8 = (**(code **)(*plVar12 + 0x2a8))(plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
    lVar17 = FUN_02796df8(uVar23,uVar8,0);
    plVar12 = (long *)unaff_x21[2];
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar12 = (long *)(**(code **)(*plVar12 + 0x2c8))(plVar12,*(undefined8 *)(*plVar12 + 0x2d0));
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar20 = *plVar12;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_03cc6e60) {
          puVar14 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_02f8c138;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar14 = (undefined8 *)FUN_01a472ec(plVar12,*(long *)PTR_DAT_03cc6e60,0);
LAB_02f8c138:
    plVar12 = (long *)(*(code *)*puVar14)(plVar12,puVar14[1]);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar20 = *plVar12;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *unaff_x22) {
            puVar14 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_02f8c198;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar14 = (undefined8 *)FUN_01a472ec(plVar12,*unaff_x22,0);
LAB_02f8c198:
      uVar21 = (*(code *)*puVar14)(plVar12,puVar14[1]);
      if ((uVar21 & 1) == 0) goto LAB_02f8c2b8;
      lVar20 = *plVar12;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *unaff_x22) {
            puVar14 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
            goto LAB_02f8c1f8;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar14 = (undefined8 *)FUN_01a472ec(plVar12,*unaff_x22,1);
LAB_02f8c1f8:
      plVar15 = (long *)(*(code *)*puVar14)(plVar12,puVar14[1]);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
      if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03d256f0)
         ) {
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
      FUN_02793798(lVar17,uVar23,unaff_w23,0);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02793798(lVar19,plVar15,unaff_w23,0);
      unaff_w23 = unaff_w23 + 1;
    } while( true );
  }
  goto LAB_02f8b8e4;
LAB_02f8c2b8:
  plVar12 = (long *)thunk_FUN_01a89d6c(plVar12,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar12 != (long *)0x0) {
    lVar20 = *plVar12;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar14 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_02f8c334;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar14 = (undefined8 *)FUN_01a472ec(plVar12,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8c334:
    (*(code *)*puVar14)(plVar12,puVar14[1]);
  }
  if (cStack0000000000000068 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar13,0);
  }
  FUN_02796604(lVar17,lVar19,0);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar7 = 0;
  do {
    iVar9 = FUN_02787790(lVar19,0);
    if (iVar9 <= iVar7) break;
    plVar12 = (long *)FUN_027877f0(lVar19,iVar7,0);
    if (plVar12 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03d256f0)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar12);
      }
    }
    cStack0000000000000068 = '\0';
    FUN_027e0bd8(plVar12,&stack0x00000068,0);
    if (iVar11 - iVar6 != 0 && iVar6 <= iVar11) {
      iVar1 = (iVar11 - iVar6) + unaff_w28;
      iVar9 = unaff_w28;
      iVar4 = iVar11;
      do {
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar15 = (long *)plVar12[3];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar10 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0));
        iVar11 = iVar4;
        unaff_w28 = iVar9;
        if (iVar10 < 1) break;
        plVar15 = (long *)plVar12[3];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*plVar15 + 0x3d8))(plVar15,0,*(undefined8 *)(*plVar15 + 0x3e0));
        iVar4 = iVar4 + -1;
        iVar9 = iVar9 + 1;
        *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) + -1;
        iVar11 = iVar6;
        unaff_w28 = iVar1;
      } while (iVar6 < iVar4);
    }
    if (cStack0000000000000068 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(plVar12,0);
    }
    iVar7 = iVar7 + 1;
  } while (iVar6 < iVar11);
  if ((iVar6 < iVar11) && (in_stack_00000038 != 0)) {
    cStack0000000000000068 = '\0';
    iVar11 = 0x16;
  }
  else {
    unaff_w23 = 0;
LAB_02f8b8e4:
    if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar19 = *in_stack_00000050;
    uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *unaff_x22) {
          puVar14 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_02f8b938;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar14 = (undefined8 *)FUN_01a472ec(in_stack_00000050,*unaff_x22,0);
LAB_02f8b938:
    uVar21 = (*(code *)*puVar14)(in_stack_00000050,puVar14[1]);
    if ((uVar21 & 1) != 0) {
      lVar19 = *in_stack_00000050;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *unaff_x22) {
            puVar14 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
            goto LAB_02f8b99c;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar14 = (undefined8 *)FUN_01a472ec(in_stack_00000050,*unaff_x22,1);
LAB_02f8b99c:
      plVar12 = (long *)(*(code *)*puVar14)(in_stack_00000050,puVar14[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)PTR_DAT_03cdb5d0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0();
      }
      lVar19 = thunk_FUN_01a89fbc();
      if (in_stack_00000038 != 0) goto code_r0x02f8b9d8;
      unaff_x21 = *(long **)(lVar19 + 8);
      if (unaff_x21 == (long *)0x0) goto LAB_02f8c970;
      bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f8 + 0x130);
      if ((*(byte *)(*unaff_x21 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)PTR_DAT_03d256f8)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(unaff_x21);
      }
      goto LAB_02f8ba70;
    }
    iVar11 = 0x17;
  }
  plVar12 = (long *)thunk_FUN_01a89d6c(in_stack_00000050,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar12 == (long *)0x0) goto LAB_02f8c7dc;
  lVar19 = *plVar12;
  uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar21 == 0) goto LAB_02f8c7b4;
  piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
  goto LAB_02f8c79c;
code_r0x02f8b9d8:
  plVar12 = *(long **)(unaff_x19 + 0x10);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  unaff_x21 = (long *)(**(code **)(*plVar12 + 0x308))
                                (plVar12,in_stack_00000038,*(undefined8 *)(*plVar12 + 0x310));
  if (unaff_x21 == (long *)0x0) {
LAB_02f8c970:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  goto code_r0x02f8b9fc;
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar22 = piVar22 + 4;
    if (uVar21 == 0) break;
LAB_02f8c79c:
    if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar14 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_02f8c7d0;
    }
  }
LAB_02f8c7b4:
  puVar14 = (undefined8 *)FUN_01a472ec(plVar12,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8c7d0:
  (*(code *)*puVar14)(plVar12,puVar14[1]);
LAB_02f8c7dc:
  if (iVar11 == 0) {
    iVar11 = 0;
  }
  uVar18 = (uint)bStack000000000000006c;
  if (bStack000000000000006c != 0) {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000008,0);
    uVar18 = extraout_w8;
  }
  puVar5 = PTR_DAT_03cbeeb0;
  if (iVar11 != 0x17) {
    if (iVar11 == 0x16) {
      uVar18 = (uint)(cStack0000000000000068 != '\0');
      goto LAB_02f8c724;
    }
    if (iVar11 != 0) goto LAB_02f8c724;
  }
  uVar18 = 1;
  if ((in_stack_00000038 == 0) && (unaff_w28 == 0)) {
    lVar19 = *(long *)PTR_DAT_03cbeeb0;
    if (*(int *)(lVar19 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar19 = *(long *)puVar5;
    }
    uVar21 = FUN_0274864c(in_stack_00000040,*(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x18),0);
    if ((uVar21 & 1) == 0) {
      bStack000000000000006c = '\0';
      FUN_027e0bd8(in_stack_00000048,(long)&stack0x00000068 + 4,0);
      if (*(int *)(unaff_x19 + 0x1c) <= *(int *)(unaff_x19 + 0x24)) {
        if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        do {
          plVar12 = (long *)in_stack_00000048[3];
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          iVar11 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
          if (iVar11 < 1) break;
          plVar12 = (long *)in_stack_00000048[3];
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          (**(code **)(*plVar12 + 0x3d8))(plVar12,0,*(undefined8 *)(*plVar12 + 0x3e0));
          iVar11 = *(int *)(unaff_x19 + 0x24) + -1;
          *(int *)(unaff_x19 + 0x24) = iVar11;
        } while (*(int *)(unaff_x19 + 0x1c) <= iVar11);
      }
      if (bStack000000000000006c != '\0') {
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


