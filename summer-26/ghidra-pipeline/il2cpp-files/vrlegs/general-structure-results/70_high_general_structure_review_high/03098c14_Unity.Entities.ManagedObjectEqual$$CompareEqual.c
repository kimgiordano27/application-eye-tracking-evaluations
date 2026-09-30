/*
FUNCTION_NAME: Unity.Entities.ManagedObjectEqual$$CompareEqual
ENTRY_POINT: 03098c14
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


long Unity_Entities_ManagedObjectEqual__CompareEqual(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w22;
  long unaff_x24;
  long lVar11;
  long in_stack_00000000;
  
  uVar2 = FUN_036d3824();
  uVar3 = FUN_025be440(uVar2,0);
  if ((uVar3 & 1) != 0) {
    in_stack_00000000 = CONCAT44(in_stack_00000000._4_4_,unaff_w22);
    uVar2 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8);
    uVar2 = FUN_025b4d3c(*(undefined8 *)
                          Unity_Entities_Content_RuntimeContentManager_ProcessQueuedCommands_00001909_PostfixBurstDelegate_var
                         ,uVar2,0);
    FUN_036d38d4(param_1,uVar2,0);
  }
  lVar4 = thunk_FUN_01a89e68(*unaff_x19);
  FUN_03099c98(lVar4,0);
  uVar2 = FUN_036cf428(param_1,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = uVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (((unaff_x24 != 0) && (*(long *)(unaff_x24 + 0x58) != 0)) &&
       (FUN_02215a88(*(long *)(unaff_x24 + 0x58),unaff_w22), in_stack_00000000 != 0)) {
      lVar11 = *(long *)(in_stack_00000000 + 0x18);
      if ((lVar11 != 0) && (0 < (int)*(ulong *)(lVar11 + 0x18))) {
        uVar3 = 0;
        uVar10 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
        do {
          if (uVar10 <= uVar3) goto LAB_0309900c;
          FUN_02215a88();
          if (in_stack_00000000 == 0)
          goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
          lVar5 = FUN_036cbb80(in_stack_00000000,0);
          FUN_02215a88();
          if ((in_stack_00000000 == 0) || (uVar2 = FUN_036cbb80(in_stack_00000000,0), lVar5 == 0))
          goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
          FUN_036dd718(lVar5,uVar2,0,0);
          uVar10 = (ulong)*(uint *)(lVar11 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar11 + 0x18));
      }
      if (*(int *)(in_stack_00000000 + 0x40) == -1) {
        return lVar4;
      }
      if (((unaff_x20 != 0) && (FUN_02215a88(), in_stack_00000000 != 0)) &&
         (*(long *)(in_stack_00000000 + 0x10) != 0)) {
        iVar1 = FUN_036a2ca8(*(long *)(in_stack_00000000 + 0x10),0);
        if ((iVar1 == 0) && (*(int *)(in_stack_00000000 + 0x44) == -1)) {
          lVar11 = FUN_01f7e2fc(param_1,*(undefined8 *)PTR_DAT_03cc46b8);
          if (lVar11 == 0) goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
          FUN_036a0b88(lVar11,*(undefined8 *)(in_stack_00000000 + 0x10),0);
          lVar11 = FUN_01f7e2fc(param_1,*(undefined8 *)PTR_DAT_03cc46c0);
          if (lVar11 == 0) goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
          thunk_FUN_03692878(lVar11,*(undefined8 *)(in_stack_00000000 + 0x18),0);
          FUN_03692bfc(lVar11,0,0);
        }
        else {
          lVar11 = FUN_01f7e2fc(param_1,*(undefined8 *)PTR_DAT_03cebed0);
          if (*(int *)(in_stack_00000000 + 0x44) != -1) {
            FUN_02241190();
            *(undefined8 *)(lVar4 + 0x18) = 0;
          }
          if (lVar11 == 0) goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
          FUN_036a0f10(lVar11,*(undefined8 *)(in_stack_00000000 + 0x10),0);
          thunk_FUN_03692878(lVar11,*(undefined8 *)(in_stack_00000000 + 0x18),0);
          FUN_03692bfc(lVar11,0,0);
          if (*(char *)(in_stack_00000000 + 0x20) != '\0') {
            lVar5 = thunk_FUN_01a89e68(*(undefined8 *)
                                        Unity_Entities_Content_RuntimeContentManager_LoadObjectsAsync_00001913_PostfixBurstDelegate_var
                                      );
            FUN_03099d98(lVar5,0);
            plVar6 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc9150,1);
            lVar7 = FUN_036cbb80(lVar11,0);
            if (plVar6 == (long *)0x0)
            goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
              uVar2 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
              FUN_01ab6b14(uVar2,0);
            }
            if ((int)plVar6[3] == 0) {
LAB_0309900c:
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            plVar6[4] = lVar7;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 4,lVar7);
            FUN_036a0e90(lVar11,plVar6,0);
            uVar2 = FUN_036cbb80(lVar11,0);
            if (lVar5 == 0)
            goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
            *(undefined8 *)(lVar5 + 0x10) = uVar2;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            uVar2 = FUN_036a0e54(lVar11,0);
            uVar9 = thunk_FUN_01a89e68(*(undefined8 *)
                                        Unity_Entities_RuntimeApplication_UpdatePreFrame_var);
            FUN_021de1ac(uVar9,lVar5,
                         *(undefined8 *)
                          Unity_Entities_Content_RuntimeContentManager_LoadObjectAsync_00001903_PostfixBurstDelegate_var
                         ,0);
            uVar2 = FUN_01f6d39c(uVar2,uVar9,
                                 *(undefined8 *)
                                  Unity_Entities_RuntimeApplication_UpdatePostFrame_var);
            uVar2 = FUN_01f70920(uVar2,*(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var);
            if (*(long *)(in_stack_00000000 + 0x10) == 0)
            goto Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate;
            FUN_036a3534(*(long *)(in_stack_00000000 + 0x10),uVar2,0);
          }
        }
        if (*(long *)(in_stack_00000000 + 0x28) != 0) {
          FUN_01b5f01c(*(long *)(in_stack_00000000 + 0x28),lVar11,*(undefined8 *)PTR_DAT_03cc89c8);
          return lVar4;
        }
      }
    }
  }
Unity_Entities_RateUtils_FixedRateCatchUpManager__ShouldGroupUpdate:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


