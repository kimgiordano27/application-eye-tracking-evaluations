/*
FUNCTION_NAME: FUN_0617a7b4
ENTRY_POINT: 0617a7b4
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


/* WARNING: Removing unreachable block (ram,0x0617c028) */
/* WARNING: Removing unreachable block (ram,0x0617b018) */
/* WARNING: Removing unreachable block (ram,0x0617b438) */
/* WARNING: Removing unreachable block (ram,0x0617abc0) */
/* WARNING: Removing unreachable block (ram,0x0617c238) */
/* WARNING: Removing unreachable block (ram,0x0617b648) */
/* WARNING: Removing unreachable block (ram,0x0617b64c) */
/* WARNING: Removing unreachable block (ram,0x0617b228) */
/* WARNING: Removing unreachable block (ram,0x0617bdb4) */
/* WARNING: Removing unreachable block (ram,0x0617c448) */
/* WARNING: Removing unreachable block (ram,0x0617c49c) */

uint FUN_0617a7b4(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  
  puVar6 = System_Collections_Generic_List<ChallengeEntry>_TypeInfo;
                    /* catch() { ... } // from try @ 0617a524 with catch @ 0617a7d0
                       try { // try from 0617a7d0 to 0627a7e7 has its CatchHandler @ 061795a4 */
  if ((DAT_076ddb21 & 1) == 0) {
                    /* try { // try from 0617a7e8 to 0627a7eb has its CatchHandler @ 0617a7fc */
    thunk_FUN_032e1da0(System_Collections_Generic_List<ChallengeEntry>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
                    /* catch() { ... } // from try @ 0617a7e8 with catch @ 0617a7fc */
    thunk_FUN_032e1da0(PTR_DAT_0727e5a0);
                    /* try { // try from 0617a80c to 0627a873 has its CatchHandler @ 0617a888 */
    thunk_FUN_032e1da0(PTR_DAT_0727a180);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionCancelEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionEndEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionRunEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<Color>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusOutEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<UnitPreservation>_TypeInfo);
    DAT_076ddb21 = 1;
  }
  puVar5 = System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo;
  lVar11 = *(long *)puVar6;
  lVar17 = *(long *)(param_1 + 0x60);
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar11 = *(long *)puVar6;
  }
  uVar19 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x50);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar5);
  }
  if (DAT_076dda9b == '\0') {
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
    DAT_076dda9b = '\x01';
  }
  lVar11 = *(long *)puVar5;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar11 = *(long *)puVar5;
  }
  if (lVar17 != 0) {
    FUN_061a2ed8(lVar17,uVar19,**(undefined8 **)(lVar11 + 0xb8),0);
    if (*(long *)(param_1 + 0xa0) != 0) {
      lVar11 = FUN_0619a944(*(long *)(param_1 + 0xa0),0);
      lVar17 = *(long *)puVar6;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar17);
        lVar17 = *(long *)puVar6;
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x50);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (DAT_076dda9b == '\0') {
        thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
        DAT_076dda9b = '\x01';
      }
      lVar17 = *(long *)puVar5;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar17 = *(long *)puVar5;
      }
      if (lVar11 == 0) goto LAB_0617c47c;
      FUN_061a3098(lVar11,uVar19,**(undefined8 **)(lVar17 + 0xb8),0);
      FUN_0617f710(param_1);
    }
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (plVar12 = (long *)FUN_061a342c(*(long *)(param_1 + 0x68),0), puVar6 = PTR_DAT_0727e5a0,
       plVar12 != (long *)0x0)) {
      lVar11 = *plVar12;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0727e5a0) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0617aa18;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)PTR_DAT_0727e5a0,0);
LAB_0617aa18:
      puVar3 = PTR_DAT_07279f60;
      plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      puVar7 = System_Collections_Generic_List<Color>_TypeInfo;
      puVar4 = PTR_DAT_0727a180;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      do {
        lVar17 = *plVar12;
        lVar11 = *(long *)puVar4;
        uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar11) {
              puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0617aa90;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0617aa90:
        uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar15 & 1) == 0) {
          plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
          if (plVar12 == (long *)0x0) goto LAB_0617abb4;
          lVar11 = *plVar12;
          uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar15 == 0) goto LAB_0617ab8c;
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0617ab74;
        }
        lVar17 = *plVar12;
        lVar11 = *(long *)puVar4;
        uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar11) {
              puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_0617aaf0;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0617aaf0:
        plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
        if (plVar14 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar14);
          }
        }
        FUN_0617f968(param_1,plVar14);
      } while( true );
    }
  }
  goto LAB_0617c47c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_0617ab74:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0617aba8;
    }
  }
LAB_0617ab8c:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0617aba8:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0617abb4:
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (plVar12 = (long *)FUN_061a342c(*(long *)(param_1 + 0x50),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0617ac28;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0617ac28:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar7 = System_Func<TransitionCancelEvent>_TypeInfo;
    puVar4 = PTR_DAT_0727a180;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0617ac98;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0617ac98:
      uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar15 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) goto LAB_0617adb8;
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 == 0) goto LAB_0617ad90;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0617ad78;
      }
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_0617acf8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0617acf8:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar14);
        }
      }
      FUN_0617fa4c(param_1,plVar14);
    } while( true );
  }
  goto LAB_0617c47c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_0617ad78:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0617adac;
    }
  }
LAB_0617ad90:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0617adac:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0617adb8:
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (plVar12 = (long *)FUN_061a342c(*(long *)(param_1 + 0x60),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0617ae20;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0617ae20:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar8 = System_Func<UnitPreservation>_TypeInfo;
    puVar7 = System_Func<FocusOutEvent>_TypeInfo;
    puVar4 = PTR_DAT_0727a180;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0617ae98;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0617ae98:
      uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar15 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) goto LAB_0617b00c;
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 == 0) goto LAB_0617afe4;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0617afcc;
      }
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_0617aef8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0617aef8:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
LAB_0617af78:
        FUN_06180dbc(param_1,plVar14);
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
          goto LAB_0617af78;
        }
        FUN_061802dc(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_0617c47c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_0617afcc:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0617b000;
    }
  }
LAB_0617afe4:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0617b000:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0617b00c:
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (plVar12 = (long *)FUN_061a342c(*(long *)(param_1 + 0x58),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0617b080;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0617b080:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar7 = System_Func<TransitionRunEvent>_TypeInfo;
    puVar4 = PTR_DAT_0727a180;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0617b0f0;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0617b0f0:
      uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar15 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) goto LAB_0617b21c;
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 == 0) goto LAB_0617b1f4;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0617b1dc;
      }
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_0617b150;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0617b150:
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
        FUN_06181750(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_0617c47c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_0617b1dc:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0617b210;
    }
  }
LAB_0617b1f4:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0617b210:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0617b21c:
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (plVar12 = (long *)FUN_061a342c(*(long *)(param_1 + 0x48),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0617b290;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0617b290:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar7 = System_Func<TransitionEndEvent>_TypeInfo;
    puVar4 = PTR_DAT_0727a180;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0617b300;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0617b300:
      uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar15 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) goto LAB_0617b42c;
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 == 0) goto LAB_0617b404;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0617b3ec;
      }
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_0617b360;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0617b360:
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
        FUN_061825b0(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_0617c47c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_0617b3ec:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0617b420;
    }
  }
LAB_0617b404:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0617b420:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0617b42c:
  if ((*(long *)(param_1 + 0x80) != 0) &&
     (plVar12 = (long *)FUN_061a342c(*(long *)(param_1 + 0x80),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0617b4a0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0617b4a0:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar7 = System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo;
    puVar4 = PTR_DAT_0727a180;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0617b510;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0617b510:
      uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar15 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) goto LAB_0617bb6c;
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 == 0) goto LAB_0617b614;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0617b5fc;
      }
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_0617b570;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0617b570:
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
        FUN_06182e3c(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_0617c47c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_0617b5fc:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0617b630;
    }
  }
LAB_0617b614:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0617b630:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0617bb6c:
  do {
    plVar12 = *(long **)(param_1 + 0x88);
    if (plVar12 == (long *)0x0) goto LAB_0617c47c;
    iVar9 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
    if (iVar9 < 1) {
      FUN_061835fc(param_1);
      if ((*(long *)(param_1 + 0x60) != 0) &&
         (plVar12 = (long *)FUN_061a342c(*(long *)(param_1 + 0x60),0), plVar12 != (long *)0x0)) {
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 == 0) goto LAB_0617bbd8;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        break;
      }
      goto LAB_0617c47c;
    }
    plVar12 = *(long **)(param_1 + 0x88);
    if (plVar12 == (long *)0x0) goto LAB_0617c47c;
    plVar12 = (long *)(**(code **)(*plVar12 + 600))(plVar12,*(undefined8 *)(*plVar12 + 0x260));
    if (plVar12 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar12);
      }
    }
    FUN_061834e0(param_1,plVar12);
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0617bbf4;
    }
  }
LAB_0617bbd8:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0617bbf4:
  plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
  puVar7 = System_Func<UnitPreservation>_TypeInfo;
  puVar4 = PTR_DAT_0727a180;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  do {
    lVar17 = *plVar12;
    lVar11 = *(long *)puVar4;
    uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0617bc64;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0617bc64:
    uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    if ((uVar15 & 1) == 0) {
      plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
      if (plVar12 == (long *)0x0) goto LAB_0617bda8;
      lVar11 = *plVar12;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 == 0) goto LAB_0617bd80;
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar17 = *plVar12;
    lVar11 = *(long *)puVar4;
    uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0617bcc4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0617bcc4:
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
        FUN_06183e78(param_1,plVar14);
      }
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0617bd9c;
    }
  }
LAB_0617bd80:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0617bd9c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0617bda8:
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (plVar12 = (long *)FUN_061a342c(*(long *)(param_1 + 0x58),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0617be1c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0617be1c:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar8 = System_Func<TransitionRunEvent>_TypeInfo;
    puVar7 = System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo;
    puVar4 = PTR_DAT_0727a180;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0617be94;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0617be94:
      uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar15 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) goto LAB_0617c01c;
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 == 0) goto LAB_0617bff4;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0617bfdc;
      }
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_0617bef4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0617bef4:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      bVar1 = *(byte *)(*(long *)puVar8 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar8)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c();
      }
      plVar18 = (long *)plVar14[0x19];
      if (plVar18 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar18 + 0x130)) &&
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)) {
          lVar11 = *(long *)puVar7;
          lVar17 = plVar14[0x16];
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(lVar11);
            lVar11 = *(long *)puVar7;
          }
          uVar15 = FUN_0624bd10(lVar17,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
          if ((uVar15 & 1) != 0) {
            FUN_06183e78(param_1,plVar18);
          }
        }
      }
    } while( true );
  }
  goto LAB_0617c47c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_0617bfdc:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0617c010;
    }
  }
LAB_0617bff4:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0617c010:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0617c01c:
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (plVar12 = (long *)FUN_061a342c(*(long *)(param_1 + 0x68),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0617c090;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0617c090:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar4 = System_Collections_Generic_List<Color>_TypeInfo;
    puVar5 = PTR_DAT_0727a180;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar5;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0617c100;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0617c100:
      uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar15 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) goto LAB_0617c22c;
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 == 0) goto LAB_0617c204;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0617c1ec;
      }
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar5;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_0617c160;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0617c160:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar14);
      }
      if (plVar14[0xe] != 0) {
        FUN_0618447c(param_1,plVar14);
      }
    } while( true );
  }
  goto LAB_0617c47c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_0617c3fc:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0617c430;
    }
  }
LAB_0617c414:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0617c430:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0617c43c:
  uVar10 = FUN_06280740(param_1,0);
  return (uVar10 ^ 1) & 1;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_0617c1ec:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0617c220;
    }
  }
LAB_0617c204:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar3,0);
LAB_0617c220:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0617c22c:
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (plVar12 = (long *)FUN_061a342c(*(long *)(param_1 + 0x50),0), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0617c2a0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0617c2a0:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar5 = System_Func<TransitionCancelEvent>_TypeInfo;
    puVar6 = PTR_DAT_0727a180;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0617c310;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,0);
LAB_0617c310:
      uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar15 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_032a55a4(plVar12,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) goto LAB_0617c43c;
        lVar11 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 == 0) goto LAB_0617c414;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0617c3fc;
      }
      lVar17 = *plVar12;
      lVar11 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_0617c370;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_032937ac(plVar12,lVar11,1);
LAB_0617c370:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar14);
      }
      if (plVar14[0xe] != 0) {
        FUN_06184558(param_1,plVar14);
      }
    } while( true );
  }
LAB_0617c47c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


