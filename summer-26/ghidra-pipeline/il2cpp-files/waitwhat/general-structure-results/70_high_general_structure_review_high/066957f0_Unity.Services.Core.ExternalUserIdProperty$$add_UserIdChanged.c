/*
FUNCTION_NAME: Unity.Services.Core.ExternalUserIdProperty$$add_UserIdChanged
ENTRY_POINT: 066957f0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Unity_Services_Core_ExternalUserIdProperty__add_UserIdChanged(undefined1 param_1 [16])

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar12;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined8 *puVar13;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 *puVar14;
  ulong uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  ulong uStack0000000000000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
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
  
  uStack0000000000000060 = param_1._0_8_;
  puVar13 = *(undefined8 **)(unaff_x23 + 0x2f0);
  uStack0000000000000020 = 0;
                    /* try { // try from 06695800 to 06795827 has its CatchHandler @ 06695b80 */
  puVar14 = *(undefined8 **)(unaff_x29 + 0xcd8);
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  uVar8 = FUN_064b5b9c(3,0);
  FUN_0460e36c(&stack0x00000088,param_1._8_4_,uVar8,*unaff_x26);
  uVar15 = unaff_x20[1];
  uStack0000000000000060 = *unaff_x20;
  uStack0000000000000068 = uVar15;
  uVar8 = FUN_064b5b9c(3,0);
                    /* try { // try from 06695840 to 06795847 has its CatchHandler @ 06695b78 */
  FUN_0460abac(&stack0x00000080,uVar15 & 0xffffffff,uVar8,*unaff_x25);
  in_stack_00000038 = unaff_x20[1];
  in_stack_00000030 = *unaff_x20;
  in_stack_00000048 = unaff_x21[1];
  in_stack_00000040 = *unaff_x21;
  in_stack_00000058 = *(undefined8 *)(unaff_x19 + 0x1c8);
  in_stack_00000050 = *(undefined8 *)(unaff_x19 + 0x1c0);
                    /* try { // try from 0669586c to 06795877 has its CatchHandler @ 0669589c */
  uVar10 = FUN_0460eabc(&stack0x00000088,*unaff_x27);
                    /* try { // try from 06695880 to 0679588b has its CatchHandler @ 06695898 */
  in_stack_000000c8 =
       FUN_0460b2fc(&stack0x00000080,
                    *(undefined8 *)UnityEngine_InputSystem_Haptics_IHaptics_TypeInfo);
                    /* try { // try from 0669588c to 067958b3 has its CatchHandler @ 06695534 */
  uStack0000000000000068 = unaff_x20[1];
  uStack0000000000000060 = *unaff_x20;
  uStack0000000000000020 = 0;
  in_stack_00000028 = 0;
                    /* catch() { ... } // from try @ 06695880 with catch @ 06695898 */
                    /* catch() { ... } // from try @ 0669586c with catch @ 0669589c */
  in_stack_00000098 = in_stack_00000038;
  in_stack_00000090 = in_stack_00000030;
  in_stack_000000a8 = in_stack_00000048;
  in_stack_000000a0 = in_stack_00000040;
  in_stack_000000b8 = in_stack_00000058;
  in_stack_000000b0 = in_stack_00000050;
  in_stack_000000c0 = uVar10;
  _uStack0000000000000020 =
       FUN_03ad45a4(&stack0x00000090,uStack0000000000000068 & 0xffffffff,0x80,0,0,
                    *(undefined8 *)Oculus_Interaction_HandGrab_IHandGrabState_TypeInfo);
  FUN_0697eb4c(&stack0x00000020,0);
  lVar12 = in_stack_00000088;
  puVar3 = System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo;
  if ((*(ushort *)
        (*(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo + 0x20) + 0x135) & 1)
      == 0) {
    FUN_031c09d4();
  }
  FUN_04544660(&stack0x00000070,*(undefined4 *)(lVar12 + 8),3,0,*unaff_x24);
  lVar12 = *(long *)(unaff_x19 + 0x20);
  _uStack0000000000000060 = FUN_0460e8d4(&stack0x00000088,*unaff_x28);
  auVar17 = FUN_0456e320(&stack0x00000060,*puVar13);
  auVar18 = FUN_045456e0(&stack0x00000070,*puVar14);
  puVar4 = System_Collections_IHashCodeProvider_TypeInfo;
  puVar2 = Sentry_IHasTags_TypeInfo;
  if (lVar12 != 0) {
    FUN_06a165cc(lVar12,auVar17._0_8_,auVar17._8_8_,auVar18._0_8_,auVar18._8_8_,0);
    iVar9 = FUN_0461e5c4(unaff_x19 + 0x1c0,*(undefined8 *)puVar2);
    lVar12 = in_stack_00000088;
    lVar11 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      FUN_031c09d4(lVar11);
    }
    iVar1 = *(int *)(lVar12 + 8);
    if ((*(ushort *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    puVar2 = PTR_DAT_070c22f8;
    fVar16 = DAT_012e3d5c;
    if (*(long *)(unaff_x19 + 0x1c0) != 0) {
      uVar8 = *(undefined4 *)(*(long *)(unaff_x19 + 0x1c0) + 0x20);
      if (DAT_07546c88 == '\0') {
        FUN_03188a78(PTR_DAT_070c22f8);
        DAT_07546c88 = '\x01';
      }
      puVar5 = Oisoi_Animation_IHideable_TypeInfo;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
      }
      fVar16 = (float)(int)((float)(iVar1 + iVar9) / fVar16);
      iVar9 = 0;
      if (fVar16 != INFINITY) {
        iVar9 = (int)fVar16 << 10;
      }
      uVar8 = FUN_059306e4(uVar8,iVar9,0);
      FUN_0461e634(unaff_x19 + 0x1c0,uVar8,*(undefined8 *)puVar5);
      if ((*(ushort *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      puVar7 = Sentry_IHasExtra_TypeInfo;
      puVar6 = Sentry_IHasData_TypeInfo;
      puVar5 = Oculus_Interaction_HandGrab_IHandGrabUseDelegate_TypeInfo;
      puVar4 = System_Net_HttpVersion_TypeInfo;
      puVar2 = UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo;
      if (*(long *)(unaff_x19 + 0x1c0) != 0) {
        FUN_0461f094(unaff_x19 + 0x1d0,*(undefined4 *)(*(long *)(unaff_x19 + 0x1c0) + 0x20),
                     *(undefined8 *)Best_HTTP_Shared_Extensions_IHeartbeat_TypeInfo);
        auVar17 = FUN_0460e8d4(&stack0x00000088,*unaff_x28);
        auVar18 = FUN_0460b114(&stack0x00000080,*(undefined8 *)puVar4);
        uStack0000000000000018 = in_stack_00000078;
        uStack0000000000000010 = in_stack_00000070;
        auVar19 = FUN_0461e980(unaff_x19 + 0x1c0,*(undefined8 *)puVar7);
        auVar20 = FUN_0461f3e0(unaff_x19 + 0x1d0,*(undefined8 *)puVar6);
        lVar12 = in_stack_00000088;
        if ((*(ushort *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        uStack0000000000000020 = 0;
        in_stack_00000028 = 0;
        in_stack_000000b8 = uStack0000000000000018;
        in_stack_000000b0 = uStack0000000000000010;
        _in_stack_00000090 = auVar17;
        _in_stack_000000a0 = auVar18;
        _in_stack_000000c0 = auVar19;
        _in_stack_000000d0 = auVar20;
        _uStack0000000000000020 =
             FUN_03ad6fa4(&stack0x00000090,*(undefined4 *)(lVar12 + 8),0x80,0,0,
                          *(undefined8 *)puVar5);
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


