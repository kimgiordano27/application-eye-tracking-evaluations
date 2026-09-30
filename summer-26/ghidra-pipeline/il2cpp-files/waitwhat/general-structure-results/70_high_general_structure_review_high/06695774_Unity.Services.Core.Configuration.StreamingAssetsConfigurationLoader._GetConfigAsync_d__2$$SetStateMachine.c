/*
FUNCTION_NAME: Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader.<GetConfigAsync>d__2$$SetStateMachine
ENTRY_POINT: 06695774
PROGRAM: waitwhat-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Unity_Services_Core_Configuration_StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2__SetStateMachine
               (void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar14;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  ulong uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  FUN_03188a78(Sentry_IHasData_TypeInfo);
  FUN_03188a78(Sentry_IHasExtra_TypeInfo);
  FUN_03188a78(Sentry_IHasTags_TypeInfo);
                    /* try { // try from 0669579c to 067957c3 has its CatchHandler @ 06695b84 */
  FUN_03188a78(System_Collections_IHashCodeProvider_TypeInfo);
  FUN_03188a78(Best_HTTP_Shared_Extensions_IHeartbeat_TypeInfo);
  FUN_03188a78(Oisoi_Animation_IHideable_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0xf07) = 1;
  puVar6 = Oculus_Interaction_IHandVisual_TypeInfo;
  puVar5 = Oculus_Interaction_IHandSphereMap_TypeInfo;
  puVar3 = UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo;
  puVar2 = Best_HTTP_HostSetting_HostProtocolSupport_TypeInfo;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  uVar15 = unaff_x20[1];
  in_stack_00000060 = *unaff_x20;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000068 = uVar15;
  uVar10 = FUN_064b5b9c(3,0);
  FUN_0460e36c(&stack0x00000088,uVar15 & 0xffffffff,uVar10,*unaff_x26);
  uVar15 = unaff_x20[1];
  in_stack_00000060 = *unaff_x20;
  in_stack_00000068 = uVar15;
  uVar10 = FUN_064b5b9c(3,0);
  FUN_0460abac(&stack0x00000080,uVar15 & 0xffffffff,uVar10,*unaff_x25);
  in_stack_00000038 = unaff_x20[1];
  in_stack_00000030 = *unaff_x20;
  in_stack_00000048 = unaff_x21[1];
  in_stack_00000040 = *unaff_x21;
  in_stack_00000058 = *(undefined8 *)(unaff_x19 + 0x1c8);
  in_stack_00000050 = *(undefined8 *)(unaff_x19 + 0x1c0);
  uVar12 = FUN_0460eabc(&stack0x00000088,*unaff_x27);
  in_stack_000000c8 =
       FUN_0460b2fc(&stack0x00000080,
                    *(undefined8 *)UnityEngine_InputSystem_Haptics_IHaptics_TypeInfo);
  in_stack_00000068 = unaff_x20[1];
  in_stack_00000060 = *unaff_x20;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000098 = in_stack_00000038;
  in_stack_00000090 = in_stack_00000030;
  in_stack_000000a8 = in_stack_00000048;
  in_stack_000000a0 = in_stack_00000040;
  in_stack_000000b8 = in_stack_00000058;
  in_stack_000000b0 = in_stack_00000050;
  in_stack_000000c0 = uVar12;
  _in_stack_00000020 =
       FUN_03ad45a4(&stack0x00000090,in_stack_00000068 & 0xffffffff,0x80,0,0,
                    *(undefined8 *)Oculus_Interaction_HandGrab_IHandGrabState_TypeInfo);
  FUN_0697eb4c(&stack0x00000020,0);
  lVar14 = in_stack_00000088;
  puVar4 = System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo;
  if ((*(ushort *)
        (*(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo + 0x20) + 0x135) & 1)
      == 0) {
    FUN_031c09d4();
  }
  FUN_04544660(&stack0x00000070,*(undefined4 *)(lVar14 + 8),3,0,*(undefined8 *)puVar5);
  lVar14 = *(long *)(unaff_x19 + 0x20);
  _in_stack_00000060 = FUN_0460e8d4(&stack0x00000088,*(undefined8 *)puVar3);
  auVar17 = FUN_0456e320(&stack0x00000060,*(undefined8 *)puVar2);
  auVar18 = FUN_045456e0(&stack0x00000070,*(undefined8 *)puVar6);
  puVar5 = System_Collections_IHashCodeProvider_TypeInfo;
  puVar2 = Sentry_IHasTags_TypeInfo;
  if (lVar14 != 0) {
    FUN_06a165cc(lVar14,auVar17._0_8_,auVar17._8_8_,auVar18._0_8_,auVar18._8_8_,0);
    iVar11 = FUN_0461e5c4(unaff_x19 + 0x1c0,*(undefined8 *)puVar2);
    lVar14 = in_stack_00000088;
    lVar13 = *(long *)(*(long *)puVar4 + 0x20);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      FUN_031c09d4(lVar13);
    }
    iVar1 = *(int *)(lVar14 + 8);
    if ((*(ushort *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    puVar2 = PTR_DAT_070c22f8;
    fVar16 = DAT_012e3d5c;
    if (*(long *)(unaff_x19 + 0x1c0) != 0) {
      uVar10 = *(undefined4 *)(*(long *)(unaff_x19 + 0x1c0) + 0x20);
      if (DAT_07546c88 == '\0') {
        FUN_03188a78(PTR_DAT_070c22f8);
        DAT_07546c88 = '\x01';
      }
      puVar6 = Oisoi_Animation_IHideable_TypeInfo;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
      }
      fVar16 = (float)(int)((float)(iVar1 + iVar11) / fVar16);
      iVar11 = 0;
      if (fVar16 != INFINITY) {
        iVar11 = (int)fVar16 << 10;
      }
      uVar10 = FUN_059306e4(uVar10,iVar11,0);
      FUN_0461e634(unaff_x19 + 0x1c0,uVar10,*(undefined8 *)puVar6);
      if ((*(ushort *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      puVar8 = Sentry_IHasExtra_TypeInfo;
      puVar7 = Sentry_IHasData_TypeInfo;
      puVar6 = Oculus_Interaction_HandGrab_IHandGrabUseDelegate_TypeInfo;
      puVar5 = System_Net_HttpVersion_TypeInfo;
      puVar2 = UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
      if (*(long *)(unaff_x19 + 0x1c0) != 0) {
        FUN_0461f094(unaff_x19 + 0x1d0,*(undefined4 *)(*(long *)(unaff_x19 + 0x1c0) + 0x20),
                     *(undefined8 *)Best_HTTP_Shared_Extensions_IHeartbeat_TypeInfo);
        auVar17 = FUN_0460e8d4(&stack0x00000088,*(undefined8 *)puVar3);
        auVar18 = FUN_0460b114(&stack0x00000080,*(undefined8 *)puVar5);
        uVar9 = in_stack_00000078;
        uVar12 = in_stack_00000070;
        auVar19 = FUN_0461e980(unaff_x19 + 0x1c0,*(undefined8 *)puVar8);
        auVar20 = FUN_0461f3e0(unaff_x19 + 0x1d0,*(undefined8 *)puVar7);
        lVar14 = in_stack_00000088;
        if ((*(ushort *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        in_stack_00000020 = 0;
        in_stack_00000028 = 0;
        in_stack_000000b8 = uVar9;
        in_stack_000000b0 = uVar12;
        _in_stack_00000090 = auVar17;
        _in_stack_000000a0 = auVar18;
        _in_stack_000000c0 = auVar19;
        _in_stack_000000d0 = auVar20;
        _in_stack_00000020 =
             FUN_03ad6fa4(&stack0x00000090,*(undefined4 *)(lVar14 + 8),0x80,0,0,
                          *(undefined8 *)puVar6);
        FUN_0697eb4c(&stack0x00000020,0);
        FUN_0460e7ac(&stack0x00000088,*(undefined8 *)puVar2);
        FUN_0460afec(&stack0x00000080,*(undefined8 *)System_Net_HttpWebRequest_TypeInfo);
        FUN_04544948(&stack0x00000070,
                     *(undefined8 *)Oculus_Interaction_Input_IHandSkeletonProvider_TypeInfo);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


