/*
FUNCTION_NAME: FUN_0339ef18
ENTRY_POINT: 0339ef18
PROGRAM: gunraiders-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0339ef18(long param_1,long param_2,undefined8 param_3,long *param_4,long *param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar3 = Method_System_Collections_Generic_HashSet<Player>_Add__;
  puVar2 = Method_System_Collections_Generic_HashSet<Player>__ctor__;
  if ((DAT_045336cc & 1) == 0) {
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Contains__);
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_MoveNext__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__);
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                );
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<object>_Add__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<Player>_Add__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<Player>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_MoveNext__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<UIVertex>_get_Current__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<Player>_Clear__);
    FUN_01c5d288(Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>_get_relatedTarget__);
    DAT_045336cc = 1;
  }
  lVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
  FUN_02d4f880(lVar6,*(undefined8 *)puVar3);
  puVar2 = Method_System_Collections_Generic_HashSet<object>_Add__;
  puVar12 = (undefined8 *)Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Contains__;
  if (param_4 != (long *)0x0) {
    while (iVar4 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400)),
          iVar4 != 4) {
      if (iVar4 != 5) {
        if (iVar4 == 0xd) {
          return lVar6;
        }
        FUN_019b2708(param_4);
        uVar5 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
        local_78 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
        uStack_70 = 0xffffffffffffffff;
        local_68 = uVar5;
        uVar15 = FUN_03307544(&local_78,0);
        uVar16 = thunk_FUN_01c273e8(
                                   Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                   );
        uVar15 = FUN_03146988(uVar16,uVar15,0);
        goto LAB_0339f4e4;
      }
LAB_0339f3e4:
      uVar13 = (**(code **)(*param_4 + 0x1d8))(param_4,*(undefined8 *)(*param_4 + 0x1e0));
      if ((uVar13 & 1) == 0) {
        FUN_0339d160(param_1,param_4,param_2,0,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>_get_relatedTarget__);
        return lVar6;
      }
    }
    plVar7 = (long *)(**(code **)(*param_4 + 0x198))(param_4,*(undefined8 *)(*param_4 + 0x1a0));
    if (plVar7 != (long *)0x0) {
      uVar15 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      lVar8 = thunk_FUN_01c496e0(*puVar12);
      FUN_03313b6c(lVar8,0);
      *(undefined8 *)(lVar8 + 0x10) = uVar15;
      if ((param_2 != 0) && (lVar9 = FUN_03392404(param_2), lVar9 != 0)) {
        uVar16 = FUN_033936cc(lVar9,uVar15);
        *(undefined8 *)(lVar8 + 0x20) = uVar16;
        if (*(long *)(param_2 + 0xd8) != 0) {
          uVar16 = FUN_033936cc(*(long *)(param_2 + 0xd8),uVar15);
          *(undefined8 *)(lVar8 + 0x18) = uVar16;
          if (lVar6 != 0) {
            lVar9 = *(long *)(lVar6 + 0x10);
            lVar17 = *(long *)puVar2;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar8;
              }
              else {
                FUN_02d5004c(lVar6,lVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              lVar9 = *(long *)(lVar8 + 0x20);
              if ((lVar9 == 0) && (lVar9 = *(long *)(lVar8 + 0x18), lVar9 == 0)) {
                uVar13 = (**(code **)(*param_4 + 0x1d8))(param_4,*(undefined8 *)(*param_4 + 0x1e0));
                if ((uVar13 & 1) != 0) {
                  plVar7 = *(long **)(param_1 + 0x28);
                  if (plVar7 != (long *)0x0) {
                    lVar9 = *plVar7;
                    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar13 != 0) {
                      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) ==
                            *(long *)
                             Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                           ) {
                          puVar10 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                          goto LAB_0339f258;
                        }
                        uVar13 = uVar13 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar13 != 0);
                    }
                    puVar10 = (undefined8 *)
                              FUN_01c72498(plVar7,*(long *)
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                                           ,0);
LAB_0339f258:
                    iVar4 = (*(code *)*puVar10)(plVar7,puVar10[1]);
                    if (3 < iVar4) {
                      plVar7 = *(long **)(param_1 + 0x28);
                      uVar16 = (**(code **)(*param_4 + 0x1c8))
                                         (param_4,*(undefined8 *)(*param_4 + 0x1d0));
                      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
                      }
                      uVar14 = FUN_03295500(0);
                      uVar14 = FUN_033704d4(*(undefined8 *)
                                             Method_System_Collections_Generic_HashSet<Player>_Clear__
                                            ,uVar14,uVar15,*(undefined8 *)(param_2 + 0x60),0);
                      if (*(int *)(*(long *)
                                    Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                                  + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*(long *)
                                            Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                                          );
                      }
                      uVar11 = thunk_FUN_01c495e4(param_4,*(undefined8 *)
                                                                                                                      
                                                  Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_MoveNext__
                                                 );
                      uVar16 = FUN_03358c64(uVar11,uVar16,uVar14,0);
                      if (plVar7 == (long *)0x0) goto LAB_0339f448;
                      lVar9 = *plVar7;
                      uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
                      if (uVar13 != 0) {
                        piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) ==
                              *(long *)
                               Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                             ) {
                            puVar12 = (undefined8 *)(lVar9 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                            goto OVRPlugin_OVRP_1_72_0__ovrp_RetrieveSpaceQueryResults;
                          }
                          uVar13 = uVar13 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar12 = (undefined8 *)
                                FUN_01c72498(plVar7,*(long *)
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                                             ,1);
OVRPlugin_OVRP_1_72_0__ovrp_RetrieveSpaceQueryResults:
                      (*(code *)*puVar12)(plVar7,4,uVar16,0,puVar12[1]);
                      puVar12 = (undefined8 *)
                                Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Contains__
                      ;
                    }
                  }
                  if (*(char *)(param_2 + 0xc0) == '\0') {
                    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0339f448;
                    iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 0x20);
                  }
                  else {
                    iVar4 = *(int *)(param_2 + 0xc4);
                  }
                  if (iVar4 == 1) {
                    thunk_FUN_01c273e8(PTR_DAT_042305b0);
                    FUN_019b5f60();
                    uVar16 = FUN_03295500(0);
                    FUN_019b2708(param_5);
                    uVar14 = (**(code **)(*param_5 + 0x1b8))
                                       (param_5,*(undefined8 *)(*param_5 + 0x1c0));
                    uVar11 = thunk_FUN_01c273e8(
                                               Method_UnityEngine_Rendering_GenericPool<XRPass>_Release__
                                               );
                    uVar15 = FUN_033704d4(uVar11,uVar16,uVar15,uVar14,0);
                    goto LAB_0339f4e4;
                  }
LAB_0339f3b4:
                  if (*(long *)(param_2 + 0xe0) == 0) {
                    FUN_0335c934(param_4,0);
                  }
                  else {
                    uVar15 = FUN_0339fa34(param_1,param_2,param_3,param_4);
LAB_0339f3d0:
                    *(undefined8 *)(lVar8 + 0x30) = uVar15;
                  }
                  goto LAB_0339f3e4;
                }
              }
              else if (*(char *)(lVar9 + 0x80) == '\0') {
                lVar17 = *(long *)(lVar9 + 0x48);
                if (lVar17 == 0) {
                  lVar17 = FUN_03395dc8(param_1,*(undefined8 *)(lVar9 + 0x40));
                  *(long *)(lVar9 + 0x48) = lVar17;
                }
                plVar7 = (long *)FUN_03396234(param_1,lVar17,*(undefined8 *)(lVar9 + 0x78),param_2,
                                              param_3);
                uVar13 = FUN_0335ce1c(param_4,*(undefined8 *)(lVar9 + 0x48),plVar7 != (long *)0x0,0)
                ;
                if ((uVar13 & 1) != 0) {
                  if ((plVar7 == (long *)0x0) ||
                     (uVar13 = (**(code **)(*plVar7 + 0x1a8))
                                         (plVar7,*(undefined8 *)(*plVar7 + 0x1b0)),
                     (uVar13 & 1) == 0)) {
                    uVar15 = FUN_033966b4(param_1,param_4,*(undefined8 *)(lVar9 + 0x40),
                                          *(undefined8 *)(lVar9 + 0x48),lVar9,param_2,param_3,0);
                  }
                  else {
                    uVar15 = FUN_033962a0(param_1,plVar7,param_4,*(undefined8 *)(lVar9 + 0x40),0);
                  }
                  goto LAB_0339f3d0;
                }
              }
              else {
                uVar13 = (**(code **)(*param_4 + 0x1d8))(param_4,*(undefined8 *)(*param_4 + 0x1e0));
                if ((uVar13 & 1) != 0) goto LAB_0339f3b4;
              }
              thunk_FUN_01c273e8(PTR_DAT_042305b0);
              FUN_019b5f60();
              uVar16 = FUN_03295500(0);
              uVar14 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
              uVar15 = FUN_0336f2b8(uVar14,uVar16,uVar15,0);
LAB_0339f4e4:
              uVar15 = FUN_0335cdc4(param_4,uVar15,0);
              uVar16 = thunk_FUN_01c273e8(
                                         Method_System_Collections_Generic_HashSet<Player>_Contains__
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar15,uVar16);
            }
          }
        }
      }
    }
  }
LAB_0339f448:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


