/*
FUNCTION_NAME: FUN_02f8b74c
ENTRY_POINT: 02f8b74c
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


/* WARNING: Removing unreachable block (ram,0x02f8ca10) */
/* WARNING: Removing unreachable block (ram,0x02f8ca2c) */
/* WARNING: Removing unreachable block (ram,0x02f8bd98) */
/* WARNING: Removing unreachable block (ram,0x02f8ca00) */
/* WARNING: Removing unreachable block (ram,0x02f8be70) */
/* WARNING: Removing unreachable block (ram,0x02f8bdc0) */
/* WARNING: Removing unreachable block (ram,0x02f8c97c) */
/* WARNING: Removing unreachable block (ram,0x02f8c354) */
/* WARNING: Removing unreachable block (ram,0x02f8c5a4) */
/* WARNING: Removing unreachable block (ram,0x02f8c388) */
/* WARNING: Removing unreachable block (ram,0x02f8ca1c) */
/* WARNING: Removing unreachable block (ram,0x02f8c4d4) */
/* WARNING: Removing unreachable block (ram,0x02f8c758) */
/* WARNING: Removing unreachable block (ram,0x02f8c9c8) */

uint FUN_02f8b74c(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  uint extraout_w8;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  undefined8 uVar26;
  int iVar27;
  float fVar28;
  long local_90;
  long *local_88;
  long local_78;
  char local_68 [4];
  byte local_64 [4];
  
                    /* try { // try from 02f8b758 to 0308b75f has its CatchHandler @ 02f8bba4 */
                    /* try { // try from 02f8b774 to 0308b783 has its CatchHandler @ 02f8bb9c */
  if ((DAT_0412ad58 & 1) == 0) {
                    /* try { // try from 02f8b784 to 0308b7ff has its CatchHandler @ 02f8b68c */
    FUN_01ab69ac(PTR_DAT_03d25720);
    FUN_01ab69ac(PTR_DAT_03d256f0);
    FUN_01ab69ac(PTR_DAT_03cc5228);
    FUN_01ab69ac(PTR_DAT_03cbeeb0);
    FUN_01ab69ac(PTR_DAT_03cdb5d0);
    FUN_01ab69ac(PTR_DAT_03cf21f8);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cc6e60);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03cbdee0);
                    /* try { // try from 02f8b800 to 0308b803 has its CatchHandler @ 02f8bb94 */
    FUN_01ab69ac(PTR_DAT_03d256f8);
    FUN_01ab69ac(PTR_DAT_03cbebc0);
                    /* try { // try from 02f8b818 to 0308b81b has its CatchHandler @ 02f8bb8c */
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    DAT_0412ad58 = 1;
  }
  puVar5 = PTR_DAT_03cbeeb0;
  local_68[0] = '\0';
  iVar11 = *(int *)(param_1 + 0x1c);
                    /* try { // try from 02f8b834 to 0308b837 has its CatchHandler @ 02f8bb84 */
  if ((iVar11 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    lVar12 = *(long *)PTR_DAT_03cbeeb0;
    if (*(int *)(lVar12 + 0xe0) == 0) {
                    /* try { // try from 02f8b84c to 0308b84f has its CatchHandler @ 02f8bb7c */
      thunk_FUN_01a58e78();
      lVar12 = *(long *)puVar5;
      iVar11 = *(int *)(param_1 + 0x1c);
    }
    fVar28 = 1.0;
    local_90 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
                    /* try { // try from 02f8b868 to 0308b873 has its CatchHandler @ 02f8bbd4 */
    if (iVar11 < *(int *)(param_1 + 0x24)) {
      fVar28 = (float)iVar11 / (float)*(int *)(param_1 + 0x24);
    }
                    /* try { // try from 02f8b87c to 0308b88b has its CatchHandler @ 02f8bbd0 */
    plVar13 = *(long **)(param_1 + 0x10);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar14 = (**(code **)(*plVar13 + 0x3b8))(plVar13,*(undefined8 *)(*plVar13 + 0x3c0));
    local_64[0] = 0;
    FUN_027e0bd8(uVar14,local_64,0);
    plVar13 = *(long **)(param_1 + 0x10);
                    /* try { // try from 02f8b8ac to 0308b8af has its CatchHandler @ 02f8bbac */
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* try { // try from 02f8b8b0 to 0308b8bb has its CatchHandler @ 02f8bbc8 */
    plVar13 = (long *)(**(code **)(*plVar13 + 0x328))(plVar13,*(undefined8 *)(*plVar13 + 0x330));
    puVar5 = PTR_DAT_03cbed20;
    local_88 = (long *)0x0;
                    /* try { // try from 02f8b8d0 to 0308b8df has its CatchHandler @ 02f8bbbc */
    iVar11 = 0;
LAB_02f8b8e0:
    iVar6 = 0;
    do {
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar12 = *plVar13;
      uVar24 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar24 != 0) {
        piVar25 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == *(long *)puVar5) {
            puVar15 = (undefined8 *)(lVar12 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_02f8b938;
          }
                    /* try { // try from 02f8b910 to 0308b91b has its CatchHandler @ 02f8bbc4 */
          uVar24 = uVar24 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar24 != 0);
      }
      puVar15 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)puVar5,0);
LAB_02f8b938:
                    /* try { // try from 02f8b940 to 0308b94b has its CatchHandler @ 02f8bbb8 */
      uVar24 = (*(code *)*puVar15)(plVar13,puVar15[1]);
      if ((uVar24 & 1) == 0) {
        iVar6 = 0x17;
        goto LAB_02f8c75c;
      }
      lVar12 = *plVar13;
      uVar24 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar24 != 0) {
        piVar25 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == *(long *)puVar5) {
            puVar15 = (undefined8 *)(lVar12 + (long)(*piVar25 + 1) * 0x10 + 0x138);
            goto LAB_02f8b99c;
          }
          uVar24 = uVar24 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar24 != 0);
      }
      puVar15 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)puVar5,1);
LAB_02f8b99c:
      plVar16 = (long *)(*(code *)*puVar15)(plVar13,puVar15[1]);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(*plVar16 + 0x40) != *(long *)(*(long *)PTR_DAT_03cdb5d0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0();
      }
      lVar12 = thunk_FUN_01a89fbc();
      if (param_2 == 0) {
        plVar16 = *(long **)(lVar12 + 8);
        if (plVar16 == (long *)0x0) goto LAB_02f8c970;
        bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f8 + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)PTR_DAT_03d256f8)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar16);
        }
      }
      else {
        plVar16 = *(long **)(param_1 + 0x10);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar16 = (long *)(**(code **)(*plVar16 + 0x308))
                                    (plVar16,param_2,*(undefined8 *)(*plVar16 + 0x310));
        if (plVar16 == (long *)0x0) {
LAB_02f8c970:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f8 + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)PTR_DAT_03d256f8)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar16);
        }
      }
      plVar17 = (long *)plVar16[2];
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar18 = (**(code **)(*plVar17 + 0x308))(plVar17,*(undefined8 *)(*plVar17 + 0x310));
      local_68[0] = '\0';
      FUN_027e0bd8(uVar18,local_68,0);
      plVar17 = (long *)plVar16[2];
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar17 = (long *)(**(code **)(*plVar17 + 0x2c8))(plVar17,*(undefined8 *)(*plVar17 + 0x2d0));
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar12 = *plVar17;
      uVar24 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar24 != 0) {
        piVar25 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_03cc6e60) {
            puVar15 = (undefined8 *)(lVar12 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_02f8bb1c;
          }
          uVar24 = uVar24 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar24 != 0);
      }
      puVar15 = (undefined8 *)FUN_01a472ec(plVar17,*(long *)PTR_DAT_03cc6e60,0);
LAB_02f8bb1c:
      plVar19 = (long *)(*(code *)*puVar15)(plVar17,puVar15[1]);
      iVar27 = 0;
      plVar17 = local_88;
      lVar12 = local_90;
LAB_02f8bb3c:
      local_90 = lVar12;
      local_88 = plVar17;
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar12 = *plVar19;
      uVar24 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar24 != 0) {
        piVar25 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == *(long *)puVar5) {
            puVar15 = (undefined8 *)(lVar12 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_02f8bb8c;
          }
          uVar24 = uVar24 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar24 != 0);
      }
      puVar15 = (undefined8 *)FUN_01a472ec(plVar19,*(long *)puVar5,0);
LAB_02f8bb8c:
      uVar24 = (*(code *)*puVar15)(plVar19,puVar15[1]);
      if ((uVar24 & 1) != 0) {
        lVar12 = *plVar19;
        uVar24 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == *(long *)puVar5) {
              puVar15 = (undefined8 *)(lVar12 + (long)(*piVar25 + 1) * 0x10 + 0x138);
              goto LAB_02f8bbec;
            }
            uVar24 = uVar24 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar24 != 0);
        }
        puVar15 = (undefined8 *)FUN_01a472ec(plVar19,*(long *)puVar5,1);
LAB_02f8bbec:
        plVar20 = (long *)(*(code *)*puVar15)(plVar19,puVar15[1]);
        if (plVar20 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
          if ((*(byte *)(*plVar20 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)PTR_DAT_03d256f0)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(plVar20);
          }
        }
        iVar6 = FUN_02f8ccbc(plVar20,plVar20);
        iVar11 = iVar6 + iVar11;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar6;
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar17 = (long *)plVar20[3];
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar7 = (**(code **)(*plVar17 + 0x298))(plVar17,*(undefined8 *)(*plVar17 + 0x2a0));
        plVar17 = (long *)plVar20[3];
        iVar27 = iVar7 + iVar27;
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar7 = (**(code **)(*plVar17 + 0x298))(plVar17,*(undefined8 *)(*plVar17 + 0x2a0));
        plVar17 = local_88;
        lVar12 = local_90;
        if (0 < iVar7) {
          if ((DAT_0412ad52 & 1) == 0) {
            FUN_01ab69ac(PTR_DAT_03cbeeb0);
            DAT_0412ad52 = 1;
          }
          lVar12 = plVar20[4];
          if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar24 = FUN_0274871c(lVar12,local_90,0);
          plVar17 = plVar20;
          if ((uVar24 & 1) == 0) {
            plVar17 = local_88;
            lVar12 = local_90;
          }
        }
        goto LAB_02f8bb3c;
      }
      plVar17 = (long *)thunk_FUN_01a89d6c(plVar19,*(undefined8 *)PTR_DAT_03cbed08);
      if (plVar17 != (long *)0x0) {
        lVar12 = *plVar17;
        uVar24 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_03cbed08) {
              puVar15 = (undefined8 *)(lVar12 + (long)*piVar25 * 0x10 + 0x138);
              goto LAB_02f8bd80;
            }
            uVar24 = uVar24 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar24 != 0);
        }
        puVar15 = (undefined8 *)FUN_01a472ec(plVar17,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8bd80:
        (*(code *)*puVar15)(plVar17,puVar15[1]);
      }
      if (local_68[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar18,0);
      }
      uVar9 = *(undefined4 *)(param_1 + 0x1c);
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar8 = FUN_0276c214(uVar2,uVar9,0);
      iVar7 = -0x80000000;
      if (fVar28 * (float)iVar27 != INFINITY) {
        iVar7 = (int)(fVar28 * (float)iVar27);
      }
      iVar7 = FUN_0276c214(iVar7,iVar8 + -1,0);
    } while (iVar27 <= iVar7);
    plVar17 = (long *)plVar16[2];
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar18 = (**(code **)(*plVar17 + 0x308))(plVar17,*(undefined8 *)(*plVar17 + 0x310));
    local_68[0] = '\0';
    FUN_027e0bd8(uVar18,local_68,0);
    uVar26 = *(undefined8 *)PTR_DAT_03d25720;
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar26 = FUN_0277b678(uVar26,0);
    plVar17 = (long *)plVar16[2];
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar9 = (**(code **)(*plVar17 + 0x2a8))(plVar17,*(undefined8 *)(*plVar17 + 0x2b0));
    lVar12 = FUN_02796df8(uVar26,uVar9,0);
    uVar26 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5228,0);
    plVar17 = (long *)plVar16[2];
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar9 = (**(code **)(*plVar17 + 0x2a8))(plVar17,*(undefined8 *)(*plVar17 + 0x2b0));
    lVar21 = FUN_02796df8(uVar26,uVar9,0);
    plVar16 = (long *)plVar16[2];
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar16 = (long *)(**(code **)(*plVar16 + 0x2c8))(plVar16,*(undefined8 *)(*plVar16 + 0x2d0));
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar23 = *plVar16;
    uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar24 != 0) {
      piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_03cc6e60) {
          puVar15 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_02f8c138;
        }
        uVar24 = uVar24 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar24 != 0);
    }
    puVar15 = (undefined8 *)FUN_01a472ec(plVar16,*(long *)PTR_DAT_03cc6e60,0);
LAB_02f8c138:
    plVar16 = (long *)(*(code *)*puVar15)(plVar16,puVar15[1]);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar23 = *plVar16;
      uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar24 != 0) {
        piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == *(long *)puVar5) {
            puVar15 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
            goto LAB_02f8c198;
          }
          uVar24 = uVar24 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar24 != 0);
      }
      puVar15 = (undefined8 *)FUN_01a472ec(plVar16,*(long *)puVar5,0);
LAB_02f8c198:
      uVar24 = (*(code *)*puVar15)(plVar16,puVar15[1]);
      if ((uVar24 & 1) == 0) goto LAB_02f8c2b8;
      lVar23 = *plVar16;
      uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar24 != 0) {
        piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == *(long *)puVar5) {
            puVar15 = (undefined8 *)(lVar23 + (long)(*piVar25 + 1) * 0x10 + 0x138);
            goto LAB_02f8c1f8;
          }
          uVar24 = uVar24 - 1;
          piVar25 = piVar25 + 4;
        } while (uVar24 != 0);
      }
      puVar15 = (undefined8 *)FUN_01a472ec(plVar16,*(long *)puVar5,1);
LAB_02f8c1f8:
      plVar17 = (long *)(*(code *)*puVar15)(plVar16,puVar15[1]);
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
      if ((*(byte *)(*plVar17 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03d256f0)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar17);
      }
      if ((DAT_0412ad52 & 1) == 0) {
        FUN_01ab69ac(PTR_DAT_03cbeeb0);
        DAT_0412ad52 = 1;
      }
      local_78 = plVar17[4];
      uVar26 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeeb0,&local_78);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c(uVar26,uVar26);
      }
      FUN_02793798(lVar21,uVar26,iVar6,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02793798(lVar12,plVar17,iVar6,0);
      iVar6 = iVar6 + 1;
    } while( true );
  }
  uVar14 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
  FUN_02733e6c(uVar14,0);
  *(undefined8 *)(param_1 + 0x10) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x10),uVar14);
  uVar22 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  goto LAB_02f8c724;
LAB_02f8c2b8:
  plVar16 = (long *)thunk_FUN_01a89d6c(plVar16,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar16 != (long *)0x0) {
    lVar23 = *plVar16;
    uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar24 != 0) {
      piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar15 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_02f8c334;
        }
        uVar24 = uVar24 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar24 != 0);
    }
    puVar15 = (undefined8 *)FUN_01a472ec(plVar16,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8c334:
    (*(code *)*puVar15)(plVar16,puVar15[1]);
  }
  if (local_68[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar18,0);
  }
  FUN_02796604(lVar21,lVar12,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar6 = 0;
  do {
    iVar8 = FUN_02787790(lVar12,0);
    if (iVar8 <= iVar6) break;
    plVar16 = (long *)FUN_027877f0(lVar12,iVar6,0);
    if (plVar16 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
      if ((*(byte *)(*plVar16 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03d256f0)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar16);
      }
    }
    local_68[0] = '\0';
    FUN_027e0bd8(plVar16,local_68,0);
    if (iVar27 - iVar7 != 0 && iVar7 <= iVar27) {
      iVar1 = (iVar27 - iVar7) + iVar11;
      iVar8 = iVar11;
      iVar4 = iVar27;
      do {
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar17 = (long *)plVar16[3];
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar10 = (**(code **)(*plVar17 + 0x298))(plVar17,*(undefined8 *)(*plVar17 + 0x2a0));
        iVar11 = iVar8;
        iVar27 = iVar4;
        if (iVar10 < 1) break;
        plVar17 = (long *)plVar16[3];
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*plVar17 + 0x3d8))(plVar17,0,*(undefined8 *)(*plVar17 + 0x3e0));
        iVar4 = iVar4 + -1;
        iVar8 = iVar8 + 1;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
        iVar11 = iVar1;
        iVar27 = iVar7;
      } while (iVar7 < iVar4);
    }
    if (local_68[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(plVar16,0);
    }
    iVar6 = iVar6 + 1;
  } while (iVar7 < iVar27);
  if ((iVar27 <= iVar7) || (param_2 == 0)) goto LAB_02f8b8e0;
  local_68[0] = '\0';
  iVar6 = 0x16;
LAB_02f8c75c:
  plVar13 = (long *)thunk_FUN_01a89d6c(plVar13,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar13 != (long *)0x0) {
    lVar12 = *plVar13;
    uVar24 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar24 != 0) {
      piVar25 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar15 = (undefined8 *)(lVar12 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_02f8c7d0;
        }
        uVar24 = uVar24 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar24 != 0);
    }
    puVar15 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8c7d0:
    (*(code *)*puVar15)(plVar13,puVar15[1]);
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  uVar22 = (uint)local_64[0];
  if (local_64[0] != 0) {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar14,0);
    uVar22 = extraout_w8;
  }
  puVar5 = PTR_DAT_03cbeeb0;
  if (iVar6 != 0x17) {
    if (iVar6 == 0x16) {
      uVar22 = (uint)(local_68[0] != '\0');
      goto LAB_02f8c724;
    }
    if (iVar6 != 0) goto LAB_02f8c724;
  }
  uVar22 = 1;
  if ((param_2 == 0) && (iVar11 == 0)) {
    lVar12 = *(long *)PTR_DAT_03cbeeb0;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar12 = *(long *)puVar5;
    }
    uVar24 = FUN_0274864c(local_90,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),0);
    if ((uVar24 & 1) == 0) {
      local_64[0] = 0;
      FUN_027e0bd8(local_88,local_64,0);
      if (*(int *)(param_1 + 0x1c) <= *(int *)(param_1 + 0x24)) {
        if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        do {
          plVar13 = (long *)local_88[3];
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          iVar11 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
          if (iVar11 < 1) break;
          plVar13 = (long *)local_88[3];
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          (**(code **)(*plVar13 + 0x3d8))(plVar13,0,*(undefined8 *)(*plVar13 + 0x3e0));
          iVar11 = *(int *)(param_1 + 0x24) + -1;
          *(int *)(param_1 + 0x24) = iVar11;
        } while (*(int *)(param_1 + 0x1c) <= iVar11);
      }
      if (local_64[0] != 0) {
        OVRManager_<>c__<InitOVRManager>b__424_0(local_88,0);
      }
      uVar22 = 1;
    }
    else {
      uVar22 = 0;
    }
  }
LAB_02f8c724:
  return uVar22 & 1;
}


