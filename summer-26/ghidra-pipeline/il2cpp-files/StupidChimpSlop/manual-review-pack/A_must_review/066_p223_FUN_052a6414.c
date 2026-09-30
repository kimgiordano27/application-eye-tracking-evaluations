/*
FUNCTION_NAME: FUN_052a6414
ENTRY_POINT: 052a6414
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_052a6414(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_06a5265c & 1) == 0) {
    FUN_02d4dc40(System_Collections_Generic_List<TrackedDeviceRaycaster_RaycastHitData>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664b428);
    FUN_02d4dc40(PTR_DAT_06648af8);
    FUN_02d4dc40(System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_TypeInfo);
    DAT_06a5265c = 1;
  }
  puVar1 = PTR_DAT_06648af8;
  if ((param_2 == 0) || (lVar6 = *(long *)(param_2 + 0x10), lVar6 == 0)) {
    lVar6 = *(long *)(param_1 + 0x18);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    lVar7 = *(long *)PTR_DAT_06648af8;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar7 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  }
  if (lVar6 != 0) {
    uVar3 = System_Linq_Expressions_Interpreter_StoreLocalInstruction__get_ConsumedStack(lVar6,0);
    puVar2 = System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_TypeInfo;
    puVar1 = System_Collections_Generic_List<TrackedDeviceRaycaster_RaycastHitData>_TypeInfo;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_0664b428 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_032f1ac8(*(undefined8 *)puVar2,param_2,2,param_3,param_4,param_5,param_6,lVar6,lVar7,
                   param_1,*(undefined8 *)puVar1);
      return;
    }
    thunk_FUN_02db45e8(PTR_DAT_0664b438);
    uVar4 = thunk_FUN_02d8a638();
    uVar5 = thunk_FUN_02db45e8(PTR_DAT_0664b440);
    FUN_052d18d8(uVar4,4,uVar5,0);
    uVar5 = thunk_FUN_02db45e8(
                              PlayFab_Events_PlayFabEvents_PlayFabRequestEvent<GetLeaderboardDefinitionRequest>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar4,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


