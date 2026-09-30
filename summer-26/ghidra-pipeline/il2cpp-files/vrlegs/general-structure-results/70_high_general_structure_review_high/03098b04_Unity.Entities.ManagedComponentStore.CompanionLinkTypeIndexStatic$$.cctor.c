/*
FUNCTION_NAME: Unity.Entities.ManagedComponentStore.CompanionLinkTypeIndexStatic$$.cctor
ENTRY_POINT: 03098b04
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;ray_or_cast_sink_hits_2;telemetry_or_network_hits_10;frame_or_lifecycle_behavior
*/


long Unity_Entities_ManagedComponentStore_CompanionLinkTypeIndexStatic___cctor(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  long unaff_x24;
  long lVar12;
  long in_stack_00000000;
  
                    /* catch() { ... } // from try @ 03098594 with catch @ 03098b04 */
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0xf88));
  FUN_01ab69ac(UnityEngine_UIElements_PanelRaycaster_var);
                    /* try { // try from 03098b1c to 03198b1f has its CatchHandler @ 03098b30 */
  FUN_01ab69ac(Unity_Entities_RuntimeApplication_UpdatePreFrame_var);
  FUN_01ab69ac(PTR_DAT_03cc46b8);
                    /* catch() { ... } // from try @ 03098b1c with catch @ 03098b30 */
  FUN_01ab69ac(PTR_DAT_03cc46c0);
                    /* try { // try from 03098b40 to 03198ba7 has its CatchHandler @ 03098bbc */
  FUN_01ab69ac(PTR_DAT_03cebed0);
  FUN_01ab69ac(PTR_DAT_03cbeda8);
  FUN_01ab69ac(PTR_DAT_03cc89c8);
  FUN_01ab69ac(UnityEngine_InputSystem_LightSensor_var);
  FUN_01ab69ac(
              Unity_Entities_Content_RuntimeContentManager_GetObjectHandle_0000191D_PostfixBurstDelegate_var
              );
  FUN_01ab69ac(PTR_DAT_03cbf640);
  FUN_01ab69ac(PTR_DAT_03cc1828);
  FUN_01ab69ac(PTR_DAT_03cc9150);
  FUN_01ab69ac(
              Unity_Entities_Content_RuntimeContentManager_GetObjectLoadingStatus_0000191B_PostfixBurstDelegate_var
              );
  FUN_01ab69ac(
              Unity_Entities_Content_RuntimeContentManager_LoadObjectAsync_00001903_PostfixBurstDelegate_var
              );
  FUN_01ab69ac(
              Unity_Entities_Content_RuntimeContentManager_LoadObjectsAsync_00001913_PostfixBurstDelegate_var
              );
  FUN_01ab69ac(
              Unity_Entities_Content_RuntimeContentManager_ProcessQueuedCommands_00001909_PostfixBurstDelegate_var
              );
  *(undefined1 *)(unaff_x19 + 0x53c) = 1;
  if (((unaff_x21 != 0) && (FUN_02215a88(), in_stack_00000000 != 0)) &&
     (lVar3 = FUN_036cbbbc(in_stack_00000000,0),
     puVar1 = 
     Unity_Entities_Content_RuntimeContentManager_GetObjectLoadingStatus_0000191B_PostfixBurstDelegate_var
     , lVar3 != 0)) {
    uVar4 = FUN_036d3824(lVar3,0);
    uVar5 = FUN_025be440(uVar4,0);
    if ((uVar5 & 1) != 0) {
      in_stack_00000000 = CONCAT44(in_stack_00000000._4_4_,unaff_w22);
      uVar4 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8);
      uVar4 = FUN_025b4d3c(*(undefined8 *)
                            Unity_Entities_Content_RuntimeContentManager_ProcessQueuedCommands_00001909_PostfixBurstDelegate_var
                           ,uVar4,0);
      FUN_036d38d4(lVar3,uVar4,0);
    }
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
    FUN_03099c98(lVar6,0);
    uVar4 = FUN_036cf428(lVar3,0);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x10) = uVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (((unaff_x24 != 0) && (*(long *)(unaff_x24 + 0x58) != 0)) &&
         (FUN_02215a88(*(long *)(unaff_x24 + 0x58),unaff_w22), in_stack_00000000 != 0)) {
        lVar12 = *(long *)(in_stack_00000000 + 0x18);
        if ((lVar12 != 0) && (0 < (int)*(ulong *)(lVar12 + 0x18))) {
          uVar5 = 0;
          uVar11 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
          do {
            if (uVar11 <= uVar5) goto LAB_0309900c;
            FUN_02215a88();
            if (in_stack_00000000 == 0)
            goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
            lVar7 = FUN_036cbb80(in_stack_00000000,0);
            FUN_02215a88();
            if ((in_stack_00000000 == 0) || (uVar4 = FUN_036cbb80(in_stack_00000000,0), lVar7 == 0))
            goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
            FUN_036dd718(lVar7,uVar4,0,0);
            uVar11 = (ulong)*(uint *)(lVar12 + 0x18);
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < (long)(int)*(uint *)(lVar12 + 0x18));
        }
        if (*(int *)(in_stack_00000000 + 0x40) == -1) {
          return lVar6;
        }
        if (((unaff_x20 != 0) && (FUN_02215a88(), in_stack_00000000 != 0)) &&
           (*(long *)(in_stack_00000000 + 0x10) != 0)) {
          iVar2 = FUN_036a2ca8(*(long *)(in_stack_00000000 + 0x10),0);
          if ((iVar2 == 0) && (*(int *)(in_stack_00000000 + 0x44) == -1)) {
            lVar12 = FUN_01f7e2fc(lVar3,*(undefined8 *)PTR_DAT_03cc46b8);
            if (lVar12 == 0)
            goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
            FUN_036a0b88(lVar12,*(undefined8 *)(in_stack_00000000 + 0x10),0);
            lVar3 = FUN_01f7e2fc(lVar3,*(undefined8 *)PTR_DAT_03cc46c0);
            if (lVar3 == 0)
            goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
            thunk_FUN_03692878(lVar3,*(undefined8 *)(in_stack_00000000 + 0x18),0);
            FUN_03692bfc(lVar3,0,0);
          }
          else {
            lVar3 = FUN_01f7e2fc(lVar3,*(undefined8 *)PTR_DAT_03cebed0);
            if (*(int *)(in_stack_00000000 + 0x44) != -1) {
              FUN_02241190();
              *(undefined8 *)(lVar6 + 0x18) = 0;
            }
            if (lVar3 == 0)
            goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
            FUN_036a0f10(lVar3,*(undefined8 *)(in_stack_00000000 + 0x10),0);
            thunk_FUN_03692878(lVar3,*(undefined8 *)(in_stack_00000000 + 0x18),0);
            FUN_03692bfc(lVar3,0,0);
            if (*(char *)(in_stack_00000000 + 0x20) != '\0') {
              lVar12 = thunk_FUN_01a89e68(*(undefined8 *)
                                           Unity_Entities_Content_RuntimeContentManager_LoadObjectsAsync_00001913_PostfixBurstDelegate_var
                                         );
              FUN_03099d98(lVar12,0);
              plVar8 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc9150,1);
              lVar7 = FUN_036cbb80(lVar3,0);
              if (plVar8 == (long *)0x0)
              goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
                uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar4,0);
              }
              if ((int)plVar8[3] == 0) {
LAB_0309900c:
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              plVar8[4] = lVar7;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 4,lVar7);
              FUN_036a0e90(lVar3,plVar8,0);
              uVar4 = FUN_036cbb80(lVar3,0);
              if (lVar12 == 0)
              goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
              *(undefined8 *)(lVar12 + 0x10) = uVar4;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              uVar4 = FUN_036a0e54(lVar3,0);
              uVar10 = thunk_FUN_01a89e68(*(undefined8 *)
                                           Unity_Entities_RuntimeApplication_UpdatePreFrame_var);
              FUN_021de1ac(uVar10,lVar12,
                           *(undefined8 *)
                            Unity_Entities_Content_RuntimeContentManager_LoadObjectAsync_00001903_PostfixBurstDelegate_var
                           ,0);
              uVar4 = FUN_01f6d39c(uVar4,uVar10,
                                   *(undefined8 *)
                                    Unity_Entities_RuntimeApplication_UpdatePostFrame_var);
              uVar4 = FUN_01f70920(uVar4,*(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var);
              if (*(long *)(in_stack_00000000 + 0x10) == 0)
              goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
              FUN_036a3534(*(long *)(in_stack_00000000 + 0x10),uVar4,0);
            }
          }
          if (*(long *)(in_stack_00000000 + 0x28) != 0) {
            FUN_01b5f01c(*(long *)(in_stack_00000000 + 0x28),lVar3,*(undefined8 *)PTR_DAT_03cc89c8);
            return lVar6;
          }
        }
      }
    }
  }
Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


