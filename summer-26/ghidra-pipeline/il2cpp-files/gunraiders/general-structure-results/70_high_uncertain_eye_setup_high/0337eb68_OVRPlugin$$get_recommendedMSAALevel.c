/*
FUNCTION_NAME: OVRPlugin$$get_recommendedMSAALevel
ENTRY_POINT: 0337eb68
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_recommendedMSAALevel(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long *plVar11;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 uVar12;
  long *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (param_1 != 0) {
    lVar9 = *(long *)(param_1 + 0x18);
    if (lVar9 == 0) {
      uVar3 = (**(code **)(*unaff_x26 + 0x3b8))(unaff_x26,*(undefined8 *)(*unaff_x26 + 0x3c0));
      uVar12 = *(undefined8 *)OVRSimpleJSON_JSONArray_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
      }
      uVar12 = FUN_032e04b8(uVar12,0);
      uVar4 = FUN_032ea0d4(uVar3,uVar12,0);
      if ((uVar4 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0x18);
        unaff_x28 = in_stack_00000008;
        unaff_x29 = (long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
        goto LAB_0337ec88;
      }
      lVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_Index>_Dispose__
                                );
      FUN_03313b6c(lVar9,0);
      unaff_x29 = (long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
      if (in_stack_00000008 == (long *)0x0) break;
      lVar5 = thunk_FUN_01bedf90(*(undefined8 *)
                                  (*in_stack_00000008 +
                                   (ulong)*(ushort *)
                                           (*(long *)
                                             Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
                                           + 0x50) * 0x10 + 0x140));
      uVar3 = (**(code **)(lVar5 + 8))(in_stack_00000008,unaff_x26,lVar5);
      if (lVar9 == 0) break;
      *(undefined8 *)(lVar9 + 0x10) = uVar3;
      uVar3 = thunk_FUN_01c496e0(*(undefined8 *)System_ComponentModel_MaskedTextProvider_TypeInfo);
      FUN_02b6841c(uVar3,lVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<string,_CIELabColor>_get_Current__
                   ,0);
      if (unaff_x25 == 0) break;
      *(undefined8 *)(unaff_x25 + 0x18) = uVar3;
      unaff_x28 = in_stack_00000008;
    }
    else {
LAB_0337ec88:
      if ((int)lVar9 == 1) {
        uVar3 = (**(code **)(*unaff_x26 + 0x3b8))(unaff_x26,*(undefined8 *)(*unaff_x26 + 0x3c0));
        uVar12 = *(undefined8 *)OVRSimpleJSON_JSONArray_TypeInfo;
        if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
        }
        uVar12 = FUN_032e04b8(uVar12,0);
        uVar4 = FUN_032e935c(uVar3,uVar12,0);
        unaff_x28 = in_stack_00000008;
        if ((uVar4 & 1) != 0) {
          lVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_Index>_get_Current__
                                    );
          FUN_03313b6c(lVar9,0);
          if (in_stack_00000008 == (long *)0x0) break;
          lVar5 = thunk_FUN_01bedf90(*(undefined8 *)
                                      (*in_stack_00000008 +
                                       (ulong)*(ushort *)
                                               (*(long *)
                                                 Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
                                               + 0x50) * 0x10 + 0x140));
          uVar3 = (**(code **)(lVar5 + 8))(in_stack_00000008,unaff_x26,lVar5);
          if (lVar9 == 0) break;
          *(undefined8 *)(lVar9 + 0x10) = uVar3;
          uVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Dictionary<ICustomEventReceiver,_Transform>>_get_Current__
                                    );
          FUN_02864148(uVar3,lVar9,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<string,_Index>_MoveNext__
                       ,0);
          if (unaff_x25 == 0) break;
          *(undefined8 *)(unaff_x25 + 0x20) = uVar3;
        }
      }
    }
LAB_0337ed94:
    do {
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar3 = FUN_0337f350(unaff_x26);
      if (((unaff_x25 == 0) || (*(undefined8 *)(unaff_x25 + 0x10) = uVar3, unaff_x22 == 0)) ||
         (plVar11 = *(long **)(unaff_x22 + 0x18), plVar11 == (long *)0x0)) goto LAB_0337ee64;
      lVar9 = *plVar11;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Dictionary<ICustomEventReceiver,_Transform>>_MoveNext__
             ) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0337ee1c;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01c72498(plVar11,*(long *)
                                     Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Dictionary<ICustomEventReceiver,_Transform>>_MoveNext__
                            ,1);
LAB_0337ee1c:
      (*(code *)*puVar6)(plVar11,unaff_x24,unaff_x25,puVar6[1]);
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
      lVar9 = (**(code **)(*unaff_x20 + 0x6d8))();
      if (lVar9 == 0) goto LAB_0337ee64;
      if (*(int *)(lVar9 + 0x18) != 1) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar3 = FUN_03295500(0);
        uVar12 = thunk_FUN_01c273e8(
                                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_Dispose__
                                   );
        uVar3 = FUN_0336f2b8(uVar12,uVar3,unaff_x24);
LAB_0337ef24:
        thunk_FUN_01c273e8(PTR_DAT_04231770);
        uVar12 = thunk_FUN_01c496e0();
        FUN_032467a0(uVar12,uVar3,0);
        uVar3 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_JSONNode>_Dispose__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar12,uVar3);
      }
      unaff_x26 = (long *)FUN_02352b88(lVar9,*unaff_x19);
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
        uVar4 = FUN_0337f070(unaff_x26,0);
        if ((uVar4 & 1) != 0) {
          if ((unaff_x28 == (long *)0x0) ||
             (uVar3 = FUN_023c14fc(unaff_x28,unaff_x26,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_get_Current__
                                  ), unaff_x25 == 0)) goto LAB_0337ee64;
          *(undefined8 *)(unaff_x25 + 0x18) = uVar3;
        }
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar4 = FUN_0337f1bc(unaff_x26,0,0);
        if ((uVar4 & 1) != 0) {
          if ((unaff_x28 == (long *)0x0) ||
             (uVar3 = FUN_023c18ac(unaff_x28,unaff_x26,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Bounds>_Dispose__
                                  ), unaff_x25 == 0)) goto LAB_0337ee64;
          *(undefined8 *)(unaff_x25 + 0x20) = uVar3;
        }
        goto LAB_0337ed94;
      }
      if (iVar2 != 8) {
        if (iVar2 != 4) {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar3 = FUN_03295500(0);
          in_stack_00000018._4_4_ = FUN_0337f054(unaff_x26);
          uVar12 = thunk_FUN_01c273e8(
                                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_MoveNext__
                                     );
          uVar12 = thunk_FUN_01c49334(uVar12,(long)&stack0x00000018 + 4);
          FUN_019b2708(unaff_x26);
          uVar7 = (**(code **)(*unaff_x26 + 0x1b8))(unaff_x26,*(undefined8 *)(*unaff_x26 + 0x1c0));
          uVar8 = thunk_FUN_01c273e8(
                                    Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_get_Current__
                                    );
          uVar3 = FUN_033704d4(uVar8,uVar3,uVar12,uVar7);
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
      uVar4 = FUN_0321083c(unaff_x26,0);
    } while ((uVar4 & 1) == 0);
    param_1 = (**(code **)(*unaff_x26 + 0x238))(unaff_x26,*(undefined8 *)(*unaff_x26 + 0x240));
  }
LAB_0337ee64:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


