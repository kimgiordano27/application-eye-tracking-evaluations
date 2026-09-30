/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vqmovnd_u64
ENTRY_POINT: 039d7774
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_11;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 Unity_Burst_Intrinsics_Arm_Neon__vqmovnd_u64(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  undefined8 in_stack_00000008;
  
  uVar3 = FUN_039c8f78();
  puVar2 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
  switch(uVar3) {
  case 4:
    uVar5 = *(undefined8 *)(unaff_x21 + 0x10);
    plVar1 = (long *)Method_System_IO_CStreamReader_Read__;
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      plVar1 = (long *)Method_System_IO_CStreamReader_Read__;
    }
    goto joined_r0x039d7974;
  case 5:
    uVar5 = *(undefined8 *)(unaff_x21 + 0x10);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (unaff_x20 == (long *)0x0) goto LAB_039d7b44;
    if (*(long *)(*unaff_x20 + 0x40) ==
        *(long *)(*(long *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                 + 0x40)) {
      puVar4 = (undefined1 *)thunk_FUN_01f11920();
      FUN_0359ea78(uVar5,*puVar4,0);
      break;
    }
    goto LAB_039d7b48;
  case 6:
    uVar5 = *(undefined8 *)(unaff_x21 + 0x10);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (unaff_x20 == (long *)0x0) goto LAB_039d7b44;
    if (*(long *)(*unaff_x20 + 0x40) !=
        *(long *)(*(long *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__ + 0x40
                 )) goto LAB_039d7b48;
    puVar4 = (undefined1 *)thunk_FUN_01f11920();
    FUN_0359f1a8(uVar5,*puVar4,0);
    break;
  case 7:
    uVar5 = *(undefined8 *)(unaff_x21 + 0x10);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (unaff_x20 == (long *)0x0) goto LAB_039d7b44;
    if (*(long *)(*unaff_x20 + 0x40) !=
        *(long *)(*(long *)Method_System_Globalization_Calendar_VerifyWritable__ + 0x40))
    goto LAB_039d7b48;
    puVar6 = (undefined2 *)thunk_FUN_01f11920();
    FUN_0359ec44(uVar5,*puVar6,0);
    break;
  case 8:
    uVar5 = *(undefined8 *)(unaff_x21 + 0x10);
    plVar1 = (long *)Method_System_Security_Cryptography_DSA_FromXmlString__;
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      plVar1 = (long *)Method_System_Security_Cryptography_DSA_FromXmlString__;
    }
joined_r0x039d7974:
    if (unaff_x20 == (long *)0x0) {
LAB_039d7b44:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*plVar1 + 0x40)) {
LAB_039d7b48:
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar6 = (undefined2 *)thunk_FUN_01f11920();
    FUN_0359f374(uVar5,*puVar6,0);
    break;
  case 9:
    uVar5 = *(undefined8 *)(unaff_x21 + 0x10);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (unaff_x20 == (long *)0x0) goto LAB_039d7b44;
    if (*(long *)(*unaff_x20 + 0x40) !=
        *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ +
                 0x40)) goto LAB_039d7b48;
    puVar7 = (undefined4 *)thunk_FUN_01f11920();
    FUN_0359e8ac(uVar5,*puVar7,0);
    break;
  case 10:
    uVar5 = *(undefined8 *)(unaff_x21 + 0x10);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (unaff_x20 == (long *)0x0) goto LAB_039d7b44;
    if (*(long *)(*unaff_x20 + 0x40) !=
        *(long *)(*(long *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__ + 0x40))
    goto LAB_039d7b48;
    puVar7 = (undefined4 *)thunk_FUN_01f11920();
    FUN_0359efdc(uVar5,*puVar7,0);
    break;
  case 0xb:
    uVar5 = *(undefined8 *)(unaff_x21 + 0x10);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (unaff_x20 == (long *)0x0) goto LAB_039d7b44;
    if (*(long *)(*unaff_x20 + 0x40) !=
        *(long *)(*(long *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__ + 0x40))
    goto LAB_039d7b48;
    puVar8 = (undefined8 *)thunk_FUN_01f11920();
    FUN_0359ee10(uVar5,*puVar8,0);
    break;
  case 0xc:
    uVar5 = *(undefined8 *)(unaff_x21 + 0x10);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (unaff_x20 == (long *)0x0) goto LAB_039d7b44;
    if (*(long *)(*unaff_x20 + 0x40) !=
        *(long *)(*(long *)
                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                 + 0x40)) goto LAB_039d7b48;
    puVar8 = (undefined8 *)thunk_FUN_01f11920();
    FUN_0359e488(uVar5,*puVar8,0);
    break;
  default:
    if (unaff_x20 == (long *)0x0) goto LAB_039d7b44;
    if (*(long *)(*unaff_x20 + 0x40) !=
        *(long *)(*(long *)
                   Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                 + 0x40)) goto LAB_039d7b48;
    uVar9 = *(undefined8 *)(unaff_x21 + 0x10);
    puVar4 = (undefined1 *)thunk_FUN_01f11920();
    in_stack_00000008._4_1_ = *puVar4;
    uVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,(long)&stack0x00000008 + 4);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                        );
    }
    FUN_0359df7c(uVar9,uVar5,0);
  }
  FUN_039a7ae8();
  return 1;
}


