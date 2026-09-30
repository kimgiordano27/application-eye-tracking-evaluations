/*
FUNCTION_NAME: FUN_0675ec78
ENTRY_POINT: 0675ec78
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 196
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0675ec78(long param_1,long param_2)

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
  bool bVar12;
  byte bVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined4 extraout_var;
  undefined8 extraout_x1;
  long lVar19;
  uint uVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [12];
  undefined8 in_stack_fffffffffffffed0;
  undefined4 uVar25;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0 [2];
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar8 = Unity_Entities_TypeManager_SharedTypeIndex<VRCaptureCamera>_TypeInfo;
  puVar9 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
  uVar14 = (undefined4)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  if ((DAT_073a14e1 & 1) == 0) {
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<RotateTowards>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<PostTransformMatrix>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VRController>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f992e0);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VREmulator>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VRIFGrabpointUpdater>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VRIK>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VRIKArmMocap>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationController>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRResult<Int32Enum>>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VRIKLODController>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VRIKPlatform>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VRIKPlatformController>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VRIKRootController>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<LocalToWorld>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VRInitializer>_TypeInfo);
    FUN_02fe925c(
                System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_TypeInfo
                );
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<OrientationYAxisForward>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<RotateWithHMD>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<QuickBase>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d618);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<Tooltip>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VRCaptureCamera>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f9b130);
    FUN_02fe925c(OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<TypeName>_TypeInfo);
    FUN_02fe925c(OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VRKeyboard>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<RotateShoulderToTarget>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VRKeyboardKey>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f9a540);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VRTextInput>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VRUIMessage>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_TypeInfo);
    FUN_02fe925c(UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<Value>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<Vector2>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VRUISystem>_TypeInfo);
    DAT_073a14e1 = 1;
  }
  puVar10 = Unity_Entities_TypeManager_SharedTypeIndex<Tooltip>_TypeInfo;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_7c = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar8);
  FUN_06765520(uVar15,0);
  *(undefined8 *)(param_1 + 0x398) = uVar15;
  thunk_FUN_03048534(param_1 + 0x398,uVar15);
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<VRUIMessage>_TypeInfo;
  puVar8 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKPlatformController>_TypeInfo;
  FUN_0671f8a0(param_1,param_2,0);
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_067712e4(0);
  uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar8);
  FUN_05800238(uVar15,0,*(undefined8 *)puVar7,0);
  if (((param_2 != 0) && (*(long *)(param_2 + 0x48) != 0)) &&
     (lVar19 = *(long *)(*(long *)(param_2 + 0x48) + 0x18), lVar19 != 0)) {
    uVar22 = *(undefined8 *)(lVar19 + 0x10);
    uVar18 = *(undefined8 *)(lVar19 + 0x18);
    if (*(int *)(*(long *)
                  System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0663f60c(uVar15,uVar22,uVar18,0);
    if (*(long *)(param_2 + 0x50) != 0) {
      uVar15 = *(undefined8 *)(*(long *)(param_2 + 0x50) + 0x50);
      if (*(int *)(*(long *)PTR_DAT_06f992e0 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar15 = FUN_0669a3b8(uVar15,0);
      *(undefined8 *)(param_1 + 0x318) = uVar15;
      thunk_FUN_03048534(param_1 + 0x318);
      if (*(long *)(param_2 + 0x50) != 0) {
        uVar15 = FUN_0669a3b8(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x60),0);
        *(undefined8 *)(param_1 + 800) = uVar15;
        thunk_FUN_03048534(param_1 + 800);
        if (*(long *)(param_2 + 0x50) != 0) {
          uVar15 = FUN_0669a3b8(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x18),0);
          *(undefined8 *)(param_1 + 0x328) = uVar15;
          thunk_FUN_03048534(param_1 + 0x328);
          if (*(long *)(param_2 + 0x50) != 0) {
            uVar15 = FUN_0669a3b8(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x28),0);
            *(undefined8 *)(param_1 + 0x330) = uVar15;
            thunk_FUN_03048534(param_1 + 0x330);
            if (*(long *)(param_2 + 0x50) != 0) {
              uVar15 = FUN_0669a3b8(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x30),0);
              *(undefined8 *)(param_1 + 0x338) = uVar15;
              thunk_FUN_03048534(param_1 + 0x338);
              if (*(long *)(param_2 + 0x50) != 0) {
                uVar15 = FUN_0669a3b8(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x68),0);
                *(undefined8 *)(param_1 + 0x340) = uVar15;
                thunk_FUN_03048534(param_1 + 0x340);
                if (*(long *)(param_2 + 0x50) != 0) {
                  pauVar1 = (undefined1 (*) [12])(param_1 + 0x2f5);
                  uVar15 = FUN_0669a3b8(*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x70),0);
                  *(undefined8 *)(param_1 + 0x348) = uVar15;
                  thunk_FUN_03048534(param_1 + 0x348);
                  lVar19 = *(long *)(param_2 + 0x68);
                  auVar24 = FUN_06922194(0);
                  *pauVar1 = auVar24;
                  puVar8 = PTR_DAT_06f9a540;
                  if (lVar19 != 0) {
                    FUN_0692235c(pauVar1,*(undefined1 *)(lVar19 + 0x10),0);
                    FUN_069223e8(pauVar1,*(undefined4 *)(lVar19 + 0x18),0);
                    FUN_06922404(pauVar1,*(undefined4 *)(lVar19 + 0x1c),0);
                    FUN_06922420(pauVar1,*(undefined4 *)(lVar19 + 0x20),0);
                    FUN_0692243c(pauVar1,*(undefined4 *)(lVar19 + 0x24),0);
                    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x84);
                    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    puVar7 = PTR_DAT_06f6d618;
                    lVar16 = FUN_067676ac(0);
                    if ((lVar16 != 0) && (*(char *)(lVar16 + 0xeb) != '\0')) {
                      FUN_06731f3c(&local_100,0);
                      uStack_88 = uStack_f8;
                      local_90 = local_100;
                      uStack_7c = uStack_ec;
                      local_78 = uStack_e8;
                      uStack_84 = uStack_f4;
                      local_80 = uStack_f0;
                      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                        thunk_FUN_02fdcff0();
                      }
                      lVar16 = FUN_067676ac(0);
                      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                        thunk_FUN_02fdcff0(*(long *)puVar7);
                      }
                      uVar17 = FUN_068fc830(lVar16,0);
                      if ((uVar17 & 1) != 0) {
                        if (lVar16 == 0) goto LAB_0675fddc;
                        uStack_88 = FUN_06704aa4(lVar16,0);
                        local_90 = FUN_06704cdc(lVar16,0);
                      }
                      uVar15 = thunk_FUN_0301080c(*(undefined8 *)
                                                                                                      
                                                  Unity_Entities_TypeManager_SharedTypeIndex<OrientationYAxisForward>_TypeInfo
                                                 );
                      FUN_0672f2b8(uVar15,&local_90,0);
                      *(undefined8 *)(param_1 + 0x308) = uVar15;
                      thunk_FUN_03048534(param_1 + 0x308,uVar15);
                    }
                    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    *(undefined2 *)(param_1 + 0x1a6) = 0x101;
                    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    if (DAT_073a14b1 == '\0') {
                      FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<Tooltip>_TypeInfo);
                      DAT_073a14b1 = '\x01';
                    }
                    puVar11 = Unity_Entities_TypeManager_SharedTypeIndex<VRTextInput>_TypeInfo;
                    puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKPlatform>_TypeInfo;
                    puVar8 = Unity_Entities_TypeManager_SharedTypeIndex<RotateWithHMD>_TypeInfo;
                    puVar9 = Unity_Entities_TypeManager_SharedTypeIndex<RotateTowards>_TypeInfo;
                    lVar16 = *(long *)puVar10;
                    if (*(int *)(lVar16 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                      lVar16 = *(long *)puVar10;
                    }
                    puVar10 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKArmMocap>_TypeInfo;
                    local_70 = *(undefined8 *)(param_1 + 0x308);
                    *(byte *)(param_1 + 0x1a7) = *(byte *)(*(long *)(lVar16 + 0xb8) + 8) ^ 1;
                    thunk_FUN_03048534(&local_70);
                    uVar15 = local_70;
                    bVar12 = *(int *)(param_2 + 0x74) == 2;
                    local_68 = CONCAT71(local_68._1_7_,bVar12);
                    uVar22 = local_68;
                    *(bool *)(param_1 + 0x1a8) = bVar12;
                    uVar18 = thunk_FUN_0301080c(*(undefined8 *)puVar7);
                    FUN_067833cc(uVar18,uVar15,uVar22,0);
                    *(undefined8 *)(param_1 + 0x2d8) = uVar18;
                    thunk_FUN_03048534(param_1 + 0x2d8,uVar18);
                    *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x74);
                    uVar2 = *(undefined4 *)(param_2 + 0x7c);
                    *(undefined1 *)(param_1 + 0x2f4) = 0;
                    *(undefined4 *)(param_1 + 0x2f0) = uVar2;
                    uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar8);
                    FUN_06792500(uVar15,0x32,0);
                    *(undefined8 *)(param_1 + 0x1d0) = uVar15;
                    thunk_FUN_03048534(param_1 + 0x1d0,uVar15);
                    uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar9);
                    FUN_0677ee2c(uVar15,0x32,0);
                    *(undefined8 *)(param_1 + 0x1d8) = uVar15;
                    thunk_FUN_03048534(param_1 + 0x1d8,uVar15);
                    uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar11);
                    FUN_06742b48(uVar15,0xfa,0);
                    *(undefined8 *)(param_1 + 0x250) = uVar15;
                    thunk_FUN_03048534(param_1 + 0x250,uVar15);
                    uVar22 = *(undefined8 *)(param_1 + 0x328);
                    uVar15 = thunk_FUN_0301080c(*(undefined8 *)
                                                 Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo
                                               );
                    FUN_06789f3c(uVar15,0x3ea,uVar22,0,0,0,0);
                    *(undefined8 *)(param_1 + 600) = uVar15;
                    thunk_FUN_03048534(param_1 + 600,uVar15);
                    if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    uVar15 = FUN_0691d17c(0);
                    uVar2 = *(undefined4 *)(param_2 + 0x5c);
                    uVar22 = thunk_FUN_0301080c(*(undefined8 *)puVar10);
                    FUN_0678cc70(uVar22,0x96,uVar15,uVar2,0);
                    *(undefined8 *)(param_1 + 0x1b0) = uVar22;
                    thunk_FUN_03048534(param_1 + 0x1b0,uVar22);
                    uVar15 = FUN_0691d17c(0);
                    uVar2 = *(undefined4 *)(param_2 + 0x5c);
                    uVar22 = thunk_FUN_0301080c(*(undefined8 *)
                                                 Unity_Entities_TypeManager_SharedTypeIndex<VRIK>_TypeInfo
                                               );
                    FUN_0678bae0(uVar22,0x96,uVar15,uVar2,0);
                    *(undefined8 *)(param_1 + 0x1b8) = uVar22;
                    thunk_FUN_03048534(param_1 + 0x1b8,uVar22);
                    uVar20 = *(uint *)(param_1 + 0x2e8);
                    if ((uVar20 | 2) == 2) {
                      uVar22 = *(undefined8 *)(param_1 + 0x328);
                      uVar15 = thunk_FUN_0301080c(*(undefined8 *)
                                                                                                      
                                                  Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo
                                                 );
                      FUN_06789f3c(uVar15,200,uVar22,1,0,0,0);
                      *(undefined8 *)(param_1 + 0x1c0) = uVar15;
                      thunk_FUN_03048534(param_1 + 0x1c0,uVar15);
                      uVar20 = *(uint *)(param_1 + 0x2e8);
                    }
                    if (uVar20 == 1) {
                      local_a0 = *(undefined8 *)(param_1 + 0x338);
                      local_98 = 0;
                      thunk_FUN_03048534(&local_a0);
                      local_98 = *(undefined8 *)(param_1 + 0x308);
                      thunk_FUN_03048534(&local_98);
                      uVar22 = local_98;
                      uVar15 = local_a0;
                      uVar5 = *(undefined1 *)(param_1 + 0x1a4);
                      uVar18 = thunk_FUN_0301080c(*(undefined8 *)
                                                                                                      
                                                  Unity_Entities_TypeManager_SharedTypeIndex<VREmulator>_TypeInfo
                                                 );
                      FUN_06778ed8(uVar18,uVar15,uVar22,uVar5,0);
                      *(undefined8 *)(param_1 + 0x2e0) = uVar18;
                      thunk_FUN_03048534(param_1 + 0x2e0,uVar18);
                      if (*(long *)(param_1 + 0x2e0) == 0) goto LAB_0675fddc;
                      *(undefined1 *)(*(long *)(param_1 + 0x2e0) + 0x1a) =
                           *(undefined1 *)(param_2 + 0x80);
                      if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
                        thunk_FUN_02fdcff0();
                      }
                      uVar15 = FUN_0691d17c(0);
                      uVar14 = *(undefined4 *)(param_2 + 0x5c);
                      uVar18 = *(undefined8 *)*pauVar1;
                      uVar2 = *(undefined4 *)(param_1 + 0x2fd);
                      uVar3 = *(undefined4 *)(lVar19 + 0x14);
                      uVar23 = *(undefined8 *)(param_1 + 0x2e0);
                      uVar22 = thunk_FUN_0301080c(*(undefined8 *)
                                                                                                      
                                                  Unity_Entities_TypeManager_SharedTypeIndex<VRIKRootController>_TypeInfo
                                                 );
                      FUN_06790784(uVar22,0xd2,uVar15,uVar14,uVar18,uVar2,uVar3,uVar23,0);
                      *(undefined8 *)(param_1 + 0x1e0) = uVar22;
                      thunk_FUN_03048534(param_1 + 0x1e0,uVar22);
                      uVar15 = *(undefined8 *)*pauVar1;
                      uVar14 = *(undefined4 *)(param_1 + 0x2fd);
                      if (*(int *)(*(long *)
                                    Unity_Entities_TypeManager_SharedTypeIndex<VREmulator>_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_02fdcff0();
                      }
                      FUN_0677aa2c(uVar15,uVar14,0x60,0);
                      lVar16 = FUN_02fe9340(*(undefined8 *)
                                             Unity_Entities_TypeManager_SharedTypeIndex<VRKeyboard>_TypeInfo
                                            ,3);
                      local_100 = (ulong)local_100._4_4_ << 0x20;
                      FUN_06921440(&local_100,
                                   *(undefined8 *)System_Collections_Generic_List<Vector2>_TypeInfo,
                                   0);
                      if (lVar16 == 0) goto LAB_0675fddc;
                      if (*(int *)(lVar16 + 0x18) == 0) {
LAB_0675fde0:
                    /* WARNING: Subroutine does not return */
                        FUN_02fe94f0();
                      }
                      *(undefined4 *)(lVar16 + 0x20) = (undefined4)local_100;
                      local_b8[0] = 0;
                      FUN_06921440(local_b8,*(undefined8 *)
                                             System_Collections_Generic_List<Value>_TypeInfo,0);
                      if (*(uint *)(lVar16 + 0x18) < 2) goto LAB_0675fde0;
                      *(undefined4 *)(lVar16 + 0x24) = local_b8[0];
                      local_c0[0] = 0;
                      FUN_06921440(local_c0,*(undefined8 *)
                                             UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo
                                   ,0);
                      if (*(uint *)(lVar16 + 0x18) < 3) goto LAB_0675fde0;
                      *(undefined4 *)(lVar16 + 0x28) = local_c0[0];
                      uVar22 = *(undefined8 *)(param_1 + 0x328);
                      uVar15 = thunk_FUN_0301080c(*(undefined8 *)
                                                                                                      
                                                  Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo
                                                 );
                      FUN_06789f3c(uVar15,0xd3,uVar22,1,0,0,0);
                      *(undefined8 *)(param_1 + 0x1e8) = uVar15;
                      thunk_FUN_03048534(param_1 + 0x1e8,uVar15);
                      uVar22 = *(undefined8 *)(param_1 + 0x2e0);
                      uVar15 = thunk_FUN_0301080c(*(undefined8 *)
                                                                                                      
                                                  Unity_Entities_TypeManager_SharedTypeIndex<VRIFGrabpointUpdater>_TypeInfo
                                                 );
                      FUN_0678b518(uVar15,0xe6,uVar22,0);
                      *(undefined8 *)(param_1 + 0x1f0) = uVar15;
                      thunk_FUN_03048534(param_1 + 0x1f0,uVar15);
                      uVar15 = FUN_0691d17c(0);
                      uVar2 = *(undefined4 *)(param_2 + 0x5c);
                      uVar22 = thunk_FUN_0301080c(*(undefined8 *)
                                                                                                      
                                                  Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                                                 );
                      uVar14 = extraout_var;
                      FUN_0678db00(uVar22,*(undefined8 *)
                                           Unity_Entities_TypeManager_SharedTypeIndex<VRUISystem>_TypeInfo
                                   ,lVar16,1,0xfa,uVar15,uVar2);
                      *(undefined8 *)(param_1 + 0x1f8) = uVar22;
                      thunk_FUN_03048534(param_1 + 0x1f8,uVar22);
                    }
                    puVar9 = 
                    Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationController>_TypeInfo;
                    if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    uVar15 = FUN_0691d17c(0);
                    uVar2 = *(undefined4 *)(param_2 + 0x5c);
                    uVar18 = *(undefined8 *)*pauVar1;
                    uVar3 = *(undefined4 *)(param_1 + 0x2fd);
                    uVar25 = *(undefined4 *)(lVar19 + 0x14);
                    uVar22 = thunk_FUN_0301080c(*(undefined8 *)
                                                 Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                                               );
                    uVar23 = CONCAT44(uVar14,uVar25);
                    FUN_0678d7f4(uVar22,10,1,0xfa,uVar15,uVar2,uVar18,uVar3,uVar23,0);
                    uVar25 = (undefined4)((ulong)uVar23 >> 0x20);
                    *(undefined8 *)(param_1 + 0x200) = uVar22;
                    thunk_FUN_03048534(param_1 + 0x200,uVar22);
                    uVar15 = FUN_0691d17c(0);
                    uVar14 = *(undefined4 *)(param_2 + 0x5c);
                    uVar18 = *(undefined8 *)*pauVar1;
                    uVar2 = *(undefined4 *)(param_1 + 0x2fd);
                    uVar3 = *(undefined4 *)(lVar19 + 0x14);
                    uVar22 = thunk_FUN_0301080c(*(undefined8 *)puVar9);
                    uVar23 = CONCAT44(uVar25,uVar3);
                    FUN_0678d708(uVar22,10,1,0xfa,uVar15,uVar14,uVar18,uVar2,uVar23,0);
                    uVar14 = (undefined4)((ulong)uVar23 >> 0x20);
                    *(undefined8 *)(param_1 + 0x208) = uVar22;
                    thunk_FUN_03048534(param_1 + 0x208,uVar22);
                    iVar4 = *(int *)(param_1 + 0x2f0);
                    uVar15 = *(undefined8 *)(param_1 + 0x328);
                    uVar20 = 500;
                    if (iVar4 != 1) {
                      uVar20 = 400;
                    }
                    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0)
                        == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    puVar8 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKLODController>_TypeInfo;
                    puVar9 = Unity_Entities_TypeManager_SharedTypeIndex<QuickBase>_TypeInfo;
                    uVar17 = FUN_0674de10(0);
                    if ((uVar17 & 1) == 0) {
                      bVar13 = 0;
                    }
                    else {
                      bVar13 = FUN_069009c0(0);
                      bVar13 = bVar13 & 1;
                    }
                    uVar22 = thunk_FUN_0301080c(*(undefined8 *)
                                                 Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo
                                               );
                    FUN_06789f3c(uVar22,uVar20,uVar15,1,0,bVar13 & iVar4 == 1,0);
                    *(undefined8 *)(param_1 + 0x218) = uVar22;
                    thunk_FUN_03048534(param_1 + 0x218,uVar22);
                    uVar22 = *(undefined8 *)(param_1 + 0x340);
                    uVar18 = *(undefined8 *)(param_1 + 0x348);
                    uVar2 = *(undefined4 *)(param_2 + 0x5c);
                    uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar9);
                    FUN_0673914c(uVar15,uVar20 | 1,uVar22,uVar18,uVar2,0);
                    *(undefined8 *)(param_1 + 0x1c8) = uVar15;
                    thunk_FUN_03048534(param_1 + 0x1c8,uVar15);
                    uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar8);
                    FUN_0673757c(uVar15,0x15e,0);
                    *(undefined8 *)(param_1 + 0x210) = uVar15;
                    thunk_FUN_03048534(param_1 + 0x210,uVar15);
                    uVar22 = *(undefined8 *)(param_1 + 0x330);
                    uVar18 = *(undefined8 *)(param_1 + 0x318);
                    uVar15 = thunk_FUN_0301080c(*(undefined8 *)
                                                 Unity_Entities_TypeManager_SharedTypeIndex<VRController>_TypeInfo
                                               );
                    FUN_06788a90(uVar15,400,uVar22,uVar18,0);
                    *(undefined8 *)(param_1 + 0x220) = uVar15;
                    thunk_FUN_03048534(param_1 + 0x220,uVar15);
                    uVar5 = *(undefined1 *)(param_2 + 0x70);
                    uVar15 = thunk_FUN_0301080c(*(undefined8 *)
                                                 Unity_Entities_TypeManager_SharedTypeIndex<RotateShoulderToTarget>_TypeInfo
                                               );
                    FUN_06742814(uVar15,0x1c2,uVar5,0);
                    *(undefined8 *)(param_1 + 0x228) = uVar15;
                    thunk_FUN_03048534(param_1 + 0x228,uVar15);
                    if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    uVar15 = FUN_0691d184(0);
                    uVar2 = *(undefined4 *)(param_2 + 0x60);
                    uVar18 = *(undefined8 *)*pauVar1;
                    uVar3 = *(undefined4 *)(param_1 + 0x2fd);
                    uVar25 = *(undefined4 *)(lVar19 + 0x14);
                    uVar22 = thunk_FUN_0301080c(*(undefined8 *)
                                                 Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                                               );
                    FUN_0678d7f4(uVar22,0xb,0,0x1c2,uVar15,uVar2,uVar18,uVar3,
                                 CONCAT44(uVar14,uVar25),0);
                    *(undefined8 *)(param_1 + 0x230) = uVar22;
                    thunk_FUN_03048534(param_1 + 0x230,uVar22);
                    uVar15 = thunk_FUN_0301080c(*(undefined8 *)
                                                 Unity_Entities_TypeManager_SharedTypeIndex<VRInitializer>_TypeInfo
                                               );
                    FUN_06738d08(uVar15,0x226,0);
                    *(undefined8 *)(param_1 + 0x238) = uVar15;
                    thunk_FUN_03048534(param_1 + 0x238,uVar15);
                    puVar9 = OVRTask<OVRResult<Int32Enum>>_TypeInfo;
                    uVar15 = thunk_FUN_0301080c(*(undefined8 *)
                                                 OVRTask<OVRResult<Int32Enum>>_TypeInfo);
                    FUN_06736604(uVar15,0x226,1,0);
                    *(undefined8 *)(param_1 + 0x260) = uVar15;
                    thunk_FUN_03048534(param_1 + 0x260,uVar15);
                    uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar9);
                    FUN_06736604(uVar15,0x3ea,0,0);
                    *(undefined8 *)(param_1 + 0x268) = uVar15;
                    thunk_FUN_03048534(param_1 + 0x268,uVar15);
                    FUN_067430c0(0);
                    local_b0 = *(undefined8 *)(param_1 + 0x318);
                    local_a8 = extraout_x1;
                    thunk_FUN_03048534(&local_b0);
                    puVar9 = PTR_DAT_06f9a540;
                    local_a8 = CONCAT44(local_a8._4_4_,0x4a);
                    if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    lVar19 = FUN_067676ac(0);
                    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
                    }
                    uVar17 = FUN_068fc830(lVar19,0);
                    if ((uVar17 & 1) != 0) {
                      if (lVar19 == 0) goto LAB_0675fddc;
                      cVar6 = *(char *)(lVar19 + 0x55);
                      uVar14 = *(undefined4 *)(lVar19 + 0x58);
                      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                        thunk_FUN_02fdcff0();
                      }
                      uVar14 = FUN_0676dfe8(cVar6 != '\0',uVar14,0,0);
                      local_a8 = CONCAT44(local_a8._4_4_,uVar14);
                    }
                    puVar11 = 
                    Unity_Entities_TypeManager_SharedTypeIndex<PostTransformMatrix>_TypeInfo;
                    puVar7 = OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo;
                    puVar10 = OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo;
                    puVar8 = OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo;
                    puVar9 = OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_TypeInfo;
                    uStack_d8 = 0;
                    local_e0 = 0;
                    uStack_c8 = 0;
                    uStack_d0 = 0;
                    uStack_f8 = 0;
                    uStack_f4 = 0;
                    local_100 = 0;
                    uStack_e8 = 0;
                    uStack_e4 = 0;
                    uStack_f0 = 0;
                    uStack_ec = 0;
                    FUN_06743174(&local_100,*(undefined8 *)(param_2 + 0x40),&local_b0,0);
                    *(undefined8 *)(param_1 + 0x378) = uStack_d8;
                    *(undefined8 *)(param_1 + 0x370) = local_e0;
                    *(undefined8 *)(param_1 + 0x388) = uStack_c8;
                    *(undefined8 *)(param_1 + 0x380) = uStack_d0;
                    *(ulong *)(param_1 + 0x358) = CONCAT44(uStack_f4,uStack_f8);
                    *(long *)(param_1 + 0x350) = local_100;
                    *(ulong *)(param_1 + 0x368) = CONCAT44(uStack_e4,uStack_e8);
                    *(ulong *)(param_1 + 0x360) = CONCAT44(uStack_ec,uStack_f0);
                    thunk_FUN_03048534(param_1 + 0x350,0);
                    uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar11);
                    FUN_067361c8(uVar15,1000,0);
                    *(undefined8 *)(param_1 + 0x248) = uVar15;
                    thunk_FUN_03048534(param_1 + 0x248,uVar15);
                    uVar22 = *(undefined8 *)(param_1 + 0x318);
                    uVar18 = *(undefined8 *)(param_1 + 800);
                    uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar9);
                    FUN_0678ef90(uVar15,0x3e9,uVar22,uVar18,0);
                    *(undefined8 *)(param_1 + 0x240) = uVar15;
                    thunk_FUN_03048534(param_1 + 0x240,uVar15);
                    uVar15 = thunk_FUN_0301080c(*(undefined8 *)puVar8);
                    FUN_067945cc(uVar15,*(undefined8 *)puVar7,0);
                    *(undefined8 *)(param_1 + 0x270) = uVar15;
                    thunk_FUN_03048534(param_1 + 0x270,uVar15);
                    lVar19 = thunk_FUN_0301080c(*(undefined8 *)puVar10);
                    FUN_0672e074(lVar19,0);
                    puVar9 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
                    if (*(int *)(*(long *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo + 0xe0) ==
                        0) {
                      thunk_FUN_02fdcff0();
                    }
                    plVar21 = (long *)(param_1 + 0xe8);
                    *plVar21 = lVar19;
                    thunk_FUN_03048534(plVar21,lVar19);
                    if (*(int *)(param_1 + 0x2e8) == 1) {
                      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                        thunk_FUN_02fdcff0();
                      }
                      if (*plVar21 == 0) goto LAB_0675fddc;
                      *(undefined1 *)(*plVar21 + 0x11) = 0;
                      uVar15 = FUN_02fe9340(*(undefined8 *)
                                             Unity_Entities_TypeManager_SharedTypeIndex<LocalToWorld>_TypeInfo
                                            ,3);
                      FUN_05a1740c(uVar15,*(undefined8 *)
                                           Unity_Entities_TypeManager_SharedTypeIndex<VRKeyboardKey>_TypeInfo
                                   ,0);
                      *(undefined8 *)(param_1 + 0xf0) = uVar15;
                      thunk_FUN_03048534((undefined8 *)(param_1 + 0xf0),uVar15);
                    }
                    puVar9 = 
                    System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_TypeInfo
                    ;
                    lVar19 = *(long *)
                              System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_TypeInfo
                    ;
                    if (*(int *)(lVar19 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                      lVar19 = *(long *)puVar9;
                    }
                    *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x24) = DAT_0136baf0;
                    FUN_06683240(0);
                    bVar13 = FUN_06911d3c(0x1d,0);
                    *(byte *)(param_1 + 0x314) = bVar13 & 1;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0675fddc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


