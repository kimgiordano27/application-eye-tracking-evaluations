/*
FUNCTION_NAME: FUN_0401e348
ENTRY_POINT: 0401e348
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0401e348(long param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  
  if ((DAT_0483c573 & 1) == 0) {
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
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_VerifyWritable__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
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
    thunk_FUN_01efb3a4(PTR_DAT_04585fa0);
    DAT_0483c573 = 1;
  }
  puVar6 = Method_Oculus_Platform_CAPI_IntPtrToByteArray__;
  puVar5 = Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__;
  puVar4 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (param_1 != 0) {
    if (0 < (int)*(ulong *)(param_1 + 0x18)) {
      uVar17 = 0;
      param_3 = param_3 & 0xffffffff;
      uVar13 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
      do {
        if (uVar13 <= uVar17) goto LAB_0401e820;
        plVar15 = *(long **)(param_1 + 0x20 + uVar17 * 8);
        if (plVar15 == (long *)0x0) {
          if (param_3 <= uVar17) goto LAB_0401e820;
          *param_2 = 0;
        }
        else {
          lVar7 = thunk_FUN_01ecaf38(plVar15,0);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar6);
          }
          if (lVar7 == 0) goto LAB_0401e824;
          uVar13 = FUN_035849ac(lVar7,0);
          if ((uVar13 & 1) == 0) {
            lVar7 = *plVar15;
            if (lVar7 == *(long *)puVar4) {
              if (param_3 <= uVar17) goto LAB_0401e820;
              uVar14 = FUN_04025ba0(plVar15);
LAB_0401e6cc:
              *param_2 = uVar14;
            }
            else {
              bVar1 = *(byte *)(lVar7 + 0x130);
              bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
              if ((bVar1 < bVar2) ||
                 (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                bVar2 = *(byte *)(*(long *)
                                   Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                 + 0x130);
                if ((bVar1 < bVar2) ||
                   (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)
                     Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                   )) {
                  bVar2 = *(byte *)(*(long *)
                                     Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                                   + 0x130);
                  if ((bVar1 < bVar2) ||
                     (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
                      *(long *)
                       Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerOutEvent>__
                     )) {
                    bVar2 = *(byte *)(*(long *)StringLiteral_59 + 0x130);
                    if ((bVar1 < bVar2) ||
                       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
                        *(long *)StringLiteral_59)) {
                      if (lVar7 != *(long *)PTR_DAT_04585f98) {
                        plVar15 = (long *)thunk_FUN_01ecaf38(plVar15,0);
                        uVar14 = thunk_FUN_01efb3a4(PTR_DAT_04585fa8);
                        uVar16 = 0;
                        if (plVar15 != (long *)0x0) {
                          uVar16 = (**(code **)(*plVar15 + 0x168))
                                             (plVar15,*(undefined8 *)(*plVar15 + 0x170));
                        }
                        uVar12 = thunk_FUN_01efb3a4(
                                                  Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                                  );
                        uVar14 = FUN_0340ebc0(uVar14,uVar16,uVar12,0);
                        thunk_FUN_01efb3a4(
                                          Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__
                                          );
                        uVar16 = thunk_FUN_01f117cc();
                        Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar16,uVar14,0);
                        uVar14 = thunk_FUN_01efb3a4(PTR_DAT_04585fb0);
                    /* WARNING: Subroutine does not return */
                        FUN_01f08910(uVar16,uVar14);
                      }
                      if (param_3 <= uVar17) goto LAB_0401e820;
                      uVar14 = FUN_0401d4cc(plVar15);
                    }
                    else {
                      if (param_3 <= uVar17) goto LAB_0401e820;
                      uVar14 = FUN_0402ac60(plVar15);
                    }
                  }
                  else {
                    if (param_3 <= uVar17) goto LAB_0401e820;
                    uVar14 = FUN_0401d938(plVar15);
                  }
                  goto LAB_0401e6cc;
                }
                if (param_3 <= uVar17) goto LAB_0401e820;
                lVar7 = plVar15[2];
                uVar14 = 0;
                if (lVar7 != 0) goto LAB_0401e76c;
              }
              else {
                if (param_3 <= uVar17) goto LAB_0401e820;
                lVar7 = plVar15[3];
                if (lVar7 == 0) goto LAB_0401e824;
LAB_0401e76c:
                uVar14 = *(undefined8 *)(lVar7 + 0x18);
              }
LAB_0401e770:
              *param_2 = uVar14;
            }
          }
          else {
            lVar7 = *plVar15;
            if (lVar7 == *(long *)puVar3) {
              if (param_3 <= uVar17) goto LAB_0401e820;
              puVar10 = (undefined4 *)thunk_FUN_01f11920(plVar15);
              *(undefined4 *)param_2 = *puVar10;
            }
            else {
              if (lVar7 == *(long *)
                            Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                 ) {
LAB_0401e6d4:
                if (param_3 <= uVar17) {
LAB_0401e820:
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
              }
              else {
                if (lVar7 != *(long *)
                              Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__) {
                  if (lVar7 != *(long *)
                                Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                     ) {
                    if (lVar7 == *(long *)Method_System_Globalization_Calendar_VerifyWritable__) {
LAB_0401e590:
                      if (param_3 <= uVar17) goto LAB_0401e820;
                      puVar8 = (undefined2 *)thunk_FUN_01f11920(plVar15);
                      *(undefined2 *)param_2 = *puVar8;
                    }
                    else {
                      if (lVar7 == *(long *)
                                    Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__
                         ) {
                        if (param_3 <= uVar17) goto LAB_0401e820;
                        puVar11 = (undefined8 *)thunk_FUN_01f11920(plVar15);
                        uVar14 = *puVar11;
                        goto LAB_0401e770;
                      }
                      if (lVar7 == *(long *)
                                    Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                         ) {
                        if (param_3 <= uVar17) goto LAB_0401e820;
                        puVar10 = (undefined4 *)thunk_FUN_01f11920(plVar15);
                        *(undefined4 *)param_2 = *puVar10;
                      }
                      else if (lVar7 == *(long *)Method_System_Globalization_Calendar_TimeToTicks__)
                      {
                        if (param_3 <= uVar17) goto LAB_0401e820;
                        puVar11 = (undefined8 *)thunk_FUN_01f11920(plVar15);
                        *param_2 = *puVar11;
                      }
                      else if (lVar7 == *(long *)Method_System_IO_CStreamReader_Read__)
                      goto LAB_0401e590;
                    }
                    goto LAB_0401e774;
                  }
                  goto LAB_0401e6d4;
                }
                if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0)
                    == 0) {
                  thunk_FUN_01ee6d7c();
                }
                FUN_0403f2cc(*(undefined8 *)PTR_DAT_04585fa0,0);
                if (param_3 <= uVar17) goto LAB_0401e820;
                if (*(long *)(*plVar15 + 0x40) !=
                    *(long *)(*(long *)
                               Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__ +
                             0x40)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08cfc(plVar15);
                }
              }
              puVar9 = (undefined1 *)thunk_FUN_01f11920(plVar15);
              *(undefined1 *)param_2 = *puVar9;
            }
          }
        }
LAB_0401e774:
        uVar13 = (ulong)*(uint *)(param_1 + 0x18);
        uVar17 = uVar17 + 1;
        param_2 = param_2 + 1;
      } while ((long)uVar17 < (long)(int)*(uint *)(param_1 + 0x18));
    }
    return;
  }
LAB_0401e824:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


