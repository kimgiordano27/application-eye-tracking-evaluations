/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetActiveController
ENTRY_POINT: 03398da4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_9_0__ovrp_GetActiveController
          (long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x27;
  long *plVar15;
  long *in_stack_00000080;
  undefined8 *in_stack_00000088;
  
  if ((*(byte *)(unaff_x27 + 0x6b6) & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<Face>_Add__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<Face>_Contains__);
    FUN_01c5d288(PTR_DAT_042307f8);
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                );
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<Spawnable>_MoveNext__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<StoreItem>_Dispose__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_Remove__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<Face>_GetEnumerator__);
    FUN_01c5d288(Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_get_Item__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_SetEquals__);
    *(undefined1 *)(unaff_x27 + 0x6b6) = 1;
  }
  *in_stack_00000088 = 0;
  *in_stack_00000080 = 0;
  if (param_2 == (long *)0x0) goto LAB_03399394;
  iVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (iVar4 == 1) {
    plVar15 = (long *)param_2[0x12];
    if (plVar15 == (long *)0x0) goto LAB_03399394;
    bVar1 = *(byte *)(*(long *)Method_System_Collections_Generic_HashSet<Face>_Contains__ + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Collections_Generic_HashSet<Face>_Contains__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar15);
    }
    lVar5 = FUN_033af3dc(plVar15,*(undefined8 *)
                                  Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_SetEquals__
                         ,4,0);
    if (lVar5 == 0) {
LAB_03398fd4:
      lVar5 = FUN_033b087c(plVar15,*(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<StoreItem>_Dispose__
                           ,0);
      if (lVar5 != 0) {
        if (*(int *)(*(long *)PTR_DAT_042307f8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_033b8664(lVar5,0);
        lVar5 = FUN_033b9c48(lVar5,0);
        if (lVar5 == 0) goto LAB_03399394;
        FUN_0335cd70(lVar5,0);
        FUN_0339ad34(param_1,lVar5,param_3,param_4,param_5,param_6,param_7,uVar9);
        puVar3 = Method_System_Collections_Generic_List_Enumerator<Spawnable>_MoveNext__;
        lVar5 = FUN_033b087c(plVar15,*(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<Spawnable>_MoveNext__
                             ,0);
        puVar2 = PTR_DAT_0422fc38;
        if (lVar5 != 0) {
          do {
            FUN_0335cd70(param_2,0);
            iVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
            if (iVar4 == 4) {
              plVar15 = (long *)(**(code **)(*param_2 + 0x198))
                                          (param_2,*(undefined8 *)(*param_2 + 0x1a0));
              if ((plVar15 != (long *)0x0) && (*plVar15 != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748();
              }
              uVar13 = thunk_FUN_03152714(plVar15,*(undefined8 *)puVar3,0);
              if ((uVar13 & 1) != 0) goto LAB_033991ac;
            }
            FUN_0335cd70(param_2,0);
            FUN_0335c934(param_2,0);
          } while( true );
        }
      }
      lVar5 = FUN_033b087c(plVar15,*(undefined8 *)
                                    Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_get_Item__
                           ,0);
      if (lVar5 != 0) {
        if (*(int *)(*(long *)PTR_DAT_042307f8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_033b8664(lVar5,0);
        *in_stack_00000088 = uVar9;
      }
      lVar5 = FUN_033b087c(plVar15,*(undefined8 *)
                                    Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_Remove__
                           ,0);
      if (lVar5 == 0) goto LAB_033991a0;
      lVar5 = FUN_033b9c48(lVar5,0);
      if (lVar5 == 0) {
LAB_03399394:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_0335cd70(lVar5,0);
      lVar5 = FUN_03397f9c(param_1,lVar5,*param_3,*param_4,param_5,param_8,*in_stack_00000088);
      *in_stack_00000080 = lVar5;
    }
    else {
      plVar6 = (long *)FUN_033af0e0(lVar5,0);
      if (plVar6 == (long *)0x0) goto LAB_03399394;
      iVar4 = (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
      if ((iVar4 != 8) &&
         (iVar4 = (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200)),
         iVar4 != 10)) {
        FUN_019b2708(plVar6);
        uVar9 = FUN_033b4194(plVar6,0);
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar10 = FUN_03295500(0);
        uVar11 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Face>_UnionWith__);
        uVar12 = thunk_FUN_01c273e8(
                                   Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_SetEquals__
                                   );
        uVar10 = FUN_0336f2b8(uVar11,uVar10,uVar12,0);
LAB_03399480:
        uVar9 = FUN_0335d438(plVar6,uVar9,uVar10,0,0);
        uVar10 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Face>_get_Count__);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar9,uVar10);
      }
      if (*(int *)(*(long *)PTR_DAT_042307f8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar7 = FUN_033b8664(lVar5,0);
      if (lVar7 == 0) goto LAB_03398fd4;
      plVar6 = *(long **)(lVar5 + 0x20);
      if ((plVar6 != (long *)0x0) || (plVar6 = *(long **)(lVar5 + 0x18), plVar6 != (long *)0x0)) {
        FUN_019b2708(plVar6);
        uVar9 = FUN_033b4194(plVar6,0);
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar10 = FUN_03295500(0);
        uVar11 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Face>_Remove__);
        uVar12 = thunk_FUN_01c273e8(
                                   Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_SetEquals__
                                   );
        uVar10 = FUN_0336f2b8(uVar11,uVar10,uVar12,0);
        goto LAB_03399480;
      }
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (plVar15 = (long *)FUN_0335fda8(*(long *)(param_1 + 0x20),0), plVar15 == (long *)0x0))
      goto LAB_03399394;
      lVar5 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<Face>_Add__) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_033991c0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01c72498(plVar15,*(long *)Method_System_Collections_Generic_HashSet<Face>_Add__,0
                           );
LAB_033991c0:
      lVar5 = (*(code *)*puVar8)(plVar15,param_1,lVar7,puVar8[1]);
      *in_stack_00000080 = lVar5;
      puVar2 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
      plVar15 = *(long **)(param_1 + 0x28);
      if (plVar15 != (long *)0x0) {
        lVar5 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
               ) {
              puVar8 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03399234;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01c72498(plVar15,*(long *)
                                       Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                              ,0);
LAB_03399234:
        iVar4 = (*(code *)*puVar8)(plVar15,puVar8[1]);
        if (2 < iVar4) {
          plVar15 = *(long **)(param_1 + 0x28);
          uVar9 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
          if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
          }
          uVar10 = FUN_03295500(0);
          if (*in_stack_00000080 == 0) goto LAB_03399394;
          uVar11 = thunk_FUN_01c5d21c(*in_stack_00000080,0);
          uVar10 = FUN_033704d4(*(undefined8 *)
                                 Method_System_Collections_Generic_HashSet<Face>_GetEnumerator__,
                                uVar10,lVar7,uVar11,0);
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)
                                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                              );
          }
          uVar9 = FUN_03358c64(param_2,uVar9,uVar10,0);
          if (plVar15 == (long *)0x0) goto LAB_03399394;
          lVar5 = *plVar15;
          uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar8 = (undefined8 *)(lVar5 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_0339934c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_01c72498(plVar15,*(long *)puVar2,1);
LAB_0339934c:
          (*(code *)*puVar8)(plVar15,3,uVar9,0,puVar8[1]);
        }
      }
    }
    FUN_0335c934(param_2,0);
    uVar9 = 1;
  }
  else {
LAB_033991a0:
    FUN_0335cd70(param_2,0);
LAB_033991ac:
    uVar9 = 0;
  }
  return uVar9;
}


