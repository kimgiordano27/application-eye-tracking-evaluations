/*
FUNCTION_NAME: Unity.Services.Wire.Internal.WebSocket$$GetState
ENTRY_POINT: 0602e29c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Services_Wire_Internal_WebSocket__GetState(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *unaff_x23;
  undefined8 uVar10;
  long *unaff_x25;
  undefined8 in_stack_00000018;
  
  FUN_054f73b4(param_1,0);
  FUN_04e935f0();
  FUN_054f73b4(*unaff_x23,0);
  FUN_04e935f0();
  FUN_054f73b4(*unaff_x23,0);
  FUN_04e935f0();
  FUN_054f73b4(*unaff_x23,0);
  FUN_04e935f0();
  FUN_054f73b4(*unaff_x23,0);
  FUN_04e935f0();
  FUN_054f73b4(*unaff_x23,0);
  FUN_04e935f0();
  *(undefined8 *)(unaff_x19 + 0xe) = unaff_x21;
  LeanTween__value();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 8);
  uVar2 = FUN_0602c1a8();
  lVar3 = FUN_060032f4(uVar8,uVar2,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar9 = *(long **)(unaff_x20 + 0x10);
  uVar2 = FUN_05362cb4(*(undefined8 *)(lVar3 + 0x10),
                       *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x30),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar8 = FUN_060269f0(uVar2,*(undefined8 *)(unaff_x20 + 0x18),lVar3);
  uVar5 = 10;
  if ((*(ulong *)(lVar3 + 0x18) & 0xff) != 0) {
    uVar5 = (undefined4)(*(ulong *)(lVar3 + 0x18) >> 0x20);
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860(10);
  }
  lVar3 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  uVar10 = *(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Mono_Security_Protocol_Ntlm_ChallengeResponse_set_Challenge__) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0602e488;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_02dd004c(plVar9,*(long *)
                                Method_Mono_Security_Protocol_Ntlm_ChallengeResponse_set_Challenge__
                        ,0);
LAB_0602e488:
  lVar3 = (*(code *)*puVar4)(plVar9,uVar10,uVar2,0,uVar8,uVar5,puVar4[1]);
  if (lVar3 != 0) {
    in_stack_00000018 =
         FUN_0481d028(lVar3,*(undefined8 *)
                             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<GeometryChangedEvent>__
                     );
    uVar6 = FUN_047e6248(&stack0x00000018,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerLeaveEvent>__
                        );
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      LeanTween__value(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031ec5f8(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar2 = FUN_047e6288(&stack0x00000018,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerDownEvent>__
                          );
      uVar8 = FUN_03802ad4(uVar2,*(undefined8 *)(unaff_x19 + 0xe),
                           *(undefined8 *)Method_System_Char_ToLower__);
      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_ComponentModel_CharConverter_ConvertFrom__);
      FUN_047154b8(uVar10,uVar2,uVar8,*(undefined8 *)Method_System_Char_ToUpper__);
      puVar1 = Method_System_Text_BinHexEncoding_GetMaxCharCount__;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      LeanTween__value(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_040b19d8(unaff_x19 + 2,uVar10,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


