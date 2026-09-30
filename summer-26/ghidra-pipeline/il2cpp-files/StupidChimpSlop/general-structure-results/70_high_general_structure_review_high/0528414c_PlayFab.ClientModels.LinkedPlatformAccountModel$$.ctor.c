/*
FUNCTION_NAME: PlayFab.ClientModels.LinkedPlatformAccountModel$$.ctor
ENTRY_POINT: 0528414c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_15;ray_or_cast_sink_hits_1;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 PlayFab_ClientModels_LinkedPlatformAccountModel___ctor(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined1 unaff_w19;
  undefined8 uVar11;
  long unaff_x22;
  long unaff_x25;
  undefined1 in_stack_00000008;
  
  puVar2 = (undefined4 *)thunk_FUN_02d8a780();
  lVar3 = FUN_05230ce8(*puVar2,0);
  puVar1 = PTR_DAT_066462d0;
  if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
  }
  uVar4 = FUN_05ee2f7c(0,lVar3,0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar4 = FUN_05ee6de4(lVar3,0);
    if ((uVar4 & 1) == 0) goto PlayFab_ClientModels_PlayerProfileModel___ctor;
    if (lVar3 == 0) goto LAB_052846c8;
    lVar3 = FUN_0319d120(lVar3,*(undefined8 *)System_Collections_Generic_List<Claim>_TypeInfo);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)puVar1);
    }
    uVar4 = FUN_05ee2f7c(0,lVar3,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar4 = FUN_05ee6de4(lVar3,0);
      if ((uVar4 & 1) != 0) {
        plVar5 = (long *)FUN_0526b460();
        plVar6 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
        if (plVar6 == (long *)0x0) goto LAB_052846c8;
        lVar7 = thunk_FUN_02d8a53c();
        if (lVar7 == 0) goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
        if ((int)plVar6[3] != 0) {
          plVar6[4] = unaff_x22;
          thunk_FUN_02dc1ef0();
          lVar7 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
          if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
            plVar6[5] = lVar7;
            thunk_FUN_02dc1ef0(plVar6 + 5,lVar7);
            in_stack_00000008 = unaff_w19;
            lVar7 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
            goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
            if (2 < *(uint *)(plVar6 + 3)) {
              plVar6[6] = lVar7;
              thunk_FUN_02dc1ef0(plVar6 + 6,lVar7);
              if (plVar5 != (long *)0x0) {
                lVar7 = *plVar5;
                uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
                uVar11 = *(undefined8 *)System_Collections_Generic_List<Collider>_TypeInfo;
                if (uVar4 != 0) {
                  piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0664b728) {
                      puVar9 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                      goto LAB_052846a0;
                    }
                    uVar4 = uVar4 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar4 != 0);
                }
                puVar9 = (undefined8 *)FUN_02d87540(plVar5,*(long *)PTR_DAT_0664b728,1);
LAB_052846a0:
                (*(code *)*puVar9)(plVar5,3,uVar11,plVar6,puVar9[1]);
                if (lVar3 != 0) {
                  return *(undefined8 *)(lVar3 + 0x40);
                }
              }
              goto LAB_052846c8;
            }
          }
        }
        goto PlayFab_ClientModels_UserAccountInfo___ctor;
      }
    }
    plVar5 = (long *)FUN_0526b460();
    plVar6 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
    if (plVar6 == (long *)0x0) goto LAB_052846c8;
    lVar3 = thunk_FUN_02d8a53c();
    if (lVar3 == 0) goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((int)plVar6[3] == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar6[4] = unaff_x22;
    thunk_FUN_02dc1ef0();
    lVar3 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
    if ((lVar3 != 0) &&
       (lVar7 = thunk_FUN_02d8a53c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar6[5] = lVar3;
    thunk_FUN_02dc1ef0(plVar6 + 5,lVar3);
    in_stack_00000008 = unaff_w19;
    lVar3 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
    if ((lVar3 != 0) &&
       (lVar7 = thunk_FUN_02d8a53c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if (*(uint *)(plVar6 + 3) < 3) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar6[6] = lVar3;
    thunk_FUN_02dc1ef0(plVar6 + 6,lVar3);
    if (plVar5 == (long *)0x0) goto LAB_052846c8;
    lVar7 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar3 = *(long *)PTR_DAT_0664b728;
    uVar11 = *(undefined8 *)System_Collections_Generic_List<Color>_TypeInfo;
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar3)
        goto PlayFab_ClientModels_UpdateCharacterDataRequest___ctor;
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
  }
  else {
PlayFab_ClientModels_PlayerProfileModel___ctor:
    plVar5 = (long *)FUN_0526b460();
    plVar6 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
    if (plVar6 == (long *)0x0) {
LAB_052846c8:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar3 = thunk_FUN_02d8a53c();
    if (lVar3 == 0) {
PlayFab_ClientModels_UserAndroidDeviceInfo___ctor:
      uVar11 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar11,0);
    }
    if ((int)plVar6[3] == 0) {
PlayFab_ClientModels_UserAccountInfo___ctor:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    plVar6[4] = unaff_x22;
    thunk_FUN_02dc1ef0();
    lVar3 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
    if ((lVar3 != 0) &&
       (lVar7 = thunk_FUN_02d8a53c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar6[5] = lVar3;
    thunk_FUN_02dc1ef0(plVar6 + 5,lVar3);
    in_stack_00000008 = unaff_w19;
    lVar3 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
    if ((lVar3 != 0) &&
       (lVar7 = thunk_FUN_02d8a53c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if (*(uint *)(plVar6 + 3) < 3) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar6[6] = lVar3;
    thunk_FUN_02dc1ef0(plVar6 + 6,lVar3);
    if (plVar5 == (long *)0x0) goto LAB_052846c8;
    lVar7 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar3 = *(long *)PTR_DAT_0664b728;
    uVar11 = *(undefined8 *)System_Collections_Generic_List<ClimbInteractable>_TypeInfo;
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar3)
        goto PlayFab_ClientModels_UpdateCharacterDataRequest___ctor;
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
  }
  puVar9 = (undefined8 *)FUN_02d87540(plVar5,lVar3,1);
PlayFab_ClientModels_UpdateCharacterStatisticsRequest___ctor:
  (*(code *)*puVar9)(plVar5,2,uVar11,plVar6,puVar9[1]);
  return 0;
PlayFab_ClientModels_UpdateCharacterDataRequest___ctor:
  puVar9 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
  goto PlayFab_ClientModels_UpdateCharacterStatisticsRequest___ctor;
}


