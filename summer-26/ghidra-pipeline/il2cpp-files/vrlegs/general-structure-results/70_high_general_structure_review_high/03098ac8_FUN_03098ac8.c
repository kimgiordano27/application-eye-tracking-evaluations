/*
FUNCTION_NAME: FUN_03098ac8
ENTRY_POINT: 03098ac8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;ray_or_cast_sink_hits_2;telemetry_or_network_hits_12;frame_or_lifecycle_behavior
*/


long FUN_03098ac8(long param_1,undefined4 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long local_70;
  int local_64;
  
                    /* catch() { ... } // from try @ 03098538 with catch @ 03098af8
                       try { // try from 03098af8 to 03198b1b has its CatchHandler @ 03098368 */
                    /* catch() { ... } // from try @ 030989bc with catch @ 03098afc */
  if ((DAT_0412b53c & 1) == 0) {
                    /* catch() { ... } // from try @ 030989c8 with catch @ 03098b00 */
    FUN_01ab69ac(Unity_Entities_RuntimeApplication_UpdatePostFrame_var);
    FUN_01ab69ac(UnityEngine_UIElements_PanelRaycaster_var);
    FUN_01ab69ac(Unity_Entities_RuntimeApplication_UpdatePreFrame_var);
    FUN_01ab69ac(PTR_DAT_03cc46b8);
    FUN_01ab69ac(PTR_DAT_03cc46c0);
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
    DAT_0412b53c = 1;
  }
  puVar1 = PTR_DAT_03cbf640;
  if (((param_3 != 0) &&
      (FUN_02215a88(param_3,param_2,&local_70,*(undefined8 *)PTR_DAT_03cbf640), local_70 != 0)) &&
     (lVar4 = FUN_036cbbbc(local_70,0),
     puVar2 = 
     Unity_Entities_Content_RuntimeContentManager_GetObjectLoadingStatus_0000191B_PostfixBurstDelegate_var
     , lVar4 != 0)) {
    uVar5 = FUN_036d3824(lVar4,0);
    uVar6 = FUN_025be440(uVar5,0);
    if ((uVar6 & 1) != 0) {
      local_70 = CONCAT44(local_70._4_4_,param_2);
      uVar5 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&local_70);
      uVar5 = FUN_025b4d3c(*(undefined8 *)
                            Unity_Entities_Content_RuntimeContentManager_ProcessQueuedCommands_00001909_PostfixBurstDelegate_var
                           ,uVar5,0);
      FUN_036d38d4(lVar4,uVar5,0);
    }
    lVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
    FUN_03099c98(lVar7,0);
    uVar5 = FUN_036cf428(lVar4,0);
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (((param_1 != 0) && (*(long *)(param_1 + 0x58) != 0)) &&
         (FUN_02215a88(*(long *)(param_1 + 0x58),param_2,&local_70,
                       *(undefined8 *)UnityEngine_InputSystem_LightSensor_var), lVar9 = local_70,
         local_70 != 0)) {
        lVar14 = *(long *)(local_70 + 0x18);
        if ((lVar14 != 0) && (0 < (int)*(ulong *)(lVar14 + 0x18))) {
          uVar6 = 0;
          uVar13 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
          do {
            if (uVar13 <= uVar6) goto LAB_0309900c;
            FUN_02215a88(param_3,*(undefined4 *)(lVar14 + 0x20 + uVar6 * 4),&local_70,
                         *(undefined8 *)puVar1);
            if (local_70 == 0)
            goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
            lVar8 = FUN_036cbb80(local_70,0);
            FUN_02215a88(param_3,param_2,&local_70,*(undefined8 *)puVar1);
            if ((local_70 == 0) || (uVar5 = FUN_036cbb80(local_70,0), lVar8 == 0))
            goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
            FUN_036dd718(lVar8,uVar5,0,0);
            uVar13 = (ulong)*(uint *)(lVar14 + 0x18);
            uVar6 = uVar6 + 1;
          } while ((long)uVar6 < (long)(int)*(uint *)(lVar14 + 0x18));
        }
        if (*(int *)(lVar9 + 0x40) == -1) {
          return lVar7;
        }
        if (((param_4 != 0) &&
            (FUN_02215a88(param_4,*(int *)(lVar9 + 0x40),&local_70,
                          *(undefined8 *)
                           Unity_Entities_Content_RuntimeContentManager_GetObjectHandle_0000191D_PostfixBurstDelegate_var
                         ), lVar14 = local_70, local_70 != 0)) && (*(long *)(local_70 + 0x10) != 0))
        {
          iVar3 = FUN_036a2ca8(*(long *)(local_70 + 0x10),0);
          if ((iVar3 == 0) && (*(int *)(lVar9 + 0x44) == -1)) {
            lVar9 = FUN_01f7e2fc(lVar4,*(undefined8 *)PTR_DAT_03cc46b8);
            if (lVar9 == 0)
            goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
            FUN_036a0b88(lVar9,*(undefined8 *)(lVar14 + 0x10),0);
            lVar4 = FUN_01f7e2fc(lVar4,*(undefined8 *)PTR_DAT_03cc46c0);
            if (lVar4 == 0)
            goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
            thunk_FUN_03692878(lVar4,*(undefined8 *)(lVar14 + 0x18),0);
            FUN_03692bfc(lVar4,0,0);
          }
          else {
            lVar4 = FUN_01f7e2fc(lVar4,*(undefined8 *)PTR_DAT_03cebed0);
            if (*(int *)(lVar9 + 0x44) != -1) {
              local_70 = 0;
              local_64 = *(int *)(lVar9 + 0x44);
              FUN_02241190(&local_70,&local_64,*(undefined8 *)PTR_DAT_03cc1828);
              *(long *)(lVar7 + 0x18) = local_70;
            }
            if (lVar4 == 0)
            goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
            FUN_036a0f10(lVar4,*(undefined8 *)(lVar14 + 0x10),0);
            thunk_FUN_03692878(lVar4,*(undefined8 *)(lVar14 + 0x18),0);
            FUN_03692bfc(lVar4,0,0);
            if (*(char *)(lVar14 + 0x20) != '\0') {
              lVar9 = thunk_FUN_01a89e68(*(undefined8 *)
                                          Unity_Entities_Content_RuntimeContentManager_LoadObjectsAsync_00001913_PostfixBurstDelegate_var
                                        );
              FUN_03099d98(lVar9,0);
              plVar10 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc9150,1);
              lVar8 = FUN_036cbb80(lVar4,0);
              if (plVar10 == (long *)0x0)
              goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
              if ((lVar8 != 0) &&
                 (lVar11 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
              {
                uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar5,0);
              }
              if ((int)plVar10[3] == 0) {
LAB_0309900c:
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              plVar10[4] = lVar8;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10 + 4,lVar8);
              FUN_036a0e90(lVar4,plVar10,0);
              uVar5 = FUN_036cbb80(lVar4,0);
              if (lVar9 == 0)
              goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
              *(undefined8 *)(lVar9 + 0x10) = uVar5;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              uVar5 = FUN_036a0e54(lVar4,0);
              uVar12 = thunk_FUN_01a89e68(*(undefined8 *)
                                           Unity_Entities_RuntimeApplication_UpdatePreFrame_var);
              FUN_021de1ac(uVar12,lVar9,
                           *(undefined8 *)
                            Unity_Entities_Content_RuntimeContentManager_LoadObjectAsync_00001903_PostfixBurstDelegate_var
                           ,0);
              uVar5 = FUN_01f6d39c(uVar5,uVar12,
                                   *(undefined8 *)
                                    Unity_Entities_RuntimeApplication_UpdatePostFrame_var);
              uVar5 = FUN_01f70920(uVar5,*(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var);
              if (*(long *)(lVar14 + 0x10) == 0)
              goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
              FUN_036a3534(*(long *)(lVar14 + 0x10),uVar5,0);
            }
          }
          if (*(long *)(lVar14 + 0x28) != 0) {
            FUN_01b5f01c(*(long *)(lVar14 + 0x28),lVar4,*(undefined8 *)PTR_DAT_03cc89c8);
            return lVar7;
          }
        }
      }
    }
  }
Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


