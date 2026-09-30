/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraIntrinsics
ENTRY_POINT: 03399774
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraIntrinsics(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  int *piVar11;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x27;
  long *in_stack_00000018;
  long in_stack_00000020;
  
code_r0x03399774:
  uVar5 = 0;
  if (param_1 != (long *)0x0) {
    if (unaff_x27 == (long *)0x0) goto LAB_03399a80;
    uVar5 = (**(code **)(*unaff_x27 + 0x168))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x170));
  }
  *unaff_x21 = uVar5;
LAB_03399790:
  do {
    FUN_0335cd70();
    while( true ) {
      iVar1 = (**(code **)(*unaff_x19 + 0x188))();
      if (iVar1 != 4) {
        return 0;
      }
      plVar2 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar2 == (long *)0x0) goto LAB_03399a80;
      uVar5 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      uVar3 = FUN_03152760(uVar5,*unaff_x20,4,0);
      if ((uVar3 & 1) == 0) break;
      FUN_0335cd70();
      iVar1 = (**(code **)(*unaff_x19 + 0x188))();
      if ((iVar1 != 9) && (iVar1 = (**(code **)(*unaff_x19 + 0x188))(), iVar1 != 0xb)) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar5 = FUN_03295500(0);
        puVar9 = Method_System_Collections_Generic_HashSet<Face>_UnionWith__;
        goto LAB_03399aa8;
      }
      plVar2 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar2 == (long *)0x0) goto LAB_03399790;
      if (plVar2 == (long *)0x0) goto LAB_03399a80;
      lVar4 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      FUN_0335cd70();
      if (lVar4 != 0) {
        iVar1 = (**(code **)(*unaff_x19 + 0x188))();
        if (iVar1 == 4) {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar5 = FUN_03295500(0);
          puVar9 = Method_System_Collections_Generic_HashSet<Face>_Remove__;
LAB_03399aa8:
          uVar7 = thunk_FUN_01c273e8(puVar9);
          uVar8 = thunk_FUN_01c273e8(
                                    Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_SetEquals__
                                    );
          FUN_0336f2b8(uVar7,uVar5,uVar8,0);
          uVar5 = FUN_0335cdc4();
          uVar7 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<GameObject>__ctor__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar5,uVar7);
        }
        if ((*(long *)(in_stack_00000020 + 0x20) == 0) ||
           (plVar2 = (long *)FUN_0335fda8(*(long *)(in_stack_00000020 + 0x20),0),
           plVar2 == (long *)0x0)) goto LAB_03399a80;
        lVar10 = *plVar2;
        uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar3 == 0) goto LAB_03399844;
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_0339982c;
      }
    }
    uVar3 = FUN_03152760(uVar5,*(undefined8 *)
                                Method_System_Collections_Generic_List_Enumerator<StoreItem>_Dispose__
                         ,4,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_03152760(uVar5,*(undefined8 *)
                                  Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_get_Item__
                           ,4,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_03152760(uVar5,*(undefined8 *)
                                    Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_Remove__
                             ,4,0);
        if ((uVar3 & 1) != 0) {
          FUN_0335cd70();
          lVar4 = FUN_03397f9c(in_stack_00000020);
          FUN_0335cd70();
          *in_stack_00000018 = lVar4;
          return 1;
        }
        return 0;
      }
      FUN_0335cd70();
      param_1 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (param_1 != (long *)0x0) {
        unaff_x27 = param_1;
      }
      goto code_r0x03399774;
    }
    FUN_0335cd70();
    plVar2 = (long *)(**(code **)(*unaff_x19 + 0x198))();
    if (plVar2 == (long *)0x0) goto LAB_03399a80;
    (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    FUN_0339ad34(in_stack_00000020);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar11 = piVar11 + 4;
    if (uVar3 == 0) break;
LAB_0339982c:
    if (*(long *)(piVar11 + -2) == *(long *)Method_System_Collections_Generic_HashSet<Face>_Add__) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_033998c4;
    }
  }
LAB_03399844:
  puVar6 = (undefined8 *)
           FUN_01c72498(plVar2,*(long *)Method_System_Collections_Generic_HashSet<Face>_Add__,0);
LAB_033998c4:
  lVar10 = (*(code *)*puVar6)(plVar2,in_stack_00000020,lVar4,puVar6[1]);
  *in_stack_00000018 = lVar10;
  puVar9 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  plVar2 = *(long **)(in_stack_00000020 + 0x28);
  if (plVar2 != (long *)0x0) {
    lVar10 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03399938;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01c72498(plVar2,*(long *)
                                  Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                          ,0);
LAB_03399938:
    iVar1 = (*(code *)*puVar6)(plVar2,puVar6[1]);
    if (2 < iVar1) {
      plVar2 = *(long **)(in_stack_00000020 + 0x28);
      uVar5 = (**(code **)(*unaff_x19 + 0x1c8))();
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
      }
      uVar7 = FUN_03295500(0);
      if (*in_stack_00000018 != 0) {
        uVar8 = thunk_FUN_01c5d21c(*in_stack_00000018,0);
        uVar7 = FUN_033704d4(*(undefined8 *)
                              Method_System_Collections_Generic_HashSet<Face>_GetEnumerator__,uVar7,
                             lVar4,uVar8,0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                            );
        }
        uVar8 = thunk_FUN_01c495e4();
        uVar5 = FUN_03358c64(uVar8,uVar5,uVar7,0);
        if (plVar2 != (long *)0x0) {
          lVar4 = *plVar2;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 != 0) {
            piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar9) {
                puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_03399a60;
              }
              uVar3 = uVar3 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_01c72498(plVar2,*(long *)puVar9,1);
LAB_03399a60:
          (*(code *)*puVar6)(plVar2,3,uVar5,0,puVar6[1]);
          return 1;
        }
      }
LAB_03399a80:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
  return 1;
}


