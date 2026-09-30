/*
FUNCTION_NAME: System.AppDomain$$InternalSetDomain
ENTRY_POINT: 034aef54
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


undefined8 System_AppDomain__InternalSetDomain(long param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long unaff_x19;
  int *unaff_x20;
  ulong uVar11;
  int unaff_w21;
  undefined8 uVar12;
  long unaff_x22;
  long unaff_x23;
  long *plVar13;
  undefined4 uVar14;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xa98));
  thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
  thunk_FUN_01efb3a4(Method_System_Threading_ThreadHelper_ThreadStart__);
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
  thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextInfo_Resize<LinkInfo>__);
  *(undefined1 *)(unaff_x23 + 0xc0d) = 1;
  plVar13 = (long *)(unaff_x19 + 0x10);
  plVar6 = (long *)*plVar13;
  if ((plVar6 == (long *)0x0) ||
     (plVar6 = (long *)(**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400)),
     plVar6 == (long *)0x0)) {
LAB_034af510:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar6 + 0x308))
            (plVar6,*(long *)(unaff_x19 + 0x28) + (long)unaff_w21,0,*(undefined8 *)(*plVar6 + 0x310)
            );
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_034af510;
  iVar4 = FUN_034dc5dc(*(long *)(unaff_x19 + 0x10),0);
  *unaff_x20 = iVar4;
  uVar12 = 0;
  switch(iVar4) {
  case 0:
    goto switchD_034af040_caseD_0;
  case 1:
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_034af510;
    uVar12 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
    goto LAB_034af4b4;
  case 2:
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_034af510;
    uVar2 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
    in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar2) & 0xffffffffffffff01;
    puVar10 = (undefined8 *)
              Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
    goto LAB_034af320;
  case 3:
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_034af510;
    uVar3 = (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
    puVar10 = (undefined8 *)Method_System_IO_CStreamReader_Read__;
    break;
  case 4:
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_034af510;
    uVar2 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
    puVar10 = (undefined8 *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
    goto LAB_034af29c;
  case 5:
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_034af510;
    uVar2 = (**(code **)(*plVar13 + 0x1e8))(plVar13,*(undefined8 *)(*plVar13 + 0x1f0));
    puVar10 = (undefined8 *)
              Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__;
LAB_034af29c:
    uVar12 = *puVar10;
    in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar2);
    goto LAB_034af37c;
  case 6:
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_034af510;
    uVar3 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210));
    puVar10 = (undefined8 *)Method_System_Globalization_Calendar_VerifyWritable__;
    break;
  case 7:
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_034af510;
    uVar3 = (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
    puVar10 = (undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
    break;
  case 8:
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_034af510;
    uVar14 = (**(code **)(*plVar13 + 0x228))(plVar13,*(undefined8 *)(*plVar13 + 0x230));
    puVar10 = (undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    goto LAB_034af2c8;
  case 9:
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_034af510;
    uVar14 = (**(code **)(*plVar13 + 0x238))(plVar13,*(undefined8 *)(*plVar13 + 0x240));
    puVar10 = (undefined8 *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__;
LAB_034af2c8:
    uVar12 = *puVar10;
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar14);
    goto LAB_034af37c;
  case 10:
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_034af510;
    uVar12 = (**(code **)(*plVar13 + 0x248))(plVar13,*(undefined8 *)(*plVar13 + 0x250));
    puVar10 = (undefined8 *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
    goto FUN_034af2f4;
  case 0xb:
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_034af510;
    uVar12 = (**(code **)(*plVar13 + 600))(plVar13,*(undefined8 *)(*plVar13 + 0x260));
    puVar10 = (undefined8 *)
              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__;
    goto FUN_034af2f4;
  case 0xc:
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_034af510;
    uVar14 = (**(code **)(*plVar13 + 0x268))(plVar13,*(undefined8 *)(*plVar13 + 0x270));
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar14);
    puVar10 = (undefined8 *)
              Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
    ;
    goto LAB_034af274;
  case 0xd:
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_034af510;
    in_stack_00000008 = (**(code **)(*plVar13 + 0x278))(plVar13,*(undefined8 *)(*plVar13 + 0x280));
    puVar10 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
LAB_034af274:
    uVar12 = *puVar10;
    goto LAB_034af37c;
  case 0xe:
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_034af510;
    _in_stack_00000008 = (**(code **)(*plVar13 + 0x288))(plVar13,*(undefined8 *)(*plVar13 + 0x290));
    puVar10 = (undefined8 *)Method_System_Numerics_BigNumber_FormatBigInteger__;
LAB_034af320:
    uVar12 = *puVar10;
    goto LAB_034af37c;
  case 0xf:
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_034af510;
    uVar12 = (**(code **)(*plVar13 + 0x248))(plVar13,*(undefined8 *)(*plVar13 + 0x250));
    puVar1 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
    if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    }
    uVar12 = FUN_0354da8c(uVar12,0);
    in_stack_00000008 = uVar12;
    uVar12 = *(undefined8 *)puVar1;
    goto LAB_034af37c;
  case 0x10:
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_034af510;
    uVar12 = (**(code **)(*plVar13 + 0x248))(plVar13,*(undefined8 *)(*plVar13 + 0x250));
    puVar10 = (undefined8 *)
              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
FUN_034af2f4:
    in_stack_00000008 = uVar12;
    uVar12 = *puVar10;
    goto LAB_034af37c;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
switchD_034af040_caseD_11:
    uVar12 = thunk_FUN_01efb3a4(Method_System_Threading_Thread__ctor__);
    uVar12 = FUN_035ac8e0(uVar12,0);
LAB_034af528:
    thunk_FUN_01efb3a4(Method_UnityEngine_SubsystemManager_GetInstances<XRInputSubsystem>__);
    uVar9 = thunk_FUN_01f117cc();
    FUN_034f85bc(uVar9,uVar12,0);
    uVar12 = thunk_FUN_01efb3a4(Method_System_Threading_ThreadHelper_ThreadStart_Context__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar12);
  case 0x20:
    plVar6 = (long *)*plVar13;
    if (plVar6 == (long *)0x0) goto LAB_034af510;
    uVar5 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
    uVar11 = (ulong)uVar5;
    if (-1 < (int)uVar5) {
      plVar6 = *(long **)(unaff_x19 + 0x70);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)*plVar13;
        if ((plVar6 == (long *)0x0) ||
           (plVar6 = (long *)(**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400)),
           plVar6 == (long *)0x0)) goto LAB_034af510;
        lVar7 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
        if ((long)uVar11 <= lVar7) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_034af510;
          uVar12 = (**(code **)(*plVar13 + 0x2c8))(plVar13,uVar11,*(undefined8 *)(*plVar13 + 0x2d0))
          ;
          goto LAB_034af4b4;
        }
      }
      else {
        lVar7 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
        plVar6 = *(long **)(unaff_x19 + 0x70);
        if (plVar6 == (long *)0x0) goto LAB_034af510;
        lVar8 = (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
        if ((long)uVar11 <= lVar7 - lVar8) {
          uVar12 = FUN_01f08890(*(undefined8 *)
                                 Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                                uVar11);
          plVar6 = *(long **)(unaff_x19 + 0x70);
          if (plVar6 == (long *)0x0) goto LAB_034af510;
          (**(code **)(*plVar6 + 0x328))(plVar6,uVar12,0,uVar11,*(undefined8 *)(*plVar6 + 0x330));
          goto switchD_034af040_caseD_0;
        }
      }
    }
LAB_034af564:
    uVar12 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                               );
    uVar12 = FUN_01f08890(uVar12,1);
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar5);
    uVar9 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar9 = thunk_FUN_01f113fc(uVar9,&stack0x00000008);
    FUN_01bc50c0(uVar12);
    FUN_01bc56ec(uVar12,uVar9);
    FUN_01bc5408(uVar12,0,uVar9);
    uVar9 = thunk_FUN_01efb3a4(Method_System_Threading_ThreadPool_QueueUserWorkItem<object>__);
    uVar12 = FUN_035ae81c(uVar9,uVar12,0);
    goto LAB_034af528;
  case 0x21:
    plVar6 = (long *)*plVar13;
    if (plVar6 == (long *)0x0) goto LAB_034af510;
    uVar5 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
    uVar11 = (ulong)uVar5;
    if ((int)uVar5 < 0) goto LAB_034af564;
    plVar6 = *(long **)(unaff_x19 + 0x70);
    if (plVar6 == (long *)0x0) {
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) goto LAB_034af510;
      uVar9 = (**(code **)(*plVar13 + 0x2c8))(plVar13,uVar11,*(undefined8 *)(*plVar13 + 0x2d0));
      uVar12 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Threading_ThreadHelper_ThreadStart__)
      ;
      FUN_034ca424(uVar12,uVar9,0);
    }
    else {
      lVar7 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
      plVar6 = *(long **)(unaff_x19 + 0x70);
      if (plVar6 == (long *)0x0) goto LAB_034af510;
      lVar8 = (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
      if (lVar7 - lVar8 < (long)uVar11) goto LAB_034af564;
      if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_034af510;
      uVar9 = FUN_034cf434(*(long *)(unaff_x19 + 0x70),0);
      uVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_UnityEngine_TextCore_Text_TextInfo_Resize<LinkInfo>__);
      FUN_034cf1ac(uVar12,uVar9,uVar11,uVar11,1,0);
    }
    goto switchD_034af040_caseD_0;
  default:
    if (iVar4 < 0x40) goto switchD_034af040_caseD_11;
    uVar12 = FUN_034aecec();
LAB_034af4b4:
    if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
      return uVar12;
    }
    goto LAB_034af4c4;
  }
  uVar12 = *puVar10;
  in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,uVar3);
LAB_034af37c:
  uVar12 = thunk_FUN_01f113fc(uVar12,&stack0x00000008);
switchD_034af040_caseD_0:
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
    return uVar12;
  }
LAB_034af4c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


