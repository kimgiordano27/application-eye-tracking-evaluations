/*
FUNCTION_NAME: FUN_06181750
ENTRY_POINT: 06181750
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_9
*/


void FUN_06181750(long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  
  if ((DAT_076ddb53 & 1) == 0) {
    thunk_FUN_032e1da0(System_Collections_Generic_List<IXRHandProcessor>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<ChallengeEntry>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<IXRHoverInteractable>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
                    /* try { // try from 061817b0 to 062817b7 has its CatchHandler @ 06181868 */
    thunk_FUN_032e1da0(System_Func<TransitionRunEvent>_TypeInfo);
                    /* try { // try from 061817bc to 062817c3 has its CatchHandler @ 06181840 */
    thunk_FUN_032e1da0(System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo);
                    /* try { // try from 061817c8 to 062817cb has its CatchHandler @ 06181830 */
    thunk_FUN_032e1da0(System_Func<FocusOutEvent>_TypeInfo);
                    /* try { // try from 061817d0 to 062817d3 has its CatchHandler @ 06181820 */
                    /* try { // try from 061817d8 to 062817db has its CatchHandler @ 0618181c */
    thunk_FUN_032e1da0(System_Collections_Generic_List<PostProcessEffectSettings>_TypeInfo);
                    /* try { // try from 061817e0 to 062817e3 has its CatchHandler @ 06181814 */
    thunk_FUN_032e1da0(System_Collections_Generic_List<IXRHoverInteractor>_TypeInfo);
                    /* try { // try from 061817e8 to 062817eb has its CatchHandler @ 06181810 */
    DAT_076ddb53 = 1;
  }
                    /* try { // try from 061817f0 to 062817f3 has its CatchHandler @ 061817f8 */
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
                    /* try { // try from 061817f4 to 0628184f has its CatchHandler @ 0618085c */
                    /* catch() { ... } // from try @ 061817f0 with catch @ 061817f8 */
  if (*(char *)(param_2 + 0x30) != '\0') {
                    /* catch() { ... } // from try @ 061812a4 with catch @ 061817fc */
                    /* catch() { ... } // from try @ 06181294 with catch @ 06181800 */
                    /* catch() { ... } // from try @ 06181274 with catch @ 06181804 */
    FUN_06280f9c(param_1,*(undefined8 *)System_Collections_Generic_List<IXRHoverInteractor>_TypeInfo
                 ,param_2,0);
    return;
  }
                    /* catch() { ... } // from try @ 061817c8 with catch @ 06181830 */
                    /* catch() { ... } // from try @ 06181214 with catch @ 06181834 */
  plVar14 = (long *)(param_2 + 0xe0);
                    /* catch() { ... } // from try @ 061814bc with catch @ 06181838 */
  if (*plVar14 != 0) {
    return;
  }
                    /* catch() { ... } // from try @ 06181460 with catch @ 0618183c */
                    /* catch() { ... } // from try @ 061817bc with catch @ 06181840 */
  *(undefined1 *)(param_2 + 0x30) = 1;
  if (*(long *)(param_2 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
                    /* try { // try from 06181850 to 06281853 has its CatchHandler @ 06181ad0 */
  uVar6 = FUN_0624bb14(*(long *)(param_2 + 0xa0),0);
                    /* try { // try from 06181854 to 06281877 has its CatchHandler @ 0618085c */
  if ((uVar6 & 1) == 0) {
    if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
                    /* try { // try from 06181878 to 0628187b has its CatchHandler @ 06181adc */
                    /* try { // try from 0618187c to 0628191f has its CatchHandler @ 0618085c */
    plVar15 = (long *)FUN_061a33b4(*(long *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0xa0),0);
    if (plVar15 == (long *)0x0) {
      plVar14 = *(long **)(param_2 + 0xa0);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar10 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
      thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
      uVar11 = thunk_FUN_032a56a0();
      uVar12 = thunk_FUN_032e1da0(System_Collections_Generic_List<IXRInteractor>_TypeInfo);
      FUN_061a17f8(uVar11,uVar12,uVar10,param_2,0);
      uVar10 = thunk_FUN_032e1da0(System_Collections_Generic_List<PostProcessVolume>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar11,uVar10);
    }
    bVar3 = *(byte *)(*(long *)System_Func<TransitionRunEvent>_TypeInfo + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)System_Func<TransitionRunEvent>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(plVar15);
    }
    FUN_06181750(param_1,plVar15);
    if (plVar15[0x1c] == 0) {
      plVar14 = *(long **)(param_2 + 0xa0);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar10 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
      thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
      uVar11 = thunk_FUN_032a56a0();
      uVar12 = thunk_FUN_032e1da0(System_Collections_Generic_List<IXRSelectFilter>_TypeInfo);
      FUN_061a17f8(uVar11,uVar12,uVar10,param_2,0);
      uVar10 = thunk_FUN_032e1da0(System_Collections_Generic_List<PostProcessVolume>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar11,uVar10);
    }
    *(long *)(param_2 + 200) = plVar15[0x19];
    thunk_FUN_0333a630();
    if (plVar15[0x1c] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar13 = FUN_06172eb4();
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
  }
  else {
    if (*(long *)(param_2 + 0xb8) == 0) {
      if (*(long *)(param_2 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar6 = FUN_0624bb14(*(long *)(param_2 + 0xb0),0);
      if ((uVar6 & 1) == 0) {
        lVar13 = FUN_06188ffc(param_1,*(undefined8 *)(param_2 + 0xb0));
                    /* try { // try from 061819e8 to 06281a6b has its CatchHandler @ 06181d4c */
        plVar15 = (long *)(param_2 + 200);
        *plVar15 = lVar13;
        thunk_FUN_0333a630(plVar15);
        if (*plVar15 == 0) {
          plVar14 = *(long **)(param_2 + 0xb0);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar10 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
          thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
          uVar11 = thunk_FUN_032a56a0();
          uVar12 = thunk_FUN_032e1da0(
                                     System_Collections_Generic_List<IXRSelectInteractable>_TypeInfo
                                     );
          FUN_061a17f8(uVar11,uVar12,uVar10,param_2,0);
          uVar10 = thunk_FUN_032e1da0(System_Collections_Generic_List<PostProcessVolume>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar11,uVar10);
        }
        goto LAB_06181a04;
      }
      if (*(long *)(param_2 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar6 = FUN_0624bb14(*(long *)(param_2 + 0xa8),0);
      puVar2 = System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo;
                    /* try { // try from 06181920 to 06281923 has its CatchHandler @ 06181c8c */
      if ((uVar6 & 1) == 0) {
        if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        plVar15 = (long *)FUN_061a33b4(*(long *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0xa8),0);
        if (plVar15 == (long *)0x0) {
          if (*(long *)(param_2 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar17 = *(long *)(*(long *)(param_2 + 0xa8) + 0x10);
          lVar13 = thunk_FUN_032e1da0(PTR_DAT_07280380);
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar10 = FUN_058e6bb4(0);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar10 = FUN_057b1640(lVar17,uVar10,0);
          thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
          uVar11 = thunk_FUN_032a56a0();
          uVar12 = thunk_FUN_032e1da0(System_Collections_Generic_List<IXRSelectInteractor>_TypeInfo)
          ;
          FUN_061a17f8(uVar11,uVar12,uVar10,param_2,0);
          uVar10 = thunk_FUN_032e1da0(System_Collections_Generic_List<PostProcessVolume>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar11,uVar10);
        }
        bVar3 = *(byte *)(*(long *)System_Func<TransitionRunEvent>_TypeInfo + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)System_Func<TransitionRunEvent>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar15);
        }
        if ((char)plVar15[6] != '\0') goto LAB_06181edc;
        FUN_06181750(param_1,plVar15);
        puVar2 = System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo;
        if (plVar15[0x1c] == 0) {
          if (*(int *)(*(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo
                      + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          if (DAT_076dda9b == '\0') {
            thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
            DAT_076dda9b = '\x01';
          }
          lVar13 = *(long *)puVar2;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar13 = *(long *)puVar2;
          }
          *(undefined8 *)(param_2 + 200) = **(undefined8 **)(lVar13 + 0xb8);
          thunk_FUN_0333a630();
          if (DAT_076dda9b == '\0') {
            thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
            DAT_076dda9b = '\x01';
          }
          lVar13 = *(long *)puVar2;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar13 = *(long *)puVar2;
          }
          if (**(long **)(lVar13 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar13 = FUN_061ada28(**(long **)(lVar13 + 0xb8),0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar13 = FUN_06172eb4();
        }
        else {
          *(long *)(param_2 + 200) = plVar15[0x19];
          thunk_FUN_0333a630();
          if (plVar15[0x1c] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar13 = FUN_06172eb4();
        }
      }
      else {
                    /* try { // try from 06181924 to 06281927 has its CatchHandler @ 06181c7c */
        if (*(int *)(*(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
                    /* try { // try from 06181940 to 06281993 has its CatchHandler @ 06181d4c */
        if (DAT_076dda9b == '\0') {
          thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
          DAT_076dda9b = '\x01';
        }
        lVar13 = *(long *)puVar2;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar13 = *(long *)puVar2;
        }
        *(undefined8 *)(param_2 + 200) = **(undefined8 **)(lVar13 + 0xb8);
        thunk_FUN_0333a630();
        if (DAT_076dda9b == '\0') {
          thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
                    /* try { // try from 06181998 to 0628199f has its CatchHandler @ 06181c6c */
          DAT_076dda9b = '\x01';
        }
                    /* try { // try from 061819a0 to 062819a3 has its CatchHandler @ 06181c68 */
        lVar13 = *(long *)puVar2;
                    /* try { // try from 061819a4 to 062819ab has its CatchHandler @ 06181ba4 */
        if (*(int *)(lVar13 + 0xe0) == 0) {
                    /* try { // try from 061819ac to 062819af has its CatchHandler @ 06181ba0 */
          thunk_FUN_032cd7c0();
                    /* try { // try from 061819b0 to 062819b3 has its CatchHandler @ 06181b7c */
          lVar13 = *(long *)puVar2;
        }
                    /* try { // try from 061819b4 to 062819bb has its CatchHandler @ 06181b70 */
                    /* try { // try from 061819bc to 062819bf has its CatchHandler @ 06181b6c */
        if (**(long **)(lVar13 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
                    /* try { // try from 061819c0 to 062819c3 has its CatchHandler @ 06181b60 */
                    /* try { // try from 061819c4 to 062819c7 has its CatchHandler @ 06181b58 */
        lVar13 = FUN_061ada28(**(long **)(lVar13 + 0xb8),0);
                    /* try { // try from 061819c8 to 062819cb has its CatchHandler @ 06181b54 */
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
                    /* try { // try from 061819cc to 062819cf has its CatchHandler @ 06181b50 */
        lVar13 = FUN_06172eb4();
      }
      if (lVar13 == 0) goto LAB_06181a04;
    }
    else {
                    /* catch() { ... } // from try @ 061811a8 with catch @ 06181860 */
                    /* catch() { ... } // from try @ 06181198 with catch @ 06181864 */
      *(long *)(param_2 + 200) = *(long *)(param_2 + 0xb8);
                    /* catch() { ... } // from try @ 061817b0 with catch @ 06181868 */
      thunk_FUN_0333a630();
LAB_06181a04:
      plVar15 = *(long **)(param_2 + 200);
      if (plVar15 == (long *)0x0) goto LAB_06182090;
      lVar13 = *plVar15;
      bVar3 = *(byte *)(*(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo
                       + 0x130);
      if ((*(byte *)(lVar13 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo)) {
        bVar3 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
        if ((*(byte *)(lVar13 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)System_Func<FocusOutEvent>_TypeInfo)) goto LAB_06182090;
                    /* try { // try from 06181a6c to 06281a6f has its CatchHandler @ 06181b34 */
                    /* try { // try from 06181a70 to 06281a73 has its CatchHandler @ 06181b10 */
                    /* try { // try from 06181a74 to 06281a77 has its CatchHandler @ 06181b04 */
        FUN_06180dbc(param_1,plVar15);
                    /* try { // try from 06181a78 to 06281a7f has its CatchHandler @ 06181afc */
        lVar13 = FUN_061ada28(plVar15,0);
        if (lVar13 == 0) goto LAB_06182090;
                    /* try { // try from 06181a90 to 06281aab has its CatchHandler @ 06181d4c */
        lVar13 = FUN_061ada28(plVar15,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar13 = FUN_06172eb4();
      }
      else {
        FUN_061802dc(param_1,plVar15);
        lVar13 = FUN_061ada28(plVar15,0);
        if (lVar13 == 0) goto LAB_06182090;
        lVar13 = FUN_061ada28(plVar15,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar13 = FUN_06172eb4();
      }
      if (lVar13 == 0) {
LAB_06182090:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
    }
    *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(param_2 + 0xc0);
    thunk_FUN_0333a630();
    cVar1 = *(char *)(param_2 + 0x74);
    *(char *)(lVar13 + 0x72) = cVar1;
    plVar15 = *(long **)(param_2 + 200);
    if (plVar15 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo
                       + 0x130);
      if ((bVar3 <= *(byte *)(*plVar15 + 0x130)) &&
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) ==
          *(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo)) {
        bVar3 = FUN_0619ecf4(plVar15,0);
        *(byte *)(lVar13 + 0x72) = cVar1 != '\0' | bVar3 & 1;
      }
    }
    *(undefined1 *)(lVar13 + 0x73) = *(undefined1 *)(param_2 + 0x76);
    *(uint *)(lVar13 + 0x90) = *(uint *)(param_2 + 0xd0) | *(uint *)(lVar13 + 0x90);
  }
  plVar15 = *(long **)(lVar13 + 0x30);
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x298))
              (plVar15,*(undefined8 *)(param_1 + 0x70),param_2,*(undefined8 *)(*plVar15 + 0x2a0));
  }
  if (((*(long *)(param_2 + 0x88) != 0) || (*(long *)(param_2 + 0x90) != 0)) &&
     (plVar15 = *(long **)(lVar13 + 0x80), plVar15 != (long *)0x0)) {
    if (((int)plVar15[2] != 0) &&
       (((int)plVar15[2] != 3 ||
        (uVar6 = (**(code **)(*plVar15 + 0x178))(plVar15,*(undefined8 *)(*plVar15 + 0x180)),
        (uVar6 & 1) == 0)))) {
      thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
      uVar10 = thunk_FUN_032a56a0();
      uVar11 = thunk_FUN_032e1da0(System_Collections_Generic_List<IXRInteractable>_TypeInfo);
      FUN_061a17bc(uVar10,uVar11,param_2,0);
      uVar11 = thunk_FUN_032e1da0(System_Collections_Generic_List<PostProcessVolume>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar10,uVar11);
    }
    if (*(long *)(param_2 + 0x88) == 0) {
      *(undefined4 *)(lVar13 + 0x24) = 3;
      *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(param_2 + 0x90);
      thunk_FUN_0333a630();
    }
    else {
      *(long *)(lVar13 + 0x38) = *(long *)(param_2 + 0x88);
      *(undefined4 *)(lVar13 + 0x24) = 0;
      thunk_FUN_0333a630();
    }
    puVar2 = System_Collections_Generic_List<ChallengeEntry>_TypeInfo;
    plVar15 = *(long **)(lVar13 + 0x30);
    if (plVar15 == (long *)0x0) {
      if (*(int *)(*(long *)System_Collections_Generic_List<ChallengeEntry>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (DAT_076ddaf5 == '\0') {
        thunk_FUN_032e1da0(System_Collections_Generic_List<ChallengeEntry>_TypeInfo);
        DAT_076ddaf5 = '\x01';
      }
      lVar17 = *(long *)puVar2;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar17 = *(long *)puVar2;
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x10);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      plVar15 = *(long **)(lVar17 + 0x68);
      if ((DAT_076ddafa & 1) == 0) {
        thunk_FUN_032e1da0(PTR_DAT_072794f8);
        DAT_076ddafa = 1;
      }
      lVar17 = *(long *)(lVar13 + 0x38);
      if (lVar17 == 0) {
        lVar17 = **(long **)(*(long *)PTR_DAT_072794f8 + 0xb8);
      }
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                  System_Collections_Generic_List<IXRHoverInteractable>_TypeInfo);
      FUN_0624a850(lVar9,0);
      *(long *)(lVar9 + 0x50) = param_2;
      thunk_FUN_0333a630((long *)(lVar9 + 0x50),param_2);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar10 = (**(code **)(*plVar15 + 0x198))
                         (plVar15,lVar17,uVar10,lVar9,*(undefined8 *)(*plVar15 + 0x1a0));
      *(undefined8 *)(lVar13 + 0x40) = uVar10;
      thunk_FUN_0333a630();
    }
    else {
      iVar4 = (**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
      if (iVar4 == 0x25) {
        FUN_06280f9c(param_1,*(undefined8 *)
                              System_Collections_Generic_List<PostProcessEffectSettings>_TypeInfo,
                     param_2,0);
      }
      else {
        plVar15 = *(long **)(lVar13 + 0x30);
        if ((DAT_076ddafa & 1) == 0) {
          thunk_FUN_032e1da0(PTR_DAT_072794f8);
          DAT_076ddafa = 1;
        }
        lVar17 = *(long *)(lVar13 + 0x38);
        if (lVar17 == 0) {
          lVar17 = **(long **)(*(long *)PTR_DAT_072794f8 + 0xb8);
        }
        uVar10 = *(undefined8 *)(param_1 + 0x10);
        lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                    System_Collections_Generic_List<IXRHoverInteractable>_TypeInfo);
        FUN_0624a850(lVar9,0);
        *(long *)(lVar9 + 0x50) = param_2;
        thunk_FUN_0333a630((long *)(lVar9 + 0x50),param_2);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar10 = (**(code **)(*plVar15 + 0x228))
                           (plVar15,lVar17,uVar10,lVar9,1,*(undefined8 *)(*plVar15 + 0x230));
        *(undefined8 *)(lVar13 + 0x40) = uVar10;
        thunk_FUN_0333a630();
      }
    }
  }
  uVar6 = FUN_061a0de0(param_2,0);
  if ((uVar6 & 1) != 0) {
    plVar15 = (long *)FUN_061a0d30(param_2,0);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar5 = FUN_058f278c(plVar15,0);
    plVar7 = (long *)FUN_032d5d3c(*(undefined8 *)
                                   System_Collections_Generic_List<IXRHandProcessor>_TypeInfo,uVar5)
    ;
    puVar2 = System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo;
    plVar16 = plVar7 + 4;
    for (uVar6 = 0; iVar4 = FUN_058f278c(plVar15,0), (int)uVar6 < iVar4; uVar6 = uVar6 + 1) {
      plVar8 = (long *)(**(code **)(*plVar15 + 0x308))
                                 (plVar15,uVar6 & 0xffffffff,*(undefined8 *)(*plVar15 + 0x310));
      if (plVar8 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar8);
        }
      }
      FUN_06182e3c(param_1,plVar8);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar17 = plVar8[0xe];
      if ((lVar17 != 0) &&
         (lVar9 = thunk_FUN_032a55a4(lVar17,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
        uVar10 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar10,0);
      }
      if (*(uint *)(plVar7 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      *plVar16 = lVar17;
      thunk_FUN_0333a630(plVar16,lVar17);
      plVar16 = plVar16 + 1;
    }
    *(long *)(lVar13 + 0x98) = (long)plVar7;
    thunk_FUN_0333a630((long *)(lVar13 + 0x98),plVar7);
  }
  *(long *)(lVar13 + 0xa0) = param_2;
  thunk_FUN_0333a630((long *)(lVar13 + 0xa0),param_2);
  *plVar14 = lVar13;
  thunk_FUN_0333a630(plVar14,lVar13);
LAB_06181edc:
  *(undefined1 *)(param_2 + 0x30) = 0;
  return;
}


