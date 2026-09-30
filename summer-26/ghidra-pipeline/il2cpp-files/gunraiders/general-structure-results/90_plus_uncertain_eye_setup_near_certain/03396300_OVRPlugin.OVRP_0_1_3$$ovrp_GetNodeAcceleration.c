/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_3$$ovrp_GetNodeAcceleration
ENTRY_POINT: 03396300
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_0_1_3__ovrp_GetNodeAcceleration(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long *plVar11;
  
  FUN_01c5d288();
  FUN_01c5d288(Method_GenericPooler<FriendButton>_PoolInstantiate__);
  FUN_01c5d288(
              Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>__ctor__
              );
  *(undefined1 *)(unaff_x24 + 0x6cb) = 1;
  puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  plVar11 = *(long **)(unaff_x22 + 0x28);
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03396380;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01c72498(plVar11,*(long *)
                                   Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                          ,0);
LAB_03396380:
    iVar2 = (*(code *)*puVar3)(plVar11,puVar3[1]);
    if (2 < iVar2) {
      if (unaff_x19 == (long *)0x0) goto LAB_033966b0;
      plVar11 = *(long **)(unaff_x22 + 0x28);
      uVar4 = (**(code **)(*unaff_x19 + 0x1c8))();
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
      }
      uVar5 = FUN_03295500(0);
      if (unaff_x21 == (long *)0x0) goto LAB_033966b0;
      thunk_FUN_01c5d21c();
      uVar5 = FUN_033704d4(*(undefined8 *)
                            Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>__ctor__
                           ,uVar5);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                          );
      }
      uVar6 = thunk_FUN_01c495e4();
      uVar4 = FUN_03358c64(uVar6,uVar4,uVar5,0);
      if (plVar11 == (long *)0x0) goto LAB_033966b0;
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_033964a8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498(plVar11,*(long *)puVar1,1);
LAB_033964a8:
      (*(code *)*puVar3)(plVar11,3,uVar4,0,puVar3[1]);
    }
  }
  FUN_03396bc0();
  if (unaff_x21 != (long *)0x0) {
    uVar4 = (**(code **)(*unaff_x21 + 0x188))();
    plVar11 = *(long **)(unaff_x22 + 0x28);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03396550;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498(plVar11,*(long *)puVar1,0);
LAB_03396550:
      iVar2 = (*(code *)*puVar3)(plVar11,puVar3[1]);
      if (2 < iVar2) {
        if (unaff_x19 != (long *)0x0) {
          plVar11 = *(long **)(unaff_x22 + 0x28);
          uVar5 = (**(code **)(*unaff_x19 + 0x1c8))();
          if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
          }
          uVar6 = FUN_03295500(0);
          thunk_FUN_01c5d21c();
          uVar6 = FUN_033704d4(*(undefined8 *)Method_GenericPooler<FriendButton>_PoolInstantiate__,
                               uVar6);
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)
                                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                              );
          }
          uVar7 = thunk_FUN_01c495e4();
          uVar5 = FUN_03358c64(uVar7,uVar5,uVar6,0);
          if (plVar11 != (long *)0x0) {
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                  puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_03396678;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_01c72498(plVar11,*(long *)puVar1,1);
LAB_03396678:
            (*(code *)*puVar3)(plVar11,3,uVar5,0,puVar3[1]);
            return uVar4;
          }
        }
        goto LAB_033966b0;
      }
    }
    return uVar4;
  }
LAB_033966b0:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


