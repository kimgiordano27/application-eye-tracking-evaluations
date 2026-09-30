/*
FUNCTION_NAME: Oculus.Interaction.SnapInteractor$$DoHoverUpdate
ENTRY_POINT: 022239fc
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x02224e38) */
/* WARNING: Removing unreachable block (ram,0x02224928) */
/* WARNING: Removing unreachable block (ram,0x02224e58) */
/* WARNING: Removing unreachable block (ram,0x022249a0) */

void Oculus_Interaction_SnapInteractor__DoHoverUpdate(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined4 *__src;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long *unaff_x20;
  code *pcVar17;
  undefined4 *unaff_x21;
  void *unaff_x23;
  long *plVar18;
  undefined8 uVar19;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  undefined1 auVar20 [16];
  
  *(undefined8 *)(unaff_x19 + 0x10b0) = param_2;
  uVar9 = FUN_023a8930(unaff_x19 + 0x10b0,*param_1);
  if ((uVar9 & 1) == 0) {
    *unaff_x21 = 2;
    *(undefined8 *)(unaff_x21 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10b0);
    thunk_FUN_01656ef8(unaff_x21 + 0x20,0);
    if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
      FUN_015c2790();
    }
    FUN_04dc91a4(unaff_x21 + 2,unaff_x19 + 0x10b0);
    goto LAB_02224cc8;
  }
  lVar10 = FUN_023a8974(unaff_x19 + 0x10b0,*(undefined8 *)PTR_DAT_06e3f548);
  plVar12 = (long *)(unaff_x21 + 0x16);
  *plVar12 = lVar10;
  thunk_FUN_01656ef8(plVar12);
  if (*plVar12 == 0) {
    *(long *)(unaff_x19 + 8) = unaff_x27;
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if (*(int *)(*plVar12 + 0x20) == 0xcc) {
    FUN_0371409c(unaff_x21 + 0x10,0);
    lVar10 = *(long *)PTR_DAT_06dd1ea8;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar10 = *(long *)PTR_DAT_06dd1ea8;
    }
    uVar19 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
    uVar11 = *(undefined8 *)PTR_DAT_06e00550;
    *(undefined1 *)(unaff_x19 + 0x1508) = 0;
    plVar12 = (long *)thunk_FUN_015d01b0(uVar11,unaff_x19 + 0x1508);
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_015c2790();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_015c2790(lVar10);
    }
    if ((plVar12 != (long *)0x0) && (*plVar12 != *(long *)(lVar10 + 0x40))) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(plVar12);
    }
    thunk_FUN_015d06d0(plVar12,lVar10);
    memset((void *)(unaff_x19 + 0x13a8),0,0x160);
    memcpy((void *)(unaff_x19 + 0xc38),unaff_x23,0x158);
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_015c2790();
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x10);
    memcpy((void *)(unaff_x19 + 0x1660),(void *)(unaff_x19 + 0xc38),0x158);
    FUN_041ddca0(unaff_x19 + 0x13a8,uVar19,unaff_x19 + 0x1660,uVar11);
    __src = (undefined4 *)(unaff_x19 + 0x13a8);
LAB_02224c48:
    memcpy((void *)(unaff_x19 + 0x1248),__src,0x160);
  }
  else {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if (DAT_0722a6b4 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e49bc0);
      DAT_0722a6b4 = '\x01';
    }
    lVar10 = *unaff_x20;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar10 = *unaff_x20;
    }
    plVar18 = (long *)(unaff_x21 + 0x22);
    *plVar18 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
    thunk_FUN_01656ef8(plVar18);
    if (*plVar18 != 0) {
      if (*plVar12 == 0) {
        *(long *)(unaff_x19 + 8) = unaff_x27;
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar10 = *(long *)(*plVar12 + 0x38);
      if (lVar10 == 0) {
        *(long *)(unaff_x19 + 8) = unaff_x27;
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar10 = FUN_020ae074(lVar10,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar11 = System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                         (lVar10,*(undefined8 *)PTR_DAT_06e66270);
      puVar5 = PTR_DAT_06e4e9c0;
      *(undefined8 *)(unaff_x19 + 0x10a8) = uVar11;
      uVar9 = FUN_023a8930(unaff_x19 + 0x10a8,*(undefined8 *)puVar5);
      if ((uVar9 & 1) == 0) {
        *unaff_x21 = 3;
        *(undefined8 *)(unaff_x21 + 0x24) = *(undefined8 *)(unaff_x19 + 0x10a8);
        thunk_FUN_01656ef8(unaff_x21 + 0x24,0);
        if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
          FUN_015c2790();
        }
        FUN_04dc91a4(unaff_x21 + 2,unaff_x19 + 0x10a8);
        goto LAB_02224cc8;
      }
      uVar11 = FUN_023a8974(unaff_x19 + 0x10a8,*(undefined8 *)PTR_DAT_06da9ed8);
      if (*(long *)(unaff_x21 + 0x22) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4(0,uVar11);
      }
      FUN_017de714(*(long *)(unaff_x21 + 0x22),uVar11,0);
    }
    *(undefined8 *)(unaff_x21 + 0x22) = 0;
    thunk_FUN_01656ef8(unaff_x21 + 0x22,0);
    if (*(long *)(unaff_x21 + 0x16) == 0) {
      *(long *)(unaff_x19 + 8) = unaff_x27;
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar10 = *(long *)(*(long *)(unaff_x21 + 0x16) + 0x38);
    if (lVar10 == 0) {
      *(long *)(unaff_x19 + 8) = unaff_x27;
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar10 = FUN_020adf5c(lVar10,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar11 = System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                       (lVar10,*(undefined8 *)PTR_DAT_06de4320);
    puVar5 = PTR_DAT_06de71e8;
    *(undefined8 *)(unaff_x19 + 0x10a0) = uVar11;
    uVar9 = FUN_023a8930(unaff_x19 + 0x10a0,*(undefined8 *)puVar5);
    if ((uVar9 & 1) == 0) {
      *unaff_x21 = 4;
      *(undefined8 *)(unaff_x21 + 0x26) = *(undefined8 *)(unaff_x19 + 0x10a0);
      thunk_FUN_01656ef8(unaff_x21 + 0x26,0);
      if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
        FUN_015c2790();
      }
      FUN_04dc91a4(unaff_x21 + 2,unaff_x19 + 0x10a0);
      goto LAB_02224cc8;
    }
    uVar11 = FUN_023a8974(unaff_x19 + 0x10a0,*(undefined8 *)PTR_DAT_06de5458);
    *(undefined8 *)(unaff_x21 + 0x18) = uVar11;
    thunk_FUN_01656ef8();
    *(undefined8 *)(unaff_x21 + 0x28) = 0;
    thunk_FUN_01656ef8(unaff_x21 + 0x28,0);
    unaff_x21[0x2a] = 0;
    if (1 < unaff_w28 - 5U) {
      uVar11 = *(undefined8 *)(unaff_x21 + 0x18);
      lVar10 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e2af70);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_0361cdb8(lVar10,uVar11,0);
      *(long *)(unaff_x21 + 0x1a) = lVar10;
      thunk_FUN_01656ef8(unaff_x21 + 0x1a,lVar10);
    }
    puVar6 = PTR_DAT_06e636c0;
    puVar5 = PTR_DAT_06e5eb78;
    if (unaff_w28 == 5) {
      unaff_w28 = -1;
      *(undefined8 *)(unaff_x19 + 0x1240) = *(undefined8 *)(unaff_x21 + 0x12);
      *(undefined8 *)(unaff_x21 + 0x12) = 0;
      *unaff_x21 = 0xffffffff;
LAB_02224038:
      uVar11 = FUN_023a8974(unaff_x19 + 0x1240,*(undefined8 *)PTR_DAT_06d9e7e0);
      FUN_0371409c(unaff_x21 + 0x10,0);
      lVar10 = *(long *)(unaff_x21 + 0x16);
      if (lVar10 == 0) {
        *(long *)(unaff_x19 + 8) = unaff_x27;
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(int *)(lVar10 + 0x20) == 0x1ad) {
        lVar10 = FUN_020a98a8(lVar10,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar9 = FUN_020babbc(lVar10,*(undefined8 *)PTR_DAT_06de4840,unaff_x19 + 0x1098,0);
        if ((uVar9 & 1) != 0) {
          uVar19 = FUN_01b5a9f0(*(undefined8 *)(unaff_x19 + 0x1098),*(undefined8 *)PTR_DAT_06dc6008)
          ;
          uVar9 = FUN_03219c04(uVar19,unaff_x19 + 0x1094,0);
          if ((uVar9 & 1) != 0) {
            uVar1 = *(undefined4 *)(unaff_x19 + 0x1094);
            lVar10 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e65108);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            FUN_021412e4(lVar10,0x2b00,uVar1,0);
            memset((void *)(unaff_x19 + 0x10e8),0,0x158);
            memset((void *)(unaff_x19 + 0xae0),0,0x158);
            memset((void *)(unaff_x19 + 0x13a8),0,0x160);
            lVar15 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
            if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
              lVar15 = FUN_015c2790();
            }
            uVar11 = *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x10);
            memcpy((void *)(unaff_x19 + 0x1660),(void *)(unaff_x19 + 0xae0),0x158);
            FUN_041ddca0(unaff_x19 + 0x13a8,lVar10,unaff_x19 + 0x1660,uVar11);
            memcpy(unaff_x21 + 0x2c,(void *)(unaff_x19 + 0x13a8),0x160);
            thunk_FUN_01656ef8(unaff_x21 + 0x2c,0);
            goto joined_r0x02224258;
          }
        }
      }
      memset((void *)(unaff_x19 + 0x10e8),0,0x158);
      memset((void *)(unaff_x19 + 0x988),0,0x158);
      memset((void *)(unaff_x19 + 0x13a8),0,0x160);
      lVar10 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_015c2790();
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x10);
      memcpy((void *)(unaff_x19 + 0x1660),(void *)(unaff_x19 + 0x988),0x158);
      FUN_041ddca0(unaff_x19 + 0x13a8,uVar11,unaff_x19 + 0x1660,uVar19);
      memcpy(unaff_x21 + 0x2c,(void *)(unaff_x19 + 0x13a8),0x160);
      thunk_FUN_01656ef8(unaff_x21 + 0x2c,0);
    }
    else {
      if (unaff_w28 == 6) {
        unaff_w28 = -1;
        *(undefined8 *)(unaff_x19 + 0x1088) = *(undefined8 *)(unaff_x21 + 0x84);
        *(undefined8 *)(unaff_x21 + 0x84) = 0;
        *unaff_x21 = 0xffffffff;
      }
      else {
        if (*(long *)(unaff_x21 + 0x16) == 0) {
          *(long *)(unaff_x19 + 8) = unaff_x27;
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (99 < *(int *)(*(long *)(unaff_x21 + 0x16) + 0x20) - 200U) {
          lVar10 = FUN_01e373cc(*(undefined8 *)(unaff_x21 + 0x1a),0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          uVar11 = System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                             (lVar10,*(undefined8 *)PTR_DAT_06dce0f0);
          puVar5 = PTR_DAT_06ddd6b0;
          *(undefined8 *)(unaff_x19 + 0x1240) = uVar11;
          uVar9 = FUN_023a8930(unaff_x19 + 0x1240,*(undefined8 *)puVar5);
          if ((uVar9 & 1) == 0) {
            *unaff_x21 = 5;
            *(undefined8 *)(unaff_x21 + 0x12) = *(undefined8 *)(unaff_x19 + 0x1240);
            thunk_FUN_01656ef8(unaff_x21 + 0x12,0);
            if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
              FUN_015c2790();
            }
            FUN_04dc91a4(unaff_x21 + 2,unaff_x19 + 0x1240);
            goto LAB_02224cc8;
          }
          goto LAB_02224038;
        }
        if (*(int *)(*(long *)PTR_DAT_06e5eb78 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        if (cRam000000000722b71c == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e5eb78);
          cRam000000000722b71c = '\x01';
        }
        lVar10 = *(long *)puVar5;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_016466fc(lVar10);
          lVar10 = *(long *)puVar5;
        }
        if (*(char *)(*(long *)(lVar10 + 0xb8) + 8) != '\0') {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_016466fc(lVar10);
          }
          FUN_0214afa8(0,0);
        }
        uVar11 = *(undefined8 *)(unaff_x21 + 0x1a);
        lVar10 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e1b970);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_04515e5c(lVar10,uVar11,0);
        *(long *)(unaff_x21 + 0x1c) = lVar10;
        thunk_FUN_01656ef8(unaff_x21 + 0x1c,lVar10);
        lVar10 = *(long *)(unaff_x21 + 0xc);
        if (lVar10 == 0) {
          *(long *)(unaff_x19 + 8) = unaff_x27;
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar11 = *(undefined8 *)(unaff_x21 + 0x1c);
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
        lVar10 = (*pcVar17)(lVar10,uVar11,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x48));
        if (lVar10 == 0) {
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
        uVar11 = (*pcVar17)(lVar10,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x58));
        *(undefined8 *)(unaff_x19 + 0x1088) = uVar11;
        lVar10 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
          lVar10 = FUN_015c2790();
        }
        uVar9 = FUN_023a466c(unaff_x19 + 0x1088,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x60));
        if ((uVar9 & 1) == 0) {
          *unaff_x21 = 6;
          *(undefined8 *)(unaff_x21 + 0x84) = *(undefined8 *)(unaff_x19 + 0x1088);
          thunk_FUN_01656ef8(unaff_x21 + 0x84,0);
          if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
            FUN_015c2790();
          }
          FUN_04dc841c(unaff_x21 + 2,unaff_x19 + 0x1088);
          goto LAB_02224cc8;
        }
      }
      lVar10 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_015c2790();
      }
      FUN_023a46b0(unaff_x19 + 0x13a8,unaff_x19 + 0x1088,
                   *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x70));
      memcpy((void *)(unaff_x19 + 0x10e8),(void *)(unaff_x19 + 0x13a8),0x158);
      lVar10 = *(long *)PTR_DAT_06dd1ea8;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar10 = *(long *)PTR_DAT_06dd1ea8;
      }
      uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
      memcpy((void *)(unaff_x19 + 0x830),(void *)(unaff_x19 + 0x10e8),0x158);
      memset((void *)(unaff_x19 + 0x13a8),0,0x160);
      lVar10 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_015c2790();
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x10);
      memcpy((void *)(unaff_x19 + 0x1660),(void *)(unaff_x19 + 0x830),0x158);
      FUN_041ddca0(unaff_x19 + 0x13a8,uVar11,unaff_x19 + 0x1660,uVar19);
      memcpy(unaff_x21 + 0x2c,(void *)(unaff_x19 + 0x13a8),0x160);
      thunk_FUN_01656ef8(unaff_x21 + 0x2c,0);
      if ((unaff_w28 < 0) && (plVar12 = *(long **)(unaff_x21 + 0x1c), plVar12 != (long *)0x0)) {
        lVar15 = *plVar12;
        lVar10 = *(long *)puVar6;
        uVar9 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar9 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar10) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_02224910;
            }
            uVar9 = uVar9 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar9 != 0);
        }
        puVar13 = (undefined8 *)FUN_015c2a80(plVar12,lVar10,0);
LAB_02224910:
        (*(code *)*puVar13)(plVar12,puVar13[1]);
      }
    }
joined_r0x02224258:
    if ((unaff_w28 < 0) && (plVar12 = *(long **)(unaff_x21 + 0x1a), plVar12 != (long *)0x0)) {
      lVar15 = *plVar12;
      lVar10 = *(long *)puVar6;
      uVar9 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar9 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar10) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02224988;
          }
          uVar9 = uVar9 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar9 != 0);
      }
      puVar13 = (undefined8 *)FUN_015c2a80(plVar12,lVar10,0);
LAB_02224988:
      (*(code *)*puVar13)(plVar12,puVar13[1]);
    }
    unaff_x21[0x2a] = 1;
    plVar12 = *(long **)(unaff_x21 + 0x18);
    if (plVar12 != (long *)0x0) {
      lVar10 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar9 != 0) {
        piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06d8b348) {
            puVar13 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02224a08;
          }
          uVar9 = uVar9 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar9 != 0);
      }
      puVar13 = (undefined8 *)FUN_015c2a80(plVar12,*(long *)PTR_DAT_06d8b348,0);
LAB_02224a08:
      auVar20 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      *(undefined1 (*) [16])(unaff_x19 + 0x1060) = auVar20;
      auVar20 = FUN_036991cc(unaff_x19 + 0x1060,0);
      cVar7 = DAT_0722a6b5;
      plVar12 = auVar20._0_8_;
      *(undefined1 (*) [16])(unaff_x19 + 0x1070) = auVar20;
      if (cVar7 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e52150);
        thunk_FUN_0159f088(PTR_DAT_06dd2198);
        plVar12 = *(long **)(unaff_x19 + 0x1070);
        DAT_0722a6b5 = '\x01';
      }
      if (plVar12 != (long *)0x0) {
        lVar10 = *plVar12;
        bVar2 = *(byte *)(*(long *)PTR_DAT_06dd2198 + 300);
        if ((*(byte *)(lVar10 + 300) < bVar2) ||
           (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06dd2198)
           ) {
          uVar4 = *(undefined2 *)(unaff_x19 + 0x1078);
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06e52150) {
                puVar13 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
                goto Oculus_Interaction_SurfaceSnapPoseDelegate__Awake;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_015c2a80(plVar12,*(long *)PTR_DAT_06e52150,0);
Oculus_Interaction_SurfaceSnapPoseDelegate__Awake:
          iVar8 = (*(code *)*puVar13)(plVar12,uVar4,puVar13[1]);
          if (iVar8 == 0) goto LAB_02224da0;
        }
        else {
          uVar9 = FUN_036982e0(plVar12,0);
          if ((uVar9 & 1) == 0) {
LAB_02224da0:
            *unaff_x21 = 7;
            uVar11 = *(undefined8 *)(unaff_x19 + 0x1070);
            *(undefined8 *)(unaff_x21 + 0x88) = *(undefined8 *)(unaff_x19 + 0x1078);
            *(undefined8 *)(unaff_x21 + 0x86) = uVar11;
            thunk_FUN_01656ef8(unaff_x21 + 0x86,0);
            if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x10) + 0x20) + 0x132) & 1) == 0) {
              FUN_015c2790();
            }
            FUN_04dc985c(unaff_x21 + 2,unaff_x19 + 0x1070);
            goto LAB_02224cc8;
          }
        }
      }
      if (DAT_0722a6b6 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e52150);
        thunk_FUN_0159f088(PTR_DAT_06dd2198);
        DAT_0722a6b6 = '\x01';
      }
      plVar12 = *(long **)(unaff_x19 + 0x1070);
      if (plVar12 != (long *)0x0) {
        lVar10 = *plVar12;
        bVar2 = *(byte *)(*(long *)PTR_DAT_06dd2198 + 300);
        if ((*(byte *)(lVar10 + 300) < bVar2) ||
           (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06dd2198)
           ) {
          uVar4 = *(undefined2 *)(unaff_x19 + 0x1078);
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06e52150) {
                puVar13 = (undefined8 *)(lVar10 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto Oculus_Interaction_SurfaceSnapPoseDelegate__ComputeWorldSurfacePose;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_015c2a80(plVar12,*(long *)PTR_DAT_06e52150,2);
Oculus_Interaction_SurfaceSnapPoseDelegate__ComputeWorldSurfacePose:
          (*(code *)*puVar13)(plVar12,uVar4,puVar13[1]);
        }
        else {
          FUN_02df6c8c(plVar12,0);
        }
      }
    }
    puVar13 = (undefined8 *)(unaff_x21 + 0x28);
    plVar12 = (long *)*puVar13;
    if (plVar12 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_06e35b40 + 300);
      if ((bVar2 <= *(byte *)(*plVar12 + 300)) &&
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_06e35b40)
         ) {
        lVar10 = FUN_02df4dd8(plVar12,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
                    /* WARNING: Subroutine does not return */
        FUN_02df4ea4(lVar10,0);
      }
      *(long *)(unaff_x19 + 8) = unaff_x27;
      uVar11 = thunk_FUN_0159f088(PTR_DAT_06df3e18);
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(plVar12,uVar11);
    }
    if (unaff_x21[0x2a] == 1) {
      __src = unaff_x21 + 0x2c;
      goto LAB_02224c48;
    }
    *puVar13 = 0;
    thunk_FUN_01656ef8(puVar13,0);
    memset(unaff_x21 + 0x2c,0,0x160);
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
  memcpy((void *)(unaff_x19 + 0x18),(void *)(unaff_x19 + 0x1248),0x160);
  lVar10 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x20);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_015c2790();
  }
  uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x88);
  memcpy((void *)(unaff_x19 + 0x13a8),(void *)(unaff_x19 + 0x18),0x160);
  FUN_05093b08(unaff_x21 + 2,unaff_x19 + 0x13a8,uVar11);
LAB_02224cc8:
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -0x68)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


