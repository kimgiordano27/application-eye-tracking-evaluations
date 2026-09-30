/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_CreateSpatialAnchor
ENTRY_POINT: 0339ef8c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


long OVRPlugin_OVRP_1_72_0__ovrp_CreateSpatialAnchor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  int *piVar17;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0x7d8));
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
  *(undefined1 *)(unaff_x24 + 0x6cc) = 1;
  lVar5 = thunk_FUN_01c496e0(*unaff_x25);
  FUN_02d4f880(lVar5,*unaff_x20);
  puVar2 = Method_System_Collections_Generic_HashSet<object>_Add__;
  puVar11 = (undefined8 *)Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Contains__;
  if (unaff_x19 != (long *)0x0) {
    while (iVar3 = (**(code **)(*unaff_x19 + 0x188))(), iVar3 != 4) {
      if (iVar3 != 5) {
        if (iVar3 == 0xd) {
          return lVar5;
        }
        FUN_019b2708();
        uVar4 = (**(code **)(*unaff_x19 + 0x188))();
        in_stack_00000018 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
        in_stack_00000020 = 0xffffffffffffffff;
        in_stack_00000028 = uVar4;
        uVar14 = FUN_03307544(&stack0x00000018,0);
        uVar15 = thunk_FUN_01c273e8(
                                   Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                   );
        FUN_03146988(uVar15,uVar14,0);
        goto LAB_0339f4e4;
      }
LAB_0339f3e4:
      uVar12 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar12 & 1) == 0) {
        FUN_0339d160();
        return lVar5;
      }
    }
    plVar6 = (long *)(**(code **)(*unaff_x19 + 0x198))();
    if (plVar6 != (long *)0x0) {
      uVar14 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      lVar7 = thunk_FUN_01c496e0(*puVar11);
      FUN_03313b6c(lVar7,0);
      *(undefined8 *)(lVar7 + 0x10) = uVar14;
      if ((unaff_x21 != 0) && (lVar8 = FUN_03392404(), lVar8 != 0)) {
        uVar15 = FUN_033936cc(lVar8,uVar14);
        *(undefined8 *)(lVar7 + 0x20) = uVar15;
        if (*(long *)(unaff_x21 + 0xd8) != 0) {
          uVar15 = FUN_033936cc(*(long *)(unaff_x21 + 0xd8),uVar14);
          *(undefined8 *)(lVar7 + 0x18) = uVar15;
          if (lVar5 != 0) {
            lVar8 = *(long *)(lVar5 + 0x10);
            lVar16 = *(long *)puVar2;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
              }
              else {
                FUN_02d5004c(lVar5,lVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              lVar8 = *(long *)(lVar7 + 0x20);
              if ((lVar8 == 0) && (lVar8 = *(long *)(lVar7 + 0x18), lVar8 == 0)) {
                uVar12 = (**(code **)(*unaff_x19 + 0x1d8))();
                if ((uVar12 & 1) != 0) {
                  plVar6 = *(long **)(unaff_x22 + 0x28);
                  if (plVar6 != (long *)0x0) {
                    lVar8 = *plVar6;
                    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    if (uVar12 != 0) {
                      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar17 + -2) ==
                            *(long *)
                             Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                           ) {
                          puVar9 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
                          goto LAB_0339f258;
                        }
                        uVar12 = uVar12 - 1;
                        piVar17 = piVar17 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar9 = (undefined8 *)
                             FUN_01c72498(plVar6,*(long *)
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                                          ,0);
LAB_0339f258:
                    iVar3 = (*(code *)*puVar9)(plVar6,puVar9[1]);
                    if (3 < iVar3) {
                      plVar6 = *(long **)(unaff_x22 + 0x28);
                      uVar15 = (**(code **)(*unaff_x19 + 0x1c8))();
                      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
                      }
                      uVar13 = FUN_03295500(0);
                      uVar13 = FUN_033704d4(*(undefined8 *)
                                             Method_System_Collections_Generic_HashSet<Player>_Clear__
                                            ,uVar13,uVar14,*(undefined8 *)(unaff_x21 + 0x60),0);
                      if (*(int *)(*(long *)
                                    Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                                  + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*(long *)
                                            Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                                          );
                      }
                      uVar10 = thunk_FUN_01c495e4();
                      uVar15 = FUN_03358c64(uVar10,uVar15,uVar13,0);
                      if (plVar6 == (long *)0x0) goto LAB_0339f448;
                      lVar8 = *plVar6;
                      uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
                      if (uVar12 != 0) {
                        piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar17 + -2) ==
                              *(long *)
                               Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                             ) {
                            puVar11 = (undefined8 *)(lVar8 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                            goto OVRPlugin_OVRP_1_72_0__ovrp_RetrieveSpaceQueryResults;
                          }
                          uVar12 = uVar12 - 1;
                          piVar17 = piVar17 + 4;
                        } while (uVar12 != 0);
                      }
                      puVar11 = (undefined8 *)
                                FUN_01c72498(plVar6,*(long *)
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                                             ,1);
OVRPlugin_OVRP_1_72_0__ovrp_RetrieveSpaceQueryResults:
                      (*(code *)*puVar11)(plVar6,4,uVar15,0,puVar11[1]);
                      puVar11 = (undefined8 *)
                                Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Contains__
                      ;
                    }
                  }
                  if (*(char *)(unaff_x21 + 0xc0) == '\0') {
                    if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_0339f448;
                    iVar3 = *(int *)(*(long *)(unaff_x22 + 0x20) + 0x20);
                  }
                  else {
                    iVar3 = *(int *)(unaff_x21 + 0xc4);
                  }
                  if (iVar3 == 1) {
                    thunk_FUN_01c273e8(PTR_DAT_042305b0);
                    FUN_019b5f60();
                    uVar15 = FUN_03295500(0);
                    FUN_019b2708(in_stack_00000010);
                    uVar13 = (**(code **)(*in_stack_00000010 + 0x1b8))
                                       (in_stack_00000010,
                                        *(undefined8 *)(*in_stack_00000010 + 0x1c0));
                    uVar10 = thunk_FUN_01c273e8(
                                               Method_UnityEngine_Rendering_GenericPool<XRPass>_Release__
                                               );
                    FUN_033704d4(uVar10,uVar15,uVar14,uVar13,0);
                    goto LAB_0339f4e4;
                  }
LAB_0339f3b4:
                  if (*(long *)(unaff_x21 + 0xe0) == 0) {
                    FUN_0335c934();
                  }
                  else {
                    uVar14 = FUN_0339fa34();
LAB_0339f3d0:
                    *(undefined8 *)(lVar7 + 0x30) = uVar14;
                  }
                  goto LAB_0339f3e4;
                }
              }
              else if (*(char *)(lVar8 + 0x80) == '\0') {
                if (*(long *)(lVar8 + 0x48) == 0) {
                  uVar15 = FUN_03395dc8();
                  *(undefined8 *)(lVar8 + 0x48) = uVar15;
                }
                plVar6 = (long *)FUN_03396234();
                uVar12 = FUN_0335ce1c();
                if ((uVar12 & 1) != 0) {
                  if ((plVar6 == (long *)0x0) ||
                     (uVar12 = (**(code **)(*plVar6 + 0x1a8))
                                         (plVar6,*(undefined8 *)(*plVar6 + 0x1b0)),
                     (uVar12 & 1) == 0)) {
                    uVar14 = FUN_033966b4();
                  }
                  else {
                    uVar14 = FUN_033962a0();
                  }
                  goto LAB_0339f3d0;
                }
              }
              else {
                uVar12 = (**(code **)(*unaff_x19 + 0x1d8))();
                if ((uVar12 & 1) != 0) goto LAB_0339f3b4;
              }
              thunk_FUN_01c273e8(PTR_DAT_042305b0);
              FUN_019b5f60();
              uVar15 = FUN_03295500(0);
              uVar13 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
              FUN_0336f2b8(uVar13,uVar15,uVar14,0);
LAB_0339f4e4:
              uVar14 = FUN_0335cdc4();
              uVar15 = thunk_FUN_01c273e8(
                                         Method_System_Collections_Generic_HashSet<Player>_Contains__
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar14,uVar15);
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


