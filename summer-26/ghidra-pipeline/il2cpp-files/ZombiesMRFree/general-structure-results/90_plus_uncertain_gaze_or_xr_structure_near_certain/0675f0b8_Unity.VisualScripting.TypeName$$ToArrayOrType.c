/*
FUNCTION_NAME: Unity.VisualScripting.TypeName$$ToArrayOrType
ENTRY_POINT: 0675f0b8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 163
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_VisualScripting_TypeName__ToArrayOrType(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 extraout_x1;
  uint uVar17;
  long unaff_x19;
  long unaff_x20;
  long *plVar18;
  undefined1 (*unaff_x21) [12];
  undefined8 uVar19;
  long *unaff_x24;
  long *unaff_x26;
  undefined8 uVar20;
  long lVar21;
  undefined1 auVar22 [12];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_000000c0;
  undefined1 uStack00000000000000c8;
  undefined7 uStack00000000000000c9;
  
  uVar13 = FUN_0669a3b8();
                    /* try { // try from 0675f0c0 to 0685f13f has its CatchHandler @ 0675ef1c */
  *(undefined8 *)(unaff_x19 + 0x348) = uVar13;
  thunk_FUN_03048534(unaff_x19 + 0x348);
  lVar21 = *(long *)(unaff_x20 + 0x68);
  auVar22 = FUN_06922194(0);
  *unaff_x21 = auVar22;
  puVar7 = PTR_DAT_06f9a540;
  if (lVar21 == 0) goto LAB_0675fddc;
  FUN_0692235c();
  FUN_069223e8();
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 0675f07c with catch @ 0675f114
                       catch(type#1 @ 06b7e988) { ... } // from try @ 0675f0b0 with catch @ 0675f114
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 0675f080 with catch @ 0675f118
                        */
  FUN_06922404();
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 0675f094 with catch @ 0675f11c
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 0675f0b4 with catch @ 0675f120
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 0675f04c with catch @ 0675f124
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 0675f038 with catch @ 0675f128
                        */
  FUN_06922420();
  FUN_0692243c();
  *(undefined4 *)(unaff_x19 + 0x310) = *(undefined4 *)(unaff_x20 + 0x84);
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar6 = PTR_DAT_06f6d618;
  lVar14 = FUN_067676ac(0);
  if ((lVar14 != 0) && (*(char *)(lVar14 + 0xeb) != '\0')) {
    FUN_06731f3c(&stack0x00000030,0);
    uStack00000000000000b4 = CONCAT44(uStack0000000000000048,uStack0000000000000044);
    in_stack_000000a8 = uStack0000000000000038;
    in_stack_000000a0 = _uStack0000000000000030;
    uStack00000000000000b0 = uStack0000000000000040;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar14 = FUN_067676ac(0);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)puVar6);
    }
    uVar15 = FUN_068fc830(lVar14,0);
    if ((uVar15 & 1) != 0) {
      if (lVar14 == 0) goto LAB_0675fddc;
      in_stack_000000a8 = FUN_06704aa4(lVar14,0);
      in_stack_000000a0 = FUN_06704cdc(lVar14,0);
    }
    uVar13 = thunk_FUN_0301080c(*(undefined8 *)
                                 Unity_Entities_TypeManager_SharedTypeIndex<OrientationYAxisForward>_TypeInfo
                               );
    FUN_0672f2b8(uVar13,&stack0x000000a0,0);
    *(undefined8 *)(unaff_x19 + 0x308) = uVar13;
    thunk_FUN_03048534(unaff_x19 + 0x308,uVar13);
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  *(undefined2 *)(unaff_x19 + 0x1a6) = 0x101;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  if (DAT_073a14b1 == '\0') {
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<Tooltip>_TypeInfo);
    DAT_073a14b1 = '\x01';
  }
  puVar9 = Unity_Entities_TypeManager_SharedTypeIndex<VRTextInput>_TypeInfo;
  puVar8 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKPlatform>_TypeInfo;
  puVar6 = Unity_Entities_TypeManager_SharedTypeIndex<RotateWithHMD>_TypeInfo;
  puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<RotateTowards>_TypeInfo;
  lVar14 = *unaff_x26;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar14 = *unaff_x26;
  }
  puVar10 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKArmMocap>_TypeInfo;
  in_stack_000000c0 = *(undefined8 *)(unaff_x19 + 0x308);
  *(byte *)(unaff_x19 + 0x1a7) = *(byte *)(*(long *)(lVar14 + 0xb8) + 8) ^ 1;
  thunk_FUN_03048534(&stack0x000000c0);
  uVar19 = in_stack_000000c0;
  uStack00000000000000c8 = *(int *)(unaff_x20 + 0x74) == 2;
  *(undefined1 *)(unaff_x19 + 0x1a8) = uStack00000000000000c8;
  uVar13 = CONCAT71(uStack00000000000000c9,uStack00000000000000c8);
  uVar16 = thunk_FUN_0301080c(*(undefined8 *)puVar8);
  FUN_067833cc(uVar16,uVar19,uVar13,0);
  *(undefined8 *)(unaff_x19 + 0x2d8) = uVar16;
  thunk_FUN_03048534(unaff_x19 + 0x2d8,uVar16);
  *(undefined8 *)(unaff_x19 + 0x2e8) = *(undefined8 *)(unaff_x20 + 0x74);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x7c);
  *(undefined1 *)(unaff_x19 + 0x2f4) = 0;
  *(undefined4 *)(unaff_x19 + 0x2f0) = uVar12;
  uVar13 = thunk_FUN_0301080c(*(undefined8 *)puVar6);
  FUN_06792500(uVar13,0x32,0);
  *(undefined8 *)(unaff_x19 + 0x1d0) = uVar13;
  thunk_FUN_03048534(unaff_x19 + 0x1d0,uVar13);
  uVar13 = thunk_FUN_0301080c(*(undefined8 *)puVar7);
  FUN_0677ee2c(uVar13,0x32,0);
  *(undefined8 *)(unaff_x19 + 0x1d8) = uVar13;
  thunk_FUN_03048534(unaff_x19 + 0x1d8,uVar13);
  uVar13 = thunk_FUN_0301080c(*(undefined8 *)puVar9);
  FUN_06742b48(uVar13,0xfa,0);
  *(undefined8 *)(unaff_x19 + 0x250) = uVar13;
  thunk_FUN_03048534(unaff_x19 + 0x250,uVar13);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x328);
  uVar13 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo);
  FUN_06789f3c(uVar13,0x3ea,uVar19,0,0,0,0);
  *(undefined8 *)(unaff_x19 + 600) = uVar13;
  thunk_FUN_03048534(unaff_x19 + 600,uVar13);
  if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar13 = FUN_0691d17c(0);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar19 = thunk_FUN_0301080c(*(undefined8 *)puVar10);
  FUN_0678cc70(uVar19,0x96,uVar13,uVar12,0);
  *(undefined8 *)(unaff_x19 + 0x1b0) = uVar19;
  thunk_FUN_03048534(unaff_x19 + 0x1b0,uVar19);
  uVar13 = FUN_0691d17c(0);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar19 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<VRIK>_TypeInfo);
  FUN_0678bae0(uVar19,0x96,uVar13,uVar12,0);
  *(undefined8 *)(unaff_x19 + 0x1b8) = uVar19;
  thunk_FUN_03048534(unaff_x19 + 0x1b8,uVar19);
  uVar17 = *(uint *)(unaff_x19 + 0x2e8);
  if ((uVar17 | 2) == 2) {
    uVar19 = *(undefined8 *)(unaff_x19 + 0x328);
    uVar13 = thunk_FUN_0301080c(*(undefined8 *)
                                 Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo);
    FUN_06789f3c(uVar13,200,uVar19,1,0,0,0);
    *(undefined8 *)(unaff_x19 + 0x1c0) = uVar13;
    thunk_FUN_03048534(unaff_x19 + 0x1c0,uVar13);
    uVar17 = *(uint *)(unaff_x19 + 0x2e8);
  }
  if (uVar17 == 1) {
    in_stack_00000090 = *(undefined8 *)(unaff_x19 + 0x338);
    in_stack_00000098 = 0;
    thunk_FUN_03048534(&stack0x00000090);
    in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0x308);
    thunk_FUN_03048534(&stack0x00000098);
    uVar19 = in_stack_00000098;
    uVar13 = in_stack_00000090;
    uVar4 = *(undefined1 *)(unaff_x19 + 0x1a4);
    uVar16 = thunk_FUN_0301080c(*(undefined8 *)
                                 Unity_Entities_TypeManager_SharedTypeIndex<VREmulator>_TypeInfo);
    FUN_06778ed8(uVar16,uVar13,uVar19,uVar4,0);
    *(undefined8 *)(unaff_x19 + 0x2e0) = uVar16;
    thunk_FUN_03048534(unaff_x19 + 0x2e0,uVar16);
    if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_0675fddc;
    *(undefined1 *)(*(long *)(unaff_x19 + 0x2e0) + 0x1a) = *(undefined1 *)(unaff_x20 + 0x80);
    if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar13 = FUN_0691d17c(0);
    uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
    uVar16 = *(undefined8 *)*unaff_x21;
    uVar1 = *(undefined4 *)(*unaff_x21 + 8);
    uVar2 = *(undefined4 *)(lVar21 + 0x14);
    uVar20 = *(undefined8 *)(unaff_x19 + 0x2e0);
    uVar19 = thunk_FUN_0301080c(*(undefined8 *)
                                 Unity_Entities_TypeManager_SharedTypeIndex<VRIKRootController>_TypeInfo
                               );
    FUN_06790784(uVar19,0xd2,uVar13,uVar12,uVar16,uVar1,uVar2,uVar20);
    *(undefined8 *)(unaff_x19 + 0x1e0) = uVar19;
    thunk_FUN_03048534(unaff_x19 + 0x1e0,uVar19);
    uVar13 = *(undefined8 *)*unaff_x21;
    uVar12 = *(undefined4 *)(*unaff_x21 + 8);
    if (*(int *)(*(long *)Unity_Entities_TypeManager_SharedTypeIndex<VREmulator>_TypeInfo + 0xe0) ==
        0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0677aa2c(uVar13,uVar12,0x60,0);
    lVar21 = FUN_02fe9340(*(undefined8 *)
                           Unity_Entities_TypeManager_SharedTypeIndex<VRKeyboard>_TypeInfo,3);
    _uStack0000000000000030 = _uStack0000000000000030 & 0xffffffff00000000;
    FUN_06921440(&stack0x00000030,*(undefined8 *)System_Collections_Generic_List<Vector2>_TypeInfo,0
                );
    if (lVar21 == 0) goto LAB_0675fddc;
    if (*(int *)(lVar21 + 0x18) == 0) {
LAB_0675fde0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined4 *)(lVar21 + 0x20) = uStack0000000000000030;
    in_stack_00000078 = 0;
    FUN_06921440(&stack0x00000078,*(undefined8 *)System_Collections_Generic_List<Value>_TypeInfo,0);
    if (*(uint *)(lVar21 + 0x18) < 2) goto LAB_0675fde0;
    *(undefined4 *)(lVar21 + 0x24) = in_stack_00000078;
    in_stack_00000070 = 0;
    FUN_06921440(&stack0x00000070,
                 *(undefined8 *)
                  UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo,0);
    if (*(uint *)(lVar21 + 0x18) < 3) goto LAB_0675fde0;
    *(undefined4 *)(lVar21 + 0x28) = in_stack_00000070;
    uVar19 = *(undefined8 *)(unaff_x19 + 0x328);
    uVar13 = thunk_FUN_0301080c(*(undefined8 *)
                                 Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo);
    FUN_06789f3c(uVar13,0xd3,uVar19,1,0,0,0);
    *(undefined8 *)(unaff_x19 + 0x1e8) = uVar13;
    thunk_FUN_03048534(unaff_x19 + 0x1e8,uVar13);
    uVar19 = *(undefined8 *)(unaff_x19 + 0x2e0);
    uVar13 = thunk_FUN_0301080c(*(undefined8 *)
                                 Unity_Entities_TypeManager_SharedTypeIndex<VRIFGrabpointUpdater>_TypeInfo
                               );
    FUN_0678b518(uVar13,0xe6,uVar19,0);
    *(undefined8 *)(unaff_x19 + 0x1f0) = uVar13;
    thunk_FUN_03048534(unaff_x19 + 0x1f0,uVar13);
    uVar13 = FUN_0691d17c(0);
    uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
    uVar19 = thunk_FUN_0301080c(*(undefined8 *)
                                 Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                               );
    FUN_0678db00(uVar19,*(undefined8 *)
                         Unity_Entities_TypeManager_SharedTypeIndex<VRUISystem>_TypeInfo,lVar21,1,
                 0xfa,uVar13,uVar12);
    *(undefined8 *)(unaff_x19 + 0x1f8) = uVar19;
    thunk_FUN_03048534(unaff_x19 + 0x1f8,uVar19);
  }
  puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationController>_TypeInfo;
  if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar13 = FUN_0691d17c(0);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar16 = *(undefined8 *)*unaff_x21;
  uVar1 = *(undefined4 *)(*unaff_x21 + 8);
  uVar19 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                             );
  FUN_0678d7f4(uVar19,10,1,0xfa,uVar13,uVar12,uVar16,uVar1);
  *(undefined8 *)(unaff_x19 + 0x200) = uVar19;
  thunk_FUN_03048534(unaff_x19 + 0x200,uVar19);
  uVar13 = FUN_0691d17c(0);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar16 = *(undefined8 *)*unaff_x21;
  uVar1 = *(undefined4 *)(*unaff_x21 + 8);
  uVar19 = thunk_FUN_0301080c(*(undefined8 *)puVar7);
  FUN_0678d708(uVar19,10,1,0xfa,uVar13,uVar12,uVar16,uVar1);
  *(undefined8 *)(unaff_x19 + 0x208) = uVar19;
  thunk_FUN_03048534(unaff_x19 + 0x208,uVar19);
  iVar3 = *(int *)(unaff_x19 + 0x2f0);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x328);
  uVar17 = 500;
  if (iVar3 != 1) {
    uVar17 = 400;
  }
  if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar6 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKLODController>_TypeInfo;
  puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<QuickBase>_TypeInfo;
  uVar15 = FUN_0674de10(0);
  if ((uVar15 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = FUN_069009c0(0);
    bVar11 = bVar11 & 1;
  }
  uVar19 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo);
  FUN_06789f3c(uVar19,uVar17,uVar13,1,0,bVar11 & iVar3 == 1,0);
  *(undefined8 *)(unaff_x19 + 0x218) = uVar19;
  thunk_FUN_03048534(unaff_x19 + 0x218,uVar19);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x340);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x348);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar13 = thunk_FUN_0301080c(*(undefined8 *)puVar7);
  FUN_0673914c(uVar13,uVar17 | 1,uVar19,uVar16,uVar12,0);
  *(undefined8 *)(unaff_x19 + 0x1c8) = uVar13;
  thunk_FUN_03048534(unaff_x19 + 0x1c8,uVar13);
  uVar13 = thunk_FUN_0301080c(*(undefined8 *)puVar6);
  FUN_0673757c(uVar13,0x15e,0);
  *(undefined8 *)(unaff_x19 + 0x210) = uVar13;
  thunk_FUN_03048534(unaff_x19 + 0x210,uVar13);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x330);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x318);
  uVar13 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<VRController>_TypeInfo);
  FUN_06788a90(uVar13,400,uVar19,uVar16,0);
  *(undefined8 *)(unaff_x19 + 0x220) = uVar13;
  thunk_FUN_03048534(unaff_x19 + 0x220,uVar13);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x70);
  uVar13 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<RotateShoulderToTarget>_TypeInfo
                             );
  FUN_06742814(uVar13,0x1c2,uVar4,0);
  *(undefined8 *)(unaff_x19 + 0x228) = uVar13;
  thunk_FUN_03048534(unaff_x19 + 0x228,uVar13);
  if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar13 = FUN_0691d184(0);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x60);
  uVar16 = *(undefined8 *)*unaff_x21;
  uVar1 = *(undefined4 *)(*unaff_x21 + 8);
  uVar19 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                             );
  FUN_0678d7f4(uVar19,0xb,0,0x1c2,uVar13,uVar12,uVar16,uVar1);
  *(undefined8 *)(unaff_x19 + 0x230) = uVar19;
  thunk_FUN_03048534(unaff_x19 + 0x230,uVar19);
  uVar13 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<VRInitializer>_TypeInfo);
  FUN_06738d08(uVar13,0x226,0);
  *(undefined8 *)(unaff_x19 + 0x238) = uVar13;
  thunk_FUN_03048534(unaff_x19 + 0x238,uVar13);
  puVar7 = OVRTask<OVRResult<Int32Enum>>_TypeInfo;
  uVar13 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRResult<Int32Enum>>_TypeInfo);
  FUN_06736604(uVar13,0x226,1,0);
  *(undefined8 *)(unaff_x19 + 0x260) = uVar13;
  thunk_FUN_03048534(unaff_x19 + 0x260,uVar13);
  uVar13 = thunk_FUN_0301080c(*(undefined8 *)puVar7);
  FUN_06736604(uVar13,0x3ea,0,0);
  *(undefined8 *)(unaff_x19 + 0x268) = uVar13;
  thunk_FUN_03048534(unaff_x19 + 0x268,uVar13);
  FUN_067430c0(0);
  in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0x318);
  in_stack_00000088 = extraout_x1;
  thunk_FUN_03048534(&stack0x00000080);
  puVar7 = PTR_DAT_06f9a540;
  in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,0x4a);
  if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar21 = FUN_067676ac(0);
  if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
  }
  uVar15 = FUN_068fc830(lVar21,0);
  if ((uVar15 & 1) != 0) {
    if (lVar21 == 0) goto LAB_0675fddc;
    cVar5 = *(char *)(lVar21 + 0x55);
    uVar12 = *(undefined4 *)(lVar21 + 0x58);
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar12 = FUN_0676dfe8(cVar5 != '\0',uVar12,0,0);
    in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,uVar12);
  }
  puVar10 = Unity_Entities_TypeManager_SharedTypeIndex<PostTransformMatrix>_TypeInfo;
  puVar9 = OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo;
  puVar8 = OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo;
  puVar6 = OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo;
  puVar7 = OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_TypeInfo;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000038 = 0;
  uStack000000000000003c = 0;
  _uStack0000000000000030 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000044 = 0;
  FUN_06743174(&stack0x00000030,*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,0);
  *(undefined8 *)(unaff_x19 + 0x378) = in_stack_00000058;
  *(undefined8 *)(unaff_x19 + 0x370) = in_stack_00000050;
  *(undefined8 *)(unaff_x19 + 0x388) = in_stack_00000068;
  *(undefined8 *)(unaff_x19 + 0x380) = in_stack_00000060;
  *(ulong *)(unaff_x19 + 0x358) = CONCAT44(uStack000000000000003c,uStack0000000000000038);
  *(ulong *)(unaff_x19 + 0x350) = _uStack0000000000000030;
  *(ulong *)(unaff_x19 + 0x368) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
  *(ulong *)(unaff_x19 + 0x360) = CONCAT44(uStack0000000000000044,uStack0000000000000040);
  thunk_FUN_03048534(unaff_x19 + 0x350,0);
  uVar13 = thunk_FUN_0301080c(*(undefined8 *)puVar10);
  FUN_067361c8(uVar13,1000,0);
  *(undefined8 *)(unaff_x19 + 0x248) = uVar13;
  thunk_FUN_03048534(unaff_x19 + 0x248,uVar13);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x318);
  uVar16 = *(undefined8 *)(unaff_x19 + 800);
  uVar13 = thunk_FUN_0301080c(*(undefined8 *)puVar7);
  FUN_0678ef90(uVar13,0x3e9,uVar19,uVar16,0);
  *(undefined8 *)(unaff_x19 + 0x240) = uVar13;
  thunk_FUN_03048534(unaff_x19 + 0x240,uVar13);
  uVar13 = thunk_FUN_0301080c(*(undefined8 *)puVar6);
  FUN_067945cc(uVar13,*(undefined8 *)puVar9,0);
  *(undefined8 *)(unaff_x19 + 0x270) = uVar13;
  thunk_FUN_03048534(unaff_x19 + 0x270,uVar13);
  lVar21 = thunk_FUN_0301080c(*(undefined8 *)puVar8);
  FUN_0672e074(lVar21,0);
  puVar7 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
  if (*(int *)(*(long *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  plVar18 = (long *)(unaff_x19 + 0xe8);
  *plVar18 = lVar21;
  thunk_FUN_03048534(plVar18,lVar21);
  if (*(int *)(unaff_x19 + 0x2e8) == 1) {
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if (*plVar18 == 0) {
LAB_0675fddc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    *(undefined1 *)(*plVar18 + 0x11) = 0;
    uVar13 = FUN_02fe9340(*(undefined8 *)
                           Unity_Entities_TypeManager_SharedTypeIndex<LocalToWorld>_TypeInfo,3);
    FUN_05a1740c(uVar13,*(undefined8 *)
                         Unity_Entities_TypeManager_SharedTypeIndex<VRKeyboardKey>_TypeInfo,0);
    *(undefined8 *)(unaff_x19 + 0xf0) = uVar13;
    thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0xf0),uVar13);
  }
  puVar7 = 
  System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_TypeInfo
  ;
  lVar21 = *(long *)
            System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_TypeInfo
  ;
  if (*(int *)(lVar21 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar21 = *(long *)puVar7;
  }
  *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x24) = DAT_0136baf0;
  FUN_06683240(0);
  bVar11 = FUN_06911d3c(0x1d,0);
  *(byte *)(unaff_x19 + 0x314) = bVar11 & 1;
  return;
}


