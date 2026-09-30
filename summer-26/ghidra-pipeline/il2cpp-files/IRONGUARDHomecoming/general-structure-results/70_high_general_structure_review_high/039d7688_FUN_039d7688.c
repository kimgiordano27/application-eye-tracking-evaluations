/*
FUNCTION_NAME: FUN_039d7688
ENTRY_POINT: 039d7688
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_039d7688(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 local_24 [4];
  
  if ((DAT_0483894a & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__);
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_VerifyWritable__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_4506);
    thunk_FUN_01efb3a4(Method_System_Security_Cryptography_DSA_FromXmlString__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                      );
    DAT_0483894a = 1;
  }
  puVar2 = StringLiteral_4506;
  if (param_2 == 0) goto LAB_039d7b44;
  plVar4 = (long *)System_Net_Sockets_TcpListener__Start(param_2,0);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar3 = FUN_039c8f78(uVar10);
  puVar2 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
  switch(uVar3) {
  case 4:
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    plVar1 = (long *)Method_System_IO_CStreamReader_Read__;
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      plVar1 = (long *)Method_System_IO_CStreamReader_Read__;
    }
    goto joined_r0x039d7974;
  case 5:
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (plVar4 == (long *)0x0) goto LAB_039d7b44;
    if (*(long *)(*plVar4 + 0x40) ==
        *(long *)(*(long *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                 + 0x40)) {
      puVar5 = (undefined1 *)thunk_FUN_01f11920(plVar4);
      uVar10 = FUN_0359ea78(uVar10,*puVar5,0);
      break;
    }
    goto LAB_039d7b48;
  case 6:
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (plVar4 == (long *)0x0) goto LAB_039d7b44;
    if (*(long *)(*plVar4 + 0x40) !=
        *(long *)(*(long *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__ + 0x40
                 )) goto LAB_039d7b48;
    puVar5 = (undefined1 *)thunk_FUN_01f11920(plVar4);
    uVar10 = FUN_0359f1a8(uVar10,*puVar5,0);
    break;
  case 7:
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (plVar4 == (long *)0x0) goto LAB_039d7b44;
    if (*(long *)(*plVar4 + 0x40) !=
        *(long *)(*(long *)Method_System_Globalization_Calendar_VerifyWritable__ + 0x40))
    goto LAB_039d7b48;
    puVar6 = (undefined2 *)thunk_FUN_01f11920(plVar4);
    uVar10 = FUN_0359ec44(uVar10,*puVar6,0);
    break;
  case 8:
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    plVar1 = (long *)Method_System_Security_Cryptography_DSA_FromXmlString__;
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      plVar1 = (long *)Method_System_Security_Cryptography_DSA_FromXmlString__;
    }
joined_r0x039d7974:
    if (plVar4 == (long *)0x0) {
LAB_039d7b44:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar4 + 0x40) != *(long *)(*plVar1 + 0x40)) {
LAB_039d7b48:
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar4);
    }
    puVar6 = (undefined2 *)thunk_FUN_01f11920(plVar4);
    uVar10 = FUN_0359f374(uVar10,*puVar6,0);
    break;
  case 9:
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (plVar4 == (long *)0x0) goto LAB_039d7b44;
    if (*(long *)(*plVar4 + 0x40) !=
        *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ +
                 0x40)) goto LAB_039d7b48;
    puVar7 = (undefined4 *)thunk_FUN_01f11920(plVar4);
    uVar10 = FUN_0359e8ac(uVar10,*puVar7,0);
    break;
  case 10:
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (plVar4 == (long *)0x0) goto LAB_039d7b44;
    if (*(long *)(*plVar4 + 0x40) !=
        *(long *)(*(long *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__ + 0x40))
    goto LAB_039d7b48;
    puVar7 = (undefined4 *)thunk_FUN_01f11920(plVar4);
    uVar10 = FUN_0359efdc(uVar10,*puVar7,0);
    break;
  case 0xb:
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (plVar4 == (long *)0x0) goto LAB_039d7b44;
    if (*(long *)(*plVar4 + 0x40) !=
        *(long *)(*(long *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__ + 0x40))
    goto LAB_039d7b48;
    puVar8 = (undefined8 *)thunk_FUN_01f11920(plVar4);
    uVar10 = FUN_0359ee10(uVar10,*puVar8,0);
    break;
  case 0xc:
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (plVar4 == (long *)0x0) goto LAB_039d7b44;
    if (*(long *)(*plVar4 + 0x40) !=
        *(long *)(*(long *)
                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                 + 0x40)) goto LAB_039d7b48;
    puVar8 = (undefined8 *)thunk_FUN_01f11920(plVar4);
    uVar10 = FUN_0359e488(uVar10,*puVar8,0);
    break;
  default:
    if (plVar4 == (long *)0x0) goto LAB_039d7b44;
    if (*(long *)(*plVar4 + 0x40) !=
        *(long *)(*(long *)
                   Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                 + 0x40)) goto LAB_039d7b48;
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    puVar5 = (undefined1 *)thunk_FUN_01f11920(plVar4);
    local_24[0] = *puVar5;
    uVar10 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,local_24);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                        );
    }
    uVar10 = FUN_0359df7c(uVar9,uVar10,0);
  }
  FUN_039a7ae8(param_2,uVar10,0);
  return 1;
}


