/*
FUNCTION_NAME: Modio.API.ModioAPI.Collections.<AddCollectionAsJToken>d__0$$MoveNext
ENTRY_POINT: 02160f60
PROGRAM: vrfs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02162160) */
/* WARNING: Removing unreachable block (ram,0x02161c3c) */
/* WARNING: Removing unreachable block (ram,0x02161a8c) */
/* WARNING: Removing unreachable block (ram,0x02162180) */
/* WARNING: Removing unreachable block (ram,0x021621fc) */
/* WARNING: Removing unreachable block (ram,0x02161cb4) */

void Modio_API_ModioAPI_Collections_<AddCollectionAsJToken>d__0__MoveNext(void)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined4 *__src;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  code *pcVar17;
  undefined4 *unaff_x21;
  long unaff_x22;
  void *unaff_x23;
  undefined8 uVar18;
  long *plVar19;
  undefined8 unaff_x24;
  long *unaff_x26;
  long lVar20;
  int unaff_w28;
  long unaff_x29;
  undefined1 auVar21 [16];
  
  if (*unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  *(undefined8 *)(*unaff_x26 + 0x38) = unaff_x24;
  lVar20 = *(long *)(unaff_x19 + 8);
  thunk_FUN_01656ef8();
  uVar10 = FUN_01e365d0(*(undefined8 *)(unaff_x21 + 10),*(undefined8 *)(unaff_x21 + 0x14),0);
  if (*(int *)(*(long *)PTR_DAT_06dd1ea8 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar11 = FUN_017d7074(uVar10,0);
  if ((uVar11 & 1) == 0) {
    if (*unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar20 = FUN_020a907c(*unaff_x26,0);
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar20 = FUN_020bb6c0(lVar20,0);
    puVar5 = PTR_DAT_06d8c550;
    if (*(int *)(*(long *)PTR_DAT_06d8c550 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar10 = FUN_017eaca4(0);
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4(uVar10,uVar10);
    }
    uVar11 = FUN_04fa1438(lVar20,uVar10,*(undefined8 *)PTR_DAT_06dd31d8);
    if ((uVar11 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_06e49bc0 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if (DAT_0722a6b7 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e49bc0);
        DAT_0722a6b7 = '\x01';
      }
      lVar20 = *(long *)PTR_DAT_06e49bc0;
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar20 = *(long *)PTR_DAT_06e49bc0;
      }
      lVar20 = **(long **)(lVar20 + 0xb8);
      if (lVar20 != 0) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar10 = FUN_017eaca4(0);
        uVar10 = FUN_02519a6c(*(undefined8 *)PTR_DAT_06e48eb8,uVar10,0);
        FUN_017de714(lVar20,uVar10,0);
      }
    }
    if (*(long *)(unaff_x21 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar20 = *(long *)(*(long *)(unaff_x21 + 10) + 0x18);
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar20 = *(long *)(lVar20 + 0x18);
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_027836d4(unaff_x19 + 0x2920,lVar20,*(undefined8 *)PTR_DAT_06da9340);
    puVar6 = PTR_DAT_06e5db68;
    puVar5 = PTR_DAT_06de1a18;
    *(undefined8 *)(unaff_x19 + 9000) = *(undefined8 *)(unaff_x19 + 0x2928);
    *(undefined8 *)(unaff_x19 + 0x2320) = *(undefined8 *)(unaff_x19 + 0x2920);
    *(undefined8 *)(unaff_x19 + 0x2338) = *(undefined8 *)(unaff_x19 + 0x2938);
    *(undefined8 *)(unaff_x19 + 0x2330) = *(undefined8 *)(unaff_x19 + 0x2930);
    *(undefined8 *)(unaff_x19 + 0x2340) = *(undefined8 *)(unaff_x19 + 0x2940);
    while (uVar11 = FUN_04195c54(unaff_x19 + 0x2320,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
      uVar10 = *(undefined8 *)(unaff_x19 + 0x2338);
      uVar18 = *(undefined8 *)(unaff_x19 + 0x2330);
      uVar11 = thunk_FUN_0252637c(uVar18,*(undefined8 *)puVar5,0);
      lVar20 = *unaff_x26;
      if ((uVar11 & 1) == 0) {
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        lVar20 = FUN_020a907c(lVar20,0);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_020b9eb4(lVar20,uVar18,uVar10,0);
      }
      else {
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (*(long *)(lVar20 + 0x38) != 0) {
          lVar20 = FUN_020a982c(*(long *)(lVar20 + 0x38),0);
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          FUN_020b9eb4(lVar20,uVar18,uVar10,0);
        }
      }
    }
    lVar20 = *(long *)(unaff_x19 + 8);
    if (unaff_w28 < 0) {
      FUN_04195d6c(unaff_x19 + 0x2320,*(undefined8 *)PTR_DAT_06e0bd20);
    }
    lVar12 = FUN_01e37820();
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar10 = FUN_036985b8(lVar12,0);
    *(undefined8 *)(unaff_x19 + 0x2318) = uVar10;
    uVar11 = FUN_02df6bb4(unaff_x19 + 0x2318,0);
    if ((uVar11 & 1) == 0) {
      *unaff_x21 = 1;
      *(undefined8 *)(unaff_x21 + 0x1e) = *(undefined8 *)(unaff_x19 + 0x2318);
      thunk_FUN_01656ef8(unaff_x21 + 0x1e,0);
      if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
        FUN_015c2790();
      }
      FUN_04618d08(unaff_x21 + 2,unaff_x19 + 0x2318);
      goto LAB_02161fec;
    }
    FUN_02df6c84(unaff_x19 + 0x2318,0);
    puVar5 = PTR_DAT_06e49bc0;
    if (unaff_x22 == 0) {
      *(long *)(unaff_x19 + 8) = lVar20;
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar9 = *(long **)(unaff_x22 + 0x10);
    if (plVar9 == (long *)0x0) {
      *(long *)(unaff_x19 + 8) = lVar20;
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar12 = (**(code **)(*plVar9 + 0x198))
                       (plVar9,*(undefined8 *)(unaff_x21 + 0x14),*(undefined8 *)(unaff_x21 + 0x10),
                        *(undefined8 *)(*plVar9 + 0x1a0));
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar10 = System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                       (lVar12,*(undefined8 *)PTR_DAT_06dfc458);
    puVar6 = PTR_DAT_06e34ea0;
    *(undefined8 *)(unaff_x19 + 0x2310) = uVar10;
    uVar11 = FUN_023a8930(unaff_x19 + 0x2310,*(undefined8 *)puVar6);
    if ((uVar11 & 1) == 0) {
      *unaff_x21 = 2;
      *(undefined8 *)(unaff_x21 + 0x20) = *(undefined8 *)(unaff_x19 + 0x2310);
      thunk_FUN_01656ef8(unaff_x21 + 0x20,0);
      if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
        FUN_015c2790();
      }
      System_Collections_Generic_ArraySortHelper<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Default
                (unaff_x21 + 2,unaff_x19 + 0x2310);
      goto LAB_02161fec;
    }
    lVar12 = FUN_023a8974(unaff_x19 + 0x2310,*(undefined8 *)PTR_DAT_06e3f548);
    plVar9 = (long *)(unaff_x21 + 0x16);
    *plVar9 = lVar12;
    thunk_FUN_01656ef8(plVar9);
    if (*plVar9 == 0) {
      *(long *)(unaff_x19 + 8) = lVar20;
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (*(int *)(*plVar9 + 0x20) == 0xcc) {
      FUN_0371409c(unaff_x21 + 0x10,0);
      lVar12 = *(long *)PTR_DAT_06dd1ea8;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar12 = *(long *)PTR_DAT_06dd1ea8;
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8);
      uVar10 = *(undefined8 *)PTR_DAT_06e00550;
      *(undefined1 *)(unaff_x19 + 0x2c08) = 0;
      plVar9 = (long *)thunk_FUN_015d01b0(uVar10,unaff_x19 + 0x2c08);
      lVar12 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_015c2790();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_015c2790(lVar12);
      }
      if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)(lVar12 + 0x40))) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar9);
      }
      thunk_FUN_015d06d0(plVar9,lVar12);
      memset((void *)(unaff_x19 + 0x2920),0,0x2e8);
      memcpy((void *)(unaff_x19 + 0x1a00),unaff_x23,0x2e0);
      lVar12 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_015c2790();
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x10);
      memcpy((void *)(unaff_x19 + 0x2ee8),(void *)(unaff_x19 + 0x1a00),0x2e0);
      FUN_041e58e4(unaff_x19 + 0x2920,uVar18,unaff_x19 + 0x2ee8,uVar10);
      goto LAB_02160c04;
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if (DAT_0722a6b4 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e49bc0);
      DAT_0722a6b4 = '\x01';
    }
    lVar12 = *(long *)puVar5;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar12 = *(long *)puVar5;
    }
    plVar19 = (long *)(unaff_x21 + 0x22);
    *plVar19 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
    thunk_FUN_01656ef8(plVar19);
    if (*plVar19 != 0) {
      if (*plVar9 == 0) {
        *(long *)(unaff_x19 + 8) = lVar20;
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar12 = *(long *)(*plVar9 + 0x38);
      if (lVar12 == 0) {
        *(long *)(unaff_x19 + 8) = lVar20;
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar12 = FUN_020ae074(lVar12,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar10 = System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                         (lVar12,*(undefined8 *)PTR_DAT_06e66270);
      puVar5 = PTR_DAT_06e4e9c0;
      *(undefined8 *)(unaff_x19 + 0x2308) = uVar10;
      uVar11 = FUN_023a8930(unaff_x19 + 0x2308,*(undefined8 *)puVar5);
      if ((uVar11 & 1) == 0) {
        *unaff_x21 = 3;
        *(undefined8 *)(unaff_x21 + 0x24) = *(undefined8 *)(unaff_x19 + 0x2308);
        thunk_FUN_01656ef8(unaff_x21 + 0x24,0);
        if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
          FUN_015c2790();
        }
        System_Collections_Generic_ArraySortHelper<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Default
                  (unaff_x21 + 2,unaff_x19 + 0x2308);
        goto LAB_02161fec;
      }
      uVar10 = FUN_023a8974(unaff_x19 + 0x2308,*(undefined8 *)PTR_DAT_06da9ed8);
      if (*(long *)(unaff_x21 + 0x22) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4(0,uVar10);
      }
      FUN_017de714(*(long *)(unaff_x21 + 0x22),uVar10,0);
    }
    *(undefined8 *)(unaff_x21 + 0x22) = 0;
    thunk_FUN_01656ef8(unaff_x21 + 0x22,0);
    if (*(long *)(unaff_x21 + 0x16) == 0) {
      *(long *)(unaff_x19 + 8) = lVar20;
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar12 = *(long *)(*(long *)(unaff_x21 + 0x16) + 0x38);
    if (lVar12 == 0) {
      *(long *)(unaff_x19 + 8) = lVar20;
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar12 = FUN_020adf5c(lVar12,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar10 = System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                       (lVar12,*(undefined8 *)PTR_DAT_06de4320);
    puVar5 = PTR_DAT_06de71e8;
    *(undefined8 *)(unaff_x19 + 0x2300) = uVar10;
    uVar11 = FUN_023a8930(unaff_x19 + 0x2300,*(undefined8 *)puVar5);
    if ((uVar11 & 1) == 0) {
      *unaff_x21 = 4;
      *(undefined8 *)(unaff_x21 + 0x26) = *(undefined8 *)(unaff_x19 + 0x2300);
      thunk_FUN_01656ef8(unaff_x21 + 0x26,0);
      if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
        FUN_015c2790();
      }
      System_Collections_Generic_ArraySortHelper<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Default
                (unaff_x21 + 2,unaff_x19 + 0x2300);
      goto LAB_02161fec;
    }
    uVar10 = FUN_023a8974(unaff_x19 + 0x2300,*(undefined8 *)PTR_DAT_06de5458);
    *(undefined8 *)(unaff_x21 + 0x18) = uVar10;
    thunk_FUN_01656ef8();
    *(undefined8 *)(unaff_x21 + 0x28) = 0;
    thunk_FUN_01656ef8(unaff_x21 + 0x28,0);
    unaff_x21[0x2a] = 0;
    if (1 < unaff_w28 - 5U) {
      uVar10 = *(undefined8 *)(unaff_x21 + 0x18);
      lVar12 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e2af70);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_0361cdb8(lVar12,uVar10,0);
      *(long *)(unaff_x21 + 0x1a) = lVar12;
      thunk_FUN_01656ef8(unaff_x21 + 0x1a,lVar12);
    }
    puVar6 = PTR_DAT_06e636c0;
    puVar5 = PTR_DAT_06e5eb78;
    if (unaff_w28 == 5) {
      unaff_w28 = -1;
      *(undefined8 *)(unaff_x19 + 0x2630) = *(undefined8 *)(unaff_x21 + 0x12);
      *(undefined8 *)(unaff_x21 + 0x12) = 0;
      *unaff_x21 = 0xffffffff;
LAB_0216134c:
      uVar10 = FUN_023a8974(unaff_x19 + 0x2630,*(undefined8 *)PTR_DAT_06d9e7e0);
      FUN_0371409c(unaff_x21 + 0x10,0);
      lVar12 = *(long *)(unaff_x21 + 0x16);
      if (lVar12 == 0) {
        *(long *)(unaff_x19 + 8) = lVar20;
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(int *)(lVar12 + 0x20) == 0x1ad) {
        lVar12 = FUN_020a98a8(lVar12,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar11 = FUN_020babbc(lVar12,*(undefined8 *)PTR_DAT_06de4840,unaff_x19 + 0x22f8,0);
        if ((uVar11 & 1) != 0) {
          uVar18 = FUN_01b5a9f0(*(undefined8 *)(unaff_x19 + 0x22f8),*(undefined8 *)PTR_DAT_06dc6008)
          ;
          uVar11 = FUN_03219c04(uVar18,unaff_x19 + 0x22f4,0);
          if ((uVar11 & 1) != 0) {
            uVar1 = *(undefined4 *)(unaff_x19 + 0x22f4);
            lVar12 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e65108);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            FUN_021412e4(lVar12,0x2b00,uVar1,0);
            memset((void *)(unaff_x19 + 0x2350),0,0x2e0);
            memset((void *)(unaff_x19 + 0x1720),0,0x2e0);
            memset((void *)(unaff_x19 + 0x2920),0,0x2e8);
            lVar15 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
            if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
              lVar15 = FUN_015c2790();
            }
            uVar10 = *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x10);
            memcpy((void *)(unaff_x19 + 0x2ee8),(void *)(unaff_x19 + 0x1720),0x2e0);
            FUN_041e58e4(unaff_x19 + 0x2920,lVar12,unaff_x19 + 0x2ee8,uVar10);
            memcpy(unaff_x21 + 0x2c,(void *)(unaff_x19 + 0x2920),0x2e8);
            thunk_FUN_01656ef8(unaff_x21 + 0x2c,0);
            goto joined_r0x0216157c;
          }
        }
      }
      memset((void *)(unaff_x19 + 0x2350),0,0x2e0);
      memset((void *)(unaff_x19 + 0x1440),0,0x2e0);
      memset((void *)(unaff_x19 + 0x2920),0,0x2e8);
      lVar12 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_015c2790();
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x10);
      memcpy((void *)(unaff_x19 + 0x2ee8),(void *)(unaff_x19 + 0x1440),0x2e0);
      FUN_041e58e4(unaff_x19 + 0x2920,uVar10,unaff_x19 + 0x2ee8,uVar18);
      memcpy(unaff_x21 + 0x2c,(void *)(unaff_x19 + 0x2920),0x2e8);
      thunk_FUN_01656ef8(unaff_x21 + 0x2c,0);
    }
    else {
      if (unaff_w28 == 6) {
        unaff_w28 = -1;
        *(undefined8 *)(unaff_x19 + 0x22e8) = *(undefined8 *)(unaff_x21 + 0xe6);
        *(undefined8 *)(unaff_x21 + 0xe6) = 0;
        *unaff_x21 = 0xffffffff;
      }
      else {
        if (*(long *)(unaff_x21 + 0x16) == 0) {
          *(long *)(unaff_x19 + 8) = lVar20;
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (99 < *(int *)(*(long *)(unaff_x21 + 0x16) + 0x20) - 200U) {
          lVar12 = FUN_01e373cc(*(undefined8 *)(unaff_x21 + 0x1a),0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          uVar10 = System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                             (lVar12,*(undefined8 *)PTR_DAT_06dce0f0);
          puVar5 = PTR_DAT_06ddd6b0;
          *(undefined8 *)(unaff_x19 + 0x2630) = uVar10;
          uVar11 = FUN_023a8930(unaff_x19 + 0x2630,*(undefined8 *)puVar5);
          if ((uVar11 & 1) == 0) {
            *unaff_x21 = 5;
            *(undefined8 *)(unaff_x21 + 0x12) = *(undefined8 *)(unaff_x19 + 0x2630);
            thunk_FUN_01656ef8(unaff_x21 + 0x12,0);
            if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
              FUN_015c2790();
            }
            System_Collections_Generic_ArraySortHelper<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Default
                      (unaff_x21 + 2,unaff_x19 + 0x2630);
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
        lVar12 = *(long *)puVar5;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_016466fc(lVar12);
          lVar12 = *(long *)puVar5;
        }
        if (*(char *)(*(long *)(lVar12 + 0xb8) + 8) != '\0') {
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_016466fc(lVar12);
          }
          FUN_0214afa8(0,0);
        }
        uVar10 = *(undefined8 *)(unaff_x21 + 0x1a);
        lVar12 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e1b970);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_04515e5c(lVar12,uVar10,0);
        *(long *)(unaff_x21 + 0x1c) = lVar12;
        thunk_FUN_01656ef8(unaff_x21 + 0x1c,lVar12);
        lVar12 = *(long *)(unaff_x21 + 0xc);
        if (lVar12 == 0) {
          *(long *)(unaff_x19 + 8) = lVar20;
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar10 = *(undefined8 *)(unaff_x21 + 0x1c);
        lVar14 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
        uVar3 = *(ushort *)(lVar14 + 0x132);
        lVar15 = lVar14;
        if ((uVar3 & 1) == 0) {
          lVar15 = FUN_015c2790();
          lVar14 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
          uVar3 = *(ushort *)(lVar14 + 0x132);
        }
        pcVar17 = *(code **)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x48) + 8);
        if ((uVar3 & 1) == 0) {
          lVar14 = FUN_015c2790();
        }
        lVar12 = (*pcVar17)(lVar12,uVar10,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x48));
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        lVar14 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
        uVar3 = *(ushort *)(lVar14 + 0x132);
        lVar15 = lVar14;
        if ((uVar3 & 1) == 0) {
          lVar15 = FUN_015c2790();
          lVar14 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
          uVar3 = *(ushort *)(lVar14 + 0x132);
        }
        pcVar17 = *(code **)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x58) + 8);
        if ((uVar3 & 1) == 0) {
          lVar14 = FUN_015c2790();
        }
        uVar10 = (*pcVar17)(lVar12,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x58));
        *(undefined8 *)(unaff_x19 + 0x22e8) = uVar10;
        lVar12 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_015c2790();
        }
        uVar11 = FUN_023a4d1c(unaff_x19 + 0x22e8,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x60));
        if ((uVar11 & 1) == 0) {
          *unaff_x21 = 6;
          *(undefined8 *)(unaff_x21 + 0xe6) = *(undefined8 *)(unaff_x19 + 0x22e8);
          thunk_FUN_01656ef8(unaff_x21 + 0xe6,0);
          if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
            FUN_015c2790();
          }
          FUN_046184a4(unaff_x21 + 2,unaff_x19 + 0x22e8);
          goto LAB_02161fec;
        }
      }
      lVar12 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_015c2790();
      }
      FUN_023a4d60(unaff_x19 + 0x2920,unaff_x19 + 0x22e8,
                   *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x70));
      memcpy((void *)(unaff_x19 + 0x2350),(void *)(unaff_x19 + 0x2920),0x2e0);
      lVar12 = *(long *)PTR_DAT_06dd1ea8;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar12 = *(long *)PTR_DAT_06dd1ea8;
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8);
      memcpy((void *)(unaff_x19 + 0x1160),(void *)(unaff_x19 + 0x2350),0x2e0);
      memset((void *)(unaff_x19 + 0x2920),0,0x2e8);
      lVar12 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_015c2790();
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x10);
      memcpy((void *)(unaff_x19 + 0x2ee8),(void *)(unaff_x19 + 0x1160),0x2e0);
      FUN_041e58e4(unaff_x19 + 0x2920,uVar10,unaff_x19 + 0x2ee8,uVar18);
      memcpy(unaff_x21 + 0x2c,(void *)(unaff_x19 + 0x2920),0x2e8);
      thunk_FUN_01656ef8(unaff_x21 + 0x2c,0);
      if ((unaff_w28 < 0) && (plVar9 = *(long **)(unaff_x21 + 0x1c), plVar9 != (long *)0x0)) {
        lVar15 = *plVar9;
        lVar12 = *(long *)puVar6;
        uVar11 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar11 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar12) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_02161c24;
            }
            uVar11 = uVar11 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar11 != 0);
        }
        puVar13 = (undefined8 *)FUN_015c2a80(plVar9,lVar12,0);
LAB_02161c24:
        (*(code *)*puVar13)(plVar9,puVar13[1]);
      }
    }
joined_r0x0216157c:
    if ((unaff_w28 < 0) && (plVar9 = *(long **)(unaff_x21 + 0x1a), plVar9 != (long *)0x0)) {
      lVar15 = *plVar9;
      lVar12 = *(long *)puVar6;
      uVar11 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar11 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar12) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02161c9c;
          }
          uVar11 = uVar11 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar11 != 0);
      }
      puVar13 = (undefined8 *)FUN_015c2a80(plVar9,lVar12,0);
LAB_02161c9c:
      (*(code *)*puVar13)(plVar9,puVar13[1]);
    }
    unaff_x21[0x2a] = 1;
    plVar9 = *(long **)(unaff_x21 + 0x18);
    if (plVar9 != (long *)0x0) {
      lVar12 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar11 != 0) {
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06d8b348) {
            puVar13 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02161d1c;
          }
          uVar11 = uVar11 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar11 != 0);
      }
      puVar13 = (undefined8 *)FUN_015c2a80(plVar9,*(long *)PTR_DAT_06d8b348,0);
LAB_02161d1c:
      auVar21 = (*(code *)*puVar13)(plVar9,puVar13[1]);
      *(undefined1 (*) [16])(unaff_x19 + 0x22c0) = auVar21;
      auVar21 = FUN_036991cc(unaff_x19 + 0x22c0,0);
      cVar7 = DAT_0722a6b5;
      plVar9 = auVar21._0_8_;
      *(undefined1 (*) [16])(unaff_x19 + 0x22d0) = auVar21;
      if (cVar7 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e52150);
        thunk_FUN_0159f088(PTR_DAT_06dd2198);
        plVar9 = *(long **)(unaff_x19 + 0x22d0);
        DAT_0722a6b5 = '\x01';
      }
      if (plVar9 != (long *)0x0) {
        lVar12 = *plVar9;
        bVar2 = *(byte *)(*(long *)PTR_DAT_06dd2198 + 300);
        if ((*(byte *)(lVar12 + 300) < bVar2) ||
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06dd2198)
           ) {
          uVar4 = *(undefined2 *)(unaff_x19 + 0x22d8);
          uVar11 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06e52150) {
                puVar13 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_02161e10;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar13 = (undefined8 *)FUN_015c2a80(plVar9,*(long *)PTR_DAT_06e52150,0);
LAB_02161e10:
          iVar8 = (*(code *)*puVar13)(plVar9,uVar4,puVar13[1]);
          if (iVar8 == 0) goto LAB_021620c4;
        }
        else {
          uVar11 = FUN_036982e0(plVar9,0);
          if ((uVar11 & 1) == 0) {
LAB_021620c4:
            *unaff_x21 = 7;
            uVar10 = *(undefined8 *)(unaff_x19 + 0x22d0);
            *(undefined8 *)(unaff_x21 + 0xea) = *(undefined8 *)(unaff_x19 + 0x22d8);
            *(undefined8 *)(unaff_x21 + 0xe8) = uVar10;
            thunk_FUN_01656ef8(unaff_x21 + 0xe8,0);
            if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
              FUN_015c2790();
            }
            FUN_04619064(unaff_x21 + 2,unaff_x19 + 0x22d0);
            goto LAB_02161fec;
          }
        }
      }
      if (DAT_0722a6b6 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e52150);
        thunk_FUN_0159f088(PTR_DAT_06dd2198);
        DAT_0722a6b6 = '\x01';
      }
      plVar9 = *(long **)(unaff_x19 + 0x22d0);
      if (plVar9 != (long *)0x0) {
        lVar12 = *plVar9;
        bVar2 = *(byte *)(*(long *)PTR_DAT_06dd2198 + 300);
        if ((*(byte *)(lVar12 + 300) < bVar2) ||
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06dd2198)
           ) {
          uVar4 = *(undefined2 *)(unaff_x19 + 0x22d8);
          uVar11 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06e52150) {
                puVar13 = (undefined8 *)(lVar12 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_02161eec;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar13 = (undefined8 *)FUN_015c2a80(plVar9,*(long *)PTR_DAT_06e52150,2);
LAB_02161eec:
          (*(code *)*puVar13)(plVar9,uVar4,puVar13[1]);
        }
        else {
          FUN_02df6c8c(plVar9,0);
        }
      }
    }
    puVar13 = (undefined8 *)(unaff_x21 + 0x28);
    plVar9 = (long *)*puVar13;
    if (plVar9 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_06e35b40 + 300);
      if ((bVar2 <= *(byte *)(*plVar9 + 300)) &&
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_06e35b40))
      {
        lVar20 = FUN_02df4dd8(plVar9,0);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
                    /* WARNING: Subroutine does not return */
        FUN_02df4ea4(lVar20,0);
      }
      *(long *)(unaff_x19 + 8) = lVar20;
      uVar10 = thunk_FUN_0159f088(PTR_DAT_06dc5a48);
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(plVar9,uVar10);
    }
    if (unaff_x21[0x2a] == 1) {
      __src = unaff_x21 + 0x2c;
      goto LAB_02161f6c;
    }
    *puVar13 = 0;
    thunk_FUN_01656ef8(puVar13,0);
    memset(unaff_x21 + 0x2c,0,0x2e8);
    *(undefined8 *)(unaff_x21 + 0x14) = 0;
    thunk_FUN_01656ef8(unaff_x21 + 0x14,0);
    *(undefined8 *)(unaff_x21 + 0x16) = 0;
    thunk_FUN_01656ef8(unaff_x21 + 0x16,0);
    *(undefined8 *)(unaff_x21 + 0x18) = 0;
    thunk_FUN_01656ef8(unaff_x21 + 0x18,0);
    *(undefined8 *)(unaff_x21 + 0x1a) = 0;
    thunk_FUN_01656ef8(unaff_x21 + 0x1a,0);
    *(undefined8 *)(unaff_x21 + 0x1c) = 0;
    thunk_FUN_01656ef8(unaff_x21 + 0x1c,0);
    *(undefined8 *)(unaff_x21 + 0xe) = 0;
    thunk_FUN_01656ef8(unaff_x21 + 0xe,0);
    *(undefined8 *)(unaff_x21 + 0x10) = 0;
  }
  else {
    memset((void *)(unaff_x19 + 0x2350),0,0x2e0);
    memset((void *)(unaff_x19 + 0x1ce0),0,0x2e0);
    memset((void *)(unaff_x19 + 0x2920),0,0x2e8);
    lVar12 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
      lVar12 = FUN_015c2790();
    }
    uVar18 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x10);
    memcpy((void *)(unaff_x19 + 0x2ee8),(void *)(unaff_x19 + 0x1ce0),0x2e0);
    FUN_041e58e4(unaff_x19 + 0x2920,uVar10,unaff_x19 + 0x2ee8,uVar18);
LAB_02160c04:
    __src = (undefined4 *)(unaff_x19 + 0x2920);
LAB_02161f6c:
    memcpy((void *)(unaff_x19 + 0x2638),__src,0x2e8);
  }
  *unaff_x21 = 0xfffffffe;
  *(undefined8 *)(unaff_x21 + 0xe) = 0;
  thunk_FUN_01656ef8(unaff_x21 + 0xe,0);
  *(undefined8 *)(unaff_x21 + 0x10) = 0;
  memcpy((void *)(unaff_x19 + 0x18),(void *)(unaff_x19 + 0x2638),0x2e8);
  lVar12 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
    lVar12 = FUN_015c2790();
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x88);
  memcpy((void *)(unaff_x19 + 0x2920),(void *)(unaff_x19 + 0x18),0x2e8);
  FUN_0509c5cc(unaff_x21 + 2,unaff_x19 + 0x2920,uVar10);
LAB_02161fec:
  if (*(long *)(lVar20 + 0x28) != *(long *)(unaff_x29 + -0x68)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


