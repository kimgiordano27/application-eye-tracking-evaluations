/*
FUNCTION_NAME: FUN_061a5ef8
ENTRY_POINT: 061a5ef8
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


long FUN_061a5ef8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar3 = Google_Apis_Storage_v1_ObjectsResource_TestIamPermissionsRequest_TypeInfo;
  if ((DAT_06a83db1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd7f8);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_ObjectsResource_UpdateRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_ObjectsResource_WatchAllRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_HelloDot_ObstacleCourseManager_<>c__DisplayClass6_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_ObstacleCourseToy_<GroundPlacement>d__67_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_ObstacleCourseToy_<PlaceOnGround>d__68_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_ObstacleCourseToy_<UpdateHighlight>d__62_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de258);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_Api_ObstacleCourseToyConfig_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_ObjectsResource_TestIamPermissionsRequest_TypeInfo);
    DAT_06a83db1 = 1;
  }
  lVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_04f7383c(lVar5,0);
  puVar3 = Niantic_Peridot_ObstacleCourseToy_<UpdateHighlight>d__62_TypeInfo;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_1;
    puVar4 = Niantic_Peridot_ObstacleCourseToy_<PlaceOnGround>d__68_TypeInfo;
    puVar2 = PTR_DAT_065de258;
    puVar1 = PTR_DAT_065dd7f8;
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
    System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
              (lVar6,*(undefined8 *)puVar4);
    uVar10 = *(undefined8 *)(lVar5 + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    plVar7 = (long *)FUN_061a693c(uVar10);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*(long *)puVar1);
    }
    uVar8 = FUN_04e69344(plVar7,0,0);
    if ((uVar8 & 1) == 0) {
LAB_061a60b4:
      lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                  Niantic_HelloDot_ObstacleCourseManager_<>c__DisplayClass6_0_TypeInfo
                                );
      FUN_04f7383c(lVar5,0);
      *(long **)(lVar5 + 0x10) = plVar7;
      *(long *)(lVar5 + 0x18) = lVar6;
      return lVar5;
    }
    if (plVar7 != (long *)0x0) {
      uVar10 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      uVar9 = thunk_FUN_02cea894(*(undefined8 *)
                                  Google_Apis_Storage_v1_ObjectsResource_WatchAllRequest_TypeInfo);
      FUN_04a5701c(uVar9,lVar5,
                   *(undefined8 *)Niantic_Peridot_Api_ObstacleCourseToyConfig_<>c_TypeInfo,0);
      uVar10 = FUN_033eb504(uVar10,uVar9,
                            *(undefined8 *)
                             Google_Apis_Storage_v1_ObjectsResource_UpdateRequest_TypeInfo);
      if (lVar6 != 0) {
        FUN_039685d0(lVar6,uVar10,
                     *(undefined8 *)
                      Niantic_Peridot_ObstacleCourseToy_<GroundPlacement>d__67_TypeInfo);
        goto LAB_061a60b4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


