/*
FUNCTION_NAME: Unity.VisualScripting.TypeName.<>c$$.ctor
ENTRY_POINT: 0675f65c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_VisualScripting_TypeName_<>c___ctor(void)

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
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 extraout_x1;
  undefined4 in_w8;
  uint uVar15;
  long unaff_x19;
  long unaff_x20;
  long *plVar16;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  *(undefined4 *)(unaff_x23 + 0x20) = in_w8;
  uStack0000000000000078 = 0;
  FUN_06921440(&stack0x00000078,*(undefined8 *)System_Collections_Generic_List<Value>_TypeInfo,0);
  if (*(uint *)(unaff_x23 + 0x18) < 2) {
LAB_0675fde0:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
  *(undefined4 *)(unaff_x23 + 0x24) = uStack0000000000000078;
  in_stack_00000070 = 0;
  FUN_06921440(&stack0x00000070,
               *(undefined8 *)
                UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo,0);
  if (*(uint *)(unaff_x23 + 0x18) < 3) goto LAB_0675fde0;
  *(undefined4 *)(unaff_x23 + 0x28) = in_stack_00000070;
  uVar18 = *(undefined8 *)(unaff_x19 + 0x328);
  uVar12 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo);
  FUN_06789f3c(uVar12,0xd3,uVar18,1,0,0,0);
  *(undefined8 *)(unaff_x19 + 0x1e8) = uVar12;
  thunk_FUN_03048534(unaff_x19 + 0x1e8,uVar12);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x2e0);
  uVar12 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<VRIFGrabpointUpdater>_TypeInfo
                             );
  FUN_0678b518(uVar12,0xe6,uVar18,0);
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar12;
  thunk_FUN_03048534(unaff_x19 + 0x1f0,uVar12);
  FUN_0691d17c(0);
  uVar12 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                             );
  FUN_0678db00(uVar12,*(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VRUISystem>_TypeInfo
              );
  *(undefined8 *)(unaff_x19 + 0x1f8) = uVar12;
  thunk_FUN_03048534(unaff_x19 + 0x1f8,uVar12);
  puVar5 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationController>_TypeInfo;
  if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar12 = FUN_0691d17c(0);
  uVar11 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar17 = *unaff_x21;
  uVar1 = *(undefined4 *)(unaff_x21 + 1);
  uVar18 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                             );
  FUN_0678d7f4(uVar18,10,1,0xfa,uVar12,uVar11,uVar17,uVar1);
  *(undefined8 *)(unaff_x19 + 0x200) = uVar18;
  thunk_FUN_03048534(unaff_x19 + 0x200,uVar18);
  uVar12 = FUN_0691d17c(0);
  uVar11 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar17 = *unaff_x21;
  uVar1 = *(undefined4 *)(unaff_x21 + 1);
  uVar18 = thunk_FUN_0301080c(*(undefined8 *)puVar5);
  FUN_0678d708(uVar18,10,1,0xfa,uVar12,uVar11,uVar17,uVar1);
  *(undefined8 *)(unaff_x19 + 0x208) = uVar18;
  thunk_FUN_03048534(unaff_x19 + 0x208,uVar18);
  iVar2 = *(int *)(unaff_x19 + 0x2f0);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x328);
  uVar15 = 500;
  if (iVar2 != 1) {
    uVar15 = 400;
  }
  if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar6 = Unity_Entities_TypeManager_SharedTypeIndex<VRIKLODController>_TypeInfo;
  puVar5 = Unity_Entities_TypeManager_SharedTypeIndex<QuickBase>_TypeInfo;
  uVar13 = FUN_0674de10(0);
  if ((uVar13 & 1) == 0) {
    bVar10 = 0;
  }
  else {
    bVar10 = FUN_069009c0(0);
    bVar10 = bVar10 & 1;
  }
  uVar18 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<SettingLabel>_TypeInfo);
  FUN_06789f3c(uVar18,uVar15,uVar12,1,0,bVar10 & iVar2 == 1,0);
  *(undefined8 *)(unaff_x19 + 0x218) = uVar18;
  thunk_FUN_03048534(unaff_x19 + 0x218,uVar18);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x340);
  uVar17 = *(undefined8 *)(unaff_x19 + 0x348);
  uVar11 = *(undefined4 *)(unaff_x20 + 0x5c);
  uVar12 = thunk_FUN_0301080c(*(undefined8 *)puVar5);
  FUN_0673914c(uVar12,uVar15 | 1,uVar18,uVar17,uVar11,0);
  *(undefined8 *)(unaff_x19 + 0x1c8) = uVar12;
  thunk_FUN_03048534(unaff_x19 + 0x1c8,uVar12);
  uVar12 = thunk_FUN_0301080c(*(undefined8 *)puVar6);
  FUN_0673757c(uVar12,0x15e,0);
  *(undefined8 *)(unaff_x19 + 0x210) = uVar12;
  thunk_FUN_03048534(unaff_x19 + 0x210,uVar12);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x330);
  uVar17 = *(undefined8 *)(unaff_x19 + 0x318);
  uVar12 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<VRController>_TypeInfo);
  FUN_06788a90(uVar12,400,uVar18,uVar17,0);
  *(undefined8 *)(unaff_x19 + 0x220) = uVar12;
  thunk_FUN_03048534(unaff_x19 + 0x220,uVar12);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x70);
  uVar12 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<RotateShoulderToTarget>_TypeInfo
                             );
  FUN_06742814(uVar12,0x1c2,uVar3,0);
  *(undefined8 *)(unaff_x19 + 0x228) = uVar12;
  thunk_FUN_03048534(unaff_x19 + 0x228,uVar12);
  if (*(int *)(*(long *)PTR_DAT_06f9b130 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar12 = FUN_0691d184(0);
  uVar11 = *(undefined4 *)(unaff_x20 + 0x60);
  uVar17 = *unaff_x21;
  uVar1 = *(undefined4 *)(unaff_x21 + 1);
  uVar18 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<VRIKCalibrationBasic>_TypeInfo
                             );
  FUN_0678d7f4(uVar18,0xb,0,0x1c2,uVar12,uVar11,uVar17,uVar1);
  *(undefined8 *)(unaff_x19 + 0x230) = uVar18;
  thunk_FUN_03048534(unaff_x19 + 0x230,uVar18);
  uVar12 = thunk_FUN_0301080c(*(undefined8 *)
                               Unity_Entities_TypeManager_SharedTypeIndex<VRInitializer>_TypeInfo);
  FUN_06738d08(uVar12,0x226,0);
  *(undefined8 *)(unaff_x19 + 0x238) = uVar12;
  thunk_FUN_03048534(unaff_x19 + 0x238,uVar12);
  puVar5 = OVRTask<OVRResult<Int32Enum>>_TypeInfo;
  uVar12 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRResult<Int32Enum>>_TypeInfo);
  FUN_06736604(uVar12,0x226,1,0);
  *(undefined8 *)(unaff_x19 + 0x260) = uVar12;
  thunk_FUN_03048534(unaff_x19 + 0x260,uVar12);
  uVar12 = thunk_FUN_0301080c(*(undefined8 *)puVar5);
  FUN_06736604(uVar12,0x3ea,0,0);
  *(undefined8 *)(unaff_x19 + 0x268) = uVar12;
  thunk_FUN_03048534(unaff_x19 + 0x268,uVar12);
  FUN_067430c0(0);
  in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0x318);
  in_stack_00000088 = extraout_x1;
  thunk_FUN_03048534(&stack0x00000080);
  puVar5 = PTR_DAT_06f9a540;
  in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,0x4a);
  if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar14 = FUN_067676ac(0);
  if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
  }
  uVar13 = FUN_068fc830(lVar14,0);
  if ((uVar13 & 1) != 0) {
    if (lVar14 == 0) goto LAB_0675fddc;
    cVar4 = *(char *)(lVar14 + 0x55);
    uVar11 = *(undefined4 *)(lVar14 + 0x58);
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
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  FUN_06743174(&stack0x00000030,*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,0);
  *(undefined8 *)(unaff_x19 + 0x378) = in_stack_00000058;
  *(undefined8 *)(unaff_x19 + 0x370) = in_stack_00000050;
  *(undefined8 *)(unaff_x19 + 0x388) = in_stack_00000068;
  *(undefined8 *)(unaff_x19 + 0x380) = in_stack_00000060;
  *(undefined8 *)(unaff_x19 + 0x358) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x350) = in_stack_00000030;
  *(undefined8 *)(unaff_x19 + 0x368) = in_stack_00000048;
  *(undefined8 *)(unaff_x19 + 0x360) = in_stack_00000040;
  thunk_FUN_03048534(unaff_x19 + 0x350,0);
  uVar12 = thunk_FUN_0301080c(*(undefined8 *)puVar9);
  FUN_067361c8(uVar12,1000,0);
  *(undefined8 *)(unaff_x19 + 0x248) = uVar12;
  thunk_FUN_03048534(unaff_x19 + 0x248,uVar12);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x318);
  uVar17 = *(undefined8 *)(unaff_x19 + 800);
  uVar12 = thunk_FUN_0301080c(*(undefined8 *)puVar5);
  FUN_0678ef90(uVar12,0x3e9,uVar18,uVar17,0);
  *(undefined8 *)(unaff_x19 + 0x240) = uVar12;
  thunk_FUN_03048534(unaff_x19 + 0x240,uVar12);
  uVar12 = thunk_FUN_0301080c(*(undefined8 *)puVar6);
  FUN_067945cc(uVar12,*(undefined8 *)puVar8,0);
  *(undefined8 *)(unaff_x19 + 0x270) = uVar12;
  thunk_FUN_03048534(unaff_x19 + 0x270,uVar12);
  lVar14 = thunk_FUN_0301080c(*(undefined8 *)puVar7);
  FUN_0672e074(lVar14,0);
  puVar5 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
  if (*(int *)(*(long *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  plVar16 = (long *)(unaff_x19 + 0xe8);
  *plVar16 = lVar14;
  thunk_FUN_03048534(plVar16,lVar14);
  if (*(int *)(unaff_x19 + 0x2e8) == 1) {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if (*plVar16 == 0) {
LAB_0675fddc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    *(undefined1 *)(*plVar16 + 0x11) = 0;
    uVar12 = FUN_02fe9340(*(undefined8 *)
                           Unity_Entities_TypeManager_SharedTypeIndex<LocalToWorld>_TypeInfo,3);
    FUN_05a1740c(uVar12,*(undefined8 *)
                         Unity_Entities_TypeManager_SharedTypeIndex<VRKeyboardKey>_TypeInfo,0);
    *(undefined8 *)(unaff_x19 + 0xf0) = uVar12;
    thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0xf0),uVar12);
  }
  puVar5 = 
  System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_TypeInfo
  ;
  lVar14 = *(long *)
            System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_TypeInfo
  ;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar14 = *(long *)puVar5;
  }
  *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x24) = DAT_0136baf0;
  FUN_06683240(0);
  bVar10 = FUN_06911d3c(0x1d,0);
  *(byte *)(unaff_x19 + 0x314) = bVar10 & 1;
  return;
}


