/*
FUNCTION_NAME: FUN_05ed3574
ENTRY_POINT: 05ed3574
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 195
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_5
*/


void FUN_05ed3574(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  puVar1 = PTR_DAT_069fb990;
  if ((DAT_06dc3eb9 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_RemoveAt__);
    FUN_02d965b8(Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_get_Count__);
    FUN_02d965b8(Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_get_Item__);
    FUN_02d965b8(PTR_DAT_06a0e4b8);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>_Contains__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>_GetEnumerator__
                );
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                );
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                );
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                );
    FUN_02d965b8(PTR_DAT_069fc208);
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__64>__
                );
    DAT_06dc3eb9 = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x50);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar1 = PTR_DAT_069fb930;
  uVar7 = FUN_06350670(uVar11,0,0);
  puVar2 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__64>__
  ;
  if ((uVar7 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x50);
    if (lVar8 == 0) goto LAB_05ed38f0;
    if ((*(char *)(lVar8 + 0x88) == '\0') || (0 < *(int *)(lVar8 + 0x9c))) {
      if (*(char *)(lVar8 + 0x30) == '\0') {
        puVar10 = (undefined8 *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
        ;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          puVar10 = (undefined8 *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
          ;
        }
LAB_05ed3734:
        FUN_0630bbe4(*puVar10,0);
        return;
      }
      lVar8 = FUN_05e5e6f4(lVar8,0);
      if (lVar8 != 0) {
        if (*(char *)(lVar8 + 0x19) != '\0') {
          puVar10 = (undefined8 *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
          ;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            puVar10 = (undefined8 *)
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
            ;
          }
          goto LAB_05ed3734;
        }
        if ((((*(long *)(param_1 + 0x50) != 0) &&
             (lVar8 = FUN_05e5e6f4(*(long *)(param_1 + 0x50),0), lVar8 != 0)) &&
            (*(long *)(param_1 + 0x50) != 0)) && (*(long *)(param_1 + 0x28) != 0)) {
          lVar8 = *(long *)(lVar8 + 0x20);
          uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x58);
          FUN_03c23590(&local_98,*(long *)(param_1 + 0x28),
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>_Contains__
                      );
          puVar5 = 
          Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
          ;
          puVar4 = 
          Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>_GetEnumerator__
          ;
          puVar3 = Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_get_Count__;
          puVar2 = PTR_DAT_06a0e4b8;
          uStack_78 = puStack_90;
          local_80 = local_98;
          local_70 = local_88;
          puStack_90 = &local_80;
          local_98 = 0;
          do {
            do {
              do {
                uVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<uint,_uint>__Dispose
                                  (&local_80,*(undefined8 *)puVar3);
                lVar6 = local_70;
                if ((uVar7 & 1) == 0) {
                  FUN_05156050(&local_80,
                               *(undefined8 *)
                                Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_RemoveAt__
                              );
                  return;
                }
                if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
              } while ((*(char *)(local_70 + 0xb0) == '\0') || (*(long *)(local_70 + 0x88) != lVar8)
                      );
              if (*(long *)(local_70 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar7 = FUN_03c5ecb0(*(long *)(local_70 + 0xd0),uVar11,*(undefined8 *)puVar2);
            } while ((uVar7 & 1) != 0);
            if (*(long *)(lVar6 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar7 = FUN_03c5ecb0(*(long *)(lVar6 + 0xd0),param_2,*(undefined8 *)puVar2);
            if ((uVar7 & 1) != 0) {
              if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(int *)(*(long *)(param_1 + 0x50) + 0x9c) < 1) {
                uVar9 = thunk_FUN_06354368(lVar6,0);
                uVar9 = FUN_0536d554(*(undefined8 *)PTR_DAT_069fc208,uVar9,*(undefined8 *)puVar5,0);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                FUN_06309d28(uVar9,0);
              }
              if (*(long *)(lVar6 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_03c5ee80(*(long *)(lVar6 + 0xd0),param_2,*(undefined8 *)puVar4);
            }
            FUN_05e70f9c(lVar6,param_2,0);
          } while( true );
        }
      }
LAB_05ed38f0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_06309d28(*(undefined8 *)puVar2,0);
  return;
}


