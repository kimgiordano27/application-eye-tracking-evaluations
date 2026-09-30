/*
FUNCTION_NAME: PlayFab.ClientModels.LinkGoogleAccountResult$$.ctor
ENTRY_POINT: 0528418c
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


undefined8 PlayFab_ClientModels_LinkGoogleAccountResult___ctor(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined1 unaff_w19;
  undefined8 uVar9;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined1 in_stack_00000008;
  
  uVar1 = FUN_05ee2f7c();
  if ((uVar1 & 1) == 0) {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar1 = FUN_05ee6de4();
    if ((uVar1 & 1) == 0) goto PlayFab_ClientModels_PlayerProfileModel___ctor;
    if (unaff_x23 == 0) goto LAB_052846c8;
    lVar2 = FUN_0319d120();
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*unaff_x24);
    }
    uVar1 = FUN_05ee2f7c(0,lVar2,0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar1 = FUN_05ee6de4(lVar2,0);
      if ((uVar1 & 1) != 0) {
        plVar3 = (long *)FUN_0526b460();
        plVar4 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
        if (plVar4 == (long *)0x0) goto LAB_052846c8;
        lVar5 = thunk_FUN_02d8a53c();
        if (lVar5 == 0) goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
        if ((int)plVar4[3] != 0) {
          plVar4[4] = unaff_x22;
          thunk_FUN_02dc1ef0();
          lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
          goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
          if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
            plVar4[5] = lVar5;
            thunk_FUN_02dc1ef0(plVar4 + 5,lVar5);
            in_stack_00000008 = unaff_w19;
            lVar5 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
            goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
            if (2 < *(uint *)(plVar4 + 3)) {
              plVar4[6] = lVar5;
              thunk_FUN_02dc1ef0(plVar4 + 6,lVar5);
              if (plVar3 != (long *)0x0) {
                lVar5 = *plVar3;
                uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
                uVar9 = *(undefined8 *)System_Collections_Generic_List<Collider>_TypeInfo;
                if (uVar1 != 0) {
                  piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0664b728) {
                      puVar7 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                      goto LAB_052846a0;
                    }
                    uVar1 = uVar1 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar1 != 0);
                }
                puVar7 = (undefined8 *)FUN_02d87540(plVar3,*(long *)PTR_DAT_0664b728,1);
LAB_052846a0:
                (*(code *)*puVar7)(plVar3,3,uVar9,plVar4,puVar7[1]);
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
    plVar3 = (long *)FUN_0526b460();
    plVar4 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
    if (plVar4 == (long *)0x0) goto LAB_052846c8;
    lVar2 = thunk_FUN_02d8a53c();
    if (lVar2 == 0) goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((int)plVar4[3] == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar4[4] = unaff_x22;
    thunk_FUN_02dc1ef0();
    lVar2 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
    if ((lVar2 != 0) &&
       (lVar5 = thunk_FUN_02d8a53c(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar4[5] = lVar2;
    thunk_FUN_02dc1ef0(plVar4 + 5,lVar2);
    in_stack_00000008 = unaff_w19;
    lVar2 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
    if ((lVar2 != 0) &&
       (lVar5 = thunk_FUN_02d8a53c(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if (*(uint *)(plVar4 + 3) < 3) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar4[6] = lVar2;
    thunk_FUN_02dc1ef0(plVar4 + 6,lVar2);
    if (plVar3 == (long *)0x0) goto LAB_052846c8;
    lVar5 = *plVar3;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    lVar2 = *(long *)PTR_DAT_0664b728;
    uVar9 = *(undefined8 *)System_Collections_Generic_List<Color>_TypeInfo;
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar2)
        goto PlayFab_ClientModels_UpdateCharacterDataRequest___ctor;
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
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
    lVar2 = thunk_FUN_02d8a53c();
    if (lVar2 == 0) {
PlayFab_ClientModels_UserAndroidDeviceInfo___ctor:
      uVar9 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar9,0);
    }
    if ((int)plVar4[3] == 0) {
PlayFab_ClientModels_UserAccountInfo___ctor:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    plVar4[4] = unaff_x22;
    thunk_FUN_02dc1ef0();
    lVar2 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
    if ((lVar2 != 0) &&
       (lVar5 = thunk_FUN_02d8a53c(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) == 0) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar4[5] = lVar2;
    thunk_FUN_02dc1ef0(plVar4 + 5,lVar2);
    in_stack_00000008 = unaff_w19;
    lVar2 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
    if ((lVar2 != 0) &&
       (lVar5 = thunk_FUN_02d8a53c(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if (*(uint *)(plVar4 + 3) < 3) goto PlayFab_ClientModels_UserAccountInfo___ctor;
    plVar4[6] = lVar2;
    thunk_FUN_02dc1ef0(plVar4 + 6,lVar2);
    if (plVar3 == (long *)0x0) goto LAB_052846c8;
    lVar5 = *plVar3;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    lVar2 = *(long *)PTR_DAT_0664b728;
    uVar9 = *(undefined8 *)System_Collections_Generic_List<ClimbInteractable>_TypeInfo;
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar2)
        goto PlayFab_ClientModels_UpdateCharacterDataRequest___ctor;
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
  }
  puVar7 = (undefined8 *)FUN_02d87540(plVar3,lVar2,1);
PlayFab_ClientModels_UpdateCharacterStatisticsRequest___ctor:
  (*(code *)*puVar7)(plVar3,2,uVar9,plVar4,puVar7[1]);
  return 0;
PlayFab_ClientModels_UpdateCharacterDataRequest___ctor:
  puVar7 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
  goto PlayFab_ClientModels_UpdateCharacterStatisticsRequest___ctor;
}


