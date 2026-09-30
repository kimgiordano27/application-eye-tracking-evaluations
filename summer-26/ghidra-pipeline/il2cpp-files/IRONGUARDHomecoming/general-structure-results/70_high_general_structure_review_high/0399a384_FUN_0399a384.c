/*
FUNCTION_NAME: FUN_0399a384
ENTRY_POINT: 0399a384
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0399a384(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined2 local_b8 [2];
  undefined1 local_b4 [4];
  undefined8 local_b0;
  undefined2 local_a8 [2];
  undefined2 local_a4 [2];
  undefined1 local_a0 [4];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  puVar11 = StringLiteral_4706;
  puVar10 = Method_System_Security_Cryptography_DSA_FromXmlString__;
  puVar8 = Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__;
  puVar7 = Method_System_Globalization_Calendar_VerifyWritable__;
  puVar6 = Method_System_IO_CStreamReader_Read__;
  puVar5 = Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
  puVar4 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
  puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  puVar2 = Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_048386a8 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__);
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(Method_System_Numerics_BigNumber_FormatBigInteger__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_VerifyWritable__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Security_Cryptography_DSA_FromXmlString__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                      );
    thunk_FUN_01efb3a4(StringLiteral_4706);
    DAT_048386a8 = 1;
  }
  puVar9 = Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__;
  local_84[0] = 0;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar4,local_84);
  **(undefined8 **)(*(long *)puVar11 + 0xb8) = uVar12;
  thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar11 + 0xb8),uVar12);
  local_88[0] = 1;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar4,local_88);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 8);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  local_8c = 0xffffffff;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&local_8c);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x10);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  local_90 = 0;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&local_90);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x18);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  local_94 = 1;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&local_94);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x20);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  local_98 = 2;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&local_98);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x28);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  local_9c = 3;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&local_9c);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x30);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  local_a0[0] = 0;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar8,local_a0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x38);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  local_a4[0] = 0;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar6,local_a4);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x40);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  local_a8[0] = 0;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar7,local_a8);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x48);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  local_b0 = 0;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar5,&local_b0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x50);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  local_b4[0] = 0;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,local_b4);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x58);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  local_b8[0] = 0;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar10,local_b8);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x60);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  local_bc = 0;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)
                               Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__,
                              &local_bc);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x68);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  local_c8 = 0;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)
                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                              ,&local_c8);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x70);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  local_cc = 0;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)
                               Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                              ,&local_cc);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x78);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  local_d8 = 0;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__,
                              &local_d8);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x80);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  puVar2 = Method_System_Numerics_BigNumber_FormatBigInteger__;
  lVar13 = *(long *)Method_System_Numerics_BigNumber_FormatBigInteger__;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar13 = *(long *)puVar2;
  }
  uStack_78 = (*(undefined8 **)(lVar13 + 0xb8))[1];
  local_80 = **(undefined8 **)(lVar13 + 0xb8);
  uVar12 = thunk_FUN_01f113fc(lVar13,&local_80);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x88);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  local_e0 = 0;
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)
                               Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__,
                              &local_e0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x90);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar12 = FUN_03980e14(uVar12,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x98);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  uVar12 = FUN_03980e14(**(undefined8 **)(*(long *)puVar11 + 0xb8),0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xa0);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  uVar12 = FUN_03980e14(*(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x10),0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xa8);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  uVar12 = FUN_03980e14(*(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x18),0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xb0);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  uVar12 = FUN_03980e14(*(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x20),0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xb8);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  uVar12 = FUN_03980e14(*(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x28),0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xc0);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  uVar12 = FUN_03980e14(*(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x30),0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 200);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  uVar12 = FUN_03980e70(0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xd0);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  uVar12 = FUN_03980e14(0,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xd8);
  *puVar14 = uVar12;
  thunk_FUN_01f51358(puVar14,uVar12);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


