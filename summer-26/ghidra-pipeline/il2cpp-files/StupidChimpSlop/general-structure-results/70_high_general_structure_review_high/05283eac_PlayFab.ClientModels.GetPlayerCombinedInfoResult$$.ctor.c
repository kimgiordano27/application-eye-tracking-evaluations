/*
FUNCTION_NAME: PlayFab.ClientModels.GetPlayerCombinedInfoResult$$.ctor
ENTRY_POINT: 05283eac
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 PlayFab_ClientModels_GetPlayerCombinedInfoResult___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 unaff_w19;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar14;
  undefined1 in_stack_00000008;
  
  FUN_02d4dc40();
  *(undefined1 *)(unaff_x23 + 0x4fb) = 1;
  puVar1 = PTR_DAT_066462a0;
  if (unaff_x22 == (long *)0x0) {
    plVar4 = (long *)FUN_0526b460();
    plVar3 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,2);
    puVar1 = PTR_DAT_066462a0;
    lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&stack0x0000000c);
    if (plVar3 != (long *)0x0) {
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
      goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
      if ((int)plVar3[3] != 0) {
        plVar3[4] = lVar5;
        thunk_FUN_02dc1ef0(plVar3 + 4,lVar5);
        in_stack_00000008 = unaff_w19;
        lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(puVar1 + 0x18),&stack0x00000008);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
        goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
          plVar3[5] = lVar5;
          thunk_FUN_02dc1ef0(plVar3 + 5,lVar5);
          if (plVar4 != (long *)0x0) {
            lVar5 = *plVar4;
            uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
            uVar14 = *(undefined8 *)System_Collections_Generic_List<ClaimsIdentity>_TypeInfo;
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0664b728) {
                  puVar7 = (undefined8 *)(lVar5 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto PlayFab_ClientModels_StatisticValue___ctor;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_02d87540(plVar4,*(long *)PTR_DAT_0664b728,1);
PlayFab_ClientModels_StatisticValue___ctor:
            (*(code *)*puVar7)(plVar4,3,uVar14,plVar3,puVar7[1]);
            FUN_05eddc40();
            uVar14 = FUN_05277c0c();
            return uVar14;
          }
          goto LAB_052846c8;
        }
      }
      goto PlayFab_ClientModels_UserAccountInfo___ctor;
    }
    goto LAB_052846c8;
  }
  if (*unaff_x22 != *(long *)(PTR_DAT_066462a0 + 0x48)) {
    plVar3 = (long *)FUN_0526b460();
    plVar4 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
    uVar14 = *(undefined8 *)System_Collections_Generic_List<Column>_TypeInfo;
    lVar5 = (**(code **)(*unaff_x22 + 0x168))();
    if (plVar4 == (long *)0x0) goto LAB_052846c8;
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((int)plVar4[3] == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar4[4] = lVar5;
    thunk_FUN_02dc1ef0(plVar4 + 4,lVar5);
    lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(puVar1 + 0x48),&stack0x0000000c);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar4[5] = lVar5;
    thunk_FUN_02dc1ef0(plVar4 + 5,lVar5);
    in_stack_00000008 = unaff_w19;
    lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(puVar1 + 0x18),&stack0x00000008);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if (*(uint *)(plVar4 + 3) < 3) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar4[6] = lVar5;
    thunk_FUN_02dc1ef0(plVar4 + 6,lVar5);
    if (plVar3 == (long *)0x0) goto LAB_052846c8;
    lVar5 = *plVar3;
    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0664b728) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto PlayFab_ClientModels_StartPurchaseRequest___ctor;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d87540(plVar3,*(long *)PTR_DAT_0664b728,1);
PlayFab_ClientModels_StartPurchaseRequest___ctor:
    pcVar11 = (code *)*puVar7;
    uVar10 = puVar7[1];
    goto LAB_05284670;
  }
  puVar8 = (undefined4 *)thunk_FUN_02d8a780();
  lVar5 = FUN_05230ce8(*puVar8,0);
  puVar2 = PTR_DAT_066462d0;
  if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
  }
  uVar12 = FUN_05ee2f7c(0,lVar5,0);
  if ((uVar12 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar12 = FUN_05ee6de4(lVar5,0);
    if ((uVar12 & 1) == 0) goto PlayFab_ClientModels_PlayerProfileModel___ctor;
    if (lVar5 == 0) goto LAB_052846c8;
    lVar5 = FUN_0319d120(lVar5,*(undefined8 *)System_Collections_Generic_List<Claim>_TypeInfo);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)puVar2);
    }
    uVar12 = FUN_05ee2f7c(0,lVar5,0);
    if ((uVar12 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar12 = FUN_05ee6de4(lVar5,0);
      if ((uVar12 & 1) != 0) {
        plVar4 = (long *)FUN_0526b460();
        plVar3 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
        if (plVar3 == (long *)0x0) goto LAB_052846c8;
        lVar6 = thunk_FUN_02d8a53c();
        if (lVar6 != 0) {
          if ((int)plVar3[3] != 0) {
            plVar3[4] = (long)unaff_x22;
            thunk_FUN_02dc1ef0();
            lVar6 = thunk_FUN_02d8a270(*(undefined8 *)(puVar1 + 0x48),&stack0x0000000c);
            if ((lVar6 != 0) &&
               (lVar9 = thunk_FUN_02d8a53c(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar9 == 0))
            goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
            if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
              plVar3[5] = lVar6;
              thunk_FUN_02dc1ef0(plVar3 + 5,lVar6);
              in_stack_00000008 = unaff_w19;
              lVar6 = thunk_FUN_02d8a270(*(undefined8 *)(puVar1 + 0x18),&stack0x00000008);
              if ((lVar6 != 0) &&
                 (lVar9 = thunk_FUN_02d8a53c(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar9 == 0))
              goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
              if (2 < *(uint *)(plVar3 + 3)) {
                plVar3[6] = lVar6;
                thunk_FUN_02dc1ef0(plVar3 + 6,lVar6);
                if (plVar4 != (long *)0x0) {
                  lVar6 = *plVar4;
                  uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  uVar14 = *(undefined8 *)System_Collections_Generic_List<Collider>_TypeInfo;
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0664b728) {
                        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                        goto LAB_052846a0;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_02d87540(plVar4,*(long *)PTR_DAT_0664b728,1);
LAB_052846a0:
                  (*(code *)*puVar7)(plVar4,3,uVar14,plVar3,puVar7[1]);
                  if (lVar5 != 0) {
                    return *(undefined8 *)(lVar5 + 0x40);
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
    plVar3 = (long *)FUN_0526b460();
    plVar4 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
    if (plVar4 == (long *)0x0) goto LAB_052846c8;
    lVar5 = thunk_FUN_02d8a53c();
    if (lVar5 == 0) goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((int)plVar4[3] == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar4[4] = (long)unaff_x22;
    thunk_FUN_02dc1ef0();
    lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(puVar1 + 0x48),&stack0x0000000c);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar4[5] = lVar5;
    thunk_FUN_02dc1ef0(plVar4 + 5,lVar5);
    in_stack_00000008 = unaff_w19;
    lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(puVar1 + 0x18),&stack0x00000008);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if (*(uint *)(plVar4 + 3) < 3) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar4[6] = lVar5;
    thunk_FUN_02dc1ef0(plVar4 + 6,lVar5);
    if (plVar3 == (long *)0x0) goto LAB_052846c8;
    lVar6 = *plVar3;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    lVar5 = *(long *)PTR_DAT_0664b728;
    uVar14 = *(undefined8 *)System_Collections_Generic_List<Color>_TypeInfo;
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar5)
        goto PlayFab_ClientModels_UpdateCharacterDataRequest___ctor;
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
  }
  else {
PlayFab_ClientModels_PlayerProfileModel___ctor:
    plVar3 = (long *)FUN_0526b460();
    plVar4 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
    if (plVar4 == (long *)0x0) {
LAB_052846c8:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar5 = thunk_FUN_02d8a53c();
    if (lVar5 == 0) {
PlayFab_ClientModels_UserAndroidDeviceInfo___ctor:
      uVar14 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar14,0);
    }
    if ((int)plVar4[3] == 0) {
PlayFab_ClientModels_UserAccountInfo___ctor:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    plVar4[4] = (long)unaff_x22;
    thunk_FUN_02dc1ef0();
    lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(puVar1 + 0x48),&stack0x0000000c);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar4[5] = lVar5;
    thunk_FUN_02dc1ef0(plVar4 + 5,lVar5);
    in_stack_00000008 = unaff_w19;
    lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(puVar1 + 0x18),&stack0x00000008);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if (*(uint *)(plVar4 + 3) < 3) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar4[6] = lVar5;
    thunk_FUN_02dc1ef0(plVar4 + 6,lVar5);
    if (plVar3 == (long *)0x0) goto LAB_052846c8;
    lVar6 = *plVar3;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    lVar5 = *(long *)PTR_DAT_0664b728;
    uVar14 = *(undefined8 *)System_Collections_Generic_List<ClimbInteractable>_TypeInfo;
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar5)
        goto PlayFab_ClientModels_UpdateCharacterDataRequest___ctor;
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
  }
  puVar7 = (undefined8 *)FUN_02d87540(plVar3,lVar5,1);
  goto PlayFab_ClientModels_UpdateCharacterStatisticsRequest___ctor;
PlayFab_ClientModels_UpdateCharacterDataRequest___ctor:
  puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
PlayFab_ClientModels_UpdateCharacterStatisticsRequest___ctor:
  pcVar11 = (code *)*puVar7;
  uVar10 = puVar7[1];
LAB_05284670:
  (*pcVar11)(plVar3,2,uVar14,plVar4,uVar10);
  return 0;
}


