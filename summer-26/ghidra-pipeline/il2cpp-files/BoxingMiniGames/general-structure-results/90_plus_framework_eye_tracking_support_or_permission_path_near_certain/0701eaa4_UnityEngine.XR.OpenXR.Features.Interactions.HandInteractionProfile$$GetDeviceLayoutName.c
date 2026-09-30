/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.HandInteractionProfile$$GetDeviceLayoutName
ENTRY_POINT: 0701eaa4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_1
*/


void UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile__GetDeviceLayoutName
               (long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  undefined8 uVar33;
  ulong uVar34;
  long *plVar35;
  long *plVar36;
  ulong uVar37;
  ulong uVar38;
  undefined8 *puVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  uint uVar42;
  long lVar43;
  int iVar44;
  long unaff_x19;
  char cVar45;
  uint uVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  char cVar50;
  uint uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  uint uStack0000000000000054;
  uint uStack0000000000000064;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  ulong in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined4 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  ulong in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined4 in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  long in_stack_000003e0;
  undefined8 in_stack_000003f0;
  long in_stack_00000758;
  undefined4 in_stack_0000076c;
  int in_stack_00000864;
  long in_stack_00000868;
  undefined4 in_stack_00000988;
  uint in_stack_0000098c;
  
                    /* try { // try from 0701eaac to 0711eabb has its CatchHandler @ 0701eb9c */
                    /* try { // try from 0701ead8 to 0711eadb has its CatchHandler @ 0701ebb8 */
  if (param_1 == 0) goto LAB_070210d4;
  lVar26 = FUN_06fa1008(param_1,*(undefined8 *)
                                 System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo
                       );
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_070210d4;
  lVar27 = FUN_06fa1008(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)SlideShowScrollViewPro_FadeCanvas_<FadeInNow>d__8_TypeInfo);
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_070210d4;
  uVar28 = FUN_06fa1008(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)
                         System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo
                       );
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_070210d4;
  uVar29 = FUN_06fa1008(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukSceneModel_TypeInfo)
  ;
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_070210d4;
  lVar30 = FUN_06fa1008(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)UnityEngine_InputForUI_InputManagerProvider_IInput_TypeInfo);
  if ((*(long *)(unaff_x19 + 0x298) == 0) ||
     (FUN_0704a288(*(long *)(unaff_x19 + 0x298),lVar26,lVar27,uVar28,0), lVar27 == 0))
  goto LAB_070210d4;
  uVar3 = *(undefined4 *)(lVar27 + 0x128);
  uVar52 = *(undefined8 *)(lVar27 + 0x100);
  uVar38 = *(ulong *)(lVar27 + 0xf8);
  uVar55 = *(undefined8 *)(lVar27 + 0x110);
  uVar53 = *(undefined8 *)(lVar27 + 0x108);
  uVar57 = *(undefined8 *)(lVar27 + 0x120);
  uVar41 = *(undefined8 *)(lVar27 + 0x118);
  lVar47 = *(long *)(lVar27 + 0xd8);
  if (lVar26 == 0) goto LAB_070210d4;
  lVar31 = FUN_06fc38e0(lVar26,0);
  lVar48 = *(long *)(unaff_x19 + 0xe8);
  if (lVar48 != 0) {
    uVar13 = FUN_06fc2f4c(lVar27,0);
    uVar32 = FUN_06f98ac0(lVar48,uVar13 & 1,0);
    if ((uVar32 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_070210d4;
      uVar32 = thunk_FUN_06f98518(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(lVar27 + 0x1e0),0);
      if ((uVar32 & 1) != 0) {
        uVar14 = *(undefined4 *)(lVar27 + 0x160);
        uVar4 = *(undefined4 *)(lVar27 + 0x164);
        if (*(int *)(*(long *)UnityEngine_UIElements_DynamicAtlas_TextureInfo_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_036a1978();
        }
        FUN_06f98b40(&stack0x00000900,uVar14,uVar4,0);
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_070210d4;
        uVar33 = FUN_06f98500(*(long *)(unaff_x19 + 0xe8),0);
        if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_036a1978(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo)
          ;
        }
        FUN_07006be0(0,uVar33,&stack0x00000900,0,0,1,*(undefined8 *)OVRHandTest_BoolMonitor_TypeInfo
                     ,0);
        uVar14 = FUN_0701c450();
        FUN_06f98b84(&stack0x000008c0,uVar14,*(undefined4 *)(lVar27 + 0x160),
                     *(undefined4 *)(lVar27 + 0x164),0);
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_070210d4;
        uVar33 = FUN_06f98508(*(long *)(unaff_x19 + 0xe8),0);
        FUN_07006be0(0,uVar33,&stack0x000008c0,0,0,1,
                     *(undefined8 *)OVRHand_MicrogestureType_TypeInfo,0);
      }
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_070210d4;
      uVar32 = FUN_06f98518(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(lVar27 + 0x1e0),0);
      if ((uVar32 & 1) != 0) {
        lVar48 = *(long *)(unaff_x19 + 0xe8);
        if ((((lVar48 == 0) || (*(long *)(lVar48 + 0x90) == 0)) ||
            (lVar43 = *(long *)(*(long *)(lVar48 + 0x90) + 0x30), lVar43 == 0)) ||
           ((*(long *)(lVar48 + 0x30) == 0 ||
            (FUN_06fd2da0(*(long *)(lVar48 + 0x30),lVar27,*(undefined4 *)(lVar43 + 0x18),0),
            *(long *)(unaff_x19 + 0xe8) == 0)))) goto LAB_070210d4;
        FUN_06fbba0c();
      }
    }
  }
  puVar7 = Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo;
  if (*(int *)(lVar27 + 0x188) != 1) {
    *(undefined1 *)(unaff_x19 + 0x134) = 0;
  }
  bVar11 = FUN_0701e2a4();
  lVar48 = *(long *)puVar7;
  *(byte *)(unaff_x19 + 0x140) = bVar11 & 1;
  if (*(int *)(lVar48 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar32 = FUN_0701e214(lVar27);
  if ((uVar32 & 1) != 0) {
    if (*(int *)(*(long *)UnityEngine_UIElements_HelpBox_UxmlFactory_TypeInfo + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_06fb7158();
    FUN_06fbba0c();
    goto LAB_0701ee34;
  }
  uVar13 = FUN_06fc2f4c(lVar27,0);
  uVar32 = FUN_0701e534();
  if (((uVar32 & 1) == 0) || (*(int *)(unaff_x19 + 0x2d8) != 1 || (uVar13 & 1) != 0)) {
    if (*(int *)(*(long *)PTR_DAT_079f4530 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar32 = FUN_07172d08(0);
    if ((uVar32 & 1) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetInteractionProfileType
                         ();
    }
  }
  else {
    uVar15 = 1;
  }
  uVar33 = FUN_0701e680();
  FUN_07021180(uVar33,lVar27);
  bVar11 = FUN_07002118();
  bVar12 = UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_<>c__DisplayClass17_0___ctor
                     ();
  bVar11 = (bVar12 ^ 1) & bVar11;
  uVar16 = FUN_0701c358();
  bVar10 = false;
  uVar25 = 0;
  if (((bVar11 & 1) != 0) && ((uVar16 & 1) == 0)) {
    uVar25 = in_stack_0000098c;
    if (in_stack_0000098c == 0) {
      bVar10 = true;
    }
    else {
      if (in_stack_0000098c != 1) {
        thunk_FUN_036aa1c8(PTR_DAT_079fb6d0);
        uVar28 = thunk_FUN_0367fe20();
        FUN_05d8628c(uVar28,0);
        uVar29 = thunk_FUN_036aa1c8(OVRHaptics_Config_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar28,uVar29);
      }
      bVar10 = false;
    }
  }
  FUN_06fc35d8(lVar27,0);
  if (lVar30 == 0) goto LAB_070210d4;
  FUN_06fc2f3c(lVar27,0);
  auVar58 = FUN_0702123c();
  uVar32 = auVar58._0_8_;
  lVar48 = *(long *)(unaff_x19 + 0x2a0);
  bVar12 = auVar58[2];
  if (lVar48 != 0) {
    *(byte *)(lVar48 + 0x14) = bVar11 & 1;
    *(undefined4 *)(lVar48 + 0x10) = in_stack_00000988;
    *(byte *)(lVar48 + 0x17) = bVar12 & 1;
    FUN_0703dae8(lVar48,uVar28,0);
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_070210d4;
    FUN_0703dc54(*(long *)(unaff_x19 + 0x2a0),0);
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_070210d4;
    if (*(char *)(*(long *)(unaff_x19 + 0x2a0) + 0x15) != '\0') {
      if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_070210d4;
      FUN_0459fb44(&stack0x000003d0,*(long *)(unaff_x19 + 0x108),
                   *(undefined8 *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingPlayAreaSize_TypeInfo);
      puVar7 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo_TypeInfo;
      do {
        uVar34 = FUN_05897b28(&stack0x000008a0,*(undefined8 *)puVar7);
        if ((uVar34 & 1) == 0) goto LAB_0701f070;
        if (in_stack_000003e0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
      } while (*(int *)(in_stack_000003e0 + 0x10) - 0xe7U < 0xfffffff5);
      if (*(long *)(unaff_x19 + 0x2a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_0703dc4c(*(long *)(unaff_x19 + 0x2a0),0);
LAB_0701f070:
      FUN_05897b24(&stack0x000008a0,
                   *(undefined8 *)
                    OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo);
    }
  }
  if (*(char *)(lVar27 + 0x1ac) == '\0') {
    uVar17 = 0;
  }
  else {
    uVar17 = FUN_06ff8fe0(unaff_x19 + 0x310,0);
    uVar17 = uVar17 & 1;
  }
  if (lVar30 == 0) goto LAB_070210d4;
  if (*(char *)(lVar30 + 0x10) == '\0') {
    uVar18 = 0;
    uVar19 = 0;
    if (uVar17 == 0) goto LAB_0701f0d8;
LAB_0701f0c8:
    cVar45 = *(char *)(lVar27 + 0x192);
  }
  else {
    uVar18 = FUN_06ff8fe0(unaff_x19 + 0x310,0);
    uVar19 = uVar18;
    if (uVar17 != 0) goto LAB_0701f0c8;
LAB_0701f0d8:
    uVar18 = uVar19;
    cVar45 = '\0';
  }
  if (*(char *)(lVar27 + 0x1ac) == '\0') {
    uStack0000000000000054 = 0;
  }
  else {
    uStack0000000000000054 = FUN_06ff8fe0(unaff_x19 + 0x310,0);
  }
  uVar34 = FUN_06fc2f3c(lVar27,0);
  if ((uVar34 & 1) == 0) {
    uStack0000000000000064 = FUN_06fc2f4c(lVar27,0);
  }
  else {
    uStack0000000000000064 = 1;
  }
  if ((*(char *)(lVar27 + 400) == '\0') && ((uVar32 & 1) == 0)) {
    cVar50 = *(char *)(unaff_x19 + 0x140);
  }
  else {
    cVar50 = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_070210d4;
  uVar19 = FUN_0705ca54(*(long *)(unaff_x19 + 0x168),lVar26,lVar27,uVar28,uVar29,0);
  if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_070210d4;
  uVar20 = FUN_0704472c(*(long *)(unaff_x19 + 0x170),lVar26,lVar27,uVar28,uVar29,0);
  if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_070210d4;
  bVar9 = cVar45 != '\0';
  uVar21 = FUN_06ff6c3c(*(long *)(unaff_x19 + 0x1c0),0);
  if (cVar50 == '\0' && !bVar9) {
    cVar50 = '\0';
    uVar22 = 0;
  }
  else {
    iVar24 = *(int *)(unaff_x19 + 0x2b0);
    if (*(int *)(*(long *)Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo + 0xe4) ==
        0) {
      thunk_FUN_036a1978();
    }
    uVar22 = FUN_0701e3a0(lVar27);
    uVar22 = (uint)(iVar24 == 2) | uVar22 ^ 1;
  }
  uVar22 = (uint)(byte)(bVar12 | auVar58[1]) | uVar13 | uVar22 | uStack0000000000000064;
  if ((uVar16 & uVar22 & 1) != 0) {
    uVar22 = bVar12 & 1;
  }
  cVar5 = *(char *)(unaff_x19 + 0x140);
  if (cVar50 == '\0') {
    if (((uint)(cVar45 == '\0') & (uStack0000000000000064 ^ 1)) == 0) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_070210d4;
      bVar6 = false;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) = 500;
    }
    else {
      bVar6 = false;
    }
  }
  else {
    lVar26 = *(long *)(unaff_x19 + 0x1b0);
    if (lVar26 == 0) goto LAB_070210d4;
    iVar24 = auVar58._12_4_ + -1;
    iVar44 = 500;
    if (*(int *)(unaff_x19 + 0x2b0) != 1) {
      iVar44 = 300;
    }
    if (499 < iVar24) {
      iVar24 = 500;
    }
    if ((uVar32 & 1) != 0) {
      iVar44 = iVar24;
    }
    *(int *)(lVar26 + 0x10) = iVar44;
    if (iVar44 < 500) {
      *(undefined1 *)(lVar26 + 0xd8) = 0;
      bVar6 = true;
      *(undefined4 *)(unaff_x19 + 0x2b0) = 0;
    }
    else {
      bVar6 = true;
    }
  }
  uVar42 = (uint)(cVar5 != '\0');
  uVar51 = uVar22 | uVar42;
  uVar23 = FUN_070214bc();
  if ((uVar16 & 1) == 0) {
    bVar12 = 0;
  }
  else {
    bVar12 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  uVar2 = uVar25;
  if ((bVar12 != 0 || *(char *)(unaff_x19 + 0x140) != '\0') ||
      (*(char *)(lVar27 + 0x1e0) != '\x01' || ((uint)(bVar6 || bVar9) & (uVar51 ^ 1)) != 0)) {
    uVar2 = 1;
  }
  if (*(long *)(lVar27 + 0x1a0) == 0) goto LAB_070210d4;
  uVar15 = (uVar15 | (uint)uVar33 | uVar23) & (uVar13 ^ 1);
  uVar34 = FUN_06e81af8(*(long *)(lVar27 + 0x1a0),0);
  uVar23 = uVar15 | uVar2;
  iVar24 = FUN_071cb888(0);
  puVar7 = Sirenix_Serialization_RectFormatter_TypeInfo;
  if (iVar24 == 0x15) {
    uVar46 = uVar23;
    if ((uVar34 & 1) == 0) {
      uVar46 = uVar15;
    }
    if (*(char *)(unaff_x19 + 0x2dc) != '\0') goto LAB_0701f388;
  }
  else {
LAB_0701f388:
    uVar46 = uVar23;
  }
  if (*(int *)(*(long *)Sirenix_Serialization_RectFormatter_TypeInfo + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_06eed3b0(&stack0x000003d0,0);
  if ((float)in_stack_000003f0 == 1.0) {
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_06eed3b0(&stack0x000003d0,0);
    if ((float)((ulong)in_stack_000003f0 >> 0x20) != 1.0) goto LAB_0701f3ec;
  }
  else {
LAB_0701f3ec:
    uVar46 = uVar23;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    uVar46 = uVar2 | uVar46;
  }
  uVar34 = FUN_071cb8d8(0);
  uVar15 = uVar2 | uVar46;
  uVar23 = uVar15;
  if ((uVar34 & 1) == 0) {
    uVar23 = uVar46;
  }
  FUN_071a6cd0(&stack0x00000940,0,0);
  FUN_071a6cec(&stack0x00000940,0,0);
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_070210d4;
  plVar36 = (long *)(unaff_x19 + 0x228);
  FUN_0705fa40(*(long *)(unaff_x19 + 0x228),&stack0x00000620,1,0);
  if (*(int *)(lVar27 + 0xe8) == 0) {
    if (lVar47 == 0) goto LAB_070210d4;
    iVar24 = thunk_FUN_07176938(lVar47,0);
    puVar8 = PTR_DAT_079f79a0;
    if (*(int *)(*(long *)PTR_DAT_079f79a0 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_071e0978(&stack0x000003d0,2,0);
    if ((*(long *)(lVar27 + 0x1a0) == 0) ||
       ((uVar34 = FUN_06e81af8(*(long *)(lVar27 + 0x1a0),0), (uVar34 & 1) != 0 &&
        (*(long *)(lVar27 + 0x1a0) == 0)))) goto LAB_070210d4;
    uVar2 = uVar15 & iVar24 != 1;
    puVar39 = (undefined8 *)(unaff_x19 + 600);
    if (*(long *)(unaff_x19 + 600) == 0) {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar28 = FUN_06eec898(&stack0x000005f0,0);
      *puVar39 = uVar28;
      thunk_FUN_036b7ad0(puVar39,uVar28);
    }
    else {
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar34 = FUN_071e0ef8(&stack0x000005c0,&stack0x00000590,0);
      if ((uVar34 & 1) != 0) {
        FUN_06eec968(puVar39,&stack0x00000560,0);
      }
    }
    puVar1 = (undefined8 *)(unaff_x19 + 0x260);
    if (*(long *)(unaff_x19 + 0x260) == 0) {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar28 = FUN_06eec898(&stack0x00000530,0);
      *puVar1 = uVar28;
      thunk_FUN_036b7ad0(puVar1,uVar28);
    }
    else {
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar34 = FUN_071e0ef8(&stack0x00000500,&stack0x000004d0,0);
      if ((uVar34 & 1) != 0) {
        FUN_06eec968(puVar1,&stack0x000004a0,0);
      }
    }
    if (uVar2 != 0) {
      FUN_070216c4();
    }
    if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_070210d4;
    bVar12 = (byte)uVar2 ^ 1;
    *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar12;
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_070210d4;
    *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar12;
    if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_070210d4;
    *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar12;
    if ((uVar23 & 1) == 0) {
      uVar28 = *puVar39;
    }
    else {
      if (*plVar36 == 0) goto LAB_070210d4;
      uVar28 = FUN_0705f64c(*plVar36,0);
    }
    *(undefined8 *)(unaff_x19 + 0x230) = uVar28;
    thunk_FUN_036b7ad0(unaff_x19 + 0x230);
    lVar26 = 0x248;
    if ((uVar15 & 1) == 0) {
      lVar26 = 0x260;
    }
    *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + lVar26);
    thunk_FUN_036b7ad0(unaff_x19 + 0x240);
  }
  else {
    if (((*(long *)(lVar27 + 0x230) == 0) ||
        (FUN_03c37834(*(long *)(lVar27 + 0x230),&stack0x00000868,
                      *(undefined8 *)Zenject_FactoryFromBinderBase_<>c__DisplayClass33_0_TypeInfo),
        in_stack_00000868 == 0)) || (plVar35 = (long *)FUN_0701a950(), plVar35 == (long *)0x0))
    goto LAB_070210d4;
    if (*plVar35 != *(long *)Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar35);
    }
    lVar26 = *plVar36;
    if (lVar26 != plVar35[0x45]) {
      if (lVar26 == 0) goto LAB_070210d4;
      FUN_0705f5f8(lVar26,0);
      *plVar36 = plVar35[0x45];
      thunk_FUN_036b7ad0(plVar36);
      lVar26 = *plVar36;
    }
    if (lVar26 == 0) goto LAB_070210d4;
    uVar28 = FUN_0705f64c(lVar26,0);
    *(undefined8 *)(unaff_x19 + 0x230) = uVar28;
    thunk_FUN_036b7ad0(unaff_x19 + 0x230,uVar28);
    *(long *)(unaff_x19 + 0x240) = plVar35[0x48];
    thunk_FUN_036b7ad0(unaff_x19 + 0x240);
    *(long *)(unaff_x19 + 600) = plVar35[0x4b];
    thunk_FUN_036b7ad0(unaff_x19 + 600);
    *(long *)(unaff_x19 + 0x260) = plVar35[0x4c];
    thunk_FUN_036b7ad0(unaff_x19 + 0x260);
    uVar15 = uVar2;
  }
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_070210d4;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (uVar13 & 1) == 0) {
    if (*plVar36 == 0) goto LAB_070210d4;
    uVar28 = FUN_0705f64c(*plVar36,0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar28;
    thunk_FUN_036b7ad0(unaff_x19 + 0x118,uVar28);
  }
  cVar45 = *(char *)(lVar27 + 0x191);
  FUN_06fb7158();
  iVar24 = FUN_071cb888(0);
  if (iVar24 == 2) {
    FUN_06eea938(&stack0x000003d0,*(undefined8 *)(unaff_x19 + 0x248),0);
    FUN_06eea938(&stack0x000001d0,*(undefined8 *)(unaff_x19 + 0x250),0);
    if (lVar31 == 0) goto LAB_070210d4;
    FUN_071f453c(lVar31,&stack0x00000470,&stack0x00000440,0);
  }
  puVar7 = OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo;
  lVar30 = *(long *)(unaff_x19 + 0x108);
  lVar26 = *(long *)OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo;
  if (*(int *)(lVar26 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar26 = *(long *)puVar7;
  }
  puVar39 = *(undefined8 **)(lVar26 + 0xb8);
  lVar48 = puVar39[1];
  if (lVar48 == 0) {
    if (*(int *)(lVar26 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      puVar39 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar28 = *puVar39;
    lVar48 = thunk_FUN_0367fe20(*(undefined8 *)OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo);
    FUN_04b20cd8(lVar48,uVar28,*(undefined8 *)OVRGLTFLoader_<LoadGLBCoroutine>d__26_TypeInfo,0);
    plVar36 = (long *)(*(long *)(*(long *)OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo + 0xb8) +
                      8);
    *plVar36 = lVar48;
    thunk_FUN_036b7ad0(plVar36,lVar48);
  }
  if (lVar30 == 0) goto LAB_070210d4;
  lVar26 = FUN_0459f6fc(lVar30,lVar48,
                        *(undefined8 *)OVRGLTFAnimatinonNode_OVRGLTFTransformType_TypeInfo);
  if ((uVar19 & 1) != 0) {
    FUN_06fbba0c();
  }
  if ((uVar20 & 1) != 0) {
    FUN_06fbba0c();
  }
  uVar19 = (uint)(byte)(cVar45 != '\0' | auVar58[3]) & (uVar13 ^ 1);
  if ((uVar22 & 1) == 0 && uVar42 == 0) {
    if (*(char *)(lVar27 + 400) == '\0' && !bVar9) {
      bVar12 = auVar58[0] & 1;
    }
    else {
      bVar12 = 1;
    }
  }
  else {
    bVar12 = 0;
  }
  lVar30 = *(long *)(unaff_x19 + 0xe8);
  uVar15 = uVar15 & bVar12 != 0;
  if (lVar30 != 0) {
    uVar20 = FUN_06fc2f4c(lVar27,0);
    uVar34 = FUN_06f98ac0(lVar30,uVar20 & 1,0);
    if ((uVar34 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_070210d4;
      FUN_06f98ae8(*(long *)(unaff_x19 + 0xe8),&stack0x00000864,0);
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_070210d4;
      uVar51 = in_stack_00000864 == 1 | uVar51;
      uVar34 = FUN_06f98444(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar34 & 1) == 0) && ((uStack0000000000000064 & 1) == 0)) {
        uVar15 = 0;
        uVar19 = 0;
        uVar51 = 0;
        uStack0000000000000054 = 0;
        *(undefined1 *)(unaff_x19 + 0x140) = 0;
      }
      if (*(char *)(unaff_x19 + 0x134) != '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_070210d4;
        bVar12 = FUN_06f9858c(*(long *)(unaff_x19 + 0xe8),0);
        *(byte *)(unaff_x19 + 0x134) = bVar12 & 1;
      }
    }
  }
  if (*(long *)(lVar27 + 0x1d8) == 0) goto LAB_070210d4;
  *(undefined1 *)(*(long *)(lVar27 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  iVar24 = auVar58._8_4_;
  if ((uVar16 & 1) == 0) {
    bVar12 = 0;
  }
  else {
    lVar30 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar30 == 0) goto LAB_070210d4;
    if ((*(char *)(lVar30 + 0x15) != '\0') &&
       ((iVar24 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_0703dc4c(lVar30,0);
    }
    bVar12 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  if (bVar12 != 0 || ((uVar51 & 1) != 0 || uVar15 != 0)) {
    if (((uVar16 | uVar51 ^ 0xffffffff) & 1) == 0) {
      FUN_071a6688(&stack0x00000830,0,0);
      FUN_0701c450();
    }
    else {
      FUN_071a6688(&stack0x00000830,0x31,0);
    }
    if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4) == 0
       ) {
      thunk_FUN_036a1978(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo);
    }
    FUN_07006be0(0,(long *)(unaff_x19 + 0x268),&stack0x00000830,0,1,1,
                 *(undefined8 *)
                  OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose_TypeInfo,0);
    lVar30 = *(long *)(unaff_x19 + 0x268);
    if ((lVar30 == 0) || (lVar31 == 0)) goto LAB_070210d4;
    FUN_071f4d90(lVar31,*(undefined8 *)(lVar30 + 0x58),&stack0x00000410,0);
    if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_071ff388(&stack0x000009d8,lVar31,0);
    FUN_071e8b78(lVar31,0);
  }
  if ((uVar16 & 1) == 0) {
    if ((bVar11 & 1) != 0) {
LAB_0701fd04:
      bVar9 = false;
      plVar36 = (long *)(unaff_x19 + 0x278);
      puVar39 = (undefined8 *)OVRGLTFLoader_<ProcessNode>d__38_TypeInfo;
LAB_0701fd14:
      uVar28 = *puVar39;
      if (bVar9) {
        lVar30 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar30 == 0) goto LAB_070210d4;
        uVar14 = FUN_0703c308(lVar30,0);
        uVar14 = FUN_0703c414(lVar30,uVar14,0);
        FUN_071a6688(&stack0x000007f0,uVar14,0);
        lVar30 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar30 == 0) goto LAB_070210d4;
        uVar14 = FUN_0703c308(lVar30,0);
        FUN_0703dff8(lVar30,&stack0x00000390,uVar14,0);
      }
      else {
        uVar14 = FUN_07002644(in_stack_00000988,0);
        FUN_071a6688(&stack0x000007f0,uVar14,0);
        if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_036a1978();
        }
        FUN_07006be0(0,plVar36,&stack0x000007f0,0,1,1,uVar28,0);
      }
      if ((*plVar36 == 0) || (lVar31 == 0)) goto LAB_070210d4;
      FUN_071f4d90(lVar31,*(undefined8 *)(*plVar36 + 0x58),&stack0x00000360,0);
      puVar7 = LabelTrack_TypeInfo;
      if (*(int *)(*(long *)LabelTrack_TypeInfo + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if (DAT_07eeba1e == '\0') {
        FUN_03642964(LabelTrack_TypeInfo);
        DAT_07eeba1e = '\x01';
      }
      lVar30 = *(long *)puVar7;
      if (*(int *)(lVar30 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar30 = *(long *)puVar7;
      }
      if (**(long **)(lVar30 + 0xb8) == 0) goto LAB_070210d4;
      plVar35 = (long *)(**(long **)(lVar30 + 0xb8) + 0x10);
      *plVar35 = lVar31;
      thunk_FUN_036b7ad0(plVar35,lVar31);
      FUN_07002560(**(undefined8 **)(*(long *)puVar7 + 0xb8),in_stack_00000988,0);
      if ((uVar16 & 1) != 0) {
        if (*plVar36 == 0) goto LAB_070210d4;
        FUN_071f4d90(lVar31,*(undefined8 *)OVRGLTFLoader_<ProcessNode>d__38_TypeInfo,
                     &stack0x00000330,0);
      }
      if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_071ff388(&stack0x000009d8,lVar31,0);
      FUN_071e8b78(lVar31,0);
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_070210d4;
    bVar12 = FUN_0703c338(*(long *)(unaff_x19 + 0x2a0),0);
    if (((bVar11 | bVar12) & 1) != 0) {
      if ((bVar12 & 1) == 0) goto LAB_0701fd04;
      lVar30 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar30 == 0) goto LAB_070210d4;
      lVar48 = *(long *)(lVar30 + 0x30);
      uVar20 = FUN_0703c308(lVar30,0);
      if (lVar48 == 0) goto LAB_070210d4;
      if (*(uint *)(lVar48 + 0x18) <= uVar20) goto LAB_070210e4;
      plVar36 = (long *)(lVar48 + (long)(int)uVar20 * 8 + 0x20);
      if (*plVar36 == 0) goto LAB_070210d4;
      bVar9 = true;
      puVar39 = (undefined8 *)(*plVar36 + 0x58);
      goto LAB_0701fd14;
    }
  }
  puVar7 = System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_ToStringClass_TypeInfo;
  if ((uVar51 & 1) != 0) {
    if ((uVar32 & 0x10000) == 0) {
      if ((uVar16 & 1) != 0) goto LAB_070203ac;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_070210d4;
      FUN_07054698(*(long *)(unaff_x19 + 0x148),&stack0x00000250,*(undefined8 *)(unaff_x19 + 0x268),
                   0);
    }
    else {
      lVar30 = *(long *)
                System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_ToStringClass_TypeInfo
      ;
      if (*(int *)(lVar30 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar30 = *(long *)puVar7;
        if ((uVar16 & 1) == 0) goto LAB_07020008;
LAB_0701ffc4:
        lVar30 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar30 == 0) goto LAB_070210d4;
        lVar48 = *(long *)(lVar30 + 0x30);
        uVar20 = FUN_0703c2e4(lVar30,0);
        if (lVar48 == 0) goto LAB_070210d4;
        if (*(uint *)(lVar48 + 0x18) <= uVar20) goto LAB_070210e4;
        plVar36 = (long *)(lVar48 + (long)(int)uVar20 * 8 + 0x20);
        if (*plVar36 == 0) goto LAB_070210d4;
        puVar39 = (undefined8 *)(*plVar36 + 0x58);
      }
      else {
        if ((uVar16 & 1) != 0) goto LAB_0701ffc4;
LAB_07020008:
        plVar36 = (long *)(unaff_x19 + 0x270);
        puVar39 = (undefined8 *)(*(long *)(lVar30 + 0xb8) + 0x18);
      }
      uVar28 = *puVar39;
      if ((uVar16 & 1) == 0) {
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar14 = FUN_07052c50(0);
        FUN_071a6688(&stack0x000007b0,uVar14,0);
        if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_036a1978();
        }
        FUN_07006be0(0,plVar36,&stack0x000007b0,0,1,1,uVar28,0);
      }
      else {
        lVar30 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar30 == 0) goto LAB_070210d4;
        uVar14 = FUN_0703c2e4(lVar30,0);
        uVar14 = FUN_0703c414(lVar30,uVar14,0);
        FUN_071a6688(&stack0x000007b0,uVar14,0);
        lVar30 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar30 == 0) goto LAB_070210d4;
        uVar14 = FUN_0703c2e4(lVar30,0);
        FUN_0703dff8(lVar30,&stack0x000002f0,uVar14,0);
      }
      if ((*plVar36 == 0) || (lVar31 == 0)) goto LAB_070210d4;
      FUN_071f4d90(lVar31,*(undefined8 *)(*plVar36 + 0x58),&stack0x000002c0,0);
      if ((uVar16 & 1) != 0) {
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if (*plVar36 == 0) goto LAB_070210d4;
        FUN_071f4d90(lVar31,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18),
                     &stack0x00000290,0);
      }
      if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_071ff388(&stack0x000009d8,lVar31,0);
      FUN_071e8b78(lVar31,0);
      if ((uVar16 & 1) == 0) {
        lVar30 = *(long *)(unaff_x19 + 0x150);
        if (bVar10) {
          if (lVar30 == 0) goto LAB_070210d4;
          FUN_07052cd0(lVar30,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
        else {
          if (lVar30 == 0) goto LAB_070210d4;
          FUN_07052c98(lVar30,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
        goto LAB_0702039c;
      }
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_070210d4;
      uVar20 = FUN_0703c2e4(*(long *)(unaff_x19 + 0x2a0),0);
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_070210d4;
      uVar34 = FUN_0703c338(*(long *)(unaff_x19 + 0x2a0),0);
      lVar48 = *(long *)(unaff_x19 + 0x150);
      uVar28 = *(undefined8 *)(unaff_x19 + 0x240);
      lVar30 = *(long *)(unaff_x19 + 0x2a0);
      if ((uVar34 & 1) == 0) {
        if (bVar10) {
          if ((lVar30 == 0) || (lVar30 = *(long *)(lVar30 + 0x30), lVar30 == 0)) goto LAB_070210d4;
          if (*(uint *)(lVar30 + 0x18) <= uVar20) goto LAB_070210e4;
          if (lVar48 == 0) goto LAB_070210d4;
          uVar33 = *(undefined8 *)(unaff_x19 + 0x278);
          uVar29 = *(undefined8 *)(lVar30 + (long)(int)uVar20 * 8 + 0x20);
          goto LAB_0702030c;
        }
        if ((lVar30 == 0) || (lVar30 = *(long *)(lVar30 + 0x30), lVar30 == 0)) goto LAB_070210d4;
        if (*(uint *)(lVar30 + 0x18) <= uVar20) goto LAB_070210e4;
        if (lVar48 == 0) goto LAB_070210d4;
        FUN_07052c98(lVar48,uVar28,*(undefined8 *)(lVar30 + (long)(int)uVar20 * 8 + 0x20),0);
      }
      else {
        if ((lVar30 == 0) || (lVar43 = *(long *)(lVar30 + 0x30), lVar43 == 0)) goto LAB_070210d4;
        if (*(uint *)(lVar43 + 0x18) <= uVar20) {
LAB_070210e4:
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        uVar29 = *(undefined8 *)(lVar43 + (long)(int)uVar20 * 8 + 0x20);
        uVar20 = FUN_0703c308(lVar30,0);
        if (*(uint *)(lVar43 + 0x18) <= uVar20) goto LAB_070210e4;
        if (lVar48 == 0) goto LAB_070210d4;
        uVar33 = *(undefined8 *)(lVar43 + (long)(int)uVar20 * 8 + 0x20);
LAB_0702030c:
        FUN_07052cd0(lVar48,uVar28,uVar29,uVar33,0);
      }
      puVar7 = Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo;
      if (0xffffffe0 < iVar24 - 0xfbU) {
        lVar30 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_036a1978();
        }
        if (lVar30 == 0) goto LAB_070210d4;
        puVar39 = (undefined8 *)(lVar30 + 0xb8);
        *puVar39 = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        thunk_FUN_036b7ad0(puVar39);
      }
    }
LAB_0702039c:
    FUN_06fbba0c();
  }
LAB_070203ac:
  if (*(char *)(unaff_x19 + 0x140) != '\0') {
    if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_070210d4;
    FUN_07050878(*(long *)(unaff_x19 + 0x158),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_06fbba0c();
  }
  if ((uStack0000000000000054 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_070210d4;
    FUN_0704d240(*(long *)(unaff_x19 + 0x310),&stack0x000009d0,&stack0x00000770,&stack0x0000076c,0);
    if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4) == 0
       ) {
      thunk_FUN_036a1978();
    }
    FUN_07006be0(0,unaff_x19 + 0x330,&stack0x00000770,in_stack_0000076c,1,0,
                 *(undefined8 *)OVRHandTest_<>c_TypeInfo,0);
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_070210d4;
    FUN_0704d1dc(*(long *)(unaff_x19 + 0x310),&stack0x00000760,0);
    FUN_06fbba0c();
  }
  if (*(long *)(lVar27 + 0x1a0) == 0) goto LAB_070210d4;
  uVar34 = FUN_06e8636c(*(long *)(lVar27 + 0x1a0),0);
  if ((uVar34 & 1) != 0) {
    FUN_06fbba0c();
  }
  cVar45 = *(char *)(lVar27 + 0x1e0);
  iVar44 = (int)uVar52;
  if ((uVar16 & 1) == 0) {
    uVar14 = 2;
    if ((uVar19 & 1) == 0) {
      uVar14 = 0;
    }
    uVar4 = 0;
    if (1 < iVar44) {
      uVar4 = uVar14;
    }
    iVar24 = 0;
    if ((uVar15 == 0 && (uVar19 & 1) == 0) && cVar45 != '\0') {
      iVar24 = 3;
    }
    if (*(long *)(lVar27 + 0x1a0) == 0) goto LAB_070210d4;
    uVar34 = FUN_06e81af8(*(long *)(lVar27 + 0x1a0),0);
    if ((uVar34 & 1) != 0) {
      if (*(long *)(lVar27 + 0x1a0) == 0) goto LAB_070210d4;
      if (*(char *)(*(long *)(lVar27 + 0x1a0) + 0x28) != '\0') {
        iVar24 = 0;
      }
    }
    uVar20 = 0;
    if (1 < iVar44) {
      uVar20 = uVar15;
    }
    if (uVar20 == 1) {
      if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4) ==
          0) {
        thunk_FUN_036a1978();
      }
      uVar34 = FUN_070056f4(0);
      if ((uVar34 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_070210d4;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (uVar19 & 1) == 0) {
          if (iVar24 == 0) {
            iVar24 = 2;
          }
          else if (iVar24 == 3) {
            iVar24 = 1;
          }
        }
      }
    }
    if (uVar25 == 0) {
      lVar30 = *(long *)(unaff_x19 + 0x198);
      if (lVar30 == 0) goto LAB_070210d4;
    }
    else {
      lVar30 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar30 == 0) goto LAB_070210d4;
      FUN_07057664(lVar30,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_06faf8fc(lVar30,uVar4,0,0);
    FUN_06fafa34(lVar30,iVar24,0);
    puVar7 = OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo;
    lVar43 = *(long *)(unaff_x19 + 0x108);
    lVar48 = *(long *)OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo;
    if (*(int *)(lVar48 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar48 = *(long *)puVar7;
    }
    puVar39 = *(undefined8 **)(lVar48 + 0xb8);
    lVar49 = puVar39[2];
    if (lVar49 == 0) {
      if (*(int *)(lVar48 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        puVar39 = *(undefined8 **)(*(long *)OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo + 0xb8);
      }
      uVar28 = *puVar39;
      lVar49 = thunk_FUN_0367fe20(*(undefined8 *)OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo);
      FUN_04b20cd8(lVar49,uVar28,*(undefined8 *)OVRGLTFLoader_<LoadGLTF>d__37_TypeInfo,0);
      plVar36 = (long *)(*(long *)(*(long *)OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo + 0xb8)
                        + 0x10);
      *plVar36 = lVar49;
      thunk_FUN_036b7ad0(plVar36,lVar49);
    }
    if (lVar43 == 0) goto LAB_070210d4;
    lVar48 = FUN_0459f6fc(lVar43,lVar49,
                          *(undefined8 *)OVRGLTFAnimatinonNode_OVRGLTFTransformType_TypeInfo);
    if ((lVar48 == 0) && (*(int *)(lVar27 + 0xe8) == 0)) {
      if (lVar47 == 0) goto LAB_070210d4;
      iVar24 = FUN_071745e0(lVar47,0);
      if (iVar24 == 4) goto LAB_0702071c;
      uVar14 = 1;
    }
    else {
LAB_0702071c:
      uVar14 = 0;
    }
    uVar34 = FUN_071cc22c(0);
    if ((uVar34 & 1) != 0) {
      FUN_06faff28(0,0,0,0x3f800000,lVar30,uVar14,0);
    }
    FUN_06fbba0c();
  }
  else {
    lVar30 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar30 == 0) goto LAB_070210d4;
    if ((*(char *)(lVar30 + 0x15) != '\0') &&
       ((iVar24 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_0703dc4c(lVar30,0);
    }
    FUN_07021cf8();
  }
  if (lVar47 == 0) goto LAB_070210d4;
  iVar24 = FUN_071745e0(lVar47,0);
  if ((iVar24 == 1) && (*(int *)(lVar27 + 0xe8) != 1)) {
    uVar28 = FUN_0718b7d0(0);
    puVar7 = PTR_DAT_079f4e28;
    if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)PTR_DAT_079f4e28);
    }
    uVar34 = FUN_071c0684(uVar28,0,0);
    if ((uVar34 & 1) == 0) {
      uVar34 = FUN_03c37834(lVar47,&stack0x00000758,
                            *(undefined8 *)OVRFaceExpressions_FaceViseme_TypeInfo);
      if ((uVar34 & 1) != 0) {
        if (in_stack_00000758 == 0) goto LAB_070210d4;
        uVar28 = FUN_07193724(in_stack_00000758,0);
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)puVar7);
        }
        uVar34 = FUN_071c0684(uVar28,0,0);
        if ((uVar34 & 1) != 0) goto LAB_070207bc;
      }
    }
    else {
LAB_070207bc:
      FUN_06fbba0c();
    }
  }
  if (uVar15 == 0) {
    if (*(int *)(lVar27 + 0xe8) == 0 && (uVar51 & 1) == 0) {
      uVar34 = FUN_071cbe00(0);
      uVar28 = *(undefined8 *)
                OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose_TypeInfo;
      if ((uVar34 & 1) == 0) {
        uVar29 = FUN_0719d0d8(0);
      }
      else {
        uVar29 = FUN_0719d160(0);
      }
      FUN_0718cc14(uVar28,uVar29,0);
    }
  }
  else if ((((uVar16 & 1) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')) || ((uVar32 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_070210d4;
    FUN_07050878(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_06fbba0c();
  }
  if ((uVar19 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_079ff4c8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar30 = FUN_0702e180(0);
    if (lVar30 == 0) goto LAB_070210d4;
    uVar14 = *(undefined4 *)(lVar30 + 0x48);
    FUN_0704f508(uVar14,&stack0x00000720,&stack0x0000071c,0);
    if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4) == 0
       ) {
      thunk_FUN_036a1978();
    }
    FUN_07006be0(0,unaff_x19 + 0x280,&stack0x00000720,0,1,1,
                 *(undefined8 *)OVR_OpenVR_IVRSystem__GetSortedTrackedDeviceIndicesOfClass_TypeInfo,
                 0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_070210d4;
    FUN_0704f5a8(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x230),
                 *(undefined8 *)(unaff_x19 + 0x280),uVar14,0);
    FUN_06fbba0c();
  }
  if ((uVar32 & 0x100000000) != 0) {
    FUN_071a6688(&stack0x000006e0,0x2e,0);
    if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4) == 0
       ) {
      thunk_FUN_036a1978();
    }
    FUN_07006be0(0,unaff_x19 + 0x288,&stack0x000006e0,0,1,1,
                 *(undefined8 *)
                  RhythmVisualizatorPro_ImportSong_<IE_GetAudioClipMobiles>d__6_TypeInfo,0);
    FUN_071a6688(&stack0x000006a0,0,0);
    FUN_07006be0(0,unaff_x19 + 0x290,&stack0x000006a0,0,1,1,
                 *(undefined8 *)RhythmVisualizatorPro_ImportSong_<IE_GetAudioClip>d__13_TypeInfo,0);
    if (*(int *)(*(long *)Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c_TypeInfo + 0xe4)
        == 0) {
      thunk_FUN_036a1978();
    }
    FUN_06fd6150(lVar31,lVar27,0);
    if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_070210d4;
    FUN_06fd4b8c(*(long *)(unaff_x19 + 0x160),*(undefined8 *)(unaff_x19 + 0x288),
                 *(undefined8 *)(unaff_x19 + 0x290),0);
    FUN_06fbba0c();
  }
  if ((uVar21 & 1) != 0) {
    FUN_06fbba0c();
  }
  uVar25 = 0;
  if (cVar45 != '\0') {
    uVar25 = 3;
  }
  uVar16 = (uint)(cVar45 == '\0');
  if (iVar44 < 2) {
    uVar16 = 1;
  }
  if (uVar15 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_070210d4;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar25 = 0, 1 < iVar44)) {
      if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4) ==
          0) {
        thunk_FUN_036a1978();
      }
      uVar25 = FUN_070056f4(0);
      uVar25 = uVar25 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_070210d4;
  FUN_06faf8fc(*(long *)(unaff_x19 + 0x1c8),((uVar16 | uVar13) ^ 0xffffffff) & 1,0,0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_070210d4;
  FUN_06fafa34(*(long *)(unaff_x19 + 0x1c8),uVar25,0);
  FUN_06fbba0c();
  FUN_06fbba0c();
  FUN_07021e50();
  uVar32 = FUN_06fc3250(lVar27,0);
  uVar34 = FUN_06fc3018(lVar27,0);
  if (((uVar32 & 1) != 0) && ((uVar34 & 1) != 0)) {
    lVar30 = *(long *)(unaff_x19 + 0x200);
    uVar14 = FUN_0701c450();
    if (lVar30 == 0) goto LAB_070210d4;
    FUN_06fcf4c8(lVar30,lVar27,uVar14,0);
    FUN_06fbba0c();
  }
  bVar10 = cVar45 == '\0';
  bVar9 = *(long *)(lVar27 + 0x1b0) != 0;
  if ((bVar10 || ((uVar18 ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(lVar27 + 0x1cc) != 1 &&
       ((*(int *)(lVar27 + 0x170) != 1 || (*(int *)(lVar27 + 0x174) == 0)))) &&
      ((uVar37 = FUN_06fc35d8(lVar27,0), (uVar37 & 1) == 0 || (*(float *)(lVar27 + 0x224) <= 0.0))))
     )) {
    bVar11 = 0;
joined_r0x07020c98:
    if (!bVar9 || bVar10) goto LAB_07020c9c;
FUN_07020cbc:
    bVar12 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar11 = FUN_06f98428(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x07020c98;
    }
    bVar11 = 1;
    if (bVar9 && !bVar10) goto FUN_07020cbc;
LAB_07020c9c:
    bVar12 = lVar26 == 0 & (bVar11 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar13 = 1;
  }
  else {
    uVar13 = FUN_06f98518(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(lVar27 + 0x1e0),0);
    uVar13 = uVar13 ^ 1;
  }
  plVar36 = (long *)(unaff_x19 + 0x230);
  plVar35 = (long *)(unaff_x19 + 0x240);
  if (uVar17 == 0) {
    if (cVar45 == '\0') {
      return;
    }
    FUN_0701ddb0();
  }
  else {
    uVar14 = FUN_071a6238(&stack0x00000990,0);
    if (*(int *)(*(long *)System_Data_Index_IndexTree_TypeInfo + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)System_Data_Index_IndexTree_TypeInfo);
    }
    in_stack_00000190 = uVar38;
    in_stack_00000198 = uVar52;
    in_stack_000001a0 = uVar53;
    in_stack_000001a8 = uVar55;
    in_stack_000001b0 = uVar41;
    in_stack_000001b8 = uVar57;
    in_stack_000001c0 = uVar3;
    TMPro_MarkupAttribute__set_ValueStartIndex
              (&stack0x000001d0,&stack0x00000190,uVar38 & 0xffffffff,(int)(uVar38 >> 0x20),uVar14,0,
               0);
    if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4) == 0
       ) {
      thunk_FUN_036a1978();
    }
    FUN_07006be0(0,unaff_x19 + 0x328,&stack0x00000660,0,1,1,*(undefined8 *)OVRHand_Hand_TypeInfo,0);
    if (cVar45 == '\0') {
      if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_070210d4;
      FUN_06fd7528(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar36,0,plVar35,&stack0x00000760,
                   unaff_x19 + 0x288,0);
      goto LAB_0701ee34;
    }
    FUN_0701ddb0();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_070210d4;
    FUN_06fd7528(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar36,bVar12,plVar35,
                 &stack0x00000760,unaff_x19 + 0x288,bVar11 & 1);
    FUN_06fbba0c();
  }
  lVar30 = *plVar36;
  if ((bVar11 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_070210d4;
    FUN_06fd7670(*(long *)(unaff_x19 + 800),&stack0x00000658,1,uVar13 & 1,0);
    FUN_06fbba0c();
  }
  if (*(long *)(lVar27 + 0x1b0) != 0) {
    FUN_06fbba0c();
  }
  if (((bVar11 & 1) == 0) && (((uVar17 == 0 || (lVar26 != 0)) || (bVar9 && !bVar10)))) {
    lVar26 = *plVar36;
    if (lVar26 == 0) goto LAB_070210d4;
    uVar33 = *(undefined8 *)(lVar26 + 0x30);
    uVar29 = *(undefined8 *)(lVar26 + 0x28);
    uVar56 = *(undefined8 *)(lVar26 + 0x40);
    uVar54 = *(undefined8 *)(lVar26 + 0x38);
    uVar28 = *(undefined8 *)(lVar26 + 0x48);
    lVar26 = *(long *)(unaff_x19 + 600);
    if (lVar26 == 0) goto LAB_070210d4;
    in_stack_000001d8 = *(undefined8 *)(lVar26 + 0x30);
    in_stack_000001d0 = *(undefined8 *)(lVar26 + 0x28);
    in_stack_000001e8 = *(undefined8 *)(lVar26 + 0x40);
    in_stack_000001e0 = *(undefined8 *)(lVar26 + 0x38);
    uVar40 = *(undefined8 *)(lVar26 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_079f79a0 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000148 = in_stack_000001e8;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar40;
    in_stack_00000160 = uVar29;
    in_stack_00000168 = uVar33;
    in_stack_00000170 = uVar54;
    in_stack_00000178 = uVar56;
    in_stack_00000180 = uVar28;
    uVar37 = FUN_071e0e74(&stack0x00000160,&stack0x00000130,0);
    if ((uVar37 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_070210d4;
      in_stack_000000f0 = uVar38;
      in_stack_000000f8 = uVar52;
      in_stack_00000100 = uVar53;
      in_stack_00000108 = uVar55;
      in_stack_00000110 = uVar41;
      in_stack_00000118 = uVar57;
      in_stack_00000120 = uVar3;
      FUN_07058ac0(*(long *)(unaff_x19 + 0x1d8),&stack0x000000f0,lVar30,0);
      FUN_06fbba0c();
    }
  }
  if (((uVar32 & 1) != 0) && ((uVar34 & 1) == 0 && *(char *)(lVar27 + 0x238) != '\0')) {
    FUN_06fbba0c();
  }
  if (*(long *)(lVar27 + 0x1a0) != 0) {
    uVar38 = FUN_06e81af8(*(long *)(lVar27 + 0x1a0),0);
    if ((uVar38 & 1) == 0) {
      return;
    }
    lVar26 = *plVar35;
    if (lVar26 != 0) {
      uVar52 = *(undefined8 *)(lVar26 + 0x30);
      uVar29 = *(undefined8 *)(lVar26 + 0x28);
      uVar55 = *(undefined8 *)(lVar26 + 0x40);
      uVar53 = *(undefined8 *)(lVar26 + 0x38);
      uVar28 = *(undefined8 *)(lVar26 + 0x48);
      lVar26 = *(long *)(lVar27 + 0x1a0);
      if (lVar26 != 0) {
        in_stack_000001d8 = *(undefined8 *)(lVar26 + 0x48);
        in_stack_000001d0 = *(undefined8 *)(lVar26 + 0x40);
        in_stack_000001e8 = *(undefined8 *)(lVar26 + 0x58);
        in_stack_000001e0 = *(undefined8 *)(lVar26 + 0x50);
        uVar41 = *(undefined8 *)(lVar26 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_079f79a0 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a8 = in_stack_000001e8;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar41;
        in_stack_000000c0 = uVar29;
        in_stack_000000c8 = uVar52;
        in_stack_000000d0 = uVar53;
        in_stack_000000d8 = uVar55;
        in_stack_000000e0 = uVar28;
        uVar38 = FUN_071e0e74(&stack0x000000c0,&stack0x00000090,0);
        if ((uVar38 & 1) != 0) {
          return;
        }
        if (*(long *)(lVar27 + 0x1a0) != 0) {
          if (*(char *)(*(long *)(lVar27 + 0x1a0) + 0x28) == '\0') {
            return;
          }
          if (*(long *)(unaff_x19 + 0x1f0) != 0) {
            FUN_07050878(*(long *)(unaff_x19 + 0x1f0),*(undefined8 *)(unaff_x19 + 0x240),
                         *(undefined8 *)(unaff_x19 + 0x260),0);
            if (*(long *)(unaff_x19 + 0x1f0) != 0) {
              *(undefined1 *)(*(long *)(unaff_x19 + 0x1f0) + 0xcd) = 1;
LAB_0701ee34:
              FUN_06fbba0c();
              return;
            }
          }
        }
      }
    }
  }
LAB_070210d4:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


