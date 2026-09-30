/*
FUNCTION_NAME: OVRPlugin$$get_powerSaving
ENTRY_POINT: 0337e924
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__get_powerSaving(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar16;
  long unaff_x22;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  
  if (unaff_x28 != (long *)0x0) {
    lVar4 = thunk_FUN_01bedf90(*(undefined8 *)
                                (*unaff_x28 +
                                 (ulong)*(ushort *)
                                         (*(long *)
                                           Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_MoveNext__
                                         + 0x50) * 0x10 + 0x140));
    uVar5 = (**(code **)(lVar4 + 8))();
    if (unaff_x22 != 0) {
      *(undefined8 *)(unaff_x22 + 0x10) = uVar5;
      uVar5 = thunk_FUN_01c496e0(*(undefined8 *)
                                  System_Linq_Expressions_Interpreter_InterpretedFrame_TypeInfo);
      FUN_02f3b230();
      lVar4 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Bounds>_get_Current__
                                );
      FUN_0337e450(lVar4,uVar5);
      puVar2 = 
      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_Dispose__;
      if (unaff_x19 != 0) {
        if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
          uVar16 = 0;
          uVar12 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
          do {
            if (uVar12 <= uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            if (unaff_x20 == (long *)0x0) goto LAB_0337ee64;
            uVar5 = *(undefined8 *)(unaff_x19 + uVar16 * 8 + 0x20);
            lVar6 = (**(code **)(*unaff_x20 + 0x6d8))();
            if (lVar6 == 0) goto LAB_0337ee64;
            if (*(int *)(lVar6 + 0x18) != 1) {
              thunk_FUN_01c273e8(PTR_DAT_042305b0);
              FUN_019b5f60();
              uVar8 = FUN_03295500(0);
              uVar10 = thunk_FUN_01c273e8(
                                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_Dispose__
                                         );
              uVar5 = FUN_0336f2b8(uVar10,uVar8,uVar5);
LAB_0337ef24:
              thunk_FUN_01c273e8(PTR_DAT_04231770);
              uVar8 = thunk_FUN_01c496e0();
              FUN_032467a0(uVar8,uVar5,0);
              uVar5 = thunk_FUN_01c273e8(
                                        Method_System_Collections_Generic_Dictionary_Enumerator<string,_JSONNode>_Dispose__
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar8,uVar5);
            }
            plVar7 = (long *)FUN_02352b88(lVar6,*(undefined8 *)puVar2);
            lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Bounds>_MoveNext__
                                      );
            FUN_03313b6c(lVar6,0);
            if (plVar7 == (long *)0x0) goto LAB_0337ee64;
            iVar3 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
            if (iVar3 == 0x10) {
LAB_0337ea7c:
              if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar12 = FUN_0337f070(plVar7,0);
              if ((uVar12 & 1) != 0) {
                if ((unaff_x28 == (long *)0x0) ||
                   (uVar8 = FUN_023c14fc(unaff_x28,plVar7,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_get_Current__
                                        ), lVar6 == 0)) goto LAB_0337ee64;
                *(undefined8 *)(lVar6 + 0x18) = uVar8;
              }
              if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar12 = FUN_0337f1bc(plVar7,0,0);
              if ((uVar12 & 1) != 0) {
                if ((unaff_x28 == (long *)0x0) ||
                   (uVar8 = FUN_023c18ac(unaff_x28,plVar7,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Bounds>_Dispose__
                                        ), lVar6 == 0)) goto LAB_0337ee64;
                *(undefined8 *)(lVar6 + 0x20) = uVar8;
              }
            }
            else {
              if (iVar3 != 8) {
                if (iVar3 != 4) {
                  thunk_FUN_01c273e8(PTR_DAT_042305b0);
                  FUN_019b5f60();
                  uVar5 = FUN_03295500(0);
                  in_stack_00000018._4_4_ = FUN_0337f054(plVar7);
                  uVar8 = thunk_FUN_01c273e8(
                                            Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_MoveNext__
                                            );
                  uVar8 = thunk_FUN_01c49334(uVar8,(long)&stack0x00000018 + 4);
                  FUN_019b2708(plVar7);
                  uVar10 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
                  uVar11 = thunk_FUN_01c273e8(
                                             Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_get_Current__
                                             );
                  uVar5 = FUN_033704d4(uVar11,uVar5,uVar8,uVar10);
                  goto LAB_0337ef24;
                }
                goto LAB_0337ea7c;
              }
              bVar1 = *(byte *)(*(long *)Jetpack_<SpawnJetpackAndTrailCoroutine>d__24_TypeInfo +
                               0x130);
              if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Jetpack_<SpawnJetpackAndTrailCoroutine>d__24_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748(plVar7);
              }
              uVar12 = FUN_0321083c(plVar7,0);
              if ((uVar12 & 1) != 0) {
                lVar14 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
                if (lVar14 == 0) goto LAB_0337ee64;
                lVar13 = *(long *)(lVar14 + 0x18);
                if (lVar13 == 0) {
                  uVar8 = (**(code **)(*plVar7 + 0x3b8))(plVar7,*(undefined8 *)(*plVar7 + 0x3c0));
                  uVar10 = *(undefined8 *)OVRSimpleJSON_JSONArray_TypeInfo;
                  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
                  }
                  uVar10 = FUN_032e04b8(uVar10,0);
                  uVar12 = FUN_032ea0d4(uVar8,uVar10,0);
                  if ((uVar12 & 1) != 0) {
                    lVar14 = thunk_FUN_01c496e0(*(undefined8 *)
                                                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Index>_Dispose__
                                               );
                    FUN_03313b6c(lVar14,0);
                    unaff_x29 = (long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
                    if (unaff_x28 != (long *)0x0) {
                      lVar13 = thunk_FUN_01bedf90(*(undefined8 *)
                                                   (*unaff_x28 +
                                                    (ulong)*(ushort *)
                                                            (*(long *)
                                                  Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
                                                  + 0x50) * 0x10 + 0x140));
                      uVar8 = (**(code **)(lVar13 + 8))(unaff_x28,plVar7,lVar13);
                      if (lVar14 != 0) {
                        *(undefined8 *)(lVar14 + 0x10) = uVar8;
                        uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                                        
                                                  System_ComponentModel_MaskedTextProvider_TypeInfo)
                        ;
                        FUN_02b6841c(uVar8,lVar14,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_CIELabColor>_get_Current__
                                     ,0);
                        if (lVar6 != 0) {
                          *(undefined8 *)(lVar6 + 0x18) = uVar8;
                          goto LAB_0337ed94;
                        }
                      }
                    }
                    goto LAB_0337ee64;
                  }
                  lVar13 = *(long *)(lVar14 + 0x18);
                  unaff_x29 = (long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
                }
                if ((int)lVar13 == 1) {
                  uVar8 = (**(code **)(*plVar7 + 0x3b8))(plVar7,*(undefined8 *)(*plVar7 + 0x3c0));
                  uVar10 = *(undefined8 *)OVRSimpleJSON_JSONArray_TypeInfo;
                  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
                  }
                  uVar10 = FUN_032e04b8(uVar10,0);
                  uVar12 = FUN_032e935c(uVar8,uVar10,0);
                  if ((uVar12 & 1) != 0) {
                    lVar14 = thunk_FUN_01c496e0(*(undefined8 *)
                                                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Index>_get_Current__
                                               );
                    FUN_03313b6c(lVar14,0);
                    if (unaff_x28 == (long *)0x0) goto LAB_0337ee64;
                    lVar13 = thunk_FUN_01bedf90(*(undefined8 *)
                                                 (*unaff_x28 +
                                                  (ulong)*(ushort *)
                                                          (*(long *)
                                                  Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
                                                  + 0x50) * 0x10 + 0x140));
                    uVar8 = (**(code **)(lVar13 + 8))(unaff_x28,plVar7,lVar13);
                    if (lVar14 == 0) goto LAB_0337ee64;
                    *(undefined8 *)(lVar14 + 0x10) = uVar8;
                    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Dictionary<ICustomEventReceiver,_Transform>>_get_Current__
                                              );
                    FUN_02864148(uVar8,lVar14,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_Index>_MoveNext__
                                 ,0);
                    if (lVar6 == 0) goto LAB_0337ee64;
                    *(undefined8 *)(lVar6 + 0x20) = uVar8;
                  }
                }
              }
            }
LAB_0337ed94:
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar8 = FUN_0337f350(plVar7);
            if (((lVar6 == 0) || (*(undefined8 *)(lVar6 + 0x10) = uVar8, lVar4 == 0)) ||
               (plVar7 = *(long **)(lVar4 + 0x18), plVar7 == (long *)0x0)) goto LAB_0337ee64;
            lVar14 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar12 != 0) {
              piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) ==
                    *(long *)
                     Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Dictionary<ICustomEventReceiver,_Transform>>_MoveNext__
                   ) {
                  puVar9 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                  goto LAB_0337ee1c;
                }
                uVar12 = uVar12 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)
                     FUN_01c72498(plVar7,*(long *)
                                          Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Dictionary<ICustomEventReceiver,_Transform>>_MoveNext__
                                  ,1);
LAB_0337ee1c:
            (*(code *)*puVar9)(plVar7,uVar5,lVar6,puVar9[1]);
            uVar12 = (ulong)*(uint *)(unaff_x19 + 0x18);
            uVar16 = uVar16 + 1;
          } while ((long)uVar16 < (long)(int)*(uint *)(unaff_x19 + 0x18));
        }
        return lVar4;
      }
    }
  }
LAB_0337ee64:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


