/*
FUNCTION_NAME: Pico.Platform.RoomService$$UpdateOwner
ENTRY_POINT: 0502f2a0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Pico_Platform_RoomService__UpdateOwner(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  ulong uStack0000000000000008;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
                    /* try { // try from 0502f2b4 to 0512f2bb has its CatchHandler @ 0502f470 */
                    /* try { // try from 0502f2bc to 0512f2c7 has its CatchHandler @ 0502f468 */
  if ((DAT_066cc22e & 1) == 0) {
                    /* try { // try from 0502f2c8 to 0512f2eb has its CatchHandler @ 0502f480 */
    FUN_02b3c81c(System_Collections_Generic_List<TrackSlot>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631eb88);
    FUN_02b3c81c(System_Predicate<MetaXRAcousticMaterialMapping_Pair>_TypeInfo);
    FUN_02b3c81c(System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo);
                    /* try { // try from 0502f2f4 to 0512f2fb has its CatchHandler @ 0502f434 */
    FUN_02b3c81c(System_Predicate<OVRPlugin_BoneCapsule>_TypeInfo);
    FUN_02b3c81c(System_Predicate<PageScroll_Page>_TypeInfo);
                    /* try { // try from 0502f310 to 0512f31b has its CatchHandler @ 0502f448 */
    FUN_02b3c81c(System_Predicate<PoolManager_Pool>_TypeInfo);
    FUN_02b3c81c(System_Predicate<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo);
                    /* try { // try from 0502f324 to 0512f32b has its CatchHandler @ 0502f438 */
    FUN_02b3c81c(System_Predicate<ProbeVolumeScratchBufferPool_ScratchBufferPool>_TypeInfo);
    DAT_066cc22e = 1;
  }
  plVar4 = *(long **)(param_2 + 0x18);
  uStack0000000000000008 = 0;
                    /* try { // try from 0502f340 to 0512f34b has its CatchHandler @ 0502f464 */
                    /* try { // try from 0502f354 to 0512f35b has its CatchHandler @ 0502f440 */
  if ((plVar4 != (long *)0x0) &&
     (plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))
                                 (plVar4,*(undefined8 *)
                                          System_Predicate<ProbeVolumeScratchBufferPool_ScratchBufferPool>_TypeInfo
                                  ,*(undefined8 *)(*plVar4 + 0x1b0)), plVar4 != (long *)0x0)) {
                    /* try { // try from 0502f370 to 0512f37b has its CatchHandler @ 0502f444 */
    plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,param_3,*(undefined8 *)(*plVar4 + 400));
    puVar1 = System_Collections_Generic_List<TrackSlot>_TypeInfo;
    if (plVar4 == (long *)0x0) goto LAB_0502f654;
                    /* try { // try from 0502f384 to 0512f387 has its CatchHandler @ 0502f474 */
    plVar5 = (long *)(**(code **)(*plVar4 + 0x1a8))
                               (plVar4,*(undefined8 *)
                                        System_Predicate<OVRPlugin_BoneCapsule>_TypeInfo,
                                *(undefined8 *)(*plVar4 + 0x1b0));
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar1);
    }
    uVar6 = FUN_050ecfcc(plVar5,0,0);
    if ((uVar6 & 1) == 0) {
      uVar2 = 1;
    }
    else {
      if (plVar5 == (long *)0x0) goto LAB_0502f654;
      uVar7 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      uVar2 = thunk_FUN_04c08854(uVar7,*(undefined8 *)
                                        System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                                 ,0);
      uVar2 = uVar2 ^ 1;
    }
    plVar5 = (long *)(**(code **)(*plVar4 + 0x1a8))
                               (plVar4,*(undefined8 *)System_Predicate<PageScroll_Page>_TypeInfo,
                                *(undefined8 *)(*plVar4 + 0x1b0));
    auVar15 = NEON_fmov(0x3f800000,4);
    uStack0000000000000038 = auVar15._8_8_;
    uStack0000000000000030 = auVar15._0_8_;
    if (plVar5 == (long *)0x0) goto LAB_0502f654;
    plVar8 = (long *)(**(code **)(*plVar5 + 0x1a8))
                               (plVar5,*(undefined8 *)
                                        System_Predicate<MetaXRAcousticMaterialMapping_Pair>_TypeInfo
                                ,*(undefined8 *)(*plVar5 + 0x1b0));
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar1);
    }
    uVar6 = FUN_050ecfcc(plVar8,0,0);
    if ((uVar6 & 1) != 0) {
      if (plVar8 == (long *)0x0) goto LAB_0502f654;
      plVar9 = (long *)(**(code **)(*plVar8 + 0x188))(plVar8,0,*(undefined8 *)(*plVar8 + 400));
      if (plVar9 == (long *)0x0) goto LAB_0502f654;
      uVar11 = (**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
      plVar9 = (long *)(**(code **)(*plVar8 + 0x188))(plVar8,1,*(undefined8 *)(*plVar8 + 400));
      if (plVar9 == (long *)0x0) goto LAB_0502f654;
      uVar12 = (**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
      plVar9 = (long *)(**(code **)(*plVar8 + 0x188))(plVar8,2,*(undefined8 *)(*plVar8 + 400));
      if (plVar9 == (long *)0x0) goto LAB_0502f654;
      uVar13 = (**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
      plVar8 = (long *)(**(code **)(*plVar8 + 0x188))(plVar8,3,*(undefined8 *)(*plVar8 + 400));
      if (plVar8 == (long *)0x0) goto LAB_0502f654;
      uVar14 = (**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
      uStack0000000000000030 = CONCAT44(uVar12,uVar11);
      uStack0000000000000038 = CONCAT44(uVar14,uVar13);
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                               (plVar5,*(undefined8 *)
                                        System_Predicate<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo
                                ,*(undefined8 *)(*plVar5 + 0x1b0));
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar1);
    }
    uVar6 = FUN_050ecfcc(plVar5,0,0);
    if ((uVar6 & 1) == 0) {
      plVar5 = (long *)(**(code **)(*plVar4 + 0x1a8))
                                 (plVar4,*(undefined8 *)System_Predicate<PoolManager_Pool>_TypeInfo,
                                  *(undefined8 *)(*plVar4 + 0x1b0));
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)puVar1);
      }
      uVar6 = FUN_050ecfcc(plVar5,0,0);
      if ((uVar6 & 1) == 0) goto LAB_0502f604;
      if (plVar5 == (long *)0x0) goto LAB_0502f654;
      lVar10 = *plVar5;
    }
    else {
      if (plVar5 == (long *)0x0) goto LAB_0502f654;
      lVar10 = *plVar5;
    }
    plVar4 = (long *)(**(code **)(lVar10 + 0x1a8))
                               (plVar5,*(undefined8 *)PTR_DAT_0631eb88,
                                *(undefined8 *)(lVar10 + 0x1b0));
    if (plVar4 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x368))(plVar4,*(undefined8 *)(*plVar4 + 0x370));
      uStack0000000000000008 = (ulong)uVar3;
LAB_0502f604:
      lVar10 = 0x48;
      if ((uVar2 & 1) == 0) {
        lVar10 = 0x50;
      }
      uVar7 = *(undefined8 *)(param_2 + lVar10);
      thunk_FUN_02bb0e9c();
      param_1[1] = uStack0000000000000008;
      *param_1 = uVar7;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = uStack0000000000000038;
      param_1[6] = uStack0000000000000030;
      return;
    }
  }
LAB_0502f654:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


