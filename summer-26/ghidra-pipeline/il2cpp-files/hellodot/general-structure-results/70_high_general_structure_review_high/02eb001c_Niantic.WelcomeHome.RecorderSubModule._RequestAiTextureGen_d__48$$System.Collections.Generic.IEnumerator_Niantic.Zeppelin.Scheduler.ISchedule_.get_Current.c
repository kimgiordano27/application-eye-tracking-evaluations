/*
FUNCTION_NAME: Niantic.WelcomeHome.RecorderSubModule.<RequestAiTextureGen>d__48$$System.Collections.Generic.IEnumerator<Niantic.Zeppelin.Scheduler.ISchedule>.get_Current
ENTRY_POINT: 02eb001c
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02eb0180) */

void Niantic_WelcomeHome_RecorderSubModule_<RequestAiTextureGen>d__48__System_Collections_Generic_IEnumerator<Niantic_Zeppelin_Scheduler_ISchedule>_get_Current
               (void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar14;
  undefined8 uVar15;
  char *pcVar16;
  long lVar17;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  
  puVar2 = PTR_DAT_065c8998;
  plVar14 = *(long **)(unaff_x19 + 0x288);
  if (plVar14 != (long *)0x0) {
    lVar10 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065ca750) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto 
          Niantic_WelcomeHome_RecorderSubModule_<RequestAiTextureGen>d__49__System_IDisposable_Dispose
          ;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065ca750,0);
Niantic_WelcomeHome_RecorderSubModule_<RequestAiTextureGen>d__49__System_IDisposable_Dispose:
    (*(code *)*puVar6)(plVar14,puVar6[1]);
  }
  uVar15 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_04e9e238();
  FUN_061b3164(uVar15,uVar7,0);
  if (*(long *)(unaff_x19 + 0x1f0) == 0) goto LAB_02eb0cec;
  *(undefined1 *)(*(long *)(unaff_x19 + 0x1f0) + 0x111) = 0;
  if (*(long *)(unaff_x19 + 0x1f8) == 0) goto LAB_02eb0cec;
  *(undefined1 *)(*(long *)(unaff_x19 + 0x1f8) + 0x111) = 0;
  plVar14 = *(long **)(unaff_x19 + 0x28);
  uVar7 = FUN_05ef2cf0();
  uVar15 = FUN_02eb0dc0();
  if (plVar14 == (long *)0x0) goto LAB_02eb0cec;
  lVar10 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065ca660) {
        puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_02eb0158;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065ca660,0);
LAB_02eb0158:
  uVar7 = (*(code *)*puVar6)(plVar14,uVar7,uVar15,0,puVar6[1]);
  *(undefined8 *)(unaff_x19 + 0x290) = uVar7;
  if (*(char *)(unaff_x19 + 0x354) != '\0') {
    FUN_02eb0e28();
  }
  if (*(char *)(unaff_x19 + 0x341) == '\0') {
    if (*(long *)(unaff_x19 + 0xd8) == 0) goto LAB_02eb0cec;
    FUN_02e19bec(*(long *)(unaff_x19 + 0xd8),0);
    lVar10 = *(long *)(unaff_x19 + 0xd8);
    uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
    FUN_04e9e238();
    if (lVar10 == 0) goto LAB_02eb0cec;
    FUN_02e1997c(lVar10,uVar7,0);
    lVar10 = *(long *)(unaff_x19 + 0xd8);
    uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
    FUN_04e9e238();
    if (lVar10 == 0) goto LAB_02eb0cec;
    FUN_02e19ab4(lVar10,uVar7,0);
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
  pcVar16 = (char *)(unaff_x21 + 0x74);
  *(undefined8 *)(unaff_x19 + 0x344) = *(undefined8 *)pcVar16;
  puVar3 = PTR_DAT_065cefb0;
  lVar10 = *(long *)(unaff_x19 + 0x100);
  if (lVar10 == 0) goto LAB_02eb0cec;
  if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
    uVar12 = 0;
    uVar11 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
    do {
      if (uVar11 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      if (*pcVar16 != '\0') {
        lVar8 = *(long *)(lVar10 + 0x20 + uVar12 * 8);
        if (lVar8 == 0) goto LAB_02eb0cec;
        lVar8 = FUN_05ef2cf0(lVar8,0);
        uVar4 = FUN_03c868c4(pcVar16,*(undefined8 *)puVar3);
        if (lVar8 == 0) goto LAB_02eb0cec;
        FUN_05ef5fec(lVar8,uVar4,0);
      }
      uVar11 = (ulong)*(uint *)(lVar10 + 0x18);
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)(int)*(uint *)(lVar10 + 0x18));
  }
  uVar7 = *(undefined8 *)(unaff_x21 + 0x58);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar12 = FUN_05ef739c(uVar7,0,0);
  if ((uVar12 & 1) == 0) {
    *(undefined8 *)(unaff_x19 + 0x228) = *(undefined8 *)(unaff_x21 + 0x58);
    FUN_02eb162c();
    if (unaff_x20 == 0) goto LAB_02eb0cec;
    FUN_03dc781c();
  }
  else {
    if (*(char *)(unaff_x21 + 0x70) == '\0') {
      uVar7 = FUN_02e88184(0);
      if (*(char *)(unaff_x21 + 0x7c) != '\0') {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar12 = FUN_05ef59b8(uVar7,0,0);
        if ((uVar12 & 1) != 0) {
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
    lVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cef20);
    FUN_02f66840(lVar10,0);
    plVar14 = *(long **)(unaff_x19 + 0x40);
    if (plVar14 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      lVar8 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065cc3f8) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_02eb059c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065cc3f8,2);
LAB_02eb059c:
      uVar5 = (*(code *)*puVar6)(plVar14,puVar6[1]);
    }
    uVar7 = FUN_02e6c660(0x3f800000,uVar5 & 1,0);
    if (lVar10 == 0) goto LAB_02eb0cec;
    *(undefined8 *)(lVar10 + 0x20) = uVar7;
    uVar7 = FUN_02e63898(0);
    *(undefined8 *)(lVar10 + 0x18) = uVar7;
    if (unaff_x19 == 0) goto LAB_02eb0cec;
    *(long *)(unaff_x19 + 0x358) = lVar10;
    plVar14 = *(long **)(unaff_x19 + 0x28);
    uVar7 = FUN_02eb1cac();
    if (plVar14 == (long *)0x0) goto LAB_02eb0cec;
    lVar10 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065ca5a0) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02eb063c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065ca5a0,0);
LAB_02eb063c:
    (*(code *)*puVar6)(plVar14,uVar7,puVar6[1]);
  }
  else {
    lVar10 = FUN_02eb1714();
    *(long *)(unaff_x19 + 0x358) = lVar10;
    if (lVar10 == 0) goto LAB_02eb0cec;
    if (*(long *)(lVar10 + 0x18) == 0) {
      if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_05eb364c(*(undefined8 *)PTR_DAT_065cefd8,0);
      lVar10 = *(long *)(unaff_x19 + 0x358);
      uVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ca5f0);
      FUN_02f66dac(uVar7,0);
      if (lVar10 == 0) goto LAB_02eb0cec;
      *(undefined8 *)(lVar10 + 0x18) = uVar7;
    }
    FUN_02e883bc(0);
    FUN_02eb19dc();
    FUN_02e88474(0);
    FUN_02eb19dc();
    FUN_02e8852c(0);
    FUN_02eb19dc();
  }
  uVar7 = *(undefined8 *)(unaff_x19 + 0x78);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar12 = FUN_05ef59b8(uVar7,0,0);
  if ((uVar12 & 1) != 0) {
    lVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cefc8);
    FUN_02eb8288(lVar10,0);
    plVar14 = *(long **)(unaff_x19 + 0x40);
    if (plVar14 != (long *)0x0) {
      lVar8 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065cc3f8) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto Niantic_WelcomeHome_RecorderSubModule_<WhileTurnTableGrabbed>d__64__MoveNext;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065cc3f8,0);
Niantic_WelcomeHome_RecorderSubModule_<WhileTurnTableGrabbed>d__64__MoveNext:
      uVar12 = (*(code *)*puVar6)(plVar14,puVar6[1]);
      lVar8 = *(long *)(unaff_x19 + 0x78);
      if ((uVar12 & 1) == 0) {
        if ((lVar8 == 0) || (*(long *)(lVar8 + 0xb0) == 0)) goto LAB_02eb0cec;
        *(bool *)(unaff_x19 + 0x208) = 0 < *(int *)(*(long *)(lVar8 + 0xb0) + 0x24);
      }
      else {
        *(undefined1 *)(unaff_x19 + 0x208) = 1;
        if (lVar8 == 0) goto LAB_02eb0cec;
      }
      puVar3 = PTR_DAT_065ca950;
      lVar8 = *(long *)(lVar8 + 0xb0);
      if (lVar8 == 0) goto LAB_02eb0cec;
      uVar15 = *(undefined8 *)(lVar8 + 0x30);
      uVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ca950);
      FUN_047b3b70();
      plVar14 = (long *)FUN_04f76b7c(uVar15,uVar7,0);
      if (plVar14 == (long *)0x0) {
        *(undefined8 *)(lVar8 + 0x30) = 0;
      }
      else {
        lVar17 = *(long *)puVar3;
        lVar9 = thunk_FUN_02cea798(plVar14,lVar17);
        if (lVar9 == 0) goto LAB_02eb0af0;
        *(long *)(lVar8 + 0x30) = lVar9;
        lVar17 = *(long *)puVar3;
        lVar8 = thunk_FUN_02cea798(plVar14,lVar17);
        if (lVar8 == 0) goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
         (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x118), lVar8 == 0)) goto LAB_02eb0cec;
      uVar15 = *(undefined8 *)(lVar8 + 0x30);
      uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
      FUN_047b3b70();
      plVar14 = (long *)FUN_04f76b7c(uVar15,uVar7,0);
      if (plVar14 == (long *)0x0) {
        *(undefined8 *)(lVar8 + 0x30) = 0;
      }
      else {
        lVar17 = *(long *)puVar3;
        lVar9 = thunk_FUN_02cea798(plVar14,lVar17);
        if (lVar9 == 0) goto LAB_02eb0af0;
        *(long *)(lVar8 + 0x30) = lVar9;
        lVar17 = *(long *)puVar3;
        lVar8 = thunk_FUN_02cea798(plVar14,lVar17);
        if (lVar8 == 0) goto LAB_02eb0af0;
      }
      uVar15 = *(undefined8 *)(unaff_x19 + 0x2d8);
      plVar1 = (long *)(unaff_x19 + 0x2d8);
      uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
      FUN_04e9e238();
      plVar14 = (long *)FUN_04f76b7c(uVar15,uVar7,0);
      if (plVar14 == (long *)0x0) {
        *plVar1 = 0;
      }
      else {
        lVar17 = *(long *)puVar2;
        if ((*plVar14 != lVar17) || (*plVar1 = (long)plVar14, *plVar14 != lVar17))
        goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
         (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0xb8), lVar8 == 0)) goto LAB_02eb0cec;
      uVar15 = *(undefined8 *)(lVar8 + 0x30);
      uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
      FUN_047b3b70();
      plVar14 = (long *)FUN_04f76b7c(uVar15,uVar7,0);
      if (plVar14 == (long *)0x0) {
        *(undefined8 *)(lVar8 + 0x30) = 0;
      }
      else {
        lVar17 = *(long *)puVar3;
        lVar9 = thunk_FUN_02cea798(plVar14,lVar17);
        if (lVar9 == 0) goto LAB_02eb0af0;
        *(long *)(lVar8 + 0x30) = lVar9;
        lVar17 = *(long *)puVar3;
        lVar8 = thunk_FUN_02cea798(plVar14,lVar17);
        if (lVar8 == 0) goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
         (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x78) + 200), lVar8 == 0)) goto LAB_02eb0cec;
      uVar15 = *(undefined8 *)(lVar8 + 0x30);
      uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
      FUN_047b3b70();
      plVar14 = (long *)FUN_04f76b7c(uVar15,uVar7,0);
      if (plVar14 == (long *)0x0) {
        *(undefined8 *)(lVar8 + 0x30) = 0;
      }
      else {
        lVar17 = *(long *)puVar3;
        lVar9 = thunk_FUN_02cea798(plVar14,lVar17);
        if (lVar9 == 0) goto LAB_02eb0af0;
        *(long *)(lVar8 + 0x30) = lVar9;
        lVar17 = *(long *)puVar3;
        lVar8 = thunk_FUN_02cea798(plVar14,lVar17);
        if (lVar8 == 0) goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
         (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0xc0), lVar8 == 0)) goto LAB_02eb0cec;
      uVar15 = *(undefined8 *)(lVar8 + 0x30);
      uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
      FUN_047b3b70();
      plVar14 = (long *)FUN_04f76b7c(uVar15,uVar7,0);
      if (plVar14 == (long *)0x0) {
        *(undefined8 *)(lVar8 + 0x30) = 0;
      }
      else {
        lVar17 = *(long *)puVar3;
        lVar9 = thunk_FUN_02cea798(plVar14,lVar17);
        if (lVar9 == 0) goto LAB_02eb0af0;
        *(long *)(lVar8 + 0x30) = lVar9;
        lVar17 = *(long *)puVar3;
        lVar8 = thunk_FUN_02cea798(plVar14,lVar17);
        if (lVar8 == 0) goto LAB_02eb0af0;
      }
      FUN_02eb1d14();
      uVar15 = *(undefined8 *)(unaff_x19 + 0x2d8);
      uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
      FUN_04e9e238();
      plVar14 = (long *)FUN_04f76b7c(uVar15,uVar7,0);
      if (plVar14 == (long *)0x0) {
        *plVar1 = 0;
      }
      else {
        lVar17 = *(long *)puVar2;
        if ((*plVar14 != lVar17) || (*plVar1 = (long)plVar14, *plVar14 != lVar17))
        goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
         (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x128), lVar8 == 0)) goto LAB_02eb0cec;
      uVar15 = *(undefined8 *)(lVar8 + 0x30);
      uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
      FUN_047b3b70();
      plVar14 = (long *)FUN_04f76b7c(uVar15,uVar7,0);
      if (plVar14 == (long *)0x0) {
        *(undefined8 *)(lVar8 + 0x30) = 0;
      }
      else {
        lVar17 = *(long *)puVar3;
        lVar9 = thunk_FUN_02cea798(plVar14,lVar17);
        if (lVar9 == 0) goto LAB_02eb0af0;
        *(long *)(lVar8 + 0x30) = lVar9;
        lVar17 = *(long *)puVar3;
        lVar8 = thunk_FUN_02cea798(plVar14,lVar17);
        if (lVar8 == 0) goto LAB_02eb0af0;
      }
      uVar15 = *(undefined8 *)(unaff_x19 + 0x2d8);
      uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
      FUN_04e9e238();
      plVar14 = (long *)FUN_04f76b7c(uVar15,uVar7,0);
      puVar3 = PTR_DAT_065ca660;
      if (plVar14 == (long *)0x0) {
        *plVar1 = 0;
      }
      else {
        lVar17 = *(long *)puVar2;
        if ((*plVar14 != lVar17) || (*plVar1 = (long)plVar14, *plVar14 != lVar17))
        goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) != 0) &&
         (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x118), lVar8 != 0)) {
        in_stack_00000008._4_4_ = *(undefined4 *)(lVar8 + 0x24);
        thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065c8a08,(long)&stack0x00000008 + 4);
        FUN_02eb2218();
        plVar14 = *(long **)(unaff_x19 + 0x28);
        uVar7 = FUN_05ef2cf0();
        uVar15 = FUN_02eb2290();
        if (plVar14 != (long *)0x0) {
          lVar8 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_02eb0c0c;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)puVar3,0);
LAB_02eb0c0c:
          uVar7 = (*(code *)*puVar6)(plVar14,uVar7,uVar15,0,puVar6[1]);
          if (lVar10 != 0) {
            *(undefined8 *)(lVar10 + 0x10) = uVar7;
            lVar8 = *plVar1;
            uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
            FUN_04e9e238(uVar7,lVar10,*(undefined8 *)PTR_DAT_065cefc0,0);
            plVar14 = (long *)FUN_04f76b7c(lVar8,uVar7,0);
            if (plVar14 == (long *)0x0) {
              *plVar1 = 0;
            }
            else {
              lVar17 = *(long *)puVar2;
              if ((*plVar14 != lVar17) || (*plVar1 = (long)plVar14, *plVar14 != lVar17)) {
LAB_02eb0af0:
                    /* WARNING: Subroutine does not return */
                FUN_02ce8018(plVar14,lVar17);
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


