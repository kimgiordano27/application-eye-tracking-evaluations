/*
FUNCTION_NAME: FUN_0602b2d0
ENTRY_POINT: 0602b2d0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;telemetry_or_network_hits_14;functionality_data_collection_or_telemetry_hits_14
*/


void FUN_0602b2d0(int *param_1)

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
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_48;
  
  if ((DAT_06dc4b2b & 1) == 0) {
    FUN_02d965b8(Method_Unity_Services_Vivox_ChannelId_GetUriDesignator__);
    FUN_02d965b8(Method_System_IO_BufferedStream_SetLength__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__11_0__);
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide__
                );
    FUN_02d965b8(PTR_DAT_069ff9d8);
    FUN_02d965b8(PTR_DAT_069ffa48);
    FUN_02d965b8(PTR_DAT_069ffa50);
    FUN_02d965b8(Method_System_Runtime_Remoting_Channels_ChannelServices_CreateProvider__);
    FUN_02d965b8(Method_Mono_Security_Protocol_Ntlm_ChallengeResponse_set_Challenge__);
    FUN_02d965b8(PTR_DAT_06a0d268);
    FUN_02d965b8(PTR_DAT_06a0d270);
    FUN_02d965b8(Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannel__);
    FUN_02d965b8(Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__);
    FUN_02d965b8(Method_Unity_Services_Vivox_ChannelSession__ctor__);
    FUN_02d965b8(Method_Unity_Services_Vivox_ChannelSession_<ConnectAsync>b__45_0__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerDownEvent>__
                );
    FUN_02d965b8(
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerLeaveEvent>__
                );
    FUN_02d965b8(
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<GeometryChangedEvent>__
                );
    FUN_02d965b8(PTR_DAT_069ff1a0);
    FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02d965b8(Method_Unity_Services_Vivox_ChannelSession_<ConnectAsync>b__45_1__);
    FUN_02d965b8(Method_Unity_Services_Vivox_ChannelSession_<DisconnectAsync>b__49_0__);
    FUN_02d965b8(PTR_DAT_069ff1b8);
    FUN_02d965b8(Method_Unity_Services_Vivox_ChannelSession_<DisconnectAsync>b__49_1__);
    FUN_02d965b8(Method_Unity_Services_Vivox_ChannelSession_AssertSessionNotDeleted__);
    FUN_02d965b8(Method_Unity_Services_Vivox_ChannelId__ctor__);
    FUN_02d965b8(PTR_DAT_069ff1f8);
    DAT_06dc4b2b = 1;
  }
  puVar2 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__11_0__;
  local_48 = 0;
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    lVar10 = *(long *)(param_1 + 10);
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ffa50);
    FUN_04e92874(lVar4,*(undefined8 *)PTR_DAT_069ffa48);
    uVar13 = *(undefined8 *)Method_Unity_Services_Vivox_ChannelSession_<ConnectAsync>b__45_0__;
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar13 = FUN_054f73b4(uVar13,0);
    puVar1 = PTR_DAT_069ff9d8;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04e935f0(lVar4,*(undefined8 *)PTR_DAT_069ff1f8,uVar13,*(undefined8 *)PTR_DAT_069ff9d8);
    uVar13 = FUN_054f73b4(*(undefined8 *)
                           Method_System_Runtime_Remoting_Channels_ChannelServices_CreateProvider__,
                          0);
    FUN_04e935f0(lVar4,*(undefined8 *)PTR_DAT_069ff1a0,uVar13,*(undefined8 *)puVar1);
    puVar3 = Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide__;
    uVar13 = FUN_054f73b4(*(undefined8 *)
                           Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide__
                          ,0);
    FUN_04e935f0(lVar4,*(undefined8 *)
                        Method_Unity_Services_Vivox_ChannelSession_<ConnectAsync>b__45_1__,uVar13,
                 *(undefined8 *)puVar1);
    uVar13 = FUN_054f73b4(*(undefined8 *)puVar3,0);
    FUN_04e935f0(lVar4,*(undefined8 *)
                        Method_Unity_Services_Vivox_ChannelSession_<DisconnectAsync>b__49_0__,uVar13
                 ,*(undefined8 *)puVar1);
    uVar13 = FUN_054f73b4(*(undefined8 *)puVar3,0);
    FUN_04e935f0(lVar4,*(undefined8 *)Method_Unity_Services_Vivox_ChannelId__ctor__,uVar13,
                 *(undefined8 *)puVar1);
    uVar13 = FUN_054f73b4(*(undefined8 *)puVar3,0);
    FUN_04e935f0(lVar4,*(undefined8 *)
                        Method_Unity_Services_Vivox_ChannelSession_AssertSessionNotDeleted__,uVar13,
                 *(undefined8 *)puVar1);
    uVar13 = FUN_054f73b4(*(undefined8 *)puVar3,0);
    FUN_04e935f0(lVar4,*(undefined8 *)PTR_DAT_069ff1b8,uVar13,*(undefined8 *)puVar1);
    uVar13 = FUN_054f73b4(*(undefined8 *)puVar3,0);
    FUN_04e935f0(lVar4,*(undefined8 *)
                        Method_Unity_Services_Vivox_ChannelSession_<DisconnectAsync>b__49_1__,uVar13
                 ,*(undefined8 *)puVar1);
    *(long *)(param_1 + 0xe) = lVar4;
    LeanTween__value(param_1 + 0xe,lVar4);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar11 = *(undefined8 *)(param_1 + 8);
    uVar13 = FUN_0602a808(lVar10);
    lVar4 = FUN_060032f4(uVar11,uVar13,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar12 = *(long **)(lVar10 + 0x10);
    uVar13 = FUN_0601ffa8(*(long *)(param_1 + 0xc),*(undefined8 *)(lVar4 + 0x10),0);
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar11 = FUN_0601ffbc(*(long *)(param_1 + 0xc),0);
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = FUN_0601ffc4(*(long *)(param_1 + 0xc),*(undefined8 *)(lVar10 + 0x18),lVar4,0);
    uVar7 = 10;
    if ((*(ulong *)(lVar4 + 0x18) & 0xff) != 0) {
      uVar7 = (undefined4)(*(ulong *)(lVar4 + 0x18) >> 0x20);
    }
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860(10);
    }
    lVar4 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar14 = *(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Mono_Security_Protocol_Ntlm_ChallengeResponse_set_Challenge__) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0602b718;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02dd004c(plVar12,*(long *)
                                   Method_Mono_Security_Protocol_Ntlm_ChallengeResponse_set_Challenge__
                          ,0);
LAB_0602b718:
    lVar4 = (*(code *)*puVar6)(plVar12,uVar14,uVar13,uVar11,uVar5,uVar7,puVar6[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_48 = FUN_0481d028(lVar4,*(undefined8 *)
                                   Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<GeometryChangedEvent>__
                           );
    uVar8 = FUN_047e6248(&local_48,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerLeaveEvent>__
                        );
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = local_48;
      LeanTween__value(param_1 + 0x10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031ed838(param_1 + 2,&local_48,param_1,
                   *(undefined8 *)Method_Unity_Services_Vivox_ChannelId_GetUriDesignator__);
      return;
    }
  }
  uVar13 = FUN_047e6288(&local_48,
                        *(undefined8 *)
                         Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerDownEvent>__
                       );
  uVar11 = FUN_03802ad4(uVar13,*(undefined8 *)(param_1 + 0xe),
                        *(undefined8 *)
                         Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannel__);
  uVar5 = thunk_FUN_02dd3144(*(undefined8 *)Method_Unity_Services_Vivox_ChannelSession__ctor__);
  FUN_047154b8(uVar5,uVar13,uVar11,
               *(undefined8 *)
                Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__);
  puVar1 = Method_System_IO_BufferedStream_SetLength__;
  *param_1 = -2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  LeanTween__value(param_1 + 0xe,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b19d8(param_1 + 2,uVar5,*(undefined8 *)puVar1);
  return;
}


