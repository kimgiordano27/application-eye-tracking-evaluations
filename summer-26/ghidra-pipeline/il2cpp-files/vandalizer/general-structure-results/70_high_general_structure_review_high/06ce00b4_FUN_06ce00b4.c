/*
FUNCTION_NAME: FUN_06ce00b4
ENTRY_POINT: 06ce00b4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06ce00b4(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long local_28;
  
  puVar2 = PTR_DAT_0759b2a8;
  if ((DAT_07a50acc & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d6fd8);
    FUN_031f20f4(System_Nullable<ulong>_TypeInfo);
    FUN_031f20f4(System_Nullable<Vector3>_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d6fe0);
    FUN_031f20f4(PTR_DAT_0759b238);
    FUN_031f20f4(System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    FUN_031f20f4(System_Nullable<PeekableHTTP1Response_PeekableReadState>_TypeInfo);
    DAT_07a50acc = 1;
  }
  local_28 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x3e0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar3 = FUN_06e587d8(uVar5,0,0);
  puVar2 = System_Nullable<ulong>_TypeInfo;
  if ((uVar3 & 1) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x3e0);
    if (*(int *)(*(long *)System_Nullable<Vector3>_TypeInfo + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar3 = FUN_0558f9dc(puVar1,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_075d6fe0 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar3 = FUN_0558f9dc(&local_28,*(undefined8 *)PTR_DAT_075d6fd8);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_06def178(*(undefined8 *)
                      System_Nullable<PeekableHTTP1Response_PeekableReadState>_TypeInfo,param_1,0);
      }
      else {
        if ((local_28 == 0) || (lVar4 = FUN_06e550fc(local_28,0), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        uVar5 = FUN_03e0d654(lVar4,*(undefined8 *)
                                    System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo);
        *puVar1 = uVar5;
        thunk_FUN_0329bf60(puVar1,uVar5);
      }
    }
  }
  return;
}


