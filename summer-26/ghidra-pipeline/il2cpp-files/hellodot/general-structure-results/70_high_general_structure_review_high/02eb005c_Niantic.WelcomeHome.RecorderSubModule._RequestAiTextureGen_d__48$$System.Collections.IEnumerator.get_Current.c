/*
FUNCTION_NAME: Niantic.WelcomeHome.RecorderSubModule.<RequestAiTextureGen>d__48$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02eb005c
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


void Niantic_WelcomeHome_RecorderSubModule_<RequestAiTextureGen>d__48__System_Collections_IEnumerator_get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long in_x9;
  ulong uVar11;
  int *in_x10;
  int *piVar12;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar13;
  long *plVar14;
  char *pcVar15;
  long lVar16;
  long *unaff_x25;
  long *unaff_x26;
  int unaff_w29;
  undefined8 in_stack_00000008;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar5 = (undefined8 *)FUN_02ce0a7c();
      goto 
      Niantic_WelcomeHome_RecorderSubModule_<RequestAiTextureGen>d__49__System_IDisposable_Dispose;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar5 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
Niantic_WelcomeHome_RecorderSubModule_<RequestAiTextureGen>d__49__System_IDisposable_Dispose:
  (*(code *)*puVar5)();
  uVar13 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar6 = thunk_FUN_02cea894(*unaff_x25);
  FUN_04e9e238();
  FUN_061b3164(uVar13,uVar6,0);
  if (*(long *)(unaff_x19 + 0x1f0) == 0) goto LAB_02eb0cec;
  *(undefined1 *)(*(long *)(unaff_x19 + 0x1f0) + 0x111) = 0;
  if (*(long *)(unaff_x19 + 0x1f8) == 0) goto LAB_02eb0cec;
  *(undefined1 *)(*(long *)(unaff_x19 + 0x1f8) + 0x111) = 0;
  plVar14 = *(long **)(unaff_x19 + 0x28);
  uVar6 = FUN_05ef2cf0();
  uVar13 = FUN_02eb0dc0();
  if (plVar14 == (long *)0x0) goto LAB_02eb0cec;
  lVar9 = *plVar14;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065ca660) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_02eb0158;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065ca660,0);
LAB_02eb0158:
  uVar6 = (*(code *)*puVar5)(plVar14,uVar6,uVar13,0,puVar5[1]);
  *(undefined8 *)(unaff_x19 + 0x290) = uVar6;
  if ((*(char *)(unaff_x19 + 0x354) != '\0') &&
     ((unaff_w29 == 0 || (*(char *)(unaff_x19 + 0x208) == '\0')))) {
    FUN_02eb0e28();
  }
  if (*(char *)(unaff_x19 + 0x341) == '\0') {
    if (*(long *)(unaff_x19 + 0xd8) == 0) goto LAB_02eb0cec;
    FUN_02e19bec(*(long *)(unaff_x19 + 0xd8),0);
    lVar9 = *(long *)(unaff_x19 + 0xd8);
    uVar6 = thunk_FUN_02cea894(*unaff_x25);
    FUN_04e9e238();
    if (lVar9 == 0) goto LAB_02eb0cec;
    FUN_02e1997c(lVar9,uVar6,0);
    lVar9 = *(long *)(unaff_x19 + 0xd8);
    uVar6 = thunk_FUN_02cea894(*unaff_x25);
    FUN_04e9e238();
    if (lVar9 == 0) goto LAB_02eb0cec;
    FUN_02e19ab4(lVar9,uVar6,0);
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
  pcVar15 = (char *)(unaff_x21 + 0x74);
  *(undefined8 *)(unaff_x19 + 0x344) = *(undefined8 *)pcVar15;
  puVar2 = PTR_DAT_065cefb0;
  lVar9 = *(long *)(unaff_x19 + 0x100);
  if (lVar9 == 0) goto LAB_02eb0cec;
  if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
    uVar11 = 0;
    uVar10 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
    do {
      if (uVar10 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      if (*pcVar15 != '\0') {
        lVar7 = *(long *)(lVar9 + 0x20 + uVar11 * 8);
        if (lVar7 == 0) goto LAB_02eb0cec;
        lVar7 = FUN_05ef2cf0(lVar7,0);
        uVar3 = FUN_03c868c4(pcVar15,*(undefined8 *)puVar2);
        if (lVar7 == 0) goto LAB_02eb0cec;
        FUN_05ef5fec(lVar7,uVar3,0);
      }
      uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)(int)*(uint *)(lVar9 + 0x18));
  }
  uVar6 = *(undefined8 *)(unaff_x21 + 0x58);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar11 = FUN_05ef739c(uVar6,0,0);
  if ((uVar11 & 1) == 0) {
    *(undefined8 *)(unaff_x19 + 0x228) = *(undefined8 *)(unaff_x21 + 0x58);
    FUN_02eb162c();
    if (unaff_x20 == 0) goto LAB_02eb0cec;
    FUN_03dc781c();
  }
  else {
    if (*(char *)(unaff_x21 + 0x70) == '\0') {
      uVar6 = FUN_02e88184(0);
      if (*(char *)(unaff_x21 + 0x7c) != '\0') {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar11 = FUN_05ef59b8(uVar6,0,0);
        if ((uVar11 & 1) != 0) {
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
    lVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cef20);
    FUN_02f66840(lVar9,0);
    plVar14 = *(long **)(unaff_x19 + 0x40);
    if (plVar14 == (long *)0x0) {
      uVar4 = 0;
    }
    else {
      lVar7 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065cc3f8) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_02eb059c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065cc3f8,2);
LAB_02eb059c:
      uVar4 = (*(code *)*puVar5)(plVar14,puVar5[1]);
    }
    uVar6 = FUN_02e6c660(0x3f800000,uVar4 & 1,0);
    if (lVar9 == 0) goto LAB_02eb0cec;
    *(undefined8 *)(lVar9 + 0x20) = uVar6;
    uVar6 = FUN_02e63898(0);
    *(undefined8 *)(lVar9 + 0x18) = uVar6;
    if (unaff_x19 == 0) goto LAB_02eb0cec;
    *(long *)(unaff_x19 + 0x358) = lVar9;
    plVar14 = *(long **)(unaff_x19 + 0x28);
    uVar6 = FUN_02eb1cac();
    if (plVar14 == (long *)0x0) goto LAB_02eb0cec;
    lVar9 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065ca5a0) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02eb063c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065ca5a0,0);
LAB_02eb063c:
    (*(code *)*puVar5)(plVar14,uVar6,puVar5[1]);
  }
  else {
    lVar9 = FUN_02eb1714();
    *(long *)(unaff_x19 + 0x358) = lVar9;
    if (lVar9 == 0) goto LAB_02eb0cec;
    if (*(long *)(lVar9 + 0x18) == 0) {
      if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_05eb364c(*(undefined8 *)PTR_DAT_065cefd8,0);
      lVar9 = *(long *)(unaff_x19 + 0x358);
      uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ca5f0);
      FUN_02f66dac(uVar6,0);
      if (lVar9 == 0) goto LAB_02eb0cec;
      *(undefined8 *)(lVar9 + 0x18) = uVar6;
    }
    FUN_02e883bc(0);
    FUN_02eb19dc();
    FUN_02e88474(0);
    FUN_02eb19dc();
    FUN_02e8852c(0);
    FUN_02eb19dc();
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x78);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar11 = FUN_05ef59b8(uVar6,0,0);
  if ((uVar11 & 1) != 0) {
    lVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cefc8);
    FUN_02eb8288(lVar9,0);
    plVar14 = *(long **)(unaff_x19 + 0x40);
    if (plVar14 != (long *)0x0) {
      lVar7 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065cc3f8) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto Niantic_WelcomeHome_RecorderSubModule_<WhileTurnTableGrabbed>d__64__MoveNext;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065cc3f8,0);
Niantic_WelcomeHome_RecorderSubModule_<WhileTurnTableGrabbed>d__64__MoveNext:
      uVar11 = (*(code *)*puVar5)(plVar14,puVar5[1]);
      lVar7 = *(long *)(unaff_x19 + 0x78);
      if ((uVar11 & 1) == 0) {
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0xb0) == 0)) goto LAB_02eb0cec;
        *(bool *)(unaff_x19 + 0x208) = 0 < *(int *)(*(long *)(lVar7 + 0xb0) + 0x24);
      }
      else {
        *(undefined1 *)(unaff_x19 + 0x208) = 1;
        if (lVar7 == 0) goto LAB_02eb0cec;
      }
      puVar2 = PTR_DAT_065ca950;
      lVar7 = *(long *)(lVar7 + 0xb0);
      if (lVar7 == 0) goto LAB_02eb0cec;
      uVar13 = *(undefined8 *)(lVar7 + 0x30);
      uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ca950);
      FUN_047b3b70();
      plVar14 = (long *)FUN_04f76b7c(uVar13,uVar6,0);
      if (plVar14 == (long *)0x0) {
        *(undefined8 *)(lVar7 + 0x30) = 0;
      }
      else {
        lVar16 = *(long *)puVar2;
        lVar8 = thunk_FUN_02cea798(plVar14,lVar16);
        if (lVar8 == 0) goto LAB_02eb0af0;
        *(long *)(lVar7 + 0x30) = lVar8;
        lVar16 = *(long *)puVar2;
        lVar7 = thunk_FUN_02cea798(plVar14,lVar16);
        if (lVar7 == 0) goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x118), lVar7 == 0)) goto LAB_02eb0cec;
      uVar13 = *(undefined8 *)(lVar7 + 0x30);
      uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
      FUN_047b3b70();
      plVar14 = (long *)FUN_04f76b7c(uVar13,uVar6,0);
      if (plVar14 == (long *)0x0) {
        *(undefined8 *)(lVar7 + 0x30) = 0;
      }
      else {
        lVar16 = *(long *)puVar2;
        lVar8 = thunk_FUN_02cea798(plVar14,lVar16);
        if (lVar8 == 0) goto LAB_02eb0af0;
        *(long *)(lVar7 + 0x30) = lVar8;
        lVar16 = *(long *)puVar2;
        lVar7 = thunk_FUN_02cea798(plVar14,lVar16);
        if (lVar7 == 0) goto LAB_02eb0af0;
      }
      uVar13 = *(undefined8 *)(unaff_x19 + 0x2d8);
      plVar1 = (long *)(unaff_x19 + 0x2d8);
      uVar6 = thunk_FUN_02cea894(*unaff_x25);
      FUN_04e9e238();
      plVar14 = (long *)FUN_04f76b7c(uVar13,uVar6,0);
      if (plVar14 == (long *)0x0) {
        *plVar1 = 0;
      }
      else {
        lVar16 = *unaff_x25;
        if ((*plVar14 != lVar16) || (*plVar1 = (long)plVar14, *plVar14 != lVar16))
        goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0xb8), lVar7 == 0)) goto LAB_02eb0cec;
      uVar13 = *(undefined8 *)(lVar7 + 0x30);
      uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
      FUN_047b3b70();
      plVar14 = (long *)FUN_04f76b7c(uVar13,uVar6,0);
      if (plVar14 == (long *)0x0) {
        *(undefined8 *)(lVar7 + 0x30) = 0;
      }
      else {
        lVar16 = *(long *)puVar2;
        lVar8 = thunk_FUN_02cea798(plVar14,lVar16);
        if (lVar8 == 0) goto LAB_02eb0af0;
        *(long *)(lVar7 + 0x30) = lVar8;
        lVar16 = *(long *)puVar2;
        lVar7 = thunk_FUN_02cea798(plVar14,lVar16);
        if (lVar7 == 0) goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x78) + 200), lVar7 == 0)) goto LAB_02eb0cec;
      uVar13 = *(undefined8 *)(lVar7 + 0x30);
      uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
      FUN_047b3b70();
      plVar14 = (long *)FUN_04f76b7c(uVar13,uVar6,0);
      if (plVar14 == (long *)0x0) {
        *(undefined8 *)(lVar7 + 0x30) = 0;
      }
      else {
        lVar16 = *(long *)puVar2;
        lVar8 = thunk_FUN_02cea798(plVar14,lVar16);
        if (lVar8 == 0) goto LAB_02eb0af0;
        *(long *)(lVar7 + 0x30) = lVar8;
        lVar16 = *(long *)puVar2;
        lVar7 = thunk_FUN_02cea798(plVar14,lVar16);
        if (lVar7 == 0) goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0xc0), lVar7 == 0)) goto LAB_02eb0cec;
      uVar13 = *(undefined8 *)(lVar7 + 0x30);
      uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
      FUN_047b3b70();
      plVar14 = (long *)FUN_04f76b7c(uVar13,uVar6,0);
      if (plVar14 == (long *)0x0) {
        *(undefined8 *)(lVar7 + 0x30) = 0;
      }
      else {
        lVar16 = *(long *)puVar2;
        lVar8 = thunk_FUN_02cea798(plVar14,lVar16);
        if (lVar8 == 0) goto LAB_02eb0af0;
        *(long *)(lVar7 + 0x30) = lVar8;
        lVar16 = *(long *)puVar2;
        lVar7 = thunk_FUN_02cea798(plVar14,lVar16);
        if (lVar7 == 0) goto LAB_02eb0af0;
      }
      FUN_02eb1d14();
      uVar13 = *(undefined8 *)(unaff_x19 + 0x2d8);
      uVar6 = thunk_FUN_02cea894(*unaff_x25);
      FUN_04e9e238();
      plVar14 = (long *)FUN_04f76b7c(uVar13,uVar6,0);
      if (plVar14 == (long *)0x0) {
        *plVar1 = 0;
      }
      else {
        lVar16 = *unaff_x25;
        if ((*plVar14 != lVar16) || (*plVar1 = (long)plVar14, *plVar14 != lVar16))
        goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) == 0) ||
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x128), lVar7 == 0)) goto LAB_02eb0cec;
      uVar13 = *(undefined8 *)(lVar7 + 0x30);
      uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
      FUN_047b3b70();
      plVar14 = (long *)FUN_04f76b7c(uVar13,uVar6,0);
      if (plVar14 == (long *)0x0) {
        *(undefined8 *)(lVar7 + 0x30) = 0;
      }
      else {
        lVar16 = *(long *)puVar2;
        lVar8 = thunk_FUN_02cea798(plVar14,lVar16);
        if (lVar8 == 0) goto LAB_02eb0af0;
        *(long *)(lVar7 + 0x30) = lVar8;
        lVar16 = *(long *)puVar2;
        lVar7 = thunk_FUN_02cea798(plVar14,lVar16);
        if (lVar7 == 0) goto LAB_02eb0af0;
      }
      uVar13 = *(undefined8 *)(unaff_x19 + 0x2d8);
      uVar6 = thunk_FUN_02cea894(*unaff_x25);
      FUN_04e9e238();
      plVar14 = (long *)FUN_04f76b7c(uVar13,uVar6,0);
      puVar2 = PTR_DAT_065ca660;
      if (plVar14 == (long *)0x0) {
        *plVar1 = 0;
      }
      else {
        lVar16 = *unaff_x25;
        if ((*plVar14 != lVar16) || (*plVar1 = (long)plVar14, *plVar14 != lVar16))
        goto LAB_02eb0af0;
      }
      if ((*(long *)(unaff_x19 + 0x78) != 0) &&
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x118), lVar7 != 0)) {
        in_stack_00000008._4_4_ = *(undefined4 *)(lVar7 + 0x24);
        thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065c8a08,(long)&stack0x00000008 + 4);
        FUN_02eb2218();
        plVar14 = *(long **)(unaff_x19 + 0x28);
        uVar6 = FUN_05ef2cf0();
        uVar13 = FUN_02eb2290();
        if (plVar14 != (long *)0x0) {
          lVar7 = *plVar14;
          uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_02eb0c0c;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)puVar2,0);
LAB_02eb0c0c:
          uVar6 = (*(code *)*puVar5)(plVar14,uVar6,uVar13,0,puVar5[1]);
          if (lVar9 != 0) {
            *(undefined8 *)(lVar9 + 0x10) = uVar6;
            lVar7 = *plVar1;
            uVar6 = thunk_FUN_02cea894(*unaff_x25);
            FUN_04e9e238(uVar6,lVar9,*(undefined8 *)PTR_DAT_065cefc0,0);
            plVar14 = (long *)FUN_04f76b7c(lVar7,uVar6,0);
            if (plVar14 == (long *)0x0) {
              *plVar1 = 0;
            }
            else {
              lVar16 = *unaff_x25;
              if ((*plVar14 != lVar16) || (*plVar1 = (long)plVar14, *plVar14 != lVar16)) {
LAB_02eb0af0:
                    /* WARNING: Subroutine does not return */
                FUN_02ce8018(plVar14,lVar16);
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


