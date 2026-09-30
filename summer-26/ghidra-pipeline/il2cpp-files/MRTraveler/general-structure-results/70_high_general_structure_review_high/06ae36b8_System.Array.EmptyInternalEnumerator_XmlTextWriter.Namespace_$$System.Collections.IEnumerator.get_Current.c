/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 06ae36b8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__System_Collections_IEnumerator_get_Current
               (void)

{
  char cVar1;
  undefined2 uVar2;
  ushort uVar3;
  char cVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  code *pcVar16;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined4 *unaff_x28;
  long unaff_x29;
  undefined1 auVar23 [16];
  
  do {
    plVar17 = *(long **)(unaff_x28 + 0x18);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar22 = *(long **)(unaff_x19 + 0x18);
    lVar8 = *plVar22;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
    }
    lVar12 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar8) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_06ae373c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar17,lVar8,1);
LAB_06ae373c:
    auVar23 = (*(code *)*puVar9)(plVar17,puVar9[1]);
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_08e6b820 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    *(undefined1 (*) [16])(unaff_x19 + 0x70) = auVar23;
    thunk_FUN_03d233cc(unaff_x19 + 0x70,0);
    puVar5 = PTR_DAT_08e6b808;
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x70);
    *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x78);
    uVar14 = FUN_036f7d54(unaff_x19 + 0x40,*(undefined8 *)puVar5);
    if ((uVar14 & 1) == 0) {
      *unaff_x28 = 3;
      uVar20 = *(undefined8 *)(unaff_x19 + 0x40);
      *(undefined8 *)(unaff_x28 + 0x30) = *(undefined8 *)(unaff_x19 + 0x48);
      *(undefined8 *)(unaff_x28 + 0x2e) = uVar20;
      thunk_FUN_03d233cc(unaff_x28 + 0x2e,0);
      lVar8 = *plVar22;
      uVar3 = *(ushort *)(lVar8 + 0x135);
      if ((uVar3 & 1) == 0) {
        lVar8 = FUN_03cf1244();
        uVar3 = *(ushort *)(*plVar22 + 0x135);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x58);
      if ((uVar3 & 1) == 0) {
        FUN_03cf1244();
      }
      (*pcVar16)(unaff_x28 + 2,unaff_x19 + 0x40);
      goto 
      System_Array_EmptyInternalEnumerator<fsAotCompilationManager_AotCompilation>__System_Collections_IEnumerator_Reset
      ;
    }
    plVar17 = *(long **)(unaff_x19 + 0x40);
    if (plVar17 == (long *)0x0) {
      if (*(char *)(unaff_x19 + 0x48) == '\0') goto LAB_06ae3848;
    }
    else {
      uVar2 = *(undefined2 *)(unaff_x19 + 0x4a);
      lVar8 = *(long *)(*(long *)PTR_DAT_08e6b800 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03cf1244();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03cf1244(lVar8);
      }
      lVar12 = *plVar17;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06ae3834;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar17,lVar8,0);
LAB_06ae3834:
      uVar14 = (*(code *)*puVar9)(plVar17,uVar2,puVar9[1]);
      if ((uVar14 & 1) == 0) {
LAB_06ae3848:
        plVar17 = *(long **)(unaff_x28 + 0x18);
        if (plVar17 == (long *)0x0) goto LAB_06ae3898;
        lVar8 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 == 0) goto LAB_06ae3888;
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        break;
      }
    }
    plVar17 = *(long **)(unaff_x28 + 0x18);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = *plVar22;
    lVar12 = *(long *)(unaff_x28 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
    }
    lVar11 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar8) {
          lVar8 = lVar11 + (long)*piVar15 * 0x10 + 0x138;
          goto LAB_06ae3414;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    lVar8 = FUN_03cf1348(plVar17,lVar8,0);
LAB_06ae3414:
    *(undefined8 **)(unaff_x19 + 0x70) = unaff_x22;
    lVar8 = *(long *)(lVar8 + 8);
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar17,unaff_x19 + 0x70);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar11 = *plVar22;
    uVar20 = *(undefined8 *)(unaff_x28 + 0xe);
    uVar3 = *(ushort *)(lVar11 + 0x135);
    lVar8 = lVar11;
    if ((uVar3 & 1) == 0) {
      lVar8 = FUN_03cf1244();
      lVar11 = *plVar22;
      uVar3 = *(ushort *)(lVar11 + 0x135);
    }
    uVar18 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x38);
    lVar8 = lVar11;
    if ((uVar3 & 1) == 0) {
      lVar8 = FUN_03cf1244();
      lVar11 = *plVar22;
      uVar3 = *(ushort *)(lVar11 + 0x135);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x38);
    if ((uVar3 & 1) == 0) {
      lVar11 = FUN_03cf1244();
    }
    puVar9 = unaff_x22;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x30) + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x22;
    }
    *(undefined8 **)(unaff_x19 + 0x58) = puVar9;
    *(long *)(unaff_x19 + 0x60) = unaff_x19 + 0x68;
    *(undefined8 *)(unaff_x19 + 0x68) = uVar20;
    (**(code **)(lVar8 + 0x10))(uVar18,lVar8,lVar12,unaff_x19 + 0x58,unaff_x19 + 0x70);
    puVar5 = PTR_DAT_08e83178;
    uVar18 = *(undefined8 *)(unaff_x19 + 0x78);
    uVar20 = *(undefined8 *)(unaff_x19 + 0x70);
    uVar21 = *(undefined8 *)(unaff_x19 + 0x88);
    uVar19 = *(undefined8 *)(unaff_x19 + 0x80);
    *(undefined8 *)(unaff_x19 + 0x78) = 0;
    *(undefined8 *)(unaff_x19 + 0x70) = 0;
    *(undefined8 *)(unaff_x19 + 0x88) = 0;
    *(undefined8 *)(unaff_x19 + 0x80) = 0;
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar18;
    *(undefined8 *)(unaff_x19 + 0xa0) = uVar20;
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar21;
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar19;
    lVar8 = *(long *)puVar5;
    *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x19 + 0x90);
    *(undefined8 *)(unaff_x19 + 0x90) = 0;
    if ((*(byte *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x19 + 0xa8);
    *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x19 + 0xa0);
    *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x19 + 0xb8);
    *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x19 + 0xb0);
    *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0xc0);
    thunk_FUN_03d233cc(unaff_x19 + 0x70,0);
    puVar5 = PTR_DAT_08e83160;
    *(undefined8 *)(unaff_x19 + 0xd8) = *(undefined8 *)(unaff_x19 + 0x78);
    *(undefined8 *)(unaff_x19 + 0xd0) = *(undefined8 *)(unaff_x19 + 0x70);
    *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x19 + 0x88);
    *(undefined8 *)(unaff_x19 + 0xe0) = *(undefined8 *)(unaff_x19 + 0x80);
    *(undefined8 *)(unaff_x19 + 0xf0) = *(undefined8 *)(unaff_x19 + 0x90);
    uVar14 = FUN_037128b0(unaff_x19 + 0xd0,*(undefined8 *)puVar5);
    if ((uVar14 & 1) == 0) {
      *unaff_x28 = 2;
      uVar21 = *(undefined8 *)(unaff_x19 + 0xd8);
      uVar19 = *(undefined8 *)(unaff_x19 + 0xd0);
      uVar18 = *(undefined8 *)(unaff_x19 + 0xe8);
      uVar20 = *(undefined8 *)(unaff_x19 + 0xe0);
      *(undefined8 *)(unaff_x28 + 0x2c) = *(undefined8 *)(unaff_x19 + 0xf0);
      *(undefined8 *)(unaff_x28 + 0x26) = uVar21;
      *(undefined8 *)(unaff_x28 + 0x24) = uVar19;
      *(undefined8 *)(unaff_x28 + 0x2a) = uVar18;
      *(undefined8 *)(unaff_x28 + 0x28) = uVar20;
      thunk_FUN_03d233cc(unaff_x28 + 0x24,0);
      lVar8 = *plVar22;
      uVar3 = *(ushort *)(lVar8 + 0x135);
      if ((uVar3 & 1) == 0) {
        lVar8 = FUN_03cf1244();
        uVar3 = *(ushort *)(*plVar22 + 0x135);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x40);
      if ((uVar3 & 1) == 0) {
        FUN_03cf1244();
      }
      (*pcVar16)(unaff_x28 + 2,unaff_x19 + 0xd0);
      goto 
      System_Array_EmptyInternalEnumerator<fsAotCompilationManager_AotCompilation>__System_Collections_IEnumerator_Reset
      ;
    }
    plVar17 = *(long **)(unaff_x19 + 0xd0);
    if (plVar17 == (long *)0x0) {
      cVar1 = *(char *)(unaff_x19 + 0xd8);
      uVar10 = *(undefined4 *)(unaff_x21 + 9);
      uVar13 = *(undefined4 *)(unaff_x19 + 0xdc);
      uVar20 = *(undefined8 *)(unaff_x19 + 0xe0);
      uVar18 = *(undefined8 *)(unaff_x19 + 0xe8);
    }
    else {
      uVar2 = *(undefined2 *)(unaff_x19 + 0xf0);
      lVar8 = *(long *)(*(long *)PTR_DAT_08e83158 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03cf1244();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03cf1244(lVar8);
      }
      lVar12 = *plVar17;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06ae35fc;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar17,lVar8,0);
LAB_06ae35fc:
      (*(code *)*puVar9)(unaff_x19 + 0x70,plVar17,uVar2,puVar9[1]);
      cVar1 = *(char *)(unaff_x19 + 0x70);
      uVar10 = *(undefined4 *)(unaff_x19 + 0x71);
      uVar13 = *(undefined4 *)(unaff_x19 + 0x74);
      uVar20 = *(undefined8 *)(unaff_x19 + 0x78);
      uVar18 = *(undefined8 *)(unaff_x19 + 0x80);
    }
    *(undefined4 *)(unaff_x29 + -0x30) = uVar10;
    *(undefined4 *)(unaff_x21 + 0xb3) = uVar13;
    *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(unaff_x29 + -0x30);
    *(undefined4 *)(unaff_x19 + 0x3b) = uVar13;
    puVar5 = PTR_DAT_08e7fed8;
    if (cVar1 != '\0') {
      uVar13 = *(undefined4 *)((long)unaff_x28 + 0x49);
      cVar4 = *(char *)(unaff_x28 + 0x12);
      *(undefined4 *)(unaff_x19 + 0x53) = unaff_x28[0x13];
      lVar8 = *(long *)puVar5;
      *(undefined4 *)(unaff_x19 + 0x50) = uVar13;
      uVar19 = *(undefined8 *)(unaff_x28 + 0x14);
      uVar21 = *(undefined8 *)(unaff_x28 + 0x16);
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      bVar6 = FUN_07163464(uVar19,uVar21,uVar20,uVar18,0);
      unaff_x21 = unaff_x19 + 0xd0;
      if ((cVar4 != '\0' & bVar6) != 0) {
        *(char *)(unaff_x28 + 0x12) = cVar1;
        uVar13 = *(undefined4 *)(unaff_x19 + 0x38);
        unaff_x28[0x13] = *(undefined4 *)(unaff_x19 + 0x3b);
        *(undefined4 *)((long)unaff_x28 + 0x49) = uVar13;
        *(undefined8 *)(unaff_x28 + 0x14) = uVar20;
        *(undefined8 *)(unaff_x28 + 0x16) = uVar18;
      }
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08e82fe8) {
      puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_06ae3b40;
    }
  }
LAB_06ae3888:
  puVar9 = (undefined8 *)FUN_03cf1348(plVar17,*(long *)PTR_DAT_08e82fe8,0);
LAB_06ae3b40:
  auVar23 = (*(code *)*puVar9)(plVar17,puVar9[1]);
  puVar5 = PTR_DAT_08e69640;
  if (*(int *)(*(long *)PTR_DAT_08e69640 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar23;
  thunk_FUN_03d233cc(unaff_x29 + -0x30,0);
  cVar1 = DAT_0940ffed;
  uVar20 = *(undefined8 *)(unaff_x29 + -0x28);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x29 + -0x30);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar20;
  if (cVar1 == '\0') {
    FUN_03c8f898(PTR_DAT_08e69640);
    DAT_0940ffed = '\x01';
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (DAT_0940ffee == '\0') {
    FUN_03c8f898(PTR_DAT_08e69648);
    DAT_0940ffee = '\x01';
  }
  plVar17 = *(long **)(unaff_x19 + 0x20);
  if (plVar17 != (long *)0x0) {
    lVar8 = *plVar17;
    uVar2 = *(undefined2 *)(unaff_x19 + 0x28);
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08e69648) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_06ae3c34;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar17,*(long *)PTR_DAT_08e69648,0);
LAB_06ae3c34:
    iVar7 = (*(code *)*puVar9)(plVar17,uVar2,puVar9[1]);
    if (iVar7 == 0) {
      *unaff_x28 = 4;
      uVar20 = *(undefined8 *)(unaff_x19 + 0x20);
      *(undefined8 *)(unaff_x28 + 0x34) = *(undefined8 *)(unaff_x19 + 0x28);
      *(undefined8 *)(unaff_x28 + 0x32) = uVar20;
      thunk_FUN_03d233cc(unaff_x28 + 0x32,0);
      lVar8 = *plVar22;
      uVar3 = *(ushort *)(lVar8 + 0x135);
      if ((uVar3 & 1) == 0) {
        lVar8 = FUN_03cf1244();
        uVar3 = *(ushort *)(*plVar22 + 0x135);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x60);
      if ((uVar3 & 1) == 0) {
        FUN_03cf1244();
      }
      (*pcVar16)(unaff_x28 + 2,unaff_x19 + 0x20);
      goto 
      System_Array_EmptyInternalEnumerator<fsAotCompilationManager_AotCompilation>__System_Collections_IEnumerator_Reset
      ;
    }
  }
  if (DAT_0940ffef == '\0') {
    FUN_03c8f898(PTR_DAT_08e69648);
    DAT_0940ffef = '\x01';
  }
  plVar17 = *(long **)(unaff_x19 + 0x20);
  if (plVar17 != (long *)0x0) {
    lVar8 = *plVar17;
    uVar2 = *(undefined2 *)(unaff_x19 + 0x28);
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08e69648) {
          puVar9 = (undefined8 *)(lVar8 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_06ae2dd0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar17,*(long *)PTR_DAT_08e69648,2);
LAB_06ae2dd0:
    (*(code *)*puVar9)(plVar17,uVar2,puVar9[1]);
  }
LAB_06ae3898:
  plVar22 = (long *)(unaff_x28 + 0x1a);
  plVar17 = (long *)*plVar22;
  if (plVar17 != (long *)0x0) {
    bVar6 = *(byte *)(*(long *)PTR_DAT_08e695a0 + 0x130);
    if ((bVar6 <= *(byte *)(*plVar17 + 0x130)) &&
       (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar6 * 8 + -8) == *(long *)PTR_DAT_08e695a0))
    {
      lVar8 = FUN_0701b8d8(plVar17,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
                    /* WARNING: Subroutine does not return */
      FUN_0701b998(lVar8,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(plVar17,*(undefined8 *)(unaff_x19 + 8));
  }
  if (unaff_x28[0x1c] == 1) {
    puVar9 = (undefined8 *)(unaff_x28 + 0x1e);
  }
  else {
    *plVar22 = 0;
    thunk_FUN_03d233cc(plVar22,0);
    puVar9 = (undefined8 *)(unaff_x28 + 0x12);
    *(undefined8 *)(unaff_x28 + 0x1e) = 0;
    *(undefined8 *)(unaff_x28 + 0x20) = 0;
    *(undefined8 *)(unaff_x28 + 0x22) = 0;
  }
  uVar18 = puVar9[1];
  uVar20 = *puVar9;
  *(undefined8 *)(unaff_x29 + -0xa0) = puVar9[2];
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar18;
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar20;
  *unaff_x28 = 0xfffffffe;
  *(undefined8 *)(unaff_x28 + 0x18) = 0;
  thunk_FUN_03d233cc(unaff_x28 + 0x18,0);
  puVar5 = PTR_DAT_08e83150;
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0xa8);
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0xb0);
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0xa0);
  plVar17 = *(long **)(unaff_x28 + 2);
  lVar8 = *(long *)puVar5;
  if (plVar17 == (long *)0x0) {
    uVar18 = *(undefined8 *)(unaff_x29 + -0x88);
    uVar20 = *(undefined8 *)(unaff_x29 + -0x90);
    *(undefined8 *)(unaff_x28 + 10) = *(undefined8 *)(unaff_x29 + -0x80);
    *(undefined8 *)(unaff_x28 + 8) = uVar18;
    *(undefined8 *)(unaff_x28 + 6) = uVar20;
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x88);
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x90);
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x80);
    lVar8 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
    }
    *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x48);
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x50);
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x40);
    lVar12 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar8) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_06ae3aa4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar17,lVar8,2);
LAB_06ae3aa4:
    pcVar16 = (code *)*puVar9;
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x68);
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x70);
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x60);
    (*pcVar16)(plVar17,unaff_x29 + -0x30,puVar9[1]);
  }

  System_Array_EmptyInternalEnumerator<fsAotCompilationManager_AotCompilation>__System_Collections_IEnumerator_Reset
  :
  if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) != *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


