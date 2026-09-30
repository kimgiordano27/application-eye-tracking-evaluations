/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeContainerSupportsDeferredConvertListToArray$$.ctor
ENTRY_POINT: 0356b4b4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4
Unity_Collections_LowLevel_Unsafe_NativeContainerSupportsDeferredConvertListToArray___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  int iVar13;
  ulong unaff_x22;
  long unaff_x23;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  FUN_01ab69ac(PTR_DAT_03cc4750);
  FUN_01ab69ac(PTR_DAT_03cc8e90);
  FUN_01ab69ac(PTR_DAT_03ccbbf8);
  FUN_01ab69ac(PTR_DAT_03cc8bb0);
  FUN_01ab69ac(PTR_DAT_03cc8ba8);
  FUN_01ab69ac(PTR_DAT_03cc45a0);
  FUN_01ab69ac(PTR_DAT_03cc45a8);
  FUN_01ab69ac(PTR_DAT_03cbdf88);
  FUN_01ab69ac(OVRPlugin_OVRP_1_83_0_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0xfc0) = 1;
  lVar8 = *(long *)(unaff_x21 + 200);
  if (lVar8 == 0) {
    FUN_03568878();
    lVar8 = *(long *)(unaff_x21 + 200);
    if (lVar8 == 0) {
      return 0;
    }
  }
  uVar1 = unaff_w20 & 0xffff;
  uStack0000000000000018 = uVar1;
  uVar9 = FUN_0219c130(lVar8,&stack0x00000018,*(undefined8 *)PTR_DAT_03cc4750);
  if (((uVar9 & 1) != 0) ||
     ((((unaff_w19 & 1) != 0 && (*(int *)(unaff_x21 + 0x48) == 1)) &&
      (uVar9 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemSet(), (uVar9 & 1) != 0)))) {
    return 1;
  }
  puVar5 = OVRPlugin_OVRP_1_83_0_TypeInfo;
  if ((unaff_x22 & 1) != 0) {
    lVar8 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *(long *)puVar5;
    }
    lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x40);
    if (lVar12 == 0) {
      uVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
      FUN_021e44d8(uVar11,*(undefined8 *)PTR_DAT_03cc8bb0);
      lVar8 = *(long *)puVar5;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar8 = *(long *)puVar5;
      }
      puVar10 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x40);
      *puVar10 = uVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,uVar11);
    }
    else {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar12 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
        if (lVar12 == 0) goto LAB_0356b980;
      }
      FUN_021e4d64(lVar12,*(undefined8 *)PTR_DAT_03ccbbf8);
    }
    lVar8 = *(long *)puVar5;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *(long *)puVar5;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x40);
    uVar6 = FUN_036d3364();
    puVar4 = PTR_DAT_03cc8e90;
    if (lVar8 == 0) goto LAB_0356b980;
    uStack0000000000000018 = uVar6;
    FUN_021e5f08(lVar8,&stack0x00000018,*(undefined8 *)PTR_DAT_03cc8e90);
    puVar3 = PTR_DAT_03cc45a8;
    puVar2 = PTR_DAT_03cbdf88;
    lVar8 = *(long *)(unaff_x21 + 0x138);
    if ((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x18))) {
      iVar13 = 0;
      do {
        FUN_02215a88(lVar8,iVar13,&stack0x00000018,*(undefined8 *)puVar3);
        uVar11 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar9 = FUN_036cee6c(uVar11,0,0);
        if ((uVar9 & 1) == 0) break;
        if (*(long *)(unaff_x21 + 0x138) == 0) goto LAB_0356b980;
        FUN_02215a88(*(long *)(unaff_x21 + 0x138),iVar13,&stack0x00000018,*(undefined8 *)puVar3);
        lVar8 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
        if (lVar8 == 0) goto LAB_0356b980;
        uVar6 = FUN_036d3364(lVar8,0);
        lVar12 = *(long *)puVar5;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar12);
          lVar12 = *(long *)puVar5;
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x40);
        if (lVar12 == 0) goto LAB_0356b980;
        uStack0000000000000018 = uVar6;
        uVar9 = FUN_021e5f08(lVar12,&stack0x00000018,*(undefined8 *)puVar4);
        if (((uVar9 & 1) != 0) &&
           (uVar9 = FUN_0356c12c(lVar8,uVar1,1,unaff_w19 & 1), (uVar9 & 1) != 0)) {
          return 1;
        }
        lVar8 = *(long *)(unaff_x21 + 0x138);
        if (lVar8 == 0) goto LAB_0356b980;
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(lVar8 + 0x18));
    }
    lVar8 = FUN_03597770(0);
    if (lVar8 != 0) {
      lVar8 = FUN_03597770(0);
      if (lVar8 == 0) goto LAB_0356b980;
      if (0 < *(int *)(lVar8 + 0x18)) {
        lVar8 = FUN_03597770(0);
        puVar3 = PTR_DAT_03cc45a8;
        puVar2 = PTR_DAT_03cbdf88;
        if (lVar8 != 0) {
          iVar13 = 0;
          do {
            if (*(int *)(lVar8 + 0x18) <= iVar13) goto LAB_0356b8ac;
            lVar8 = FUN_03597770(0);
            if (lVar8 == 0) break;
            FUN_02215a88(lVar8,iVar13,&stack0x00000018,*(undefined8 *)puVar3);
            uVar11 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar9 = FUN_036cee6c(uVar11,0,0);
            if ((uVar9 & 1) == 0) goto LAB_0356b8ac;
            lVar8 = FUN_03597770(0);
            if (lVar8 == 0) break;
            FUN_02215a88(lVar8,iVar13,&stack0x00000018,*(undefined8 *)puVar3);
            lVar8 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
            if (lVar8 == 0) break;
            uVar6 = FUN_036d3364(lVar8,0);
            lVar12 = *(long *)puVar5;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar12);
              lVar12 = *(long *)puVar5;
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x40);
            if (lVar12 == 0) break;
            uStack0000000000000018 = uVar6;
            uVar9 = FUN_021e5f08(lVar12,&stack0x00000018,*(undefined8 *)puVar4);
            if (((uVar9 & 1) != 0) &&
               (uVar9 = FUN_0356c12c(lVar8,uVar1,1,unaff_w19 & 1), (uVar9 & 1) != 0)) {
              return 1;
            }
            iVar13 = iVar13 + 1;
            lVar8 = FUN_03597770(0);
          } while (lVar8 != 0);
        }
        goto LAB_0356b980;
      }
    }
LAB_0356b8ac:
    uVar11 = FUN_03597650(0);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
    }
    uVar9 = FUN_036cee6c(uVar11,0,0);
    if ((uVar9 & 1) != 0) {
      lVar8 = FUN_03597650(0);
      if (lVar8 != 0) {
        uVar7 = FUN_036d3364(lVar8,0);
        lVar12 = *(long *)puVar5;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar12);
          lVar12 = *(long *)puVar5;
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x40);
        if (lVar12 != 0) {
          uStack0000000000000018 = uVar7;
          uVar9 = FUN_021e5f08(lVar12,&stack0x00000018,*(undefined8 *)puVar4);
          if ((uVar9 & 1) == 0) {
            return 0;
          }
          uVar9 = FUN_0356c12c(lVar8,uVar1,1,unaff_w19 & 1);
          if ((uVar9 & 1) == 0) {
            return 0;
          }
          return 1;
        }
      }
LAB_0356b980:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  return 0;
}


