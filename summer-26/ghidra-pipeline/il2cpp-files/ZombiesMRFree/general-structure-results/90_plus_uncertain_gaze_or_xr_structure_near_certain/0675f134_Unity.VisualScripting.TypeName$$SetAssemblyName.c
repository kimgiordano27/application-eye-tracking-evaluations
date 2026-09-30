/*
FUNCTION_NAME: Unity.VisualScripting.TypeName$$SetAssemblyName
ENTRY_POINT: 0675f134
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 163
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_VisualScripting_TypeName__SetAssemblyName(undefined8 param_1,undefined8 param_2)

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
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 extraout_x1;
  uint uVar17;
  long unaff_x19;
  long unaff_x20;
  long *plVar18;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 uVar19;
  long *unaff_x24;
  long *unaff_x26;
  undefined8 uVar20;
  long unaff_x29;
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
  
  FUN_0692243c(param_1,param_2,0);
                    /* try { // try from 0675f140 to 0685f143 has its CatchHandler @ 0675f174 */
  *(undefined4 *)(unaff_x19 + 0x310) = *(undefined4 *)(unaff_x20 + 0x84);
                    /* try { // try from 0675f144 to 0685f183 has its CatchHandler @ 0675ef1c */
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar6 = PTR_DAT_06f6d618;
  lVar13 = FUN_067676ac(0);
  if ((lVar13 != 0) && (*(char *)(lVar13 + 0xeb) != '\0')) {
                    /* catch() { ... } // from try @ 0675f140 with catch @ 0675f174 */
    FUN_06731f3c(&stack0x00000030,0);
    uStack00000000000000b4 = CONCAT44(uStack0000000000000048,uStack0000000000000044);
                    /* try { // try from 0675f184 to 0685f18b has its CatchHandler @ 0675f1a0 */
    in_stack_000000a8 = uStack0000000000000038;
    in_stack_000000a0 = _uStack0000000000000030;
                    /* try { // try from 0675f18c to 0685f197 has its CatchHandler @ 0675ef1c */
    uStack00000000000000b0 = uStack0000000000000040;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                    /* try { // try from 0675f198 to 0685f19f has its CatchHandler @ 0675f1a0 */
      thunk_FUN_02fdcff0();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0675f184 with catch @ 0675f1a0
                       catch(type#2 @ 00000000) { ... } // from try @ 0675f198 with catch @ 0675f1a0
                        */
    lVar13 = FUN_067676ac(0);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)puVar6);
    }
    uVar14 = FUN_068fc830(lVar13,0);
    if ((uVar14 & 1) != 0) {
      if (lVar13 == 0) goto LAB_0675fddc;
      in_stack_000000a8 = FUN_06704aa4(lVar13,0);
      in_stack_000000a0 = FUN_06704cdc(lVar13,0);
    }
    uVar15 = thunk_FUN_0301080c(*(undefined8 *)
                                 Unity_Entities_TypeManager_SharedTypeIndex<OrientationYAxisForward>_TypeInfo
                               );
    FUN_0672f2b8(uVar15,&stack0x000000a0,0);
    *(undefined8 *)(unaff_x19 + 0x308) = uVar15;
    thunk_FUN_03048534(unaff_x19 + 0x308,uVar15);
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
  puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<RotateWithHMD>_TypeInfo;
  puVar6 = Unity_Entities_TypeManager_SharedTypeIndex<RotateTowards>_TypeInfo;
  lVar13 = *unaff_x26;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar13 = *unaff_x26;
  }
  puVar10 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKArmMocap>_TypeInfo;
  in_stack_000000c0 = *(undefined8 *)(unaff_x19 + 0x308);
  *(byte *)(unaff_x19 + 0x1a7) = *(byte *)(*(long *)(lVar13 + 0xb8) + 8) ^ 1;
  thunk_FUN_03048534(&stack0x000000c0);
  uVar19 = in_stack_000000c0;
  uStack00000000000000c8 = *(int *)(unaff_x20 + 0x74) == 2;
  *(undefined1 *)(unaff_x19 + 0x1a8) = uStack00000000000000c8;
  uVar15 = CONCAT71(uStack00000000000000c9,uStack00000000000000c8);
  uVar16 = thunk_FUN_0301080c(*(undefined8 *)puVar8);
  FUN_067833cc(uVar16,uVar19,uVar15,0);
  *(undefined8 *)(unaff_x19 + 0x2d8) = uVar16;
  thunk_FUN_03048534(unaff_x19 + 0x2d8,uVar16);
  *(undefined8 *)(unaff_x19 + 0x2e8) = *(undefined8 *)(unaff_x20 + 0x74);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x7c);
  *(undefined1 *)(unaff_x19 + 0x2f4) = 0;
  *(undefined4 *)(unaff_x19 + 0x2f0) = uVar12;
  uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar7);
  FUN_06792500(uVar15,0x32,0);
  *(undefined8 *)(unaff_x19 + 0x1d0) = uVar15;
  thunk_FUN_03048534(unaff_x19 + 0x1d0,uVar15);
  uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar6);
  FUN_0677ee2c(uVar15,0x32,0);
  *(undefined8 *)(unaff_x19 + 0x1d8) = uVar15;
  thunk_FUN_03048534(unaff_x19 + 0x1d8,uVar15);
  uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar9);
  FUN_06742b48(uVar15,0xfa,0);
  *(undefined8 *)(unaff_x19 + 0x250) = uVar15;
  thunk_FUN_03048534(unaff_x19 + 0x250,uVar15);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x328);
  uVar15 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo);
  FUN_06789f3c(uVar15,0x3ea,uVar19,0,0,0,0);
  *(undefined8 *)(unaff_x19 + 600) = uVar15;
  thunk_FUN_03048534(unaff_x19 + 600,uVar15);
  if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar15 = FUN_0691d17c(0);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar19 = thunk_FUN_0301080c(*(undefined8 *)puVar10);
  FUN_0678cc70(uVar19,0x96,uVar15,uVar12,0);
  *(undefined8 *)(unaff_x19 + 0x1b0) = uVar19;
  thunk_FUN_03048534(unaff_x19 + 0x1b0,uVar19);
  uVar15 = FUN_0691d17c(0);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar19 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<VRIK>_TypeInfo);
  FUN_0678bae0(uVar19,0x96,uVar15,uVar12,0);
  *(undefined8 *)(unaff_x19 + 0x1b8) = uVar19;
  thunk_FUN_03048534(unaff_x19 + 0x1b8,uVar19);
  uVar17 = *(uint *)(unaff_x19 + 0x2e8);
  if ((uVar17 | 2) == 2) {
    uVar19 = *(undefined8 *)(unaff_x19 + 0x328);
    uVar15 = thunk_FUN_0301080c(*(undefined8 *)
                                 Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo);
    FUN_06789f3c(uVar15,200,uVar19,1,0,0,0);
    *(undefined8 *)(unaff_x19 + 0x1c0) = uVar15;
    thunk_FUN_03048534(unaff_x19 + 0x1c0,uVar15);
    uVar17 = *(uint *)(unaff_x19 + 0x2e8);
  }
  if (uVar17 == 1) {
    in_stack_00000090 = *(undefined8 *)(unaff_x19 + 0x338);
    in_stack_00000098 = 0;
    thunk_FUN_03048534(&stack0x00000090);
    in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0x308);
    thunk_FUN_03048534(&stack0x00000098);
    uVar19 = in_stack_00000098;
    uVar15 = in_stack_00000090;
    uVar4 = *(undefined1 *)(unaff_x19 + 0x1a4);
    uVar16 = thunk_FUN_0301080c(*(undefined8 *)
                                 Unity_Entities_TypeManager_SharedTypeIndex<VREmulator>_TypeInfo);
    FUN_06778ed8(uVar16,uVar15,uVar19,uVar4,0);
    *(undefined8 *)(unaff_x19 + 0x2e0) = uVar16;
    thunk_FUN_03048534(unaff_x19 + 0x2e0,uVar16);
    if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_0675fddc;
    *(undefined1 *)(*(long *)(unaff_x19 + 0x2e0) + 0x1a) = *(undefined1 *)(unaff_x20 + 0x80);
    if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar15 = FUN_0691d17c(0);
    uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
    uVar16 = *unaff_x21;
    uVar1 = *(undefined4 *)(unaff_x21 + 1);
    uVar2 = *(undefined4 *)(unaff_x29 + 0x14);
    uVar20 = *(undefined8 *)(unaff_x19 + 0x2e0);
    uVar19 = thunk_FUN_0301080c(*(undefined8 *)
                                 Unity_Entities_TypeManager_SharedTypeIndex<VRIKRootController>_TypeInfo
                               );
    FUN_06790784(uVar19,0xd2,uVar15,uVar12,uVar16,uVar1,uVar2,uVar20);
    *(undefined8 *)(unaff_x19 + 0x1e0) = uVar19;
    thunk_FUN_03048534(unaff_x19 + 0x1e0,uVar19);
    uVar15 = *unaff_x21;
    uVar12 = *(undefined4 *)(unaff_x21 + 1);
    if (*(int *)(*(long *)Unity_Entities_TypeManager_SharedTypeIndex<VREmulator>_TypeInfo + 0xe0) ==
        0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0677aa2c(uVar15,uVar12,0x60,0);
    lVar13 = FUN_02fe9340(*(undefined8 *)
                           Unity_Entities_TypeManager_SharedTypeIndex<VRKeyboard>_TypeInfo,3);
    _uStack0000000000000030 = _uStack0000000000000030 & 0xffffffff00000000;
    FUN_06921440(&stack0x00000030,*(undefined8 *)System_Collections_Generic_List<Vector2>_TypeInfo,0
                );
    if (lVar13 == 0) goto LAB_0675fddc;
    if (*(int *)(lVar13 + 0x18) == 0) {
LAB_0675fde0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined4 *)(lVar13 + 0x20) = uStack0000000000000030;
    in_stack_00000078 = 0;
    FUN_06921440(&stack0x00000078,*(undefined8 *)System_Collections_Generic_List<Value>_TypeInfo,0);
    if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_0675fde0;
    *(undefined4 *)(lVar13 + 0x24) = in_stack_00000078;
    in_stack_00000070 = 0;
    FUN_06921440(&stack0x00000070,
                 *(undefined8 *)
                  UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo,0);
    if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_0675fde0;
    *(undefined4 *)(lVar13 + 0x28) = in_stack_00000070;
    uVar19 = *(undefined8 *)(unaff_x19 + 0x328);
    uVar15 = thunk_FUN_0301080c(*(undefined8 *)
                                 Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo);
    FUN_06789f3c(uVar15,0xd3,uVar19,1,0,0,0);
    *(undefined8 *)(unaff_x19 + 0x1e8) = uVar15;
    thunk_FUN_03048534(unaff_x19 + 0x1e8,uVar15);
    uVar19 = *(undefined8 *)(unaff_x19 + 0x2e0);
    uVar15 = thunk_FUN_0301080c(*(undefined8 *)
                                 Unity_Entities_TypeManager_SharedTypeIndex<VRIFGrabpointUpdater>_TypeInfo
                               );
    FUN_0678b518(uVar15,0xe6,uVar19,0);
    *(undefined8 *)(unaff_x19 + 0x1f0) = uVar15;
    thunk_FUN_03048534(unaff_x19 + 0x1f0,uVar15);
    uVar15 = FUN_0691d17c(0);
    uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
    uVar19 = thunk_FUN_0301080c(*(undefined8 *)
                                 Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                               );
    FUN_0678db00(uVar19,*(undefined8 *)
                         Unity_Entities_TypeManager_SharedTypeIndex<VRUISystem>_TypeInfo,lVar13,1,
                 0xfa,uVar15,uVar12);
    *(undefined8 *)(unaff_x19 + 0x1f8) = uVar19;
    thunk_FUN_03048534(unaff_x19 + 0x1f8,uVar19);
  }
  puVar6 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationController>_TypeInfo;
  if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar15 = FUN_0691d17c(0);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar16 = *unaff_x21;
  uVar1 = *(undefined4 *)(unaff_x21 + 1);
  uVar19 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                             );
  FUN_0678d7f4(uVar19,10,1,0xfa,uVar15,uVar12,uVar16,uVar1);
  *(undefined8 *)(unaff_x19 + 0x200) = uVar19;
  thunk_FUN_03048534(unaff_x19 + 0x200,uVar19);
  uVar15 = FUN_0691d17c(0);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar16 = *unaff_x21;
  uVar1 = *(undefined4 *)(unaff_x21 + 1);
  uVar19 = thunk_FUN_0301080c(*(undefined8 *)puVar6);
  FUN_0678d708(uVar19,10,1,0xfa,uVar15,uVar12,uVar16,uVar1);
  *(undefined8 *)(unaff_x19 + 0x208) = uVar19;
  thunk_FUN_03048534(unaff_x19 + 0x208,uVar19);
  iVar3 = *(int *)(unaff_x19 + 0x2f0);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x328);
  uVar17 = 500;
  if (iVar3 != 1) {
    uVar17 = 400;
  }
  if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKLODController>_TypeInfo;
  puVar6 = Unity_Entities_TypeManager_SharedTypeIndex<QuickBase>_TypeInfo;
  uVar14 = FUN_0674de10(0);
  if ((uVar14 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = FUN_069009c0(0);
    bVar11 = bVar11 & 1;
  }
  uVar19 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo);
  FUN_06789f3c(uVar19,uVar17,uVar15,1,0,bVar11 & iVar3 == 1,0);
  *(undefined8 *)(unaff_x19 + 0x218) = uVar19;
  thunk_FUN_03048534(unaff_x19 + 0x218,uVar19);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x340);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x348);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar6);
  FUN_0673914c(uVar15,uVar17 | 1,uVar19,uVar16,uVar12,0);
  *(undefined8 *)(unaff_x19 + 0x1c8) = uVar15;
  thunk_FUN_03048534(unaff_x19 + 0x1c8,uVar15);
  uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar7);
  FUN_0673757c(uVar15,0x15e,0);
  *(undefined8 *)(unaff_x19 + 0x210) = uVar15;
  thunk_FUN_03048534(unaff_x19 + 0x210,uVar15);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x330);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x318);
  uVar15 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<VRController>_TypeInfo);
  FUN_06788a90(uVar15,400,uVar19,uVar16,0);
  *(undefined8 *)(unaff_x19 + 0x220) = uVar15;
  thunk_FUN_03048534(unaff_x19 + 0x220,uVar15);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x70);
  uVar15 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<RotateShoulderToTarget>_TypeInfo
                             );
  FUN_06742814(uVar15,0x1c2,uVar4,0);
  *(undefined8 *)(unaff_x19 + 0x228) = uVar15;
  thunk_FUN_03048534(unaff_x19 + 0x228,uVar15);
  if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar15 = FUN_0691d184(0);
  uVar12 = *(undefined4 *)(unaff_x20 + 0x60);
  uVar16 = *unaff_x21;
  uVar1 = *(undefined4 *)(unaff_x21 + 1);
  uVar19 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                             );
  FUN_0678d7f4(uVar19,0xb,0,0x1c2,uVar15,uVar12,uVar16,uVar1);
  *(undefined8 *)(unaff_x19 + 0x230) = uVar19;
  thunk_FUN_03048534(unaff_x19 + 0x230,uVar19);
  uVar15 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<VRInitializer>_TypeInfo);
  FUN_06738d08(uVar15,0x226,0);
  *(undefined8 *)(unaff_x19 + 0x238) = uVar15;
  thunk_FUN_03048534(unaff_x19 + 0x238,uVar15);
  puVar6 = OVRTask<OVRResult<Int32Enum>>_TypeInfo;
  uVar15 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRResult<Int32Enum>>_TypeInfo);
  FUN_06736604(uVar15,0x226,1,0);
  *(undefined8 *)(unaff_x19 + 0x260) = uVar15;
  thunk_FUN_03048534(unaff_x19 + 0x260,uVar15);
  uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar6);
  FUN_06736604(uVar15,0x3ea,0,0);
  *(undefined8 *)(unaff_x19 + 0x268) = uVar15;
  thunk_FUN_03048534(unaff_x19 + 0x268,uVar15);
  FUN_067430c0(0);
  in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0x318);
  in_stack_00000088 = extraout_x1;
  thunk_FUN_03048534(&stack0x00000080);
  puVar6 = PTR_DAT_06f9a540;
  in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,0x4a);
  if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar13 = FUN_067676ac(0);
  if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
  }
  uVar14 = FUN_068fc830(lVar13,0);
  if ((uVar14 & 1) != 0) {
    if (lVar13 == 0) goto LAB_0675fddc;
    cVar5 = *(char *)(lVar13 + 0x55);
    uVar12 = *(undefined4 *)(lVar13 + 0x58);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar12 = FUN_0676dfe8(cVar5 != '\0',uVar12,0,0);
    in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,uVar12);
  }
  puVar10 = Unity_Entities_TypeManager_SharedTypeIndex<PostTransformMatrix>_TypeInfo;
  puVar9 = OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo;
  puVar8 = OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo;
  puVar7 = OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo;
  puVar6 = OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_TypeInfo;
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
  uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar10);
  FUN_067361c8(uVar15,1000,0);
  *(undefined8 *)(unaff_x19 + 0x248) = uVar15;
  thunk_FUN_03048534(unaff_x19 + 0x248,uVar15);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x318);
  uVar16 = *(undefined8 *)(unaff_x19 + 800);
  uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar6);
  FUN_0678ef90(uVar15,0x3e9,uVar19,uVar16,0);
  *(undefined8 *)(unaff_x19 + 0x240) = uVar15;
  thunk_FUN_03048534(unaff_x19 + 0x240,uVar15);
  uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar7);
  FUN_067945cc(uVar15,*(undefined8 *)puVar9,0);
  *(undefined8 *)(unaff_x19 + 0x270) = uVar15;
  thunk_FUN_03048534(unaff_x19 + 0x270,uVar15);
  lVar13 = thunk_FUN_0301080c(*(undefined8 *)puVar8);
  FUN_0672e074(lVar13,0);
  puVar6 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
  if (*(int *)(*(long *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  plVar18 = (long *)(unaff_x19 + 0xe8);
  *plVar18 = lVar13;
  thunk_FUN_03048534(plVar18,lVar13);
  if (*(int *)(unaff_x19 + 0x2e8) == 1) {
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if (*plVar18 == 0) {
LAB_0675fddc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    *(undefined1 *)(*plVar18 + 0x11) = 0;
    uVar15 = FUN_02fe9340(*(undefined8 *)
                           Unity_Entities_TypeManager_SharedTypeIndex<LocalToWorld>_TypeInfo,3);
    FUN_05a1740c(uVar15,*(undefined8 *)
                         Unity_Entities_TypeManager_SharedTypeIndex<VRKeyboardKey>_TypeInfo,0);
    *(undefined8 *)(unaff_x19 + 0xf0) = uVar15;
    thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0xf0),uVar15);
  }
  puVar6 = 
  System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_TypeInfo
  ;
  lVar13 = *(long *)
            System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_TypeInfo
  ;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar13 = *(long *)puVar6;
  }
  *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x24) = DAT_0136baf0;
  FUN_06683240(0);
  bVar11 = FUN_06911d3c(0x1d,0);
  *(byte *)(unaff_x19 + 0x314) = bVar11 & 1;
  return;
}


