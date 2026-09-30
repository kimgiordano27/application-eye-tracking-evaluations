/*
FUNCTION_NAME: Unity.VisualScripting.TypeName.<>c$$.cctor
ENTRY_POINT: 0675f5f4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 159
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_VisualScripting_TypeName_<>c___cctor(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 extraout_x1;
  int in_w8;
  uint uVar15;
  long unaff_x19;
  long unaff_x20;
  long *plVar16;
  undefined8 *unaff_x21;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uStack0000000000000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  if (in_w8 == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0677aa2c();
  lVar12 = FUN_02fe9340(*(undefined8 *)
                         Unity_Entities_TypeManager_SharedTypeIndex<VRKeyboard>_TypeInfo,3);
  _uStack0000000000000030 = _uStack0000000000000030 & 0xffffffff00000000;
  FUN_06921440(&stack0x00000030,*(undefined8 *)System_Collections_Generic_List<Vector2>_TypeInfo,0);
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x18) != 0) {
      *(undefined4 *)(lVar12 + 0x20) = uStack0000000000000030;
      in_stack_00000078 = 0;
      FUN_06921440(&stack0x00000078,*(undefined8 *)System_Collections_Generic_List<Value>_TypeInfo,0
                  );
      if (1 < *(uint *)(lVar12 + 0x18)) {
        *(undefined4 *)(lVar12 + 0x24) = in_stack_00000078;
        in_stack_00000070 = 0;
        FUN_06921440(&stack0x00000070,
                     *(undefined8 *)
                      UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo
                     ,0);
        if (2 < *(uint *)(lVar12 + 0x18)) {
          *(undefined4 *)(lVar12 + 0x28) = in_stack_00000070;
          uVar18 = *(undefined8 *)(unaff_x19 + 0x328);
          uVar13 = thunk_FUN_0301080c(*(undefined8 *)
                                       Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo
                                     );
          FUN_06789f3c(uVar13,0xd3,uVar18,1,0,0,0);
          *(undefined8 *)(unaff_x19 + 0x1e8) = uVar13;
          thunk_FUN_03048534(unaff_x19 + 0x1e8,uVar13);
          uVar18 = *(undefined8 *)(unaff_x19 + 0x2e0);
          uVar13 = thunk_FUN_0301080c(*(undefined8 *)
                                       Unity_Entities_TypeManager_SharedTypeIndex<VRIFGrabpointUpdater>_TypeInfo
                                     );
          FUN_0678b518(uVar13,0xe6,uVar18,0);
          *(undefined8 *)(unaff_x19 + 0x1f0) = uVar13;
          thunk_FUN_03048534(unaff_x19 + 0x1f0,uVar13);
          uVar13 = FUN_0691d17c(0);
          uVar11 = *(undefined4 *)(unaff_x20 + 0x5c);
          uVar18 = thunk_FUN_0301080c(*(undefined8 *)
                                       Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                                     );
          FUN_0678db00(uVar18,*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<VRUISystem>_TypeInfo,
                       lVar12,1,0xfa,uVar13,uVar11);
          *(undefined8 *)(unaff_x19 + 0x1f8) = uVar18;
          thunk_FUN_03048534(unaff_x19 + 0x1f8,uVar18);
          puVar5 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationController>_TypeInfo;
          if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar13 = FUN_0691d17c(0);
          uVar11 = *(undefined4 *)(unaff_x20 + 0x5c);
          uVar17 = *unaff_x21;
          uVar1 = *(undefined4 *)(unaff_x21 + 1);
          uVar18 = thunk_FUN_0301080c(*(undefined8 *)
                                       Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                                     );
          FUN_0678d7f4(uVar18,10,1,0xfa,uVar13,uVar11,uVar17,uVar1);
          *(undefined8 *)(unaff_x19 + 0x200) = uVar18;
          thunk_FUN_03048534(unaff_x19 + 0x200,uVar18);
          uVar13 = FUN_0691d17c(0);
          uVar11 = *(undefined4 *)(unaff_x20 + 0x5c);
          uVar17 = *unaff_x21;
          uVar1 = *(undefined4 *)(unaff_x21 + 1);
          uVar18 = thunk_FUN_0301080c(*(undefined8 *)puVar5);
          FUN_0678d708(uVar18,10,1,0xfa,uVar13,uVar11,uVar17,uVar1);
          *(undefined8 *)(unaff_x19 + 0x208) = uVar18;
          thunk_FUN_03048534(unaff_x19 + 0x208,uVar18);
          iVar2 = *(int *)(unaff_x19 + 0x2f0);
          uVar13 = *(undefined8 *)(unaff_x19 + 0x328);
          uVar15 = 500;
          if (iVar2 != 1) {
            uVar15 = 400;
          }
          if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          puVar6 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKLODController>_TypeInfo;
          puVar5 = Unity_Entities_TypeManager_SharedTypeIndex<QuickBase>_TypeInfo;
          uVar14 = FUN_0674de10(0);
          if ((uVar14 & 1) == 0) {
            bVar10 = 0;
          }
          else {
            bVar10 = FUN_069009c0(0);
            bVar10 = bVar10 & 1;
          }
          uVar18 = thunk_FUN_0301080c(*(undefined8 *)
                                       Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo
                                     );
          FUN_06789f3c(uVar18,uVar15,uVar13,1,0,bVar10 & iVar2 == 1,0);
          *(undefined8 *)(unaff_x19 + 0x218) = uVar18;
          thunk_FUN_03048534(unaff_x19 + 0x218,uVar18);
          uVar18 = *(undefined8 *)(unaff_x19 + 0x340);
          uVar17 = *(undefined8 *)(unaff_x19 + 0x348);
          uVar11 = *(undefined4 *)(unaff_x20 + 0x5c);
          uVar13 = thunk_FUN_0301080c(*(undefined8 *)puVar5);
          FUN_0673914c(uVar13,uVar15 | 1,uVar18,uVar17,uVar11,0);
          *(undefined8 *)(unaff_x19 + 0x1c8) = uVar13;
          thunk_FUN_03048534(unaff_x19 + 0x1c8,uVar13);
          uVar13 = thunk_FUN_0301080c(*(undefined8 *)puVar6);
          FUN_0673757c(uVar13,0x15e,0);
          *(undefined8 *)(unaff_x19 + 0x210) = uVar13;
          thunk_FUN_03048534(unaff_x19 + 0x210,uVar13);
          uVar18 = *(undefined8 *)(unaff_x19 + 0x330);
          uVar17 = *(undefined8 *)(unaff_x19 + 0x318);
          uVar13 = thunk_FUN_0301080c(*(undefined8 *)
                                       Unity_Entities_TypeManager_SharedTypeIndex<VRController>_TypeInfo
                                     );
          FUN_06788a90(uVar13,400,uVar18,uVar17,0);
          *(undefined8 *)(unaff_x19 + 0x220) = uVar13;
          thunk_FUN_03048534(unaff_x19 + 0x220,uVar13);
          uVar3 = *(undefined1 *)(unaff_x20 + 0x70);
          uVar13 = thunk_FUN_0301080c(*(undefined8 *)
                                       Unity_Entities_TypeManager_SharedTypeIndex<RotateShoulderToTarget>_TypeInfo
                                     );
          FUN_06742814(uVar13,0x1c2,uVar3,0);
          *(undefined8 *)(unaff_x19 + 0x228) = uVar13;
          thunk_FUN_03048534(unaff_x19 + 0x228,uVar13);
          if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar13 = FUN_0691d184(0);
          uVar11 = *(undefined4 *)(unaff_x20 + 0x60);
          uVar17 = *unaff_x21;
          uVar1 = *(undefined4 *)(unaff_x21 + 1);
          uVar18 = thunk_FUN_0301080c(*(undefined8 *)
                                       Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                                     );
          FUN_0678d7f4(uVar18,0xb,0,0x1c2,uVar13,uVar11,uVar17,uVar1);
          *(undefined8 *)(unaff_x19 + 0x230) = uVar18;
          thunk_FUN_03048534(unaff_x19 + 0x230,uVar18);
          uVar13 = thunk_FUN_0301080c(*(undefined8 *)
                                       Unity_Entities_TypeManager_SharedTypeIndex<VRInitializer>_TypeInfo
                                     );
          FUN_06738d08(uVar13,0x226,0);
          *(undefined8 *)(unaff_x19 + 0x238) = uVar13;
          thunk_FUN_03048534(unaff_x19 + 0x238,uVar13);
          puVar5 = OVRTask<OVRResult<Int32Enum>>_TypeInfo;
          uVar13 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRResult<Int32Enum>>_TypeInfo);
          FUN_06736604(uVar13,0x226,1,0);
          *(undefined8 *)(unaff_x19 + 0x260) = uVar13;
          thunk_FUN_03048534(unaff_x19 + 0x260,uVar13);
          uVar13 = thunk_FUN_0301080c(*(undefined8 *)puVar5);
          FUN_06736604(uVar13,0x3ea,0,0);
          *(undefined8 *)(unaff_x19 + 0x268) = uVar13;
          thunk_FUN_03048534(unaff_x19 + 0x268,uVar13);
          FUN_067430c0(0);
          in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0x318);
          in_stack_00000088 = extraout_x1;
          thunk_FUN_03048534(&stack0x00000080);
          puVar5 = PTR_DAT_06f9a540;
          in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,0x4a);
          if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          lVar12 = FUN_067676ac(0);
          if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
          }
          uVar14 = FUN_068fc830(lVar12,0);
          if ((uVar14 & 1) != 0) {
            if (lVar12 == 0) goto LAB_0675fddc;
            cVar4 = *(char *)(lVar12 + 0x55);
            uVar11 = *(undefined4 *)(lVar12 + 0x58);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar11 = FUN_0676dfe8(cVar4 != '\0',uVar11,0,0);
            in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,uVar11);
          }
          puVar9 = Unity_Entities_TypeManager_SharedTypeIndex<PostTransformMatrix>_TypeInfo;
          puVar8 = OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo;
          puVar7 = OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo;
          puVar6 = OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo;
          puVar5 = OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_TypeInfo;
          in_stack_00000058 = 0;
          in_stack_00000050 = 0;
          in_stack_00000068 = 0;
          in_stack_00000060 = 0;
          in_stack_00000038 = 0;
          _uStack0000000000000030 = 0;
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          FUN_06743174(&stack0x00000030,*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,0);
          *(undefined8 *)(unaff_x19 + 0x378) = in_stack_00000058;
          *(undefined8 *)(unaff_x19 + 0x370) = in_stack_00000050;
          *(undefined8 *)(unaff_x19 + 0x388) = in_stack_00000068;
          *(undefined8 *)(unaff_x19 + 0x380) = in_stack_00000060;
          *(undefined8 *)(unaff_x19 + 0x358) = in_stack_00000038;
          *(ulong *)(unaff_x19 + 0x350) = _uStack0000000000000030;
          *(undefined8 *)(unaff_x19 + 0x368) = in_stack_00000048;
          *(undefined8 *)(unaff_x19 + 0x360) = in_stack_00000040;
          thunk_FUN_03048534(unaff_x19 + 0x350,0);
          uVar13 = thunk_FUN_0301080c(*(undefined8 *)puVar9);
          FUN_067361c8(uVar13,1000,0);
          *(undefined8 *)(unaff_x19 + 0x248) = uVar13;
          thunk_FUN_03048534(unaff_x19 + 0x248,uVar13);
          uVar18 = *(undefined8 *)(unaff_x19 + 0x318);
          uVar17 = *(undefined8 *)(unaff_x19 + 800);
          uVar13 = thunk_FUN_0301080c(*(undefined8 *)puVar5);
          FUN_0678ef90(uVar13,0x3e9,uVar18,uVar17,0);
          *(undefined8 *)(unaff_x19 + 0x240) = uVar13;
          thunk_FUN_03048534(unaff_x19 + 0x240,uVar13);
          uVar13 = thunk_FUN_0301080c(*(undefined8 *)puVar6);
          FUN_067945cc(uVar13,*(undefined8 *)puVar8,0);
          *(undefined8 *)(unaff_x19 + 0x270) = uVar13;
          thunk_FUN_03048534(unaff_x19 + 0x270,uVar13);
          lVar12 = thunk_FUN_0301080c(*(undefined8 *)puVar7);
          FUN_0672e074(lVar12,0);
          puVar5 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
          if (*(int *)(*(long *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          plVar16 = (long *)(unaff_x19 + 0xe8);
          *plVar16 = lVar12;
          thunk_FUN_03048534(plVar16,lVar12);
          if (*(int *)(unaff_x19 + 0x2e8) == 1) {
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            if (*plVar16 == 0) goto LAB_0675fddc;
            *(undefined1 *)(*plVar16 + 0x11) = 0;
            uVar13 = FUN_02fe9340(*(undefined8 *)
                                   Unity_Entities_TypeManager_SharedTypeIndex<LocalToWorld>_TypeInfo
                                  ,3);
            FUN_05a1740c(uVar13,*(undefined8 *)
                                 Unity_Entities_TypeManager_SharedTypeIndex<VRKeyboardKey>_TypeInfo,
                         0);
            *(undefined8 *)(unaff_x19 + 0xf0) = uVar13;
            thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0xf0),uVar13);
          }
          puVar5 = 
          System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_TypeInfo
          ;
          lVar12 = *(long *)
                    System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_TypeInfo
          ;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
            lVar12 = *(long *)puVar5;
          }
          *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x24) = DAT_0136baf0;
          FUN_06683240(0);
          bVar10 = FUN_06911d3c(0x1d,0);
          *(byte *)(unaff_x19 + 0x314) = bVar10 & 1;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
LAB_0675fddc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


