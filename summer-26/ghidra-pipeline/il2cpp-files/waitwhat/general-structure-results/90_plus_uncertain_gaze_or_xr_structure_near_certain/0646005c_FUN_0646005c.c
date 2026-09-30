/*
FUNCTION_NAME: FUN_0646005c
ENTRY_POINT: 0646005c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


void FUN_0646005c(long param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  
  if ((DAT_07556a5f & 1) == 0) {
    FUN_03188a78(System_Action<DebugManager_UIMode,_bool>_TypeInfo);
    FUN_03188a78(PTR_DAT_07104310);
    FUN_03188a78(PTR_DAT_07104318);
    FUN_03188a78(PTR_DAT_07104320);
    FUN_03188a78(System_Action<NetworkRunner,_SimulationMessagePtr>_TypeInfo);
    FUN_03188a78(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
    FUN_03188a78(PTR_DAT_070f53d8);
    FUN_03188a78(PTR_DAT_070c2638);
    FUN_03188a78(PTR_DAT_070fecf0);
    FUN_03188a78(PTR_DAT_070c28d8);
    FUN_03188a78(
                System_Action<OVRSpatialAnchor_OperationResult,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                );
    FUN_03188a78(PTR_DAT_07104328);
    FUN_03188a78(PTR_DAT_07104330);
    FUN_03188a78(PTR_DAT_070f3ab8);
    FUN_03188a78(PTR_DAT_07136fc0);
    FUN_03188a78(PTR_DAT_07104338);
    FUN_03188a78(PTR_DAT_070f3590);
    FUN_03188a78(PTR_DAT_070f3598);
    DAT_07556a5f = 1;
  }
  puVar3 = System_Action<NetworkRunner,_SimulationMessagePtr>_TypeInfo;
  if (param_2 == 0) {
    thunk_FUN_031edd38(PTR_DAT_070c2888);
    uVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar12 = thunk_FUN_031edd38(PTR_DAT_070f35a0);
    FUN_05897880(uVar16,uVar12,0);
    uVar12 = thunk_FUN_031edd38(
                               System_Action<XRDeviceSimulator_SimulatedHandExpression,_InputAction_CallbackContext>_TypeInfo
                               );
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar16,uVar12);
  }
  FUN_05827588(param_2,*(undefined8 *)PTR_DAT_07136fc0,*(undefined1 *)(param_1 + 0x10),0);
  lVar9 = *(long *)puVar3;
  lVar15 = *(long *)(param_1 + 0x20);
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar9 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_070c1958;
  if (lVar15 == **(long **)(lVar9 + 0xb8)) {
    uVar16 = FUN_064605d8();
    lVar9 = *(long *)(puVar3 + 0xe0);
    uVar12 = *(undefined8 *)PTR_DAT_07104320;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar9);
    }
    uVar12 = FUN_0593e698(uVar12,0);
    FUN_0583d194(param_2,*(undefined8 *)
                          System_Action<OVRSpatialAnchor_OperationResult,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                 ,uVar16,uVar12,0);
    plVar14 = (long *)FUN_064606b0();
    uVar16 = *(undefined8 *)PTR_DAT_07104310;
LAB_0646029c:
    uVar16 = FUN_0593e698(uVar16,0);
    puVar13 = (undefined8 *)PTR_DAT_070f3590;
  }
  else {
    plVar14 = *(long **)(param_1 + 0x20);
    if (plVar14 == (long *)0x0) {
      uVar16 = *(undefined8 *)PTR_DAT_07104320;
      if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar16 = FUN_0593e698(uVar16,0);
      FUN_0583d194(param_2,*(undefined8 *)
                            System_Action<OVRSpatialAnchor_OperationResult,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                   ,0,uVar16,0);
      uVar16 = FUN_0593e698(*(undefined8 *)PTR_DAT_07104310,0);
      plVar14 = (long *)0x0;
      uVar12 = *(undefined8 *)PTR_DAT_070f3590;
      goto LAB_06460334;
    }
    bVar2 = *(byte *)(*(long *)System_Action<DebugManager_UIMode,_bool>_TypeInfo + 0x130);
    if ((bVar2 <= *(byte *)(*plVar14 + 0x130)) &&
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)System_Action<DebugManager_UIMode,_bool>_TypeInfo)) {
      lVar9 = plVar14[3];
      uVar16 = *(undefined8 *)PTR_DAT_07104320;
      if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar16 = FUN_0593e698(uVar16,0);
      FUN_0583d194(param_2,*(undefined8 *)
                            System_Action<OVRSpatialAnchor_OperationResult,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                   ,lVar9,uVar16,0);
      plVar14 = (long *)plVar14[2];
      uVar16 = *(undefined8 *)PTR_DAT_07104310;
      goto LAB_0646029c;
    }
    uVar16 = *(undefined8 *)PTR_DAT_07104318;
    if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar16 = FUN_0593e698(uVar16,0);
    puVar13 = (undefined8 *)PTR_DAT_07104338;
  }
  uVar12 = *puVar13;
LAB_06460334:
  FUN_0583d194(param_2,uVar12,plVar14,uVar16,0);
  puVar6 = PTR_DAT_070f3ab8;
  puVar5 = PTR_DAT_070c28d8;
  puVar4 = PTR_DAT_070c2638;
  plVar14 = *(long **)(param_1 + 0x18);
  if (plVar14 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0));
    uVar18 = (ulong)uVar8;
    FUN_05832c2c(param_2,*(undefined8 *)puVar6,uVar18,0);
    lVar9 = FUN_03188b1c(*(undefined8 *)puVar5,uVar18);
    plVar14 = (long *)FUN_03188b1c(*(undefined8 *)puVar4,uVar18);
    puVar4 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
    if (0 < (int)uVar8) {
      uVar17 = 0;
      do {
        plVar10 = *(long **)(param_1 + 0x18);
        if (plVar10 == (long *)0x0) goto LAB_06460578;
        plVar10 = (long *)(**(code **)(*plVar10 + 0x2e8))
                                    (plVar10,uVar17 & 0xffffffff,*(undefined8 *)(*plVar10 + 0x2f0));
        if (plVar10 == (long *)0x0) goto LAB_06460578;
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_03189058();
        }
        if (lVar9 == 0) goto LAB_06460578;
        if (*(uint *)(lVar9 + 0x18) <= uVar17) {
LAB_06460580:
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        *(long *)(lVar9 + 0x20 + uVar17 * 8) = plVar10[2];
        if (plVar14 == (long *)0x0) goto LAB_06460578;
        lVar15 = plVar10[3];
        if ((lVar15 != 0) &&
           (lVar11 = thunk_FUN_031c3cac(lVar15,*(undefined8 *)(*plVar14 + 0x40)), lVar11 == 0)) {
          uVar16 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
          FUN_03188b9c(uVar16,0);
        }
        if (*(uint *)(plVar14 + 3) <= uVar17) goto LAB_06460580;
        uVar1 = uVar17 + 1;
        plVar14[uVar17 + 4] = lVar15;
        uVar17 = uVar1;
      } while (uVar18 != uVar1);
    }
    puVar7 = PTR_DAT_07104330;
    puVar6 = PTR_DAT_07104328;
    puVar5 = PTR_DAT_070f53d8;
    puVar4 = PTR_DAT_070f3598;
    uVar16 = *(undefined8 *)PTR_DAT_070fecf0;
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar16 = FUN_0593e698(uVar16,0);
    FUN_0583d194(param_2,*(undefined8 *)puVar6,lVar9,uVar16,0);
    uVar16 = FUN_0593e698(*(undefined8 *)puVar5,0);
    FUN_0583d194(param_2,*(undefined8 *)puVar7,plVar14,uVar16,0);
    FUN_05832c2c(param_2,*(undefined8 *)puVar4,*(undefined4 *)(param_1 + 0x40),0);
    return;
  }
LAB_06460578:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


