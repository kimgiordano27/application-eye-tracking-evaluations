/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.HandInteractionProfile$$UnregisterDeviceLayout
ENTRY_POINT: 0701ea3c
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


/* WARNING: Removing unreachable block (ram,0x0701f4cc) */
/* WARNING: Removing unreachable block (ram,0x0701f4d4) */
/* WARNING: Removing unreachable block (ram,0x070210dc) */
/* WARNING: Removing unreachable block (ram,0x0701f4f0) */
/* WARNING: Removing unreachable block (ram,0x0701f500) */
/* WARNING: Removing unreachable block (ram,0x0701f504) */
/* WARNING: Removing unreachable block (ram,0x0701f520) */
/* WARNING: Removing unreachable block (ram,0x0701f524) */
/* WARNING: Removing unreachable block (ram,0x070207f4) */
/* WARNING: Removing unreachable block (ram,0x0702080c) */
/* WARNING: Removing unreachable block (ram,0x07020814) */

void UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile__UnregisterDeviceLayout
               (long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  undefined8 uVar31;
  ulong uVar32;
  long *plVar33;
  long *plVar34;
  ulong uVar35;
  ulong uVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  uint uVar40;
  long lVar41;
  uint uVar42;
  int iVar43;
  long unaff_x19;
  char cVar44;
  uint uVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  char cVar49;
  uint uVar50;
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
  undefined4 in_stack_00000988;
  uint in_stack_0000098c;
  
                    /* try { // try from 0701ea48 to 0711ea53 has its CatchHandler @ 0701eba8 */
                    /* try { // try from 0701ea78 to 0711ea7f has its CatchHandler @ 0701ebc4 */
                    /* try { // try from 0701ea84 to 0711ea93 has its CatchHandler @ 0701eba4 */
                    /* try { // try from 0701eaa0 to 0711eaa7 has its CatchHandler @ 0701eba0 */
  if (param_1 == 0) goto LAB_070210d4;
  lVar24 = FUN_06fa1008(param_1,*(undefined8 *)
                                 System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo
                       );
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_070210d4;
  lVar25 = FUN_06fa1008(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)SlideShowScrollViewPro_FadeCanvas_<FadeInNow>d__8_TypeInfo);
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_070210d4;
  uVar26 = FUN_06fa1008(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)
                         System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo
                       );
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_070210d4;
  uVar27 = FUN_06fa1008(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukSceneModel_TypeInfo)
  ;
  if (*(long *)(unaff_x19 + 0x138) == 0) goto LAB_070210d4;
  lVar28 = FUN_06fa1008(*(long *)(unaff_x19 + 0x138),
                        *(undefined8 *)UnityEngine_InputForUI_InputManagerProvider_IInput_TypeInfo);
  if ((*(long *)(unaff_x19 + 0x298) == 0) ||
     (FUN_0704a288(*(long *)(unaff_x19 + 0x298),lVar24,lVar25,uVar26,0), lVar25 == 0))
  goto LAB_070210d4;
  uVar2 = *(undefined4 *)(lVar25 + 0x128);
  uVar52 = *(undefined8 *)(lVar25 + 0x100);
  uVar36 = *(ulong *)(lVar25 + 0xf8);
  uVar55 = *(undefined8 *)(lVar25 + 0x110);
  uVar53 = *(undefined8 *)(lVar25 + 0x108);
  uVar57 = *(undefined8 *)(lVar25 + 0x120);
  uVar39 = *(undefined8 *)(lVar25 + 0x118);
  lVar46 = *(long *)(lVar25 + 0xd8);
  if (lVar24 == 0) goto LAB_070210d4;
  lVar29 = FUN_06fc38e0(lVar24,0);
  lVar47 = *(long *)(unaff_x19 + 0xe8);
  if (lVar47 != 0) {
    uVar12 = FUN_06fc2f4c(lVar25,0);
    uVar30 = FUN_06f98ac0(lVar47,uVar12 & 1,0);
    if ((uVar30 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_070210d4;
      uVar30 = thunk_FUN_06f98518(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(lVar25 + 0x1e0),0);
      if ((uVar30 & 1) != 0) {
        uVar13 = *(undefined4 *)(lVar25 + 0x160);
        uVar3 = *(undefined4 *)(lVar25 + 0x164);
        if (*(int *)(*(long *)UnityEngine_UIElements_DynamicAtlas_TextureInfo_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_036a1978();
        }
        FUN_06f98b40(&stack0x00000900,uVar13,uVar3,0);
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_070210d4;
        uVar31 = FUN_06f98500(*(long *)(unaff_x19 + 0xe8),0);
        if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_036a1978(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo)
          ;
        }
        FUN_07006be0(0,uVar31,&stack0x00000900,0,0,1,*(undefined8 *)OVRHandTest_BoolMonitor_TypeInfo
                     ,0);
        uVar13 = FUN_0701c450();
        FUN_06f98b84(&stack0x000008c0,uVar13,*(undefined4 *)(lVar25 + 0x160),
                     *(undefined4 *)(lVar25 + 0x164),0);
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_070210d4;
        uVar31 = FUN_06f98508(*(long *)(unaff_x19 + 0xe8),0);
        FUN_07006be0(0,uVar31,&stack0x000008c0,0,0,1,
                     *(undefined8 *)OVRHand_MicrogestureType_TypeInfo,0);
      }
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_070210d4;
      uVar30 = FUN_06f98518(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(lVar25 + 0x1e0),0);
      if ((uVar30 & 1) != 0) {
        lVar47 = *(long *)(unaff_x19 + 0xe8);
        if ((((lVar47 == 0) || (*(long *)(lVar47 + 0x90) == 0)) ||
            (lVar41 = *(long *)(*(long *)(lVar47 + 0x90) + 0x30), lVar41 == 0)) ||
           ((*(long *)(lVar47 + 0x30) == 0 ||
            (FUN_06fd2da0(*(long *)(lVar47 + 0x30),lVar25,*(undefined4 *)(lVar41 + 0x18),0),
            *(long *)(unaff_x19 + 0xe8) == 0)))) goto LAB_070210d4;
        FUN_06fbba0c();
      }
    }
  }
  puVar7 = Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo;
  if (*(int *)(lVar25 + 0x188) != 1) {
    *(undefined1 *)(unaff_x19 + 0x134) = 0;
  }
  bVar10 = FUN_0701e2a4();
  lVar47 = *(long *)puVar7;
  *(byte *)(unaff_x19 + 0x140) = bVar10 & 1;
  if (*(int *)(lVar47 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar30 = FUN_0701e214(lVar25);
  if ((uVar30 & 1) != 0) {
    if (*(int *)(*(long *)UnityEngine_UIElements_HelpBox_UxmlFactory_TypeInfo + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_06fb7158();
    FUN_06fbba0c();
    goto LAB_0701ee34;
  }
  uVar12 = FUN_06fc2f4c(lVar25,0);
  uVar30 = FUN_0701e534();
  if (((uVar30 & 1) == 0) || (*(int *)(unaff_x19 + 0x2d8) != 1 || (uVar12 & 1) != 0)) {
    if (*(int *)(*(long *)PTR_DAT_079f4530 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar30 = FUN_07172d08(0);
    if ((uVar30 & 1) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetInteractionProfileType
                         ();
    }
  }
  else {
    uVar14 = 1;
  }
  uVar31 = FUN_0701e680();
  FUN_07021180(uVar31,lVar25);
  bVar10 = FUN_07002118();
  bVar11 = UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_<>c__DisplayClass17_0___ctor
                     ();
  bVar10 = (bVar11 ^ 1) & bVar10;
  uVar15 = FUN_0701c358();
  bVar9 = false;
  uVar42 = 0;
  if (((bVar10 & 1) != 0) && ((uVar15 & 1) == 0)) {
    uVar42 = in_stack_0000098c;
    if (in_stack_0000098c == 0) {
      bVar9 = true;
    }
    else {
      if (in_stack_0000098c != 1) {
        thunk_FUN_036aa1c8(PTR_DAT_079fb6d0);
        uVar26 = thunk_FUN_0367fe20();
        FUN_05d8628c(uVar26,0);
        uVar27 = thunk_FUN_036aa1c8(OVRHaptics_Config_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar26,uVar27);
      }
      bVar9 = false;
    }
  }
  FUN_06fc35d8(lVar25,0);
  if (lVar28 == 0) goto LAB_070210d4;
  FUN_06fc2f3c(lVar25,0);
  auVar58 = FUN_0702123c();
  uVar30 = auVar58._0_8_;
  lVar47 = *(long *)(unaff_x19 + 0x2a0);
  bVar11 = auVar58[2];
  if (lVar47 != 0) {
    *(byte *)(lVar47 + 0x14) = bVar10 & 1;
    *(undefined4 *)(lVar47 + 0x10) = in_stack_00000988;
    *(byte *)(lVar47 + 0x17) = bVar11 & 1;
    FUN_0703dae8(lVar47,uVar26,0);
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_070210d4;
    FUN_0703dc54(*(long *)(unaff_x19 + 0x2a0),0);
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_070210d4;
    if (*(char *)(*(long *)(unaff_x19 + 0x2a0) + 0x15) != '\0') {
      if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_070210d4;
      FUN_0459fb44(&stack0x000003d0,*(long *)(unaff_x19 + 0x108),
                   *(undefined8 *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingPlayAreaSize_TypeInfo);
      puVar7 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo_TypeInfo;
      do {
        uVar32 = FUN_05897b28(&stack0x000008a0,*(undefined8 *)puVar7);
        if ((uVar32 & 1) == 0) goto LAB_0701f070;
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
  if (*(char *)(lVar25 + 0x1ac) == '\0') {
    uVar16 = 0;
  }
  else {
    uVar16 = FUN_06ff8fe0(unaff_x19 + 0x310,0);
    uVar16 = uVar16 & 1;
  }
  if (lVar28 == 0) goto LAB_070210d4;
  if (*(char *)(lVar28 + 0x10) == '\0') {
    uVar17 = 0;
    uVar18 = 0;
    if (uVar16 != 0) goto LAB_0701f0c8;
LAB_0701f0d8:
    uVar17 = uVar18;
    cVar44 = '\0';
  }
  else {
    uVar17 = FUN_06ff8fe0(unaff_x19 + 0x310,0);
    uVar18 = uVar17;
    if (uVar16 == 0) goto LAB_0701f0d8;
LAB_0701f0c8:
    cVar44 = *(char *)(lVar25 + 0x192);
  }
  if (*(char *)(lVar25 + 0x1ac) == '\0') {
    uStack0000000000000054 = 0;
  }
  else {
    uStack0000000000000054 = FUN_06ff8fe0(unaff_x19 + 0x310,0);
  }
  uVar32 = FUN_06fc2f3c(lVar25,0);
  if ((uVar32 & 1) == 0) {
    uStack0000000000000064 = FUN_06fc2f4c(lVar25,0);
  }
  else {
    uStack0000000000000064 = 1;
  }
  if ((*(char *)(lVar25 + 400) == '\0') && ((uVar30 & 1) == 0)) {
    cVar49 = *(char *)(unaff_x19 + 0x140);
  }
  else {
    cVar49 = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_070210d4;
  uVar18 = FUN_0705ca54(*(long *)(unaff_x19 + 0x168),lVar24,lVar25,uVar26,uVar27,0);
  if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_070210d4;
  uVar19 = FUN_0704472c(*(long *)(unaff_x19 + 0x170),lVar24,lVar25,uVar26,uVar27,0);
  if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_070210d4;
  bVar8 = cVar44 != '\0';
  uVar20 = FUN_06ff6c3c(*(long *)(unaff_x19 + 0x1c0),0);
  if (cVar49 == '\0' && !bVar8) {
    cVar49 = '\0';
    uVar21 = 0;
  }
  else {
    iVar23 = *(int *)(unaff_x19 + 0x2b0);
    if (*(int *)(*(long *)Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo + 0xe4) ==
        0) {
      thunk_FUN_036a1978();
    }
    uVar21 = FUN_0701e3a0(lVar25);
    uVar21 = (uint)(iVar23 == 2) | uVar21 ^ 1;
  }
  uVar21 = (uint)(byte)(bVar11 | auVar58[1]) | uVar12 | uVar21 | uStack0000000000000064;
  if ((uVar15 & uVar21 & 1) != 0) {
    uVar21 = bVar11 & 1;
  }
  cVar4 = *(char *)(unaff_x19 + 0x140);
  if (cVar49 == '\0') {
    if (((uint)(cVar44 == '\0') & (uStack0000000000000064 ^ 1)) == 0) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_070210d4;
      bVar5 = false;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) = 500;
    }
    else {
      bVar5 = false;
    }
  }
  else {
    lVar24 = *(long *)(unaff_x19 + 0x1b0);
    if (lVar24 == 0) goto LAB_070210d4;
    iVar23 = auVar58._12_4_ + -1;
    iVar43 = 500;
    if (*(int *)(unaff_x19 + 0x2b0) != 1) {
      iVar43 = 300;
    }
    if (499 < iVar23) {
      iVar23 = 500;
    }
    if ((uVar30 & 1) != 0) {
      iVar43 = iVar23;
    }
    *(int *)(lVar24 + 0x10) = iVar43;
    if (iVar43 < 500) {
      *(undefined1 *)(lVar24 + 0xd8) = 0;
      bVar5 = true;
      *(undefined4 *)(unaff_x19 + 0x2b0) = 0;
    }
    else {
      bVar5 = true;
    }
  }
  uVar40 = (uint)(cVar4 != '\0');
  uVar51 = uVar21 | uVar40;
  uVar22 = FUN_070214bc();
  if ((uVar15 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  uVar50 = uVar42;
  if ((bVar11 != 0 || *(char *)(unaff_x19 + 0x140) != '\0') ||
      (*(char *)(lVar25 + 0x1e0) != '\x01' || ((uint)(bVar5 || bVar8) & (uVar51 ^ 1)) != 0)) {
    uVar50 = 1;
  }
  if (*(long *)(lVar25 + 0x1a0) == 0) goto LAB_070210d4;
  uVar14 = (uVar14 | (uint)uVar31 | uVar22) & (uVar12 ^ 1);
  uVar32 = FUN_06e81af8(*(long *)(lVar25 + 0x1a0),0);
  uVar22 = uVar14 | uVar50;
  iVar23 = FUN_071cb888(0);
  puVar7 = Sirenix_Serialization_RectFormatter_TypeInfo;
  if (iVar23 == 0x15) {
    uVar45 = uVar22;
    if ((uVar32 & 1) == 0) {
      uVar45 = uVar14;
    }
    if (*(char *)(unaff_x19 + 0x2dc) != '\0') goto LAB_0701f388;
  }
  else {
LAB_0701f388:
    uVar45 = uVar22;
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
    uVar45 = uVar22;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    uVar45 = uVar50 | uVar45;
  }
  uVar32 = FUN_071cb8d8(0);
  uVar50 = uVar50 | uVar45;
  uVar14 = uVar50;
  if ((uVar32 & 1) == 0) {
    uVar14 = uVar45;
  }
  FUN_071a6cd0(&stack0x00000940,0,0);
  FUN_071a6cec(&stack0x00000940,0,0);
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_070210d4;
  FUN_0705fa40(*(long *)(unaff_x19 + 0x228),&stack0x00000620,1,0);
  if (*(int *)(lVar25 + 0xe8) != 0) {
    if (*(long *)(lVar25 + 0x230) != 0) {
      FUN_03c37834(*(long *)(lVar25 + 0x230),&stack0x00000868,
                   *(undefined8 *)Zenject_FactoryFromBinderBase_<>c__DisplayClass33_0_TypeInfo);
    }
    goto LAB_070210d4;
  }
  if (lVar46 == 0) goto LAB_070210d4;
  iVar23 = thunk_FUN_07176938(lVar46,0);
  puVar6 = PTR_DAT_079f79a0;
  if (*(int *)(*(long *)PTR_DAT_079f79a0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_071e0978(&stack0x000003d0,2,0);
  if ((*(long *)(lVar25 + 0x1a0) == 0) ||
     ((uVar32 = FUN_06e81af8(*(long *)(lVar25 + 0x1a0),0), (uVar32 & 1) != 0 &&
      (*(long *)(lVar25 + 0x1a0) == 0)))) goto LAB_070210d4;
  uVar22 = uVar50 & iVar23 != 1;
  puVar37 = (undefined8 *)(unaff_x19 + 600);
  if (*(long *)(unaff_x19 + 600) == 0) {
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar26 = FUN_06eec898(&stack0x000005f0,0);
    *puVar37 = uVar26;
    thunk_FUN_036b7ad0(puVar37,uVar26);
  }
  else {
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar32 = FUN_071e0ef8(&stack0x000005c0,&stack0x00000590,0);
    if ((uVar32 & 1) != 0) {
      FUN_06eec968(puVar37,&stack0x00000560,0);
    }
  }
  puVar1 = (undefined8 *)(unaff_x19 + 0x260);
  if (*(long *)(unaff_x19 + 0x260) == 0) {
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar26 = FUN_06eec898(&stack0x00000530,0);
    *puVar1 = uVar26;
    thunk_FUN_036b7ad0(puVar1,uVar26);
  }
  else {
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar32 = FUN_071e0ef8(&stack0x00000500,&stack0x000004d0,0);
    if ((uVar32 & 1) != 0) {
      FUN_06eec968(puVar1,&stack0x000004a0,0);
    }
  }
  if (uVar22 != 0) {
    FUN_070216c4();
  }
  if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_070210d4;
  bVar11 = (byte)uVar22 ^ 1;
  *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar11;
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_070210d4;
  *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar11;
  if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_070210d4;
  *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar11;
  if ((uVar14 & 1) == 0) {
    uVar26 = *puVar37;
  }
  else {
    lVar24 = *(long *)(unaff_x19 + 0x228);
    if (lVar24 == 0) goto LAB_070210d4;
    uVar26 = FUN_0705f64c(lVar24,0);
  }
  *(undefined8 *)(unaff_x19 + 0x230) = uVar26;
  thunk_FUN_036b7ad0(unaff_x19 + 0x230);
  lVar24 = 0x248;
  if ((uVar50 & 1) == 0) {
    lVar24 = 0x260;
  }
  *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + lVar24);
  thunk_FUN_036b7ad0(unaff_x19 + 0x240);
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_070210d4;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (uVar12 & 1) == 0) {
    lVar24 = *(long *)(unaff_x19 + 0x228);
    if (lVar24 == 0) goto LAB_070210d4;
    uVar26 = FUN_0705f64c(lVar24,0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar26;
    thunk_FUN_036b7ad0(unaff_x19 + 0x118,uVar26);
  }
  cVar44 = *(char *)(lVar25 + 0x191);
  FUN_06fb7158();
  iVar23 = FUN_071cb888(0);
  if (iVar23 == 2) {
    FUN_06eea938(&stack0x000003d0,*(undefined8 *)(unaff_x19 + 0x248),0);
    FUN_06eea938(&stack0x000001d0,*(undefined8 *)(unaff_x19 + 0x250),0);
    if (lVar29 == 0) goto LAB_070210d4;
    FUN_071f453c(lVar29,&stack0x00000470,&stack0x00000440,0);
  }
  puVar7 = OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo;
  lVar28 = *(long *)(unaff_x19 + 0x108);
  lVar24 = *(long *)OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo;
  if (*(int *)(lVar24 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar24 = *(long *)puVar7;
  }
  puVar37 = *(undefined8 **)(lVar24 + 0xb8);
  lVar47 = puVar37[1];
  if (lVar47 == 0) {
    if (*(int *)(lVar24 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      puVar37 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
    }
    uVar26 = *puVar37;
    lVar47 = thunk_FUN_0367fe20(*(undefined8 *)OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo);
    FUN_04b20cd8(lVar47,uVar26,*(undefined8 *)OVRGLTFLoader_<LoadGLBCoroutine>d__26_TypeInfo,0);
    plVar33 = (long *)(*(long *)(*(long *)OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo + 0xb8) +
                      8);
    *plVar33 = lVar47;
    thunk_FUN_036b7ad0(plVar33,lVar47);
  }
  if (lVar28 == 0) goto LAB_070210d4;
  lVar24 = FUN_0459f6fc(lVar28,lVar47,
                        *(undefined8 *)OVRGLTFAnimatinonNode_OVRGLTFTransformType_TypeInfo);
  if ((uVar18 & 1) != 0) {
    FUN_06fbba0c();
  }
  if ((uVar19 & 1) != 0) {
    FUN_06fbba0c();
  }
  uVar14 = (uint)(byte)(cVar44 != '\0' | auVar58[3]) & (uVar12 ^ 1);
  if ((uVar21 & 1) == 0 && uVar40 == 0) {
    if (*(char *)(lVar25 + 400) == '\0' && !bVar8) {
      bVar11 = auVar58[0] & 1;
    }
    else {
      bVar11 = 1;
    }
  }
  else {
    bVar11 = 0;
  }
  lVar28 = *(long *)(unaff_x19 + 0xe8);
  uVar50 = uVar50 & bVar11 != 0;
  if (lVar28 != 0) {
    uVar18 = FUN_06fc2f4c(lVar25,0);
    uVar32 = FUN_06f98ac0(lVar28,uVar18 & 1,0);
    if ((uVar32 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_070210d4;
      FUN_06f98ae8(*(long *)(unaff_x19 + 0xe8),&stack0x00000864,0);
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_070210d4;
      uVar32 = FUN_06f98444(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar32 & 1) == 0) && ((uStack0000000000000064 & 1) == 0)) {
        uVar50 = 0;
        uVar14 = 0;
        uVar51 = 0;
        uStack0000000000000054 = 0;
        *(undefined1 *)(unaff_x19 + 0x140) = 0;
      }
      if (*(char *)(unaff_x19 + 0x134) != '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_070210d4;
        bVar11 = FUN_06f9858c(*(long *)(unaff_x19 + 0xe8),0);
        *(byte *)(unaff_x19 + 0x134) = bVar11 & 1;
      }
    }
  }
  if (*(long *)(lVar25 + 0x1d8) == 0) goto LAB_070210d4;
  *(undefined1 *)(*(long *)(lVar25 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  iVar23 = auVar58._8_4_;
  if ((uVar15 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    lVar28 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar28 == 0) goto LAB_070210d4;
    if ((*(char *)(lVar28 + 0x15) != '\0') &&
       ((iVar23 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_0703dc4c(lVar28,0);
    }
    bVar11 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  if (bVar11 != 0 || ((uVar51 & 1) != 0 || uVar50 != 0)) {
    if (((uVar15 | uVar51 ^ 0xffffffff) & 1) == 0) {
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
    lVar28 = *(long *)(unaff_x19 + 0x268);
    if ((lVar28 == 0) || (lVar29 == 0)) goto LAB_070210d4;
    FUN_071f4d90(lVar29,*(undefined8 *)(lVar28 + 0x58),&stack0x00000410,0);
    if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_071ff388(&stack0x000009d8,lVar29,0);
    FUN_071e8b78(lVar29,0);
  }
  if ((uVar15 & 1) == 0) {
    if ((bVar10 & 1) != 0) {
LAB_0701fd04:
      bVar8 = false;
      plVar33 = (long *)(unaff_x19 + 0x278);
      puVar37 = (undefined8 *)OVRGLTFLoader_<ProcessNode>d__38_TypeInfo;
LAB_0701fd14:
      uVar26 = *puVar37;
      if (bVar8) {
        lVar28 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar28 == 0) goto LAB_070210d4;
        uVar13 = FUN_0703c308(lVar28,0);
        uVar13 = FUN_0703c414(lVar28,uVar13,0);
        FUN_071a6688(&stack0x000007f0,uVar13,0);
        lVar28 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar28 == 0) goto LAB_070210d4;
        uVar13 = FUN_0703c308(lVar28,0);
        FUN_0703dff8(lVar28,&stack0x00000390,uVar13,0);
      }
      else {
        uVar13 = FUN_07002644(in_stack_00000988,0);
        FUN_071a6688(&stack0x000007f0,uVar13,0);
        if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_036a1978();
        }
        FUN_07006be0(0,plVar33,&stack0x000007f0,0,1,1,uVar26,0);
      }
      if ((*plVar33 == 0) || (lVar29 == 0)) goto LAB_070210d4;
      FUN_071f4d90(lVar29,*(undefined8 *)(*plVar33 + 0x58),&stack0x00000360,0);
      puVar7 = LabelTrack_TypeInfo;
      if (*(int *)(*(long *)LabelTrack_TypeInfo + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if (DAT_07eeba1e == '\0') {
        FUN_03642964(LabelTrack_TypeInfo);
        DAT_07eeba1e = '\x01';
      }
      lVar28 = *(long *)puVar7;
      if (*(int *)(lVar28 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar28 = *(long *)puVar7;
      }
      if (**(long **)(lVar28 + 0xb8) == 0) goto LAB_070210d4;
      plVar34 = (long *)(**(long **)(lVar28 + 0xb8) + 0x10);
      *plVar34 = lVar29;
      thunk_FUN_036b7ad0(plVar34,lVar29);
      FUN_07002560(**(undefined8 **)(*(long *)puVar7 + 0xb8),in_stack_00000988,0);
      if ((uVar15 & 1) != 0) {
        if (*plVar33 == 0) goto LAB_070210d4;
        FUN_071f4d90(lVar29,*(undefined8 *)OVRGLTFLoader_<ProcessNode>d__38_TypeInfo,
                     &stack0x00000330,0);
      }
      if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_071ff388(&stack0x000009d8,lVar29,0);
      FUN_071e8b78(lVar29,0);
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_070210d4;
    bVar11 = FUN_0703c338(*(long *)(unaff_x19 + 0x2a0),0);
    if (((bVar10 | bVar11) & 1) != 0) {
      if ((bVar11 & 1) == 0) goto LAB_0701fd04;
      lVar28 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar28 == 0) goto LAB_070210d4;
      lVar47 = *(long *)(lVar28 + 0x30);
      uVar18 = FUN_0703c308(lVar28,0);
      if (lVar47 == 0) goto LAB_070210d4;
      if (*(uint *)(lVar47 + 0x18) <= uVar18) goto LAB_070210e4;
      plVar33 = (long *)(lVar47 + (long)(int)uVar18 * 8 + 0x20);
      if (*plVar33 == 0) goto LAB_070210d4;
      bVar8 = true;
      puVar37 = (undefined8 *)(*plVar33 + 0x58);
      goto LAB_0701fd14;
    }
  }
  puVar7 = System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_ToStringClass_TypeInfo;
  if ((uVar51 & 1) != 0) {
    if ((uVar30 & 0x10000) == 0) {
      if ((uVar15 & 1) != 0) goto LAB_070203ac;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_070210d4;
      FUN_07054698(*(long *)(unaff_x19 + 0x148),&stack0x00000250,*(undefined8 *)(unaff_x19 + 0x268),
                   0);
    }
    else {
      lVar28 = *(long *)
                System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_ToStringClass_TypeInfo
      ;
      if (*(int *)(lVar28 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar28 = *(long *)puVar7;
        if ((uVar15 & 1) != 0) goto LAB_0701ffc4;
LAB_07020008:
        plVar33 = (long *)(unaff_x19 + 0x270);
        puVar37 = (undefined8 *)(*(long *)(lVar28 + 0xb8) + 0x18);
      }
      else {
        if ((uVar15 & 1) == 0) goto LAB_07020008;
LAB_0701ffc4:
        lVar28 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar28 == 0) goto LAB_070210d4;
        lVar47 = *(long *)(lVar28 + 0x30);
        uVar18 = FUN_0703c2e4(lVar28,0);
        if (lVar47 == 0) goto LAB_070210d4;
        if (*(uint *)(lVar47 + 0x18) <= uVar18) goto LAB_070210e4;
        plVar33 = (long *)(lVar47 + (long)(int)uVar18 * 8 + 0x20);
        if (*plVar33 == 0) goto LAB_070210d4;
        puVar37 = (undefined8 *)(*plVar33 + 0x58);
      }
      uVar26 = *puVar37;
      if ((uVar15 & 1) == 0) {
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar13 = FUN_07052c50(0);
        FUN_071a6688(&stack0x000007b0,uVar13,0);
        if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_036a1978();
        }
        FUN_07006be0(0,plVar33,&stack0x000007b0,0,1,1,uVar26,0);
      }
      else {
        lVar28 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar28 == 0) goto LAB_070210d4;
        uVar13 = FUN_0703c2e4(lVar28,0);
        uVar13 = FUN_0703c414(lVar28,uVar13,0);
        FUN_071a6688(&stack0x000007b0,uVar13,0);
        lVar28 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar28 == 0) goto LAB_070210d4;
        uVar13 = FUN_0703c2e4(lVar28,0);
        FUN_0703dff8(lVar28,&stack0x000002f0,uVar13,0);
      }
      if ((*plVar33 == 0) || (lVar29 == 0)) goto LAB_070210d4;
      FUN_071f4d90(lVar29,*(undefined8 *)(*plVar33 + 0x58),&stack0x000002c0,0);
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if (*plVar33 == 0) goto LAB_070210d4;
        FUN_071f4d90(lVar29,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18),
                     &stack0x00000290,0);
      }
      if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_071ff388(&stack0x000009d8,lVar29,0);
      FUN_071e8b78(lVar29,0);
      if ((uVar15 & 1) == 0) {
        lVar28 = *(long *)(unaff_x19 + 0x150);
        if (bVar9) {
          if (lVar28 == 0) goto LAB_070210d4;
          FUN_07052cd0(lVar28,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
        else {
          if (lVar28 == 0) goto LAB_070210d4;
          FUN_07052c98(lVar28,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
        goto LAB_0702039c;
      }
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_070210d4;
      uVar18 = FUN_0703c2e4(*(long *)(unaff_x19 + 0x2a0),0);
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_070210d4;
      uVar32 = FUN_0703c338(*(long *)(unaff_x19 + 0x2a0),0);
      lVar47 = *(long *)(unaff_x19 + 0x150);
      uVar26 = *(undefined8 *)(unaff_x19 + 0x240);
      lVar28 = *(long *)(unaff_x19 + 0x2a0);
      if ((uVar32 & 1) == 0) {
        if (bVar9) {
          if ((lVar28 == 0) || (lVar28 = *(long *)(lVar28 + 0x30), lVar28 == 0)) goto LAB_070210d4;
          if (*(uint *)(lVar28 + 0x18) <= uVar18) goto LAB_070210e4;
          if (lVar47 == 0) goto LAB_070210d4;
          uVar31 = *(undefined8 *)(unaff_x19 + 0x278);
          uVar27 = *(undefined8 *)(lVar28 + (long)(int)uVar18 * 8 + 0x20);
          goto LAB_0702030c;
        }
        if ((lVar28 == 0) || (lVar28 = *(long *)(lVar28 + 0x30), lVar28 == 0)) goto LAB_070210d4;
        if (*(uint *)(lVar28 + 0x18) <= uVar18) goto LAB_070210e4;
        if (lVar47 == 0) goto LAB_070210d4;
        FUN_07052c98(lVar47,uVar26,*(undefined8 *)(lVar28 + (long)(int)uVar18 * 8 + 0x20),0);
      }
      else {
        if ((lVar28 == 0) || (lVar41 = *(long *)(lVar28 + 0x30), lVar41 == 0)) goto LAB_070210d4;
        if (*(uint *)(lVar41 + 0x18) <= uVar18) {
LAB_070210e4:
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        uVar27 = *(undefined8 *)(lVar41 + (long)(int)uVar18 * 8 + 0x20);
        uVar18 = FUN_0703c308(lVar28,0);
        if (*(uint *)(lVar41 + 0x18) <= uVar18) goto LAB_070210e4;
        if (lVar47 == 0) goto LAB_070210d4;
        uVar31 = *(undefined8 *)(lVar41 + (long)(int)uVar18 * 8 + 0x20);
LAB_0702030c:
        FUN_07052cd0(lVar47,uVar26,uVar27,uVar31,0);
      }
      puVar7 = Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo;
      if (0xffffffe0 < iVar23 - 0xfbU) {
        lVar28 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_036a1978();
        }
        if (lVar28 == 0) goto LAB_070210d4;
        puVar37 = (undefined8 *)(lVar28 + 0xb8);
        *puVar37 = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        thunk_FUN_036b7ad0(puVar37);
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
    FUN_07006be0(0,unaff_x19 + 0x330,&stack0x00000770,0,1,0,*(undefined8 *)OVRHandTest_<>c_TypeInfo,
                 0);
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_070210d4;
    FUN_0704d1dc(*(long *)(unaff_x19 + 0x310),&stack0x00000760,0);
    FUN_06fbba0c();
  }
  if (*(long *)(lVar25 + 0x1a0) == 0) goto LAB_070210d4;
  uVar32 = FUN_06e8636c(*(long *)(lVar25 + 0x1a0),0);
  if ((uVar32 & 1) != 0) {
    FUN_06fbba0c();
  }
  cVar44 = *(char *)(lVar25 + 0x1e0);
  iVar43 = (int)uVar52;
  if ((uVar15 & 1) == 0) {
    uVar13 = 2;
    if ((uVar14 & 1) == 0) {
      uVar13 = 0;
    }
    uVar3 = 0;
    if (1 < iVar43) {
      uVar3 = uVar13;
    }
    iVar23 = 0;
    if ((uVar50 == 0 && (uVar14 & 1) == 0) && cVar44 != '\0') {
      iVar23 = 3;
    }
    if (*(long *)(lVar25 + 0x1a0) == 0) goto LAB_070210d4;
    uVar32 = FUN_06e81af8(*(long *)(lVar25 + 0x1a0),0);
    if ((uVar32 & 1) != 0) {
      if (*(long *)(lVar25 + 0x1a0) == 0) goto LAB_070210d4;
      if (*(char *)(*(long *)(lVar25 + 0x1a0) + 0x28) != '\0') {
        iVar23 = 0;
      }
    }
    uVar18 = 0;
    if (1 < iVar43) {
      uVar18 = uVar50;
    }
    if (uVar18 == 1) {
      if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4) ==
          0) {
        thunk_FUN_036a1978();
      }
      uVar32 = FUN_070056f4(0);
      if ((uVar32 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_070210d4;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (uVar14 & 1) == 0) {
          if (iVar23 == 0) {
            iVar23 = 2;
          }
          else if (iVar23 == 3) {
            iVar23 = 1;
          }
        }
      }
    }
    if (uVar42 == 0) {
      lVar28 = *(long *)(unaff_x19 + 0x198);
      if (lVar28 == 0) goto LAB_070210d4;
    }
    else {
      lVar28 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar28 == 0) goto LAB_070210d4;
      FUN_07057664(lVar28,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_06faf8fc(lVar28,uVar3,0,0);
    FUN_06fafa34(lVar28,iVar23,0);
    puVar7 = OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo;
    lVar41 = *(long *)(unaff_x19 + 0x108);
    lVar47 = *(long *)OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo;
    if (*(int *)(lVar47 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar47 = *(long *)puVar7;
    }
    puVar37 = *(undefined8 **)(lVar47 + 0xb8);
    lVar48 = puVar37[2];
    if (lVar48 == 0) {
      if (*(int *)(lVar47 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        puVar37 = *(undefined8 **)(*(long *)OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo + 0xb8);
      }
      uVar26 = *puVar37;
      lVar48 = thunk_FUN_0367fe20(*(undefined8 *)OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo);
      FUN_04b20cd8(lVar48,uVar26,*(undefined8 *)OVRGLTFLoader_<LoadGLTF>d__37_TypeInfo,0);
      plVar33 = (long *)(*(long *)(*(long *)OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo + 0xb8)
                        + 0x10);
      *plVar33 = lVar48;
      thunk_FUN_036b7ad0(plVar33,lVar48);
    }
    if (lVar41 == 0) goto LAB_070210d4;
    lVar47 = FUN_0459f6fc(lVar41,lVar48,
                          *(undefined8 *)OVRGLTFAnimatinonNode_OVRGLTFTransformType_TypeInfo);
    if ((lVar47 == 0) && (*(int *)(lVar25 + 0xe8) == 0)) {
      if (lVar46 == 0) goto LAB_070210d4;
      iVar23 = FUN_071745e0(lVar46,0);
      if (iVar23 == 4) goto LAB_0702071c;
      uVar13 = 1;
    }
    else {
LAB_0702071c:
      uVar13 = 0;
    }
    uVar32 = FUN_071cc22c(0);
    if ((uVar32 & 1) != 0) {
      FUN_06faff28(0,0,0,0x3f800000,lVar28,uVar13,0);
    }
    FUN_06fbba0c();
  }
  else {
    lVar28 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar28 == 0) goto LAB_070210d4;
    if ((*(char *)(lVar28 + 0x15) != '\0') &&
       ((iVar23 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_0703dc4c(lVar28,0);
    }
    FUN_07021cf8();
  }
  if (lVar46 == 0) goto LAB_070210d4;
  iVar23 = FUN_071745e0(lVar46,0);
  if ((iVar23 == 1) && (*(int *)(lVar25 + 0xe8) != 1)) {
    uVar26 = FUN_0718b7d0(0);
    if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)PTR_DAT_079f4e28);
    }
    uVar32 = FUN_071c0684(uVar26,0,0);
    if ((uVar32 & 1) == 0) {
      uVar32 = FUN_03c37834(lVar46,&stack0x00000758,
                            *(undefined8 *)OVRFaceExpressions_FaceViseme_TypeInfo);
      if ((uVar32 & 1) != 0) goto LAB_070210d4;
    }
    else {
      FUN_06fbba0c();
    }
  }
  if (uVar50 == 0) {
    if (*(int *)(lVar25 + 0xe8) == 0 && (uVar51 & 1) == 0) {
      uVar32 = FUN_071cbe00(0);
      uVar26 = *(undefined8 *)
                OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose_TypeInfo;
      if ((uVar32 & 1) == 0) {
        uVar27 = FUN_0719d0d8(0);
      }
      else {
        uVar27 = FUN_0719d160(0);
      }
      FUN_0718cc14(uVar26,uVar27,0);
    }
  }
  else if ((((uVar15 & 1) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')) || ((uVar30 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_070210d4;
    FUN_07050878(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_06fbba0c();
  }
  if ((uVar14 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_079ff4c8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar28 = FUN_0702e180(0);
    if (lVar28 == 0) goto LAB_070210d4;
    uVar13 = *(undefined4 *)(lVar28 + 0x48);
    FUN_0704f508(uVar13,&stack0x00000720,&stack0x0000071c,0);
    if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4) == 0
       ) {
      thunk_FUN_036a1978();
    }
    FUN_07006be0(0,unaff_x19 + 0x280,&stack0x00000720,0,1,1,
                 *(undefined8 *)OVR_OpenVR_IVRSystem__GetSortedTrackedDeviceIndicesOfClass_TypeInfo,
                 0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_070210d4;
    FUN_0704f5a8(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x230),
                 *(undefined8 *)(unaff_x19 + 0x280),uVar13,0);
    FUN_06fbba0c();
  }
  if ((uVar30 & 0x100000000) != 0) {
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
    FUN_06fd6150(lVar29,lVar25,0);
    if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_070210d4;
    FUN_06fd4b8c(*(long *)(unaff_x19 + 0x160),*(undefined8 *)(unaff_x19 + 0x288),
                 *(undefined8 *)(unaff_x19 + 0x290),0);
    FUN_06fbba0c();
  }
  if ((uVar20 & 1) != 0) {
    FUN_06fbba0c();
  }
  uVar14 = 0;
  if (cVar44 != '\0') {
    uVar14 = 3;
  }
  uVar42 = (uint)(cVar44 == '\0');
  if (iVar43 < 2) {
    uVar42 = 1;
  }
  if (uVar50 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_070210d4;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar14 = 0, 1 < iVar43)) {
      if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4) ==
          0) {
        thunk_FUN_036a1978();
      }
      uVar14 = FUN_070056f4(0);
      uVar14 = uVar14 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_070210d4;
  FUN_06faf8fc(*(long *)(unaff_x19 + 0x1c8),((uVar42 | uVar12) ^ 0xffffffff) & 1,0,0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_070210d4;
  FUN_06fafa34(*(long *)(unaff_x19 + 0x1c8),uVar14,0);
  FUN_06fbba0c();
  FUN_06fbba0c();
  FUN_07021e50();
  uVar30 = FUN_06fc3250(lVar25,0);
  uVar32 = FUN_06fc3018(lVar25,0);
  if (((uVar30 & 1) != 0) && ((uVar32 & 1) != 0)) {
    lVar28 = *(long *)(unaff_x19 + 0x200);
    uVar13 = FUN_0701c450();
    if (lVar28 == 0) goto LAB_070210d4;
    FUN_06fcf4c8(lVar28,lVar25,uVar13,0);
    FUN_06fbba0c();
  }
  bVar9 = cVar44 == '\0';
  bVar8 = *(long *)(lVar25 + 0x1b0) != 0;
  if ((bVar9 || ((uVar17 ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(lVar25 + 0x1cc) != 1 &&
       ((*(int *)(lVar25 + 0x170) != 1 || (*(int *)(lVar25 + 0x174) == 0)))) &&
      ((uVar35 = FUN_06fc35d8(lVar25,0), (uVar35 & 1) == 0 || (*(float *)(lVar25 + 0x224) <= 0.0))))
     )) {
    bVar10 = 0;
joined_r0x07020c98:
    if (!bVar8 || bVar9) goto LAB_07020c9c;
FUN_07020cbc:
    bVar11 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) == 0) {
      bVar10 = 1;
      goto joined_r0x07020c98;
    }
    bVar10 = FUN_06f98428(*(long *)(unaff_x19 + 0xe8),0);
    if (bVar8 && !bVar9) goto FUN_07020cbc;
LAB_07020c9c:
    bVar11 = lVar24 == 0 & (bVar10 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar12 = 1;
  }
  else {
    uVar12 = FUN_06f98518(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(lVar25 + 0x1e0),0);
    uVar12 = uVar12 ^ 1;
  }
  plVar33 = (long *)(unaff_x19 + 0x230);
  plVar34 = (long *)(unaff_x19 + 0x240);
  if (uVar16 == 0) {
    if (cVar44 == '\0') {
      return;
    }
    FUN_0701ddb0();
  }
  else {
    uVar13 = FUN_071a6238(&stack0x00000990,0);
    if (*(int *)(*(long *)System_Data_Index_IndexTree_TypeInfo + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)System_Data_Index_IndexTree_TypeInfo);
    }
    in_stack_00000190 = uVar36;
    in_stack_00000198 = uVar52;
    in_stack_000001a0 = uVar53;
    in_stack_000001a8 = uVar55;
    in_stack_000001b0 = uVar39;
    in_stack_000001b8 = uVar57;
    in_stack_000001c0 = uVar2;
    TMPro_MarkupAttribute__set_ValueStartIndex
              (&stack0x000001d0,&stack0x00000190,uVar36 & 0xffffffff,(int)(uVar36 >> 0x20),uVar13,0,
               0);
    if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4) == 0
       ) {
      thunk_FUN_036a1978();
    }
    FUN_07006be0(0,unaff_x19 + 0x328,&stack0x00000660,0,1,1,*(undefined8 *)OVRHand_Hand_TypeInfo,0);
    if (cVar44 == '\0') {
      if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_070210d4;
      FUN_06fd7528(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar33,0,plVar34,&stack0x00000760,
                   unaff_x19 + 0x288,0);
      goto LAB_0701ee34;
    }
    FUN_0701ddb0();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_070210d4;
    FUN_06fd7528(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar33,bVar11,plVar34,
                 &stack0x00000760,unaff_x19 + 0x288,bVar10 & 1);
    FUN_06fbba0c();
  }
  lVar28 = *plVar33;
  if ((bVar10 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_070210d4;
    FUN_06fd7670(*(long *)(unaff_x19 + 800),&stack0x00000658,1,uVar12 & 1,0);
    FUN_06fbba0c();
  }
  if (*(long *)(lVar25 + 0x1b0) != 0) {
    FUN_06fbba0c();
  }
  if (((bVar10 & 1) == 0) && (((uVar16 == 0 || (lVar24 != 0)) || (bVar8 && !bVar9)))) {
    lVar24 = *plVar33;
    if (lVar24 == 0) goto LAB_070210d4;
    uVar31 = *(undefined8 *)(lVar24 + 0x30);
    uVar27 = *(undefined8 *)(lVar24 + 0x28);
    uVar56 = *(undefined8 *)(lVar24 + 0x40);
    uVar54 = *(undefined8 *)(lVar24 + 0x38);
    uVar26 = *(undefined8 *)(lVar24 + 0x48);
    lVar24 = *(long *)(unaff_x19 + 600);
    if (lVar24 == 0) goto LAB_070210d4;
    in_stack_000001d8 = *(undefined8 *)(lVar24 + 0x30);
    in_stack_000001d0 = *(undefined8 *)(lVar24 + 0x28);
    in_stack_000001e8 = *(undefined8 *)(lVar24 + 0x40);
    in_stack_000001e0 = *(undefined8 *)(lVar24 + 0x38);
    uVar38 = *(undefined8 *)(lVar24 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_079f79a0 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000148 = in_stack_000001e8;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar38;
    in_stack_00000160 = uVar27;
    in_stack_00000168 = uVar31;
    in_stack_00000170 = uVar54;
    in_stack_00000178 = uVar56;
    in_stack_00000180 = uVar26;
    uVar35 = FUN_071e0e74(&stack0x00000160,&stack0x00000130,0);
    if ((uVar35 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_070210d4;
      in_stack_000000f0 = uVar36;
      in_stack_000000f8 = uVar52;
      in_stack_00000100 = uVar53;
      in_stack_00000108 = uVar55;
      in_stack_00000110 = uVar39;
      in_stack_00000118 = uVar57;
      in_stack_00000120 = uVar2;
      FUN_07058ac0(*(long *)(unaff_x19 + 0x1d8),&stack0x000000f0,lVar28,0);
      FUN_06fbba0c();
    }
  }
  if (((uVar30 & 1) != 0) && ((uVar32 & 1) == 0 && *(char *)(lVar25 + 0x238) != '\0')) {
    FUN_06fbba0c();
  }
  if (*(long *)(lVar25 + 0x1a0) != 0) {
    uVar36 = FUN_06e81af8(*(long *)(lVar25 + 0x1a0),0);
    if ((uVar36 & 1) == 0) {
      return;
    }
    lVar24 = *plVar34;
    if (lVar24 != 0) {
      uVar52 = *(undefined8 *)(lVar24 + 0x30);
      uVar27 = *(undefined8 *)(lVar24 + 0x28);
      uVar55 = *(undefined8 *)(lVar24 + 0x40);
      uVar53 = *(undefined8 *)(lVar24 + 0x38);
      uVar26 = *(undefined8 *)(lVar24 + 0x48);
      lVar24 = *(long *)(lVar25 + 0x1a0);
      if (lVar24 != 0) {
        in_stack_000001d8 = *(undefined8 *)(lVar24 + 0x48);
        in_stack_000001d0 = *(undefined8 *)(lVar24 + 0x40);
        in_stack_000001e8 = *(undefined8 *)(lVar24 + 0x58);
        in_stack_000001e0 = *(undefined8 *)(lVar24 + 0x50);
        uVar39 = *(undefined8 *)(lVar24 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_079f79a0 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a8 = in_stack_000001e8;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar39;
        in_stack_000000c0 = uVar27;
        in_stack_000000c8 = uVar52;
        in_stack_000000d0 = uVar53;
        in_stack_000000d8 = uVar55;
        in_stack_000000e0 = uVar26;
        uVar36 = FUN_071e0e74(&stack0x000000c0,&stack0x00000090,0);
        if ((uVar36 & 1) != 0) {
          return;
        }
        if (*(long *)(lVar25 + 0x1a0) != 0) {
          if (*(char *)(*(long *)(lVar25 + 0x1a0) + 0x28) == '\0') {
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


