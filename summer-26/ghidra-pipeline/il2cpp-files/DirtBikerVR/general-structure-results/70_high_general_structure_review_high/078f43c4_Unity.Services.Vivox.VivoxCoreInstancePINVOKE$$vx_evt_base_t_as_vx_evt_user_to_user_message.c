/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_base_t_as_vx_evt_user_to_user_message
ENTRY_POINT: 078f43c4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_base_t_as_vx_evt_user_to_user_message
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0x1d8));
                    /* catch() { ... } // from try @ 078f4378 with catch @ 078f43d4 */
  FUN_03a8a718(System_Func<uint>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<HVRHandGrabber>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xb64) = 1;
  puVar3 = System_Net_Http_Headers_TryParseListDelegate<ViaHeaderValue>_TypeInfo;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x12);
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 10);
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo
                              );
    FUN_05f9f7c4(lVar4,*(undefined8 *)
                        UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
                    /* try { // try from 078f4434 to 079f445b has its CatchHandler @ 078f4770 */
    uVar13 = *(undefined8 *)System_Tuple<Task,_Task,_TaskContinuation>_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar13 = FUN_0675ff58(uVar13,0);
    puVar1 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(lVar4,*(undefined8 *)System_Collections_Generic_List<HVRHandGrabber>_TypeInfo,
                 uVar13,*(undefined8 *)
                         Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo
                );
    puVar2 = Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo;
    uVar13 = FUN_0675ff58(*(undefined8 *)
                           Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo
                          ,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TooltipEvent>_TypeInfo,uVar13,
                 *(undefined8 *)puVar1);
    uVar13 = FUN_0675ff58(*(undefined8 *)puVar2,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<uint>_TypeInfo,uVar13,*(undefined8 *)puVar1);
    *(long *)(unaff_x19 + 0x10) = lVar4;
    thunk_FUN_03afed3c(unaff_x19 + 0x10,lVar4);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar12 = *(undefined8 *)(unaff_x19 + 8);
    uVar13 = FUN_078f3610(lVar10);
    lVar4 = FUN_078d7afc(uVar12,uVar13,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar11 = *(long **)(lVar10 + 0x10);
    uVar13 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_session_channel_invite_user
                       (*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar4 + 0x10),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar12 = FUN_078f03bc(*(long *)(unaff_x19 + 0xc),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar5 = FUN_078f03d0(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x19 + 0xe),lVar4,0);
    uVar7 = 10;
    if ((*(ulong *)(lVar4 + 0x18) & 0xff) != 0) {
      uVar7 = (undefined4)(*(ulong *)(lVar4 + 0x18) >> 0x20);
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(10);
    }
    lVar4 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar14 = *(undefined8 *)PTR_DAT_084c82e0;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo)
        {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_078f45f0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_03ac43c4(plVar11,*(long *)
                                   UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo
                          ,0);
LAB_078f45f0:
    lVar4 = (*(code *)*puVar6)(plVar11,uVar14,uVar13,uVar12,uVar5,uVar7,puVar6[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar4,*(undefined8 *)
                             UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo)
    ;
    uVar8 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fd4648(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar13 = FUN_0587c704(&stack0x00000018,
                        *(undefined8 *)
                         UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
  uVar12 = FUN_0471a930(uVar13,*(undefined8 *)(unaff_x19 + 0x10),
                        *(undefined8 *)
                         System_Tuple<Socket_AwaitableSocketAsyncEventArgs,_Action<object>,_object>_TypeInfo
                       );
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)System_Tuple<int,_int,_int,_bool>_TypeInfo);
  FUN_05750c4c(uVar5,uVar13,uVar12,*(undefined8 *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo);
  puVar1 = System_Tuple<Pose,_float,_float>_TypeInfo;
  *unaff_x19 = -2;
  unaff_x19[0x10] = 0;
  unaff_x19[0x11] = 0;
  thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar1);
  return;
}


