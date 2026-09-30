/*
FUNCTION_NAME: PlayFab.ClientModels.GetPlayerCustomPropertyResult$$.ctor
ENTRY_POINT: 05283ec4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_19;ray_or_cast_sink_hits_1;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 PlayFab_ClientModels_GetPlayerCustomPropertyResult___ctor(void)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  ulong uVar11;
  int *piVar12;
  undefined1 unaff_w19;
  long *unaff_x22;
  undefined8 uVar13;
  long unaff_x25;
  undefined1 in_stack_00000008;
  
  if (*unaff_x22 != *(long *)(unaff_x25 + 0x48)) {
    plVar2 = (long *)FUN_0526b460();
    plVar3 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
    uVar13 = *(undefined8 *)System_Collections_Generic_List<Column>_TypeInfo;
    lVar4 = (**(code **)(*unaff_x22 + 0x168))();
    if (plVar3 == (long *)0x0) goto LAB_052846c8;
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02d8a53c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((int)plVar3[3] == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar3[4] = lVar4;
    thunk_FUN_02dc1ef0(plVar3 + 4,lVar4);
    lVar4 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02d8a53c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar3[5] = lVar4;
    thunk_FUN_02dc1ef0(plVar3 + 5,lVar4);
    in_stack_00000008 = unaff_w19;
    lVar4 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02d8a53c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if (*(uint *)(plVar3 + 3) < 3) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar3[6] = lVar4;
    thunk_FUN_02dc1ef0(plVar3 + 6,lVar4);
    if (plVar2 == (long *)0x0) goto LAB_052846c8;
    lVar4 = *plVar2;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0664b728) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto PlayFab_ClientModels_StartPurchaseRequest___ctor;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d87540(plVar2,*(long *)PTR_DAT_0664b728,1);
PlayFab_ClientModels_StartPurchaseRequest___ctor:
    pcVar10 = (code *)*puVar6;
    uVar9 = puVar6[1];
    goto LAB_05284670;
  }
  puVar7 = (undefined4 *)thunk_FUN_02d8a780();
  lVar4 = FUN_05230ce8(*puVar7,0);
  puVar1 = PTR_DAT_066462d0;
  if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
  }
  uVar11 = FUN_05ee2f7c(0,lVar4,0);
  if ((uVar11 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar11 = FUN_05ee6de4(lVar4,0);
    if ((uVar11 & 1) == 0) goto PlayFab_ClientModels_PlayerProfileModel___ctor;
    if (lVar4 == 0) goto LAB_052846c8;
    lVar4 = FUN_0319d120(lVar4,*(undefined8 *)System_Collections_Generic_List<Claim>_TypeInfo);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)puVar1);
    }
    uVar11 = FUN_05ee2f7c(0,lVar4,0);
    if ((uVar11 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar11 = FUN_05ee6de4(lVar4,0);
      if ((uVar11 & 1) != 0) {
        plVar3 = (long *)FUN_0526b460();
        plVar2 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
        if (plVar2 == (long *)0x0) goto LAB_052846c8;
        lVar5 = thunk_FUN_02d8a53c();
        if (lVar5 != 0) {
          if ((int)plVar2[3] != 0) {
            plVar2[4] = (long)unaff_x22;
            thunk_FUN_02dc1ef0();
            lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
            if ((lVar5 != 0) &&
               (lVar8 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar8 == 0))
            goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
            if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
              plVar2[5] = lVar5;
              thunk_FUN_02dc1ef0(plVar2 + 5,lVar5);
              in_stack_00000008 = unaff_w19;
              lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
              if ((lVar5 != 0) &&
                 (lVar8 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar8 == 0))
              goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
              if (2 < *(uint *)(plVar2 + 3)) {
                plVar2[6] = lVar5;
                thunk_FUN_02dc1ef0(plVar2 + 6,lVar5);
                if (plVar3 != (long *)0x0) {
                  lVar5 = *plVar3;
                  uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  uVar13 = *(undefined8 *)System_Collections_Generic_List<Collider>_TypeInfo;
                  if (uVar11 != 0) {
                    piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0664b728) {
                        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                        goto LAB_052846a0;
                      }
                      uVar11 = uVar11 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar11 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_02d87540(plVar3,*(long *)PTR_DAT_0664b728,1);
LAB_052846a0:
                  (*(code *)*puVar6)(plVar3,3,uVar13,plVar2,puVar6[1]);
                  if (lVar4 != 0) {
                    return *(undefined8 *)(lVar4 + 0x40);
                  }
                }
                goto LAB_052846c8;
              }
            }
          }
          goto PlayFab_ClientModels_UserAccountInfo___ctor;
        }
        goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
      }
    }
    plVar2 = (long *)FUN_0526b460();
    plVar3 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
    if (plVar3 == (long *)0x0) goto LAB_052846c8;
    lVar4 = thunk_FUN_02d8a53c();
    if (lVar4 == 0) goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((int)plVar3[3] == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar3[4] = (long)unaff_x22;
    thunk_FUN_02dc1ef0();
    lVar4 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02d8a53c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar3[5] = lVar4;
    thunk_FUN_02dc1ef0(plVar3 + 5,lVar4);
    in_stack_00000008 = unaff_w19;
    lVar4 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02d8a53c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if (*(uint *)(plVar3 + 3) < 3) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar3[6] = lVar4;
    thunk_FUN_02dc1ef0(plVar3 + 6,lVar4);
    if (plVar2 == (long *)0x0) goto LAB_052846c8;
    lVar5 = *plVar2;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    lVar4 = *(long *)PTR_DAT_0664b728;
    uVar13 = *(undefined8 *)System_Collections_Generic_List<Color>_TypeInfo;
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar4)
        goto PlayFab_ClientModels_UpdateCharacterDataRequest___ctor;
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
  }
  else {
PlayFab_ClientModels_PlayerProfileModel___ctor:
    plVar2 = (long *)FUN_0526b460();
    plVar3 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
    if (plVar3 == (long *)0x0) {
LAB_052846c8:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar4 = thunk_FUN_02d8a53c();
    if (lVar4 == 0) {
PlayFab_ClientModels_UserAndroidDeviceInfo___ctor:
      uVar13 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar13,0);
    }
    if ((int)plVar3[3] == 0) {
PlayFab_ClientModels_UserAccountInfo___ctor:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    plVar3[4] = (long)unaff_x22;
    thunk_FUN_02dc1ef0();
    lVar4 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02d8a53c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar3[5] = lVar4;
    thunk_FUN_02dc1ef0(plVar3 + 5,lVar4);
    in_stack_00000008 = unaff_w19;
    lVar4 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02d8a53c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if (*(uint *)(plVar3 + 3) < 3) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar3[6] = lVar4;
    thunk_FUN_02dc1ef0(plVar3 + 6,lVar4);
    if (plVar2 == (long *)0x0) goto LAB_052846c8;
    lVar5 = *plVar2;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    lVar4 = *(long *)PTR_DAT_0664b728;
    uVar13 = *(undefined8 *)System_Collections_Generic_List<ClimbInteractable>_TypeInfo;
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar4)
        goto PlayFab_ClientModels_UpdateCharacterDataRequest___ctor;
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
  }
  puVar6 = (undefined8 *)FUN_02d87540(plVar2,lVar4,1);
  goto PlayFab_ClientModels_UpdateCharacterStatisticsRequest___ctor;
PlayFab_ClientModels_UpdateCharacterDataRequest___ctor:
  puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 1) * 0x10 + 0x138);
PlayFab_ClientModels_UpdateCharacterStatisticsRequest___ctor:
  pcVar10 = (code *)*puVar6;
  uVar9 = puVar6[1];
LAB_05284670:
  (*pcVar10)(plVar2,2,uVar13,plVar3,uVar9);
  return 0;
}


