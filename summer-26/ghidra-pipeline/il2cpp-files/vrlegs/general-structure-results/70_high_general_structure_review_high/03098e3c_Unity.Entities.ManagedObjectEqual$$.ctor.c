/*
FUNCTION_NAME: Unity.Entities.ManagedObjectEqual$$.ctor
ENTRY_POINT: 03098e3c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_1;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Unity_Entities_ManagedObjectEqual___ctor(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int in_w8;
  long unaff_x24;
  
  if (in_w8 != 0) {
    lVar1 = thunk_FUN_01a89e68(*(undefined8 *)
                                Unity_Entities_Content_RuntimeContentManager_LoadObjectsAsync_00001913_PostfixBurstDelegate_var
                              );
    FUN_03099d98(lVar1,0);
    plVar2 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc9150,1);
    lVar3 = FUN_036cbb80();
    if (plVar2 == (long *)0x0)
    goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,0);
    }
    if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar2[4] = lVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2 + 4,lVar3);
    FUN_036a0e90();
    uVar5 = FUN_036cbb80();
    if (lVar1 == 0) goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
    *(undefined8 *)(lVar1 + 0x10) = uVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar5 = FUN_036a0e54();
    uVar6 = thunk_FUN_01a89e68(*(undefined8 *)Unity_Entities_RuntimeApplication_UpdatePreFrame_var);
    FUN_021de1ac(uVar6,lVar1,
                 *(undefined8 *)
                  Unity_Entities_Content_RuntimeContentManager_LoadObjectAsync_00001903_PostfixBurstDelegate_var
                 ,0);
    uVar5 = FUN_01f6d39c(uVar5,uVar6,
                         *(undefined8 *)Unity_Entities_RuntimeApplication_UpdatePostFrame_var);
    uVar5 = FUN_01f70920(uVar5,*(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var);
    if (*(long *)(unaff_x24 + 0x10) == 0)
    goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
    FUN_036a3534(*(long *)(unaff_x24 + 0x10),uVar5,0);
  }
  if (*(long *)(unaff_x24 + 0x28) != 0) {
    FUN_01b5f01c();
    return;
  }
Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


