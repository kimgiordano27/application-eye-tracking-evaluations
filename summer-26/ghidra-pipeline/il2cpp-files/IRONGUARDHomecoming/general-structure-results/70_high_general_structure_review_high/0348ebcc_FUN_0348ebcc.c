/*
FUNCTION_NAME: FUN_0348ebcc
ENTRY_POINT: 0348ebcc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0348ebcc(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_04832b7a & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__);
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
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
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_System_Security_Cryptography_DSA_FromXmlString__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                      );
    DAT_04832b7a = 1;
  }
  switch(param_2) {
  case 1:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) {
LAB_0348ef34:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
    local_48._0_8_ = CONCAT71(local_48._1_7_,uVar2) & 0xffffffffffffff01;
    puVar8 = (undefined8 *)
             Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
    goto LAB_0348eea8;
  case 2:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_0348ef34;
    uVar2 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
    puVar8 = (undefined8 *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
    goto LAB_0348ede8;
  case 3:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_0348ef34;
    uVar3 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200));
    puVar8 = (undefined8 *)Method_System_IO_CStreamReader_Read__;
    goto LAB_0348ee88;
  default:
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                              );
    uVar6 = FUN_01f08890(uVar6,1);
    local_48._0_4_ = param_2;
    uVar7 = thunk_FUN_01efb3a4(Method_System_String_CompareTo__);
    uVar7 = thunk_FUN_01f113fc(uVar7,local_48);
    uVar7 = FUN_0359ff90(uVar7,0);
    FUN_01bc50c0(uVar6);
    FUN_01bc56ec(uVar6,uVar7);
    FUN_01bc5408(uVar6,0,uVar7);
    uVar7 = thunk_FUN_01efb3a4(Method_System_String_IndexOf__);
    uVar6 = FUN_035ae81c(uVar7,uVar6,0);
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__);
    uVar7 = thunk_FUN_01f117cc();
    FUN_03480238(uVar7,uVar6,0);
    uVar6 = thunk_FUN_01efb3a4(Method_System_String_IndexOfAny__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,uVar6);
  case 5:
    local_48 = FUN_0349f8b8(param_1);
    puVar8 = (undefined8 *)Method_System_Numerics_BigNumber_FormatBigInteger__;
LAB_0348eea8:
    uVar6 = *puVar8;
    goto LAB_0348ef0c;
  case 6:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_0348ef34;
    local_48._0_8_ = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
    puVar8 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
    goto LAB_0348ee18;
  case 7:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_0348ef34;
    uVar3 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
    puVar8 = (undefined8 *)Method_System_Globalization_Calendar_VerifyWritable__;
    goto LAB_0348ee88;
  case 8:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_0348ef34;
    uVar4 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
    puVar8 = (undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    goto LAB_0348eefc;
  case 9:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_0348ef34;
    uVar6 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
    puVar8 = (undefined8 *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
    break;
  case 10:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_0348ef34;
    uVar2 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
    puVar8 = (undefined8 *)
             Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__;
LAB_0348ede8:
    uVar6 = *puVar8;
    local_48[0] = uVar2;
    goto LAB_0348ef0c;
  case 0xb:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_0348ef34;
    uVar4 = (**(code **)(*plVar5 + 0x268))(plVar5,*(undefined8 *)(*plVar5 + 0x270));
    local_48._0_4_ = uVar4;
    puVar8 = (undefined8 *)
             Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
    ;
LAB_0348ee18:
    uVar6 = *puVar8;
    goto LAB_0348ef0c;
  case 0xc:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_0348ef34;
    uVar6 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
    puVar8 = (undefined8 *)
             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
    break;
  case 0xd:
    uVar6 = FUN_0349fa64(param_1);
    puVar8 = (undefined8 *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
    break;
  case 0xe:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_0348ef34;
    uVar3 = (**(code **)(*plVar5 + 0x218))(plVar5,*(undefined8 *)(*plVar5 + 0x220));
    puVar8 = (undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
LAB_0348ee88:
    uVar6 = *puVar8;
    local_48._0_2_ = uVar3;
    goto LAB_0348ef0c;
  case 0xf:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_0348ef34;
    uVar4 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    puVar8 = (undefined8 *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__;
LAB_0348eefc:
    uVar6 = *puVar8;
    local_48._0_4_ = uVar4;
    goto LAB_0348ef0c;
  case 0x10:
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_0348ef34;
    uVar6 = (**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(*plVar5 + 0x260));
    puVar8 = (undefined8 *)
             Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__;
  }
  local_48._0_8_ = uVar6;
  uVar6 = *puVar8;
LAB_0348ef0c:
  thunk_FUN_01f113fc(uVar6,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


