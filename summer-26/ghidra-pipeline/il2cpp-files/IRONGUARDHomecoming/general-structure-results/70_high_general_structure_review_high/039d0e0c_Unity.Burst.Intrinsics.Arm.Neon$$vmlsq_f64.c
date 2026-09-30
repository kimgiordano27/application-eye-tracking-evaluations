/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vmlsq_f64
ENTRY_POINT: 039d0e0c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Unity_Burst_Intrinsics_Arm_Neon__vmlsq_f64(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  double in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                    );
  *(undefined1 *)(unaff_x22 + 0x900) = 1;
  puVar1 = Method_System_Numerics_BigNumber_FormatBigInteger__;
  uVar2 = in_stack_00000008._4_4_;
  switch(*(undefined4 *)(unaff_x20 + 0x14)) {
  case 3:
    uVar3 = *(undefined8 *)
             Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
    in_stack_00000008 = (double)CONCAT71(in_stack_00000008._1_7_,unaff_w19 != 0);
    goto LAB_039d0f84;
  case 4:
    puVar5 = (undefined8 *)Method_System_IO_CStreamReader_Read__;
    break;
  case 5:
    puVar5 = (undefined8 *)
             Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__;
    if (0x7f < unaff_w19) goto LAB_039d0fac;
    goto LAB_039d0f0c;
  case 6:
    puVar5 = (undefined8 *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
    if (0xff < unaff_w19) goto LAB_039d0fac;
LAB_039d0f0c:
    uVar3 = *puVar5;
    in_stack_00000008 = (double)CONCAT71(in_stack_00000008._1_7_,(char)unaff_w19);
    goto LAB_039d0f84;
  case 7:
    puVar5 = (undefined8 *)Method_System_Globalization_Calendar_VerifyWritable__;
    if (0x7fff < unaff_w19) goto LAB_039d0fac;
    goto LAB_039d0f34;
  case 8:
    puVar5 = (undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
    break;
  case 9:
    puVar5 = (undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    goto LAB_039d0f48;
  case 10:
    puVar5 = (undefined8 *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__;
LAB_039d0f48:
    uVar3 = *puVar5;
    in_stack_00000008 = (double)CONCAT44(uVar2,unaff_w19);
    goto LAB_039d0f84;
  case 0xb:
    puVar5 = (undefined8 *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
    goto Unity_Burst_Intrinsics_Arm_Neon__vmlsl_high_u32;
  case 0xc:
    puVar5 = (undefined8 *)
             Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__;
Unity_Burst_Intrinsics_Arm_Neon__vmlsl_high_u32:
    uVar3 = *puVar5;
    in_stack_00000008 = (double)(long)unaff_w19;
    goto LAB_039d0f84;
  case 0xd:
    in_stack_00000008 = (double)CONCAT44(uVar2,(float)unaff_w19);
    puVar5 = (undefined8 *)
             Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
    ;
    goto LAB_039d0f7c;
  case 0xe:
    in_stack_00000008 = (double)unaff_w19;
    puVar5 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
LAB_039d0f7c:
    uVar3 = *puVar5;
    goto LAB_039d0f84;
  case 0xf:
    if (*(int *)(*(long *)Method_System_Numerics_BigNumber_FormatBigInteger__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    _in_stack_00000008 = FUN_035c85a4(unaff_w19,0);
    uVar3 = *(undefined8 *)puVar1;
    goto LAB_039d0f84;
  default:
    uVar3 = FUN_039c30b8();
    uVar4 = thunk_FUN_01efb3a4(StringLiteral_5686);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar3,uVar4);
  }
  if (0xffff < unaff_w19) {
LAB_039d0fac:
    uVar3 = FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar3,*(undefined8 *)StringLiteral_5686);
  }
LAB_039d0f34:
  uVar3 = *puVar5;
  in_stack_00000008 = (double)CONCAT62(in_stack_00000008._2_6_,(short)unaff_w19);
LAB_039d0f84:
  thunk_FUN_01f113fc(uVar3,&stack0x00000008);
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


