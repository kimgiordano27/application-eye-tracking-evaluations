/*
FUNCTION_NAME: FUN_02eaf8d8
ENTRY_POINT: 02eaf8d8
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


long FUN_02eaf8d8(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 long param_5)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  int *piVar17;
  char cVar18;
  undefined8 uVar19;
  char *pcVar20;
  long *plVar21;
  undefined8 uVar22;
  long lVar23;
  undefined4 uVar24;
  undefined4 local_64;
  
  puVar3 = PTR_DAT_065cbc90;
  puVar4 = PTR_DAT_065cbc88;
  if ((DAT_06a6780d & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca950);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ceea0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8998);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cef20);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cef28);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cef30);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cef38);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cef40);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cef48);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cef50);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cef58);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cef60);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cef68);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cef70);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cef78);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cef80);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c48);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cef88);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ceef0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cef90);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cc3f8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca5a0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca750);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca660);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a08);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cef98);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca5f0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cefa0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca9b0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cefa8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cae20);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cb8f8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cbbe0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cefb0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cefb8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cb900);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cb908);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cbca8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cbc88);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cbc90);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cefc0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cefc8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cefd0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cefd8);
    DAT_06a6780d = 1;
  }
  lVar9 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_03dc7764(lVar9,*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_065c8c40;
  if ((param_5 == 0) || (param_4 == 0)) goto LAB_02eb0cec;
  uVar24 = (undefined4)(*(ulong *)(param_5 + 0x68) >> 0x20);
  if ((*(ulong *)(param_5 + 0x68) & 0xff) == 0) {
    uVar24 = 0xffffffff;
  }
  *(undefined4 *)(param_4 + 0x224) = uVar24;
  uVar19 = *(undefined8 *)(param_5 + 0x10);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar10 = FUN_05ef59b8(uVar19,0,0);
  if ((uVar10 & 1) != 0) {
    param_2 = 0;
    param_3 = 0;
    FUN_02eb0cf4(0,0,0,0,0,0,param_4,*(undefined8 *)(param_5 + 0x10));
  }
  puVar3 = PTR_DAT_065cb908;
  pcVar20 = (char *)(param_5 + 0x18);
  if (*pcVar20 != '\0') {
    FUN_03c91c54(pcVar20,*(undefined8 *)PTR_DAT_065cb908);
    FUN_02eaedbc(param_4);
    uVar24 = FUN_03c91c54(pcVar20,*(undefined8 *)puVar3);
    *(undefined4 *)(param_4 + 0x230) = uVar24;
    *(undefined4 *)(param_4 + 0x234) = param_2;
    *(undefined4 *)(param_4 + 0x238) = param_3;
  }
  if (*(char *)(param_5 + 0x28) != '\0') {
    FUN_03c89968((char *)(param_5 + 0x28),*(undefined8 *)PTR_DAT_065cb900);
    FUN_02eaee24(param_4);
  }
  if (*(char *)(param_5 + 0x3c) != '\0') {
    FUN_03c91c54((char *)(param_5 + 0x3c),*(undefined8 *)puVar3);
    FUN_02eaee94(param_4);
  }
  uVar19 = *(undefined8 *)(param_4 + 0x110);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar10 = FUN_05ef59b8(uVar19,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)(param_4 + 0x110) == 0) goto LAB_02eb0cec;
    *(undefined1 *)(*(long *)(param_4 + 0x110) + 0xb0) = *(undefined1 *)(param_5 + 0x7d);
  }
  plVar21 = *(long **)(param_4 + 0x40);
  if (plVar21 == (long *)0x0) goto LAB_02eb0cec;
  lVar14 = *plVar21;
  uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar10 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065cc3f8) {
        puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
        goto 
        Niantic_WelcomeHome_RecorderSubModule_<PrintInput>d__60__System_Collections_IEnumerator_Reset
        ;
      }
      uVar10 = uVar10 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar10 != 0);
  }
  puVar11 = (undefined8 *)FUN_02ce0a7c(plVar21,*(long *)PTR_DAT_065cc3f8,0);
Niantic_WelcomeHome_RecorderSubModule_<PrintInput>d__60__System_Collections_IEnumerator_Reset:
  uVar10 = (*(code *)*puVar11)(plVar21,puVar11[1]);
  if ((uVar10 & 1) != 0) {
    *(undefined1 *)(param_4 + 0x208) = 1;
  }
  if ((*(long *)(param_4 + 0x210) == 0) &&
     (plVar21 = *(long **)(param_4 + 0x58), plVar21 != (long *)0x0)) {
    lVar14 = *plVar21;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065cef90) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto FUN_02eafd5c;
        }
        uVar10 = uVar10 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_02ce0a7c(plVar21,*(long *)PTR_DAT_065cef90,0);
FUN_02eafd5c:
    plVar21 = (long *)(*(code *)*puVar11)(plVar21,param_4,puVar11[1]);
    *(long **)(param_4 + 0x210) = plVar21;
    if (*(char *)(param_5 + 0x4c) == '\0') {
      if (plVar21 == (long *)0x0) goto LAB_02eb0cec;
      lVar14 = *plVar21;
      uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065ceef0) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar17 + 5) * 0x10 + 0x138);
            goto LAB_02eafe5c;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_02ce0a7c(plVar21,*(long *)PTR_DAT_065ceef0,5);
LAB_02eafe5c:
      pcVar15 = (code *)*puVar11;
      uVar19 = puVar11[1];
      uVar24 = 1;
    }
    else {
      uVar24 = FUN_03c86c80((char *)(param_5 + 0x4c),*(undefined8 *)PTR_DAT_065cefb8);
      if (plVar21 == (long *)0x0) goto LAB_02eb0cec;
      lVar14 = *plVar21;
      uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065ceef0) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar17 + 5) * 0x10 + 0x138);
            goto LAB_02eafe3c;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_02ce0a7c(plVar21,*(long *)PTR_DAT_065ceef0,5);
LAB_02eafe3c:
      pcVar15 = (code *)*puVar11;
      uVar19 = puVar11[1];
    }
    (*pcVar15)(plVar21,uVar24,uVar19);
  }
  cVar18 = *(char *)(param_5 + 0x7c);
  *(char *)(param_4 + 0x354) = cVar18;
  if (cVar18 == '\0') {
    lVar14 = FUN_05ef2cf0(param_4,0);
    if (lVar14 == 0) goto LAB_02eb0cec;
    FUN_05efa208(lVar14,*(undefined8 *)PTR_DAT_065cefd0,0);
  }
  puVar5 = PTR_DAT_065cef40;
  puVar3 = PTR_DAT_065ceea0;
  if (*(long *)(param_4 + 0x60) != 0) {
    plVar21 = (long *)FUN_02fc5f04(*(long *)(param_4 + 0x60),param_4,1,0);
    *(long **)(param_4 + 0x2b0) = plVar21;
    uVar19 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
    FUN_0487a808(uVar19,param_4,*(undefined8 *)puVar5,0);
    puVar5 = PTR_DAT_065cef88;
    if (plVar21 == (long *)0x0) goto LAB_02eb0cec;
    lVar14 = *plVar21;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065cef88) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02eaff40;
        }
        uVar10 = uVar10 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_02ce0a7c(plVar21,*(long *)PTR_DAT_065cef88,0);
LAB_02eaff40:
    (*(code *)*puVar11)(plVar21,uVar19,puVar11[1]);
    puVar6 = PTR_DAT_065cef48;
    if (*(long *)(param_4 + 0x60) == 0) goto LAB_02eb0cec;
    plVar21 = (long *)FUN_02fc5f04(*(long *)(param_4 + 0x60),param_4,0,0);
    *(long **)(param_4 + 0x2b8) = plVar21;
    uVar19 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
    FUN_0487a808(uVar19,param_4,*(undefined8 *)puVar6,0);
    if (plVar21 == (long *)0x0) goto LAB_02eb0cec;
    lVar14 = *plVar21;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02eaffe4;
        }
        uVar10 = uVar10 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_02ce0a7c(plVar21,*(long *)puVar5,0);
LAB_02eaffe4:
    (*(code *)*puVar11)(plVar21,uVar19,puVar11[1]);
  }
  puVar5 = PTR_DAT_065cef50;
  puVar3 = PTR_DAT_065c8998;
  if (*(char *)(param_5 + 0x4c) == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *(ulong *)(param_5 + 0x4c) >> 0x20 == 2 && (*(ulong *)(param_5 + 0x4c) & 0xff) != 0;
  }
  plVar21 = *(long **)(param_4 + 0x288);
  if (plVar21 != (long *)0x0) {
    lVar14 = *plVar21;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065ca750) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto 
          Niantic_WelcomeHome_RecorderSubModule_<RequestAiTextureGen>d__49__System_IDisposable_Dispose
          ;
        }
        uVar10 = uVar10 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_02ce0a7c(plVar21,*(long *)PTR_DAT_065ca750,0);
Niantic_WelcomeHome_RecorderSubModule_<RequestAiTextureGen>d__49__System_IDisposable_Dispose:
    (*(code *)*puVar11)(plVar21,puVar11[1]);
  }
  uVar22 = *(undefined8 *)(param_4 + 0x28);
  uVar19 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_04e9e238(uVar19,param_4,*(undefined8 *)puVar5,0);
  FUN_061b3164(uVar22,uVar19,0);
  if (*(long *)(param_4 + 0x1f0) == 0) goto LAB_02eb0cec;
  *(undefined1 *)(*(long *)(param_4 + 0x1f0) + 0x111) = 0;
  if (*(long *)(param_4 + 0x1f8) == 0) goto LAB_02eb0cec;
  *(undefined1 *)(*(long *)(param_4 + 0x1f8) + 0x111) = 0;
  plVar21 = *(long **)(param_4 + 0x28);
  uVar19 = FUN_05ef2cf0(param_4,0);
  uVar22 = FUN_02eb0dc0(param_4);
  if (plVar21 == (long *)0x0) goto LAB_02eb0cec;
  lVar14 = *plVar21;
  uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar10 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065ca660) {
        puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_02eb0158;
      }
      uVar10 = uVar10 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar10 != 0);
  }
  puVar11 = (undefined8 *)FUN_02ce0a7c(plVar21,*(long *)PTR_DAT_065ca660,0);
LAB_02eb0158:
  uVar19 = (*(code *)*puVar11)(plVar21,uVar19,uVar22,0,puVar11[1]);
  *(undefined8 *)(param_4 + 0x290) = uVar19;
  if ((*(char *)(param_4 + 0x354) != '\0') && ((!bVar2 || (*(char *)(param_4 + 0x208) == '\0')))) {
    FUN_02eb0e28(param_4,1);
  }
  if (*(char *)(param_4 + 0x341) == '\0') {
    if (*(long *)(param_4 + 0xd8) == 0) goto LAB_02eb0cec;
    FUN_02e19bec(*(long *)(param_4 + 0xd8),0);
    lVar14 = *(long *)(param_4 + 0xd8);
    uVar19 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
    FUN_04e9e238(uVar19,param_4,*(undefined8 *)PTR_DAT_065cef30,0);
    if (lVar14 == 0) goto LAB_02eb0cec;
    FUN_02e1997c(lVar14,uVar19,0);
    lVar14 = *(long *)(param_4 + 0xd8);
    uVar19 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
    FUN_04e9e238(uVar19,param_4,*(undefined8 *)PTR_DAT_065cef28,0);
    if (lVar14 == 0) goto LAB_02eb0cec;
    FUN_02e19ab4(lVar14,uVar19,0);
    *(undefined1 *)(param_4 + 0x341) = 1;
  }
  FUN_02eb102c(param_4,!bVar2);
  if (*(char *)(param_4 + 0x342) == '\0') {
    if (*(long *)(param_4 + 0xd0) == 0) goto LAB_02eb0cec;
    FUN_03049060(*(long *)(param_4 + 0xd0),*(undefined8 *)(param_4 + 0x138),0);
    if (*(long *)(param_4 + 0xc0) == 0) goto LAB_02eb0cec;
    System_Array__InternalArray__ICollection_Remove<Keyframe>
              (*(long *)(param_4 + 0xc0),param_4,*(undefined8 *)(param_4 + 0x138),
               *(undefined8 *)(param_4 + 0x128),1,0);
    if (*(long *)(param_4 + 200) == 0) goto LAB_02eb0cec;
    FUN_030437f4(*(long *)(param_4 + 200),param_4,*(undefined8 *)(param_4 + 0x128),0);
    if (*(long *)(param_4 + 0xc0) == 0) goto LAB_02eb0cec;
    FUN_03041100(*(long *)(param_4 + 0xc0),1,0);
    *(undefined1 *)(param_4 + 0x342) = 1;
  }
  FUN_02eb11f0(param_4,1);
  pcVar20 = (char *)(param_5 + 0x74);
  *(undefined8 *)(param_4 + 0x344) = *(undefined8 *)pcVar20;
  puVar5 = PTR_DAT_065cefb0;
  lVar14 = *(long *)(param_4 + 0x100);
  if (lVar14 == 0) goto LAB_02eb0cec;
  if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
    uVar10 = 0;
    uVar16 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
    do {
      if (uVar16 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      if (*pcVar20 != '\0') {
        lVar12 = *(long *)(lVar14 + 0x20 + uVar10 * 8);
        if (lVar12 == 0) goto LAB_02eb0cec;
        lVar12 = FUN_05ef2cf0(lVar12,0);
        uVar24 = FUN_03c868c4(pcVar20,*(undefined8 *)puVar5);
        if (lVar12 == 0) goto LAB_02eb0cec;
        FUN_05ef5fec(lVar12,uVar24,0);
      }
      uVar16 = (ulong)*(uint *)(lVar14 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)(int)*(uint *)(lVar14 + 0x18));
  }
  uVar19 = *(undefined8 *)(param_5 + 0x58);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar10 = FUN_05ef739c(uVar19,0,0);
  if ((uVar10 & 1) == 0) {
    *(undefined8 *)(param_4 + 0x228) = *(undefined8 *)(param_5 + 0x58);
    FUN_02eb162c(param_4);
    if (lVar9 == 0) goto LAB_02eb0cec;
    FUN_03dc781c(lVar9,param_4,*(undefined8 *)PTR_DAT_065cbca8);
  }
  else {
    if (*(char *)(param_5 + 0x70) == '\0') {
      uVar19 = FUN_02e88184(0);
      if (*(char *)(param_5 + 0x7c) == '\0') {
        cVar18 = '\0';
      }
      else {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar10 = FUN_05ef59b8(uVar19,0,0);
        if ((uVar10 & 1) != 0) {
          FUN_02eb1554(param_4,uVar19);
          goto FUN_02eb0434;
        }
        cVar18 = *(char *)(param_5 + 0x7c);
      }
      if (*(char *)(param_5 + 0x60) == '\0') {
        uVar24 = FUN_02e87060(0);
      }
      else {
        uVar24 = *(undefined4 *)(param_5 + 100);
      }
      uVar7 = cVar18 != '\0';
    }
    else {
      uVar7 = *(undefined1 *)(param_5 + 0x7c);
      uVar24 = 0xffffffff;
    }
    FUN_02eb12c4(param_4,uVar7,lVar9,uVar24);
  }
FUN_02eb0434:
  if (*(char *)(param_4 + 0x354) == '\0') {
    lVar14 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cef20);
    FUN_02f66840(lVar14,0);
    plVar21 = *(long **)(param_4 + 0x40);
    if (plVar21 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      lVar12 = *plVar21;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065cc3f8) {
            puVar11 = (undefined8 *)(lVar12 + (long)(*piVar17 + 2) * 0x10 + 0x138);
            goto LAB_02eb059c;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_02ce0a7c(plVar21,*(long *)PTR_DAT_065cc3f8,2);
LAB_02eb059c:
      uVar8 = (*(code *)*puVar11)(plVar21,puVar11[1]);
    }
    uVar19 = FUN_02e6c660(0x3f800000,uVar8 & 1,0);
    if (lVar14 == 0) goto LAB_02eb0cec;
    *(undefined8 *)(lVar14 + 0x20) = uVar19;
    uVar19 = FUN_02e63898(0);
    *(undefined8 *)(lVar14 + 0x18) = uVar19;
    if (param_4 == 0) goto LAB_02eb0cec;
    *(long *)(param_4 + 0x358) = lVar14;
    plVar21 = *(long **)(param_4 + 0x28);
    uVar19 = FUN_02eb1cac(param_4);
    if (plVar21 == (long *)0x0) goto LAB_02eb0cec;
    lVar14 = *plVar21;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065ca5a0) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02eb063c;
        }
        uVar10 = uVar10 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_02ce0a7c(plVar21,*(long *)PTR_DAT_065ca5a0,0);
LAB_02eb063c:
    (*(code *)*puVar11)(plVar21,uVar19,puVar11[1]);
  }
  else {
    lVar14 = FUN_02eb1714(param_4);
    *(long *)(param_4 + 0x358) = lVar14;
    if (lVar14 == 0) goto LAB_02eb0cec;
    if (*(long *)(lVar14 + 0x18) == 0) {
      if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_05eb364c(*(undefined8 *)PTR_DAT_065cefd8,0);
      lVar14 = *(long *)(param_4 + 0x358);
      uVar19 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ca5f0);
      FUN_02f66dac(uVar19,0);
      if (lVar14 == 0) goto LAB_02eb0cec;
      *(undefined8 *)(lVar14 + 0x18) = uVar19;
    }
    uVar19 = FUN_02e883bc(0);
    FUN_02eb19dc(param_4,2,uVar19);
    uVar19 = FUN_02e88474(0);
    FUN_02eb19dc(param_4,3,uVar19);
    uVar19 = FUN_02e8852c(0);
    FUN_02eb19dc(param_4,1,uVar19);
  }
  uVar19 = *(undefined8 *)(param_4 + 0x78);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar10 = FUN_05ef59b8(uVar19,0,0);
  if ((uVar10 & 1) != 0) {
    lVar14 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cefc8);
    FUN_02eb8288(lVar14,0);
    plVar21 = *(long **)(param_4 + 0x40);
    if (plVar21 != (long *)0x0) {
      lVar12 = *plVar21;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065cc3f8) {
            puVar11 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
            goto Niantic_WelcomeHome_RecorderSubModule_<WhileTurnTableGrabbed>d__64__MoveNext;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_02ce0a7c(plVar21,*(long *)PTR_DAT_065cc3f8,0);
Niantic_WelcomeHome_RecorderSubModule_<WhileTurnTableGrabbed>d__64__MoveNext:
      uVar10 = (*(code *)*puVar11)(plVar21,puVar11[1]);
      lVar12 = *(long *)(param_4 + 0x78);
      if ((uVar10 & 1) == 0) {
        if ((lVar12 == 0) || (*(long *)(lVar12 + 0xb0) == 0)) goto LAB_02eb0cec;
        *(bool *)(param_4 + 0x208) = 0 < *(int *)(*(long *)(lVar12 + 0xb0) + 0x24);
      }
      else {
        *(undefined1 *)(param_4 + 0x208) = 1;
        if (lVar12 == 0) goto LAB_02eb0cec;
      }
      puVar4 = PTR_DAT_065ca950;
      lVar12 = *(long *)(lVar12 + 0xb0);
      if (lVar12 == 0) goto LAB_02eb0cec;
      uVar22 = *(undefined8 *)(lVar12 + 0x30);
      uVar19 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ca950);
      FUN_047b3b70(uVar19,param_4,*(undefined8 *)PTR_DAT_065cef70,0);
      plVar21 = (long *)FUN_04f76b7c(uVar22,uVar19,0);
      if (plVar21 == (long *)0x0) {
        *(undefined8 *)(lVar12 + 0x30) = 0;
      }
      else {
        lVar23 = *(long *)puVar4;
        lVar13 = thunk_FUN_02cea798(plVar21,lVar23);
        if (lVar13 == 0) goto LAB_02eb0af0;
        *(long *)(lVar12 + 0x30) = lVar13;
        lVar23 = *(long *)puVar4;
        lVar12 = thunk_FUN_02cea798(plVar21,lVar23);
        if (lVar12 == 0) goto LAB_02eb0af0;
      }
      if ((*(long *)(param_4 + 0x78) == 0) ||
         (lVar12 = *(long *)(*(long *)(param_4 + 0x78) + 0x118), lVar12 == 0)) goto LAB_02eb0cec;
      uVar22 = *(undefined8 *)(lVar12 + 0x30);
      uVar19 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
      FUN_047b3b70(uVar19,param_4,*(undefined8 *)PTR_DAT_065cef38,0);
      plVar21 = (long *)FUN_04f76b7c(uVar22,uVar19,0);
      if (plVar21 == (long *)0x0) {
        *(undefined8 *)(lVar12 + 0x30) = 0;
      }
      else {
        lVar23 = *(long *)puVar4;
        lVar13 = thunk_FUN_02cea798(plVar21,lVar23);
        if (lVar13 == 0) goto LAB_02eb0af0;
        *(long *)(lVar12 + 0x30) = lVar13;
        lVar23 = *(long *)puVar4;
        lVar12 = thunk_FUN_02cea798(plVar21,lVar23);
        if (lVar12 == 0) goto LAB_02eb0af0;
      }
      uVar22 = *(undefined8 *)(param_4 + 0x2d8);
      plVar1 = (long *)(param_4 + 0x2d8);
      uVar19 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
      FUN_04e9e238(uVar19,param_4,*(undefined8 *)PTR_DAT_065cef58,0);
      plVar21 = (long *)FUN_04f76b7c(uVar22,uVar19,0);
      if (plVar21 == (long *)0x0) {
        *plVar1 = 0;
      }
      else {
        lVar23 = *(long *)puVar3;
        if ((*plVar21 != lVar23) || (*plVar1 = (long)plVar21, *plVar21 != lVar23))
        goto LAB_02eb0af0;
      }
      if ((*(long *)(param_4 + 0x78) == 0) ||
         (lVar12 = *(long *)(*(long *)(param_4 + 0x78) + 0xb8), lVar12 == 0)) goto LAB_02eb0cec;
      uVar22 = *(undefined8 *)(lVar12 + 0x30);
      uVar19 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
      puVar5 = PTR_DAT_065cef80;
      FUN_047b3b70(uVar19,param_4,*(undefined8 *)PTR_DAT_065cef80,0);
      plVar21 = (long *)FUN_04f76b7c(uVar22,uVar19,0);
      if (plVar21 == (long *)0x0) {
        *(undefined8 *)(lVar12 + 0x30) = 0;
      }
      else {
        lVar23 = *(long *)puVar4;
        lVar13 = thunk_FUN_02cea798(plVar21,lVar23);
        if (lVar13 == 0) goto LAB_02eb0af0;
        *(long *)(lVar12 + 0x30) = lVar13;
        lVar23 = *(long *)puVar4;
        lVar12 = thunk_FUN_02cea798(plVar21,lVar23);
        if (lVar12 == 0) goto LAB_02eb0af0;
      }
      if ((*(long *)(param_4 + 0x78) == 0) ||
         (lVar12 = *(long *)(*(long *)(param_4 + 0x78) + 200), lVar12 == 0)) goto LAB_02eb0cec;
      uVar22 = *(undefined8 *)(lVar12 + 0x30);
      uVar19 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
      FUN_047b3b70(uVar19,param_4,*(undefined8 *)puVar5,0);
      plVar21 = (long *)FUN_04f76b7c(uVar22,uVar19,0);
      if (plVar21 == (long *)0x0) {
        *(undefined8 *)(lVar12 + 0x30) = 0;
      }
      else {
        lVar23 = *(long *)puVar4;
        lVar13 = thunk_FUN_02cea798(plVar21,lVar23);
        if (lVar13 == 0) goto LAB_02eb0af0;
        *(long *)(lVar12 + 0x30) = lVar13;
        lVar23 = *(long *)puVar4;
        lVar12 = thunk_FUN_02cea798(plVar21,lVar23);
        if (lVar12 == 0) goto LAB_02eb0af0;
      }
      if ((*(long *)(param_4 + 0x78) == 0) ||
         (lVar12 = *(long *)(*(long *)(param_4 + 0x78) + 0xc0), lVar12 == 0)) goto LAB_02eb0cec;
      uVar22 = *(undefined8 *)(lVar12 + 0x30);
      uVar19 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
      FUN_047b3b70(uVar19,param_4,*(undefined8 *)puVar5,0);
      plVar21 = (long *)FUN_04f76b7c(uVar22,uVar19,0);
      if (plVar21 == (long *)0x0) {
        *(undefined8 *)(lVar12 + 0x30) = 0;
      }
      else {
        lVar23 = *(long *)puVar4;
        lVar13 = thunk_FUN_02cea798(plVar21,lVar23);
        if (lVar13 == 0) goto LAB_02eb0af0;
        *(long *)(lVar12 + 0x30) = lVar13;
        lVar23 = *(long *)puVar4;
        lVar12 = thunk_FUN_02cea798(plVar21,lVar23);
        if (lVar12 == 0) goto LAB_02eb0af0;
      }
      FUN_02eb1d14(param_4);
      uVar22 = *(undefined8 *)(param_4 + 0x2d8);
      uVar19 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
      FUN_04e9e238(uVar19,param_4,*(undefined8 *)PTR_DAT_065cef60,0);
      plVar21 = (long *)FUN_04f76b7c(uVar22,uVar19,0);
      if (plVar21 == (long *)0x0) {
        *plVar1 = 0;
      }
      else {
        lVar23 = *(long *)puVar3;
        if ((*plVar21 != lVar23) || (*plVar1 = (long)plVar21, *plVar21 != lVar23))
        goto LAB_02eb0af0;
      }
      if ((*(long *)(param_4 + 0x78) == 0) ||
         (lVar12 = *(long *)(*(long *)(param_4 + 0x78) + 0x128), lVar12 == 0)) goto LAB_02eb0cec;
      uVar22 = *(undefined8 *)(lVar12 + 0x30);
      uVar19 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
      FUN_047b3b70(uVar19,param_4,*(undefined8 *)PTR_DAT_065cef78,0);
      plVar21 = (long *)FUN_04f76b7c(uVar22,uVar19,0);
      if (plVar21 == (long *)0x0) {
        *(undefined8 *)(lVar12 + 0x30) = 0;
      }
      else {
        lVar23 = *(long *)puVar4;
        lVar13 = thunk_FUN_02cea798(plVar21,lVar23);
        if (lVar13 == 0) goto LAB_02eb0af0;
        *(long *)(lVar12 + 0x30) = lVar13;
        lVar23 = *(long *)puVar4;
        lVar12 = thunk_FUN_02cea798(plVar21,lVar23);
        if (lVar12 == 0) goto LAB_02eb0af0;
      }
      uVar22 = *(undefined8 *)(param_4 + 0x2d8);
      uVar19 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
      FUN_04e9e238(uVar19,param_4,*(undefined8 *)PTR_DAT_065cef68,0);
      plVar21 = (long *)FUN_04f76b7c(uVar22,uVar19,0);
      puVar4 = PTR_DAT_065ca660;
      if (plVar21 == (long *)0x0) {
        *plVar1 = 0;
      }
      else {
        lVar23 = *(long *)puVar3;
        if ((*plVar21 != lVar23) || (*plVar1 = (long)plVar21, *plVar21 != lVar23))
        goto LAB_02eb0af0;
      }
      if ((*(long *)(param_4 + 0x78) != 0) &&
         (lVar12 = *(long *)(*(long *)(param_4 + 0x78) + 0x118), lVar12 != 0)) {
        local_64 = *(undefined4 *)(lVar12 + 0x24);
        uVar19 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065c8a08,&local_64);
        FUN_02eb2218(param_4,uVar19);
        plVar21 = *(long **)(param_4 + 0x28);
        uVar19 = FUN_05ef2cf0(param_4,0);
        uVar22 = FUN_02eb2290(param_4);
        if (plVar21 != (long *)0x0) {
          lVar12 = *plVar21;
          uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar10 != 0) {
            piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                puVar11 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_02eb0c0c;
              }
              uVar10 = uVar10 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar10 != 0);
          }
          puVar11 = (undefined8 *)FUN_02ce0a7c(plVar21,*(long *)puVar4,0);
LAB_02eb0c0c:
          uVar19 = (*(code *)*puVar11)(plVar21,uVar19,uVar22,0,puVar11[1]);
          if (lVar14 != 0) {
            *(undefined8 *)(lVar14 + 0x10) = uVar19;
            lVar12 = *plVar1;
            uVar19 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
            FUN_04e9e238(uVar19,lVar14,*(undefined8 *)PTR_DAT_065cefc0,0);
            plVar21 = (long *)FUN_04f76b7c(lVar12,uVar19,0);
            if (plVar21 == (long *)0x0) {
              *plVar1 = 0;
            }
            else {
              lVar23 = *(long *)puVar3;
              if ((*plVar21 != lVar23) || (*plVar1 = (long)plVar21, *plVar21 != lVar23)) {
LAB_02eb0af0:
                    /* WARNING: Subroutine does not return */
                FUN_02ce8018(plVar21,lVar23);
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
  FUN_02eae5c0(0,0,param_4,0,0,0,**(undefined8 **)(*(long *)PTR_DAT_065c8688 + 0xb8),0,0);
  return lVar9;
}


