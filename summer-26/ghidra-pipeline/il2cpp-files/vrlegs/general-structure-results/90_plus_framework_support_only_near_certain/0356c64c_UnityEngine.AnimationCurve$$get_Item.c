/*
FUNCTION_NAME: UnityEngine.AnimationCurve$$get_Item
ENTRY_POINT: 0356c64c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


bool UnityEngine_AnimationCurve__get_Item(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  uint unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int iVar12;
  int iVar13;
  ulong in_stack_00000008;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  FUN_02793a34();
  puVar4 = OVRPlugin_OVRP_1_83_0_TypeInfo;
  puVar3 = PTR_DAT_03cc8e90;
  puVar2 = PTR_DAT_03cc45a8;
  if (unaff_x22 != 0) {
    if (0 < *(int *)(unaff_x22 + 0x10)) {
      iVar12 = 0;
      do {
        uVar5 = FUN_025b8a2c();
        if (*(long *)(unaff_x23 + 200) == 0) goto LAB_0356cb20;
        uVar5 = uVar5 & 0xffff;
        uStack0000000000000018 = uVar5;
        uVar7 = FUN_0219c130(*(long *)(unaff_x23 + 200),&stack0x00000018,
                             *(undefined8 *)PTR_DAT_03cc4750);
        if (((uVar7 & 1) == 0) &&
           ((((unaff_w20 & 1) == 0 || (*(int *)(unaff_x23 + 0x48) != 1)) ||
            (uVar7 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemSet(), (uVar7 & 1) == 0))))
        {
          if ((in_stack_00000008 & 0x100000000) != 0) {
            lVar8 = *(long *)puVar4;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar8 = *(long *)puVar4;
            }
            lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x40);
            if (lVar11 == 0) {
              uVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
              FUN_021e44d8(uVar10,*(undefined8 *)PTR_DAT_03cc8bb0);
              lVar8 = *(long *)puVar4;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar8 = *(long *)puVar4;
              }
              puVar9 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x40);
              *puVar9 = uVar10;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar9,uVar10);
            }
            else {
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar11 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
                if (lVar11 == 0) goto LAB_0356cb20;
              }
              FUN_021e4d64(lVar11,*(undefined8 *)PTR_DAT_03ccbbf8);
            }
            lVar8 = *(long *)puVar4;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar8 = *(long *)puVar4;
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x40);
            uVar6 = FUN_036d3364();
            if (lVar8 == 0) goto LAB_0356cb20;
            uStack0000000000000018 = uVar6;
            FUN_021e5f08(lVar8,&stack0x00000018,*(undefined8 *)puVar3);
            lVar8 = *(long *)(unaff_x23 + 0x138);
            if ((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x18))) {
              iVar13 = 0;
              do {
                FUN_02215a88(lVar8,iVar13,&stack0x00000018,*(undefined8 *)puVar2);
                uVar10 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar7 = FUN_036cee6c(uVar10,0,0);
                if ((uVar7 & 1) == 0) break;
                if (*(long *)(unaff_x23 + 0x138) == 0) goto LAB_0356cb20;
                FUN_02215a88(*(long *)(unaff_x23 + 0x138),iVar13,&stack0x00000018,
                             *(undefined8 *)puVar2);
                lVar8 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                if (lVar8 == 0) goto LAB_0356cb20;
                uVar6 = FUN_036d3364(lVar8,0);
                lVar11 = *(long *)puVar4;
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar11);
                  lVar11 = *(long *)puVar4;
                }
                lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x40);
                if (lVar11 == 0) goto LAB_0356cb20;
                uStack0000000000000018 = uVar6;
                uVar7 = FUN_021e5f08(lVar11,&stack0x00000018,*(undefined8 *)puVar3);
                if (((uVar7 & 1) != 0) &&
                   (uVar7 = FUN_0356c12c(lVar8,uVar5,1,unaff_w20 & 1), (uVar7 & 1) != 0))
                goto LAB_0356caac;
                lVar8 = *(long *)(unaff_x23 + 0x138);
                if (lVar8 == 0) goto LAB_0356cb20;
                iVar13 = iVar13 + 1;
              } while (iVar13 < *(int *)(lVar8 + 0x18));
            }
            lVar8 = FUN_03597770(0);
            if (lVar8 != 0) {
              lVar8 = FUN_03597770(0);
              if (lVar8 == 0) goto LAB_0356cb20;
              if (0 < *(int *)(lVar8 + 0x18)) {
                lVar8 = FUN_03597770(0);
                if (lVar8 == 0) goto LAB_0356cb20;
                iVar13 = 0;
                while (iVar13 < *(int *)(lVar8 + 0x18)) {
                  lVar8 = FUN_03597770(0);
                  if (lVar8 == 0) goto LAB_0356cb20;
                  FUN_02215a88(lVar8,iVar13,&stack0x00000018,*(undefined8 *)puVar2);
                  uVar10 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar7 = FUN_036cee6c(uVar10,0,0);
                  if ((uVar7 & 1) == 0) break;
                  lVar8 = FUN_03597770(0);
                  if (lVar8 == 0) goto LAB_0356cb20;
                  FUN_02215a88(lVar8,iVar13,&stack0x00000018,*(undefined8 *)puVar2);
                  lVar8 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                  if (lVar8 == 0) goto LAB_0356cb20;
                  uVar6 = FUN_036d3364(lVar8,0);
                  lVar11 = *(long *)puVar4;
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(lVar11);
                    lVar11 = *(long *)puVar4;
                  }
                  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x40);
                  if (lVar11 == 0) goto LAB_0356cb20;
                  uStack0000000000000018 = uVar6;
                  uVar7 = FUN_021e5f08(lVar11,&stack0x00000018,*(undefined8 *)puVar3);
                  if (((uVar7 & 1) != 0) &&
                     (uVar7 = FUN_0356c12c(lVar8,uVar5,1,unaff_w20 & 1), (uVar7 & 1) != 0))
                  goto LAB_0356caac;
                  iVar13 = iVar13 + 1;
                  lVar8 = FUN_03597770(0);
                  if (lVar8 == 0) goto LAB_0356cb20;
                }
              }
            }
            uVar10 = FUN_03597650(0);
            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
            }
            uVar7 = FUN_036cee6c(uVar10,0,0);
            if ((uVar7 & 1) != 0) {
              lVar8 = FUN_03597650(0);
              if (lVar8 == 0) goto LAB_0356cb20;
              uVar6 = FUN_036d3364(lVar8,0);
              lVar11 = *(long *)puVar4;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01a58e78(lVar11);
                lVar11 = *(long *)puVar4;
              }
              lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x40);
              if (lVar11 == 0) goto LAB_0356cb20;
              uStack0000000000000018 = uVar6;
              uVar7 = FUN_021e5f08(lVar11,&stack0x00000018,*(undefined8 *)puVar3);
              if (((uVar7 & 1) != 0) &&
                 (uVar7 = FUN_0356c12c(lVar8,uVar5,1,unaff_w20 & 1), (uVar7 & 1) != 0))
              goto LAB_0356caac;
            }
          }
          if (*(long *)(unaff_x23 + 0x208) == 0) goto LAB_0356cb20;
          uStack0000000000000018 = uVar5;
          FUN_01b5f01c(*(long *)(unaff_x23 + 0x208),&stack0x00000018,
                       *(undefined8 *)
                        Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                      );
        }
LAB_0356caac:
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(unaff_x22 + 0x10));
    }
    lVar8 = *(long *)(unaff_x23 + 0x208);
    if (lVar8 != 0) {
      bVar1 = *(int *)(lVar8 + 0x18) < 1;
      if (!bVar1) {
        uVar10 = FUN_022195a8(lVar8,*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ElevateQuadraticToCubicBezier_00000A5D_PostfixBurstDelegate_var
                             );
        *unaff_x21 = uVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21,uVar10);
      }
      return bVar1;
    }
  }
LAB_0356cb20:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


