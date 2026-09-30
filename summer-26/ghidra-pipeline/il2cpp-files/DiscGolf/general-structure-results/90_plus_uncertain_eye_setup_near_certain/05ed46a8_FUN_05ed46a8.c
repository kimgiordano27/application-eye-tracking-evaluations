/*
FUNCTION_NAME: FUN_05ed46a8
ENTRY_POINT: 05ed46a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05ed48e4) */
/* WARNING: Removing unreachable block (ram,0x05ed49f8) */
/* WARNING: Removing unreachable block (ram,0x05ed499c) */
/* WARNING: Removing unreachable block (ram,0x05ed4a10) */

void FUN_05ed46a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  double dVar13;
  double local_d8;
  double *pdStack_d0;
  long *local_c8;
  double local_b0;
  double *pdStack_a8;
  long *local_a0;
  double local_90;
  double *pdStack_88;
  long *local_80;
  
  if ((DAT_06dc3ec5 & 1) == 0) {
    FUN_02d965b8(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSceneManager_<FetchAnchorsAsync>d__37>__
                );
    FUN_02d965b8(PTR_DAT_06a0e4e8);
    FUN_02d965b8(PTR_DAT_06a0e4f0);
    FUN_02d965b8(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneRoom_<LoadRoom>d__19>__
                );
    FUN_02d965b8(PTR_DAT_06a0e4f8);
    FUN_02d965b8(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
                );
    FUN_02d965b8(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchAnchorsAsync>d__56>__
                );
    FUN_02d965b8(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    FUN_02d965b8(
                Method_OVRTaskBuilder<bool>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRSpatialAnchor_<WhenCreatedAsync>d__19>__
                );
    FUN_02d965b8(PTR_DAT_06a0e518);
    DAT_06dc3ec5 = 1;
  }
  local_90 = 0.0;
  pdStack_88 = (double *)0x0;
  local_80 = (long *)0x0;
  local_b0 = 0.0;
  pdStack_a8 = (double *)0x0;
  local_a0 = (long *)0x0;
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_05e627d8(&local_d8,*(long *)(param_1 + 0x30),0);
    puVar6 = 
    Method_OVRTaskBuilder<bool>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRSpatialAnchor_<WhenCreatedAsync>d__19>__
    ;
    puVar5 = 
    Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneRoom_<LoadRoom>d__19>__
    ;
    puVar4 = 
    Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSceneManager_<FetchAnchorsAsync>d__37>__
    ;
    puVar3 = PTR_DAT_06a0e518;
    puVar2 = PTR_DAT_06a0e4f0;
    puVar1 = PTR_DAT_06a0e4e8;
    if (*(long *)(param_1 + 0x38) != 0) {
      dVar13 = local_d8 - *(double *)(param_1 + 0x18);
      FUN_03c23590(&local_d8,*(long *)(param_1 + 0x38),
                   *(undefined8 *)
                    Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                  );
      local_80 = local_c8;
      pdStack_88 = pdStack_d0;
      local_90 = local_d8;
      while (uVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<uint,_uint>__Dispose
                               (&local_90,*(undefined8 *)puVar5), plVar7 = local_80,
            (uVar8 & 1) != 0) {
        if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar11 = *local_80;
        lVar10 = *(long *)puVar6;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar10) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_05ed4858;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_02dd004c(local_80,lVar10,2);
LAB_05ed4858:
        lVar10 = (*(code *)*puVar9)(plVar7,puVar9[1]);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar10 = UnityEngine_Rendering_ProbeVolumeBakingSet__Initialize(lVar10,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04010c90(&local_d8,lVar10,*(undefined8 *)puVar3);
        local_b0 = local_d8;
        local_d8 = 0.0;
        pdStack_a8 = pdStack_d0;
        local_a0 = local_c8;
        pdStack_d0 = &local_b0;
        while (uVar8 = FUN_05156804(&local_b0,*(undefined8 *)puVar2), (uVar8 & 1) != 0) {
          if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          (**(code **)(*local_a0 + 0x298))(dVar13,local_a0,*(undefined8 *)(*local_a0 + 0x2a0));
        }
        FUN_05156800(&local_b0,*(undefined8 *)puVar1);
        lVar11 = *plVar7;
        lVar10 = *(long *)puVar6;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar10) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_05ed4938;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_02dd004c(plVar7,lVar10,1);
LAB_05ed4938:
        (*(code *)*puVar9)(plVar7,puVar9[1]);
      }
      FUN_05156050(&local_90,*(undefined8 *)puVar4);
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_03c230bc(*(long *)(param_1 + 0x38),
                     *(undefined8 *)
                      Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchAnchorsAsync>d__56>__
                    );
        lVar10 = *(long *)(param_1 + 0x40);
        if (lVar10 != 0) {
          (**(code **)(lVar10 + 0x18))
                    (dVar13,*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


