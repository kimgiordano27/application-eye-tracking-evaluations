/*
FUNCTION_NAME: FUN_05ed0ad0
ENTRY_POINT: 05ed0ad0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 242
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05ed0e94) */
/* WARNING: Removing unreachable block (ram,0x05ed0e98) */
/* WARNING: Removing unreachable block (ram,0x05ed1020) */

void FUN_05ed0ad0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long local_118;
  long *plStack_110;
  long local_108;
  long lStack_100;
  undefined8 local_f8;
  undefined4 local_e8;
  long local_e0;
  long *plStack_d8;
  long local_d0;
  long local_c0;
  long *plStack_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_90;
  long *plStack_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  
  if ((DAT_06dc3eb1 & 1) == 0) {
    FUN_02d965b8(Method_OVRResult<OVRAnchor_ShareResult>_get_Status__);
    FUN_02d965b8(Method_OVRResult<OVRAnchor_ShareResult>_get_Success__);
    FUN_02d965b8(Method_System_Nullable<EventDispatcherGate>_get_HasValue__);
    FUN_02d965b8(Method_OVRResult<OVRColocationSession_Result>_From__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>__ctor__
                );
    FUN_02d965b8(Method_System_Nullable<ExpressionKind>_GetValueOrDefault__);
    FUN_02d965b8(Method_OVRResult<OVRColocationSession_Result>_get_Status__);
    FUN_02d965b8(Method_System_Nullable<FloatFormatHandling>__ctor__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_GetValue__
                );
    FUN_02d965b8(Method_OVRResult<OVRPlugin_Result>_From__);
    FUN_02d965b8(Method_System_Nullable<FloatFormatHandling>_get_HasValue__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_UpdateValue__
                );
    FUN_02d965b8(Method_OVRResult<OVRPlugin_Result>_get_Status__);
    FUN_02d965b8(Method_OVRResult<OVRPlugin_Result>_get_Success__);
    FUN_02d965b8(Method_System_Nullable<FloatParseHandling>_get_HasValue__);
    FUN_02d965b8(Method_System_Nullable<Formatting>__ctor__);
    FUN_02d965b8(Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Status__);
    FUN_02d965b8(Method_System_Buffers_MemoryPool<IntPtr>_get_Shared__);
    FUN_02d965b8(Method_System_Nullable<JsonPosition>_GetValueOrDefault__);
    FUN_02d965b8(PTR_DAT_069fb990);
    DAT_06dc3eb1 = 1;
  }
  puVar1 = PTR_DAT_069fb990;
  lVar9 = *(long *)(param_1 + 0x50);
  local_70 = 0;
  local_a0 = 0;
  local_e0 = 0;
  plStack_d8 = (long *)0x0;
  local_d0 = 0;
  plStack_88 = (long *)0x0;
  local_90 = 0;
  lStack_78 = 0;
  local_80 = 0;
  plStack_b8 = (long *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_e8 = 0;
  if (lVar9 == 0) goto LAB_05ed108c;
  if ((*(char *)(lVar9 + 0x30) == '\0') || (uVar10 = FUN_05e62820(lVar9,0), (uVar10 & 1) != 0)) {
    puVar6 = Method_System_Nullable<FloatFormatHandling>__ctor__;
    puVar5 = Method_System_Nullable<ExpressionKind>_GetValueOrDefault__;
    puVar4 = Method_System_Buffers_MemoryPool<IntPtr>_get_Shared__;
    puVar3 = 
    Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_GetValue__;
    puVar2 = Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>__ctor__;
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_05ed108c;
    FUN_04ff1ec4(&local_118,*(long *)(param_1 + 0x10),
                 *(undefined8 *)Method_System_Nullable<EventDispatcherGate>_get_HasValue__);
    plStack_b8 = plStack_110;
    local_c0 = local_118;
    local_a8 = lStack_100;
    local_b0 = local_108;
    local_a0 = local_f8;
    while (uVar10 = FUN_0525c4dc(&local_c0,*(undefined8 *)puVar6), lVar9 = local_b0,
          (uVar10 & 1) != 0) {
      if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04010c90(&local_118,local_a8,*(undefined8 *)puVar4);
      local_e0 = local_118;
      local_118 = 0;
      plStack_d8 = plStack_110;
      local_d0 = local_108;
      plStack_110 = &local_e0;
      while (uVar10 = FUN_05156804(&local_e0,*(undefined8 *)puVar3), lVar7 = local_d0,
            (uVar10 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar10 = FUN_0634eb94(lVar7,0,0);
        if ((uVar10 & 1) != 0) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(char *)(lVar7 + 0x9b) != '\0') {
            FUN_05ece098(param_1,lVar9,lVar7);
          }
        }
      }
      FUN_05156800(plStack_110,*(undefined8 *)puVar2);
      if (local_118 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858();
      }
    }
    FUN_0525c5fc(&local_c0,*(undefined8 *)puVar5);
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_05ed108c;
    FUN_04e93a24(&local_118,*(long *)(param_1 + 0x18),
                 *(undefined8 *)Method_OVRResult<OVRColocationSession_Result>_From__);
    puVar3 = Method_OVRResult<OVRPlugin_Result>_From__;
    puVar2 = Method_System_Nullable<JsonPosition>_GetValueOrDefault__;
    plStack_88 = plStack_110;
    local_90 = local_118;
    lStack_78 = lStack_100;
    local_80 = local_108;
    local_70 = local_f8;
    plStack_110 = &local_90;
    local_118 = 0;
    while (uVar10 = FUN_05232904(&local_90,*(undefined8 *)puVar3), lVar8 = lStack_78,
          lVar7 = local_80, lVar9 = local_118, (uVar10 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar10 = FUN_0634eb94(lVar7,0,0);
      if ((uVar10 & 1) != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(char *)(lVar7 + 0x9b) != '\0') {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar11 = FUN_0408f55c(lVar8,*(undefined8 *)puVar2);
          FUN_05ece2d8(param_1,uVar11,lVar7);
        }
      }
    }
    FUN_05232a24(plStack_110,
                 *(undefined8 *)Method_OVRResult<OVRColocationSession_Result>_get_Status__);
    if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(lVar9);
    }
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_05ed108c;
    FUN_04e93778(*(long *)(param_1 + 0x18),
                 *(undefined8 *)Method_OVRResult<OVRAnchor_ShareResult>_get_Success__);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_04ff1c14(*(long *)(param_1 + 0x10),
                 *(undefined8 *)Method_OVRResult<OVRAnchor_ShareResult>_get_Status__);
    return;
  }
LAB_05ed108c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


