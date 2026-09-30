/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetMixedRealityInitialized
ENTRY_POINT: 03399518
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_15_0__ovrp_GetMixedRealityInitialized(void)

{
  short sVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x27;
  
  FUN_01c5d288();
  FUN_01c5d288(Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__);
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
              );
  FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<StoreItem>_Dispose__);
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_Remove__);
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<Face>_GetEnumerator__);
  FUN_01c5d288(Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_get_Item__);
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_SetEquals__);
  *(undefined1 *)(unaff_x20 + 0x6b7) = 1;
  *unaff_x21 = 0;
  *unaff_x22 = 0;
  if (unaff_x19 == (long *)0x0) {
LAB_03399a80:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  iVar2 = (**(code **)(*unaff_x19 + 0x188))();
  if (iVar2 == 4) {
    plVar3 = (long *)(**(code **)(*unaff_x19 + 0x198))();
    if ((plVar3 == (long *)0x0) ||
       (lVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170)), lVar4 == 0)
       ) goto LAB_03399a80;
    if (0 < *(int *)(lVar4 + 0x10)) {
      sVar1 = FUN_0314e438(lVar4,0,0);
      puVar10 = Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_SetEquals__;
      if (sVar1 != 0x24) {
        return 0;
      }
      do {
        plVar3 = (long *)(**(code **)(*unaff_x19 + 0x198))();
        if (plVar3 == (long *)0x0) goto LAB_03399a80;
        uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        uVar6 = FUN_03152760(uVar5,*(undefined8 *)puVar10,4,0);
        if ((uVar6 & 1) == 0) {
          uVar6 = FUN_03152760(uVar5,*(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<StoreItem>_Dispose__
                               ,4,0);
          if ((uVar6 & 1) == 0) {
            uVar6 = FUN_03152760(uVar5,*(undefined8 *)
                                        Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_get_Item__
                                 ,4,0);
            if ((uVar6 & 1) == 0) {
              uVar6 = FUN_03152760(uVar5,*(undefined8 *)
                                          Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_Remove__
                                   ,4,0);
              if ((uVar6 & 1) == 0) {
                return 0;
              }
              FUN_0335cd70();
              lVar4 = FUN_03397f9c(unaff_x27);
              FUN_0335cd70();
              *unaff_x22 = lVar4;
              return 1;
            }
            FUN_0335cd70();
            plVar3 = (long *)(**(code **)(*unaff_x19 + 0x198))();
            uVar5 = 0;
            if (plVar3 != (long *)0x0) {
              if (plVar3 == (long *)0x0) goto LAB_03399a80;
              uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
            }
            *unaff_x21 = uVar5;
          }
          else {
            FUN_0335cd70();
            plVar3 = (long *)(**(code **)(*unaff_x19 + 0x198))();
            if (plVar3 == (long *)0x0) goto LAB_03399a80;
            (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
            FUN_0339ad34(unaff_x27);
          }
LAB_03399790:
          FUN_0335cd70();
        }
        else {
          FUN_0335cd70();
          iVar2 = (**(code **)(*unaff_x19 + 0x188))();
          if ((iVar2 != 9) && (iVar2 = (**(code **)(*unaff_x19 + 0x188))(), iVar2 != 0xb)) {
            thunk_FUN_01c273e8(PTR_DAT_042305b0);
            FUN_019b5f60();
            uVar5 = FUN_03295500(0);
            puVar10 = Method_System_Collections_Generic_HashSet<Face>_UnionWith__;
LAB_03399aa8:
            uVar8 = thunk_FUN_01c273e8(puVar10);
            uVar9 = thunk_FUN_01c273e8(
                                      Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_SetEquals__
                                      );
            FUN_0336f2b8(uVar8,uVar5,uVar9,0);
            uVar5 = FUN_0335cdc4();
            uVar8 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<GameObject>__ctor__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar5,uVar8);
          }
          plVar3 = (long *)(**(code **)(*unaff_x19 + 0x198))();
          if (plVar3 == (long *)0x0) goto LAB_03399790;
          if (plVar3 == (long *)0x0) goto LAB_03399a80;
          lVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          FUN_0335cd70();
          if (lVar4 != 0) {
            iVar2 = (**(code **)(*unaff_x19 + 0x188))();
            if (iVar2 == 4) {
              thunk_FUN_01c273e8(PTR_DAT_042305b0);
              FUN_019b5f60();
              uVar5 = FUN_03295500(0);
              puVar10 = Method_System_Collections_Generic_HashSet<Face>_Remove__;
              goto LAB_03399aa8;
            }
            if ((*(long *)(unaff_x27 + 0x20) == 0) ||
               (plVar3 = (long *)FUN_0335fda8(*(long *)(unaff_x27 + 0x20),0), plVar3 == (long *)0x0)
               ) goto LAB_03399a80;
            lVar11 = *plVar3;
            uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar6 == 0) goto LAB_03399844;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            goto LAB_0339982c;
          }
        }
        iVar2 = (**(code **)(*unaff_x19 + 0x188))();
      } while (iVar2 == 4);
    }
  }
  return 0;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar12 = piVar12 + 4;
    if (uVar6 == 0) break;
LAB_0339982c:
    if (*(long *)(piVar12 + -2) == *(long *)Method_System_Collections_Generic_HashSet<Face>_Add__) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_033998c4;
    }
  }
LAB_03399844:
  puVar7 = (undefined8 *)
           FUN_01c72498(plVar3,*(long *)Method_System_Collections_Generic_HashSet<Face>_Add__,0);
LAB_033998c4:
  lVar11 = (*(code *)*puVar7)(plVar3,unaff_x27,lVar4,puVar7[1]);
  *unaff_x22 = lVar11;
  puVar10 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  plVar3 = *(long **)(unaff_x27 + 0x28);
  if (plVar3 != (long *)0x0) {
    lVar11 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03399938;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01c72498(plVar3,*(long *)
                                  Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                          ,0);
LAB_03399938:
    iVar2 = (*(code *)*puVar7)(plVar3,puVar7[1]);
    if (2 < iVar2) {
      plVar3 = *(long **)(unaff_x27 + 0x28);
      uVar5 = (**(code **)(*unaff_x19 + 0x1c8))();
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
      }
      uVar8 = FUN_03295500(0);
      if (*unaff_x22 != 0) {
        uVar9 = thunk_FUN_01c5d21c(*unaff_x22,0);
        uVar8 = FUN_033704d4(*(undefined8 *)
                              Method_System_Collections_Generic_HashSet<Face>_GetEnumerator__,uVar8,
                             lVar4,uVar9,0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                            );
        }
        uVar9 = thunk_FUN_01c495e4();
        uVar5 = FUN_03358c64(uVar9,uVar5,uVar8,0);
        if (plVar3 != (long *)0x0) {
          lVar4 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar10) {
                puVar7 = (undefined8 *)(lVar4 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_03399a60;
              }
              uVar6 = uVar6 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_01c72498(plVar3,*(long *)puVar10,1);
LAB_03399a60:
          (*(code *)*puVar7)(plVar3,3,uVar5,0,puVar7[1]);
          return 1;
        }
      }
      goto LAB_03399a80;
    }
  }
  return 1;
}


