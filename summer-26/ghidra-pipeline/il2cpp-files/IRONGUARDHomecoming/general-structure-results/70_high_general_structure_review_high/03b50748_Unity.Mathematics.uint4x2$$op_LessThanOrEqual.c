/*
FUNCTION_NAME: Unity.Mathematics.uint4x2$$op_LessThanOrEqual
ENTRY_POINT: 03b50748
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_18;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16] Unity_Mathematics_uint4x2__op_LessThanOrEqual(ulong param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined2 *puVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined2 uVar19;
  long lVar20;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auVar21 [16];
  undefined4 uStack0000000000000000;
  undefined1 uStack0000000000000004;
  undefined1 uStack0000000000000005;
  undefined2 uStack0000000000000006;
  undefined4 uStack0000000000000008;
  undefined1 uStack000000000000000c;
  undefined1 uStack000000000000000d;
  undefined2 uStack000000000000000e;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__);
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_VerifyWritable__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Security_Cryptography_DSA_FromXmlString__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                      );
    *(undefined1 *)(unaff_x20 + 0x4f9) = 1;
  }
  puVar9 = Method_System_Security_Cryptography_DSA_FromXmlString__;
  puVar8 = Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__;
  puVar7 = Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__;
  puVar6 = Method_System_Globalization_Calendar_VerifyWritable__;
  puVar5 = Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
  puVar4 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__;
  puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  puVar2 = Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
  if (unaff_x19 == (long *)0x0) {
    uStack0000000000000000 = 0;
    uStack0000000000000004 = 0;
    uStack0000000000000005 = 0;
    uStack0000000000000006 = 0;
    uStack0000000000000008 = 0;
    uStack000000000000000c = 0;
    uStack000000000000000d = 0;
    uStack000000000000000e = 0;
    goto LAB_03b50a6c;
  }
  lVar20 = *unaff_x19;
  if (lVar20 == *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__) {
    auVar21 = FUN_03b4eb4c();
    uStack0000000000000000 = auVar21._0_4_;
    uStack0000000000000004 = auVar21[4];
    uStack0000000000000005 = auVar21[5];
    uStack0000000000000006 = auVar21._6_2_;
    uStack0000000000000008 = auVar21._8_4_;
    uStack000000000000000c = auVar21[0xc];
    uStack000000000000000d = auVar21[0xd];
    uStack000000000000000e = auVar21._14_2_;
    goto LAB_03b50a6c;
  }
  if (lVar20 == *(long *)
                 Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
     ) {
    puVar13 = (undefined1 *)thunk_FUN_01f11920();
    uStack0000000000000004 = *puVar13;
    uStack0000000000000000 = 3;
  }
  else {
    if (lVar20 == *(long *)Method_System_IO_CStreamReader_Read__) {
      puVar14 = (undefined2 *)thunk_FUN_01f11920();
      uVar19 = *puVar14;
      uStack0000000000000000 = 4;
LAB_03b50a2c:
      uStack000000000000000e = 0;
      uStack000000000000000d = 0;
      uStack000000000000000c = 0;
      uStack0000000000000008 = 0;
      uStack0000000000000006 = 0;
      uStack0000000000000004 = (undefined1)uVar19;
      uStack0000000000000005 = (undefined1)((ushort)uVar19 >> 8);
      goto LAB_03b50a6c;
    }
    if (lVar20 == *(long *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__) {
      puVar13 = (undefined1 *)thunk_FUN_01f11920();
      uStack0000000000000004 = *puVar13;
LAB_03b50a48:
      uStack0000000000000000 = 6;
    }
    else {
      if (lVar20 != *(long *)
                     Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
         ) {
        if (lVar20 == *(long *)Method_System_Globalization_Calendar_VerifyWritable__) {
          puVar14 = (undefined2 *)thunk_FUN_01f11920();
          uVar19 = *puVar14;
LAB_03b50aa0:
          uStack0000000000000000 = 7;
        }
        else {
          if (lVar20 != *(long *)Method_System_Security_Cryptography_DSA_FromXmlString__) {
            if (lVar20 == *(long *)
                           Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__) {
LAB_03b50bbc:
              puVar15 = (undefined4 *)thunk_FUN_01f11920();
              uVar10 = *puVar15;
              uStack0000000000000000 = 9;
            }
            else {
              if (lVar20 != *(long *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__)
              {
                if (lVar20 == *(long *)
                               Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__) {
                  puVar16 = (undefined8 *)thunk_FUN_01f11920();
                  uVar12 = *puVar16;
LAB_03b50ad0:
                  uStack0000000000000000 = 0xb;
                }
                else {
                  if (lVar20 == *(long *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                     ) {
                    puVar16 = (undefined8 *)thunk_FUN_01f11920();
                    uVar12 = *puVar16;
                  }
                  else {
                    if (lVar20 == *(long *)
                                   Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                       ) {
                      puVar15 = (undefined4 *)thunk_FUN_01f11920();
                      uVar10 = *puVar15;
                      uStack0000000000000008 = 0;
                      uStack000000000000000c = 0;
                      uStack000000000000000d = 0;
                      uStack000000000000000e = 0;
                      uStack0000000000000000 = 0xd;
                      uStack0000000000000004 = (undefined1)uVar10;
                      uStack0000000000000005 = (undefined1)((uint)uVar10 >> 8);
                      uStack0000000000000006 = (undefined2)((uint)uVar10 >> 0x10);
                      goto LAB_03b50a6c;
                    }
                    if (lVar20 == *(long *)Method_System_Globalization_Calendar_TimeToTicks__) {
                      puVar16 = (undefined8 *)thunk_FUN_01f11920();
                      uVar12 = *puVar16;
                      uStack000000000000000c = 0;
                      uStack000000000000000d = 0;
                      uStack000000000000000e = 0;
                      uStack0000000000000000 = 0xe;
                      uStack0000000000000004 = (undefined1)uVar12;
                      uStack0000000000000005 = (undefined1)((ulong)uVar12 >> 8);
                      uStack0000000000000006 = (undefined2)((ulong)uVar12 >> 0x10);
                      uStack0000000000000008 = (undefined4)((ulong)uVar12 >> 0x20);
                      goto LAB_03b50a6c;
                    }
                    bVar1 = *(byte *)(*(long *)
                                       Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                                     + 0x130);
                    if ((*(byte *)(lVar20 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(lVar20 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)
                         Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                       )) {
switchD_03b509b0_default:
                      thunk_FUN_01efb3a4(StringLiteral_12251);
                      uVar12 = FUN_03406290();
                      thunk_FUN_01efb3a4(
                                        Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__
                                        );
                      uVar17 = thunk_FUN_01f117cc();
                      uVar18 = thunk_FUN_01efb3a4(
                                                 Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                                                 );
                      FUN_034efd98(uVar17,uVar12,uVar18,0);
                      uVar12 = thunk_FUN_01efb3a4(StringLiteral_12252);
                    /* WARNING: Subroutine does not return */
                      FUN_01f08910(uVar17,uVar12);
                    }
                    plVar11 = (long *)thunk_FUN_01ecaf38();
                    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    uVar12 = (**(code **)(*plVar11 + 0x8d8))
                                       (plVar11,*(undefined8 *)(*plVar11 + 0x8e0));
                    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c(*(long *)
                                          Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__)
                      ;
                    }
                    uVar10 = FUN_03585170(uVar12,0);
                    switch(uVar10) {
                    case 5:
                      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)puVar7 + 0x40)) {
LAB_03b50d0c:
                    /* WARNING: Subroutine does not return */
                        FUN_01f08cfc();
                      }
                      puVar13 = (undefined1 *)thunk_FUN_01f11920();
                      uStack0000000000000004 = *puVar13;
                      goto LAB_03b50a60;
                    case 6:
                      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)puVar2 + 0x40))
                      goto LAB_03b50d0c;
                      puVar13 = (undefined1 *)thunk_FUN_01f11920();
                      uStack0000000000000004 = *puVar13;
                      goto LAB_03b50a48;
                    case 7:
                      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)puVar6 + 0x40))
                      goto LAB_03b50d0c;
                      puVar14 = (undefined2 *)thunk_FUN_01f11920();
                      uVar19 = *puVar14;
                      goto LAB_03b50aa0;
                    case 8:
                      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)puVar9 + 0x40))
                      goto LAB_03b50d0c;
                      puVar14 = (undefined2 *)thunk_FUN_01f11920();
                      uVar19 = *puVar14;
                      goto LAB_03b50ab8;
                    case 9:
                      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)puVar3 + 0x40))
                      goto LAB_03b50d0c;
                      goto LAB_03b50bbc;
                    case 10:
                      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)puVar8 + 0x40))
                      goto LAB_03b50d0c;
                      goto LAB_03b50c24;
                    case 0xb:
                      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)puVar5 + 0x40))
                      goto LAB_03b50d0c;
                      puVar16 = (undefined8 *)thunk_FUN_01f11920();
                      uVar12 = *puVar16;
                      goto LAB_03b50ad0;
                    case 0xc:
                      if (*(long *)(*unaff_x19 + 0x40) != *(long *)(*(long *)puVar4 + 0x40))
                      goto LAB_03b50d0c;
                      puVar16 = (undefined8 *)thunk_FUN_01f11920();
                      uVar12 = *puVar16;
                      break;
                    default:
                      goto switchD_03b509b0_default;
                    }
                  }
                  uStack0000000000000000 = 0xc;
                }
                uStack000000000000000e = 0;
                uStack000000000000000d = 0;
                uStack000000000000000c = 0;
                uStack0000000000000004 = (undefined1)uVar12;
                uStack0000000000000005 = (undefined1)((ulong)uVar12 >> 8);
                uStack0000000000000006 = (undefined2)((ulong)uVar12 >> 0x10);
                uStack0000000000000008 = (undefined4)((ulong)uVar12 >> 0x20);
                goto LAB_03b50a6c;
              }
LAB_03b50c24:
              puVar15 = (undefined4 *)thunk_FUN_01f11920();
              uVar10 = *puVar15;
              uStack0000000000000000 = 10;
            }
            uStack000000000000000e = 0;
            uStack000000000000000d = 0;
            uStack000000000000000c = 0;
            uStack0000000000000008 = 0;
            uStack0000000000000004 = (undefined1)uVar10;
            uStack0000000000000005 = (undefined1)((uint)uVar10 >> 8);
            uStack0000000000000006 = (undefined2)((uint)uVar10 >> 0x10);
            goto LAB_03b50a6c;
          }
          puVar14 = (undefined2 *)thunk_FUN_01f11920();
          uVar19 = *puVar14;
LAB_03b50ab8:
          uStack0000000000000000 = 8;
        }
        goto LAB_03b50a2c;
      }
      puVar13 = (undefined1 *)thunk_FUN_01f11920();
      uStack0000000000000004 = *puVar13;
LAB_03b50a60:
      uStack0000000000000000 = 5;
    }
  }
  uStack000000000000000e = 0;
  uStack000000000000000d = 0;
  uStack000000000000000c = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000006 = 0;
  uStack0000000000000005 = 0;
LAB_03b50a6c:
  auVar21[4] = uStack0000000000000004;
  auVar21._0_4_ = uStack0000000000000000;
  auVar21[5] = uStack0000000000000005;
  auVar21._6_2_ = uStack0000000000000006;
  auVar21._8_4_ = uStack0000000000000008;
  auVar21[0xc] = uStack000000000000000c;
  auVar21[0xd] = uStack000000000000000d;
  auVar21._14_2_ = uStack000000000000000e;
  return auVar21;
}


