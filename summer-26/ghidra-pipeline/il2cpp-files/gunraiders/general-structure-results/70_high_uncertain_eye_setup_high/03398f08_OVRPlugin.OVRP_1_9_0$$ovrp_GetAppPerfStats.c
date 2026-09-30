/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetAppPerfStats
ENTRY_POINT: 03398f08
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_9_0__ovrp_GetAppPerfStats(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x29;
  
  iVar3 = (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  if ((iVar3 != 8) &&
     (iVar3 = (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200)),
     iVar3 != 10)) {
    FUN_019b2708(param_1);
    uVar7 = FUN_033b4194(param_1,0);
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar8 = FUN_03295500(0);
    uVar9 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Face>_UnionWith__);
    uVar10 = thunk_FUN_01c273e8(
                               Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_SetEquals__
                               );
    uVar8 = FUN_0336f2b8(uVar9,uVar8,uVar10,0);
LAB_03399480:
    uVar7 = FUN_0335d438(param_1,uVar7,uVar8,0,0);
    uVar8 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Face>_get_Count__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar7,uVar8);
  }
  if (*(int *)(*(long *)PTR_DAT_042307f8 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar4 = FUN_033b8664();
  if (lVar4 == 0) {
    lVar4 = FUN_033b087c();
    if (lVar4 != 0) {
      if (*(int *)(*(long *)PTR_DAT_042307f8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_033b8664(lVar4,0);
      lVar4 = FUN_033b9c48(lVar4,0);
      if (lVar4 == 0) goto LAB_03399394;
      FUN_0335cd70(lVar4,0);
      FUN_0339ad34();
      puVar2 = Method_System_Collections_Generic_List_Enumerator<Spawnable>_MoveNext__;
      lVar4 = FUN_033b087c();
      puVar1 = PTR_DAT_0422fc38;
      if (lVar4 != 0) {
        do {
          FUN_0335cd70();
          iVar3 = (**(code **)(*unaff_x19 + 0x188))();
          if (iVar3 == 4) {
            plVar5 = (long *)(**(code **)(*unaff_x19 + 0x198))();
            if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748();
            }
            uVar12 = thunk_FUN_03152714(plVar5,*(undefined8 *)puVar2,0);
            if ((uVar12 & 1) != 0) {
              return 0;
            }
          }
          FUN_0335cd70();
          FUN_0335c934();
        } while( true );
      }
    }
    lVar4 = FUN_033b087c();
    if (lVar4 != 0) {
      if (*(int *)(*(long *)PTR_DAT_042307f8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_033b8664(lVar4,0);
      *unaff_x21 = uVar7;
    }
    lVar4 = FUN_033b087c();
    if (lVar4 == 0) {
      FUN_0335cd70();
      return 0;
    }
    lVar4 = FUN_033b9c48(lVar4,0);
    if (lVar4 != 0) {
      FUN_0335cd70(lVar4,0);
      lVar4 = FUN_03397f9c();
      *unaff_x22 = lVar4;
      goto LAB_03399364;
    }
  }
  else {
    param_1 = *(long **)(unaff_x29 + 0x20);
    if ((param_1 != (long *)0x0) || (param_1 = *(long **)(unaff_x29 + 0x18), param_1 != (long *)0x0)
       ) {
      FUN_019b2708(param_1);
      uVar7 = FUN_033b4194(param_1,0);
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar8 = FUN_03295500(0);
      uVar9 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Face>_Remove__);
      uVar10 = thunk_FUN_01c273e8(
                                 Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_SetEquals__
                                 );
      uVar8 = FUN_0336f2b8(uVar9,uVar8,uVar10,0);
      goto LAB_03399480;
    }
    if ((*(long *)(unaff_x20 + 0x20) != 0) &&
       (plVar5 = (long *)FUN_0335fda8(*(long *)(unaff_x20 + 0x20),0), plVar5 != (long *)0x0)) {
      lVar11 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<Face>_Add__) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_033991c0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01c72498(plVar5,*(long *)Method_System_Collections_Generic_HashSet<Face>_Add__,0)
      ;
LAB_033991c0:
      lVar11 = (*(code *)*puVar6)(plVar5);
      *unaff_x22 = lVar11;
      puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
      plVar5 = *(long **)(unaff_x20 + 0x28);
      if (plVar5 != (long *)0x0) {
        lVar11 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
               ) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03399234;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01c72498(plVar5,*(long *)
                                      Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                              ,0);
LAB_03399234:
        iVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if (2 < iVar3) {
          plVar5 = *(long **)(unaff_x20 + 0x28);
          (**(code **)(*unaff_x19 + 0x1c8))();
          if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
          }
          uVar7 = FUN_03295500(0);
          if (*unaff_x22 != 0) {
            uVar8 = thunk_FUN_01c5d21c(*unaff_x22,0);
            FUN_033704d4(*(undefined8 *)
                          Method_System_Collections_Generic_HashSet<Face>_GetEnumerator__,uVar7,
                         lVar4,uVar8,0);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)
                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                                );
            }
            uVar7 = FUN_03358c64();
            if (plVar5 != (long *)0x0) {
              lVar4 = *plVar5;
              uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar6 = (undefined8 *)(lVar4 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_0339934c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar6 = (undefined8 *)FUN_01c72498(plVar5,*(long *)puVar1,1);
LAB_0339934c:
              (*(code *)*puVar6)(plVar5,3,uVar7,0,puVar6[1]);
              goto LAB_03399364;
            }
          }
          goto LAB_03399394;
        }
      }
LAB_03399364:
      FUN_0335c934();
      return 1;
    }
  }
LAB_03399394:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


