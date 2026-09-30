/*
FUNCTION_NAME: OVRPlugin$$get_positionTracked
ENTRY_POINT: 0337e890
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


long OVRPlugin__get_positionTracked(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  long *plVar18;
  undefined8 in_stack_00000018;
  
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  plVar18 = (long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
  plVar4 = (long *)FUN_033a78fc(0);
  uVar5 = FUN_032104c4();
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*plVar18 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar5 = FUN_0337ef60();
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      lVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_CIELabColor>_MoveNext__
                                );
      FUN_03313b6c(lVar7,0);
      if (plVar4 == (long *)0x0) goto LAB_0337ee64;
      lVar8 = thunk_FUN_01bedf90(*(undefined8 *)
                                  (*plVar4 + (ulong)*(ushort *)
                                                     (*(long *)
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_MoveNext__
                                                  + 0x50) * 0x10 + 0x140));
      uVar6 = (**(code **)(lVar8 + 8))(plVar4);
      if (lVar7 == 0) goto LAB_0337ee64;
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
      uVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  System_Linq_Expressions_Interpreter_InterpretedFrame_TypeInfo);
      FUN_02f3b230(uVar6,lVar7,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<string,_CIELabColor>_Dispose__
                   ,0);
    }
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_0337ee64;
    uVar6 = (**(code **)(*plVar4 + 0x188))(plVar4);
  }
  lVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Bounds>_get_Current__
                            );
  FUN_0337e450(lVar7,uVar6);
  puVar2 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_Dispose__;
  if (unaff_x19 != 0) {
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar5 = 0;
      uVar14 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      do {
        if (uVar14 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        if (unaff_x20 == (long *)0x0) goto LAB_0337ee64;
        uVar6 = *(undefined8 *)(unaff_x19 + uVar5 * 8 + 0x20);
        lVar8 = (**(code **)(*unaff_x20 + 0x6d8))();
        if (lVar8 == 0) goto LAB_0337ee64;
        if (*(int *)(lVar8 + 0x18) != 1) {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar10 = FUN_03295500(0);
          uVar12 = thunk_FUN_01c273e8(
                                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_Dispose__
                                     );
          uVar6 = FUN_0336f2b8(uVar12,uVar10,uVar6);
LAB_0337ef24:
          thunk_FUN_01c273e8(PTR_DAT_04231770);
          uVar10 = thunk_FUN_01c496e0();
          FUN_032467a0(uVar10,uVar6,0);
          uVar6 = thunk_FUN_01c273e8(
                                    Method_System_Collections_Generic_Dictionary_Enumerator<string,_JSONNode>_Dispose__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar10,uVar6);
        }
        plVar9 = (long *)FUN_02352b88(lVar8,*(undefined8 *)puVar2);
        lVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Bounds>_MoveNext__
                                  );
        FUN_03313b6c(lVar8,0);
        if (plVar9 == (long *)0x0) goto LAB_0337ee64;
        iVar3 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
        if (iVar3 == 0x10) {
LAB_0337ea7c:
          if (*(int *)(*plVar18 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar14 = FUN_0337f070(plVar9,0);
          if ((uVar14 & 1) != 0) {
            if ((plVar4 == (long *)0x0) ||
               (uVar10 = FUN_023c14fc(plVar4,plVar9,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_get_Current__
                                     ), lVar8 == 0)) goto LAB_0337ee64;
            *(undefined8 *)(lVar8 + 0x18) = uVar10;
          }
          if (*(int *)(*plVar18 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar14 = FUN_0337f1bc(plVar9,0,0);
          if ((uVar14 & 1) != 0) {
            if ((plVar4 == (long *)0x0) ||
               (uVar10 = FUN_023c18ac(plVar4,plVar9,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Bounds>_Dispose__
                                     ), lVar8 == 0)) goto LAB_0337ee64;
            *(undefined8 *)(lVar8 + 0x20) = uVar10;
          }
        }
        else {
          if (iVar3 != 8) {
            if (iVar3 != 4) {
              thunk_FUN_01c273e8(PTR_DAT_042305b0);
              FUN_019b5f60();
              uVar6 = FUN_03295500(0);
              in_stack_00000018._4_4_ = FUN_0337f054(plVar9);
              uVar10 = thunk_FUN_01c273e8(
                                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_MoveNext__
                                         );
              uVar10 = thunk_FUN_01c49334(uVar10,(long)&stack0x00000018 + 4);
              FUN_019b2708(plVar9);
              uVar12 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
              uVar13 = thunk_FUN_01c273e8(
                                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_get_Current__
                                         );
              uVar6 = FUN_033704d4(uVar13,uVar6,uVar10,uVar12);
              goto LAB_0337ef24;
            }
            goto LAB_0337ea7c;
          }
          bVar1 = *(byte *)(*(long *)Jetpack_<SpawnJetpackAndTrailCoroutine>d__24_TypeInfo + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Jetpack_<SpawnJetpackAndTrailCoroutine>d__24_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar9);
          }
          uVar14 = FUN_0321083c(plVar9,0);
          if ((uVar14 & 1) != 0) {
            lVar16 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
            if (lVar16 == 0) goto LAB_0337ee64;
            lVar15 = *(long *)(lVar16 + 0x18);
            if (lVar15 == 0) {
              uVar10 = (**(code **)(*plVar9 + 0x3b8))(plVar9,*(undefined8 *)(*plVar9 + 0x3c0));
              uVar12 = *(undefined8 *)OVRSimpleJSON_JSONArray_TypeInfo;
              if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
              }
              uVar12 = FUN_032e04b8(uVar12,0);
              uVar14 = FUN_032ea0d4(uVar10,uVar12,0);
              if ((uVar14 & 1) != 0) {
                lVar16 = thunk_FUN_01c496e0(*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary_Enumerator<string,_Index>_Dispose__
                                           );
                FUN_03313b6c(lVar16,0);
                plVar18 = (long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
                if (plVar4 != (long *)0x0) {
                  lVar15 = thunk_FUN_01bedf90(*(undefined8 *)
                                               (*plVar4 + (ulong)*(ushort *)
                                                                  (*(long *)
                                                  Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
                                                  + 0x50) * 0x10 + 0x140));
                  uVar10 = (**(code **)(lVar15 + 8))(plVar4,plVar9,lVar15);
                  if (lVar16 != 0) {
                    *(undefined8 *)(lVar16 + 0x10) = uVar10;
                    uVar10 = thunk_FUN_01c496e0(*(undefined8 *)
                                                 System_ComponentModel_MaskedTextProvider_TypeInfo);
                    FUN_02b6841c(uVar10,lVar16,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_CIELabColor>_get_Current__
                                 ,0);
                    if (lVar8 != 0) {
                      *(undefined8 *)(lVar8 + 0x18) = uVar10;
                      goto LAB_0337ed94;
                    }
                  }
                }
                goto LAB_0337ee64;
              }
              lVar15 = *(long *)(lVar16 + 0x18);
              plVar18 = (long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
            }
            if ((int)lVar15 == 1) {
              uVar10 = (**(code **)(*plVar9 + 0x3b8))(plVar9,*(undefined8 *)(*plVar9 + 0x3c0));
              uVar12 = *(undefined8 *)OVRSimpleJSON_JSONArray_TypeInfo;
              if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
              }
              uVar12 = FUN_032e04b8(uVar12,0);
              uVar14 = FUN_032e935c(uVar10,uVar12,0);
              if ((uVar14 & 1) != 0) {
                lVar16 = thunk_FUN_01c496e0(*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary_Enumerator<string,_Index>_get_Current__
                                           );
                FUN_03313b6c(lVar16,0);
                if (plVar4 == (long *)0x0) goto LAB_0337ee64;
                lVar15 = thunk_FUN_01bedf90(*(undefined8 *)
                                             (*plVar4 + (ulong)*(ushort *)
                                                                (*(long *)
                                                  Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
                                                  + 0x50) * 0x10 + 0x140));
                uVar10 = (**(code **)(lVar15 + 8))(plVar4,plVar9,lVar15);
                if (lVar16 == 0) goto LAB_0337ee64;
                *(undefined8 *)(lVar16 + 0x10) = uVar10;
                uVar10 = thunk_FUN_01c496e0(*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Dictionary<ICustomEventReceiver,_Transform>>_get_Current__
                                           );
                FUN_02864148(uVar10,lVar16,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_Index>_MoveNext__
                             ,0);
                if (lVar8 == 0) goto LAB_0337ee64;
                *(undefined8 *)(lVar8 + 0x20) = uVar10;
              }
            }
          }
        }
LAB_0337ed94:
        if (*(int *)(*plVar18 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar10 = FUN_0337f350(plVar9);
        if (((lVar8 == 0) || (*(undefined8 *)(lVar8 + 0x10) = uVar10, lVar7 == 0)) ||
           (plVar9 = *(long **)(lVar7 + 0x18), plVar9 == (long *)0x0)) goto LAB_0337ee64;
        lVar16 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar14 != 0) {
          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)
                 Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Dictionary<ICustomEventReceiver,_Transform>>_MoveNext__
               ) {
              puVar11 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_0337ee1c;
            }
            uVar14 = uVar14 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar14 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_01c72498(plVar9,*(long *)
                                       Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Dictionary<ICustomEventReceiver,_Transform>>_MoveNext__
                               ,1);
LAB_0337ee1c:
        (*(code *)*puVar11)(plVar9,uVar6,lVar8,puVar11[1]);
        uVar14 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    return lVar7;
  }
LAB_0337ee64:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


