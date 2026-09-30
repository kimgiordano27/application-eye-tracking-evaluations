/*
FUNCTION_NAME: FUN_0356c4f4
ENTRY_POINT: 0356c4f4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 138
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_6
*/


undefined8 FUN_0356c4f4(long param_1,long param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  undefined8 local_70;
  uint local_68;
  undefined4 uStack_64;
  
  if ((DAT_0412dfc3 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc4750);
    FUN_01ab69ac(PTR_DAT_03cc8e90);
    FUN_01ab69ac(PTR_DAT_03ccbbf8);
    FUN_01ab69ac(PTR_DAT_03cc8bb0);
    FUN_01ab69ac(PTR_DAT_03cc8ba8);
    FUN_01ab69ac(
                Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ElevateQuadraticToCubicBezier_00000A5D_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cc45a0);
    FUN_01ab69ac(PTR_DAT_03cbf7d8);
    FUN_01ab69ac(PTR_DAT_03cc45a8);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_OVRP_1_83_0_TypeInfo);
    DAT_0412dfc3 = 1;
  }
  local_70 = 0;
  *param_3 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,0);
  if ((*(long *)(param_1 + 200) == 0) && (FUN_03568878(param_1), *(long *)(param_1 + 200) == 0)) {
    return 0;
  }
  lVar10 = *(long *)(param_1 + 0x208);
  if (lVar10 != 0) {
    lVar9 = *(long *)
             UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
    ;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    uVar6 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
    if ((uVar6 & 1) == 0) {
      *(undefined4 *)(lVar10 + 0x18) = 0;
    }
    else {
      iVar11 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      if (0 < iVar11) {
        FUN_02793a34(*(undefined8 *)(lVar10 + 0x10),0,iVar11,0);
      }
    }
    puVar3 = OVRPlugin_OVRP_1_83_0_TypeInfo;
    puVar2 = PTR_DAT_03cc8e90;
    puVar1 = PTR_DAT_03cc45a8;
    if (param_2 != 0) {
      if (0 < *(int *)(param_2 + 0x10)) {
        iVar11 = 0;
        do {
          uVar4 = FUN_025b8a2c(param_2,iVar11,0);
          if (*(long *)(param_1 + 200) == 0) goto LAB_0356cb20;
          uVar4 = uVar4 & 0xffff;
          local_68 = uVar4;
          uVar6 = FUN_0219c130(*(long *)(param_1 + 200),&local_68,*(undefined8 *)PTR_DAT_03cc4750);
          if (((uVar6 & 1) == 0) &&
             ((((param_5 & 1) == 0 || (*(int *)(param_1 + 0x48) != 1)) ||
              (uVar6 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemSet
                                 (param_1,uVar4,&local_70), (uVar6 & 1) == 0)))) {
            if ((param_4 & 1) != 0) {
              lVar10 = *(long *)puVar3;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar10 = *(long *)puVar3;
              }
              lVar9 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x40);
              if (lVar9 == 0) {
                uVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
                FUN_021e44d8(uVar8,*(undefined8 *)PTR_DAT_03cc8bb0);
                lVar10 = *(long *)puVar3;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar10 = *(long *)puVar3;
                }
                puVar7 = (undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x40);
                *puVar7 = uVar8;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar7,uVar8);
              }
              else {
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar9 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
                  if (lVar9 == 0) goto LAB_0356cb20;
                }
                FUN_021e4d64(lVar9,*(undefined8 *)PTR_DAT_03ccbbf8);
              }
              lVar10 = *(long *)puVar3;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar10 = *(long *)puVar3;
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x40);
              uVar5 = FUN_036d3364(param_1,0);
              if (lVar10 == 0) goto LAB_0356cb20;
              local_68 = uVar5;
              FUN_021e5f08(lVar10,&local_68,*(undefined8 *)puVar2);
              lVar10 = *(long *)(param_1 + 0x138);
              if ((lVar10 != 0) && (0 < *(int *)(lVar10 + 0x18))) {
                iVar12 = 0;
                do {
                  FUN_02215a88(lVar10,iVar12,&local_68,*(undefined8 *)puVar1);
                  uVar8 = CONCAT44(uStack_64,local_68);
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar6 = FUN_036cee6c(uVar8,0,0);
                  if ((uVar6 & 1) == 0) break;
                  if (*(long *)(param_1 + 0x138) == 0) goto LAB_0356cb20;
                  FUN_02215a88(*(long *)(param_1 + 0x138),iVar12,&local_68,*(undefined8 *)puVar1);
                  lVar10 = CONCAT44(uStack_64,local_68);
                  if (lVar10 == 0) goto LAB_0356cb20;
                  uVar5 = FUN_036d3364(lVar10,0);
                  lVar9 = *(long *)puVar3;
                  if (*(int *)(lVar9 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(lVar9);
                    lVar9 = *(long *)puVar3;
                  }
                  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x40);
                  if (lVar9 == 0) goto LAB_0356cb20;
                  local_68 = uVar5;
                  uVar6 = FUN_021e5f08(lVar9,&local_68,*(undefined8 *)puVar2);
                  if (((uVar6 & 1) != 0) &&
                     (uVar6 = FUN_0356c12c(lVar10,uVar4,1,param_5 & 1), (uVar6 & 1) != 0))
                  goto LAB_0356caac;
                  lVar10 = *(long *)(param_1 + 0x138);
                  if (lVar10 == 0) goto LAB_0356cb20;
                  iVar12 = iVar12 + 1;
                } while (iVar12 < *(int *)(lVar10 + 0x18));
              }
              lVar10 = FUN_03597770(0);
              if (lVar10 != 0) {
                lVar10 = FUN_03597770(0);
                if (lVar10 == 0) goto LAB_0356cb20;
                if (0 < *(int *)(lVar10 + 0x18)) {
                  lVar10 = FUN_03597770(0);
                  if (lVar10 == 0) goto LAB_0356cb20;
                  iVar12 = 0;
                  while (iVar12 < *(int *)(lVar10 + 0x18)) {
                    lVar10 = FUN_03597770(0);
                    if (lVar10 == 0) goto LAB_0356cb20;
                    FUN_02215a88(lVar10,iVar12,&local_68,*(undefined8 *)puVar1);
                    uVar8 = CONCAT44(uStack_64,local_68);
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar6 = FUN_036cee6c(uVar8,0,0);
                    if ((uVar6 & 1) == 0) break;
                    lVar10 = FUN_03597770(0);
                    if (lVar10 == 0) goto LAB_0356cb20;
                    FUN_02215a88(lVar10,iVar12,&local_68,*(undefined8 *)puVar1);
                    lVar10 = CONCAT44(uStack_64,local_68);
                    if (lVar10 == 0) goto LAB_0356cb20;
                    uVar5 = FUN_036d3364(lVar10,0);
                    lVar9 = *(long *)puVar3;
                    if (*(int *)(lVar9 + 0xe0) == 0) {
                      thunk_FUN_01a58e78(lVar9);
                      lVar9 = *(long *)puVar3;
                    }
                    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x40);
                    if (lVar9 == 0) goto LAB_0356cb20;
                    local_68 = uVar5;
                    uVar6 = FUN_021e5f08(lVar9,&local_68,*(undefined8 *)puVar2);
                    if (((uVar6 & 1) != 0) &&
                       (uVar6 = FUN_0356c12c(lVar10,uVar4,1,param_5 & 1), (uVar6 & 1) != 0))
                    goto LAB_0356caac;
                    iVar12 = iVar12 + 1;
                    lVar10 = FUN_03597770(0);
                    if (lVar10 == 0) goto LAB_0356cb20;
                  }
                }
              }
              uVar8 = FUN_03597650(0);
              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
              }
              uVar6 = FUN_036cee6c(uVar8,0,0);
              if ((uVar6 & 1) != 0) {
                lVar10 = FUN_03597650(0);
                if (lVar10 == 0) goto LAB_0356cb20;
                uVar5 = FUN_036d3364(lVar10,0);
                lVar9 = *(long *)puVar3;
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar9);
                  lVar9 = *(long *)puVar3;
                }
                lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x40);
                if (lVar9 == 0) goto LAB_0356cb20;
                local_68 = uVar5;
                uVar6 = FUN_021e5f08(lVar9,&local_68,*(undefined8 *)puVar2);
                if (((uVar6 & 1) != 0) &&
                   (uVar6 = FUN_0356c12c(lVar10,uVar4,1,param_5 & 1), (uVar6 & 1) != 0))
                goto LAB_0356caac;
              }
            }
            if (*(long *)(param_1 + 0x208) == 0) goto LAB_0356cb20;
            local_68 = uVar4;
            FUN_01b5f01c(*(long *)(param_1 + 0x208),&local_68,
                         *(undefined8 *)
                          Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                        );
          }
LAB_0356caac:
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(param_2 + 0x10));
      }
      lVar10 = *(long *)(param_1 + 0x208);
      if (lVar10 != 0) {
        if (0 < *(int *)(lVar10 + 0x18)) {
          uVar8 = FUN_022195a8(lVar10,*(undefined8 *)
                                       UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ElevateQuadraticToCubicBezier_00000A5D_PostfixBurstDelegate_var
                              );
          *param_3 = uVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,uVar8);
          return 0;
        }
        return 1;
      }
    }
  }
LAB_0356cb20:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


