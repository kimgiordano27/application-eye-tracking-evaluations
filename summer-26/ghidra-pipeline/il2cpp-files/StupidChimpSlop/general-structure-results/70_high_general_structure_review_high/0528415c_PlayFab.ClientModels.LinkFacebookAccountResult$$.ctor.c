/*
FUNCTION_NAME: PlayFab.ClientModels.LinkFacebookAccountResult$$.ctor
ENTRY_POINT: 0528415c
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


undefined8 PlayFab_ClientModels_LinkFacebookAccountResult___ctor(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined1 unaff_w19;
  undefined8 uVar10;
  long unaff_x22;
  long unaff_x25;
  undefined1 in_stack_00000008;
  
  lVar2 = FUN_05230ce8();
  puVar1 = PTR_DAT_066462d0;
  if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
  }
  uVar3 = FUN_05ee2f7c(0,lVar2,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar3 = FUN_05ee6de4(lVar2,0);
    if ((uVar3 & 1) == 0) goto PlayFab_ClientModels_PlayerProfileModel___ctor;
    if (lVar2 == 0) goto LAB_052846c8;
    lVar2 = FUN_0319d120(lVar2,*(undefined8 *)System_Collections_Generic_List<Claim>_TypeInfo);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)puVar1);
    }
    uVar3 = FUN_05ee2f7c(0,lVar2,0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar3 = FUN_05ee6de4(lVar2,0);
      if ((uVar3 & 1) != 0) {
        plVar4 = (long *)FUN_0526b460();
        plVar5 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
        if (plVar5 == (long *)0x0) goto LAB_052846c8;
        lVar6 = thunk_FUN_02d8a53c();
        if (lVar6 == 0) goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
        if ((int)plVar5[3] != 0) {
          plVar5[4] = unaff_x22;
          thunk_FUN_02dc1ef0();
          lVar6 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_02d8a53c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
          goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
          if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
            plVar5[5] = lVar6;
            thunk_FUN_02dc1ef0(plVar5 + 5,lVar6);
            in_stack_00000008 = unaff_w19;
            lVar6 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_02d8a53c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
            goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
            if (2 < *(uint *)(plVar5 + 3)) {
              plVar5[6] = lVar6;
              thunk_FUN_02dc1ef0(plVar5 + 6,lVar6);
              if (plVar4 != (long *)0x0) {
                lVar6 = *plVar4;
                uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
                uVar10 = *(undefined8 *)System_Collections_Generic_List<Collider>_TypeInfo;
                if (uVar3 != 0) {
                  piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0664b728) {
                      puVar8 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                      goto LAB_052846a0;
                    }
                    uVar3 = uVar3 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar3 != 0);
                }
                puVar8 = (undefined8 *)FUN_02d87540(plVar4,*(long *)PTR_DAT_0664b728,1);
LAB_052846a0:
                (*(code *)*puVar8)(plVar4,3,uVar10,plVar5,puVar8[1]);
                if (lVar2 != 0) {
                  return *(undefined8 *)(lVar2 + 0x40);
                }
              }
              goto LAB_052846c8;
            }
          }
        }
        goto PlayFab_ClientModels_UserAccountInfo___ctor;
      }
    }
    plVar4 = (long *)FUN_0526b460();
    plVar5 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
    if (plVar5 == (long *)0x0) goto LAB_052846c8;
    lVar2 = thunk_FUN_02d8a53c();
    if (lVar2 == 0) goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((int)plVar5[3] == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar5[4] = unaff_x22;
    thunk_FUN_02dc1ef0();
    lVar2 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
    if ((lVar2 != 0) &&
       (lVar6 = thunk_FUN_02d8a53c(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar5[5] = lVar2;
    thunk_FUN_02dc1ef0(plVar5 + 5,lVar2);
    in_stack_00000008 = unaff_w19;
    lVar2 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
    if ((lVar2 != 0) &&
       (lVar6 = thunk_FUN_02d8a53c(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if (*(uint *)(plVar5 + 3) < 3) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar5[6] = lVar2;
    thunk_FUN_02dc1ef0(plVar5 + 6,lVar2);
    if (plVar4 == (long *)0x0) goto LAB_052846c8;
    lVar6 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    lVar2 = *(long *)PTR_DAT_0664b728;
    uVar10 = *(undefined8 *)System_Collections_Generic_List<Color>_TypeInfo;
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar2)
        goto PlayFab_ClientModels_UpdateCharacterDataRequest___ctor;
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
  }
  else {
PlayFab_ClientModels_PlayerProfileModel___ctor:
    plVar4 = (long *)FUN_0526b460();
    plVar5 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
    if (plVar5 == (long *)0x0) {
LAB_052846c8:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar2 = thunk_FUN_02d8a53c();
    if (lVar2 == 0) {
PlayFab_ClientModels_UserAndroidDeviceInfo___ctor:
      uVar10 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar10,0);
    }
    if ((int)plVar5[3] == 0) {
PlayFab_ClientModels_UserAccountInfo___ctor:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    plVar5[4] = unaff_x22;
    thunk_FUN_02dc1ef0();
    lVar2 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
    if ((lVar2 != 0) &&
       (lVar6 = thunk_FUN_02d8a53c(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar5[5] = lVar2;
    thunk_FUN_02dc1ef0(plVar5 + 5,lVar2);
    in_stack_00000008 = unaff_w19;
    lVar2 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
    if ((lVar2 != 0) &&
       (lVar6 = thunk_FUN_02d8a53c(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if (*(uint *)(plVar5 + 3) < 3) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar5[6] = lVar2;
    thunk_FUN_02dc1ef0(plVar5 + 6,lVar2);
    if (plVar4 == (long *)0x0) goto LAB_052846c8;
    lVar6 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    lVar2 = *(long *)PTR_DAT_0664b728;
    uVar10 = *(undefined8 *)System_Collections_Generic_List<ClimbInteractable>_TypeInfo;
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar2)
        goto PlayFab_ClientModels_UpdateCharacterDataRequest___ctor;
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
  }
  puVar8 = (undefined8 *)FUN_02d87540(plVar4,lVar2,1);
PlayFab_ClientModels_UpdateCharacterStatisticsRequest___ctor:
  (*(code *)*puVar8)(plVar4,2,uVar10,plVar5,puVar8[1]);
  return 0;
PlayFab_ClientModels_UpdateCharacterDataRequest___ctor:
  puVar8 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
  goto PlayFab_ClientModels_UpdateCharacterStatisticsRequest___ctor;
}


