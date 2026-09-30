/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$MoveNext
ENTRY_POINT: 06ae3668
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__MoveNext(long param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  undefined4 *unaff_x20;
  code *pcVar15;
  uint unaff_w21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  long *plVar16;
  undefined8 uVar17;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar18;
  undefined8 unaff_x26;
  char unaff_w27;
  long *plVar19;
  undefined4 *unaff_x28;
  long unaff_x29;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  
  do {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    bVar5 = FUN_07163464(unaff_x25,unaff_x26,unaff_x23,unaff_x24,0);
    if ((unaff_w21 != 0 & bVar5) != 0) {
      *(char *)(unaff_x28 + 0x12) = unaff_w27;
      uVar12 = *(undefined4 *)(unaff_x19 + 0x38);
      *(undefined4 *)((long)unaff_x20 + 3) = *(undefined4 *)(unaff_x19 + 0x3b);
      *unaff_x20 = uVar12;
      *(undefined8 *)(unaff_x28 + 0x14) = unaff_x23;
      *(undefined8 *)(unaff_x28 + 0x16) = unaff_x24;
    }
    do {
      plVar16 = *(long **)(unaff_x28 + 0x18);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      plVar19 = *(long **)(unaff_x19 + 0x18);
      lVar7 = *plVar19;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244(lVar7);
      }
      lVar11 = *plVar16;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar7) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_06ae373c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar16,lVar7,1);
LAB_06ae373c:
      auVar22 = (*(code *)*puVar8)(plVar16,puVar8[1]);
      if ((*(byte *)(*(long *)(*(long *)PTR_DAT_08e6b820 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      *(undefined1 (*) [16])(unaff_x19 + 0x70) = auVar22;
      thunk_FUN_03d233cc(unaff_x19 + 0x70,0);
      puVar3 = PTR_DAT_08e6b808;
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x70);
      *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x78);
      uVar13 = FUN_036f7d54(unaff_x19 + 0x40,*(undefined8 *)puVar3);
      if ((uVar13 & 1) == 0) {
        *unaff_x28 = 3;
        uVar18 = *(undefined8 *)(unaff_x19 + 0x40);
        *(undefined8 *)(unaff_x28 + 0x30) = *(undefined8 *)(unaff_x19 + 0x48);
        *(undefined8 *)(unaff_x28 + 0x2e) = uVar18;
        thunk_FUN_03d233cc(unaff_x28 + 0x2e,0);
        lVar7 = *plVar19;
        uVar2 = *(ushort *)(lVar7 + 0x135);
        if ((uVar2 & 1) == 0) {
          lVar7 = FUN_03cf1244();
          uVar2 = *(ushort *)(*plVar19 + 0x135);
        }
        pcVar15 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x58);
        if ((uVar2 & 1) == 0) {
          FUN_03cf1244();
        }
        (*pcVar15)(unaff_x28 + 2,unaff_x19 + 0x40);
        goto 
        System_Array_EmptyInternalEnumerator<fsAotCompilationManager_AotCompilation>__System_Collections_IEnumerator_Reset
        ;
      }
      plVar16 = *(long **)(unaff_x19 + 0x40);
      if (plVar16 == (long *)0x0) {
        if (*(char *)(unaff_x19 + 0x48) == '\0') goto LAB_06ae3848;
      }
      else {
        uVar1 = *(undefined2 *)(unaff_x19 + 0x4a);
        lVar7 = *(long *)(*(long *)PTR_DAT_08e6b800 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03cf1244();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03cf1244(lVar7);
        }
        lVar11 = *plVar16;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar7) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06ae3834;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348(plVar16,lVar7,0);
LAB_06ae3834:
        uVar13 = (*(code *)*puVar8)(plVar16,uVar1,puVar8[1]);
        if ((uVar13 & 1) == 0) {
LAB_06ae3848:
          plVar16 = *(long **)(unaff_x28 + 0x18);
          if (plVar16 == (long *)0x0) goto LAB_06ae3898;
          lVar7 = *plVar16;
          uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar13 == 0) goto LAB_06ae3888;
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_06ae3870;
        }
      }
      plVar16 = *(long **)(unaff_x28 + 0x18);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar7 = *plVar19;
      lVar11 = *(long *)(unaff_x28 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244(lVar7);
      }
      lVar10 = *plVar16;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar7) {
            lVar7 = lVar10 + (long)*piVar14 * 0x10 + 0x138;
            goto LAB_06ae3414;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      lVar7 = FUN_03cf1348(plVar16,lVar7,0);
LAB_06ae3414:
      *(undefined8 **)(unaff_x19 + 0x70) = unaff_x22;
      lVar7 = *(long *)(lVar7 + 8);
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar16,unaff_x19 + 0x70);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar10 = *plVar19;
      uVar18 = *(undefined8 *)(unaff_x28 + 0xe);
      uVar2 = *(ushort *)(lVar10 + 0x135);
      lVar7 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_03cf1244();
        lVar10 = *plVar19;
        uVar2 = *(ushort *)(lVar10 + 0x135);
      }
      uVar17 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x38);
      lVar7 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_03cf1244();
        lVar10 = *plVar19;
        uVar2 = *(ushort *)(lVar10 + 0x135);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_03cf1244();
      }
      puVar8 = unaff_x22;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x30) + 0x28)) {
        puVar8 = (undefined8 *)*unaff_x22;
      }
      *(undefined8 **)(unaff_x19 + 0x58) = puVar8;
      *(long *)(unaff_x19 + 0x60) = unaff_x19 + 0x68;
      *(undefined8 *)(unaff_x19 + 0x68) = uVar18;
      (**(code **)(lVar7 + 0x10))(uVar17,lVar7,lVar11,unaff_x19 + 0x58,unaff_x19 + 0x70);
      puVar3 = PTR_DAT_08e83178;
      uVar17 = *(undefined8 *)(unaff_x19 + 0x78);
      uVar18 = *(undefined8 *)(unaff_x19 + 0x70);
      uVar21 = *(undefined8 *)(unaff_x19 + 0x88);
      uVar20 = *(undefined8 *)(unaff_x19 + 0x80);
      *(undefined8 *)(unaff_x19 + 0x78) = 0;
      *(undefined8 *)(unaff_x19 + 0x70) = 0;
      *(undefined8 *)(unaff_x19 + 0x88) = 0;
      *(undefined8 *)(unaff_x19 + 0x80) = 0;
      *(undefined8 *)(unaff_x19 + 0xa8) = uVar17;
      *(undefined8 *)(unaff_x19 + 0xa0) = uVar18;
      *(undefined8 *)(unaff_x19 + 0xb8) = uVar21;
      *(undefined8 *)(unaff_x19 + 0xb0) = uVar20;
      lVar7 = *(long *)puVar3;
      *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x19 + 0x90);
      *(undefined8 *)(unaff_x19 + 0x90) = 0;
      if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x19 + 0xa8);
      *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x19 + 0xa0);
      *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x19 + 0xb8);
      *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x19 + 0xb0);
      *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0xc0);
      thunk_FUN_03d233cc(unaff_x19 + 0x70,0);
      puVar3 = PTR_DAT_08e83160;
      *(undefined8 *)(unaff_x19 + 0xd8) = *(undefined8 *)(unaff_x19 + 0x78);
      *(undefined8 *)(unaff_x19 + 0xd0) = *(undefined8 *)(unaff_x19 + 0x70);
      *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x19 + 0x88);
      *(undefined8 *)(unaff_x19 + 0xe0) = *(undefined8 *)(unaff_x19 + 0x80);
      *(undefined8 *)(unaff_x19 + 0xf0) = *(undefined8 *)(unaff_x19 + 0x90);
      uVar13 = FUN_037128b0(unaff_x19 + 0xd0,*(undefined8 *)puVar3);
      if ((uVar13 & 1) == 0) {
        *unaff_x28 = 2;
        uVar21 = *(undefined8 *)(unaff_x19 + 0xd8);
        uVar20 = *(undefined8 *)(unaff_x19 + 0xd0);
        uVar17 = *(undefined8 *)(unaff_x19 + 0xe8);
        uVar18 = *(undefined8 *)(unaff_x19 + 0xe0);
        *(undefined8 *)(unaff_x28 + 0x2c) = *(undefined8 *)(unaff_x19 + 0xf0);
        *(undefined8 *)(unaff_x28 + 0x26) = uVar21;
        *(undefined8 *)(unaff_x28 + 0x24) = uVar20;
        *(undefined8 *)(unaff_x28 + 0x2a) = uVar17;
        *(undefined8 *)(unaff_x28 + 0x28) = uVar18;
        thunk_FUN_03d233cc(unaff_x28 + 0x24,0);
        lVar7 = *plVar19;
        uVar2 = *(ushort *)(lVar7 + 0x135);
        if ((uVar2 & 1) == 0) {
          lVar7 = FUN_03cf1244();
          uVar2 = *(ushort *)(*plVar19 + 0x135);
        }
        pcVar15 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x40);
        if ((uVar2 & 1) == 0) {
          FUN_03cf1244();
        }
        (*pcVar15)(unaff_x28 + 2,unaff_x19 + 0xd0);
        goto 
        System_Array_EmptyInternalEnumerator<fsAotCompilationManager_AotCompilation>__System_Collections_IEnumerator_Reset
        ;
      }
      plVar16 = *(long **)(unaff_x19 + 0xd0);
      if (plVar16 == (long *)0x0) {
        unaff_w27 = *(char *)(unaff_x19 + 0xd8);
        uVar9 = *(undefined4 *)(unaff_x19 + 0xd9);
        uVar12 = *(undefined4 *)(unaff_x19 + 0xdc);
        unaff_x23 = *(undefined8 *)(unaff_x19 + 0xe0);
        unaff_x24 = *(undefined8 *)(unaff_x19 + 0xe8);
      }
      else {
        uVar1 = *(undefined2 *)(unaff_x19 + 0xf0);
        lVar7 = *(long *)(*(long *)PTR_DAT_08e83158 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03cf1244();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03cf1244(lVar7);
        }
        lVar11 = *plVar16;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar7) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06ae35fc;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348(plVar16,lVar7,0);
LAB_06ae35fc:
        (*(code *)*puVar8)(unaff_x19 + 0x70,plVar16,uVar1,puVar8[1]);
        unaff_w27 = *(char *)(unaff_x19 + 0x70);
        uVar9 = *(undefined4 *)(unaff_x19 + 0x71);
        uVar12 = *(undefined4 *)(unaff_x19 + 0x74);
        unaff_x23 = *(undefined8 *)(unaff_x19 + 0x78);
        unaff_x24 = *(undefined8 *)(unaff_x19 + 0x80);
      }
      *(undefined4 *)(unaff_x29 + -0x30) = uVar9;
      *(undefined4 *)(unaff_x19 + 0x183) = uVar12;
      *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(unaff_x29 + -0x30);
      *(undefined4 *)(unaff_x19 + 0x3b) = uVar12;
      puVar3 = PTR_DAT_08e7fed8;
    } while (unaff_w27 == '\0');
    unaff_x20 = (undefined4 *)((long)unaff_x28 + 0x49);
    uVar12 = *unaff_x20;
    unaff_w21 = (uint)*(byte *)(unaff_x28 + 0x12);
    *(undefined4 *)(unaff_x19 + 0x53) = unaff_x28[0x13];
    param_1 = *(long *)puVar3;
    *(undefined4 *)(unaff_x19 + 0x50) = uVar12;
    unaff_x25 = *(undefined8 *)(unaff_x28 + 0x14);
    unaff_x26 = *(undefined8 *)(unaff_x28 + 0x16);
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_06ae3870:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08e82fe8) {
      puVar8 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_06ae3b40;
    }
  }
LAB_06ae3888:
  puVar8 = (undefined8 *)FUN_03cf1348(plVar16,*(long *)PTR_DAT_08e82fe8,0);
LAB_06ae3b40:
  auVar22 = (*(code *)*puVar8)(plVar16,puVar8[1]);
  puVar3 = PTR_DAT_08e69640;
  if (*(int *)(*(long *)PTR_DAT_08e69640 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar22;
  thunk_FUN_03d233cc(unaff_x29 + -0x30,0);
  cVar4 = DAT_0940ffed;
  uVar18 = *(undefined8 *)(unaff_x29 + -0x28);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x29 + -0x30);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar18;
  if (cVar4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e69640);
    DAT_0940ffed = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (DAT_0940ffee == '\0') {
    FUN_03c8f898(PTR_DAT_08e69648);
    DAT_0940ffee = '\x01';
  }
  plVar16 = *(long **)(unaff_x19 + 0x20);
  if (plVar16 != (long *)0x0) {
    lVar7 = *plVar16;
    uVar1 = *(undefined2 *)(unaff_x19 + 0x28);
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08e69648) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06ae3c34;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar16,*(long *)PTR_DAT_08e69648,0);
LAB_06ae3c34:
    iVar6 = (*(code *)*puVar8)(plVar16,uVar1,puVar8[1]);
    if (iVar6 == 0) {
      *unaff_x28 = 4;
      uVar18 = *(undefined8 *)(unaff_x19 + 0x20);
      *(undefined8 *)(unaff_x28 + 0x34) = *(undefined8 *)(unaff_x19 + 0x28);
      *(undefined8 *)(unaff_x28 + 0x32) = uVar18;
      thunk_FUN_03d233cc(unaff_x28 + 0x32,0);
      lVar7 = *plVar19;
      uVar2 = *(ushort *)(lVar7 + 0x135);
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_03cf1244();
        uVar2 = *(ushort *)(*plVar19 + 0x135);
      }
      pcVar15 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x60);
      if ((uVar2 & 1) == 0) {
        FUN_03cf1244();
      }
      (*pcVar15)(unaff_x28 + 2,unaff_x19 + 0x20);
      goto 
      System_Array_EmptyInternalEnumerator<fsAotCompilationManager_AotCompilation>__System_Collections_IEnumerator_Reset
      ;
    }
  }
  if (DAT_0940ffef == '\0') {
    FUN_03c8f898(PTR_DAT_08e69648);
    DAT_0940ffef = '\x01';
  }
  plVar16 = *(long **)(unaff_x19 + 0x20);
  if (plVar16 != (long *)0x0) {
    lVar7 = *plVar16;
    uVar1 = *(undefined2 *)(unaff_x19 + 0x28);
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08e69648) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_06ae2dd0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar16,*(long *)PTR_DAT_08e69648,2);
LAB_06ae2dd0:
    (*(code *)*puVar8)(plVar16,uVar1,puVar8[1]);
  }
LAB_06ae3898:
  plVar19 = (long *)(unaff_x28 + 0x1a);
  plVar16 = (long *)*plVar19;
  if (plVar16 != (long *)0x0) {
    bVar5 = *(byte *)(*(long *)PTR_DAT_08e695a0 + 0x130);
    if ((bVar5 <= *(byte *)(*plVar16 + 0x130)) &&
       (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar5 * 8 + -8) == *(long *)PTR_DAT_08e695a0))
    {
      lVar7 = FUN_0701b8d8(plVar16,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
                    /* WARNING: Subroutine does not return */
      FUN_0701b998(lVar7,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(plVar16,*(undefined8 *)(unaff_x19 + 8));
  }
  if (unaff_x28[0x1c] == 1) {
    puVar8 = (undefined8 *)(unaff_x28 + 0x1e);
  }
  else {
    *plVar19 = 0;
    thunk_FUN_03d233cc(plVar19,0);
    puVar8 = (undefined8 *)(unaff_x28 + 0x12);
    *(undefined8 *)(unaff_x28 + 0x1e) = 0;
    *(undefined8 *)(unaff_x28 + 0x20) = 0;
    *(undefined8 *)(unaff_x28 + 0x22) = 0;
  }
  uVar17 = puVar8[1];
  uVar18 = *puVar8;
  *(undefined8 *)(unaff_x29 + -0xa0) = puVar8[2];
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar17;
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar18;
  *unaff_x28 = 0xfffffffe;
  *(undefined8 *)(unaff_x28 + 0x18) = 0;
  thunk_FUN_03d233cc(unaff_x28 + 0x18,0);
  puVar3 = PTR_DAT_08e83150;
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0xa8);
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0xb0);
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0xa0);
  plVar16 = *(long **)(unaff_x28 + 2);
  lVar7 = *(long *)puVar3;
  if (plVar16 == (long *)0x0) {
    uVar17 = *(undefined8 *)(unaff_x29 + -0x88);
    uVar18 = *(undefined8 *)(unaff_x29 + -0x90);
    *(undefined8 *)(unaff_x28 + 10) = *(undefined8 *)(unaff_x29 + -0x80);
    *(undefined8 *)(unaff_x28 + 8) = uVar17;
    *(undefined8 *)(unaff_x28 + 6) = uVar18;
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x88);
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x90);
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x80);
    lVar7 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03cf1244();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03cf1244(lVar7);
    }
    *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x48);
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x50);
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x40);
    lVar11 = *plVar16;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar7) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_06ae3aa4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar16,lVar7,2);
LAB_06ae3aa4:
    pcVar15 = (code *)*puVar8;
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x68);
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x70);
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x60);
    (*pcVar15)(plVar16,unaff_x29 + -0x30,puVar8[1]);
  }

  System_Array_EmptyInternalEnumerator<fsAotCompilationManager_AotCompilation>__System_Collections_IEnumerator_Reset
  :
  if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) != *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


