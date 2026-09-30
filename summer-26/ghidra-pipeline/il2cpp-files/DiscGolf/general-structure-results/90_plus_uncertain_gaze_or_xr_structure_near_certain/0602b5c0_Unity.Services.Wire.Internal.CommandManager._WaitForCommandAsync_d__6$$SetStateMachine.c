/*
FUNCTION_NAME: Unity.Services.Wire.Internal.CommandManager.<WaitForCommandAsync>d__6$$SetStateMachine
ENTRY_POINT: 0602b5c0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Services_Wire_Internal_CommandManager_<WaitForCommandAsync>d__6__SetStateMachine(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *unaff_x23;
  undefined8 uVar11;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  FUN_04e935f0();
  FUN_054f73b4(*unaff_x23,0);
  FUN_04e935f0();
  *(undefined8 *)(unaff_x19 + 0xe) = unaff_x21;
  LeanTween__value();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar9 = *(undefined8 *)(unaff_x19 + 8);
  uVar2 = FUN_0602a808();
  lVar3 = FUN_060032f4(uVar9,uVar2,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar10 = *(long **)(unaff_x20 + 0x10);
  uVar2 = FUN_0601ffa8(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar3 + 0x10),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar9 = FUN_0601ffbc(*(long *)(unaff_x19 + 0xc),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar4 = FUN_0601ffc4(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x20 + 0x18),lVar3,0);
  uVar6 = 10;
  if ((*(ulong *)(lVar3 + 0x18) & 0xff) != 0) {
    uVar6 = (undefined4)(*(ulong *)(lVar3 + 0x18) >> 0x20);
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860(10);
  }
  lVar3 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
  uVar11 = *(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo;
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Mono_Security_Protocol_Ntlm_ChallengeResponse_set_Challenge__) {
        puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0602b718;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02dd004c(plVar10,*(long *)
                                 Method_Mono_Security_Protocol_Ntlm_ChallengeResponse_set_Challenge__
                        ,0);
LAB_0602b718:
  lVar3 = (*(code *)*puVar5)(plVar10,uVar11,uVar2,uVar9,uVar4,uVar6,puVar5[1]);
  if (lVar3 != 0) {
    in_stack_00000018 =
         FUN_0481d028(lVar3,*(undefined8 *)
                             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<GeometryChangedEvent>__
                     );
    uVar7 = FUN_047e6248(&stack0x00000018,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerLeaveEvent>__
                        );
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      LeanTween__value(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031ed838(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar2 = FUN_047e6288(&stack0x00000018,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerDownEvent>__
                          );
      uVar9 = FUN_03802ad4(uVar2,*(undefined8 *)(unaff_x19 + 0xe),
                           *(undefined8 *)
                            Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannel__
                          );
      uVar4 = thunk_FUN_02dd3144(*(undefined8 *)Method_Unity_Services_Vivox_ChannelSession__ctor__);
      FUN_047154b8(uVar4,uVar2,uVar9,
                   *(undefined8 *)
                    Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__)
      ;
      puVar1 = Method_System_IO_BufferedStream_SetLength__;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      LeanTween__value(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_040b19d8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


