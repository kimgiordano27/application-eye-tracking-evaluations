/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_SetSpaceComponentStatus
ENTRY_POINT: 0339f010
PROGRAM: gunraiders-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_72_0__ovrp_SetSpaceComponentStatus(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  puVar9 = (undefined8 *)Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Contains__;
  if (unaff_x19 != (long *)0x0) {
    while (iVar2 = (**(code **)(*unaff_x19 + 0x188))(), iVar2 != 4) {
      if (iVar2 != 5) {
        if (iVar2 == 0xd) {
          return;
        }
        FUN_019b2708();
        uVar3 = (**(code **)(*unaff_x19 + 0x188))();
        in_stack_00000018 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
        in_stack_00000020 = 0xffffffffffffffff;
        in_stack_00000028 = uVar3;
        uVar12 = FUN_03307544(&stack0x00000018,0);
        uVar13 = thunk_FUN_01c273e8(
                                   Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                   );
        FUN_03146988(uVar13,uVar12,0);
        goto LAB_0339f4e4;
      }
LAB_0339f3e4:
      uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar10 & 1) == 0) {
        FUN_0339d160();
        return;
      }
    }
    plVar4 = (long *)(**(code **)(*unaff_x19 + 0x198))();
    if (plVar4 != (long *)0x0) {
      uVar12 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      lVar5 = thunk_FUN_01c496e0(*puVar9);
      FUN_03313b6c(lVar5,0);
      *(undefined8 *)(lVar5 + 0x10) = uVar12;
      if ((unaff_x21 != 0) && (lVar6 = FUN_03392404(), lVar6 != 0)) {
        uVar13 = FUN_033936cc(lVar6,uVar12);
        *(undefined8 *)(lVar5 + 0x20) = uVar13;
        if (*(long *)(unaff_x21 + 0xd8) != 0) {
          uVar13 = FUN_033936cc(*(long *)(unaff_x21 + 0xd8),uVar12);
          *(undefined8 *)(lVar5 + 0x18) = uVar13;
          if (unaff_x24 != 0) {
            lVar6 = *(long *)(unaff_x24 + 0x10);
            *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar1 = *(uint *)(unaff_x24 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(unaff_x24 + 0x18) = uVar1 + 1;
                *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
              }
              else {
                FUN_02d5004c();
              }
              lVar6 = *(long *)(lVar5 + 0x20);
              if ((lVar6 == 0) && (lVar6 = *(long *)(lVar5 + 0x18), lVar6 == 0)) {
                uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
                if ((uVar10 & 1) != 0) {
                  plVar4 = *(long **)(unaff_x22 + 0x28);
                  if (plVar4 != (long *)0x0) {
                    lVar6 = *plVar4;
                    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    if (uVar10 != 0) {
                      piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) ==
                            *(long *)
                             Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                           ) {
                          puVar7 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                          goto LAB_0339f258;
                        }
                        uVar10 = uVar10 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar7 = (undefined8 *)
                             FUN_01c72498(plVar4,*(long *)
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                                          ,0);
LAB_0339f258:
                    iVar2 = (*(code *)*puVar7)(plVar4,puVar7[1]);
                    if (3 < iVar2) {
                      plVar4 = *(long **)(unaff_x22 + 0x28);
                      uVar13 = (**(code **)(*unaff_x19 + 0x1c8))();
                      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
                      }
                      uVar11 = FUN_03295500(0);
                      uVar11 = FUN_033704d4(*(undefined8 *)
                                             Method_System_Collections_Generic_HashSet<Player>_Clear__
                                            ,uVar11,uVar12,*(undefined8 *)(unaff_x21 + 0x60),0);
                      if (*(int *)(*(long *)
                                    Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                                  + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*(long *)
                                            Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                                          );
                      }
                      uVar8 = thunk_FUN_01c495e4();
                      uVar13 = FUN_03358c64(uVar8,uVar13,uVar11,0);
                      if (plVar4 == (long *)0x0) goto LAB_0339f448;
                      lVar6 = *plVar4;
                      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
                      if (uVar10 != 0) {
                        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) ==
                              *(long *)
                               Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                             ) {
                            puVar9 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                            goto OVRPlugin_OVRP_1_72_0__ovrp_RetrieveSpaceQueryResults;
                          }
                          uVar10 = uVar10 - 1;
                          piVar14 = piVar14 + 4;
                        } while (uVar10 != 0);
                      }
                      puVar9 = (undefined8 *)
                               FUN_01c72498(plVar4,*(long *)
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                                            ,1);
OVRPlugin_OVRP_1_72_0__ovrp_RetrieveSpaceQueryResults:
                      (*(code *)*puVar9)(plVar4,4,uVar13,0,puVar9[1]);
                      puVar9 = (undefined8 *)
                               Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Contains__;
                    }
                  }
                  if (*(char *)(unaff_x21 + 0xc0) == '\0') {
                    if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_0339f448;
                    iVar2 = *(int *)(*(long *)(unaff_x22 + 0x20) + 0x20);
                  }
                  else {
                    iVar2 = *(int *)(unaff_x21 + 0xc4);
                  }
                  if (iVar2 == 1) {
                    thunk_FUN_01c273e8(PTR_DAT_042305b0);
                    FUN_019b5f60();
                    uVar13 = FUN_03295500(0);
                    FUN_019b2708(in_stack_00000010);
                    uVar11 = (**(code **)(*in_stack_00000010 + 0x1b8))
                                       (in_stack_00000010,
                                        *(undefined8 *)(*in_stack_00000010 + 0x1c0));
                    uVar8 = thunk_FUN_01c273e8(
                                              Method_UnityEngine_Rendering_GenericPool<XRPass>_Release__
                                              );
                    FUN_033704d4(uVar8,uVar13,uVar12,uVar11,0);
                    goto LAB_0339f4e4;
                  }
LAB_0339f3b4:
                  if (*(long *)(unaff_x21 + 0xe0) == 0) {
                    FUN_0335c934();
                  }
                  else {
                    uVar12 = FUN_0339fa34();
LAB_0339f3d0:
                    *(undefined8 *)(lVar5 + 0x30) = uVar12;
                  }
                  goto LAB_0339f3e4;
                }
              }
              else if (*(char *)(lVar6 + 0x80) == '\0') {
                if (*(long *)(lVar6 + 0x48) == 0) {
                  uVar13 = FUN_03395dc8();
                  *(undefined8 *)(lVar6 + 0x48) = uVar13;
                }
                plVar4 = (long *)FUN_03396234();
                uVar10 = FUN_0335ce1c();
                if ((uVar10 & 1) != 0) {
                  if ((plVar4 == (long *)0x0) ||
                     (uVar10 = (**(code **)(*plVar4 + 0x1a8))
                                         (plVar4,*(undefined8 *)(*plVar4 + 0x1b0)),
                     (uVar10 & 1) == 0)) {
                    uVar12 = FUN_033966b4();
                  }
                  else {
                    uVar12 = FUN_033962a0();
                  }
                  goto LAB_0339f3d0;
                }
              }
              else {
                uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
                if ((uVar10 & 1) != 0) goto LAB_0339f3b4;
              }
              thunk_FUN_01c273e8(PTR_DAT_042305b0);
              FUN_019b5f60();
              uVar13 = FUN_03295500(0);
              uVar11 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
              FUN_0336f2b8(uVar11,uVar13,uVar12,0);
LAB_0339f4e4:
              uVar12 = FUN_0335cdc4();
              uVar13 = thunk_FUN_01c273e8(
                                         Method_System_Collections_Generic_HashSet<Player>_Contains__
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar12,uVar13);
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


