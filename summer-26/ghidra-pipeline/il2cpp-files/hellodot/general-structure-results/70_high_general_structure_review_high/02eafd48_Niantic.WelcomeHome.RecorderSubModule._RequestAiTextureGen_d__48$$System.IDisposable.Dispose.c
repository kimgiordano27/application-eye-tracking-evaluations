/*
FUNCTION_NAME: Niantic.WelcomeHome.RecorderSubModule.<RequestAiTextureGen>d__48$$System.IDisposable.Dispose
ENTRY_POINT: 02eafd48
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Niantic_WelcomeHome_RecorderSubModule_<RequestAiTextureGen>d__48__System_IDisposable_Dispose
               (void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar18;
  char *pcVar19;
  long lVar20;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  
  puVar8 = (undefined8 *)FUN_02ce0a7c();
  plVar9 = (long *)(*(code *)*puVar8)();
  *(long **)(unaff_x19 + 0x210) = plVar9;
  if (*(char *)(unaff_x21 + 0x4c) == '\0') {
    if (plVar9 == (long *)0x0) goto LAB_02eb0cec;
    lVar13 = *plVar9;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065ceef0) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar17 + 5) * 0x10 + 0x138);
          goto LAB_02eafe5c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065ceef0,5);
LAB_02eafe5c:
    pcVar14 = (code *)*puVar8;
    uVar10 = puVar8[1];
    uVar6 = 1;
  }
  else {
    uVar6 = FUN_03c86c80((char *)(unaff_x21 + 0x4c),*(undefined8 *)PTR_DAT_065cefb8);
    if (plVar9 == (long *)0x0) goto LAB_02eb0cec;
    lVar13 = *plVar9;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065ceef0) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar17 + 5) * 0x10 + 0x138);
          goto LAB_02eafe3c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065ceef0,5);
LAB_02eafe3c:
    pcVar14 = (code *)*puVar8;
    uVar10 = puVar8[1];
  }
  (*pcVar14)(plVar9,uVar6,uVar10);
  cVar2 = *(char *)(unaff_x21 + 0x7c);
  *(char *)(unaff_x19 + 0x354) = cVar2;
  if (cVar2 == '\0') {
    lVar13 = FUN_05ef2cf0();
    if (lVar13 == 0) goto LAB_02eb0cec;
    FUN_05efa208(lVar13,*(undefined8 *)PTR_DAT_065cefd0,0);
  }
  puVar4 = PTR_DAT_065ceea0;
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    plVar9 = (long *)FUN_02fc5f04();
    *(long **)(unaff_x19 + 0x2b0) = plVar9;
    uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
    FUN_0487a808();
    puVar5 = PTR_DAT_065cef88;
    if (plVar9 == (long *)0x0) goto LAB_02eb0cec;
    lVar13 = *plVar9;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065cef88) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02eaff40;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065cef88,0);
LAB_02eaff40:
    (*(code *)*puVar8)(plVar9,uVar10,puVar8[1]);
    if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_02eb0cec;
    plVar9 = (long *)FUN_02fc5f04();
    *(long **)(unaff_x19 + 0x2b8) = plVar9;
    uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
    FUN_0487a808();
    if (plVar9 == (long *)0x0) goto LAB_02eb0cec;
    lVar13 = *plVar9;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02eaffe4;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar5,0);
LAB_02eaffe4:
    (*(code *)*puVar8)(plVar9,uVar10,puVar8[1]);
  }
  puVar4 = PTR_DAT_065c8998;
  if (*(char *)(unaff_x21 + 0x4c) == '\0') {
    bVar3 = false;
  }
  else {
    bVar3 = *(ulong *)(unaff_x21 + 0x4c) >> 0x20 == 2 && (*(ulong *)(unaff_x21 + 0x4c) & 0xff) != 0;
  }
  plVar9 = *(long **)(unaff_x19 + 0x288);
  if (plVar9 != (long *)0x0) {
    lVar13 = *plVar9;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065ca750) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto 
          Niantic_WelcomeHome_RecorderSubModule_<RequestAiTextureGen>d__49__System_IDisposable_Dispose
          ;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065ca750,0);
Niantic_WelcomeHome_RecorderSubModule_<RequestAiTextureGen>d__49__System_IDisposable_Dispose:
    (*(code *)*puVar8)(plVar9,puVar8[1]);
  }
  uVar18 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
  FUN_04e9e238();
  FUN_061b3164(uVar18,uVar10,0);
  if (*(long *)(unaff_x19 + 0x1f0) == 0) goto LAB_02eb0cec;
  *(undefined1 *)(*(long *)(unaff_x19 + 0x1f0) + 0x111) = 0;
  if (*(long *)(unaff_x19 + 0x1f8) == 0) goto LAB_02eb0cec;
  *(undefined1 *)(*(long *)(unaff_x19 + 0x1f8) + 0x111) = 0;
  plVar9 = *(long **)(unaff_x19 + 0x28);
  uVar10 = FUN_05ef2cf0();
  uVar18 = FUN_02eb0dc0();
  if (plVar9 == (long *)0x0) goto LAB_02eb0cec;
  lVar13 = *plVar9;
  uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065ca660) {
        puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_02eb0158;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar8 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065ca660,0);
LAB_02eb0158:
  uVar10 = (*(code *)*puVar8)(plVar9,uVar10,uVar18,0,puVar8[1]);
  *(undefined8 *)(unaff_x19 + 0x290) = uVar10;
  if ((*(char *)(unaff_x19 + 0x354) != '\0') && ((!bVar3 || (*(char *)(unaff_x19 + 0x208) == '\0')))
     ) {
    FUN_02eb0e28();
  }
  if (*(char *)(unaff_x19 + 0x341) == '\0') {
    if (*(long *)(unaff_x19 + 0xd8) == 0) goto LAB_02eb0cec;
    FUN_02e19bec(*(long *)(unaff_x19 + 0xd8),0);
    lVar13 = *(long *)(unaff_x19 + 0xd8);
    uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
    FUN_04e9e238();
    if (lVar13 == 0) goto LAB_02eb0cec;
    FUN_02e1997c(lVar13,uVar10,0);
    lVar13 = *(long *)(unaff_x19 + 0xd8);
    uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
    FUN_04e9e238();
    if (lVar13 == 0) goto LAB_02eb0cec;
    FUN_02e19ab4(lVar13,uVar10,0);
    *(undefined1 *)(unaff_x19 + 0x341) = 1;
  }
  FUN_02eb102c();
  if (*(char *)(unaff_x19 + 0x342) == '\0') {
    if (((*(long *)(unaff_x19 + 0xd0) == 0) ||
        (FUN_03049060(*(long *)(unaff_x19 + 0xd0),*(undefined8 *)(unaff_x19 + 0x138),0),
        *(long *)(unaff_x19 + 0xc0) == 0)) ||
       (System_Array__InternalArray__ICollection_Remove<Keyframe>(), *(long *)(unaff_x19 + 200) == 0
       )) goto LAB_02eb0cec;
    FUN_030437f4();
    if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_02eb0cec;
    FUN_03041100(*(long *)(unaff_x19 + 0xc0),1,0);
    *(undefined1 *)(unaff_x19 + 0x342) = 1;
  }
  FUN_02eb11f0();
  pcVar19 = (char *)(unaff_x21 + 0x74);
  *(undefined8 *)(unaff_x19 + 0x344) = *(undefined8 *)pcVar19;
  puVar5 = PTR_DAT_065cefb0;
  lVar13 = *(long *)(unaff_x19 + 0x100);
  if (lVar13 == 0) goto LAB_02eb0cec;
  if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
    uVar16 = 0;
    uVar15 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
    do {
      if (uVar15 <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      if (*pcVar19 != '\0') {
        lVar11 = *(long *)(lVar13 + 0x20 + uVar16 * 8);
        if (lVar11 == 0) goto LAB_02eb0cec;
        lVar11 = FUN_05ef2cf0(lVar11,0);
        uVar6 = FUN_03c868c4(pcVar19,*(undefined8 *)puVar5);
        if (lVar11 == 0) goto LAB_02eb0cec;
        FUN_05ef5fec(lVar11,uVar6,0);
      }
      uVar15 = (ulong)*(uint *)(lVar13 + 0x18);
      uVar16 = uVar16 + 1;
    } while ((long)uVar16 < (long)(int)*(uint *)(lVar13 + 0x18));
  }
  uVar10 = *(undefined8 *)(unaff_x21 + 0x58);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar16 = FUN_05ef739c(uVar10,0,0);
  if ((uVar16 & 1) == 0) {
    *(undefined8 *)(unaff_x19 + 0x228) = *(undefined8 *)(unaff_x21 + 0x58);
    FUN_02eb162c();
    if (unaff_x20 == 0) goto LAB_02eb0cec;
    FUN_03dc781c();
  }
  else {
    if (*(char *)(unaff_x21 + 0x70) == '\0') {
      uVar10 = FUN_02e88184(0);
      if (*(char *)(unaff_x21 + 0x7c) != '\0') {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar16 = FUN_05ef59b8(uVar10,0,0);
        if ((uVar16 & 1) != 0) {
          FUN_02eb1554();
          goto FUN_02eb0434;
        }
      }
      if (*(char *)(unaff_x21 + 0x60) == '\0') {
        FUN_02e87060(0);
      }
    }
    FUN_02eb12c4();
  }
FUN_02eb0434:
  if (*(char *)(unaff_x19 + 0x354) == '\0') {
    lVar13 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cef20);
    FUN_02f66840(lVar13,0);
    plVar9 = *(long **)(unaff_x19 + 0x40);
    if (plVar9 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      lVar11 = *plVar9;
      uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065cc3f8) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar17 + 2) * 0x10 + 0x138);
            goto LAB_02eb059c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065cc3f8,2);
LAB_02eb059c:
      uVar7 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    }
    uVar10 = FUN_02e6c660(0x3f800000,uVar7 & 1,0);
    if (lVar13 == 0) goto LAB_02eb0cec;
    *(undefined8 *)(lVar13 + 0x20) = uVar10;
    uVar10 = FUN_02e63898(0);
    *(undefined8 *)(lVar13 + 0x18) = uVar10;
    if (unaff_x19 == 0) goto LAB_02eb0cec;
    *(long *)(unaff_x19 + 0x358) = lVar13;
    plVar9 = *(long **)(unaff_x19 + 0x28);
    uVar10 = FUN_02eb1cac();
    if (plVar9 == (long *)0x0) goto LAB_02eb0cec;
    lVar13 = *plVar9;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065ca5a0) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02eb063c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065ca5a0,0);
LAB_02eb063c:
    (*(code *)*puVar8)(plVar9,uVar10,puVar8[1]);
  }
  else {
    lVar13 = FUN_02eb1714();
    *(long *)(unaff_x19 + 0x358) = lVar13;
    if (lVar13 == 0) goto LAB_02eb0cec;
    if (*(long *)(lVar13 + 0x18) == 0) {
      if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_05eb364c(*(undefined8 *)PTR_DAT_065cefd8,0);
      lVar13 = *(long *)(unaff_x19 + 0x358);
      uVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ca5f0);
      FUN_02f66dac(uVar10,0);
      if (lVar13 == 0) goto LAB_02eb0cec;
      *(undefined8 *)(lVar13 + 0x18) = uVar10;
    }
    FUN_02e883bc(0);
    FUN_02eb19dc();
    FUN_02e88474(0);
    FUN_02eb19dc();
    FUN_02e8852c(0);
    FUN_02eb19dc();
  }
  uVar10 = *(undefined8 *)(unaff_x19 + 0x78);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar16 = FUN_05ef59b8(uVar10,0,0);
  if ((uVar16 & 1) != 0) {
    lVar13 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cefc8);
    FUN_02eb8288(lVar13,0);
    plVar9 = *(long **)(unaff_x19 + 0x40);
    if (plVar9 != (long *)0x0) {
      lVar11 = *plVar9;
      uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065cc3f8) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
            goto Niantic_WelcomeHome_RecorderSubModule_<WhileTurnTableGrabbed>d__64__MoveNext;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065cc3f8,0);
Niantic_WelcomeHome_RecorderSubModule_<WhileTurnTableGrabbed>d__64__MoveNext:
      uVar16 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      lVar11 = *(long *)(unaff_x19 + 0x78);
      if ((uVar16 & 1) == 0) {
        if ((lVar11 == 0) || (*(long *)(lVar11 + 0xb0) == 0)) goto LAB_02eb0cec;
        *(bool *)(unaff_x19 + 0x208) = 0 < *(int *)(*(long *)(lVar11 + 0xb0) + 0x24);
      }
      else {
        *(undefined1 *)(unaff_x19 + 0x208) = 1;
        if (lVar11 == 0) goto LAB_02eb0cec;
      }
      puVar5 = PTR_DAT_065ca950;
      lVar11 = *(long *)(lVar11 + 0xb0);
      if (lVar11 == 0) goto LAB_02eb0cec;
      uVar18 = *(undefined8 *)(lVar11 + 0x30);
      uVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ca950);
      FUN_047b3b70();
      plVar9 = (long *)FUN_04f76b7c(uVar18,uVar10,0);
      if (plVar9 == (long *)0x0) {
        *(undefined8 *)(lVar11 + 0x30) = 0;
      }
      else {
        lVar20 = *(long *)puVar5;
        lVar12 = thunk_FUN_02cea798(plVar9,lVar20);
        if (lVar12 == 0) goto LAB_02eb0af0;
        *(long *)(lVar11 + 0x30) = lVar12;
        lVar20 = *(long *)puVar5;
        lVar11 = thunk_FUN_02cea798(plVar9,lVar20);
        if (lVar11 == 0) goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
         (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x118), lVar11 == 0)) goto LAB_02eb0cec;
      uVar18 = *(undefined8 *)(lVar11 + 0x30);
      uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar5);
      FUN_047b3b70();
      plVar9 = (long *)FUN_04f76b7c(uVar18,uVar10,0);
      if (plVar9 == (long *)0x0) {
        *(undefined8 *)(lVar11 + 0x30) = 0;
      }
      else {
        lVar20 = *(long *)puVar5;
        lVar12 = thunk_FUN_02cea798(plVar9,lVar20);
        if (lVar12 == 0) goto LAB_02eb0af0;
        *(long *)(lVar11 + 0x30) = lVar12;
        lVar20 = *(long *)puVar5;
        lVar11 = thunk_FUN_02cea798(plVar9,lVar20);
        if (lVar11 == 0) goto LAB_02eb0af0;
      }
      uVar18 = *(undefined8 *)(unaff_x19 + 0x2d8);
      plVar1 = (long *)(unaff_x19 + 0x2d8);
      uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
      FUN_04e9e238();
      plVar9 = (long *)FUN_04f76b7c(uVar18,uVar10,0);
      if (plVar9 == (long *)0x0) {
        *plVar1 = 0;
      }
      else {
        lVar20 = *(long *)puVar4;
        if ((*plVar9 != lVar20) || (*plVar1 = (long)plVar9, *plVar9 != lVar20)) goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
         (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0xb8), lVar11 == 0)) goto LAB_02eb0cec;
      uVar18 = *(undefined8 *)(lVar11 + 0x30);
      uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar5);
      FUN_047b3b70();
      plVar9 = (long *)FUN_04f76b7c(uVar18,uVar10,0);
      if (plVar9 == (long *)0x0) {
        *(undefined8 *)(lVar11 + 0x30) = 0;
      }
      else {
        lVar20 = *(long *)puVar5;
        lVar12 = thunk_FUN_02cea798(plVar9,lVar20);
        if (lVar12 == 0) goto LAB_02eb0af0;
        *(long *)(lVar11 + 0x30) = lVar12;
        lVar20 = *(long *)puVar5;
        lVar11 = thunk_FUN_02cea798(plVar9,lVar20);
        if (lVar11 == 0) goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
         (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x78) + 200), lVar11 == 0)) goto LAB_02eb0cec;
      uVar18 = *(undefined8 *)(lVar11 + 0x30);
      uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar5);
      FUN_047b3b70();
      plVar9 = (long *)FUN_04f76b7c(uVar18,uVar10,0);
      if (plVar9 == (long *)0x0) {
        *(undefined8 *)(lVar11 + 0x30) = 0;
      }
      else {
        lVar20 = *(long *)puVar5;
        lVar12 = thunk_FUN_02cea798(plVar9,lVar20);
        if (lVar12 == 0) goto LAB_02eb0af0;
        *(long *)(lVar11 + 0x30) = lVar12;
        lVar20 = *(long *)puVar5;
        lVar11 = thunk_FUN_02cea798(plVar9,lVar20);
        if (lVar11 == 0) goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
         (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0xc0), lVar11 == 0)) goto LAB_02eb0cec;
      uVar18 = *(undefined8 *)(lVar11 + 0x30);
      uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar5);
      FUN_047b3b70();
      plVar9 = (long *)FUN_04f76b7c(uVar18,uVar10,0);
      if (plVar9 == (long *)0x0) {
        *(undefined8 *)(lVar11 + 0x30) = 0;
      }
      else {
        lVar20 = *(long *)puVar5;
        lVar12 = thunk_FUN_02cea798(plVar9,lVar20);
        if (lVar12 == 0) goto LAB_02eb0af0;
        *(long *)(lVar11 + 0x30) = lVar12;
        lVar20 = *(long *)puVar5;
        lVar11 = thunk_FUN_02cea798(plVar9,lVar20);
        if (lVar11 == 0) goto LAB_02eb0af0;
      }
      FUN_02eb1d14();
      uVar18 = *(undefined8 *)(unaff_x19 + 0x2d8);
      uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
      FUN_04e9e238();
      plVar9 = (long *)FUN_04f76b7c(uVar18,uVar10,0);
      if (plVar9 == (long *)0x0) {
        *plVar1 = 0;
      }
      else {
        lVar20 = *(long *)puVar4;
        if ((*plVar9 != lVar20) || (*plVar1 = (long)plVar9, *plVar9 != lVar20)) goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
         (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x128), lVar11 == 0)) goto LAB_02eb0cec;
      uVar18 = *(undefined8 *)(lVar11 + 0x30);
      uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar5);
      FUN_047b3b70();
      plVar9 = (long *)FUN_04f76b7c(uVar18,uVar10,0);
      if (plVar9 == (long *)0x0) {
        *(undefined8 *)(lVar11 + 0x30) = 0;
      }
      else {
        lVar20 = *(long *)puVar5;
        lVar12 = thunk_FUN_02cea798(plVar9,lVar20);
        if (lVar12 == 0) goto LAB_02eb0af0;
        *(long *)(lVar11 + 0x30) = lVar12;
        lVar20 = *(long *)puVar5;
        lVar11 = thunk_FUN_02cea798(plVar9,lVar20);
        if (lVar11 == 0) goto LAB_02eb0af0;
      }
      uVar18 = *(undefined8 *)(unaff_x19 + 0x2d8);
      uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
      FUN_04e9e238();
      plVar9 = (long *)FUN_04f76b7c(uVar18,uVar10,0);
      puVar5 = PTR_DAT_065ca660;
      if (plVar9 == (long *)0x0) {
        *plVar1 = 0;
      }
      else {
        lVar20 = *(long *)puVar4;
        if ((*plVar9 != lVar20) || (*plVar1 = (long)plVar9, *plVar9 != lVar20)) goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) != 0) &&
         (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x118), lVar11 != 0)) {
        in_stack_00000008._4_4_ = *(undefined4 *)(lVar11 + 0x24);
        thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065c8a08,(long)&stack0x00000008 + 4);
        FUN_02eb2218();
        plVar9 = *(long **)(unaff_x19 + 0x28);
        uVar10 = FUN_05ef2cf0();
        uVar18 = FUN_02eb2290();
        if (plVar9 != (long *)0x0) {
          lVar11 = *plVar9;
          uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
                puVar8 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_02eb0c0c;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar8 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar5,0);
LAB_02eb0c0c:
          uVar10 = (*(code *)*puVar8)(plVar9,uVar10,uVar18,0,puVar8[1]);
          if (lVar13 != 0) {
            *(undefined8 *)(lVar13 + 0x10) = uVar10;
            lVar11 = *plVar1;
            uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
            FUN_04e9e238(uVar10,lVar13,*(undefined8 *)PTR_DAT_065cefc0,0);
            plVar9 = (long *)FUN_04f76b7c(lVar11,uVar10,0);
            if (plVar9 == (long *)0x0) {
              *plVar1 = 0;
            }
            else {
              lVar20 = *(long *)puVar4;
              if ((*plVar9 != lVar20) || (*plVar1 = (long)plVar9, *plVar9 != lVar20)) {
LAB_02eb0af0:
                    /* WARNING: Subroutine does not return */
                FUN_02ce8018(plVar9,lVar20);
              }
            }
            goto LAB_02eb0c90;
          }
        }
      }
    }
LAB_02eb0cec:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
LAB_02eb0c90:
  FUN_02eae5c0(0,0);
  return;
}


