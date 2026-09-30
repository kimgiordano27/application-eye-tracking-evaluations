/*
FUNCTION_NAME: TMPro.TMP_Asset$$set_hashCode
ENTRY_POINT: 06052564
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_4
*/


void TMPro_TMP_Asset__set_hashCode(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x25;
  undefined8 in_stack_00000018;
  
  lVar3 = thunk_FUN_02dd3144();
  FUN_04e92874(lVar3,*(undefined8 *)PTR_DAT_069ffa48);
  uVar10 = *(undefined8 *)
            Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Append<Inspector>__;
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar10 = FUN_054f73b4(uVar10,0);
  puVar1 = PTR_DAT_069ff9d8;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04e935f0(lVar3,*(undefined8 *)PTR_DAT_069ff1f8,uVar10,*(undefined8 *)PTR_DAT_069ff9d8);
  puVar2 = Method_UnityEngine_UIElements_ContextualMenuManipulator_OnPointerUpEventOSX__;
  uVar10 = FUN_054f73b4(*(undefined8 *)
                         Method_UnityEngine_UIElements_ContextualMenuManipulator_OnPointerUpEventOSX__
                        ,0);
  FUN_04e935f0(lVar3,*(undefined8 *)PTR_DAT_069ff1a0,uVar10,*(undefined8 *)puVar1);
  uVar10 = FUN_054f73b4(*(undefined8 *)puVar2,0);
  FUN_04e935f0(lVar3,*(undefined8 *)
                      Method_Unity_Services_Vivox_ChannelSession_<ConnectAsync>b__45_1__,uVar10,
               *(undefined8 *)puVar1);
  uVar10 = FUN_054f73b4(*(undefined8 *)puVar2,0);
  FUN_04e935f0(lVar3,*(undefined8 *)
                      Method_Unity_Services_Vivox_ChannelSession_<DisconnectAsync>b__49_0__,uVar10,
               *(undefined8 *)puVar1);
  uVar10 = FUN_054f73b4(*(undefined8 *)puVar2,0);
  FUN_04e935f0(lVar3,*(undefined8 *)
                      Method_Unity_Services_Vivox_ChannelSession_AssertSessionNotDeleted__,uVar10,
               *(undefined8 *)puVar1);
  uVar10 = FUN_054f73b4(*(undefined8 *)puVar2,0);
  FUN_04e935f0(lVar3,*(undefined8 *)PTR_DAT_069ff1b8,uVar10,*(undefined8 *)puVar1);
  *(long *)(unaff_x19 + 0xe) = lVar3;
  LeanTween__value(unaff_x19 + 0xe,lVar3);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 8);
  uVar10 = FUN_06050870();
  lVar3 = FUN_06045ad4(uVar8,uVar10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar9 = *(long **)(unaff_x20 + 0x10);
  uVar10 = FUN_05362cb4(*(undefined8 *)(lVar3 + 0x10),
                        *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x10),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar8 = FUN_060501a4(uVar10,*(undefined8 *)(unaff_x20 + 0x18),lVar3);
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
  uVar11 = *(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Multiplayer_Tools_Common_ContinuousExponentialMovingAverage__ctor__)
      {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_060527a0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_02dd004c(plVar9,*(long *)
                                Method_Unity_Multiplayer_Tools_Common_ContinuousExponentialMovingAverage__ctor__
                        ,0);
LAB_060527a0:
  lVar3 = (*(code *)*puVar4)(plVar9,uVar11,uVar10,0,uVar8,uVar5,puVar4[1]);
  if (lVar3 != 0) {
    in_stack_00000018 =
         FUN_0481d028(lVar3,*(undefined8 *)
                             Method_Microsoft_CSharp_RuntimeBinder_Semantics_ConstVal_SpecialUnbox<ushort>__
                     );
    uVar6 = FUN_047e6248(&stack0x00000018,
                         *(undefined8 *)
                          Method_Microsoft_CSharp_RuntimeBinder_Semantics_ConstVal_SpecialUnbox<short>__
                        );
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      LeanTween__value(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031f6f10(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar10 = FUN_047e6288(&stack0x00000018,
                            *(undefined8 *)
                             Method_Microsoft_CSharp_RuntimeBinder_Semantics_ConstVal_SpecialUnbox<double>__
                           );
      uVar8 = FUN_03805850(uVar10,*(undefined8 *)(unaff_x19 + 0xe),
                           *(undefined8 *)
                            Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Append<InspectorPanel>__
                          );
      uVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Append<Member>__
                                 );
      FUN_04715af8(uVar11,uVar10,uVar8,
                   *(undefined8 *)
                    Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Append<Label>__
                  );
      puVar1 = Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Append<Image>__;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      LeanTween__value(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_040b19d8(unaff_x19 + 2,uVar11,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


