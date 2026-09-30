/*
FUNCTION_NAME: Unity.VisualScripting.TypeName$$ToElementTypeName
ENTRY_POINT: 0675f020
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 163
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_VisualScripting_TypeName__ToElementTypeName(undefined8 param_1)

{
  undefined1 (*pauVar1) [12];
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 extraout_x1;
  uint uVar18;
  long unaff_x19;
  long unaff_x20;
  long *plVar19;
  undefined8 uVar20;
  long *unaff_x24;
  long *unaff_x26;
  undefined8 uVar21;
  long lVar22;
  undefined1 auVar23 [12];
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
  
  uVar14 = FUN_0669a3b8(param_1,0);
  *(undefined8 *)(unaff_x19 + 0x328) = uVar14;
  thunk_FUN_03048534(unaff_x19 + 0x328);
                    /* try { // try from 0675f038 to 0685f03f has its CatchHandler @ 0675f128 */
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    uVar14 = FUN_0669a3b8(*(undefined8 *)(*(long *)(unaff_x20 + 0x50) + 0x28),0);
                    /* try { // try from 0675f04c to 0685f057 has its CatchHandler @ 0675f124 */
    *(undefined8 *)(unaff_x19 + 0x330) = uVar14;
    thunk_FUN_03048534(unaff_x19 + 0x330);
    if (*(long *)(unaff_x20 + 0x50) != 0) {
      uVar14 = FUN_0669a3b8(*(undefined8 *)(*(long *)(unaff_x20 + 0x50) + 0x30),0);
      *(undefined8 *)(unaff_x19 + 0x338) = uVar14;
                    /* try { // try from 0675f07c to 0685f07f has its CatchHandler @ 0675f114 */
      thunk_FUN_03048534(unaff_x19 + 0x338);
                    /* try { // try from 0675f080 to 0685f08b has its CatchHandler @ 0675f118 */
      if (*(long *)(unaff_x20 + 0x50) != 0) {
        uVar14 = FUN_0669a3b8(*(undefined8 *)(*(long *)(unaff_x20 + 0x50) + 0x68),0);
                    /* try { // try from 0675f094 to 0685f09b has its CatchHandler @ 0675f11c */
        *(undefined8 *)(unaff_x19 + 0x340) = uVar14;
        thunk_FUN_03048534(unaff_x19 + 0x340);
        if (*(long *)(unaff_x20 + 0x50) != 0) {
                    /* try { // try from 0675f0b0 to 0685f0b3 has its CatchHandler @ 0675f114 */
                    /* try { // try from 0675f0b4 to 0685f0bf has its CatchHandler @ 0675f120 */
          pauVar1 = (undefined1 (*) [12])(unaff_x19 + 0x2f5);
          uVar14 = FUN_0669a3b8(*(undefined8 *)(*(long *)(unaff_x20 + 0x50) + 0x70),0);
          *(undefined8 *)(unaff_x19 + 0x348) = uVar14;
          thunk_FUN_03048534(unaff_x19 + 0x348);
          lVar22 = *(long *)(unaff_x20 + 0x68);
          auVar23 = FUN_06922194(0);
          *pauVar1 = auVar23;
          puVar8 = PTR_DAT_06f9a540;
          if (lVar22 != 0) {
            FUN_0692235c(pauVar1,*(undefined1 *)(lVar22 + 0x10),0);
            FUN_069223e8(pauVar1,*(undefined4 *)(lVar22 + 0x18),0);
            FUN_06922404(pauVar1,*(undefined4 *)(lVar22 + 0x1c),0);
            FUN_06922420(pauVar1,*(undefined4 *)(lVar22 + 0x20),0);
            FUN_0692243c(pauVar1,*(undefined4 *)(lVar22 + 0x24),0);
            *(undefined4 *)(unaff_x19 + 0x310) = *(undefined4 *)(unaff_x20 + 0x84);
            if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            puVar7 = PTR_DAT_06f6d618;
            lVar15 = FUN_067676ac(0);
            if ((lVar15 != 0) && (*(char *)(lVar15 + 0xeb) != '\0')) {
              FUN_06731f3c(&stack0x00000030,0);
              uStack00000000000000b4 = CONCAT44(uStack0000000000000048,uStack0000000000000044);
              in_stack_000000a8 = uStack0000000000000038;
              in_stack_000000a0 = _uStack0000000000000030;
              uStack00000000000000b0 = uStack0000000000000040;
              if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              lVar15 = FUN_067676ac(0);
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                thunk_FUN_02fdcff0(*(long *)puVar7);
              }
              uVar16 = FUN_068fc830(lVar15,0);
              if ((uVar16 & 1) != 0) {
                if (lVar15 == 0) goto LAB_0675fddc;
                in_stack_000000a8 = FUN_06704aa4(lVar15,0);
                in_stack_000000a0 = FUN_06704cdc(lVar15,0);
              }
              uVar14 = thunk_FUN_0301080c(*(undefined8 *)
                                           Unity_Entities_TypeManager_SharedTypeIndex<OrientationYAxisForward>_TypeInfo
                                         );
              FUN_0672f2b8(uVar14,&stack0x000000a0,0);
              *(undefined8 *)(unaff_x19 + 0x308) = uVar14;
              thunk_FUN_03048534(unaff_x19 + 0x308,uVar14);
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
            puVar10 = Unity_Entities_TypeManager_SharedTypeIndex<VRTextInput>_TypeInfo;
            puVar9 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKPlatform>_TypeInfo;
            puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<RotateWithHMD>_TypeInfo;
            puVar8 = Unity_Entities_TypeManager_SharedTypeIndex<RotateTowards>_TypeInfo;
            lVar15 = *unaff_x26;
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
              lVar15 = *unaff_x26;
            }
            puVar11 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKArmMocap>_TypeInfo;
            in_stack_000000c0 = *(undefined8 *)(unaff_x19 + 0x308);
            *(byte *)(unaff_x19 + 0x1a7) = *(byte *)(*(long *)(lVar15 + 0xb8) + 8) ^ 1;
            thunk_FUN_03048534(&stack0x000000c0);
            uVar20 = in_stack_000000c0;
            uStack00000000000000c8 = *(int *)(unaff_x20 + 0x74) == 2;
            *(undefined1 *)(unaff_x19 + 0x1a8) = uStack00000000000000c8;
            uVar14 = CONCAT71(uStack00000000000000c9,uStack00000000000000c8);
            uVar17 = thunk_FUN_0301080c(*(undefined8 *)puVar9);
            FUN_067833cc(uVar17,uVar20,uVar14,0);
            *(undefined8 *)(unaff_x19 + 0x2d8) = uVar17;
            thunk_FUN_03048534(unaff_x19 + 0x2d8,uVar17);
            *(undefined8 *)(unaff_x19 + 0x2e8) = *(undefined8 *)(unaff_x20 + 0x74);
            uVar13 = *(undefined4 *)(unaff_x20 + 0x7c);
            *(undefined1 *)(unaff_x19 + 0x2f4) = 0;
            *(undefined4 *)(unaff_x19 + 0x2f0) = uVar13;
            uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar7);
            FUN_06792500(uVar14,0x32,0);
            *(undefined8 *)(unaff_x19 + 0x1d0) = uVar14;
            thunk_FUN_03048534(unaff_x19 + 0x1d0,uVar14);
            uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar8);
            FUN_0677ee2c(uVar14,0x32,0);
            *(undefined8 *)(unaff_x19 + 0x1d8) = uVar14;
            thunk_FUN_03048534(unaff_x19 + 0x1d8,uVar14);
            uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar10);
            FUN_06742b48(uVar14,0xfa,0);
            *(undefined8 *)(unaff_x19 + 0x250) = uVar14;
            thunk_FUN_03048534(unaff_x19 + 0x250,uVar14);
            uVar20 = *(undefined8 *)(unaff_x19 + 0x328);
            uVar14 = thunk_FUN_0301080c(*(undefined8 *)
                                         Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo
                                       );
            FUN_06789f3c(uVar14,0x3ea,uVar20,0,0,0,0);
            *(undefined8 *)(unaff_x19 + 600) = uVar14;
            thunk_FUN_03048534(unaff_x19 + 600,uVar14);
            if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar14 = FUN_0691d17c(0);
            uVar13 = *(undefined4 *)(unaff_x20 + 0x5c);
            uVar20 = thunk_FUN_0301080c(*(undefined8 *)puVar11);
            FUN_0678cc70(uVar20,0x96,uVar14,uVar13,0);
            *(undefined8 *)(unaff_x19 + 0x1b0) = uVar20;
            thunk_FUN_03048534(unaff_x19 + 0x1b0,uVar20);
            uVar14 = FUN_0691d17c(0);
            uVar13 = *(undefined4 *)(unaff_x20 + 0x5c);
            uVar20 = thunk_FUN_0301080c(*(undefined8 *)
                                         Unity_Entities_TypeManager_SharedTypeIndex<VRIK>_TypeInfo);
            FUN_0678bae0(uVar20,0x96,uVar14,uVar13,0);
            *(undefined8 *)(unaff_x19 + 0x1b8) = uVar20;
            thunk_FUN_03048534(unaff_x19 + 0x1b8,uVar20);
            uVar18 = *(uint *)(unaff_x19 + 0x2e8);
            if ((uVar18 | 2) == 2) {
              uVar20 = *(undefined8 *)(unaff_x19 + 0x328);
              uVar14 = thunk_FUN_0301080c(*(undefined8 *)
                                           Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo
                                         );
              FUN_06789f3c(uVar14,200,uVar20,1,0,0,0);
              *(undefined8 *)(unaff_x19 + 0x1c0) = uVar14;
              thunk_FUN_03048534(unaff_x19 + 0x1c0,uVar14);
              uVar18 = *(uint *)(unaff_x19 + 0x2e8);
            }
            if (uVar18 == 1) {
              in_stack_00000090 = *(undefined8 *)(unaff_x19 + 0x338);
              in_stack_00000098 = 0;
              thunk_FUN_03048534(&stack0x00000090);
              in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0x308);
              thunk_FUN_03048534(&stack0x00000098);
              uVar20 = in_stack_00000098;
              uVar14 = in_stack_00000090;
              uVar5 = *(undefined1 *)(unaff_x19 + 0x1a4);
              uVar17 = thunk_FUN_0301080c(*(undefined8 *)
                                           Unity_Entities_TypeManager_SharedTypeIndex<VREmulator>_TypeInfo
                                         );
              FUN_06778ed8(uVar17,uVar14,uVar20,uVar5,0);
              *(undefined8 *)(unaff_x19 + 0x2e0) = uVar17;
              thunk_FUN_03048534(unaff_x19 + 0x2e0,uVar17);
              if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_0675fddc;
              *(undefined1 *)(*(long *)(unaff_x19 + 0x2e0) + 0x1a) =
                   *(undefined1 *)(unaff_x20 + 0x80);
              if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              uVar14 = FUN_0691d17c(0);
              uVar13 = *(undefined4 *)(unaff_x20 + 0x5c);
              uVar17 = *(undefined8 *)*pauVar1;
              uVar2 = *(undefined4 *)(unaff_x19 + 0x2fd);
              uVar3 = *(undefined4 *)(lVar22 + 0x14);
              uVar21 = *(undefined8 *)(unaff_x19 + 0x2e0);
              uVar20 = thunk_FUN_0301080c(*(undefined8 *)
                                           Unity_Entities_TypeManager_SharedTypeIndex<VRIKRootController>_TypeInfo
                                         );
              FUN_06790784(uVar20,0xd2,uVar14,uVar13,uVar17,uVar2,uVar3,uVar21);
              *(undefined8 *)(unaff_x19 + 0x1e0) = uVar20;
              thunk_FUN_03048534(unaff_x19 + 0x1e0,uVar20);
              uVar14 = *(undefined8 *)*pauVar1;
              uVar13 = *(undefined4 *)(unaff_x19 + 0x2fd);
              if (*(int *)(*(long *)Unity_Entities_TypeManager_SharedTypeIndex<VREmulator>_TypeInfo
                          + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              FUN_0677aa2c(uVar14,uVar13,0x60,0);
              lVar22 = FUN_02fe9340(*(undefined8 *)
                                     Unity_Entities_TypeManager_SharedTypeIndex<VRKeyboard>_TypeInfo
                                    ,3);
              _uStack0000000000000030 = _uStack0000000000000030 & 0xffffffff00000000;
              FUN_06921440(&stack0x00000030,
                           *(undefined8 *)System_Collections_Generic_List<Vector2>_TypeInfo,0);
              if (lVar22 == 0) goto LAB_0675fddc;
              if (*(int *)(lVar22 + 0x18) == 0) {
LAB_0675fde0:
                    /* WARNING: Subroutine does not return */
                FUN_02fe94f0();
              }
              *(undefined4 *)(lVar22 + 0x20) = uStack0000000000000030;
              in_stack_00000078 = 0;
              FUN_06921440(&stack0x00000078,
                           *(undefined8 *)System_Collections_Generic_List<Value>_TypeInfo,0);
              if (*(uint *)(lVar22 + 0x18) < 2) goto LAB_0675fde0;
              *(undefined4 *)(lVar22 + 0x24) = in_stack_00000078;
              in_stack_00000070 = 0;
              FUN_06921440(&stack0x00000070,
                           *(undefined8 *)
                            UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo
                           ,0);
              if (*(uint *)(lVar22 + 0x18) < 3) goto LAB_0675fde0;
              *(undefined4 *)(lVar22 + 0x28) = in_stack_00000070;
              uVar20 = *(undefined8 *)(unaff_x19 + 0x328);
              uVar14 = thunk_FUN_0301080c(*(undefined8 *)
                                           Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo
                                         );
              FUN_06789f3c(uVar14,0xd3,uVar20,1,0,0,0);
              *(undefined8 *)(unaff_x19 + 0x1e8) = uVar14;
              thunk_FUN_03048534(unaff_x19 + 0x1e8,uVar14);
              uVar20 = *(undefined8 *)(unaff_x19 + 0x2e0);
              uVar14 = thunk_FUN_0301080c(*(undefined8 *)
                                           Unity_Entities_TypeManager_SharedTypeIndex<VRIFGrabpointUpdater>_TypeInfo
                                         );
              FUN_0678b518(uVar14,0xe6,uVar20,0);
              *(undefined8 *)(unaff_x19 + 0x1f0) = uVar14;
              thunk_FUN_03048534(unaff_x19 + 0x1f0,uVar14);
              uVar14 = FUN_0691d17c(0);
              uVar13 = *(undefined4 *)(unaff_x20 + 0x5c);
              uVar20 = thunk_FUN_0301080c(*(undefined8 *)
                                           Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                                         );
              FUN_0678db00(uVar20,*(undefined8 *)
                                   Unity_Entities_TypeManager_SharedTypeIndex<VRUISystem>_TypeInfo,
                           lVar22,1,0xfa,uVar14,uVar13);
              *(undefined8 *)(unaff_x19 + 0x1f8) = uVar20;
              thunk_FUN_03048534(unaff_x19 + 0x1f8,uVar20);
            }
            puVar8 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationController>_TypeInfo;
            if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar14 = FUN_0691d17c(0);
            uVar13 = *(undefined4 *)(unaff_x20 + 0x5c);
            uVar17 = *(undefined8 *)*pauVar1;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x2fd);
            uVar20 = thunk_FUN_0301080c(*(undefined8 *)
                                         Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                                       );
            FUN_0678d7f4(uVar20,10,1,0xfa,uVar14,uVar13,uVar17,uVar2);
            *(undefined8 *)(unaff_x19 + 0x200) = uVar20;
            thunk_FUN_03048534(unaff_x19 + 0x200,uVar20);
            uVar14 = FUN_0691d17c(0);
            uVar13 = *(undefined4 *)(unaff_x20 + 0x5c);
            uVar17 = *(undefined8 *)*pauVar1;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x2fd);
            uVar20 = thunk_FUN_0301080c(*(undefined8 *)puVar8);
            FUN_0678d708(uVar20,10,1,0xfa,uVar14,uVar13,uVar17,uVar2);
            *(undefined8 *)(unaff_x19 + 0x208) = uVar20;
            thunk_FUN_03048534(unaff_x19 + 0x208,uVar20);
            iVar4 = *(int *)(unaff_x19 + 0x2f0);
            uVar14 = *(undefined8 *)(unaff_x19 + 0x328);
            uVar18 = 500;
            if (iVar4 != 1) {
              uVar18 = 400;
            }
            if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKLODController>_TypeInfo;
            puVar8 = Unity_Entities_TypeManager_SharedTypeIndex<QuickBase>_TypeInfo;
            uVar16 = FUN_0674de10(0);
            if ((uVar16 & 1) == 0) {
              bVar12 = 0;
            }
            else {
              bVar12 = FUN_069009c0(0);
              bVar12 = bVar12 & 1;
            }
            uVar20 = thunk_FUN_0301080c(*(undefined8 *)
                                         Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo
                                       );
            FUN_06789f3c(uVar20,uVar18,uVar14,1,0,bVar12 & iVar4 == 1,0);
            *(undefined8 *)(unaff_x19 + 0x218) = uVar20;
            thunk_FUN_03048534(unaff_x19 + 0x218,uVar20);
            uVar20 = *(undefined8 *)(unaff_x19 + 0x340);
            uVar17 = *(undefined8 *)(unaff_x19 + 0x348);
            uVar13 = *(undefined4 *)(unaff_x20 + 0x5c);
            uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar8);
            FUN_0673914c(uVar14,uVar18 | 1,uVar20,uVar17,uVar13,0);
            *(undefined8 *)(unaff_x19 + 0x1c8) = uVar14;
            thunk_FUN_03048534(unaff_x19 + 0x1c8,uVar14);
            uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar7);
            FUN_0673757c(uVar14,0x15e,0);
            *(undefined8 *)(unaff_x19 + 0x210) = uVar14;
            thunk_FUN_03048534(unaff_x19 + 0x210,uVar14);
            uVar20 = *(undefined8 *)(unaff_x19 + 0x330);
            uVar17 = *(undefined8 *)(unaff_x19 + 0x318);
            uVar14 = thunk_FUN_0301080c(*(undefined8 *)
                                         Unity_Entities_TypeManager_SharedTypeIndex<VRController>_TypeInfo
                                       );
            FUN_06788a90(uVar14,400,uVar20,uVar17,0);
            *(undefined8 *)(unaff_x19 + 0x220) = uVar14;
            thunk_FUN_03048534(unaff_x19 + 0x220,uVar14);
            uVar5 = *(undefined1 *)(unaff_x20 + 0x70);
            uVar14 = thunk_FUN_0301080c(*(undefined8 *)
                                         Unity_Entities_TypeManager_SharedTypeIndex<RotateShoulderToTarget>_TypeInfo
                                       );
            FUN_06742814(uVar14,0x1c2,uVar5,0);
            *(undefined8 *)(unaff_x19 + 0x228) = uVar14;
            thunk_FUN_03048534(unaff_x19 + 0x228,uVar14);
            if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar14 = FUN_0691d184(0);
            uVar13 = *(undefined4 *)(unaff_x20 + 0x60);
            uVar17 = *(undefined8 *)*pauVar1;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x2fd);
            uVar20 = thunk_FUN_0301080c(*(undefined8 *)
                                         Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                                       );
            FUN_0678d7f4(uVar20,0xb,0,0x1c2,uVar14,uVar13,uVar17,uVar2);
            *(undefined8 *)(unaff_x19 + 0x230) = uVar20;
            thunk_FUN_03048534(unaff_x19 + 0x230,uVar20);
            uVar14 = thunk_FUN_0301080c(*(undefined8 *)
                                         Unity_Entities_TypeManager_SharedTypeIndex<VRInitializer>_TypeInfo
                                       );
            FUN_06738d08(uVar14,0x226,0);
            *(undefined8 *)(unaff_x19 + 0x238) = uVar14;
            thunk_FUN_03048534(unaff_x19 + 0x238,uVar14);
            puVar8 = OVRTask<OVRResult<Int32Enum>>_TypeInfo;
            uVar14 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRResult<Int32Enum>>_TypeInfo);
            FUN_06736604(uVar14,0x226,1,0);
            *(undefined8 *)(unaff_x19 + 0x260) = uVar14;
            thunk_FUN_03048534(unaff_x19 + 0x260,uVar14);
            uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar8);
            FUN_06736604(uVar14,0x3ea,0,0);
            *(undefined8 *)(unaff_x19 + 0x268) = uVar14;
            thunk_FUN_03048534(unaff_x19 + 0x268,uVar14);
            FUN_067430c0(0);
            in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0x318);
            in_stack_00000088 = extraout_x1;
            thunk_FUN_03048534(&stack0x00000080);
            puVar8 = PTR_DAT_06f9a540;
            in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,0x4a);
            if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            lVar22 = FUN_067676ac(0);
            if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
              thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
            }
            uVar16 = FUN_068fc830(lVar22,0);
            if ((uVar16 & 1) != 0) {
              if (lVar22 == 0) goto LAB_0675fddc;
              cVar6 = *(char *)(lVar22 + 0x55);
              uVar13 = *(undefined4 *)(lVar22 + 0x58);
              if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              uVar13 = FUN_0676dfe8(cVar6 != '\0',uVar13,0,0);
              in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,uVar13);
            }
            puVar11 = Unity_Entities_TypeManager_SharedTypeIndex<PostTransformMatrix>_TypeInfo;
            puVar10 = OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo;
            puVar9 = OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo;
            puVar7 = OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo;
            puVar8 = OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_TypeInfo;
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
            uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar11);
            FUN_067361c8(uVar14,1000,0);
            *(undefined8 *)(unaff_x19 + 0x248) = uVar14;
            thunk_FUN_03048534(unaff_x19 + 0x248,uVar14);
            uVar20 = *(undefined8 *)(unaff_x19 + 0x318);
            uVar17 = *(undefined8 *)(unaff_x19 + 800);
            uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar8);
            FUN_0678ef90(uVar14,0x3e9,uVar20,uVar17,0);
            *(undefined8 *)(unaff_x19 + 0x240) = uVar14;
            thunk_FUN_03048534(unaff_x19 + 0x240,uVar14);
            uVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar7);
            FUN_067945cc(uVar14,*(undefined8 *)puVar10,0);
            *(undefined8 *)(unaff_x19 + 0x270) = uVar14;
            thunk_FUN_03048534(unaff_x19 + 0x270,uVar14);
            lVar22 = thunk_FUN_0301080c(*(undefined8 *)puVar9);
            FUN_0672e074(lVar22,0);
            puVar8 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
            if (*(int *)(*(long *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            plVar19 = (long *)(unaff_x19 + 0xe8);
            *plVar19 = lVar22;
            thunk_FUN_03048534(plVar19,lVar22);
            if (*(int *)(unaff_x19 + 0x2e8) == 1) {
              if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              if (*plVar19 == 0) goto LAB_0675fddc;
              *(undefined1 *)(*plVar19 + 0x11) = 0;
              uVar14 = FUN_02fe9340(*(undefined8 *)
                                     Unity_Entities_TypeManager_SharedTypeIndex<LocalToWorld>_TypeInfo
                                    ,3);
              FUN_05a1740c(uVar14,*(undefined8 *)
                                   Unity_Entities_TypeManager_SharedTypeIndex<VRKeyboardKey>_TypeInfo
                           ,0);
              *(undefined8 *)(unaff_x19 + 0xf0) = uVar14;
              thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0xf0),uVar14);
            }
            puVar8 = 
            System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_TypeInfo
            ;
            lVar22 = *(long *)
                      System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_TypeInfo
            ;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
              lVar22 = *(long *)puVar8;
            }
            *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x24) = DAT_0136baf0;
            FUN_06683240(0);
            bVar12 = FUN_06911d3c(0x1d,0);
            *(byte *)(unaff_x19 + 0x314) = bVar12 & 1;
            return;
          }
        }
      }
    }
  }
LAB_0675fddc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


