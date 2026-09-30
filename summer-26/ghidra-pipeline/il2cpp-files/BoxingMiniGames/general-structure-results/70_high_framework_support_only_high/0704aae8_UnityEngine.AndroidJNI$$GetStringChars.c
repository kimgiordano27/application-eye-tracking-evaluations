/*
FUNCTION_NAME: UnityEngine.AndroidJNI$$GetStringChars
ENTRY_POINT: 0704aae8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;ui_or_gameplay_sink_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0704ae04) */
/* WARNING: Removing unreachable block (ram,0x0704b4a8) */
/* WARNING: Removing unreachable block (ram,0x0704b498) */

void UnityEngine_AndroidJNI__GetStringChars(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 uStack0000000000000008;
  undefined1 *in_stack_00000010;
  long in_stack_00000018;
  undefined1 *in_stack_00000020;
  undefined1 uStack000000000000002c;
  long in_stack_00000030;
  undefined1 uStack000000000000003c;
  
  FUN_03642964(*(undefined8 *)(param_1 + 0x450));
  FUN_03642964(UnityEngine_EventSystems_PointerEventData_InputButton_TypeInfo);
  FUN_03642964(PTR_DAT_079fdfb8);
  FUN_03642964(UnityEngine_EventSystems_PointerInputModule_ButtonState_TypeInfo);
  FUN_03642964(PTR_DAT_079f4e28);
  FUN_03642964(OVR_OpenVR_IVRChaperone__SetSceneColor_TypeInfo);
  FUN_03642964(UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo);
  FUN_03642964(
              System_Runtime_Remoting_Contexts_DynamicPropertyCollection_DynamicPropertyReg_TypeInfo
              );
  FUN_03642964(PTR_DAT_079ff4c8);
  FUN_03642964(PTR_DAT_079fdf68);
  FUN_03642964(PTR_DAT_07a020f0);
  FUN_03642964(OVRPlugin_OVRP_1_74_0_TypeInfo);
  FUN_03642964(UnityEngine_EventSystems_PointerInputModule_MouseButtonEventData_TypeInfo);
  FUN_03642964(UnityEngine_EventSystems_PointerInputModule_MouseState_TypeInfo);
  FUN_03642964(UnityEngine_UIElements_PointerLeaveEvent_<>c_TypeInfo);
  FUN_03642964(UnityEngine_UIElements_PointerMoveEvent_<>c_TypeInfo);
  FUN_03642964(UnityEngine_UIElements_Experimental_PointerMoveLinkTagEvent_<>c_TypeInfo);
  FUN_03642964(UnityEngine_UIElements_PointerOutEvent_<>c_TypeInfo);
  *(undefined1 *)(unaff_x24 + 0xef2) = 1;
  puVar2 = System_Threading_OSSpecificSynchronizationContext_InvocationEntryDelegate_TypeInfo;
  uStack000000000000003c = 0;
  in_stack_00000030 = 0;
  uStack000000000000002c = 0;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar5 = *(long *)
           System_Threading_OSSpecificSynchronizationContext_InvocationEntryDelegate_TypeInfo;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar5 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_079ff4c8;
  FUN_06eaa264(&stack0x0000003c,**(undefined8 **)(lVar5 + 0xb8),0);
  in_stack_00000018 = 0;
  in_stack_00000020 = &stack0x0000003c;
  if (*(char *)(unaff_x21 + 0x51) != '\0') {
    if (*(char *)(unaff_x20 + 0x34) != '\0') {
      if (*(int *)(*(long *)LabelTrack_TypeInfo + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_06ff9f90(unaff_x21 + 0xb0,*(undefined8 *)(unaff_x19 + 0x10),unaff_x23 + 0x18,0);
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar5 = *(long *)puVar2;
    }
    _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffffff00;
    FUN_06eaa264(&stack0x00000008,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10),0);
    uStack000000000000002c = uStack0000000000000008;
    _uStack0000000000000008 = 0;
    in_stack_00000010 = &stack0x0000002c;
    FUN_07168630(unaff_x21 + 0x68,0);
    FUN_06eaa270(&stack0x0000002c,0);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar5 = *(long *)puVar2;
    }
    _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffffff00;
    FUN_06eaa264(&stack0x00000008,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18),0);
    puVar3 = UnityEngine_EventSystems_PointerInputModule_ButtonState_TypeInfo;
    uStack000000000000002c = uStack0000000000000008;
    in_stack_00000010 = &stack0x0000002c;
    lVar5 = *(long *)(unaff_x21 + 0x88);
    _uStack0000000000000008 = 0;
    auVar10 = FUN_039e4494(unaff_x21 + 0x78,4,
                           *(undefined8 *)
                            UnityEngine_EventSystems_PointerInputModule_ButtonState_TypeInfo);
    puVar2 = UnityEngine_InputForUI_PointerEvent_Type_TypeInfo;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_03d1ad98(lVar5,auVar10._0_8_,auVar10._8_8_,
                 *(undefined8 *)UnityEngine_InputForUI_PointerEvent_Type_TypeInfo);
    lVar5 = *(long *)(unaff_x21 + 0xa0);
    auVar10 = FUN_039e4494(unaff_x21 + 0x90,4,*(undefined8 *)puVar3);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_03d1ad98(lVar5,auVar10._0_8_,auVar10._8_8_,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_0702b698(0);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_06e90978();
    FUN_0702b6a0(0);
    FUN_06e90978();
    FUN_06eaa270(&stack0x0000002c,0);
    FUN_06e35a28(*(undefined4 *)(unaff_x21 + 0x13c),*(undefined4 *)(unaff_x21 + 0x140),
                 (float)*(int *)(unaff_x21 + 0x144),(float)*(int *)(unaff_x21 + 0x54),0);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_06e9048c();
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_06e252b0(*(float *)(unaff_x22 + 0x134) / (float)*(int *)(unaff_x21 + 0x58),
                 *(float *)(unaff_x22 + 0x138) / (float)*(int *)(unaff_x21 + 0x58),0);
    FUN_06e35a28(0);
    FUN_06e9048c();
    FUN_06e35a28((float)*(int *)(unaff_x21 + 0x148),
                 (float)(*(int *)(unaff_x21 + 0x60) * *(int *)(unaff_x21 + 0x5c)),0,0,0);
    FUN_06e9048c();
  }
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  *(undefined4 *)(unaff_x21 + 0x18) = 0;
  FUN_0704bdc8();
  FUN_0704bf1c();
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(long *)(unaff_x22 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_06e8e914();
  FUN_06e8e914();
  FUN_06e8e914();
  FUN_06e8e914();
  if ((*(char *)(unaff_x20 + 0x31) != '\0') && (*(int *)(unaff_x21 + 0x18) == 1)) {
    FUN_07187d30(0);
  }
  FUN_06e8e914();
  FUN_06e8e914();
  FUN_06e8e914();
  FUN_06e8e914();
  FUN_06e8e914();
  FUN_06e8e914();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar5 = FUN_0702e180(0);
  if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar6 = FUN_071c0684(lVar5,0,0);
  if ((uVar6 & 1) == 0) {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_06e8e914();
  FUN_06e8e914();
  uVar4 = *(undefined4 *)(lVar5 + 0x70);
  if (*(int *)(*(long *)OVR_OpenVR_IVRChaperone__SetSceneColor_TypeInfo + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_0703b988(uVar4,0);
  FUN_06e8e914();
  FUN_06e8e914();
  if (*(int *)(*(long *)PTR_DAT_07a020f0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar5 = FUN_06ec2f60(0);
  puVar2 = UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if (*(int *)(*(long *)UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo + 0xe4)
      == 0) {
    thunk_FUN_036a1978(*(long *)UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo
                      );
  }
  if (DAT_07eeb188 == '\0') {
    FUN_03642964(UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo);
    DAT_07eeb188 = '\x01';
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar7 = *(long *)puVar2;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (*(int *)(*(long *)LabelTrack_TypeInfo + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)LabelTrack_TypeInfo);
  }
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar9 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar8 = FUN_03fbb2ac(lVar5,*(undefined8 *)OVRPlugin_OVRP_1_74_0_TypeInfo);
  uVar6 = FUN_06fc35d8();
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_071bc42c(0);
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_06eac8c4(lVar7,uVar9,uVar8,uVar4,*(undefined1 *)(unaff_x20 + 0x35),0);
  FUN_06e9045c();
  if (*(char *)(unaff_x20 + 0x35) != '\0') {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
    if (*(int *)(*(long *)PTR_DAT_079fd888 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_06f01f30(uVar8,0);
  }
  FUN_06e8e914();
  lVar5 = *(long *)(unaff_x21 + 0xa8);
  if (lVar5 == 0) {
    FUN_06e8e914();
  }
  else {
    if (*(int *)(*(long *)LabelTrack_TypeInfo + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_06fc638c(lVar5,*(undefined8 *)(unaff_x19 + 0x10));
  }
  if (*(int *)(*(long *)PTR_DAT_079fdfb8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar6 = FUN_03d1b724(&stack0x00000030,
                       *(undefined8 *)UnityEngine_EventSystems_PointerEventData_InputButton_TypeInfo
                      );
  if ((uVar6 & 1) == 0) {
    FUN_06e8e914();
  }
  else {
    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_06e8e914();
  }
  lVar5 = in_stack_00000018;
  FUN_06eaa270(in_stack_00000020,0);
  if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c00(lVar5);
  }
  return;
}


