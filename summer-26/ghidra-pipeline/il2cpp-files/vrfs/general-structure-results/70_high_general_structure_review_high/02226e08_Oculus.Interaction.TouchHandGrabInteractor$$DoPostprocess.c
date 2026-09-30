/*
FUNCTION_NAME: Oculus.Interaction.TouchHandGrabInteractor$$DoPostprocess
ENTRY_POINT: 02226e08
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x02227588) */
/* WARNING: Removing unreachable block (ram,0x02227074) */
/* WARNING: Removing unreachable block (ram,0x02226ec4) */
/* WARNING: Removing unreachable block (ram,0x022275a8) */
/* WARNING: Removing unreachable block (ram,0x02227624) */
/* WARNING: Removing unreachable block (ram,0x022270ec) */

void Oculus_Interaction_TouchHandGrabInteractor__DoPostprocess(void)

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
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined4 *__src;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  undefined8 *unaff_x20;
  code *pcVar17;
  undefined4 *unaff_x21;
  long unaff_x22;
  long *plVar18;
  void *unaff_x23;
  undefined8 uVar19;
  undefined8 uVar20;
  long *unaff_x26;
  undefined8 *unaff_x27;
  int unaff_w28;
  long unaff_x29;
  undefined1 auVar21 [16];
  
  while (uVar12 = FUN_04195c54(unaff_x19 + 0x1e40,*unaff_x27), (uVar12 & 1) != 0) {
    uVar19 = *(undefined8 *)(unaff_x19 + 0x1e58);
                    /* try { // try from 02226e20 to 02326e2b has its CatchHandler @ 02226874 */
    uVar20 = *(undefined8 *)(unaff_x19 + 0x1e50);
                    /* try { // try from 02226e2c to 02326e33 has its CatchHandler @ 02226e40 */
    uVar12 = thunk_FUN_0252637c(uVar20,*unaff_x20,0);
                    /* catch() { ... } // from try @ 02226dac with catch @ 02226e34 */
    lVar13 = *unaff_x26;
    if ((uVar12 & 1) == 0) {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar13 = FUN_020a907c(lVar13,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_020b9eb4(lVar13,uVar20,uVar19,0);
    }
    else {
                    /* catch() { ... } // from try @ 02226df8 with catch @ 02226e40
                       catch() { ... } // from try @ 02226e2c with catch @ 02226e40 */
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(long *)(lVar13 + 0x38) != 0) {
        lVar13 = FUN_020a982c(*(long *)(lVar13 + 0x38),0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_020b9eb4(lVar13,uVar20,uVar19,0);
      }
    }
  }
  lVar13 = *(long *)(unaff_x19 + 8);
  if (unaff_w28 < 0) {
    FUN_04195d6c(unaff_x19 + 0x1e40,*(undefined8 *)PTR_DAT_06e0bd20);
  }
  lVar14 = FUN_01e37820();
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  uVar19 = FUN_036985b8(lVar14,0);
  *(undefined8 *)(unaff_x19 + 0x1e38) = uVar19;
  uVar12 = FUN_02df6bb4(unaff_x19 + 0x1e38,0);
  if ((uVar12 & 1) == 0) {
    *unaff_x21 = 1;
    *(undefined8 *)(unaff_x21 + 0x1e) = *(undefined8 *)(unaff_x19 + 0x1e38);
    thunk_FUN_01656ef8(unaff_x21 + 0x1e,0);
    if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
      FUN_015c2790();
    }
    FUN_04dcafa4(unaff_x21 + 2,unaff_x19 + 0x1e38);
    goto switchD_02227bf8_default;
  }
  FUN_02df6c84(unaff_x19 + 0x1e38,0);
  puVar5 = PTR_DAT_06e49bc0;
  if (unaff_x22 == 0) {
    *(long *)(unaff_x19 + 8) = lVar13;
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  plVar9 = *(long **)(unaff_x22 + 0x10);
  if (plVar9 == (long *)0x0) {
                    /* try { // try from 022275d8 to 023275e7 has its CatchHandler @ 0222776c */
    *(long *)(unaff_x19 + 8) = lVar13;
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar14 = (**(code **)(*plVar9 + 0x198))
                     (plVar9,*(undefined8 *)(unaff_x21 + 0x14),*(undefined8 *)(unaff_x21 + 0x10),
                      *(undefined8 *)(*plVar9 + 0x1a0));
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  uVar19 = System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                     (lVar14,*(undefined8 *)PTR_DAT_06dfc458);
  puVar6 = PTR_DAT_06e34ea0;
  *(undefined8 *)(unaff_x19 + 0x1e30) = uVar19;
  uVar12 = FUN_023a8930(unaff_x19 + 0x1e30,*(undefined8 *)puVar6);
  if ((uVar12 & 1) == 0) {
    *unaff_x21 = 2;
    *(undefined8 *)(unaff_x21 + 0x20) = *(undefined8 *)(unaff_x19 + 0x1e30);
    thunk_FUN_01656ef8(unaff_x21 + 0x20,0);
    if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
      FUN_015c2790();
    }
    FUN_04dcac48(unaff_x21 + 2,unaff_x19 + 0x1e30);
    goto switchD_02227bf8_default;
  }
  lVar14 = FUN_023a8974(unaff_x19 + 0x1e30,*(undefined8 *)PTR_DAT_06e3f548);
  plVar9 = (long *)(unaff_x21 + 0x16);
  *plVar9 = lVar14;
  thunk_FUN_01656ef8(plVar9);
  if (*plVar9 == 0) {
    *(long *)(unaff_x19 + 8) = lVar13;
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if (*(int *)(*plVar9 + 0x20) == 0xcc) {
    FUN_0371409c(unaff_x21 + 0x10,0);
    lVar14 = *(long *)PTR_DAT_06dd1ea8;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar14 = *(long *)PTR_DAT_06dd1ea8;
    }
    uVar20 = *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8);
    uVar19 = *(undefined8 *)PTR_DAT_06e00550;
    *(undefined1 *)(unaff_x19 + 0x25e8) = 0;
    plVar9 = (long *)thunk_FUN_015d01b0(uVar19,unaff_x19 + 0x25e8);
    lVar14 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
      lVar14 = FUN_015c2790();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x28);
    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
      lVar14 = FUN_015c2790(lVar14);
    }
    if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)(lVar14 + 0x40))) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(plVar9);
    }
    thunk_FUN_015d06d0(plVar9,lVar14);
    memset((void *)(unaff_x19 + 0x2368),0,0x280);
    memcpy((void *)(unaff_x19 + 0x1658),unaff_x23,0x278);
    lVar14 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
      lVar14 = FUN_015c2790();
    }
    uVar19 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x10);
    memcpy((void *)(unaff_x19 + 0x2860),(void *)(unaff_x19 + 0x1658),0x278);
    FUN_041dee70(unaff_x19 + 0x2368,uVar20,unaff_x19 + 0x2860,uVar19);
    __src = (undefined4 *)(unaff_x19 + 0x2368);
LAB_02227394:
    memcpy((void *)(unaff_x19 + 0x20e8),__src,0x280);
  }
  else {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if (DAT_0722a6b4 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e49bc0);
      DAT_0722a6b4 = '\x01';
    }
    lVar14 = *(long *)puVar5;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar14 = *(long *)puVar5;
    }
    plVar18 = (long *)(unaff_x21 + 0x22);
    *plVar18 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
    thunk_FUN_01656ef8(plVar18);
    if (*plVar18 != 0) {
      if (*plVar9 == 0) {
        *(long *)(unaff_x19 + 8) = lVar13;
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar14 = *(long *)(*plVar9 + 0x38);
      if (lVar14 == 0) {
        *(long *)(unaff_x19 + 8) = lVar13;
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar14 = FUN_020ae074(lVar14,0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar19 = System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                         (lVar14,*(undefined8 *)PTR_DAT_06e66270);
      puVar5 = PTR_DAT_06e4e9c0;
      *(undefined8 *)(unaff_x19 + 0x1e28) = uVar19;
      uVar12 = FUN_023a8930(unaff_x19 + 0x1e28,*(undefined8 *)puVar5);
      if ((uVar12 & 1) == 0) {
        *unaff_x21 = 3;
        *(undefined8 *)(unaff_x21 + 0x24) = *(undefined8 *)(unaff_x19 + 0x1e28);
        thunk_FUN_01656ef8(unaff_x21 + 0x24,0);
        if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
          FUN_015c2790();
        }
        FUN_04dcac48(unaff_x21 + 2,unaff_x19 + 0x1e28);
        goto switchD_02227bf8_default;
      }
      uVar19 = FUN_023a8974(unaff_x19 + 0x1e28,*(undefined8 *)PTR_DAT_06da9ed8);
      if (*(long *)(unaff_x21 + 0x22) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4(0,uVar19);
      }
      FUN_017de714(*(long *)(unaff_x21 + 0x22),uVar19,0);
    }
    *(undefined8 *)(unaff_x21 + 0x22) = 0;
    thunk_FUN_01656ef8(unaff_x21 + 0x22,0);
    if (*(long *)(unaff_x21 + 0x16) == 0) {
      *(long *)(unaff_x19 + 8) = lVar13;
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar14 = *(long *)(*(long *)(unaff_x21 + 0x16) + 0x38);
    if (lVar14 == 0) {
      *(long *)(unaff_x19 + 8) = lVar13;
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar14 = FUN_020adf5c(lVar14,0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar19 = System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                       (lVar14,*(undefined8 *)PTR_DAT_06de4320);
    puVar5 = PTR_DAT_06de71e8;
    *(undefined8 *)(unaff_x19 + 0x1e20) = uVar19;
    uVar12 = FUN_023a8930(unaff_x19 + 0x1e20,*(undefined8 *)puVar5);
    if ((uVar12 & 1) == 0) {
      *unaff_x21 = 4;
      *(undefined8 *)(unaff_x21 + 0x26) = *(undefined8 *)(unaff_x19 + 0x1e20);
      thunk_FUN_01656ef8(unaff_x21 + 0x26,0);
      if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
        FUN_015c2790();
      }
      FUN_04dcac48(unaff_x21 + 2,unaff_x19 + 0x1e20);
      goto switchD_02227bf8_default;
    }
    uVar19 = FUN_023a8974(unaff_x19 + 0x1e20,*(undefined8 *)PTR_DAT_06de5458);
    *(undefined8 *)(unaff_x21 + 0x18) = uVar19;
    thunk_FUN_01656ef8();
    *(undefined8 *)(unaff_x21 + 0x28) = 0;
    thunk_FUN_01656ef8(unaff_x21 + 0x28,0);
    unaff_x21[0x2a] = 0;
    if (1 < unaff_w28 - 5U) {
      uVar19 = *(undefined8 *)(unaff_x21 + 0x18);
      lVar14 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e2af70);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_0361cdb8(lVar14,uVar19,0);
      *(long *)(unaff_x21 + 0x1a) = lVar14;
      thunk_FUN_01656ef8(unaff_x21 + 0x1a,lVar14);
    }
    puVar6 = PTR_DAT_06e636c0;
    puVar5 = PTR_DAT_06e5eb78;
    if (unaff_w28 == 5) {
      unaff_w28 = -1;
      *(undefined8 *)(unaff_x19 + 0x20e0) = *(undefined8 *)(unaff_x21 + 0x12);
      *(undefined8 *)(unaff_x21 + 0x12) = 0;
      *unaff_x21 = 0xffffffff;
LAB_02226774:
      uVar19 = FUN_023a8974(unaff_x19 + 0x20e0,*(undefined8 *)PTR_DAT_06d9e7e0);
      FUN_0371409c(unaff_x21 + 0x10,0);
      lVar14 = *(long *)(unaff_x21 + 0x16);
      if (lVar14 == 0) {
        *(long *)(unaff_x19 + 8) = lVar13;
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(int *)(lVar14 + 0x20) == 0x1ad) {
        lVar14 = FUN_020a98a8(lVar14,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar12 = FUN_020babbc(lVar14,*(undefined8 *)PTR_DAT_06de4840,unaff_x19 + 0x1e18,0);
        if ((uVar12 & 1) != 0) {
          uVar20 = FUN_01b5a9f0(*(undefined8 *)(unaff_x19 + 0x1e18),*(undefined8 *)PTR_DAT_06dc6008)
          ;
          uVar12 = FUN_03219c04(uVar20,unaff_x19 + 0x1e14,0);
          if ((uVar12 & 1) != 0) {
            uVar1 = *(undefined4 *)(unaff_x19 + 0x1e14);
            lVar14 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e65108);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            FUN_021412e4(lVar14,0x2b00,uVar1,0);
            memset((void *)(unaff_x19 + 0x1e68),0,0x278);
            memset((void *)(unaff_x19 + 0x13e0),0,0x278);
            memset((void *)(unaff_x19 + 0x2368),0,0x280);
            lVar15 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
            if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
              lVar15 = FUN_015c2790();
            }
            uVar19 = *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x10);
            memcpy((void *)(unaff_x19 + 0x2860),(void *)(unaff_x19 + 0x13e0),0x278);
            FUN_041dee70(unaff_x19 + 0x2368,lVar14,unaff_x19 + 0x2860,uVar19);
            memcpy(unaff_x21 + 0x2c,(void *)(unaff_x19 + 0x2368),0x280);
            thunk_FUN_01656ef8(unaff_x21 + 0x2c,0);
            goto joined_r0x022269a4;
          }
        }
      }
      memset((void *)(unaff_x19 + 0x1e68),0,0x278);
      memset((void *)(unaff_x19 + 0x1168),0,0x278);
      memset((void *)(unaff_x19 + 0x2368),0,0x280);
      lVar14 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
      if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
        lVar14 = FUN_015c2790();
      }
      uVar20 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x10);
      memcpy((void *)(unaff_x19 + 0x2860),(void *)(unaff_x19 + 0x1168),0x278);
      FUN_041dee70(unaff_x19 + 0x2368,uVar19,unaff_x19 + 0x2860,uVar20);
      memcpy(unaff_x21 + 0x2c,(void *)(unaff_x19 + 0x2368),0x280);
      thunk_FUN_01656ef8(unaff_x21 + 0x2c,0);
    }
    else {
      if (unaff_w28 == 6) {
        unaff_w28 = -1;
        *(undefined8 *)(unaff_x19 + 0x1e08) = *(undefined8 *)(unaff_x21 + 0xcc);
        *(undefined8 *)(unaff_x21 + 0xcc) = 0;
        *unaff_x21 = 0xffffffff;
      }
      else {
        if (*(long *)(unaff_x21 + 0x16) == 0) {
          *(long *)(unaff_x19 + 8) = lVar13;
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (99 < *(int *)(*(long *)(unaff_x21 + 0x16) + 0x20) - 200U) {
          lVar14 = FUN_01e373cc(*(undefined8 *)(unaff_x21 + 0x1a),0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          uVar19 = System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                             (lVar14,*(undefined8 *)PTR_DAT_06dce0f0);
          puVar5 = PTR_DAT_06ddd6b0;
          *(undefined8 *)(unaff_x19 + 0x20e0) = uVar19;
          uVar12 = FUN_023a8930(unaff_x19 + 0x20e0,*(undefined8 *)puVar5);
          if ((uVar12 & 1) == 0) {
            *unaff_x21 = 5;
            *(undefined8 *)(unaff_x21 + 0x12) = *(undefined8 *)(unaff_x19 + 0x20e0);
            thunk_FUN_01656ef8(unaff_x21 + 0x12,0);
            if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
              FUN_015c2790();
            }
            FUN_04dcac48(unaff_x21 + 2,unaff_x19 + 0x20e0);
            goto switchD_02227bf8_default;
          }
          goto LAB_02226774;
        }
        if (*(int *)(*(long *)PTR_DAT_06e5eb78 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        if (cRam000000000722b71c == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e5eb78);
          cRam000000000722b71c = '\x01';
        }
        lVar14 = *(long *)puVar5;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_016466fc(lVar14);
          lVar14 = *(long *)puVar5;
        }
        if (*(char *)(*(long *)(lVar14 + 0xb8) + 8) != '\0') {
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_016466fc(lVar14);
          }
          FUN_0214afa8(0,0);
        }
        uVar19 = *(undefined8 *)(unaff_x21 + 0x1a);
        lVar14 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e1b970);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_04515e5c(lVar14,uVar19,0);
        *(long *)(unaff_x21 + 0x1c) = lVar14;
        thunk_FUN_01656ef8(unaff_x21 + 0x1c,lVar14);
        lVar14 = *(long *)(unaff_x21 + 0xc);
        if (lVar14 == 0) {
          *(long *)(unaff_x19 + 8) = lVar13;
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar19 = *(undefined8 *)(unaff_x21 + 0x1c);
        lVar11 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
        uVar3 = *(ushort *)(lVar11 + 0x132);
        lVar15 = lVar11;
        if ((uVar3 & 1) == 0) {
          lVar15 = FUN_015c2790();
          lVar11 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
          uVar3 = *(ushort *)(lVar11 + 0x132);
        }
        pcVar17 = *(code **)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x48) + 8);
        if ((uVar3 & 1) == 0) {
          lVar11 = FUN_015c2790();
        }
        lVar14 = (*pcVar17)(lVar14,uVar19,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x48));
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        lVar11 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
        uVar3 = *(ushort *)(lVar11 + 0x132);
        lVar15 = lVar11;
        if ((uVar3 & 1) == 0) {
          lVar15 = FUN_015c2790();
          lVar11 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
          uVar3 = *(ushort *)(lVar11 + 0x132);
        }
        pcVar17 = *(code **)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x58) + 8);
        if ((uVar3 & 1) == 0) {
          lVar11 = FUN_015c2790();
        }
        uVar19 = (*pcVar17)(lVar14,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x58));
        *(undefined8 *)(unaff_x19 + 0x1e08) = uVar19;
        lVar14 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
        if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
          lVar14 = FUN_015c2790();
        }
        uVar12 = FUN_023a4764(unaff_x19 + 0x1e08,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x60));
        if ((uVar12 & 1) == 0) {
          *unaff_x21 = 6;
          *(undefined8 *)(unaff_x21 + 0xcc) = *(undefined8 *)(unaff_x19 + 0x1e08);
          thunk_FUN_01656ef8(unaff_x21 + 0xcc,0);
          if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
            FUN_015c2790();
          }
          FUN_04dca22c(unaff_x21 + 2,unaff_x19 + 0x1e08);
          goto switchD_02227bf8_default;
        }
      }
      lVar14 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
      if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
        lVar14 = FUN_015c2790();
      }
      FUN_023a47a8(unaff_x19 + 0x2368,unaff_x19 + 0x1e08,
                   *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x70));
      memcpy((void *)(unaff_x19 + 0x1e68),(void *)(unaff_x19 + 0x2368),0x278);
      lVar14 = *(long *)PTR_DAT_06dd1ea8;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar14 = *(long *)PTR_DAT_06dd1ea8;
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8);
      memcpy((void *)(unaff_x19 + 0xef0),(void *)(unaff_x19 + 0x1e68),0x278);
      memset((void *)(unaff_x19 + 0x2368),0,0x280);
      lVar14 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
      if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
        lVar14 = FUN_015c2790();
      }
      uVar20 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x10);
      memcpy((void *)(unaff_x19 + 0x2860),(void *)(unaff_x19 + 0xef0),0x278);
      FUN_041dee70(unaff_x19 + 0x2368,uVar19,unaff_x19 + 0x2860,uVar20);
      memcpy(unaff_x21 + 0x2c,(void *)(unaff_x19 + 0x2368),0x280);
      thunk_FUN_01656ef8(unaff_x21 + 0x2c,0);
      if ((unaff_w28 < 0) && (plVar9 = *(long **)(unaff_x21 + 0x1c), plVar9 != (long *)0x0)) {
        lVar15 = *plVar9;
        lVar14 = *(long *)puVar6;
        uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar14) {
              puVar10 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0222705c;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar12 != 0);
        }
        puVar10 = (undefined8 *)FUN_015c2a80(plVar9,lVar14,0);
LAB_0222705c:
        (*(code *)*puVar10)(plVar9,puVar10[1]);
      }
    }
joined_r0x022269a4:
    if ((unaff_w28 < 0) && (plVar9 = *(long **)(unaff_x21 + 0x1a), plVar9 != (long *)0x0)) {
      lVar15 = *plVar9;
      lVar14 = *(long *)puVar6;
      uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar14) {
            puVar10 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_022270d4;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_015c2a80(plVar9,lVar14,0);
LAB_022270d4:
      (*(code *)*puVar10)(plVar9,puVar10[1]);
    }
    unaff_x21[0x2a] = 1;
    plVar9 = *(long **)(unaff_x21 + 0x18);
    if (plVar9 != (long *)0x0) {
      lVar14 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06d8b348) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02227154;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_015c2a80(plVar9,*(long *)PTR_DAT_06d8b348,0);
LAB_02227154:
      auVar21 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      *(undefined1 (*) [16])(unaff_x19 + 0x1de0) = auVar21;
      auVar21 = FUN_036991cc(unaff_x19 + 0x1de0,0);
      cVar7 = DAT_0722a6b5;
      plVar9 = auVar21._0_8_;
      *(undefined1 (*) [16])(unaff_x19 + 0x1df0) = auVar21;
      if (cVar7 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e52150);
        thunk_FUN_0159f088(PTR_DAT_06dd2198);
        plVar9 = *(long **)(unaff_x19 + 0x1df0);
        DAT_0722a6b5 = '\x01';
      }
      if (plVar9 != (long *)0x0) {
        lVar14 = *plVar9;
        bVar2 = *(byte *)(*(long *)PTR_DAT_06dd2198 + 300);
        if ((*(byte *)(lVar14 + 300) < bVar2) ||
           (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06dd2198)
           ) {
          uVar4 = *(undefined2 *)(unaff_x19 + 0x1df8);
          uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar12 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06e52150) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_02227240;
              }
              uVar12 = uVar12 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar12 != 0);
          }
          puVar10 = (undefined8 *)FUN_015c2a80(plVar9,*(long *)PTR_DAT_06e52150,0);
LAB_02227240:
          iVar8 = (*(code *)*puVar10)(plVar9,uVar4,puVar10[1]);
          if (iVar8 == 0) goto LAB_022274ec;
        }
        else {
          uVar12 = FUN_036982e0(plVar9,0);
          if ((uVar12 & 1) == 0) {
LAB_022274ec:
            *unaff_x21 = 7;
            uVar19 = *(undefined8 *)(unaff_x19 + 0x1df0);
            *(undefined8 *)(unaff_x21 + 0xd0) = *(undefined8 *)(unaff_x19 + 0x1df8);
            *(undefined8 *)(unaff_x21 + 0xce) = uVar19;
            thunk_FUN_01656ef8(unaff_x21 + 0xce,0);
            if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
              FUN_015c2790();
            }
            TMPro_TMP_Text__PopulateTextBackingArray(unaff_x21 + 2,unaff_x19 + 0x1df0);
            goto switchD_02227bf8_default;
          }
        }
      }
      if (DAT_0722a6b6 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e52150);
        thunk_FUN_0159f088(PTR_DAT_06dd2198);
        DAT_0722a6b6 = '\x01';
      }
      plVar9 = *(long **)(unaff_x19 + 0x1df0);
      if (plVar9 != (long *)0x0) {
        lVar14 = *plVar9;
        bVar2 = *(byte *)(*(long *)PTR_DAT_06dd2198 + 300);
        if ((*(byte *)(lVar14 + 300) < bVar2) ||
           (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06dd2198)
           ) {
          uVar4 = *(undefined2 *)(unaff_x19 + 0x1df8);
          uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar12 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06e52150) {
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_02227314;
              }
              uVar12 = uVar12 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar12 != 0);
          }
          puVar10 = (undefined8 *)FUN_015c2a80(plVar9,*(long *)PTR_DAT_06e52150,2);
LAB_02227314:
          (*(code *)*puVar10)(plVar9,uVar4,puVar10[1]);
        }
        else {
          FUN_02df6c8c(plVar9,0);
        }
      }
    }
    puVar10 = (undefined8 *)(unaff_x21 + 0x28);
    plVar9 = (long *)*puVar10;
    if (plVar9 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_06e35b40 + 300);
      if ((bVar2 <= *(byte *)(*plVar9 + 300)) &&
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_06e35b40))
      {
        lVar13 = FUN_02df4dd8(plVar9,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
                    /* WARNING: Subroutine does not return */
        FUN_02df4ea4(lVar13,0);
      }
      *(long *)(unaff_x19 + 8) = lVar13;
      uVar19 = thunk_FUN_0159f088(PTR_DAT_06de3968);
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(plVar9,uVar19);
    }
    if (unaff_x21[0x2a] == 1) {
      __src = unaff_x21 + 0x2c;
      goto LAB_02227394;
    }
    *puVar10 = 0;
    thunk_FUN_01656ef8(puVar10,0);
    memset(unaff_x21 + 0x2c,0,0x280);
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
  *unaff_x21 = 0xfffffffe;
  *(undefined8 *)(unaff_x21 + 0xe) = 0;
  thunk_FUN_01656ef8(unaff_x21 + 0xe,0);
  *(undefined8 *)(unaff_x21 + 0x10) = 0;
  memcpy((void *)(unaff_x19 + 0x18),(void *)(unaff_x19 + 0x20e8),0x280);
  lVar14 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
  if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
    lVar14 = FUN_015c2790();
  }
  uVar19 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x88);
  memcpy((void *)(unaff_x19 + 0x2368),(void *)(unaff_x19 + 0x18),0x280);
  FUN_05094f00(unaff_x21 + 2,unaff_x19 + 0x2368,uVar19);
switchD_02227bf8_default:
  if (*(long *)(lVar13 + 0x28) != *(long *)(unaff_x29 + -0x68)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


