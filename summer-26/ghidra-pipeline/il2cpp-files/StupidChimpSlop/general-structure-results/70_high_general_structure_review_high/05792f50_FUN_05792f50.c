/*
FUNCTION_NAME: FUN_05792f50
ENTRY_POINT: 05792f50
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_21;telemetry_or_network_hits_2
*/


void FUN_05792f50(long param_1)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  int iVar21;
  
                    /* try { // try from 05792f58 to 05892f83 has its CatchHandler @ 057930a0 */
  if ((DAT_06a552dc & 1) == 0) {
    FUN_02d4dc40(Method_System_Collections_Generic_EqualityComparer<List<RuleMatcher>>_get_Default__
                );
    DAT_06a552dc = 1;
  }
  puVar3 = Method_System_Collections_Generic_EqualityComparer<List<RuleMatcher>>_get_Default__;
  FUN_05792138(param_1,0);
  iVar15 = -1;
LAB_05792fb0:
  iVar20 = iVar15;
  if (-1 < iVar15) {
                    /* try { // try from 05792fc4 to 05892fcb has its CatchHandler @ 05793098 */
    FUN_057920b4(param_1,iVar15);
    iVar20 = -1;
  }
                    /* try { // try from 05792fcc to 05893077 has its CatchHandler @ 05792e10 */
  FUN_0579bfb0(param_1,0);
  iVar15 = *(int *)(param_1 + 0x90);
  switch(iVar15) {
  case 0:
    iVar15 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1,1);
    bVar4 = *(char *)(param_1 + 0x98) != '\0';
    lVar16 = 0x28;
    if (bVar4) {
      lVar16 = 0x10;
    }
    lVar1 = 0x14;
    if (bVar4) {
      lVar1 = 0x28;
    }
    if (iVar15 <= *(int *)(param_1 + lVar1) - *(int *)(param_1 + lVar16)) {
      sVar6 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                        (param_1,0);
      iVar15 = iVar15 + 1;
      do {
        iVar15 = iVar15 + -1;
        if (iVar15 < 1) goto LAB_05793b88;
        sVar5 = FUN_057927e4(param_1);
      } while (sVar5 == sVar6);
    }
    break;
  case 1:
    iVar15 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1,1);
    bVar4 = *(char *)(param_1 + 0x98) != '\0';
    lVar16 = 0x28;
    if (bVar4) {
      lVar16 = 0x10;
    }
    lVar1 = 0x14;
    if (bVar4) {
      lVar1 = 0x28;
    }
    if (iVar15 <= *(int *)(param_1 + lVar1) - *(int *)(param_1 + lVar16)) {
      sVar6 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                        (param_1,0);
      iVar15 = iVar15 + 1;
      do {
        iVar15 = iVar15 + -1;
        if (iVar15 < 1) goto LAB_05793b88;
        sVar5 = FUN_057927e4(param_1);
      } while (sVar5 != sVar6);
    }
    break;
  case 2:
    iVar15 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1,1);
    bVar4 = *(char *)(param_1 + 0x98) != '\0';
    lVar16 = 0x28;
    if (bVar4) {
      lVar16 = 0x10;
    }
    lVar1 = 0x14;
    if (bVar4) {
      lVar1 = 0x28;
    }
    if (iVar15 <= *(int *)(param_1 + lVar1) - *(int *)(param_1 + lVar16)) {
      if (*(long *)(param_1 + 0x80) == 0) goto LAB_05794068;
      lVar16 = *(long *)(*(long *)(param_1 + 0x80) + 0x18);
      uVar12 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                         (param_1,0);
      if (lVar16 == 0) goto LAB_05794068;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_0579406c;
      iVar15 = iVar15 + 1;
      uVar18 = *(undefined8 *)(lVar16 + (long)(int)uVar12 * 8 + 0x20);
      do {
        iVar15 = iVar15 + -1;
        if (iVar15 < 1) goto LAB_05793b88;
        uVar14 = FUN_057927e4(param_1);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*(long *)puVar3);
        }
        uVar17 = FUN_0578a9c0(uVar14,uVar18);
      } while ((uVar17 & 1) != 0);
    }
    break;
  case 3:
    uVar10 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1,1);
    if (*(char *)(param_1 + 0x98) == '\0') {
      iVar15 = *(int *)(param_1 + 0x14);
      iVar20 = *(int *)(param_1 + 0x28);
    }
    else {
      iVar15 = *(int *)(param_1 + 0x28);
      iVar20 = *(int *)(param_1 + 0x10);
    }
    if (iVar15 - iVar20 < (int)uVar10) {
      uVar10 = iVar15 - iVar20;
    }
    sVar6 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                      (param_1,0);
    uVar12 = uVar10;
    if (0 < (int)uVar10) {
      do {
        sVar5 = FUN_057927e4(param_1);
        if (sVar5 != sVar6) goto LAB_05793afc;
        uVar13 = uVar10 - 1;
        bVar4 = 0 < (int)uVar10;
        uVar10 = uVar13;
      } while (uVar13 != 0 && bVar4);
LAB_05793af4:
      uVar10 = 0;
    }
    goto LAB_05793b18;
  case 4:
    uVar10 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1,1);
    if (*(char *)(param_1 + 0x98) == '\0') {
      iVar15 = *(int *)(param_1 + 0x14);
      iVar20 = *(int *)(param_1 + 0x28);
    }
    else {
      iVar15 = *(int *)(param_1 + 0x28);
      iVar20 = *(int *)(param_1 + 0x10);
    }
    if (iVar15 - iVar20 < (int)uVar10) {
      uVar10 = iVar15 - iVar20;
    }
    sVar6 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                      (param_1,0);
    uVar12 = uVar10;
    if (0 < (int)uVar10) {
      do {
        sVar5 = FUN_057927e4(param_1);
        if (sVar5 == sVar6) goto LAB_05793afc;
        uVar13 = uVar10 - 1;
        bVar4 = 0 < (int)uVar10;
        uVar10 = uVar13;
      } while (uVar13 != 0 && bVar4);
      goto LAB_05793af4;
    }
    goto LAB_05793b18;
  case 5:
    uVar12 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1,1);
    if (*(char *)(param_1 + 0x98) == '\0') {
      iVar15 = *(int *)(param_1 + 0x14);
      iVar20 = *(int *)(param_1 + 0x28);
    }
    else {
      iVar15 = *(int *)(param_1 + 0x28);
      iVar20 = *(int *)(param_1 + 0x10);
    }
    if (iVar15 - iVar20 < (int)uVar12) {
      uVar12 = iVar15 - iVar20;
    }
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_05794068;
    lVar16 = *(long *)(*(long *)(param_1 + 0x80) + 0x18);
    uVar13 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1,0);
    if (lVar16 == 0) goto LAB_05794068;
    if (*(uint *)(lVar16 + 0x18) <= uVar13) {
LAB_0579406c:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    uVar10 = uVar12;
    if (0 < (int)uVar12) {
      uVar18 = *(undefined8 *)(lVar16 + (long)(int)uVar13 * 8 + 0x20);
      do {
        uVar14 = FUN_057927e4(param_1);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*(long *)puVar3);
        }
        uVar17 = FUN_0578a9c0(uVar14,uVar18);
        if ((uVar17 & 1) == 0) {
          if (param_1 == 0) goto LAB_05794068;
          iVar15 = *(int *)(param_1 + 0x28) + -1;
          if (*(char *)(param_1 + 0x98) != '\0') {
            iVar15 = *(int *)(param_1 + 0x28) + 1;
          }
          *(int *)(param_1 + 0x28) = iVar15;
          goto LAB_05793b58;
        }
        uVar13 = uVar10 - 1;
        bVar4 = 0 < (int)uVar10;
        uVar10 = uVar13;
      } while (uVar13 != 0 && bVar4);
      uVar10 = 0;
    }
LAB_05793b58:
    iVar15 = 2;
    if ((int)uVar10 < (int)uVar12) {
      iVar15 = *(int *)(param_1 + 0x28);
      cVar2 = *(char *)(param_1 + 0x98);
      goto LAB_05793b78;
    }
    goto LAB_05792fb0;
  case 6:
  case 7:
  case 8:
    iVar11 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1,1);
    if (*(char *)(param_1 + 0x98) == '\0') {
      iVar21 = *(int *)(param_1 + 0x28);
      iVar15 = *(int *)(param_1 + 0x14) - iVar21;
    }
    else {
      iVar21 = *(int *)(param_1 + 0x28);
      iVar15 = iVar21 - *(int *)(param_1 + 0x10);
    }
    if (iVar15 < iVar11) {
      iVar11 = iVar15;
    }
    iVar20 = iVar11 + -1;
    iVar15 = 2;
    if (0 < iVar11) goto LAB_05793b80;
    goto LAB_05792fb0;
  case 9:
    bVar4 = *(char *)(param_1 + 0x98) != '\0';
    lVar16 = 0x28;
    if (bVar4) {
      lVar16 = 0x10;
    }
    lVar1 = 0x14;
    if (bVar4) {
      lVar1 = 0x28;
    }
    if (0 < *(int *)(param_1 + lVar1) - *(int *)(param_1 + lVar16)) {
      sVar6 = FUN_057927e4(param_1);
      sVar5 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                        (param_1,0);
      iVar15 = 1;
      if (sVar6 == sVar5) goto LAB_05792fb0;
    }
    break;
  case 10:
    bVar4 = *(char *)(param_1 + 0x98) != '\0';
    lVar16 = 0x28;
    if (bVar4) {
      lVar16 = 0x10;
    }
    lVar1 = 0x14;
    if (bVar4) {
      lVar1 = 0x28;
    }
    if (0 < *(int *)(param_1 + lVar1) - *(int *)(param_1 + lVar16)) {
      sVar6 = FUN_057927e4(param_1);
      sVar5 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                        (param_1,0);
      iVar15 = 1;
      if (sVar6 != sVar5) goto LAB_05792fb0;
    }
    break;
  case 0xb:
    bVar4 = *(char *)(param_1 + 0x98) != '\0';
    lVar16 = 0x28;
    if (bVar4) {
      lVar16 = 0x10;
    }
    lVar1 = 0x14;
    if (bVar4) {
      lVar1 = 0x28;
    }
    if (0 < *(int *)(param_1 + lVar1) - *(int *)(param_1 + lVar16)) {
      uVar14 = FUN_057927e4(param_1);
      if (*(long *)(param_1 + 0x80) == 0) goto LAB_05794068;
      lVar16 = *(long *)(*(long *)(param_1 + 0x80) + 0x18);
      uVar12 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                         (param_1,0);
      if (lVar16 == 0) goto LAB_05794068;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_0579406c;
      uVar18 = *(undefined8 *)(lVar16 + (long)(int)uVar12 * 8 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98(*(long *)puVar3);
      }
      uVar17 = FUN_0578a9c0(uVar14,uVar18);
      goto LAB_05793828;
    }
    break;
  case 0xc:
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_05794068;
    lVar16 = *(long *)(*(long *)(param_1 + 0x80) + 0x18);
    uVar12 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1,0);
    if (lVar16 == 0) goto LAB_05794068;
    if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_0579406c;
    uVar17 = FUN_05792874(param_1,*(undefined8 *)(lVar16 + (long)(int)uVar12 * 8 + 0x20));
    goto LAB_05793828;
  case 0xd:
    uVar14 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1,0);
    uVar17 = FUN_0579c9e4(param_1,uVar14,0);
    if ((uVar17 & 1) != 0) {
      uVar8 = FUN_0579c97c(param_1,uVar14,0);
      uVar14 = FUN_0579c998(param_1,uVar14,0);
      uVar17 = FUN_057929e4(param_1,uVar8,uVar14);
      goto LAB_05793828;
    }
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_05794068;
    iVar15 = 1;
    if ((*(byte *)(*(long *)(param_1 + 0x68) + 0x21) & 1) != 0) goto LAB_05792fb0;
    break;
  case 0xe:
    iVar15 = 0;
    if (0 < *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x10)) {
      lVar16 = *(long *)(param_1 + 0x20);
      if (lVar16 == 0) goto LAB_05794068;
      iVar11 = *(int *)(param_1 + 0x28) + -1;
      goto LAB_05793878;
    }
    goto LAB_05792fb0;
  case 0xf:
    iVar11 = *(int *)(param_1 + 0x28);
    iVar15 = 0;
    if (*(int *)(param_1 + 0x14) - iVar11 < 1) goto LAB_05792fb0;
LAB_05793870:
    lVar16 = *(long *)(param_1 + 0x20);
    if (lVar16 == 0) goto LAB_05794068;
LAB_05793878:
    sVar6 = FUN_04e7a3d8(lVar16,iVar11,0);
    bVar4 = sVar6 == 10;
LAB_05793888:
    iVar15 = 0;
    if (bVar4) goto LAB_05792fb0;
    break;
  case 0x10:
    uVar17 = FUN_0579c4ac(param_1,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x10),
                          *(undefined4 *)(param_1 + 0x14),0);
    goto LAB_05793848;
  case 0x11:
    uVar17 = FUN_0579c4ac(param_1,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x10),
                          *(undefined4 *)(param_1 + 0x14),0);
    goto LAB_05793930;
  case 0x12:
    iVar11 = *(int *)(param_1 + 0x28);
    iVar21 = *(int *)(param_1 + 0x10);
    goto LAB_0579389c;
  case 0x13:
    bVar4 = *(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x18);
    goto LAB_05793888;
  case 0x14:
    iVar11 = *(int *)(param_1 + 0x28);
    iVar21 = *(int *)(param_1 + 0x14) - iVar11;
    if (iVar21 < 2) {
      iVar15 = 0;
      if (iVar21 == 1) goto LAB_05793870;
      goto LAB_05792fb0;
    }
    break;
  case 0x15:
    iVar11 = *(int *)(param_1 + 0x14);
    iVar21 = *(int *)(param_1 + 0x28);
LAB_0579389c:
    iVar15 = 0;
    if (iVar11 - iVar21 < 1) goto LAB_05792fb0;
    break;
  case 0x16:
    break;
  case 0x17:
    FUN_0579224c(param_1,*(undefined4 *)(param_1 + 0x28));
    iVar15 = 1;
    goto LAB_05792fb0;
  case 0x18:
    iVar15 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    iVar11 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1);
    uVar14 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1);
    if (iVar15 != iVar11) {
      Cysharp_Threading_Tasks_Triggers_AsyncCollisionExitTrigger__OnCollisionExit
                (param_1,uVar14,*(undefined4 *)(param_1 + 0x28));
      FUN_05792610(param_1,*(undefined4 *)(param_1 + 0x28));
      goto switchD_05792ff0_caseD_26;
    }
    goto LAB_05793204;
  case 0x19:
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    iVar15 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1);
    if (*(int *)(param_1 + 0x28) == iVar15) {
      FUN_05792610(param_1);
      uVar14 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                         (param_1);
LAB_05793204:
      FUN_057923b4(param_1,uVar14);
      iVar15 = 1;
    }
    else {
      if (iVar15 == -1) {
        iVar15 = *(int *)(param_1 + 0x28);
      }
      Cysharp_Threading_Tasks_Triggers_AsyncCollisionExitTrigger__OnCollisionExit(param_1,iVar15);
      iVar15 = 1;
    }
    goto LAB_05792fb0;
  case 0x1a:
    uVar8 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                      (param_1,0);
    uVar14 = 0xffffffff;
    goto LAB_05793270;
  case 0x1b:
    uVar14 = *(undefined4 *)(param_1 + 0x28);
    uVar8 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                      (param_1,0);
LAB_05793270:
    FUN_0579264c(param_1,uVar14,uVar8);
    FUN_0579220c(param_1);
    iVar15 = 1;
    goto LAB_05792fb0;
  case 0x1c:
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 2;
    iVar11 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1);
    iVar15 = FUN_057926fc(param_1,1);
    iVar21 = *(int *)(param_1 + 0x28);
    iVar7 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                      (param_1,1);
    if ((iVar15 < iVar7) && ((iVar21 != iVar11 || (iVar15 < 0)))) {
      FUN_0579224c(param_1,iVar11);
      uVar14 = *(undefined4 *)(param_1 + 0x28);
LAB_05793bd8:
      FUN_0579264c(param_1,uVar14,iVar15 + 1);
      goto switchD_05792ff0_caseD_26;
    }
LAB_05793418:
    FUN_05792414(param_1,iVar11,iVar15);
    goto LAB_05793b88;
  case 0x1d:
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 2;
    uVar14 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1);
    iVar15 = FUN_057926fc(param_1,1);
    if (iVar15 < 0) {
      FUN_057923b4(param_1,uVar14);
      uVar14 = *(undefined4 *)(param_1 + 0x28);
      goto LAB_05793bd8;
    }
    FUN_05792320(param_1,uVar14,iVar15,*(undefined4 *)(param_1 + 0x28));
    goto LAB_05793b88;
  case 0x1e:
    uVar14 = 0xffffffff;
    goto LAB_057936a8;
  case 0x1f:
    uVar14 = *(undefined4 *)(param_1 + 0x28);
LAB_057936a8:
    FUN_05792610(param_1,uVar14);
LAB_057936ac:
    FUN_0579220c(param_1);
    iVar15 = 0;
    goto LAB_05792fb0;
  case 0x20:
    iVar15 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1,1);
    if (iVar15 != -1) {
      uVar14 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                         (param_1,1);
      uVar17 = FUN_0579c9e4(param_1,uVar14,0);
      if ((uVar17 & 1) == 0) break;
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    iVar15 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1,1);
    uVar14 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1,0);
    if (iVar15 == -1) {
      uVar8 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                        (param_1);
      FUN_0579c810(param_1,uVar14,uVar8,*(undefined4 *)(param_1 + 0x28),0);
    }
    else {
      uVar8 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                        (param_1,1);
      uVar9 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                        (param_1);
      FUN_0579c868(param_1,uVar14,uVar8,uVar9,*(undefined4 *)(param_1 + 0x28),0);
    }
    uVar14 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1);
    FUN_0579224c(param_1,uVar14);
    goto LAB_05793b88;
  case 0x21:
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    uVar14 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1);
    FUN_0579224c(param_1,uVar14);
    uVar14 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1);
    iVar15 = 0;
    *(undefined4 *)(param_1 + 0x28) = uVar14;
    goto LAB_05792fb0;
  case 0x22:
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_05794068;
    iVar15 = *(int *)(param_1 + 0x38);
    iVar20 = *(int *)(*(long *)(param_1 + 0x30) + 0x18);
    uVar14 = FUN_0579c7f0(param_1,0);
    FUN_0579264c(param_1,iVar20 - iVar15,uVar14);
    goto LAB_057936ac;
  case 0x23:
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 2;
    iVar15 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_05794068;
    *(int *)(param_1 + 0x38) = *(int *)(*(long *)(param_1 + 0x30) + 0x18) - iVar15;
    while( true ) {
      iVar15 = FUN_0579c7f0(param_1,0);
      iVar11 = FUN_057926fc(param_1,1);
      if (iVar15 == iVar11) break;
      FUN_0579c9b4(param_1,0);
    }
    break;
  case 0x24:
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 2;
    iVar15 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_05794068;
    *(int *)(param_1 + 0x38) = *(int *)(*(long *)(param_1 + 0x30) + 0x18) - iVar15;
    uVar14 = FUN_057926fc(param_1,1);
    FUN_0579224c(param_1,uVar14);
    iVar15 = 0;
    goto LAB_05792fb0;
  case 0x25:
    uVar14 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                       (param_1,0);
    uVar17 = FUN_0579c9e4(param_1,uVar14,0);
LAB_05793828:
    iVar15 = 1;
joined_r0x0579384c:
    if ((uVar17 & 1) != 0) goto LAB_05792fb0;
    break;
  case 0x26:
    goto switchD_05792ff0_caseD_26;
  case 0x27:
    goto switchD_05792ff0_caseD_27;
  case 0x28:
    return;
  case 0x29:
    uVar17 = FUN_0579c5ac(param_1,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x10),
                          *(undefined4 *)(param_1 + 0x14),0);
LAB_05793848:
    iVar15 = 0;
    goto joined_r0x0579384c;
  case 0x2a:
    uVar17 = FUN_0579c5ac(param_1,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x10),
                          *(undefined4 *)(param_1 + 0x14),0);
LAB_05793930:
    iVar15 = 0;
    if ((uVar17 & 1) == 0) goto LAB_05792fb0;
    break;
  default:
    if (0x117 < iVar15) {
      if (iVar15 < 0x11c) {
        if (iVar15 == 0x118) goto switchD_057938d0_caseD_a1;
        if (iVar15 == 0x119) {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
          goto LAB_05793c88;
        }
      }
      else {
        if (iVar15 == 0x11c) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 2;
          goto LAB_05793d70;
        }
        if (iVar15 == 0x11d) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 2;
LAB_05794024:
          uVar14 = FUN_0579259c(param_1);
          iVar15 = FUN_057926fc(param_1,1);
          iVar15 = iVar15 + -1;
LAB_05794040:
          FUN_0579264c(param_1,uVar14,iVar15);
          break;
        }
      }
switchD_05792ff0_caseD_27:
      uVar18 = thunk_FUN_02db45e8(
                                 Method_Unity_Burst_FunctionPointer<xxHash3_Hash64Long_00000A6A_PostfixBurstDelegate>_get_Value__
                                 );
      uVar18 = FUN_057741b4(uVar18,0);
      uVar19 = thunk_FUN_02db45e8(
                                 Method_Unity_Burst_FunctionPointer<AllocatorManager_SlabAllocator_Try_000000B9_PostfixBurstDelegate>_get_Value__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar18,uVar19);
    }
    switch(iVar15) {
    case 0x83:
    case 0x84:
    case 0x85:
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 2;
      iVar11 = FUN_0579259c(param_1);
      iVar7 = FUN_057925d4(param_1,1);
      iVar20 = iVar11 + -1;
      iVar15 = 2;
      *(int *)(param_1 + 0x28) = iVar7;
      if (0 < iVar11) {
        iVar21 = iVar7 + -1;
        if (*(char *)(param_1 + 0x98) != '\0') {
          iVar21 = iVar7 + 1;
        }
        goto LAB_05793b80;
      }
      goto LAB_05792fb0;
    case 0x86:
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 2;
      iVar11 = FUN_057925d4(param_1,1);
      *(int *)(param_1 + 0x28) = iVar11;
      sVar6 = FUN_057927e4(param_1);
      sVar5 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                        (param_1,0);
      if (sVar6 == sVar5) {
LAB_05793f3c:
        iVar21 = FUN_0579259c(param_1);
        iVar20 = iVar21 + -1;
        iVar15 = 2;
        if (0 < iVar21) {
          iVar21 = iVar11 + -1;
          if (*(char *)(param_1 + 0x98) == '\0') {
            iVar21 = iVar11 + 1;
          }
          goto LAB_05793b80;
        }
        goto LAB_05792fb0;
      }
      break;
    case 0x87:
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 2;
      iVar11 = FUN_057925d4(param_1,1);
      *(int *)(param_1 + 0x28) = iVar11;
      sVar6 = FUN_057927e4(param_1);
      sVar5 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                        (param_1,0);
      if (sVar6 != sVar5) goto LAB_05793f3c;
      break;
    case 0x88:
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 2;
      iVar11 = FUN_057925d4(param_1,1);
      *(int *)(param_1 + 0x28) = iVar11;
      uVar14 = FUN_057927e4(param_1);
      if (*(long *)(param_1 + 0x80) == 0) goto LAB_05794068;
      lVar16 = *(long *)(*(long *)(param_1 + 0x80) + 0x18);
      uVar12 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                         (param_1,0);
      if (lVar16 == 0) goto LAB_05794068;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_0579406c;
      uVar18 = *(undefined8 *)(lVar16 + (long)(int)uVar12 * 8 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98(*(long *)puVar3);
      }
      uVar17 = FUN_0578a9c0(uVar14,uVar18);
      if ((uVar17 & 1) != 0) goto LAB_05793f3c;
      break;
    default:
      goto switchD_05792ff0_caseD_27;
    case 0x97:
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      uVar14 = FUN_0579259c(param_1);
      *(undefined4 *)(param_1 + 0x28) = uVar14;
      goto switchD_05792ff0_caseD_26;
    case 0x98:
      goto switchD_057938d0_caseD_98;
    case 0x99:
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 2;
      uVar14 = FUN_057925d4(param_1,1);
      uVar8 = FUN_0579259c(param_1);
      FUN_057923b4(param_1,uVar8);
      FUN_05792610(param_1,uVar14);
      *(undefined4 *)(param_1 + 0x28) = uVar14;
switchD_05792ff0_caseD_26:
      uVar14 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                         (param_1,0);
      FUN_05792138(param_1,uVar14);
      iVar15 = iVar20;
      goto LAB_05792fb0;
    case 0x9a:
    case 0x9b:
    case 0xa2:
      iVar15 = *(int *)(param_1 + 0x48) + 2;
      goto LAB_05793c74;
    case 0x9c:
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 2;
      iVar15 = FUN_057926fc(param_1,1);
      if (0 < iVar15) {
        uVar14 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                           (param_1);
        *(undefined4 *)(param_1 + 0x28) = uVar14;
        iVar11 = FUN_0579259c(param_1);
        iVar15 = FUN_057926fc(param_1,1);
        iVar15 = iVar15 + -1;
        goto LAB_05793418;
      }
      goto LAB_05794024;
    case 0x9d:
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 3;
      iVar15 = FUN_0579259c(param_1);
      iVar11 = FUN_057925d4(param_1,2);
      iVar21 = FUN_057925d4(param_1,1);
      iVar7 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                        (param_1,1);
      if ((iVar21 < iVar7) && (iVar11 != iVar15)) {
        *(int *)(param_1 + 0x28) = iVar11;
        iVar21 = FUN_057925d4(param_1,1);
        FUN_0579264c(param_1,iVar11,iVar21 + 1);
        FUN_057923b4(param_1,iVar15);
        goto switchD_05792ff0_caseD_26;
      }
LAB_05793d70:
      uVar14 = FUN_0579259c(param_1);
      iVar15 = FUN_057925d4(param_1,1);
      goto LAB_05794040;
    case 0x9e:
    case 0x9f:
      iVar15 = *(int *)(param_1 + 0x48) + 1;
LAB_05793c74:
      *(int *)(param_1 + 0x48) = iVar15;
      break;
    case 0xa0:
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      uVar14 = FUN_0579259c(param_1);
      FUN_05792610(param_1,uVar14);
      FUN_0579c9b4(param_1,0);
      iVar15 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                         (param_1,0);
      if ((iVar15 != -1) &&
         (iVar15 = Cysharp_Threading_Tasks_Triggers_AsyncCollisionExit2DTrigger__GetOnCollisionExit2DAsyncHandler
                             (param_1,1), iVar15 != -1)) {
        FUN_0579c9b4(param_1,0);
      }
      break;
    case 0xa1:
switchD_057938d0_caseD_a1:
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
LAB_05793c88:
      uVar14 = FUN_0579259c(param_1);
      FUN_05792610(param_1,uVar14);
      break;
    case 0xa4:
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      while( true ) {
        iVar15 = FUN_0579c7f0(param_1,0);
        iVar11 = FUN_0579259c(param_1);
        if (iVar15 == iVar11) break;
        FUN_0579c9b4(param_1,0);
      }
    }
  }
  FUN_05792490(param_1);
  iVar15 = iVar20;
  goto LAB_05792fb0;
switchD_057938d0_caseD_98:
  iVar15 = 1;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 2;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  uVar14 = FUN_057925d4(param_1,1);
  *(undefined4 *)(param_1 + 0x28) = uVar14;
  uVar14 = FUN_0579259c(param_1);
  FUN_057923b4(param_1,uVar14);
  goto LAB_05792fb0;
LAB_05793afc:
  if (param_1 == 0) {
LAB_05794068:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  iVar15 = *(int *)(param_1 + 0x28) + -1;
  if (*(char *)(param_1 + 0x98) != '\0') {
    iVar15 = *(int *)(param_1 + 0x28) + 1;
  }
  *(int *)(param_1 + 0x28) = iVar15;
LAB_05793b18:
  iVar15 = 2;
  if ((int)uVar10 < (int)uVar12) {
    iVar15 = *(int *)(param_1 + 0x28);
    cVar2 = *(char *)(param_1 + 0x98);
LAB_05793b78:
    iVar21 = iVar15 + -1;
    if (cVar2 != '\0') {
      iVar21 = iVar15 + 1;
    }
    iVar20 = uVar12 + ~uVar10;
LAB_05793b80:
    Cysharp_Threading_Tasks_Triggers_AsyncCollisionExitTrigger__OnCollisionExit
              (param_1,iVar20,iVar21);
LAB_05793b88:
    iVar15 = 2;
  }
  goto LAB_05792fb0;
}


