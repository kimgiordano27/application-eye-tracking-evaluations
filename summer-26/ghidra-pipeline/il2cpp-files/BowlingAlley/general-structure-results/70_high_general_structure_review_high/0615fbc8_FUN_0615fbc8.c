/*
FUNCTION_NAME: FUN_0615fbc8
ENTRY_POINT: 0615fbc8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_2
*/


void FUN_0615fbc8(long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  
  if ((DAT_076ddacf & 1) == 0) {
    thunk_FUN_032e1da0(System_Collections_Generic_List<IXRHandProcessor>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<IXRHoverInteractable>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionRunEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusOutEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<IXRHoverInteractor>_TypeInfo);
    DAT_076ddacf = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(char *)(param_2 + 0x30) != '\0') {
    FUN_06280f9c(param_1,*(undefined8 *)System_Collections_Generic_List<IXRHoverInteractor>_TypeInfo
                 ,param_2,0);
    return;
  }
  plVar14 = (long *)(param_2 + 0xe0);
  if (*plVar14 != 0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x30) = 1;
  if (*(long *)(param_2 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar6 = FUN_0624bb14(*(long *)(param_2 + 0xa0),0);
  if ((uVar6 & 1) == 0) {
    if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar13 = FUN_0619a9b4(*(long *)(param_1 + 0x58),0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    plVar15 = (long *)FUN_061a33b4(lVar13,*(undefined8 *)(param_2 + 0xa0),0);
    if (plVar15 == (long *)0x0) {
      plVar14 = *(long **)(param_2 + 0xa0);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar7 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
      thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
      uVar8 = thunk_FUN_032a56a0();
      uVar16 = thunk_FUN_032e1da0(System_Collections_Generic_List<IXRInteractor>_TypeInfo);
      FUN_061a17f8(uVar8,uVar16,uVar7,param_2,0);
      uVar7 = thunk_FUN_032e1da0(System_Collections_Generic_List<IXRInteractionGroup>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar8,uVar7);
    }
    bVar3 = *(byte *)(*(long *)System_Func<TransitionRunEvent>_TypeInfo + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)System_Func<TransitionRunEvent>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(plVar15);
    }
    FUN_0615fbc8(param_1,plVar15);
    if (plVar15[0x1c] == 0) {
      plVar14 = *(long **)(param_2 + 0xa0);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar7 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
      thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
      uVar8 = thunk_FUN_032a56a0();
      uVar16 = thunk_FUN_032e1da0(System_Collections_Generic_List<IXRSelectFilter>_TypeInfo);
      FUN_061a17f8(uVar8,uVar16,uVar7,param_2,0);
      uVar7 = thunk_FUN_032e1da0(System_Collections_Generic_List<IXRInteractionGroup>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar8,uVar7);
    }
    *(long *)(param_2 + 200) = plVar15[0x19];
    thunk_FUN_0333a630();
    if (plVar15[0x1c] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar13 = FUN_06172eb4(plVar15[0x1c],0);
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
        lVar13 = FUN_06165728(param_1,*(undefined8 *)(param_2 + 0xb0));
        plVar15 = (long *)(param_2 + 200);
        *plVar15 = lVar13;
        thunk_FUN_0333a630(plVar15);
        if (*plVar15 == 0) {
          plVar14 = *(long **)(param_2 + 0xb0);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar7 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
          thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
          uVar8 = thunk_FUN_032a56a0();
                    /* catch() { ... } // from try @ 061605e8 with catch @ 06160550
                       catch() { ... } // from try @ 06160620 with catch @ 06160550 */
          uVar16 = thunk_FUN_032e1da0(
                                     System_Collections_Generic_List<IXRSelectInteractable>_TypeInfo
                                     );
          FUN_061a17f8(uVar8,uVar16,uVar7,param_2,0);
          uVar7 = thunk_FUN_032e1da0(System_Collections_Generic_List<IXRInteractionGroup>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar8,uVar7);
        }
        goto LAB_0615fe78;
      }
      if (*(long *)(param_2 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar6 = FUN_0624bb14(*(long *)(param_2 + 0xa8),0);
      puVar2 = System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo;
      if ((uVar6 & 1) == 0) {
        if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar13 = FUN_0619a9b4(*(long *)(param_1 + 0x58),0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        plVar15 = (long *)FUN_061a33b4(lVar13,*(undefined8 *)(param_2 + 0xa8),0);
        if (plVar15 == (long *)0x0) {
          if (*(long *)(param_2 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar12 = *(long *)(*(long *)(param_2 + 0xa8) + 0x10);
                    /* try { // try from 061605a8 to 062605b3 has its CatchHandler @ 0616060c */
          lVar13 = thunk_FUN_032e1da0(PTR_DAT_07280380);
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
                    /* try { // try from 061605bc to 062605c7 has its CatchHandler @ 06160604 */
          uVar7 = FUN_058e6bb4(0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
                    /* try { // try from 061605dc to 062605e7 has its CatchHandler @ 06160600 */
          uVar7 = FUN_057b1640(lVar12,uVar7,0);
                    /* try { // try from 061605e8 to 0626061b has its CatchHandler @ 06160550 */
          thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
          uVar8 = thunk_FUN_032a56a0();
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 061605cc with catch @ 061605fc
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 061605dc with catch @ 06160600
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 061605bc with catch @ 06160604
                        */
          uVar16 = thunk_FUN_032e1da0(System_Collections_Generic_List<IXRSelectInteractor>_TypeInfo)
          ;
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06160598 with catch @ 06160608
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 061605a8 with catch @ 0616060c
                        */
                    /* try { // try from 0616061c to 0626061f has its CatchHandler @ 06160638 */
          FUN_061a17f8(uVar8,uVar16,uVar7,param_2,0);
                    /* try { // try from 06160620 to 06260643 has its CatchHandler @ 06160550 */
          uVar7 = thunk_FUN_032e1da0(System_Collections_Generic_List<IXRInteractionGroup>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar8,uVar7);
        }
        bVar3 = *(byte *)(*(long *)System_Func<TransitionRunEvent>_TypeInfo + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)System_Func<TransitionRunEvent>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar15);
        }
        if ((char)plVar15[6] != '\0') goto LAB_06160234;
        FUN_0615fbc8(param_1,plVar15);
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
          lVar13 = FUN_06172eb4(lVar13,0);
        }
        else {
          *(long *)(param_2 + 200) = plVar15[0x19];
          thunk_FUN_0333a630();
          if (plVar15[0x1c] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 061605cc to 062605d7 has its CatchHandler @ 061605fc */
            FUN_032d5ee8();
          }
          lVar13 = FUN_06172eb4(plVar15[0x1c],0);
        }
      }
      else {
        if (*(int *)(*(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo +
                    0xe0) == 0) {
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
                    /* try { // try from 06160598 to 062605a3 has its CatchHandler @ 06160608 */
          FUN_032d5ee8();
        }
        lVar13 = FUN_06172eb4(lVar13,0);
      }
      if (lVar13 == 0) goto LAB_0615fe78;
    }
    else {
      *(long *)(param_2 + 200) = *(long *)(param_2 + 0xb8);
      thunk_FUN_0333a630();
LAB_0615fe78:
      plVar15 = *(long **)(param_2 + 200);
      if (plVar15 == (long *)0x0) goto LAB_06160400;
      lVar13 = *plVar15;
      bVar3 = *(byte *)(*(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo
                       + 0x130);
      if ((*(byte *)(lVar13 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo)) {
        bVar3 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
        if ((*(byte *)(lVar13 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)System_Func<FocusOutEvent>_TypeInfo)) goto LAB_06160400;
        FUN_0615f26c(param_1,plVar15);
        lVar13 = FUN_061ada28(plVar15,0);
        if (lVar13 == 0) goto LAB_06160400;
        lVar13 = FUN_061ada28(plVar15,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar13 = FUN_06172eb4(lVar13,0);
      }
      else {
        FUN_0615e568(param_1,plVar15);
        lVar13 = FUN_061ada28(plVar15,0);
        if (lVar13 == 0) goto LAB_06160400;
        lVar13 = FUN_061ada28(plVar15,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar13 = FUN_06172eb4(lVar13,0);
      }
      if (lVar13 == 0) {
LAB_06160400:
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
    if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    (**(code **)(*plVar15 + 0x298))
              (plVar15,*(undefined8 *)(*(long *)(param_1 + 0x58) + 0xa8),param_2,
               *(undefined8 *)(*plVar15 + 0x2a0));
  }
  lVar12 = *(long *)(param_2 + 0x88);
  if (((lVar12 != 0) || (*(long *)(param_2 + 0x90) != 0)) &&
     (plVar15 = *(long **)(lVar13 + 0x80), plVar15 != (long *)0x0)) {
    if ((int)plVar15[2] == 3) {
      uVar6 = (**(code **)(*plVar15 + 0x178))(plVar15,*(undefined8 *)(*plVar15 + 0x180));
      if ((uVar6 & 1) == 0) goto LAB_0616001c;
    }
    else {
      if ((int)plVar15[2] != 0) {
LAB_0616001c:
        thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
        uVar7 = thunk_FUN_032a56a0();
        uVar8 = thunk_FUN_032e1da0(System_Collections_Generic_List<IXRInteractable>_TypeInfo);
        FUN_061a17bc(uVar7,uVar8,param_2,0);
        uVar8 = thunk_FUN_032e1da0(System_Collections_Generic_List<IXRInteractionGroup>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar7,uVar8);
      }
      if (lVar12 == 0) {
        *(undefined4 *)(lVar13 + 0x24) = 3;
        *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(param_2 + 0x90);
        thunk_FUN_0333a630();
      }
      else {
        *(long *)(lVar13 + 0x38) = lVar12;
        *(undefined4 *)(lVar13 + 0x24) = 0;
        thunk_FUN_0333a630();
      }
      plVar15 = *(long **)(lVar13 + 0x30);
      if (plVar15 != (long *)0x0) {
        uVar7 = FUN_06172890(lVar13,0);
        uVar16 = *(undefined8 *)(param_1 + 0x10);
        uVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                    System_Collections_Generic_List<IXRHoverInteractable>_TypeInfo);
        FUN_06179f20(uVar8,param_2,0);
        uVar7 = (**(code **)(*plVar15 + 0x228))
                          (plVar15,uVar7,uVar16,uVar8,1,*(undefined8 *)(*plVar15 + 0x230));
        *(undefined8 *)(lVar13 + 0x40) = uVar7;
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
    uVar4 = FUN_058f278c(plVar15,0);
    plVar9 = (long *)FUN_032d5d3c(*(undefined8 *)
                                   System_Collections_Generic_List<IXRHandProcessor>_TypeInfo,uVar4)
    ;
    puVar2 = System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo;
    plVar17 = plVar9 + 4;
    for (uVar6 = 0; iVar5 = FUN_058f278c(plVar15,0), (int)uVar6 < iVar5; uVar6 = uVar6 + 1) {
      plVar10 = (long *)(**(code **)(*plVar15 + 0x308))
                                  (plVar15,uVar6 & 0xffffffff,*(undefined8 *)(*plVar15 + 0x310));
      if (plVar10 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar10);
        }
      }
      FUN_06161370(param_1,plVar10);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar12 = plVar10[0xe];
      if ((lVar12 != 0) &&
         (lVar11 = thunk_FUN_032a55a4(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
        uVar7 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar7,0);
      }
      if (*(uint *)(plVar9 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      *plVar17 = lVar12;
      thunk_FUN_0333a630(plVar17,lVar12);
      plVar17 = plVar17 + 1;
    }
    *(long *)(lVar13 + 0x98) = (long)plVar9;
    thunk_FUN_0333a630((long *)(lVar13 + 0x98),plVar9);
  }
  *(long *)(lVar13 + 0xa0) = param_2;
  thunk_FUN_0333a630((long *)(lVar13 + 0xa0),param_2);
  *plVar14 = lVar13;
  thunk_FUN_0333a630(plVar14,lVar13);
LAB_06160234:
  *(undefined1 *)(param_2 + 0x30) = 0;
  return;
}


