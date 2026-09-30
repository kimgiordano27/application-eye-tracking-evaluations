/*
FUNCTION_NAME: Unity.Services.Core.ExternalUserIdProperty$$remove_UserIdChanged
ENTRY_POINT: 066958a0
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


void Unity_Services_Core_ExternalUserIdProperty__remove_UserIdChanged
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 extraout_x1;
  long lVar12;
  long unaff_x19;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c8;
  
  uStack0000000000000060 = param_2._0_8_;
                    /* try { // try from 066958b4 to 067958b7 has its CatchHandler @ 06695b64 */
  uStack00000000000000b8 = in_stack_00000058;
  uStack00000000000000b0 = in_stack_00000050;
                    /* try { // try from 066958bc to 067958c3 has its CatchHandler @ 06695b70 */
                    /* try { // try from 066958c4 to 06795abf has its CatchHandler @ 06695534 */
  uStack0000000000000090 = param_3;
  uStack00000000000000a0 = param_4;
  uStack00000000000000c8 = param_5;
  _in_stack_00000020 =
       FUN_03ad45a4(&stack0x00000090,param_2._8_4_,param_7,0,0,**(undefined8 **)(param_1 + 0xcb8));
  FUN_0697eb4c(&stack0x00000020,0);
  lVar13 = in_stack_00000088;
  puVar3 = System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo;
  if ((*(ushort *)
        (*(long *)(*(long *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo + 0x20) + 0x135) & 1)
      == 0) {
    FUN_031c09d4();
  }
  FUN_04544660(&stack0x00000070,*(undefined4 *)(lVar13 + 8),3,0,*unaff_x24);
  lVar13 = *(long *)(unaff_x19 + 0x20);
  _uStack0000000000000060 = FUN_0460e8d4(&stack0x00000088,*unaff_x28);
  auVar15 = FUN_0456e320(&stack0x00000060,*unaff_x23);
  auVar16 = FUN_045456e0(&stack0x00000070,*unaff_x29);
  puVar4 = System_Collections_IHashCodeProvider_TypeInfo;
  puVar2 = Sentry_IHasTags_TypeInfo;
  if (lVar13 != 0) {
    FUN_06a165cc(lVar13,auVar15._0_8_,auVar15._8_8_,auVar16._0_8_,auVar16._8_8_,0);
    iVar10 = FUN_0461e5c4(unaff_x19 + 0x1c0,*(undefined8 *)puVar2);
    lVar13 = in_stack_00000088;
    lVar12 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      FUN_031c09d4(lVar12);
    }
    iVar1 = *(int *)(lVar13 + 8);
    if ((*(ushort *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    puVar2 = PTR_DAT_070c22f8;
    fVar14 = DAT_012e3d5c;
    if (*(long *)(unaff_x19 + 0x1c0) != 0) {
      uVar11 = *(undefined4 *)(*(long *)(unaff_x19 + 0x1c0) + 0x20);
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
      fVar14 = (float)(int)((float)(iVar1 + iVar10) / fVar14);
      iVar10 = 0;
      if (fVar14 != INFINITY) {
        iVar10 = (int)fVar14 << 10;
      }
      uVar11 = FUN_059306e4(uVar11,iVar10,0);
      FUN_0461e634(unaff_x19 + 0x1c0,uVar11,*(undefined8 *)puVar5);
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
        auVar15 = FUN_0460e8d4(&stack0x00000088,*unaff_x28);
        auVar16 = FUN_0460b114(&stack0x00000080,*(undefined8 *)puVar4);
        uVar9 = in_stack_00000078;
        uVar8 = in_stack_00000070;
        FUN_0461e980(unaff_x19 + 0x1c0,*(undefined8 *)puVar7);
        FUN_0461f3e0(unaff_x19 + 0x1d0,*(undefined8 *)puVar6);
        lVar13 = in_stack_00000088;
        if ((*(ushort *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        in_stack_00000020 = 0;
        in_stack_00000028 = 0;
        uStack00000000000000b8 = uVar9;
        uStack00000000000000b0 = uVar8;
        uStack00000000000000c8 = extraout_x1;
        _uStack0000000000000090 = auVar15;
        _uStack00000000000000a0 = auVar16;
        _in_stack_00000020 =
             FUN_03ad6fa4(&stack0x00000090,*(undefined4 *)(lVar13 + 8),0x80,0,0,
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


