/*
FUNCTION_NAME: FUN_0359df7c
ENTRY_POINT: 0359df7c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_11;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0359df7c(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_048334be & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__);
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_VerifyWritable__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                      );
    thunk_FUN_01efb3a4(Method_System_Security_Cryptography_DSA_FromXmlString__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                      );
    DAT_048334be = 1;
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                              );
    FUN_034efd20(uVar6,uVar7,0);
    uVar7 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshr_n_s64__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar7);
  }
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ + 0xe0
              ) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar1 = FUN_034fe618(param_2,0);
  switch(uVar1) {
  case 3:
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (*(long *)(*param_2 + 0x40) ==
        *(long *)(*(long *)
                   Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                 + 0x40)) {
      puVar2 = (undefined1 *)thunk_FUN_01f11920(param_2);
      FUN_0359f70c(param_1,*puVar2);
      return;
    }
    break;
  case 4:
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (*(long *)(*param_2 + 0x40) ==
        *(long *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0x40)) {
      puVar3 = (undefined2 *)thunk_FUN_01f11920(param_2);
      FUN_0359f540(param_1,*puVar3);
      return;
    }
    break;
  case 5:
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (*(long *)(*param_2 + 0x40) ==
        *(long *)(*(long *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                 + 0x40)) {
      puVar2 = (undefined1 *)thunk_FUN_01f11920(param_2);
      FUN_0359ea78(param_1,*puVar2);
      return;
    }
    break;
  case 6:
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (*(long *)(*param_2 + 0x40) ==
        *(long *)(*(long *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__ + 0x40
                 )) {
      puVar2 = (undefined1 *)thunk_FUN_01f11920(param_2);
      FUN_0359f1a8(param_1,*puVar2);
      return;
    }
    break;
  case 7:
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (*(long *)(*param_2 + 0x40) ==
        *(long *)(*(long *)Method_System_Globalization_Calendar_VerifyWritable__ + 0x40)) {
      puVar3 = (undefined2 *)thunk_FUN_01f11920(param_2);
      FUN_0359ec44(param_1,*puVar3);
      return;
    }
    break;
  case 8:
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (*(long *)(*param_2 + 0x40) ==
        *(long *)(*(long *)Method_System_Security_Cryptography_DSA_FromXmlString__ + 0x40)) {
      puVar3 = (undefined2 *)thunk_FUN_01f11920(param_2);
      FUN_0359f374(param_1,*puVar3);
      return;
    }
    break;
  case 9:
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (*(long *)(*param_2 + 0x40) ==
        *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ +
                 0x40)) {
      puVar4 = (undefined4 *)thunk_FUN_01f11920(param_2);
      FUN_0359e8ac(param_1,*puVar4);
      return;
    }
    break;
  case 10:
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (*(long *)(*param_2 + 0x40) ==
        *(long *)(*(long *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__ + 0x40)) {
      puVar4 = (undefined4 *)thunk_FUN_01f11920(param_2);
      FUN_0359efdc(param_1,*puVar4);
      return;
    }
    break;
  case 0xb:
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (*(long *)(*param_2 + 0x40) ==
        *(long *)(*(long *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__ + 0x40))
    {
      puVar5 = (undefined8 *)thunk_FUN_01f11920(param_2);
      FUN_0359ee10(param_1,*puVar5);
      return;
    }
    break;
  case 0xc:
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (*(long *)(*param_2 + 0x40) ==
        *(long *)(*(long *)
                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                 + 0x40)) {
      puVar5 = (undefined8 *)thunk_FUN_01f11920(param_2);
      FUN_0359e488(param_1,*puVar5);
      return;
    }
    break;
  default:
    uVar6 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_u8__);
    uVar6 = FUN_035ac8e0(uVar6,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                              );
    FUN_034efd98(uVar7,uVar6,uVar8,0);
    uVar6 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshr_n_s64__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,uVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08cfc(param_2);
}


