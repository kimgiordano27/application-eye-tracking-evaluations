/*
FUNCTION_NAME: TMPro.TMP_Asset$$set_version
ENTRY_POINT: 060524b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_8
*/


void TMPro_TMP_Asset__set_version(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000018;
  
  FUN_02d965b8();
  FUN_02d965b8(Method_Microsoft_CSharp_RuntimeBinder_Semantics_ConstVal_SpecialUnbox<double>__);
  FUN_02d965b8(Method_Microsoft_CSharp_RuntimeBinder_Semantics_ConstVal_SpecialUnbox<short>__);
  FUN_02d965b8(Method_Microsoft_CSharp_RuntimeBinder_Semantics_ConstVal_SpecialUnbox<ushort>__);
  FUN_02d965b8(PTR_DAT_069ff1a0);
  FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
  FUN_02d965b8(Method_Unity_Services_Vivox_ChannelSession_<ConnectAsync>b__45_1__);
  FUN_02d965b8(Method_Unity_Services_Vivox_ChannelSession_<DisconnectAsync>b__49_0__);
  FUN_02d965b8(PTR_DAT_069ff1b8);
  FUN_02d965b8(Method_Unity_Services_Vivox_ChannelSession_AssertSessionNotDeleted__);
  FUN_02d965b8(PTR_DAT_069ff1f8);
  *(undefined1 *)(unaff_x20 + 0xc85) = 1;
  puVar2 = Method_Unity_Multiplayer_Tools_Context_ContextsInitializer_DisableRuntimeContexts__;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 10);
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ffa50);
    FUN_04e92874(lVar4,*(undefined8 *)PTR_DAT_069ffa48);
    uVar12 = *(undefined8 *)
              Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Append<Inspector>__;
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar12 = FUN_054f73b4(uVar12,0);
    puVar1 = PTR_DAT_069ff9d8;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04e935f0(lVar4,*(undefined8 *)PTR_DAT_069ff1f8,uVar12,*(undefined8 *)PTR_DAT_069ff9d8);
    puVar3 = Method_UnityEngine_UIElements_ContextualMenuManipulator_OnPointerUpEventOSX__;
    uVar12 = FUN_054f73b4(*(undefined8 *)
                           Method_UnityEngine_UIElements_ContextualMenuManipulator_OnPointerUpEventOSX__
                          ,0);
    FUN_04e935f0(lVar4,*(undefined8 *)PTR_DAT_069ff1a0,uVar12,*(undefined8 *)puVar1);
    uVar12 = FUN_054f73b4(*(undefined8 *)puVar3,0);
    FUN_04e935f0(lVar4,*(undefined8 *)
                        Method_Unity_Services_Vivox_ChannelSession_<ConnectAsync>b__45_1__,uVar12,
                 *(undefined8 *)puVar1);
    uVar12 = FUN_054f73b4(*(undefined8 *)puVar3,0);
    FUN_04e935f0(lVar4,*(undefined8 *)
                        Method_Unity_Services_Vivox_ChannelSession_<DisconnectAsync>b__49_0__,uVar12
                 ,*(undefined8 *)puVar1);
    uVar12 = FUN_054f73b4(*(undefined8 *)puVar3,0);
    FUN_04e935f0(lVar4,*(undefined8 *)
                        Method_Unity_Services_Vivox_ChannelSession_AssertSessionNotDeleted__,uVar12,
                 *(undefined8 *)puVar1);
    uVar12 = FUN_054f73b4(*(undefined8 *)puVar3,0);
    FUN_04e935f0(lVar4,*(undefined8 *)PTR_DAT_069ff1b8,uVar12,*(undefined8 *)puVar1);
    *(long *)(unaff_x19 + 0xe) = lVar4;
    LeanTween__value(unaff_x19 + 0xe,lVar4);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 8);
    uVar12 = FUN_06050870(lVar9);
    lVar4 = FUN_06045ad4(uVar10,uVar12);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar11 = *(long **)(lVar9 + 0x10);
    uVar12 = FUN_05362cb4(*(undefined8 *)(lVar4 + 0x10),
                          *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x10),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar10 = FUN_060501a4(uVar12,*(undefined8 *)(lVar9 + 0x18),lVar4);
    uVar6 = 10;
    if ((*(ulong *)(lVar4 + 0x18) & 0xff) != 0) {
      uVar6 = (undefined4)(*(ulong *)(lVar4 + 0x18) >> 0x20);
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860(10);
    }
    lVar4 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar13 = *(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Method_Unity_Multiplayer_Tools_Common_ContinuousExponentialMovingAverage__ctor__) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_060527a0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_02dd004c(plVar11,*(long *)
                                   Method_Unity_Multiplayer_Tools_Common_ContinuousExponentialMovingAverage__ctor__
                          ,0);
LAB_060527a0:
    lVar4 = (*(code *)*puVar5)(plVar11,uVar13,uVar12,0,uVar10,uVar6,puVar5[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_stack_00000018 =
         FUN_0481d028(lVar4,*(undefined8 *)
                             Method_Microsoft_CSharp_RuntimeBinder_Semantics_ConstVal_SpecialUnbox<ushort>__
                     );
    uVar7 = FUN_047e6248(&stack0x00000018,
                         *(undefined8 *)
                          Method_Microsoft_CSharp_RuntimeBinder_Semantics_ConstVal_SpecialUnbox<short>__
                        );
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      LeanTween__value(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031f6f10(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar12 = FUN_047e6288(&stack0x00000018,
                        *(undefined8 *)
                         Method_Microsoft_CSharp_RuntimeBinder_Semantics_ConstVal_SpecialUnbox<double>__
                       );
  uVar10 = FUN_03805850(uVar12,*(undefined8 *)(unaff_x19 + 0xe),
                        *(undefined8 *)
                         Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Append<InspectorPanel>__
                       );
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Append<Member>__
                             );
  FUN_04715af8(uVar13,uVar12,uVar10,
               *(undefined8 *)
                Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Append<Label>__);
  puVar1 = Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Append<Image>__;
  *unaff_x19 = -2;
  unaff_x19[0xe] = 0;
  unaff_x19[0xf] = 0;
  LeanTween__value(unaff_x19 + 0xe,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b19d8(unaff_x19 + 2,uVar13,*(undefined8 *)puVar1);
  return;
}


