/*
FUNCTION_NAME: FUN_06159c8c
ENTRY_POINT: 06159c8c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0615b52c) */
/* WARNING: Removing unreachable block (ram,0x0615a43c) */
/* WARNING: Removing unreachable block (ram,0x0615a8c4) */
/* WARNING: Removing unreachable block (ram,0x0615a228) */
/* WARNING: Removing unreachable block (ram,0x0615b7dc) */
/* WARNING: Removing unreachable block (ram,0x0615aae0) */
/* WARNING: Removing unreachable block (ram,0x0615a6a8) */
/* WARNING: Removing unreachable block (ram,0x0615b9e4) */
/* WARNING: Removing unreachable block (ram,0x0615acf8) */
/* WARNING: Removing unreachable block (ram,0x0615acfc) */
/* WARNING: Removing unreachable block (ram,0x0615ba44) */
/* WARNING: Removing unreachable block (ram,0x0615ba64) */

void FUN_06159c8c(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  
  if ((DAT_076ddaa4 & 1) == 0) {
    thunk_FUN_032e1da0(System_Collections_Generic_List<ChallengeEntry>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(PTR_DAT_0727e5a0);
    thunk_FUN_032e1da0(PTR_DAT_0727a180);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionCancelEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionEndEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionRunEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<Color>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusOutEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<IEventBinding>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<IEventDispatchingStrategy>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<UnitPreservation>_TypeInfo);
    DAT_076ddaa4 = 1;
  }
  puVar9 = System_Collections_Generic_List<ChallengeEntry>_TypeInfo;
  puVar5 = System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo;
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar11 = FUN_0619a944(*(long *)(param_1 + 0x58),0);
    lVar15 = *(long *)puVar9;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar15);
      lVar15 = *(long *)puVar9;
    }
    uVar18 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x50);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (DAT_076dda9b == '\0') {
      thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
      DAT_076dda9b = '\x01';
    }
    lVar15 = *(long *)puVar5;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar15 = *(long *)puVar5;
    }
    if (lVar11 != 0) {
      FUN_061a2ed8(lVar11,uVar18,**(undefined8 **)(lVar15 + 0xb8),0);
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (plVar12 = (long *)FUN_061a342c(*(long *)(param_1 + 0x48),0), puVar6 = PTR_DAT_0727e5a0,
         plVar12 != (long *)0x0)) {
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0727e5a0) {
              puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_06159e80;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)PTR_DAT_0727e5a0,0);
LAB_06159e80:
        puVar3 = PTR_DAT_07279f60;
        plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
        puVar7 = System_Collections_Generic_List<IEventBinding>_TypeInfo;
        puVar4 = PTR_DAT_0727a180;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        do {
          lVar15 = *plVar12;
          lVar11 = *(long *)puVar4;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar11) {
                puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_06159ef8;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_06159ef8:
          uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          if ((uVar16 & 1) == 0) {
            plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
            if (plVar12 == (long *)0x0) goto LAB_0615a018;
            lVar11 = *plVar12;
            uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar16 == 0) goto LAB_06159ff0;
            piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            goto LAB_06159fd8;
          }
          lVar15 = *plVar12;
          lVar11 = *(long *)puVar4;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar11) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_06159f58;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_06159f58:
          plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
          if (plVar14 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
            if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
              FUN_032d618c(plVar14);
            }
          }
          FUN_0615d8a8(param_1,plVar14);
        } while( true );
      }
    }
  }
  goto LAB_0615ba60;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_06159fd8:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0615a00c;
    }
  }
LAB_06159ff0:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0615a00c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0615a018:
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar11 = *(long *)(*(long *)(param_1 + 0x58) + 0xa0), lVar11 != 0)) &&
     (plVar12 = (long *)FUN_061a342c(lVar11,0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0615a088;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0615a088:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar7 = System_Collections_Generic_List<Color>_TypeInfo;
    puVar4 = PTR_DAT_0727a180;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0615a0f8;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0615a0f8:
      uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) goto LAB_0615a21c;
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 == 0) goto LAB_0615a1f4;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0615a1dc;
      }
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0615a158;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0615a158:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar14);
        }
      }
      FUN_0615dd28(param_1,plVar14);
    } while( true );
  }
  goto LAB_0615ba60;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0615a1dc:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0615a210;
    }
  }
LAB_0615a1f4:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0615a210:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0615a21c:
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar11 = FUN_0619a8d4(*(long *)(param_1 + 0x58),0), lVar11 != 0)) &&
     (plVar12 = (long *)FUN_061a342c(lVar11,0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0615a29c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0615a29c:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar7 = System_Func<TransitionCancelEvent>_TypeInfo;
    puVar4 = PTR_DAT_0727a180;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0615a30c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0615a30c:
      uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) goto LAB_0615a430;
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 == 0) goto LAB_0615a408;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0615a3f0;
      }
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0615a36c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0615a36c:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar14);
        }
      }
      FUN_0615de10(param_1,plVar14);
    } while( true );
  }
  goto LAB_0615ba60;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0615a3f0:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0615a424;
    }
  }
LAB_0615a408:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0615a424:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0615a430:
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar11 = FUN_0619a944(*(long *)(param_1 + 0x58),0), lVar11 != 0)) &&
     (plVar12 = (long *)FUN_061a342c(lVar11,0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0615a4b0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0615a4b0:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar8 = System_Func<UnitPreservation>_TypeInfo;
    puVar7 = System_Func<FocusOutEvent>_TypeInfo;
    puVar4 = PTR_DAT_0727a180;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0615a528;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0615a528:
      uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) goto LAB_0615a69c;
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 == 0) goto LAB_0615a674;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0615a65c;
      }
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0615a588;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0615a588:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
LAB_0615a608:
        FUN_0615f26c(param_1,plVar14);
      }
      else {
        bVar1 = *(byte *)(*plVar14 + 0x130);
        bVar2 = *(byte *)(*(long *)puVar8 + 0x130);
        if ((bVar1 < bVar2) ||
           (lVar11 = *(long *)(*plVar14 + 200),
           *(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *(long *)puVar8)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar14);
        }
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((bVar1 < bVar2) || (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
          bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
          if ((bVar1 < bVar2) || (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar14);
          }
          goto LAB_0615a608;
        }
        FUN_0615e568(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_0615ba60;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0615a65c:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0615a690;
    }
  }
LAB_0615a674:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0615a690:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0615a69c:
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar11 = FUN_0619a9b4(*(long *)(param_1 + 0x58),0), lVar11 != 0)) &&
     (plVar12 = (long *)FUN_061a342c(lVar11,0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0615a71c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0615a71c:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar7 = System_Func<TransitionRunEvent>_TypeInfo;
    puVar4 = PTR_DAT_0727a180;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0615a78c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0615a78c:
      uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) goto LAB_0615a8b8;
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 == 0) goto LAB_0615a890;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0615a878;
      }
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0615a7ec;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0615a7ec:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar14);
      }
      if (plVar14[0x1c] == 0) {
        FUN_0615fbc8(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_0615ba60;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0615a878:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0615a8ac;
    }
  }
LAB_0615a890:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0615a8ac:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0615a8b8:
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar11 = FUN_0619a864(*(long *)(param_1 + 0x58),0), lVar11 != 0)) &&
     (plVar12 = (long *)FUN_061a342c(lVar11,0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0615a938;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0615a938:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar7 = System_Func<TransitionEndEvent>_TypeInfo;
    puVar4 = PTR_DAT_0727a180;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0615a9a8;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0615a9a8:
      uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) goto LAB_0615aad4;
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 == 0) goto LAB_0615aaac;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0615aa94;
      }
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0615aa08;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0615aa08:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar14);
      }
      if (plVar14[0x13] == 0) {
        FUN_061608cc(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_0615ba60;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0615aa94:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0615aac8;
    }
  }
LAB_0615aaac:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0615aac8:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0615aad4:
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar11 = *(long *)(*(long *)(param_1 + 0x58) + 0xb0), lVar11 != 0)) &&
     (plVar12 = (long *)FUN_061a342c(lVar11,0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0615ab50;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0615ab50:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar7 = System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo;
    puVar4 = PTR_DAT_0727a180;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0615abc0;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0615abc0:
      uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) goto LAB_0615b2e0;
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 == 0) goto LAB_0615acc4;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0615acac;
      }
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0615ac20;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0615ac20:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar14);
      }
      if (plVar14[0xe] == 0) {
        FUN_06161370(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_0615ba60;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0615acac:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0615ace0;
    }
  }
LAB_0615acc4:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0615ace0:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0615b2e0:
  do {
    plVar12 = *(long **)(param_1 + 0x50);
    if (plVar12 == (long *)0x0) goto LAB_0615ba60;
    iVar10 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
    if (iVar10 < 1) {
      if (((*(long *)(param_1 + 0x58) != 0) &&
          (lVar11 = FUN_0619a944(*(long *)(param_1 + 0x58),0), lVar11 != 0)) &&
         (plVar12 = (long *)FUN_061a342c(lVar11,0), plVar12 != (long *)0x0)) {
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 == 0) goto LAB_0615b350;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        break;
      }
      goto LAB_0615ba60;
    }
    plVar12 = *(long **)(param_1 + 0x50);
    if (plVar12 == (long *)0x0) goto LAB_0615ba60;
    plVar12 = (long *)(**(code **)(*plVar12 + 600))(plVar12,*(undefined8 *)(*plVar12 + 0x260));
    if (plVar12 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar12);
      }
    }
    FUN_06161a18(param_1,plVar12);
  } while( true );
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
    if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0615b36c;
    }
  }
LAB_0615b350:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0615b36c:
  plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
  puVar7 = System_Func<UnitPreservation>_TypeInfo;
  puVar4 = PTR_DAT_0727a180;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  do {
    lVar15 = *plVar12;
    lVar11 = *(long *)puVar4;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0615b3dc;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0615b3dc:
    uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    if ((uVar16 & 1) == 0) {
      plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
      if (plVar12 == (long *)0x0) goto LAB_0615b520;
      lVar11 = *plVar12;
      uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar16 == 0) goto LAB_0615b4f8;
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar15 = *plVar12;
    lVar11 = *(long *)puVar4;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_0615b43c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0615b43c:
    plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    if (plVar14 != (long *)0x0) {
      bVar1 = *(byte *)(*plVar14 + 0x130);
      bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
      if ((bVar1 < bVar2) ||
         (lVar11 = *(long *)(*plVar14 + 200),
         *(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar14);
      }
      bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((bVar2 <= bVar1) && (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) == *(long *)puVar5)) {
        FUN_06161aec(param_1,plVar14);
      }
    }
  } while( true );
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0615b514;
    }
  }
LAB_0615b4f8:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0615b514:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0615b520:
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar11 = FUN_0619a9b4(*(long *)(param_1 + 0x58),0), lVar11 != 0)) &&
     (plVar12 = (long *)FUN_061a342c(lVar11,0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0615b5a0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0615b5a0:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar8 = System_Func<TransitionRunEvent>_TypeInfo;
    puVar7 = System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo;
    puVar4 = PTR_DAT_0727a180;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0615b618;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0615b618:
      uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) goto LAB_0615b7d0;
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 == 0) goto LAB_0615b7a8;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0615b790;
      }
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0615b678;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0615b678:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      bVar1 = *(byte *)(*(long *)puVar8 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar8)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar14);
      }
      if ((long *)plVar14[0x19] != (long *)0x0) {
        lVar11 = *(long *)plVar14[0x19];
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((bVar1 <= *(byte *)(lVar11 + 0x130)) &&
           (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)) {
          lVar11 = *(long *)puVar7;
          lVar15 = plVar14[0x16];
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar11 = *(long *)puVar7;
          }
          uVar16 = FUN_0624bd10(lVar15,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
          if ((uVar16 & 1) != 0) {
            plVar14 = (long *)plVar14[0x19];
            if (plVar14 != (long *)0x0) {
              lVar11 = *(long *)puVar5;
              if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8)
                  != lVar11)) {
                    /* WARNING: Subroutine does not return */
                FUN_032d618c(plVar14,lVar11);
              }
            }
            FUN_06161aec(param_1);
          }
        }
      }
    } while( true );
  }
  goto LAB_0615ba60;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0615b790:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0615b7c4;
    }
  }
LAB_0615b7a8:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0615b7c4:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0615b7d0:
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (plVar12 = (long *)FUN_061a342c(*(long *)(param_1 + 0x48),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0615b844;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0615b844:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar6 = System_Collections_Generic_List<IEventDispatchingStrategy>_TypeInfo;
    puVar5 = PTR_DAT_0727a180;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar5;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0615b8b4;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0615b8b4:
      uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) goto LAB_0615b9d8;
        lVar11 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 == 0) goto LAB_0615b9b0;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0615b998;
      }
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar5;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0615b914;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0615b914:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar14);
        }
      }
      FUN_06161c18(param_1,plVar14);
    } while( true );
  }
  goto LAB_0615ba60;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0615b998:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0615b9cc;
    }
  }
LAB_0615b9b0:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0615b9cc:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0615b9d8:
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar11 = FUN_0619a944(*(long *)(param_1 + 0x58),0);
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar9);
    }
    if (lVar11 != 0) {
      FUN_061a323c(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x50),0);
      return;
    }
  }
LAB_0615ba60:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


