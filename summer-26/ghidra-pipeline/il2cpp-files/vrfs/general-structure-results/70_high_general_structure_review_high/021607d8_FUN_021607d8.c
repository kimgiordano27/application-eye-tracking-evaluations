/*
FUNCTION_NAME: FUN_021607d8
ENTRY_POINT: 021607d8
PROGRAM: vrfs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02162160) */
/* WARNING: Removing unreachable block (ram,0x02161c3c) */
/* WARNING: Removing unreachable block (ram,0x02161a8c) */
/* WARNING: Removing unreachable block (ram,0x02162180) */
/* WARNING: Removing unreachable block (ram,0x021621fc) */
/* WARNING: Removing unreachable block (ram,0x02161cb4) */

void FUN_021607d8(int *param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined1 auStack_3520 [744];
  long lStack_3238;
  long lStack_3230;
  undefined1 auStack_3228 [4424];
  undefined1 auStack_20e0 [736];
  undefined1 auStack_1e00 [736];
  undefined1 auStack_1b20 [736];
  undefined1 auStack_1840 [736];
  undefined1 auStack_1560 [736];
  undefined1 auStack_1280 [760];
  undefined4 uStack_f88;
  undefined1 auStack_f80 [16];
  undefined1 auStack_f70 [16];
  undefined8 uStack_f58;
  undefined4 uStack_f4c;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined1 auStack_ef0 [736];
  undefined8 uStack_c10;
  undefined1 auStack_c08 [744];
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined1 auStack_638 [736];
  undefined1 auStack_358 [736];
  long lStack_78;
  
  lVar12 = tpidr_el0;
  lStack_78 = *(long *)(lVar12 + 0x28);
  lStack_3230 = param_2;
  if ((bRam000000000722e3e0 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d925a8);
    thunk_FUN_0159f088(PTR_DAT_06da9340);
    thunk_FUN_0159f088(PTR_DAT_06dc6008);
    thunk_FUN_0159f088(PTR_DAT_06e0bd20);
    thunk_FUN_0159f088(PTR_DAT_06e5db68);
    thunk_FUN_0159f088(PTR_DAT_06e30dc8);
    thunk_FUN_0159f088(PTR_DAT_06dd1ea8);
    thunk_FUN_0159f088(PTR_DAT_06e35b40);
    thunk_FUN_0159f088(PTR_DAT_06dd31d8);
    thunk_FUN_0159f088(PTR_DAT_06de5418);
    thunk_FUN_0159f088(PTR_DAT_06d8b348);
    thunk_FUN_0159f088(PTR_DAT_06e636c0);
    thunk_FUN_0159f088(PTR_DAT_06e1b970);
    thunk_FUN_0159f088(PTR_DAT_06e2cd08);
    thunk_FUN_0159f088(PTR_DAT_06e5eef8);
    thunk_FUN_0159f088(PTR_DAT_06e5eb78);
    thunk_FUN_0159f088(PTR_DAT_06e49bc0);
    thunk_FUN_0159f088(PTR_DAT_06e65108);
    thunk_FUN_0159f088(PTR_DAT_06e00550);
    thunk_FUN_0159f088(PTR_DAT_06e2af70);
    thunk_FUN_0159f088(PTR_DAT_06e3f548);
    thunk_FUN_0159f088(PTR_DAT_06d9e7e0);
    thunk_FUN_0159f088(PTR_DAT_06da9ed8);
    thunk_FUN_0159f088(PTR_DAT_06de5458);
    thunk_FUN_0159f088(PTR_DAT_06e34ea0);
    thunk_FUN_0159f088(PTR_DAT_06ddd6b0);
    thunk_FUN_0159f088(PTR_DAT_06de71e8);
    thunk_FUN_0159f088(PTR_DAT_06e4e9c0);
    thunk_FUN_0159f088(PTR_DAT_06e66270);
    thunk_FUN_0159f088(PTR_DAT_06dce0f0);
    thunk_FUN_0159f088(PTR_DAT_06dfc458);
    thunk_FUN_0159f088(PTR_DAT_06de4320);
    thunk_FUN_0159f088(PTR_DAT_06d8c550);
    thunk_FUN_0159f088(PTR_DAT_06de4840);
    thunk_FUN_0159f088(PTR_DAT_06e48eb8);
    thunk_FUN_0159f088(PTR_DAT_06de1a18);
    bRam000000000722e3e0 = 1;
  }
  memset(auStack_c08,0,0x2e8);
  uStack_c10 = 0;
  memset(auStack_ef0,0,0x2e0);
  uStack_f00 = 0;
  uStack_f28 = 0;
  uStack_f30 = 0;
  uStack_f38 = 0;
  uStack_f40 = 0;
  uStack_f48 = 0;
  uStack_f4c = 0;
  uStack_f58 = 0;
  auStack_f70._8_8_ = 0;
  auStack_f70._0_8_ = 0;
  auStack_f80._8_8_ = 0;
  auStack_f80._0_8_ = 0;
  uStack_f18 = 0;
  uStack_f20 = 0;
  uStack_f08 = 0;
  uStack_f10 = 0;
  uStack_f88 = 0;
  iVar6 = *param_1;
  lVar17 = *(long *)(param_1 + 8);
  if (iVar6 == 0) {
    uStack_c10 = *(undefined8 *)(param_1 + 0x12);
    iVar6 = -1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_02160b34:
    uVar7 = FUN_023a8974(&uStack_c10,*(undefined8 *)PTR_DAT_06d9e7e0);
    if (*(int *)(*(long *)PTR_DAT_06dd1ea8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar9 = FUN_017d7074(uVar7,0);
    if ((uVar9 & 1) == 0) {
      if (lVar17 == 0) {
        lStack_3238 = lVar12;
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(long *)(lVar17 + 0x30) == 0) {
        if (*(int *)(*(long *)PTR_DAT_06d925a8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar7 = FUN_03713890(0);
      }
      else {
        uVar7 = FUN_03715db4(*(long *)(lVar17 + 0x30),0);
      }
      *(undefined8 *)(param_1 + 0x10) = uVar7;
      thunk_FUN_01656ef8(param_1 + 0x10,0);
      goto LAB_02160c64;
    }
    memset(auStack_ef0,0,0x2e0);
    memset(auStack_1280,0,0x2e0);
    memset(&uStack_920,0,0x2e8);
    lVar17 = *(long *)(lStack_3230 + 0x20);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_015c2790();
    }
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x10);
    memcpy(auStack_358,auStack_1280,0x2e0);
    FUN_041e58e4(&uStack_920,uVar7,auStack_358,uVar18);
LAB_02160c04:
    piVar15 = (int *)&uStack_920;
LAB_02161f6c:
    memcpy(auStack_c08,piVar15,0x2e8);
  }
  else {
    if (6 < iVar6 - 1U) {
      if (lVar17 == 0) {
        lStack_3238 = lVar12;
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar7 = FUN_01e375e4(lVar17,*(undefined8 *)(param_1 + 10),0);
      piVar15 = param_1 + 0xe;
      *(undefined8 *)piVar15 = uVar7;
      thunk_FUN_01656ef8(piVar15);
      lVar8 = FUN_01e36790(lVar17,*(undefined8 *)piVar15,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uStack_c10 = System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                             (lVar8,*(undefined8 *)PTR_DAT_06dce0f0);
      uVar9 = FUN_023a8930(&uStack_c10,*(undefined8 *)PTR_DAT_06ddd6b0);
      if ((uVar9 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x12) = uStack_c10;
        thunk_FUN_01656ef8(param_1 + 0x12,0);
        lVar17 = *(long *)(lStack_3230 + 0x20);
        if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
          lVar17 = FUN_015c2790();
        }
        System_Collections_Generic_ArraySortHelper<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Default
                  (param_1 + 2,&uStack_c10,param_1,**(undefined8 **)(lVar17 + 0xc0));
        goto LAB_02161fec;
      }
      goto LAB_02160b34;
    }
LAB_02160c64:
    plVar11 = (long *)PTR_DAT_06e49bc0;
    switch(iVar6) {
    case 1:
      uStack_f28 = *(undefined8 *)(param_1 + 0x1e);
      iVar6 = -1;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      *param_1 = -1;
      break;
    case 2:
      uStack_f30 = *(undefined8 *)(param_1 + 0x20);
      iVar6 = -1;
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      *param_1 = -1;
      goto LAB_02160d74;
    case 3:
      uStack_f38 = *(undefined8 *)(param_1 + 0x24);
      iVar6 = -1;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      *param_1 = -1;
      goto LAB_02161094;
    case 4:
      uStack_f40 = *(undefined8 *)(param_1 + 0x26);
      iVar6 = -1;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      *param_1 = -1;
      goto LAB_02161120;
    case 5:
    case 6:
      goto switchD_02160c8c_caseD_5;
    case 7:
      auStack_f70 = *(undefined1 (*) [16])(param_1 + 0xe8);
      param_1[0xea] = 0;
      param_1[0xeb] = 0;
      param_1[0xe8] = 0;
      param_1[0xe9] = 0;
      *param_1 = -1;
      goto LAB_02161e24;
    default:
      if (*(long *)(param_1 + 10) == 0) {
        lStack_3238 = lVar12;
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (lVar17 == 0) {
        lStack_3238 = lVar12;
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lStack_3238 = lVar12;
      uVar7 = FUN_01e371f0(lVar17,*(undefined4 *)(*(long *)(param_1 + 10) + 0x20),0);
      uVar18 = FUN_01e36a44(lVar17,*(undefined8 *)(param_1 + 10),0);
      uVar20 = *(undefined8 *)(param_1 + 0xe);
      lVar12 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06de5418);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_020af96c(lVar12,uVar7,uVar20,0);
      plVar11 = (long *)(param_1 + 0x14);
      *plVar11 = lVar12;
      thunk_FUN_01656ef8(plVar11,lVar12);
      lVar12 = lStack_3238;
      if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      puVar13 = (undefined8 *)(*plVar11 + 0x38);
      *puVar13 = uVar18;
      thunk_FUN_01656ef8(puVar13,uVar18);
      uVar7 = FUN_01e365d0(*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0x14),0);
      if (*(int *)(*(long *)PTR_DAT_06dd1ea8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar9 = FUN_017d7074(uVar7,0);
      if ((uVar9 & 1) != 0) {
        memset(auStack_ef0,0,0x2e0);
        memset(auStack_1560,0,0x2e0);
        memset(&uStack_920,0,0x2e8);
        lVar17 = *(long *)(lStack_3230 + 0x20);
        if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
          lVar17 = FUN_015c2790();
        }
        uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x10);
        memcpy(auStack_358,auStack_1560,0x2e0);
        FUN_041e58e4(&uStack_920,uVar7,auStack_358,uVar18);
        goto LAB_02160c04;
      }
      if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar12 = FUN_020a907c(*plVar11,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar12 = FUN_020bb6c0(lVar12,0);
      puVar3 = PTR_DAT_06d8c550;
      if (*(int *)(*(long *)PTR_DAT_06d8c550 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar7 = FUN_017eaca4(0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4(uVar7,uVar7);
      }
      uVar9 = FUN_04fa1438(lVar12,uVar7,*(undefined8 *)PTR_DAT_06dd31d8);
      if ((uVar9 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_06e49bc0 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        if (DAT_0722a6b7 == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e49bc0);
          DAT_0722a6b7 = '\x01';
        }
        lVar12 = *(long *)PTR_DAT_06e49bc0;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar12 = *(long *)PTR_DAT_06e49bc0;
        }
        lVar12 = **(long **)(lVar12 + 0xb8);
        if (lVar12 != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar7 = FUN_017eaca4(0);
          uVar7 = FUN_02519a6c(*(undefined8 *)PTR_DAT_06e48eb8,uVar7,0);
          FUN_017de714(lVar12,uVar7,0);
        }
      }
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar12 = *(long *)(*(long *)(param_1 + 10) + 0x18);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar12 = *(long *)(lVar12 + 0x18);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_027836d4(&uStack_920,lVar12,*(undefined8 *)PTR_DAT_06da9340);
      puVar4 = PTR_DAT_06e5db68;
      puVar3 = PTR_DAT_06de1a18;
      uStack_f18 = uStack_918;
      uStack_f20 = uStack_920;
      uStack_f08 = uStack_908;
      uStack_f10 = uStack_910;
      uStack_f00 = uStack_900;
      while (uVar9 = FUN_04195c54(&uStack_f20,*(undefined8 *)puVar4), uVar18 = uStack_f08,
            uVar7 = uStack_f10, lVar12 = lStack_3238, (uVar9 & 1) != 0) {
        uVar9 = thunk_FUN_0252637c(uStack_f10,*(undefined8 *)puVar3,0);
        lVar12 = *plVar11;
        if ((uVar9 & 1) == 0) {
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar12 = FUN_020a907c(lVar12,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          FUN_020b9eb4(lVar12,uVar7,uVar18,0);
        }
        else {
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if (*(long *)(lVar12 + 0x38) != 0) {
            lVar12 = FUN_020a982c(*(long *)(lVar12 + 0x38),0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            FUN_020b9eb4(lVar12,uVar7,uVar18,0);
          }
        }
      }
      if (iVar6 < 0) {
        FUN_04195d6c(&uStack_f20,*(undefined8 *)PTR_DAT_06e0bd20);
      }
      lVar8 = FUN_01e37820(lVar17,*plVar11,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uStack_f28 = FUN_036985b8(lVar8,0);
      uVar9 = FUN_02df6bb4(&uStack_f28,0);
      if ((uVar9 & 1) == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x1e) = uStack_f28;
        thunk_FUN_01656ef8(param_1 + 0x1e,0);
        lVar17 = *(long *)(lStack_3230 + 0x20);
        if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
          lVar17 = FUN_015c2790();
        }
        FUN_04618d08(param_1 + 2,&uStack_f28,param_1,
                     *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18));
        goto LAB_02161fec;
      }
    }
    FUN_02df6c84(&uStack_f28,0);
    plVar11 = (long *)PTR_DAT_06e49bc0;
    if (lVar17 == 0) {
      lStack_3238 = lVar12;
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar10 = *(long **)(lVar17 + 0x10);
    if (plVar10 == (long *)0x0) {
      lStack_3238 = lVar12;
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar17 = (**(code **)(*plVar10 + 0x198))
                       (plVar10,*(undefined8 *)(param_1 + 0x14),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(*plVar10 + 0x1a0));
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uStack_f30 = System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                           (lVar17,*(undefined8 *)PTR_DAT_06dfc458);
    uVar9 = FUN_023a8930(&uStack_f30,*(undefined8 *)PTR_DAT_06e34ea0);
    if ((uVar9 & 1) == 0) {
      *param_1 = 2;
      *(undefined8 *)(param_1 + 0x20) = uStack_f30;
      thunk_FUN_01656ef8(param_1 + 0x20,0);
      lVar17 = *(long *)(lStack_3230 + 0x20);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_015c2790();
      }
      System_Collections_Generic_ArraySortHelper<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Default
                (param_1 + 2,&uStack_f30,param_1,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x20));
      goto LAB_02161fec;
    }
LAB_02160d74:
    lVar17 = FUN_023a8974(&uStack_f30,*(undefined8 *)PTR_DAT_06e3f548);
    plVar10 = (long *)(param_1 + 0x16);
    *plVar10 = lVar17;
    thunk_FUN_01656ef8(plVar10);
    if (*plVar10 == 0) {
      lStack_3238 = lVar12;
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (*(int *)(*plVar10 + 0x20) == 0xcc) {
      FUN_0371409c(param_1 + 0x10,0);
      lVar17 = *(long *)PTR_DAT_06dd1ea8;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar17 = *(long *)PTR_DAT_06dd1ea8;
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8);
      auStack_638[0] = 0;
      plVar11 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06e00550,auStack_638);
      lVar17 = *(long *)(lStack_3230 + 0x20);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_015c2790();
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x28);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_015c2790(lVar17);
      }
      if ((plVar11 != (long *)0x0) && (*plVar11 != *(long *)(lVar17 + 0x40))) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar11);
      }
      thunk_FUN_015d06d0(plVar11,lVar17,auStack_3520);
      memset(&uStack_920,0,0x2e8);
      memcpy(auStack_1840,auStack_3520,0x2e0);
      lVar17 = *(long *)(lStack_3230 + 0x20);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_015c2790();
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x10);
      memcpy(auStack_358,auStack_1840,0x2e0);
      FUN_041e58e4(&uStack_920,uVar7,auStack_358,uVar18);
      goto LAB_02160c04;
    }
    if (*(int *)(*plVar11 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if (DAT_0722a6b4 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e49bc0);
      DAT_0722a6b4 = '\x01';
    }
    lVar17 = *plVar11;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar17 = *plVar11;
    }
    plVar11 = (long *)(param_1 + 0x22);
    *plVar11 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x18);
    thunk_FUN_01656ef8(plVar11);
    if (*plVar11 != 0) {
      if (*plVar10 == 0) {
        lStack_3238 = lVar12;
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar17 = *(long *)(*plVar10 + 0x38);
      if (lVar17 == 0) {
        lStack_3238 = lVar12;
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar17 = FUN_020ae074(lVar17,0);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uStack_f38 = System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                             (lVar17,*(undefined8 *)PTR_DAT_06e66270);
      uVar9 = FUN_023a8930(&uStack_f38,*(undefined8 *)PTR_DAT_06e4e9c0);
      if ((uVar9 & 1) == 0) {
        *param_1 = 3;
        *(undefined8 *)(param_1 + 0x24) = uStack_f38;
        thunk_FUN_01656ef8(param_1 + 0x24,0);
        lVar17 = *(long *)(lStack_3230 + 0x20);
        if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
          lVar17 = FUN_015c2790();
        }
        System_Collections_Generic_ArraySortHelper<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Default
                  (param_1 + 2,&uStack_f38,param_1,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x30))
        ;
        goto LAB_02161fec;
      }
LAB_02161094:
      uVar7 = FUN_023a8974(&uStack_f38,*(undefined8 *)PTR_DAT_06da9ed8);
      if (*(long *)(param_1 + 0x22) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4(0,uVar7);
      }
      FUN_017de714(*(long *)(param_1 + 0x22),uVar7,0);
    }
    piVar15 = param_1 + 0x22;
    piVar15[0] = 0;
    piVar15[1] = 0;
    thunk_FUN_01656ef8(piVar15,0);
    if (*(long *)(param_1 + 0x16) == 0) {
      lStack_3238 = lVar12;
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar17 = *(long *)(*(long *)(param_1 + 0x16) + 0x38);
    if (lVar17 == 0) {
      lStack_3238 = lVar12;
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar17 = FUN_020adf5c(lVar17,0);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uStack_f40 = System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                           (lVar17,*(undefined8 *)PTR_DAT_06de4320);
    uVar9 = FUN_023a8930(&uStack_f40,*(undefined8 *)PTR_DAT_06de71e8);
    if ((uVar9 & 1) == 0) {
      *param_1 = 4;
      *(undefined8 *)(param_1 + 0x26) = uStack_f40;
      thunk_FUN_01656ef8(param_1 + 0x26,0);
      lVar17 = *(long *)(lStack_3230 + 0x20);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_015c2790();
      }
      System_Collections_Generic_ArraySortHelper<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Default
                (param_1 + 2,&uStack_f40,param_1,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x38));
      goto LAB_02161fec;
    }
LAB_02161120:
    uVar7 = FUN_023a8974(&uStack_f40,*(undefined8 *)PTR_DAT_06de5458);
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    thunk_FUN_01656ef8();
    piVar15 = param_1 + 0x28;
    piVar15[0] = 0;
    piVar15[1] = 0;
    thunk_FUN_01656ef8(piVar15,0);
    param_1[0x2a] = 0;
switchD_02160c8c_caseD_5:
    if (1 < iVar6 - 5U) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      lVar17 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e2af70);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_0361cdb8(lVar17,uVar7,0);
      *(long *)(param_1 + 0x1a) = lVar17;
      thunk_FUN_01656ef8(param_1 + 0x1a,lVar17);
    }
    puVar4 = PTR_DAT_06e636c0;
    puVar3 = PTR_DAT_06e5eb78;
    if (iVar6 == 5) {
      uStack_c10 = *(undefined8 *)(param_1 + 0x12);
      iVar6 = -1;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
LAB_0216134c:
      uVar7 = FUN_023a8974(&uStack_c10,*(undefined8 *)PTR_DAT_06d9e7e0);
      FUN_0371409c(param_1 + 0x10,0);
      lVar17 = *(long *)(param_1 + 0x16);
      if (lVar17 == 0) {
        lStack_3238 = lVar12;
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(int *)(lVar17 + 0x20) == 0x1ad) {
        lVar17 = FUN_020a98a8(lVar17,0);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar9 = FUN_020babbc(lVar17,*(undefined8 *)PTR_DAT_06de4840,&uStack_f48,0);
        if ((uVar9 & 1) != 0) {
          uVar18 = FUN_01b5a9f0(uStack_f48,*(undefined8 *)PTR_DAT_06dc6008);
          uVar9 = FUN_03219c04(uVar18,&uStack_f4c,0);
          uVar5 = uStack_f4c;
          if ((uVar9 & 1) != 0) {
            lVar17 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e65108);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            FUN_021412e4(lVar17,0x2b00,uVar5,0);
            memset(auStack_ef0,0,0x2e0);
            memset(auStack_1b20,0,0x2e0);
            memset(&uStack_920,0,0x2e8);
            lVar8 = *(long *)(lStack_3230 + 0x20);
            if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
              lVar8 = FUN_015c2790();
            }
            uVar7 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x10);
            memcpy(auStack_358,auStack_1b20,0x2e0);
            FUN_041e58e4(&uStack_920,lVar17,auStack_358,uVar7);
            memcpy(param_1 + 0x2c,&uStack_920,0x2e8);
            thunk_FUN_01656ef8(param_1 + 0x2c,0);
            goto joined_r0x0216157c;
          }
        }
      }
      memset(auStack_ef0,0,0x2e0);
      memset(auStack_1e00,0,0x2e0);
      memset(&uStack_920,0,0x2e8);
      lVar17 = *(long *)(lStack_3230 + 0x20);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_015c2790();
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x10);
      memcpy(auStack_358,auStack_1e00,0x2e0);
      FUN_041e58e4(&uStack_920,uVar7,auStack_358,uVar18);
      memcpy(param_1 + 0x2c,&uStack_920,0x2e8);
      thunk_FUN_01656ef8(param_1 + 0x2c,0);
    }
    else {
      if (iVar6 == 6) {
        uStack_f58 = *(undefined8 *)(param_1 + 0xe6);
        iVar6 = -1;
        param_1[0xe6] = 0;
        param_1[0xe7] = 0;
        *param_1 = -1;
      }
      else {
        if (*(long *)(param_1 + 0x16) == 0) {
          lStack_3238 = lVar12;
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (99 < *(int *)(*(long *)(param_1 + 0x16) + 0x20) - 200U) {
          lVar17 = FUN_01e373cc(*(undefined8 *)(param_1 + 0x1a),0);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          uStack_c10 = System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                                 (lVar17,*(undefined8 *)PTR_DAT_06dce0f0);
          uVar9 = FUN_023a8930(&uStack_c10,*(undefined8 *)PTR_DAT_06ddd6b0);
          if ((uVar9 & 1) == 0) {
            *param_1 = 5;
            *(undefined8 *)(param_1 + 0x12) = uStack_c10;
            thunk_FUN_01656ef8(param_1 + 0x12,0);
            lVar17 = *(long *)(lStack_3230 + 0x20);
            if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
              lVar17 = FUN_015c2790();
            }
            System_Collections_Generic_ArraySortHelper<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Default
                      (param_1 + 2,&uStack_c10,param_1,**(undefined8 **)(lVar17 + 0xc0));
            goto LAB_02161fec;
          }
          goto LAB_0216134c;
        }
        if (*(int *)(*(long *)PTR_DAT_06e5eb78 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        if (cRam000000000722b71c == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e5eb78);
          cRam000000000722b71c = '\x01';
        }
        lVar17 = *(long *)puVar3;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_016466fc(lVar17);
          lVar17 = *(long *)puVar3;
        }
        if (*(char *)(*(long *)(lVar17 + 0xb8) + 8) != '\0') {
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_016466fc(lVar17);
          }
          FUN_0214afa8(0,0);
        }
        uVar7 = *(undefined8 *)(param_1 + 0x1a);
        lVar17 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e1b970);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_04515e5c(lVar17,uVar7,0);
        *(long *)(param_1 + 0x1c) = lVar17;
        thunk_FUN_01656ef8(param_1 + 0x1c,lVar17);
        lVar17 = *(long *)(param_1 + 0xc);
        if (lVar17 == 0) {
          lStack_3238 = lVar12;
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar7 = *(undefined8 *)(param_1 + 0x1c);
        lVar14 = *(long *)(lStack_3230 + 0x20);
        uVar2 = *(ushort *)(lVar14 + 0x132);
        lVar8 = lVar14;
        if ((uVar2 & 1) == 0) {
          lVar8 = FUN_015c2790();
          lVar14 = *(long *)(lStack_3230 + 0x20);
          uVar2 = *(ushort *)(lVar14 + 0x132);
        }
        pcVar16 = *(code **)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x48) + 8);
        if ((uVar2 & 1) == 0) {
          lVar14 = FUN_015c2790();
        }
        lVar17 = (*pcVar16)(lVar17,uVar7,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x48));
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        lVar14 = *(long *)(lStack_3230 + 0x20);
        uVar2 = *(ushort *)(lVar14 + 0x132);
        lVar8 = lVar14;
        if ((uVar2 & 1) == 0) {
          lVar8 = FUN_015c2790();
          lVar14 = *(long *)(lStack_3230 + 0x20);
          uVar2 = *(ushort *)(lVar14 + 0x132);
        }
        pcVar16 = *(code **)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x58) + 8);
        if ((uVar2 & 1) == 0) {
          lVar14 = FUN_015c2790();
        }
        uStack_f58 = (*pcVar16)(lVar17,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x58));
        lVar17 = *(long *)(lStack_3230 + 0x20);
        if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
          lVar17 = FUN_015c2790();
        }
        uVar9 = FUN_023a4d1c(&uStack_f58,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x60));
        if ((uVar9 & 1) == 0) {
          *param_1 = 6;
          *(undefined8 *)(param_1 + 0xe6) = uStack_f58;
          thunk_FUN_01656ef8(param_1 + 0xe6,0);
          lVar17 = *(long *)(lStack_3230 + 0x20);
          if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
            lVar17 = FUN_015c2790();
          }
          FUN_046184a4(param_1 + 2,&uStack_f58,param_1,
                       *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x68));
          goto LAB_02161fec;
        }
      }
      lVar17 = *(long *)(lStack_3230 + 0x20);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_015c2790();
      }
      FUN_023a4d60(&uStack_920,&uStack_f58,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x70));
      memcpy(auStack_ef0,&uStack_920,0x2e0);
      lVar17 = *(long *)PTR_DAT_06dd1ea8;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar17 = *(long *)PTR_DAT_06dd1ea8;
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8);
      memcpy(auStack_20e0,auStack_ef0,0x2e0);
      memset(&uStack_920,0,0x2e8);
      lVar17 = *(long *)(lStack_3230 + 0x20);
      if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
        lVar17 = FUN_015c2790();
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x10);
      memcpy(auStack_358,auStack_20e0,0x2e0);
      FUN_041e58e4(&uStack_920,uVar7,auStack_358,uVar18);
      memcpy(param_1 + 0x2c,&uStack_920,0x2e8);
      thunk_FUN_01656ef8(param_1 + 0x2c,0);
      if ((iVar6 < 0) && (plVar11 = *(long **)(param_1 + 0x1c), plVar11 != (long *)0x0)) {
        lVar8 = *plVar11;
        lVar17 = *(long *)puVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar17) {
              puVar13 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_02161c24;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar13 = (undefined8 *)FUN_015c2a80(plVar11,lVar17,0);
LAB_02161c24:
        (*(code *)*puVar13)(plVar11,puVar13[1]);
      }
    }
joined_r0x0216157c:
    if ((iVar6 < 0) && (plVar11 = *(long **)(param_1 + 0x1a), plVar11 != (long *)0x0)) {
      lVar8 = *plVar11;
      lVar17 = *(long *)puVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar17) {
            puVar13 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_02161c9c;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar13 = (undefined8 *)FUN_015c2a80(plVar11,lVar17,0);
LAB_02161c9c:
      (*(code *)*puVar13)(plVar11,puVar13[1]);
    }
    param_1[0x2a] = 1;
    plVar11 = *(long **)(param_1 + 0x18);
    if (plVar11 != (long *)0x0) {
      lVar17 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06d8b348) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_02161d1c;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar13 = (undefined8 *)FUN_015c2a80(plVar11,*(long *)PTR_DAT_06d8b348,0);
LAB_02161d1c:
      auStack_f80 = (*(code *)*puVar13)(plVar11,puVar13[1]);
      auStack_f70 = FUN_036991cc(auStack_f80,0);
      if (DAT_0722a6b5 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e52150);
        thunk_FUN_0159f088(PTR_DAT_06dd2198);
        DAT_0722a6b5 = '\x01';
      }
      uVar7 = auStack_f70._0_8_;
      if ((long *)auStack_f70._0_8_ != (long *)0x0) {
        lVar17 = *(long *)auStack_f70._0_8_;
        bVar1 = *(byte *)(*(long *)PTR_DAT_06dd2198 + 300);
        if ((*(byte *)(lVar17 + 300) < bVar1) ||
           (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06dd2198)
           ) {
          uVar19 = auStack_f70._8_8_ & 0xffff;
          uVar9 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar9 != 0) {
            piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06e52150) {
                puVar13 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_02161e10;
              }
              uVar9 = uVar9 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_015c2a80(auStack_f70._0_8_,*(long *)PTR_DAT_06e52150,0);
LAB_02161e10:
          iVar6 = (*(code *)*puVar13)(uVar7,uVar19,puVar13[1]);
          if (iVar6 == 0) goto LAB_021620c4;
        }
        else {
          uVar9 = FUN_036982e0(auStack_f70._0_8_,0);
          if ((uVar9 & 1) == 0) {
LAB_021620c4:
            *param_1 = 7;
            *(undefined1 (*) [16])(param_1 + 0xe8) = auStack_f70;
            thunk_FUN_01656ef8(param_1 + 0xe8,0);
            lVar17 = *(long *)(lStack_3230 + 0x20);
            if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
              lVar17 = FUN_015c2790();
            }
            FUN_04619064(param_1 + 2,auStack_f70,param_1,
                         *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x78));
            goto LAB_02161fec;
          }
        }
      }
LAB_02161e24:
      if (DAT_0722a6b6 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e52150);
        thunk_FUN_0159f088(PTR_DAT_06dd2198);
        DAT_0722a6b6 = '\x01';
      }
      uVar7 = auStack_f70._0_8_;
      if ((long *)auStack_f70._0_8_ != (long *)0x0) {
        lVar17 = *(long *)auStack_f70._0_8_;
        bVar1 = *(byte *)(*(long *)PTR_DAT_06dd2198 + 300);
        if ((*(byte *)(lVar17 + 300) < bVar1) ||
           (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06dd2198)
           ) {
          uVar19 = auStack_f70._8_8_ & 0xffff;
          uVar9 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar9 != 0) {
            piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06e52150) {
                puVar13 = (undefined8 *)(lVar17 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                goto LAB_02161eec;
              }
              uVar9 = uVar9 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_015c2a80(auStack_f70._0_8_,*(long *)PTR_DAT_06e52150,2);
LAB_02161eec:
          (*(code *)*puVar13)(uVar7,uVar19,puVar13[1]);
        }
        else {
          FUN_02df6c8c(auStack_f70._0_8_,0);
        }
      }
    }
    piVar15 = param_1 + 0x28;
    plVar11 = *(long **)piVar15;
    if (plVar11 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e35b40 + 300);
      if ((bVar1 <= *(byte *)(*plVar11 + 300)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06e35b40)
         ) {
        lVar12 = FUN_02df4dd8(plVar11,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
                    /* WARNING: Subroutine does not return */
        FUN_02df4ea4(lVar12,0);
      }
      lStack_3238 = lVar12;
      uVar7 = thunk_FUN_0159f088(PTR_DAT_06dc5a48);
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(plVar11,uVar7);
    }
    if (param_1[0x2a] == 1) {
      piVar15 = param_1 + 0x2c;
      goto LAB_02161f6c;
    }
    piVar15[0] = 0;
    piVar15[1] = 0;
    thunk_FUN_01656ef8(piVar15,0);
    memset(param_1 + 0x2c,0,0x2e8);
    piVar15 = param_1 + 0x14;
    piVar15[0] = 0;
    piVar15[1] = 0;
    thunk_FUN_01656ef8(piVar15,0);
    piVar15 = param_1 + 0x16;
    piVar15[0] = 0;
    piVar15[1] = 0;
    thunk_FUN_01656ef8(piVar15,0);
    piVar15 = param_1 + 0x18;
    piVar15[0] = 0;
    piVar15[1] = 0;
    thunk_FUN_01656ef8(piVar15,0);
    piVar15 = param_1 + 0x1a;
    piVar15[0] = 0;
    piVar15[1] = 0;
    thunk_FUN_01656ef8(piVar15,0);
    piVar15 = param_1 + 0x1c;
    piVar15[0] = 0;
    piVar15[1] = 0;
    thunk_FUN_01656ef8(piVar15,0);
    piVar15 = param_1 + 0xe;
    piVar15[0] = 0;
    piVar15[1] = 0;
    thunk_FUN_01656ef8(piVar15,0);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  *param_1 = -2;
  piVar15 = param_1 + 0xe;
  piVar15[0] = 0;
  piVar15[1] = 0;
  thunk_FUN_01656ef8(piVar15,0);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  memcpy(auStack_3228,auStack_c08,0x2e8);
  lVar17 = *(long *)(lStack_3230 + 0x20);
  if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
    lVar17 = FUN_015c2790();
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x88);
  memcpy(&uStack_920,auStack_3228,0x2e8);
  FUN_0509c5cc(param_1 + 2,&uStack_920,uVar7);
LAB_02161fec:
  if (*(long *)(lVar12 + 0x28) != lStack_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


