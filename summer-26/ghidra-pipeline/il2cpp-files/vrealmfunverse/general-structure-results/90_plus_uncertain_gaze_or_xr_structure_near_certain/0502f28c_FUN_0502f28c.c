/*
FUNCTION_NAME: FUN_0502f28c
ENTRY_POINT: 0502f28c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0502f28c(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
                    /* try { // try from 0502f298 to 0512f29f has its CatchHandler @ 0502f454 */
  if ((DAT_066cc22e & 1) == 0) {
    FUN_02b3c81c(System_Collections_Generic_List<TrackSlot>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631eb88);
    FUN_02b3c81c(System_Predicate<MetaXRAcousticMaterialMapping_Pair>_TypeInfo);
    FUN_02b3c81c(System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo);
    FUN_02b3c81c(System_Predicate<OVRPlugin_BoneCapsule>_TypeInfo);
    FUN_02b3c81c(System_Predicate<PageScroll_Page>_TypeInfo);
    FUN_02b3c81c(System_Predicate<PoolManager_Pool>_TypeInfo);
    FUN_02b3c81c(System_Predicate<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo);
    FUN_02b3c81c(System_Predicate<ProbeVolumeScratchBufferPool_ScratchBufferPool>_TypeInfo);
    DAT_066cc22e = 1;
  }
  plVar3 = *(long **)(param_2 + 0x18);
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if ((plVar3 != (long *)0x0) &&
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x1a8))
                                 (plVar3,*(undefined8 *)
                                          System_Predicate<ProbeVolumeScratchBufferPool_ScratchBufferPool>_TypeInfo
                                  ,*(undefined8 *)(*plVar3 + 0x1b0)), plVar3 != (long *)0x0)) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x188))(plVar3,param_3,*(undefined8 *)(*plVar3 + 400));
    puVar1 = System_Collections_Generic_List<TrackSlot>_TypeInfo;
    if (plVar3 == (long *)0x0) goto LAB_0502f654;
    plVar4 = (long *)(**(code **)(*plVar3 + 0x1a8))
                               (plVar3,*(undefined8 *)
                                        System_Predicate<OVRPlugin_BoneCapsule>_TypeInfo,
                                *(undefined8 *)(*plVar3 + 0x1b0));
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar1);
    }
    uVar5 = FUN_050ecfcc(plVar4,0,0);
    if ((uVar5 & 1) == 0) {
      uVar2 = 1;
    }
    else {
      if (plVar4 == (long *)0x0) goto LAB_0502f654;
      uVar6 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      uVar2 = thunk_FUN_04c08854(uVar6,*(undefined8 *)
                                        System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                                 ,0);
      uVar2 = uVar2 ^ 1;
    }
    plVar4 = (long *)(**(code **)(*plVar3 + 0x1a8))
                               (plVar3,*(undefined8 *)System_Predicate<PageScroll_Page>_TypeInfo,
                                *(undefined8 *)(*plVar3 + 0x1b0));
    auVar14 = NEON_fmov(0x3f800000,4);
    uStack_68 = auVar14._8_8_;
    local_70 = auVar14._0_8_;
    if (plVar4 == (long *)0x0) goto LAB_0502f654;
    plVar7 = (long *)(**(code **)(*plVar4 + 0x1a8))
                               (plVar4,*(undefined8 *)
                                        System_Predicate<MetaXRAcousticMaterialMapping_Pair>_TypeInfo
                                ,*(undefined8 *)(*plVar4 + 0x1b0));
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar1);
    }
    uVar5 = FUN_050ecfcc(plVar7,0,0);
    if ((uVar5 & 1) != 0) {
      if (plVar7 == (long *)0x0) goto LAB_0502f654;
      plVar8 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,0,*(undefined8 *)(*plVar7 + 400));
      if (plVar8 == (long *)0x0) goto LAB_0502f654;
      uVar10 = (**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
      plVar8 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,1,*(undefined8 *)(*plVar7 + 400));
      if (plVar8 == (long *)0x0) goto LAB_0502f654;
      uVar11 = (**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
      plVar8 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,2,*(undefined8 *)(*plVar7 + 400));
      if (plVar8 == (long *)0x0) goto LAB_0502f654;
      uVar12 = (**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
      plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,3,*(undefined8 *)(*plVar7 + 400));
      if (plVar7 == (long *)0x0) goto LAB_0502f654;
      uVar13 = (**(code **)(*plVar7 + 0x388))(plVar7,*(undefined8 *)(*plVar7 + 0x390));
      local_70 = CONCAT44(uVar11,uVar10);
      uStack_68 = CONCAT44(uVar13,uVar12);
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))
                               (plVar4,*(undefined8 *)
                                        System_Predicate<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo
                                ,*(undefined8 *)(*plVar4 + 0x1b0));
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar1);
    }
    uVar5 = FUN_050ecfcc(plVar4,0,0);
    if ((uVar5 & 1) == 0) {
      plVar4 = (long *)(**(code **)(*plVar3 + 0x1a8))
                                 (plVar3,*(undefined8 *)System_Predicate<PoolManager_Pool>_TypeInfo,
                                  *(undefined8 *)(*plVar3 + 0x1b0));
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)puVar1);
      }
      uVar5 = FUN_050ecfcc(plVar4,0,0);
      if ((uVar5 & 1) == 0) goto LAB_0502f604;
      if (plVar4 == (long *)0x0) goto LAB_0502f654;
      lVar9 = *plVar4;
    }
    else {
      if (plVar4 == (long *)0x0) goto LAB_0502f654;
      lVar9 = *plVar4;
    }
    plVar3 = (long *)(**(code **)(lVar9 + 0x1a8))
                               (plVar4,*(undefined8 *)PTR_DAT_0631eb88,
                                *(undefined8 *)(lVar9 + 0x1b0));
    if (plVar3 != (long *)0x0) {
      uVar10 = (**(code **)(*plVar3 + 0x368))(plVar3,*(undefined8 *)(*plVar3 + 0x370));
      uStack_98 = CONCAT44(uStack_98._4_4_,uVar10);
LAB_0502f604:
      lVar9 = 0x48;
      if ((uVar2 & 1) == 0) {
        lVar9 = 0x50;
      }
      local_a0 = *(undefined8 *)(param_2 + lVar9);
      thunk_FUN_02bb0e9c(&local_a0);
      param_1[1] = uStack_98;
      *param_1 = local_a0;
      param_1[3] = uStack_88;
      param_1[2] = uStack_90;
      param_1[5] = uStack_78;
      param_1[4] = local_80;
      param_1[7] = uStack_68;
      param_1[6] = local_70;
      return;
    }
  }
LAB_0502f654:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


