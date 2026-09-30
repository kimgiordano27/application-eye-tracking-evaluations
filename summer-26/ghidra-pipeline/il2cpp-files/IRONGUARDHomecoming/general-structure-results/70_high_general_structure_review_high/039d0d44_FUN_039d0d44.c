/*
FUNCTION_NAME: FUN_039d0d44
ENTRY_POINT: 039d0d44
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_039d0d44(long param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_04838900 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__);
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(StringLiteral_5686);
    thunk_FUN_01efb3a4(Method_System_Numerics_BigNumber_FormatBigInteger__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
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
    DAT_04838900 = 1;
  }
  puVar2 = Method_System_Numerics_BigNumber_FormatBigInteger__;
  uVar3 = local_48._4_4_;
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 3:
    uVar4 = *(undefined8 *)
             Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
    local_48[0] = param_2 != 0;
    goto LAB_039d0f84;
  case 4:
    puVar6 = (undefined8 *)Method_System_IO_CStreamReader_Read__;
    break;
  case 5:
    puVar6 = (undefined8 *)
             Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__;
    if (0x7f < param_2) goto LAB_039d0fac;
    goto LAB_039d0f0c;
  case 6:
    puVar6 = (undefined8 *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
    if (0xff < param_2) goto LAB_039d0fac;
LAB_039d0f0c:
    uVar4 = *puVar6;
    local_48[0] = (char)param_2;
    goto LAB_039d0f84;
  case 7:
    puVar6 = (undefined8 *)Method_System_Globalization_Calendar_VerifyWritable__;
    if (0x7fff < param_2) goto LAB_039d0fac;
    goto LAB_039d0f34;
  case 8:
    puVar6 = (undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
    break;
  case 9:
    puVar6 = (undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    goto LAB_039d0f48;
  case 10:
    puVar6 = (undefined8 *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__;
LAB_039d0f48:
    uVar4 = *puVar6;
    local_48._0_4_ = param_2;
    local_48._0_8_ = CONCAT44(uVar3,local_48._0_4_);
    goto LAB_039d0f84;
  case 0xb:
    puVar6 = (undefined8 *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
    goto Unity_Burst_Intrinsics_Arm_Neon__vmlsl_high_u32;
  case 0xc:
    puVar6 = (undefined8 *)
             Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__;
Unity_Burst_Intrinsics_Arm_Neon__vmlsl_high_u32:
    uVar4 = *puVar6;
    local_48._0_8_ = (long)param_2;
    goto LAB_039d0f84;
  case 0xd:
    local_48._0_4_ = (float)param_2;
    local_48._0_8_ = CONCAT44(uVar3,local_48._0_4_);
    puVar6 = (undefined8 *)
             Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
    ;
    goto LAB_039d0f7c;
  case 0xe:
    local_48._0_8_ = (undefined8)param_2;
    puVar6 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
LAB_039d0f7c:
    uVar4 = *puVar6;
    goto LAB_039d0f84;
  case 0xf:
    if (*(int *)(*(long *)Method_System_Numerics_BigNumber_FormatBigInteger__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    local_48 = FUN_035c85a4(param_2,0);
    uVar4 = *(undefined8 *)puVar2;
    goto LAB_039d0f84;
  default:
    uVar4 = FUN_039c30b8();
    uVar5 = thunk_FUN_01efb3a4(StringLiteral_5686);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar5);
  }
  if (0xffff < param_2) {
LAB_039d0fac:
    uVar4 = FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,*(undefined8 *)StringLiteral_5686);
  }
LAB_039d0f34:
  uVar4 = *puVar6;
  local_48._0_2_ = (short)param_2;
LAB_039d0f84:
  thunk_FUN_01f113fc(uVar4,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


