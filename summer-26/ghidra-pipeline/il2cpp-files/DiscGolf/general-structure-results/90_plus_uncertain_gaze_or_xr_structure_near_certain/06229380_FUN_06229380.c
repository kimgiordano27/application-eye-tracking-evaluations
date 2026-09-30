/*
FUNCTION_NAME: FUN_06229380
ENTRY_POINT: 06229380
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_permission_setup;functionality_possible_biometrics_hits_2
*/


void FUN_06229380(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  long *local_80;
  long lStack_78;
  undefined8 local_70;
  
  puVar3 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
                    /* try { // try from 06229390 to 06329393 has its CatchHandler @ 06229a64 */
                    /* try { // try from 062293a4 to 063293a7 has its CatchHandler @ 06229a20 */
  if ((DAT_06dc71a9 & 1) == 0) {
                    /* try { // try from 062293b8 to 063293bf has its CatchHandler @ 06229a1c */
    FUN_02d965b8(Method_OVRGLTFLoader_<LoadGLBCoroutine>b__26_0__);
    FUN_02d965b8(Method_OVRGrabbable_Awake__);
                    /* try { // try from 062293d0 to 063293d7 has its CatchHandler @ 06229a50 */
    FUN_02d965b8(Method_OVRGrabber_<Awake>b__23_0__);
    FUN_02d965b8(Method_OVRHand_OnSceneChanged__);
    FUN_02d965b8(Method_OVRHandTrackingWideMotionModeSample_OnFusionToggleChanged__);
    FUN_02d965b8(Method_OVRLocatable_ScheduleUpdateTransforms__);
    FUN_02d965b8(Method_OVRLocatable_UpdateSceneAnchorTransforms__);
    FUN_02d965b8(Method_OVRManager_OnPermissionGranted__);
    FUN_02d965b8(Method_OVRMicrogesturesSample_<Start>b__19_0__);
                    /* try { // try from 06229424 to 0632942f has its CatchHandler @ 06229a78 */
    FUN_02d965b8(Method_OVRMicrogesturesSample_<Start>b__19_1__);
    FUN_02d965b8(Method_OVRNativeList_ToNativeList<Guid>__);
    FUN_02d965b8(
                Method_OVRNativeList_WithSuggestedCapacityFrom<KeyValuePair<OVRAnchor,_Transform>>__
                );
    FUN_02d965b8(Method_OVRNativeList_WithSuggestedCapacityFrom<OVRAnchor>__);
                    /* try { // try from 06229458 to 0632947b has its CatchHandler @ 06229950 */
    FUN_02d965b8(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
    FUN_02d965b8(PTR_DAT_069fb990);
    DAT_06dc71a9 = 1;
  }
  lVar12 = *(long *)puVar3;
  local_70 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  lStack_78 = 0;
  local_80 = (long *)0x0;
                    /* try { // try from 0622948c to 063294b7 has its CatchHandler @ 06229958 */
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar12 = *(long *)puVar3;
  }
  lVar12 = **(long **)(lVar12 + 0xb8);
  if (lVar12 != 0) {
    iVar11 = *(int *)(lVar12 + 0x18);
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (0 < iVar11) {
      FUN_0550afb4(*(undefined8 *)(lVar12 + 0x10),0,iVar11,0);
    }
    puVar9 = Method_OVRNativeList_WithSuggestedCapacityFrom<OVRAnchor>__;
    puVar8 = Method_OVRNativeList_ToNativeList<Guid>__;
    puVar7 = Method_OVRLocatable_ScheduleUpdateTransforms__;
    puVar6 = Method_OVRHandTrackingWideMotionModeSample_OnFusionToggleChanged__;
    puVar5 = Method_OVRGrabber_<Awake>b__23_0__;
    puVar4 = Method_OVRGrabbable_Awake__;
    puVar2 = PTR_DAT_069fb990;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_04e93a24(&local_d0,*(long *)(param_1 + 0x28),
                   *(undefined8 *)Method_OVRGLTFLoader_<LoadGLBCoroutine>b__26_0__);
      local_70 = local_b0;
      puStack_88 = puStack_c8;
      local_90 = local_d0;
      lStack_78 = lStack_b8;
      local_80 = plStack_c0;
      local_d0 = 0;
      puStack_c8 = &local_90;
LAB_06229534:
      uVar13 = FUN_05232904(&local_90,*(undefined8 *)puVar6);
      lVar12 = lStack_78;
      plVar10 = local_80;
      if ((uVar13 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar13 = FUN_06350670(plVar10,0,0);
        if ((uVar13 & 1) != 0) {
          lVar12 = *(long *)puVar3;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar12 = *(long *)puVar3;
          }
          lVar12 = **(long **)(lVar12 + 0xb8);
          if (lVar12 != 0) {
            lVar14 = *(long *)(lVar12 + 0x10);
            lVar16 = *(long *)puVar8;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar14 != 0) {
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                puVar15 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                *puVar15 = plVar10;
                LeanTween__value(puVar15,plVar10);
              }
              else {
                FUN_040101ec(lVar12,plVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_06229534;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        iVar11 = *(int *)(lVar12 + 0x10);
        if (iVar11 == 1) {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar13 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
          if ((uVar13 & 1) != 0) {
            FUN_062297c8(param_1,plVar10,lVar12);
            goto LAB_06229534;
          }
          iVar11 = *(int *)(lVar12 + 0x10);
        }
        if ((iVar11 == 3) && (iVar11 = FUN_0634adf0(0), *(int *)(lVar12 + 0x14) < iVar11)) {
          *(undefined4 *)(lVar12 + 0x10) = 0;
        }
        goto LAB_06229534;
      }
      FUN_05232a24(&local_90,*(undefined8 *)puVar5);
      lVar12 = *(long *)puVar3;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar12 = *(long *)puVar3;
      }
      if (**(long **)(lVar12 + 0xb8) != 0) {
        FUN_04010c90(&local_a8,**(long **)(lVar12 + 0xb8),*(undefined8 *)puVar9);
        local_d0 = 0;
        puStack_c8 = &local_a8;
        while( true ) {
          uVar13 = FUN_05156804(&local_a8,*(undefined8 *)puVar7);
          if ((uVar13 & 1) == 0) {
            FUN_05156800(&local_a8,*(undefined8 *)Method_OVRHand_OnSceneChanged__);
            return;
          }
          if (*(long *)(param_1 + 0x28) == 0) break;
          FUN_04e94b0c(*(long *)(param_1 + 0x28),local_98,*(undefined8 *)puVar4);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


