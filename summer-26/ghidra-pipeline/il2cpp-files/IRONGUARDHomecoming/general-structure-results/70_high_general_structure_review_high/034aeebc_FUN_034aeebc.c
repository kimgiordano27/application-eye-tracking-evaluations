/*
FUNCTION_NAME: FUN_034aeebc
ENTRY_POINT: 034aeebc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_034aeebc(long param_1,int param_2,int *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_04832c0d & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__);
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(Method_System_Numerics_BigNumber_FormatBigInteger__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_VerifyWritable__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
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
    DAT_04832c0d = 1;
  }
  plVar14 = (long *)(param_1 + 0x10);
  plVar7 = (long *)*plVar14;
  if ((plVar7 == (long *)0x0) ||
     (plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400)),
     plVar7 == (long *)0x0)) {
LAB_034af510:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar7 + 0x308))
            (plVar7,*(long *)(param_1 + 0x28) + (long)param_2,0,*(undefined8 *)(*plVar7 + 0x310));
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_034af510;
  iVar5 = FUN_034dc5dc(*(long *)(param_1 + 0x10),0);
  *param_3 = iVar5;
  uVar13 = 0;
  switch(iVar5) {
  case 0:
    goto switchD_034af040_caseD_0;
  case 1:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_034af510;
    uVar13 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0));
    goto LAB_034af4b4;
  case 2:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_034af510;
    uVar3 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
    local_48._0_8_ = CONCAT71(local_48._1_7_,uVar3) & 0xffffffffffffff01;
    puVar11 = (undefined8 *)
              Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
    goto LAB_034af320;
  case 3:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_034af510;
    uVar4 = (**(code **)(*plVar14 + 0x218))(plVar14,*(undefined8 *)(*plVar14 + 0x220));
    puVar11 = (undefined8 *)Method_System_IO_CStreamReader_Read__;
    break;
  case 4:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_034af510;
    uVar3 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
    puVar11 = (undefined8 *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
    goto LAB_034af29c;
  case 5:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_034af510;
    uVar3 = (**(code **)(*plVar14 + 0x1e8))(plVar14,*(undefined8 *)(*plVar14 + 0x1f0));
    puVar11 = (undefined8 *)
              Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__;
LAB_034af29c:
    uVar13 = *puVar11;
    local_48[0] = uVar3;
    goto LAB_034af37c;
  case 6:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_034af510;
    uVar4 = (**(code **)(*plVar14 + 0x208))(plVar14,*(undefined8 *)(*plVar14 + 0x210));
    puVar11 = (undefined8 *)Method_System_Globalization_Calendar_VerifyWritable__;
    break;
  case 7:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_034af510;
    uVar4 = (**(code **)(*plVar14 + 0x218))(plVar14,*(undefined8 *)(*plVar14 + 0x220));
    puVar11 = (undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
    break;
  case 8:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_034af510;
    uVar15 = (**(code **)(*plVar14 + 0x228))(plVar14,*(undefined8 *)(*plVar14 + 0x230));
    puVar11 = (undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    goto LAB_034af2c8;
  case 9:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_034af510;
    uVar15 = (**(code **)(*plVar14 + 0x238))(plVar14,*(undefined8 *)(*plVar14 + 0x240));
    puVar11 = (undefined8 *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__;
LAB_034af2c8:
    uVar13 = *puVar11;
    local_48._0_4_ = uVar15;
    goto LAB_034af37c;
  case 10:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_034af510;
    uVar13 = (**(code **)(*plVar14 + 0x248))(plVar14,*(undefined8 *)(*plVar14 + 0x250));
    puVar11 = (undefined8 *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
    goto FUN_034af2f4;
  case 0xb:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_034af510;
    uVar13 = (**(code **)(*plVar14 + 600))(plVar14,*(undefined8 *)(*plVar14 + 0x260));
    puVar11 = (undefined8 *)
              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__;
    goto FUN_034af2f4;
  case 0xc:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_034af510;
    uVar15 = (**(code **)(*plVar14 + 0x268))(plVar14,*(undefined8 *)(*plVar14 + 0x270));
    local_48._0_4_ = uVar15;
    puVar11 = (undefined8 *)
              Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
    ;
    goto LAB_034af274;
  case 0xd:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_034af510;
    local_48._0_8_ = (**(code **)(*plVar14 + 0x278))(plVar14,*(undefined8 *)(*plVar14 + 0x280));
    puVar11 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
LAB_034af274:
    uVar13 = *puVar11;
    goto LAB_034af37c;
  case 0xe:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_034af510;
    local_48 = (**(code **)(*plVar14 + 0x288))(plVar14,*(undefined8 *)(*plVar14 + 0x290));
    puVar11 = (undefined8 *)Method_System_Numerics_BigNumber_FormatBigInteger__;
LAB_034af320:
    uVar13 = *puVar11;
    goto LAB_034af37c;
  case 0xf:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_034af510;
    uVar13 = (**(code **)(*plVar14 + 0x248))(plVar14,*(undefined8 *)(*plVar14 + 0x250));
    puVar2 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
    if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    }
    uVar13 = FUN_0354da8c(uVar13,0);
    local_48._0_8_ = uVar13;
    uVar13 = *(undefined8 *)puVar2;
    goto LAB_034af37c;
  case 0x10:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) goto LAB_034af510;
    uVar13 = (**(code **)(*plVar14 + 0x248))(plVar14,*(undefined8 *)(*plVar14 + 0x250));
    puVar11 = (undefined8 *)
              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
FUN_034af2f4:
    local_48._0_8_ = uVar13;
    uVar13 = *puVar11;
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
    uVar13 = thunk_FUN_01efb3a4(Method_System_Threading_Thread__ctor__);
    uVar13 = FUN_035ac8e0(uVar13,0);
LAB_034af528:
    thunk_FUN_01efb3a4(Method_UnityEngine_SubsystemManager_GetInstances<XRInputSubsystem>__);
    uVar10 = thunk_FUN_01f117cc();
    FUN_034f85bc(uVar10,uVar13,0);
    uVar13 = thunk_FUN_01efb3a4(Method_System_Threading_ThreadHelper_ThreadStart_Context__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar10,uVar13);
  case 0x20:
    plVar7 = (long *)*plVar14;
    if (plVar7 == (long *)0x0) goto LAB_034af510;
    uVar6 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
    uVar12 = (ulong)uVar6;
    if (-1 < (int)uVar6) {
      plVar7 = *(long **)(param_1 + 0x70);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)*plVar14;
        if ((plVar7 == (long *)0x0) ||
           (plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400)),
           plVar7 == (long *)0x0)) goto LAB_034af510;
        lVar8 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
        if ((long)uVar12 <= lVar8) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_034af510;
          uVar13 = (**(code **)(*plVar14 + 0x2c8))(plVar14,uVar12,*(undefined8 *)(*plVar14 + 0x2d0))
          ;
          goto LAB_034af4b4;
        }
      }
      else {
        lVar8 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
        plVar7 = *(long **)(param_1 + 0x70);
        if (plVar7 == (long *)0x0) goto LAB_034af510;
        lVar9 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
        if ((long)uVar12 <= lVar8 - lVar9) {
          uVar13 = FUN_01f08890(*(undefined8 *)
                                 Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                                uVar12);
          plVar7 = *(long **)(param_1 + 0x70);
          if (plVar7 == (long *)0x0) goto LAB_034af510;
          (**(code **)(*plVar7 + 0x328))(plVar7,uVar13,0,uVar12,*(undefined8 *)(*plVar7 + 0x330));
          goto switchD_034af040_caseD_0;
        }
      }
    }
LAB_034af564:
    uVar13 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                               );
    uVar13 = FUN_01f08890(uVar13,1);
    local_48._0_4_ = uVar6;
    uVar10 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               );
    uVar10 = thunk_FUN_01f113fc(uVar10,local_48);
    FUN_01bc50c0(uVar13);
    FUN_01bc56ec(uVar13,uVar10);
    FUN_01bc5408(uVar13,0,uVar10);
    uVar10 = thunk_FUN_01efb3a4(Method_System_Threading_ThreadPool_QueueUserWorkItem<object>__);
    uVar13 = FUN_035ae81c(uVar10,uVar13,0);
    goto LAB_034af528;
  case 0x21:
    plVar7 = (long *)*plVar14;
    if (plVar7 == (long *)0x0) goto LAB_034af510;
    uVar6 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
    uVar12 = (ulong)uVar6;
    if ((int)uVar6 < 0) goto LAB_034af564;
    plVar7 = *(long **)(param_1 + 0x70);
    if (plVar7 == (long *)0x0) {
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) goto LAB_034af510;
      uVar10 = (**(code **)(*plVar14 + 0x2c8))(plVar14,uVar12,*(undefined8 *)(*plVar14 + 0x2d0));
      uVar13 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Threading_ThreadHelper_ThreadStart__)
      ;
      FUN_034ca424(uVar13,uVar10,0);
    }
    else {
      lVar8 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
      plVar7 = *(long **)(param_1 + 0x70);
      if (plVar7 == (long *)0x0) goto LAB_034af510;
      lVar9 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
      if (lVar8 - lVar9 < (long)uVar12) goto LAB_034af564;
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_034af510;
      uVar10 = FUN_034cf434(*(long *)(param_1 + 0x70),0);
      uVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_UnityEngine_TextCore_Text_TextInfo_Resize<LinkInfo>__);
      FUN_034cf1ac(uVar13,uVar10,uVar12,uVar12,1,0);
    }
    goto switchD_034af040_caseD_0;
  default:
    if (iVar5 < 0x40) goto switchD_034af040_caseD_11;
    uVar13 = FUN_034aecec(param_1,iVar5 + -0x40);
LAB_034af4b4:
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return uVar13;
    }
    goto LAB_034af4c4;
  }
  uVar13 = *puVar11;
  local_48._0_2_ = uVar4;
LAB_034af37c:
  uVar13 = thunk_FUN_01f113fc(uVar13,local_48);
switchD_034af040_caseD_0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar13;
  }
LAB_034af4c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


