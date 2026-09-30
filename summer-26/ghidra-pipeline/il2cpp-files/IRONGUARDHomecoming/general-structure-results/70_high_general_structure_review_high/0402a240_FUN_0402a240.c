/*
FUNCTION_NAME: FUN_0402a240
ENTRY_POINT: 0402a240
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_0402a240(long *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined2 *puVar14;
  long lVar15;
  long *plVar16;
  undefined1 *puVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_28;
  
  if ((DAT_0483c576 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_59);
    thunk_FUN_01efb3a4(PTR_DAT_04585f98);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_IntPtrToByteArray__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__);
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_VerifyWritable__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(PTR_DAT_045861d8);
    thunk_FUN_01efb3a4(PTR_DAT_045861e0);
    thunk_FUN_01efb3a4(PTR_DAT_045861e8);
    thunk_FUN_01efb3a4(PTR_DAT_045861f0);
    thunk_FUN_01efb3a4(PTR_DAT_045861f8);
    thunk_FUN_01efb3a4(PTR_DAT_04586200);
    thunk_FUN_01efb3a4(PTR_DAT_04586208);
    thunk_FUN_01efb3a4(PTR_DAT_04586210);
    thunk_FUN_01efb3a4(PTR_DAT_04586218);
    DAT_0483c576 = 1;
  }
  puVar3 = Method_Oculus_Platform_CAPI_IntPtrToByteArray__;
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar11 = thunk_FUN_01ecaf38(param_1,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar3);
  }
  if (lVar11 == 0) {
LAB_0402abac:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar12 = FUN_035849ac(lVar11,0);
  plVar16 = (long *)
            Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__;
  puVar10 = Method_System_Globalization_Calendar_VerifyWritable__;
  puVar9 = Method_System_Globalization_Calendar_TimeToTicks__;
  puVar8 = Method_System_IO_CStreamReader_Read__;
  puVar7 = Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
  puVar6 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
  puVar5 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  puVar4 = 
  Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
  ;
  puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((uVar12 & 1) == 0) {
    lVar11 = *param_1;
    if (lVar11 == *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__) {
      plVar13 = (long *)FUN_01f08890(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     ,1);
      if (plVar13 != (long *)0x0) {
        if (*param_1 == *(long *)puVar5) {
          lVar11 = thunk_FUN_01f116d0(param_1,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar11 == 0) goto LAB_0402abbc;
          if (*param_1 == *(long *)puVar5) {
            if ((int)plVar13[3] == 0) goto LAB_0402abb8;
            plVar13[4] = (long)param_1;
            thunk_FUN_01f51358(plVar13 + 4,param_1);
            plVar16 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                                );
            puVar19 = (undefined8 *)PTR_DAT_045861f0;
            goto LAB_0402a8d4;
          }
        }
        goto LAB_0402abb0;
      }
    }
    else {
      bVar1 = *(byte *)(lVar11 + 0x130);
      bVar2 = *(byte *)(*(long *)
                         Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__ +
                       0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__)) {
        bVar2 = *(byte *)(*(long *)
                           Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                         + 0x130);
        if ((bVar2 <= bVar1) &&
           (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) ==
            *(long *)
             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
           )) {
          return param_1;
        }
        bVar2 = *(byte *)(*(long *)
                           Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                         + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)
             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__)
           ) {
          bVar2 = *(byte *)(*(long *)StringLiteral_59 + 0x130);
          if ((bVar1 < bVar2) ||
             (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)StringLiteral_59)) {
            if (lVar11 != *(long *)PTR_DAT_04585f98) {
LAB_0402abcc:
              plVar16 = (long *)thunk_FUN_01ecaf38(param_1,0);
              uVar21 = thunk_FUN_01efb3a4(PTR_DAT_04585fa8);
              uVar22 = 0;
              if (plVar16 != (long *)0x0) {
                uVar22 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
              }
              uVar20 = thunk_FUN_01efb3a4(
                                         Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                         );
              uVar21 = FUN_0340ebc0(uVar21,uVar22,uVar20,0);
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
              uVar22 = thunk_FUN_01f117cc();
              Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar22,uVar21,0);
              uVar21 = thunk_FUN_01efb3a4(PTR_DAT_04586220);
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar22,uVar21);
            }
            FUN_0401d4cc(param_1);
          }
          else {
            FUN_0402ac60(param_1);
          }
        }
        else {
          FUN_0401d938(param_1);
        }
        plVar16 = (long *)FUN_0402bd14();
        return plVar16;
      }
      if (param_1[3] != 0) {
        uVar21 = *(undefined8 *)(param_1[3] + 0x18);
        plVar16 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                            );
        FUN_0402bc04(plVar16,uVar21);
        return plVar16;
      }
    }
    goto LAB_0402abac;
  }
  lVar11 = *param_1;
  if (lVar11 != *(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__) {
    if (lVar11 == *(long *)
                   Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
       ) {
      plVar13 = (long *)FUN_01f08890(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     ,1);
      if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar6 + 0x40)) goto LAB_0402abb0;
      puVar17 = (undefined1 *)thunk_FUN_01f11920(param_1);
      local_28 = CONCAT71(local_28._1_7_,*puVar17);
      lVar11 = thunk_FUN_01f113fc(*(undefined8 *)puVar6,&local_28);
      if (plVar13 == (long *)0x0) goto LAB_0402abac;
      if ((lVar11 == 0) ||
         (lVar15 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar15 != 0)) {
        if ((int)plVar13[3] == 0) goto LAB_0402abb8;
        plVar13[4] = lVar11;
        thunk_FUN_01f51358(plVar13 + 4,lVar11);
        plVar16 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                            );
        puVar19 = (undefined8 *)PTR_DAT_045861e0;
        goto LAB_0402a8d4;
      }
    }
    else {
      if (lVar11 == *(long *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__) {
        plVar13 = (long *)FUN_01f08890(*(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       ,1);
        plVar16 = (long *)
                  Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
        ;
      }
      else {
        if (lVar11 != *(long *)
                       Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
           ) {
          if (lVar11 == *(long *)Method_System_Globalization_Calendar_VerifyWritable__) {
            plVar13 = (long *)FUN_01f08890(*(undefined8 *)
                                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                           ,1);
            if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar10 + 0x40)) goto LAB_0402abb0;
            puVar14 = (undefined2 *)thunk_FUN_01f11920(param_1);
            local_28 = CONCAT62(local_28._2_6_,*puVar14);
            lVar11 = thunk_FUN_01f113fc(*(undefined8 *)puVar10,&local_28);
            if (plVar13 == (long *)0x0) goto LAB_0402abac;
            if ((lVar11 != 0) &&
               (lVar15 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
            goto LAB_0402abbc;
            if ((int)plVar13[3] == 0) goto LAB_0402abb8;
            plVar13[4] = lVar11;
            thunk_FUN_01f51358(plVar13 + 4,lVar11);
            plVar16 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                                );
            puVar19 = (undefined8 *)PTR_DAT_045861f8;
          }
          else if (lVar11 == *(long *)
                              Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__) {
            plVar13 = (long *)FUN_01f08890(*(undefined8 *)
                                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                           ,1);
            if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar7 + 0x40)) goto LAB_0402abb0;
            puVar19 = (undefined8 *)thunk_FUN_01f11920(param_1);
            local_28 = *puVar19;
            lVar11 = thunk_FUN_01f113fc(*(undefined8 *)puVar7,&local_28);
            if (plVar13 == (long *)0x0) goto LAB_0402abac;
            if ((lVar11 != 0) &&
               (lVar15 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
            goto LAB_0402abbc;
            if ((int)plVar13[3] == 0) goto LAB_0402abb8;
            plVar13[4] = lVar11;
            thunk_FUN_01f51358(plVar13 + 4,lVar11);
            plVar16 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                                );
            puVar19 = (undefined8 *)PTR_DAT_04586200;
          }
          else if (lVar11 == *(long *)
                              Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                  ) {
            plVar13 = (long *)FUN_01f08890(*(undefined8 *)
                                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                           ,1);
            if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) goto LAB_0402abb0;
            puVar18 = (undefined4 *)thunk_FUN_01f11920(param_1);
            local_28 = CONCAT44(local_28._4_4_,*puVar18);
            lVar11 = thunk_FUN_01f113fc(*(undefined8 *)puVar4,&local_28);
            if (plVar13 == (long *)0x0) goto LAB_0402abac;
            if ((lVar11 != 0) &&
               (lVar15 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
            goto LAB_0402abbc;
            if ((int)plVar13[3] == 0) goto LAB_0402abb8;
            plVar13[4] = lVar11;
            thunk_FUN_01f51358(plVar13 + 4,lVar11);
            plVar16 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                                );
            puVar19 = (undefined8 *)PTR_DAT_045861d8;
          }
          else if (lVar11 == *(long *)Method_System_Globalization_Calendar_TimeToTicks__) {
            plVar13 = (long *)FUN_01f08890(*(undefined8 *)
                                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                           ,1);
            if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar9 + 0x40)) goto LAB_0402abb0;
            puVar19 = (undefined8 *)thunk_FUN_01f11920(param_1);
            local_28 = *puVar19;
            lVar11 = thunk_FUN_01f113fc(*(undefined8 *)puVar9,&local_28);
            if (plVar13 == (long *)0x0) goto LAB_0402abac;
            if ((lVar11 != 0) &&
               (lVar15 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
            goto LAB_0402abbc;
            if ((int)plVar13[3] == 0) goto LAB_0402abb8;
            plVar13[4] = lVar11;
            thunk_FUN_01f51358(plVar13 + 4,lVar11);
            plVar16 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                                );
            puVar19 = (undefined8 *)PTR_DAT_04586210;
          }
          else {
            if (lVar11 != *(long *)Method_System_IO_CStreamReader_Read__) goto LAB_0402abcc;
            plVar13 = (long *)FUN_01f08890(*(undefined8 *)
                                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                           ,1);
            if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar8 + 0x40)) goto LAB_0402abb0;
            puVar14 = (undefined2 *)thunk_FUN_01f11920(param_1);
            local_28 = CONCAT62(local_28._2_6_,*puVar14);
            lVar11 = thunk_FUN_01f113fc(*(undefined8 *)puVar8,&local_28);
            if (plVar13 == (long *)0x0) goto LAB_0402abac;
            if ((lVar11 != 0) &&
               (lVar15 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
            goto LAB_0402abbc;
            if ((int)plVar13[3] == 0) goto LAB_0402abb8;
            plVar13[4] = lVar11;
            thunk_FUN_01f51358(plVar13 + 4,lVar11);
            plVar16 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                                );
            puVar19 = (undefined8 *)PTR_DAT_04586208;
          }
          goto LAB_0402a8d4;
        }
        plVar13 = (long *)FUN_01f08890(*(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       ,1);
      }
      if (*(long *)(*param_1 + 0x40) != *(long *)(*plVar16 + 0x40)) goto LAB_0402abb0;
      puVar17 = (undefined1 *)thunk_FUN_01f11920(param_1);
      local_28 = CONCAT71(local_28._1_7_,*puVar17);
      lVar11 = thunk_FUN_01f113fc(*plVar16,&local_28);
      if (plVar13 == (long *)0x0) goto LAB_0402abac;
      if ((lVar11 == 0) ||
         (lVar15 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar15 != 0)) {
        if ((int)plVar13[3] != 0) {
          plVar13[4] = lVar11;
          thunk_FUN_01f51358(plVar13 + 4,lVar11);
          plVar16 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                              );
          puVar19 = (undefined8 *)PTR_DAT_045861e8;
LAB_0402a8d4:
          uVar21 = *puVar19;
          FUN_035ac8e8(plVar16,0);
          FUN_0402c128(plVar16,uVar21,plVar13);
          return plVar16;
        }
        goto LAB_0402abb8;
      }
    }
LAB_0402abbc:
    uVar21 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar21,0);
  }
  plVar13 = (long *)FUN_01f08890(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                 ,1);
  if (*(long *)(*param_1 + 0x40) == *(long *)(*(long *)puVar3 + 0x40)) {
    puVar18 = (undefined4 *)thunk_FUN_01f11920(param_1);
    local_28 = CONCAT44(local_28._4_4_,*puVar18);
    lVar11 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&local_28);
    if (plVar13 == (long *)0x0) goto LAB_0402abac;
    if ((lVar11 != 0) &&
       (lVar15 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
    goto LAB_0402abbc;
    if ((int)plVar13[3] != 0) {
      plVar13[4] = lVar11;
      thunk_FUN_01f51358(plVar13 + 4,lVar11);
      plVar16 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                          );
      puVar19 = (undefined8 *)PTR_DAT_04586218;
      goto LAB_0402a8d4;
    }
LAB_0402abb8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_0402abb0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08cfc(param_1);
}


