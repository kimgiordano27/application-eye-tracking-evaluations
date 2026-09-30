/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlNamespaceManager.NamespaceDeclaration>$$.cctor
ENTRY_POINT: 06ae2e88
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_3
*/


void System_Array_EmptyInternalEnumerator<XmlNamespaceManager_NamespaceDeclaration>___cctor
               (code *param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  char cVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long unaff_x19;
  code *pcVar16;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *plVar17;
  long unaff_x23;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long *unaff_x27;
  undefined4 *unaff_x28;
  long unaff_x29;
  undefined1 auVar23 [16];
  
  while( true ) {
    (*param_1)(param_2,param_3,param_4,param_5);
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = *unaff_x27;
                    /* try { // try from 06ae2e98 to 06be2ebf has its CatchHandler @ 06ae2fbc */
    uVar21 = *(undefined8 *)(unaff_x28 + 0xe);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_03cf1244();
      lVar8 = *unaff_x27;
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    uVar19 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x38);
    lVar9 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_03cf1244();
                    /* try { // try from 06ae2ed8 to 06be2edb has its CatchHandler @ 06ae2fb8 */
                    /* try { // try from 06ae2edc to 06be2f03 has its CatchHandler @ 06ae2fb4 */
      lVar8 = *unaff_x27;
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_03cf1244();
    }
                    /* try { // try from 06ae2f08 to 06be2f0b has its CatchHandler @ 06ae2fb0 */
                    /* try { // try from 06ae2f0c to 06be2f0f has its CatchHandler @ 06ae2fc0 */
                    /* try { // try from 06ae2f10 to 06be2f13 has its CatchHandler @ 06ae2fbc */
    puVar11 = unaff_x22;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x28)) {
                    /* try { // try from 06ae2f14 to 06be2f17 has its CatchHandler @ 06ae2fb8 */
      puVar11 = (undefined8 *)*unaff_x22;
    }
                    /* try { // try from 06ae2f18 to 06be2f1b has its CatchHandler @ 06ae2fb4 */
    *(undefined8 **)(unaff_x19 + 0x58) = puVar11;
    *(long *)(unaff_x19 + 0x60) = unaff_x19 + 0x68;
    *(undefined8 *)(unaff_x19 + 0x68) = uVar21;
                    /* try { // try from 06ae2f24 to 06be2f47 has its CatchHandler @ 06ae2fac */
    (**(code **)(lVar9 + 0x10))(uVar19,lVar9,unaff_x23,unaff_x19 + 0x58,unaff_x19 + 0x70);
    puVar5 = PTR_DAT_08e83178;
    uVar19 = *(undefined8 *)(unaff_x19 + 0x78);
    uVar21 = *(undefined8 *)(unaff_x19 + 0x70);
    uVar22 = *(undefined8 *)(unaff_x19 + 0x88);
    uVar20 = *(undefined8 *)(unaff_x19 + 0x80);
    *(undefined8 *)(unaff_x19 + 0x78) = 0;
    *(undefined8 *)(unaff_x19 + 0x70) = 0;
    *(undefined8 *)(unaff_x19 + 0x88) = 0;
    *(undefined8 *)(unaff_x19 + 0x80) = 0;
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar19;
    *(undefined8 *)(unaff_x19 + 0xa0) = uVar21;
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar22;
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar20;
    lVar9 = *(long *)puVar5;
    *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x19 + 0x90);
    *(undefined8 *)(unaff_x19 + 0x90) = 0;
    if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
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
    uVar10 = FUN_037128b0(unaff_x19 + 0xd0,*(undefined8 *)puVar5);
    if ((uVar10 & 1) == 0) break;
    plVar18 = *(long **)(unaff_x19 + 0xd0);
    if (plVar18 == (long *)0x0) {
      cVar1 = *(char *)(unaff_x19 + 0xd8);
      uVar14 = *(undefined4 *)(unaff_x21 + 9);
      uVar15 = *(undefined4 *)(unaff_x19 + 0xdc);
      uVar21 = *(undefined8 *)(unaff_x19 + 0xe0);
      uVar19 = *(undefined8 *)(unaff_x19 + 0xe8);
    }
    else {
      uVar3 = *(undefined2 *)(unaff_x19 + 0xf0);
      lVar9 = *(long *)(*(long *)PTR_DAT_08e83158 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03cf1244();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03cf1244(lVar9);
      }
      lVar8 = *plVar18;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar9) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06ae305c;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_03cf1348(plVar18,lVar9,0);
LAB_06ae305c:
      (*(code *)*puVar11)(unaff_x19 + 0x70,plVar18,uVar3,puVar11[1]);
      cVar1 = *(char *)(unaff_x19 + 0x70);
      uVar14 = *(undefined4 *)(unaff_x19 + 0x71);
      uVar15 = *(undefined4 *)(unaff_x19 + 0x74);
      uVar21 = *(undefined8 *)(unaff_x19 + 0x78);
      uVar19 = *(undefined8 *)(unaff_x19 + 0x80);
    }
    *(undefined4 *)(unaff_x29 + -0x30) = uVar14;
    *(undefined4 *)(unaff_x21 + 0xb3) = uVar15;
    *(undefined4 *)(unaff_x19 + 0x50) = *(undefined4 *)(unaff_x29 + -0x30);
    *(undefined4 *)(unaff_x19 + 0x53) = uVar15;
    *(char *)(unaff_x28 + 0x12) = cVar1;
    uVar14 = *(undefined4 *)(unaff_x19 + 0x50);
    unaff_x28[0x13] = uVar15;
    *(undefined8 *)(unaff_x28 + 0x14) = uVar21;
    *(undefined8 *)(unaff_x28 + 0x16) = uVar19;
    *(undefined4 *)((long)unaff_x28 + 0x49) = uVar14;
    if (cVar1 != '\0')
    goto 
    System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__System_Collections_IEnumerator_get_Current
    ;
    plVar18 = *(long **)(unaff_x28 + 0x18);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    unaff_x27 = *(long **)(unaff_x19 + 0x18);
    lVar9 = *unaff_x27;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244(lVar9);
    }
    lVar8 = *plVar18;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar9) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_06ae3138;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_03cf1348(plVar18,lVar9,1);
LAB_06ae3138:
    auVar23 = (*(code *)*puVar11)(plVar18,puVar11[1]);
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_08e6b820 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    *(undefined1 (*) [16])(unaff_x19 + 0x70) = auVar23;
    thunk_FUN_03d233cc(unaff_x19 + 0x70,0);
    puVar5 = PTR_DAT_08e6b808;
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x70);
    *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x78);
    uVar10 = FUN_036f7d54(unaff_x19 + 0x40,*(undefined8 *)puVar5);
    if ((uVar10 & 1) == 0) {
      *unaff_x28 = 1;
      uVar21 = *(undefined8 *)(unaff_x19 + 0x40);
      *(undefined8 *)(unaff_x28 + 0x30) = *(undefined8 *)(unaff_x19 + 0x48);
      *(undefined8 *)(unaff_x28 + 0x2e) = uVar21;
      thunk_FUN_03d233cc(unaff_x28 + 0x2e,0);
      lVar9 = *unaff_x27;
      uVar2 = *(ushort *)(lVar9 + 0x135);
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_03cf1244();
        uVar2 = *(ushort *)(*unaff_x27 + 0x135);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x58);
      if ((uVar2 & 1) == 0) {
        FUN_03cf1244();
      }
      (*pcVar16)(unaff_x28 + 2,unaff_x19 + 0x40);
      goto 
      System_Array_EmptyInternalEnumerator<fsAotCompilationManager_AotCompilation>__System_Collections_IEnumerator_Reset
      ;
    }
    plVar18 = *(long **)(unaff_x19 + 0x40);
    if (plVar18 == (long *)0x0) {
      if (*(char *)(unaff_x19 + 0x48) == '\0') goto LAB_06ae3244;
    }
    else {
      uVar3 = *(undefined2 *)(unaff_x19 + 0x4a);
      lVar9 = *(long *)(*(long *)PTR_DAT_08e6b800 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03cf1244();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03cf1244(lVar9);
      }
      lVar8 = *plVar18;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar9) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06ae3230;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_03cf1348(plVar18,lVar9,0);
LAB_06ae3230:
      uVar10 = (*(code *)*puVar11)(plVar18,uVar3,puVar11[1]);
      if ((uVar10 & 1) == 0) {
LAB_06ae3244:
        *(undefined8 *)(unaff_x28 + 0x1e) = 0;
        *(undefined8 *)(unaff_x28 + 0x20) = 0;
        *(undefined8 *)(unaff_x28 + 0x22) = 0;
        unaff_x28[0x1c] = 1;
        goto LAB_06ae3848;
      }
    }
    param_4 = *(long **)(unaff_x28 + 0x18);
    if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar9 = *unaff_x27;
    unaff_x23 = *(long *)(unaff_x28 + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244(lVar9);
    }
    lVar8 = *param_4;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar9) {
          lVar9 = lVar8 + (long)*piVar13 * 0x10 + 0x138;
          goto LAB_06ae2e74;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    lVar9 = FUN_03cf1348(param_4,lVar9,0);
LAB_06ae2e74:
    *(undefined8 **)(unaff_x19 + 0x70) = unaff_x22;
    param_3 = *(long *)(lVar9 + 8);
    param_2 = *(undefined8 *)(param_3 + 8);
    param_1 = *(code **)(param_3 + 0x10);
    param_5 = unaff_x19 + 0x70;
  }
  *unaff_x28 = 0;
  uVar22 = *(undefined8 *)(unaff_x19 + 0xd8);
  uVar20 = *(undefined8 *)(unaff_x19 + 0xd0);
  uVar19 = *(undefined8 *)(unaff_x19 + 0xe8);
  uVar21 = *(undefined8 *)(unaff_x19 + 0xe0);
  *(undefined8 *)(unaff_x28 + 0x2c) = *(undefined8 *)(unaff_x19 + 0xf0);
  *(undefined8 *)(unaff_x28 + 0x26) = uVar22;
  *(undefined8 *)(unaff_x28 + 0x24) = uVar20;
  *(undefined8 *)(unaff_x28 + 0x2a) = uVar19;
  *(undefined8 *)(unaff_x28 + 0x28) = uVar21;
  thunk_FUN_03d233cc(unaff_x28 + 0x24,0);
  lVar9 = *unaff_x27;
  uVar2 = *(ushort *)(lVar9 + 0x135);
  if ((uVar2 & 1) == 0) {
    lVar9 = FUN_03cf1244();
    uVar2 = *(ushort *)(*unaff_x27 + 0x135);
  }
  pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x40);
  if ((uVar2 & 1) == 0) {
    FUN_03cf1244();
  }
  (*pcVar16)(unaff_x28 + 2,unaff_x19 + 0xd0);

  System_Array_EmptyInternalEnumerator<fsAotCompilationManager_AotCompilation>__System_Collections_IEnumerator_Reset
  :
  if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x28) != *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;

  System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__System_Collections_IEnumerator_get_Current
  :
  plVar18 = *(long **)(unaff_x28 + 0x18);
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  unaff_x27 = *(long **)(unaff_x19 + 0x18);
  lVar9 = *unaff_x27;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_03cf1244();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_03cf1244(lVar9);
  }
  lVar8 = *plVar18;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar9) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_06ae373c;
      }
      uVar10 = uVar10 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar10 != 0);
  }
  puVar11 = (undefined8 *)FUN_03cf1348(plVar18,lVar9,1);
LAB_06ae373c:
  auVar23 = (*(code *)*puVar11)(plVar18,puVar11[1]);
  if ((*(byte *)(*(long *)(*(long *)PTR_DAT_08e6b820 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  *(undefined1 (*) [16])(unaff_x19 + 0x70) = auVar23;
  thunk_FUN_03d233cc(unaff_x19 + 0x70,0);
  puVar5 = PTR_DAT_08e6b808;
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x78);
  uVar10 = FUN_036f7d54(unaff_x19 + 0x40,*(undefined8 *)puVar5);
  if ((uVar10 & 1) == 0) {
    *unaff_x28 = 3;
    uVar21 = *(undefined8 *)(unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x28 + 0x30) = *(undefined8 *)(unaff_x19 + 0x48);
    *(undefined8 *)(unaff_x28 + 0x2e) = uVar21;
    thunk_FUN_03d233cc(unaff_x28 + 0x2e,0);
    lVar9 = *unaff_x27;
    uVar2 = *(ushort *)(lVar9 + 0x135);
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_03cf1244();
      uVar2 = *(ushort *)(*unaff_x27 + 0x135);
    }
    pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x58);
    if ((uVar2 & 1) == 0) {
      FUN_03cf1244();
    }
    (*pcVar16)(unaff_x28 + 2,unaff_x19 + 0x40);
    goto 
    System_Array_EmptyInternalEnumerator<fsAotCompilationManager_AotCompilation>__System_Collections_IEnumerator_Reset
    ;
  }
  plVar18 = *(long **)(unaff_x19 + 0x40);
  if (plVar18 == (long *)0x0) {
    if (*(char *)(unaff_x19 + 0x48) == '\0') goto LAB_06ae3848;
  }
  else {
    uVar3 = *(undefined2 *)(unaff_x19 + 0x4a);
    lVar9 = *(long *)(*(long *)PTR_DAT_08e6b800 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244(lVar9);
    }
    lVar8 = *plVar18;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar9) {
          puVar11 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06ae3834;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_03cf1348(plVar18,lVar9,0);
LAB_06ae3834:
    uVar10 = (*(code *)*puVar11)(plVar18,uVar3,puVar11[1]);
    if ((uVar10 & 1) == 0) goto LAB_06ae3848;
  }
  plVar18 = *(long **)(unaff_x28 + 0x18);
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar9 = *unaff_x27;
  lVar8 = *(long *)(unaff_x28 + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_03cf1244();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_03cf1244(lVar9);
  }
  lVar12 = *plVar18;
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar9) {
        lVar9 = lVar12 + (long)*piVar13 * 0x10 + 0x138;
        goto LAB_06ae3414;
      }
      uVar10 = uVar10 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar10 != 0);
  }
  lVar9 = FUN_03cf1348(plVar18,lVar9,0);
LAB_06ae3414:
  *(undefined8 **)(unaff_x19 + 0x70) = unaff_x22;
  lVar9 = *(long *)(lVar9 + 8);
  (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar18,unaff_x19 + 0x70);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar12 = *unaff_x27;
  uVar21 = *(undefined8 *)(unaff_x28 + 0xe);
  uVar2 = *(ushort *)(lVar12 + 0x135);
  lVar9 = lVar12;
  if ((uVar2 & 1) == 0) {
    lVar9 = FUN_03cf1244();
    lVar12 = *unaff_x27;
    uVar2 = *(ushort *)(lVar12 + 0x135);
  }
  uVar19 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x38);
  lVar9 = lVar12;
  if ((uVar2 & 1) == 0) {
    lVar9 = FUN_03cf1244();
    lVar12 = *unaff_x27;
    uVar2 = *(ushort *)(lVar12 + 0x135);
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
  if ((uVar2 & 1) == 0) {
    lVar12 = FUN_03cf1244();
  }
  puVar11 = unaff_x22;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x30) + 0x28)) {
    puVar11 = (undefined8 *)*unaff_x22;
  }
  *(undefined8 **)(unaff_x19 + 0x58) = puVar11;
  *(long *)(unaff_x19 + 0x60) = unaff_x19 + 0x68;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar21;
  (**(code **)(lVar9 + 0x10))(uVar19,lVar9,lVar8,unaff_x19 + 0x58,unaff_x19 + 0x70);
  puVar5 = PTR_DAT_08e83178;
  uVar19 = *(undefined8 *)(unaff_x19 + 0x78);
  uVar21 = *(undefined8 *)(unaff_x19 + 0x70);
  uVar22 = *(undefined8 *)(unaff_x19 + 0x88);
  uVar20 = *(undefined8 *)(unaff_x19 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar19;
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar21;
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar22;
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar20;
  lVar9 = *(long *)puVar5;
  *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
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
  uVar10 = FUN_037128b0(unaff_x19 + 0xd0,*(undefined8 *)puVar5);
  if ((uVar10 & 1) == 0) {
    *unaff_x28 = 2;
    uVar22 = *(undefined8 *)(unaff_x19 + 0xd8);
    uVar20 = *(undefined8 *)(unaff_x19 + 0xd0);
    uVar19 = *(undefined8 *)(unaff_x19 + 0xe8);
    uVar21 = *(undefined8 *)(unaff_x19 + 0xe0);
    *(undefined8 *)(unaff_x28 + 0x2c) = *(undefined8 *)(unaff_x19 + 0xf0);
    *(undefined8 *)(unaff_x28 + 0x26) = uVar22;
    *(undefined8 *)(unaff_x28 + 0x24) = uVar20;
    *(undefined8 *)(unaff_x28 + 0x2a) = uVar19;
    *(undefined8 *)(unaff_x28 + 0x28) = uVar21;
    thunk_FUN_03d233cc(unaff_x28 + 0x24,0);
    lVar9 = *unaff_x27;
    uVar2 = *(ushort *)(lVar9 + 0x135);
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_03cf1244();
      uVar2 = *(ushort *)(*unaff_x27 + 0x135);
    }
    pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x40);
    if ((uVar2 & 1) == 0) {
      FUN_03cf1244();
    }
    (*pcVar16)(unaff_x28 + 2,unaff_x19 + 0xd0);
    goto 
    System_Array_EmptyInternalEnumerator<fsAotCompilationManager_AotCompilation>__System_Collections_IEnumerator_Reset
    ;
  }
  plVar18 = *(long **)(unaff_x19 + 0xd0);
  if (plVar18 == (long *)0x0) {
    cVar1 = *(char *)(unaff_x19 + 0xd8);
    uVar14 = *(undefined4 *)(unaff_x21 + 9);
    uVar15 = *(undefined4 *)(unaff_x19 + 0xdc);
    uVar21 = *(undefined8 *)(unaff_x19 + 0xe0);
    uVar19 = *(undefined8 *)(unaff_x19 + 0xe8);
  }
  else {
    uVar3 = *(undefined2 *)(unaff_x19 + 0xf0);
    lVar9 = *(long *)(*(long *)PTR_DAT_08e83158 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244(lVar9);
    }
    lVar8 = *plVar18;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar9) {
          puVar11 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06ae35fc;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_03cf1348(plVar18,lVar9,0);
LAB_06ae35fc:
    (*(code *)*puVar11)(unaff_x19 + 0x70,plVar18,uVar3,puVar11[1]);
    cVar1 = *(char *)(unaff_x19 + 0x70);
    uVar14 = *(undefined4 *)(unaff_x19 + 0x71);
    uVar15 = *(undefined4 *)(unaff_x19 + 0x74);
    uVar21 = *(undefined8 *)(unaff_x19 + 0x78);
    uVar19 = *(undefined8 *)(unaff_x19 + 0x80);
  }
  *(undefined4 *)(unaff_x29 + -0x30) = uVar14;
  *(undefined4 *)(unaff_x21 + 0xb3) = uVar15;
  *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(unaff_x29 + -0x30);
  *(undefined4 *)(unaff_x19 + 0x3b) = uVar15;
  puVar5 = PTR_DAT_08e7fed8;
  if (cVar1 != '\0') {
    uVar15 = *(undefined4 *)((long)unaff_x28 + 0x49);
    cVar4 = *(char *)(unaff_x28 + 0x12);
    *(undefined4 *)(unaff_x19 + 0x53) = unaff_x28[0x13];
    lVar9 = *(long *)puVar5;
    *(undefined4 *)(unaff_x19 + 0x50) = uVar15;
    uVar20 = *(undefined8 *)(unaff_x28 + 0x14);
    uVar22 = *(undefined8 *)(unaff_x28 + 0x16);
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    bVar6 = FUN_07163464(uVar20,uVar22,uVar21,uVar19,0);
    unaff_x21 = unaff_x19 + 0xd0;
    if ((cVar4 != '\0' & bVar6) != 0) {
      *(char *)(unaff_x28 + 0x12) = cVar1;
      uVar15 = *(undefined4 *)(unaff_x19 + 0x38);
      unaff_x28[0x13] = *(undefined4 *)(unaff_x19 + 0x3b);
      *(undefined4 *)((long)unaff_x28 + 0x49) = uVar15;
      *(undefined8 *)(unaff_x28 + 0x14) = uVar21;
      *(undefined8 *)(unaff_x28 + 0x16) = uVar19;
    }
  }
  goto 
  System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__System_Collections_IEnumerator_get_Current
  ;
LAB_06ae3848:
  plVar18 = *(long **)(unaff_x28 + 0x18);
  if (plVar18 != (long *)0x0) {
    lVar9 = *plVar18;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08e82fe8) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06ae3b40;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_03cf1348(plVar18,*(long *)PTR_DAT_08e82fe8,0);
LAB_06ae3b40:
    auVar23 = (*(code *)*puVar11)(plVar18,puVar11[1]);
    puVar5 = PTR_DAT_08e69640;
    if (*(int *)(*(long *)PTR_DAT_08e69640 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar23;
    thunk_FUN_03d233cc(unaff_x29 + -0x30,0);
    cVar1 = DAT_0940ffed;
    uVar21 = *(undefined8 *)(unaff_x29 + -0x28);
    *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x29 + -0x30);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar21;
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
    plVar18 = *(long **)(unaff_x19 + 0x20);
    if (plVar18 != (long *)0x0) {
      lVar9 = *plVar18;
      uVar3 = *(undefined2 *)(unaff_x19 + 0x28);
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08e69648) {
            puVar11 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06ae3c34;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_03cf1348(plVar18,*(long *)PTR_DAT_08e69648,0);
LAB_06ae3c34:
      iVar7 = (*(code *)*puVar11)(plVar18,uVar3,puVar11[1]);
      if (iVar7 == 0) {
        *unaff_x28 = 4;
        uVar21 = *(undefined8 *)(unaff_x19 + 0x20);
        *(undefined8 *)(unaff_x28 + 0x34) = *(undefined8 *)(unaff_x19 + 0x28);
        *(undefined8 *)(unaff_x28 + 0x32) = uVar21;
        thunk_FUN_03d233cc(unaff_x28 + 0x32,0);
        lVar9 = *unaff_x27;
        uVar2 = *(ushort *)(lVar9 + 0x135);
        if ((uVar2 & 1) == 0) {
          lVar9 = FUN_03cf1244();
          uVar2 = *(ushort *)(*unaff_x27 + 0x135);
        }
        pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x60);
        if ((uVar2 & 1) == 0) {
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
    plVar18 = *(long **)(unaff_x19 + 0x20);
    if (plVar18 != (long *)0x0) {
      lVar9 = *plVar18;
      uVar3 = *(undefined2 *)(unaff_x19 + 0x28);
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08e69648) {
            puVar11 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_06ae2dd0;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_03cf1348(plVar18,*(long *)PTR_DAT_08e69648,2);
LAB_06ae2dd0:
      (*(code *)*puVar11)(plVar18,uVar3,puVar11[1]);
    }
  }
  plVar17 = (long *)(unaff_x28 + 0x1a);
  plVar18 = (long *)*plVar17;
  if (plVar18 != (long *)0x0) {
    bVar6 = *(byte *)(*(long *)PTR_DAT_08e695a0 + 0x130);
    if ((bVar6 <= *(byte *)(*plVar18 + 0x130)) &&
       (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar6 * 8 + -8) == *(long *)PTR_DAT_08e695a0))
    {
      lVar9 = FUN_0701b8d8(plVar18,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
                    /* WARNING: Subroutine does not return */
      FUN_0701b998(lVar9,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(plVar18,*(undefined8 *)(unaff_x19 + 8));
  }
  if (unaff_x28[0x1c] == 1) {
    puVar11 = (undefined8 *)(unaff_x28 + 0x1e);
  }
  else {
    *plVar17 = 0;
    thunk_FUN_03d233cc(plVar17,0);
    puVar11 = (undefined8 *)(unaff_x28 + 0x12);
    *(undefined8 *)(unaff_x28 + 0x1e) = 0;
    *(undefined8 *)(unaff_x28 + 0x20) = 0;
    *(undefined8 *)(unaff_x28 + 0x22) = 0;
  }
  uVar19 = puVar11[1];
  uVar21 = *puVar11;
  *(undefined8 *)(unaff_x29 + -0xa0) = puVar11[2];
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar19;
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar21;
  *unaff_x28 = 0xfffffffe;
  *(undefined8 *)(unaff_x28 + 0x18) = 0;
  thunk_FUN_03d233cc(unaff_x28 + 0x18,0);
  puVar5 = PTR_DAT_08e83150;
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0xa8);
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0xb0);
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0xa0);
  plVar18 = *(long **)(unaff_x28 + 2);
  lVar9 = *(long *)puVar5;
  if (plVar18 == (long *)0x0) {
    uVar19 = *(undefined8 *)(unaff_x29 + -0x88);
    uVar21 = *(undefined8 *)(unaff_x29 + -0x90);
    *(undefined8 *)(unaff_x28 + 10) = *(undefined8 *)(unaff_x29 + -0x80);
    *(undefined8 *)(unaff_x28 + 8) = uVar19;
    *(undefined8 *)(unaff_x28 + 6) = uVar21;
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x88);
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x90);
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x80);
    lVar9 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244(lVar9);
    }
    *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x48);
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x50);
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x40);
    lVar8 = *plVar18;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar9) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_06ae3aa4;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_03cf1348(plVar18,lVar9,2);
LAB_06ae3aa4:
    pcVar16 = (code *)*puVar11;
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x68);
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x70);
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x60);
    (*pcVar16)(plVar18,unaff_x29 + -0x30,puVar11[1]);
  }
  goto 
  System_Array_EmptyInternalEnumerator<fsAotCompilationManager_AotCompilation>__System_Collections_IEnumerator_Reset
  ;
}


