/*
FUNCTION_NAME: UnityEngine.AndroidJNI$$NewStringUTF_Injected
ENTRY_POINT: 0704aaac
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;ui_or_gameplay_sink_hits_7;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0704ae04) */
/* WARNING: Removing unreachable block (ram,0x0704b4a8) */
/* WARNING: Removing unreachable block (ram,0x0704b498) */

void UnityEngine_AndroidJNI__NewStringUTF_Injected(long param_1,long param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  byte bVar15;
  long unaff_x20;
  long unaff_x22;
  long unaff_x24;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 uStack0000000000000008;
  undefined1 *in_stack_00000010;
  long in_stack_00000018;
  undefined1 *in_stack_00000020;
  undefined1 uStack000000000000002c;
  long in_stack_00000030;
  undefined1 uStack000000000000003c;
  
  if ((*(byte *)(unaff_x24 + 0xef2) & 1) == 0) {
    FUN_03642964(LabelTrack_TypeInfo);
    FUN_03642964(PTR_DAT_079fd888);
    FUN_03642964(System_Threading_OSSpecificSynchronizationContext_InvocationEntryDelegate_TypeInfo)
    ;
    FUN_03642964(UnityEngine_InputForUI_PointerEvent_Type_TypeInfo);
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
  }
  puVar3 = System_Threading_OSSpecificSynchronizationContext_InvocationEntryDelegate_TypeInfo;
  uStack000000000000003c = 0;
  in_stack_00000030 = 0;
  uStack000000000000002c = 0;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  iVar9 = *(int *)(unaff_x20 + 0x14);
  cVar1 = *(char *)(unaff_x20 + 0x30);
  lVar12 = *(long *)
            System_Threading_OSSpecificSynchronizationContext_InvocationEntryDelegate_TypeInfo;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar12 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_079ff4c8;
  FUN_06eaa264(&stack0x0000003c,**(undefined8 **)(lVar12 + 0xb8),0);
  in_stack_00000018 = 0;
  in_stack_00000020 = &stack0x0000003c;
  if (*(char *)(param_1 + 0x51) != '\0') {
    if (*(char *)(unaff_x20 + 0x34) != '\0') {
      if (*(int *)(*(long *)LabelTrack_TypeInfo + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_06ff9f90(param_1 + 0xb0,*(undefined8 *)(param_2 + 0x10),param_3 + 0x18,0);
    }
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar12 = *(long *)puVar3;
    }
    _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffffff00;
    FUN_06eaa264(&stack0x00000008,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),0);
    uStack000000000000002c = uStack0000000000000008;
    _uStack0000000000000008 = 0;
    in_stack_00000010 = &stack0x0000002c;
    FUN_07168630(param_1 + 0x68,0);
    FUN_06eaa270(&stack0x0000002c,0);
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar12 = *(long *)puVar3;
    }
    _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffffff00;
    FUN_06eaa264(&stack0x00000008,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),0);
    puVar4 = UnityEngine_EventSystems_PointerInputModule_ButtonState_TypeInfo;
    uStack000000000000002c = uStack0000000000000008;
    in_stack_00000010 = &stack0x0000002c;
    lVar12 = *(long *)(param_1 + 0x88);
    _uStack0000000000000008 = 0;
    auVar18 = FUN_039e4494(param_1 + 0x78,4,
                           *(undefined8 *)
                            UnityEngine_EventSystems_PointerInputModule_ButtonState_TypeInfo);
    puVar3 = UnityEngine_InputForUI_PointerEvent_Type_TypeInfo;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_03d1ad98(lVar12,auVar18._0_8_,auVar18._8_8_,
                 *(undefined8 *)UnityEngine_InputForUI_PointerEvent_Type_TypeInfo);
    lVar12 = *(long *)(param_1 + 0xa0);
    auVar18 = FUN_039e4494(param_1 + 0x90,4,*(undefined8 *)puVar4);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_03d1ad98(lVar12,auVar18._0_8_,auVar18._8_8_,*(undefined8 *)puVar3);
    uVar16 = *(undefined8 *)(param_1 + 0x88);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    iVar8 = FUN_0702b698(0);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_06e90978(param_2,uVar16,
                 *(undefined8 *)
                  UnityEngine_EventSystems_PointerInputModule_MouseButtonEventData_TypeInfo,0,
                 iVar8 << 2,0);
    uVar16 = *(undefined8 *)(param_1 + 0xa0);
    iVar8 = FUN_0702b6a0(0);
    FUN_06e90978(param_2,uVar16,*(undefined8 *)UnityEngine_UIElements_PointerMoveEvent_<>c_TypeInfo,
                 0,iVar8 << 2,0);
    FUN_06eaa270(&stack0x0000002c,0);
    FUN_06e35a28(*(undefined4 *)(param_1 + 0x13c),*(undefined4 *)(param_1 + 0x140),
                 (float)*(int *)(param_1 + 0x144),(float)*(int *)(param_1 + 0x54),0);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_06e9048c(param_2,*(undefined8 *)UnityEngine_UIElements_PointerLeaveEvent_<>c_TypeInfo,0);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_06e252b0(*(float *)(unaff_x22 + 0x134) / (float)*(int *)(param_1 + 0x58),
                 *(float *)(unaff_x22 + 0x138) / (float)*(int *)(param_1 + 0x58),0);
    FUN_06e35a28(0);
    FUN_06e9048c(param_2,*(undefined8 *)
                          UnityEngine_UIElements_Experimental_PointerMoveLinkTagEvent_<>c_TypeInfo,0
                );
    FUN_06e35a28((float)*(int *)(param_1 + 0x148),
                 (float)(*(int *)(param_1 + 0x60) * *(int *)(param_1 + 0x5c)),0,0,0);
    FUN_06e9048c(param_2,*(undefined8 *)
                          UnityEngine_EventSystems_PointerInputModule_MouseState_TypeInfo,0);
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_0704bdc8(param_1,param_2);
  FUN_0704bf1c(param_1,param_2,param_3 + 0x18);
  puVar3 = System_Runtime_Remoting_Contexts_DynamicPropertyCollection_DynamicPropertyReg_TypeInfo;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(long *)(unaff_x22 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if ((*(char *)(*(long *)(unaff_x22 + 0x1d8) + 0x142) == '\0') ||
     (*(char *)(unaff_x20 + 0x36) == '\0')) {
    bVar7 = 0 < iVar9;
  }
  else {
    bVar7 = true;
  }
  bVar15 = 0;
  if ((cVar1 != '\0') && (bVar7)) {
    bVar15 = *(byte *)(param_1 + 0x51) ^ 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_06e8e914(param_2,*(long *)(*(long *)
                                  System_Runtime_Remoting_Contexts_DynamicPropertyCollection_DynamicPropertyReg_TypeInfo
                                + 0xb8) + 0x10,bVar15 != 0,0);
  bVar7 = (bool)(bVar7 ^ 1);
  if (cVar1 != '\0') {
    bVar7 = true;
  }
  if (bVar7) {
    bVar15 = 0;
  }
  else {
    bVar15 = *(byte *)(param_1 + 0x51) ^ 1;
  }
  FUN_06e8e914(param_2,*(long *)(*(long *)puVar3 + 0xb8) + 0x14,bVar15 != 0,0);
  FUN_06e8e914(param_2,*(long *)(*(long *)puVar3 + 0xb8) + 0x18,*(undefined1 *)(param_1 + 0x51),0);
  FUN_06e8e914(param_2,*(long *)(*(long *)puVar3 + 0xb8) + 0x13c,*(undefined1 *)(param_1 + 0x51),0);
  if (*(char *)(unaff_x20 + 0x31) == '\0') {
    bVar5 = false;
    bVar7 = false;
    bVar6 = false;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x18);
    bVar5 = iVar9 == 1;
    if (bVar5) {
      iVar9 = FUN_07187d30(0);
      bVar6 = iVar9 == 0;
      if (*(char *)(unaff_x20 + 0x31) == '\0') {
        bVar7 = false;
        bVar5 = true;
        goto LAB_0704b034;
      }
      iVar9 = *(int *)(param_1 + 0x18);
    }
    else {
      bVar6 = false;
    }
    bVar7 = iVar9 == 2;
  }
LAB_0704b034:
  FUN_06e8e914(param_2,*(long *)(*(long *)puVar3 + 0xb8) + 0x40,bVar6 | bVar7,0);
  FUN_06e8e914(param_2,*(long *)(*(long *)puVar3 + 0xb8) + 0x44,bVar5,0);
  FUN_06e8e914(param_2,*(long *)(*(long *)puVar3 + 0xb8) + 0x3c,bVar7,0);
  FUN_06e8e914(param_2,*(long *)(*(long *)puVar3 + 0xb8) + 0x24,*(undefined1 *)(unaff_x20 + 0x33),0)
  ;
  FUN_06e8e914(param_2,*(long *)(*(long *)puVar3 + 0xb8) + 0x20,*(undefined1 *)(unaff_x20 + 0x32),0)
  ;
  FUN_06e8e914(param_2,*(long *)(*(long *)puVar3 + 0xb8) + 0x28,*(undefined1 *)(unaff_x20 + 0x34),0)
  ;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar12 = FUN_0702e180(0);
  if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar13 = FUN_071c0684(lVar12,0,0);
  if ((uVar13 & 1) == 0) {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    iVar9 = *(int *)(lVar12 + 0x84);
    bVar6 = false;
    bVar7 = false;
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    iVar9 = *(int *)(lVar12 + 0x84);
    bVar6 = *(int *)(lVar12 + 0x74) == 1;
    bVar7 = iVar9 == 1 && bVar6;
  }
  FUN_06e8e914(param_2,*(long *)(*(long *)puVar3 + 0xb8) + 0x124,bVar7,0);
  bVar7 = false;
  if (iVar9 == 2) {
    bVar7 = bVar6;
  }
  FUN_06e8e914(param_2,*(long *)(*(long *)puVar3 + 0xb8) + 0x128,bVar7,0);
  uVar10 = *(undefined4 *)(lVar12 + 0x70);
  if (*(int *)(*(long *)OVR_OpenVR_IVRChaperone__SetSceneColor_TypeInfo + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  iVar9 = FUN_0703b988(uVar10,0);
  FUN_06e8e914(param_2,*(long *)(*(long *)puVar3 + 0xb8) + 0x11c,iVar9 == 2,0);
  FUN_06e8e914(param_2,*(long *)(*(long *)puVar3 + 0xb8) + 0x120,iVar9 == 1,0);
  if (*(int *)(*(long *)PTR_DAT_07a020f0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar12 = FUN_06ec2f60(0);
  puVar2 = UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if (*(int *)(*(long *)UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo + 0xe4)
      == 0) {
    thunk_FUN_036a1978(*(long *)UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo
                      );
  }
  if (DAT_07eeb188 == '\0') {
    FUN_03642964(UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo);
    DAT_07eeb188 = '\x01';
  }
  lVar14 = *(long *)puVar2;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar14 = *(long *)puVar2;
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
  if (*(int *)(*(long *)LabelTrack_TypeInfo + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)LabelTrack_TypeInfo);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar16 = FUN_03fbb2ac(lVar12,*(undefined8 *)OVRPlugin_OVRP_1_74_0_TypeInfo);
  uVar13 = FUN_06fc35d8();
  if ((uVar13 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_071bc42c(0);
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar11 = FUN_06eac8c4(lVar14,uVar17,uVar16,uVar10,*(undefined1 *)(unaff_x20 + 0x35),0);
  FUN_06e9045c(param_2,*(undefined8 *)UnityEngine_UIElements_PointerOutEvent_<>c_TypeInfo,uVar11 & 1
               ,0);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  if (*(char *)(unaff_x20 + 0x35) == '\0') {
    uVar11 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(unaff_x22 + 0xd8);
    if (*(int *)(*(long *)PTR_DAT_079fd888 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar11 = FUN_06f01f30(uVar16,0);
    uVar11 = uVar11 ^ 1;
  }
  FUN_06e8e914(param_2,lVar12 + 0x48,uVar11 & 1,0);
  lVar12 = *(long *)(param_1 + 0xa8);
  if (lVar12 == 0) {
    FUN_06e8e914(param_2,*(long *)(*(long *)puVar3 + 0xb8) + 0x54,0,0);
  }
  else {
    if (*(int *)(*(long *)LabelTrack_TypeInfo + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_06fc638c(lVar12,*(undefined8 *)(param_2 + 0x10));
  }
  if (*(int *)(*(long *)PTR_DAT_079fdfb8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar13 = FUN_03d1b724(&stack0x00000030,
                        *(undefined8 *)
                         UnityEngine_EventSystems_PointerEventData_InputButton_TypeInfo);
  if ((uVar13 & 1) == 0) {
    FUN_06e8e914(param_2,*(long *)(*(long *)puVar3 + 0xb8) + 300,0,0);
  }
  else {
    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_06e8e914(param_2,*(long *)(*(long *)puVar3 + 0xb8) + 300,
                 *(undefined1 *)(in_stack_00000030 + 0x14),0);
  }
  lVar12 = in_stack_00000018;
  FUN_06eaa270(in_stack_00000020,0);
  if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c00(lVar12);
  }
  return;
}


