/*
FUNCTION_NAME: OVRPlugin$$get_audioOutId
ENTRY_POINT: 0337ed10
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_audioOutId(long param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long *plVar12;
  long *unaff_x28;
  long *unaff_x29;
  long *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (FUN_03313b6c(param_1,param_2), unaff_x28 != (long *)0x0) {
    lVar3 = thunk_FUN_01bedf90(*(undefined8 *)
                                (*unaff_x28 +
                                 (ulong)*(ushort *)
                                         (*(long *)
                                           Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
                                         + 0x50) * 0x10 + 0x140));
    uVar4 = (**(code **)(lVar3 + 8))(unaff_x28,unaff_x26,lVar3);
    if (param_1 == 0) break;
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    uVar4 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Dictionary<ICustomEventReceiver,_Transform>>_get_Current__
                              );
    FUN_02864148(uVar4,param_1,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_Index>_MoveNext__,
                 0);
    if (unaff_x25 == 0) break;
    *(undefined8 *)(unaff_x25 + 0x20) = uVar4;
LAB_0337ed94:
    do {
      do {
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar4 = FUN_0337f350(unaff_x26);
        if (((unaff_x25 == 0) || (*(undefined8 *)(unaff_x25 + 0x10) = uVar4, unaff_x22 == 0)) ||
           (plVar12 = *(long **)(unaff_x22 + 0x18), plVar12 == (long *)0x0)) goto LAB_0337ee64;
        lVar3 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)
                 Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Dictionary<ICustomEventReceiver,_Transform>>_MoveNext__
               ) {
              puVar5 = (undefined8 *)(lVar3 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0337ee1c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01c72498(plVar12,*(long *)
                                       Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Dictionary<ICustomEventReceiver,_Transform>>_MoveNext__
                              ,1);
LAB_0337ee1c:
        (*(code *)*puVar5)(plVar12,unaff_x24,unaff_x25,puVar5[1]);
        unaff_x21 = unaff_x21 + 1;
        if ((long)(int)*(uint *)(in_stack_00000010 + 0x18) <= (long)unaff_x21) {
          return;
        }
        if (*(uint *)(in_stack_00000010 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        if (unaff_x20 == (long *)0x0) goto LAB_0337ee64;
        unaff_x24 = *(undefined8 *)(in_stack_00000010 + unaff_x21 * 8 + 0x20);
        lVar3 = (**(code **)(*unaff_x20 + 0x6d8))();
        if (lVar3 == 0) goto LAB_0337ee64;
        if (*(int *)(lVar3 + 0x18) != 1) {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar4 = FUN_03295500(0);
          uVar6 = thunk_FUN_01c273e8(
                                    Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_Dispose__
                                    );
          uVar4 = FUN_0336f2b8(uVar6,uVar4,unaff_x24);
LAB_0337ef24:
          thunk_FUN_01c273e8(PTR_DAT_04231770);
          uVar6 = thunk_FUN_01c496e0();
          FUN_032467a0(uVar6,uVar4,0);
          uVar4 = thunk_FUN_01c273e8(
                                    Method_System_Collections_Generic_Dictionary_Enumerator<string,_JSONNode>_Dispose__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar6,uVar4);
        }
        unaff_x26 = (long *)FUN_02352b88(lVar3,*unaff_x19);
        unaff_x25 = thunk_FUN_01c496e0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Bounds>_MoveNext__
                                      );
        FUN_03313b6c(unaff_x25,0);
        if (unaff_x26 == (long *)0x0) goto LAB_0337ee64;
        iVar2 = (**(code **)(*unaff_x26 + 0x1a8))(unaff_x26,*(undefined8 *)(*unaff_x26 + 0x1b0));
        if (iVar2 == 0x10) {
LAB_0337ea7c:
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar10 = FUN_0337f070(unaff_x26,0);
          if ((uVar10 & 1) != 0) {
            if ((in_stack_00000008 == (long *)0x0) ||
               (uVar4 = FUN_023c14fc(in_stack_00000008,unaff_x26,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_get_Current__
                                    ), unaff_x25 == 0)) goto LAB_0337ee64;
            *(undefined8 *)(unaff_x25 + 0x18) = uVar4;
          }
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar10 = FUN_0337f1bc(unaff_x26,0,0);
          if ((uVar10 & 1) != 0) {
            if ((in_stack_00000008 == (long *)0x0) ||
               (uVar4 = FUN_023c18ac(in_stack_00000008,unaff_x26,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Bounds>_Dispose__
                                    ), unaff_x25 == 0)) goto LAB_0337ee64;
            *(undefined8 *)(unaff_x25 + 0x20) = uVar4;
          }
          goto LAB_0337ed94;
        }
        if (iVar2 != 8) {
          if (iVar2 != 4) {
            thunk_FUN_01c273e8(PTR_DAT_042305b0);
            FUN_019b5f60();
            uVar4 = FUN_03295500(0);
            in_stack_00000018._4_4_ = FUN_0337f054(unaff_x26);
            uVar6 = thunk_FUN_01c273e8(
                                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_MoveNext__
                                      );
            uVar6 = thunk_FUN_01c49334(uVar6,(long)&stack0x00000018 + 4);
            FUN_019b2708(unaff_x26);
            uVar7 = (**(code **)(*unaff_x26 + 0x1b8))(unaff_x26,*(undefined8 *)(*unaff_x26 + 0x1c0))
            ;
            uVar8 = thunk_FUN_01c273e8(
                                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_get_Current__
                                      );
            uVar4 = FUN_033704d4(uVar8,uVar4,uVar6,uVar7);
            goto LAB_0337ef24;
          }
          goto LAB_0337ea7c;
        }
        bVar1 = *(byte *)(*(long *)Jetpack_<SpawnJetpackAndTrailCoroutine>d__24_TypeInfo + 0x130);
        if ((*(byte *)(*unaff_x26 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Jetpack_<SpawnJetpackAndTrailCoroutine>d__24_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(unaff_x26);
        }
        uVar10 = FUN_0321083c(unaff_x26,0);
      } while ((uVar10 & 1) == 0);
      lVar3 = (**(code **)(*unaff_x26 + 0x238))(unaff_x26,*(undefined8 *)(*unaff_x26 + 0x240));
      if (lVar3 == 0) goto LAB_0337ee64;
      lVar9 = *(long *)(lVar3 + 0x18);
      if (lVar9 == 0) {
        uVar4 = (**(code **)(*unaff_x26 + 0x3b8))(unaff_x26,*(undefined8 *)(*unaff_x26 + 0x3c0));
        uVar6 = *(undefined8 *)OVRSimpleJSON_JSONArray_TypeInfo;
        if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
        }
        uVar6 = FUN_032e04b8(uVar6,0);
        uVar10 = FUN_032ea0d4(uVar4,uVar6,0);
        if ((uVar10 & 1) != 0) {
          lVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_Index>_Dispose__
                                    );
          FUN_03313b6c(lVar3,0);
          unaff_x29 = (long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
          if (in_stack_00000008 == (long *)0x0) goto LAB_0337ee64;
          lVar9 = thunk_FUN_01bedf90(*(undefined8 *)
                                      (*in_stack_00000008 +
                                       (ulong)*(ushort *)
                                               (*(long *)
                                                 Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
                                               + 0x50) * 0x10 + 0x140));
          uVar4 = (**(code **)(lVar9 + 8))(in_stack_00000008,unaff_x26,lVar9);
          if (lVar3 == 0) goto LAB_0337ee64;
          *(undefined8 *)(lVar3 + 0x10) = uVar4;
          uVar4 = thunk_FUN_01c496e0(*(undefined8 *)
                                      System_ComponentModel_MaskedTextProvider_TypeInfo);
          FUN_02b6841c(uVar4,lVar3,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<string,_CIELabColor>_get_Current__
                       ,0);
          if (unaff_x25 == 0) goto LAB_0337ee64;
          *(undefined8 *)(unaff_x25 + 0x18) = uVar4;
          goto LAB_0337ed94;
        }
        lVar9 = *(long *)(lVar3 + 0x18);
        unaff_x29 = (long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
      }
      if ((int)lVar9 != 1) goto LAB_0337ed94;
      uVar4 = (**(code **)(*unaff_x26 + 0x3b8))(unaff_x26,*(undefined8 *)(*unaff_x26 + 0x3c0));
      uVar6 = *(undefined8 *)OVRSimpleJSON_JSONArray_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
      }
      uVar6 = FUN_032e04b8(uVar6,0);
      uVar10 = FUN_032e935c(uVar4,uVar6,0);
    } while ((uVar10 & 1) == 0);
    param_1 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_Index>_get_Current__
                                );
    param_2 = 0;
    unaff_x28 = in_stack_00000008;
  }
LAB_0337ee64:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


