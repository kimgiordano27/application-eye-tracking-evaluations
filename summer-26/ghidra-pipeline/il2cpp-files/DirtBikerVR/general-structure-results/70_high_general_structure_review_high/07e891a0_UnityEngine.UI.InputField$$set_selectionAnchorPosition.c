/*
FUNCTION_NAME: UnityEngine.UI.InputField$$set_selectionAnchorPosition
ENTRY_POINT: 07e891a0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_UI_InputField__set_selectionAnchorPosition(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  ulong uVar19;
  int *piVar20;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long *in_stack_00000008;
  
  uVar15 = thunk_FUN_03ac74bc(*unaff_x29);
  FUN_057a55c0(uVar15,*unaff_x28);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar15;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x30),uVar15);
  uVar15 = thunk_FUN_03ac74bc(*unaff_x23);
  FUN_057a5730(uVar15,*unaff_x20);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar15;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x38),uVar15);
  uVar15 = thunk_FUN_03ac74bc(*unaff_x26);
  FUN_05f9f7c4(uVar15,*unaff_x25);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar15;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x40),uVar15);
  uVar15 = thunk_FUN_03ac74bc(*unaff_x24);
  FUN_04fd421c(uVar15,0x400,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_SetStateMachine__
              );
  *(undefined8 *)(unaff_x19 + 0x48) = uVar15;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x48),uVar15);
  uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<VivoxManager_<LeaveVoiceChannel>d__25>__
                             );
  FUN_049d8fb0(uVar15,*(undefined8 *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<VivoxManager_<LeaveVoiceChannel>d__24>__
              );
  *(undefined8 *)(unaff_x19 + 0x50) = uVar15;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x50),uVar15);
  uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<BufferOffsetSize>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<<GetRewriteHandler>b__271_0>d>__
                             );
  FUN_07e78444(uVar15,0);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar15;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x58),uVar15);
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ReadCharsAsync>d__14>__
  ;
  if (DAT_0899a06a == '\0') {
    FUN_03a8a718(OVR_OpenVR_IVRSystem__GetControllerState_TypeInfo);
    DAT_0899a06a = '\x01';
  }
  lVar16 = *unaff_x27;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar16 = *unaff_x27;
  }
  *(undefined8 *)(unaff_x19 + 0xd0) = **(undefined8 **)(lVar16 + 0xb8);
  thunk_FUN_03afed3c();
  lVar16 = *(long *)puVar3;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar16 = *(long *)puVar3;
  }
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<BufferOffsetSize>_SetResult__;
  puVar18 = *(undefined8 **)(lVar16 + 0xb8);
  lVar22 = puVar18[3];
  if (lVar22 == 0) {
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar18 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar15 = *puVar18;
    lVar22 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<VivoxManager_<JoinVoiceChannel>d__22>__
                               );
    FUN_04957830(lVar22,uVar15,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ChannelToken>_SetResult__
                 ,0);
    plVar17 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
    *plVar17 = lVar22;
    thunk_FUN_03afed3c(plVar17,lVar22);
  }
  uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
  FUN_053b2c08(uVar15,lVar22,0,0,0,0,0x100,0x400);
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar15;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xe0),uVar15);
  lVar16 = *(long *)puVar3;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar16 = *(long *)puVar3;
  }
  puVar6 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ChannelToken>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<NotificationAuth>>,_WrappedFriendsApi_<GetNotificationsAuthAsync>d__20>__
  ;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<BufferOffsetSize>_SetStateMachine__;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<CreateStream>d__18>__
  ;
  puVar18 = *(undefined8 **)(lVar16 + 0xb8);
  lVar22 = puVar18[4];
  if (lVar22 == 0) {
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar18 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar15 = *puVar18;
    lVar22 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<SharedAnchorManager_<ShareAnchorsWithUser>d__27>__
                               );
    FUN_04957830(lVar22,uVar15,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ChannelToken>_SetStateMachine__
                 ,0);
    plVar17 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
    *plVar17 = lVar22;
    thunk_FUN_03afed3c(plVar17,lVar22);
  }
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<ServicePointScheduler_<WaitAsync>d__46>__
  ;
  uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
  FUN_053b2c08(uVar15,lVar22,0,0,0,0,8,0x80);
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar15;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xe8),uVar15);
  uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
  FUN_07e88958();
  *(undefined8 *)(unaff_x19 + 0x128) = uVar15;
  thunk_FUN_03afed3c(unaff_x19 + 0x128,uVar15);
  lVar16 = *(long *)puVar6;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar16 = *(long *)puVar6;
  }
  uVar23 = **(undefined8 **)(lVar16 + 0xb8);
  uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
  FUN_07e752b4(uVar15,uVar23,0);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar15;
  thunk_FUN_03afed3c(unaff_x19 + 0x130,uVar15);
  FUN_0679343c();
  *(long **)(unaff_x19 + 0x100) = in_stack_00000008;
  thunk_FUN_03afed3c(unaff_x19 + 0x100,in_stack_00000008);
  puVar10 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<char>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseUnicodeAsync>d__12>__
  ;
  puVar9 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ChannelToken>_get_Task__;
  puVar8 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ChannelToken>_Start<WrappedFriendsApi_<GetNotificationsAuthAsync>d__20>__
  ;
  puVar7 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ChannelToken>_Start<LobbyWireTokenProvider_<GetTokenAsync>d__3>__
  ;
  puVar6 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ChannelToken>_AwaitUnsafeOnCompleted<TaskAwaiter<Dictionary<string,_TokenData>>,_LobbyWireTokenProvider_<GetTokenAsync>d__3>__
  ;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<BufferOffsetSize>_get_Task__;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<BufferOffsetSize>_Start<HttpWebRequest_<<GetRewriteHandler>b__271_0>d>__
  ;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<VivoxServiceInternal_<SetSafeVoiceConsentStatus>d__233>__
  ;
  if (in_stack_00000008 == (long *)0x0) goto LAB_07e89924;
  uVar15 = (**(code **)(*in_stack_00000008 + 0x498))
                     (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x4a0));
  *(undefined8 *)(unaff_x19 + 0x110) = uVar15;
  thunk_FUN_03afed3c(unaff_x19 + 0x110,uVar15);
  uVar23 = *(undefined8 *)(unaff_x19 + 0x110);
  uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)puVar9);
  FUN_07e89930(uVar15,uVar23);
  *(undefined8 *)(unaff_x19 + 0x118) = uVar15;
  thunk_FUN_03afed3c(unaff_x19 + 0x118,uVar15);
  uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)puVar6);
  FUN_07e868dc();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar15;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x10),uVar15);
  uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)puVar8);
  FUN_07e89b24();
  *(undefined8 *)(unaff_x19 + 0x120) = uVar15;
  thunk_FUN_03afed3c(unaff_x19 + 0x120,uVar15);
  uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
  FUN_07e779e0(uVar15,0);
  *(undefined8 *)(unaff_x19 + 0x140) = uVar15;
  thunk_FUN_03afed3c(unaff_x19 + 0x140,uVar15);
  uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
  FUN_07e7ea94(uVar15,0);
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar15;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xd8),uVar15);
  uVar23 = *(undefined8 *)(unaff_x19 + 0x130);
  uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
  FUN_07f66aa4(uVar15,uVar23,0);
  *(undefined8 *)(unaff_x19 + 0x138) = uVar15;
  thunk_FUN_03afed3c(unaff_x19 + 0x138,uVar15);
  uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)puVar10);
  FUN_07e89d00();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar15;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar15);
  iVar12 = FUN_07c5ea9c(0);
  iVar13 = (**(code **)(*in_stack_00000008 + 0x448))
                     (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x450));
  if (iVar13 == 0) {
    bVar11 = *(byte *)(*(long *)Method_System_Xml_ArrayHelper<string,_Decimal>__ctor__ + 0x130);
    if ((*(byte *)(*in_stack_00000008 + 0x130) < bVar11) ||
       (*(long *)(*(long *)(*in_stack_00000008 + 200) + (ulong)bVar11 * 8 + -8) !=
        *(long *)Method_System_Xml_ArrayHelper<string,_Decimal>__ctor__)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(in_stack_00000008);
    }
    bVar11 = FUN_07f56e5c(in_stack_00000008,0);
    lVar16 = *(long *)puVar7;
    *(byte *)(unaff_x19 + 0x151) = bVar11 & 1;
    plVar17 = (long *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<VivoxServiceInternal_<GetSafeVoiceConsentStatus>d__234>__
    ;
    if ((bVar11 & 1) != 0) {
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar15 = FUN_07e89eac();
      goto LAB_07e89768;
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar15 = FUN_07e89f08();
    *(undefined8 *)(unaff_x19 + 0x60) = uVar15;
    thunk_FUN_03afed3c();
    if (iVar12 == 1) {
      plVar21 = (long *)in_stack_00000008[0xf];
      if (plVar21 == (long *)0x0) goto LAB_07e89924;
      lVar16 = *plVar21;
      uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *plVar17) {
            puVar18 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_07e8990c;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar18 = (undefined8 *)FUN_03ac43c4(plVar21,*plVar17,0);
LAB_07e8990c:
      bVar11 = (*(code *)*puVar18)(plVar21,puVar18[1]);
      *(byte *)(unaff_x19 + 0x153) = bVar11 & 1;
    }
  }
  else {
    if (iVar12 == 1) {
      *(undefined1 *)(unaff_x19 + 0x153) = 1;
    }
    plVar17 = (long *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<VivoxServiceInternal_<GetSafeVoiceConsentStatus>d__234>__
    ;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar15 = FUN_07e89f64();
LAB_07e89768:
    *(undefined8 *)(unaff_x19 + 0x60) = uVar15;
    thunk_FUN_03afed3c();
  }
  plVar21 = (long *)in_stack_00000008[0xf];
  *(char *)(unaff_x19 + 0x152) = (char)in_stack_00000008[0x18];
  puVar3 = System_Xml_XmlBaseReader_XmlAttributeTextNode_TypeInfo;
  if (plVar21 != (long *)0x0) {
    lVar16 = *plVar21;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *plVar17) {
          puVar18 = (undefined8 *)(lVar16 + (long)(*piVar20 + 2) * 0x10 + 0x138);
          goto LAB_07e897e0;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar18 = (undefined8 *)FUN_03ac43c4(plVar21,*plVar17,2);
LAB_07e897e0:
    puVar4 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_Start<QosDiscoveryApiClient_<GetServersAsync>d__7>__
    ;
    uVar14 = (*(code *)*puVar18)(plVar21,puVar18[1]);
    uVar1 = *(undefined1 *)(unaff_x19 + 0x152);
    uVar2 = *(undefined1 *)(unaff_x19 + 0x153);
    uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
    FUN_07e89fc0(uVar15,uVar14,0,uVar1,uVar2);
    *(undefined8 *)(unaff_x19 + 0x108) = uVar15;
    thunk_FUN_03afed3c(unaff_x19 + 0x108,uVar15);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07e8a92c();
    if (*(char *)(unaff_x19 + 0x153) != '\0') {
      iVar12 = 0;
    }
    uVar15 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
    FUN_07e8a98c(uVar15,iVar12);
    *(undefined8 *)(unaff_x19 + 0x148) = uVar15;
    thunk_FUN_03afed3c(unaff_x19 + 0x148,uVar15);
    return;
  }
LAB_07e89924:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


