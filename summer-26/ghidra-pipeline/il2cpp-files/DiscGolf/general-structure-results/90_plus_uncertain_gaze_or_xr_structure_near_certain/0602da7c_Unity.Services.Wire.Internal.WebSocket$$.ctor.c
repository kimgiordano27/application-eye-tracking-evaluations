/*
FUNCTION_NAME: Unity.Services.Wire.Internal.WebSocket$$.ctor
ENTRY_POINT: 0602da7c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_5;functionality_data_collection_or_telemetry_hits_5
*/


void Unity_Services_Wire_Internal_WebSocket___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  int in_w8;
  undefined4 uVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *unaff_x25;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  if (in_w8 == 0) {
    uStack0000000000000018 = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 10);
    lVar3 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ffa50);
    FUN_04e92874(lVar3,*(undefined8 *)PTR_DAT_069ffa48);
    uVar11 = *(undefined8 *)Method_System_Char_System_IConvertible_ToSingle__;
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar11 = FUN_054f73b4(uVar11,0);
    puVar1 = PTR_DAT_069ff9d8;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04e935f0(lVar3,*(undefined8 *)PTR_DAT_069ff1f8,uVar11,*(undefined8 *)PTR_DAT_069ff9d8);
    uVar11 = FUN_054f73b4(*(undefined8 *)Method_Unity_Netcode_ByteUnpacker_ReadValueBitPacked__,0);
    FUN_04e935f0(lVar3,*(undefined8 *)PTR_DAT_069ff1a0,uVar11,*(undefined8 *)puVar1);
    puVar2 = Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide__;
    uVar11 = FUN_054f73b4(*(undefined8 *)
                           Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide__
                          ,0);
    FUN_04e935f0(lVar3,*(undefined8 *)
                        Method_Unity_Services_Vivox_ChannelSession_<ConnectAsync>b__45_1__,uVar11,
                 *(undefined8 *)puVar1);
    uVar11 = FUN_054f73b4(*(undefined8 *)puVar2,0);
    FUN_04e935f0(lVar3,*(undefined8 *)
                        Method_Unity_Services_Vivox_ChannelSession_<DisconnectAsync>b__49_0__,uVar11
                 ,*(undefined8 *)puVar1);
    uVar11 = FUN_054f73b4(*(undefined8 *)puVar2,0);
    FUN_04e935f0(lVar3,*(undefined8 *)Method_Unity_Services_Vivox_ChannelId__ctor__,uVar11,
                 *(undefined8 *)puVar1);
    uVar11 = FUN_054f73b4(*(undefined8 *)puVar2,0);
    FUN_04e935f0(lVar3,*(undefined8 *)
                        Method_Unity_Services_Vivox_ChannelSession_AssertSessionNotDeleted__,uVar11,
                 *(undefined8 *)puVar1);
    uVar11 = FUN_054f73b4(*(undefined8 *)puVar2,0);
    FUN_04e935f0(lVar3,*(undefined8 *)PTR_DAT_069ff1b8,uVar11,*(undefined8 *)puVar1);
    uVar11 = FUN_054f73b4(*(undefined8 *)puVar2,0);
    FUN_04e935f0(lVar3,*(undefined8 *)
                        Method_Unity_Services_Vivox_ChannelSession_<DisconnectAsync>b__49_1__,uVar11
                 ,*(undefined8 *)puVar1);
    *(long *)(unaff_x19 + 0xe) = lVar3;
    LeanTween__value(unaff_x19 + 0xe,lVar3);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar9 = *(undefined8 *)(unaff_x19 + 8);
    uVar11 = FUN_0602c1a8(lVar8);
    lVar3 = FUN_060032f4(uVar9,uVar11,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar10 = *(long **)(lVar8 + 0x10);
    uVar11 = FUN_05362cb4(*(undefined8 *)(lVar3 + 0x10),
                          *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x30),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar9 = FUN_06025340(uVar11,*(undefined8 *)(lVar8 + 0x18),lVar3);
    uVar5 = 10;
    if ((*(ulong *)(lVar3 + 0x18) & 0xff) != 0) {
      uVar5 = (undefined4)(*(ulong *)(lVar3 + 0x18) >> 0x20);
    }
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860(10);
    }
    lVar3 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    uVar12 = *(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Mono_Security_Protocol_Ntlm_ChallengeResponse_set_Challenge__) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0602dd30;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_02dd004c(plVar10,*(long *)
                                   Method_Mono_Security_Protocol_Ntlm_ChallengeResponse_set_Challenge__
                          ,0);
LAB_0602dd30:
    lVar3 = (*(code *)*puVar4)(plVar10,uVar12,uVar11,0,uVar9,uVar5,puVar4[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uStack0000000000000018 =
         FUN_0481d028(lVar3,*(undefined8 *)
                             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<GeometryChangedEvent>__
                     );
    uVar6 = FUN_047e6248(&stack0x00000018,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerLeaveEvent>__
                        );
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = uStack0000000000000018;
      LeanTween__value(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031ec3b0(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar11 = FUN_047e6288(&stack0x00000018,
                        *(undefined8 *)
                         Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerDownEvent>__
                       );
  uVar9 = FUN_03802ad4(uVar11,*(undefined8 *)(unaff_x19 + 0xe),
                       *(undefined8 *)Method_System_Char_ToLower__);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_ComponentModel_CharConverter_ConvertFrom__);
  FUN_047154b8(uVar12,uVar11,uVar9,*(undefined8 *)Method_System_Char_ToUpper__);
  puVar1 = Method_System_Text_BinHexEncoding_GetMaxCharCount__;
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  LeanTween__value(unaff_x19 + 0xe,0);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b19d8(unaff_x19 + 2,uVar12,*(undefined8 *)puVar1);
  return;
}


