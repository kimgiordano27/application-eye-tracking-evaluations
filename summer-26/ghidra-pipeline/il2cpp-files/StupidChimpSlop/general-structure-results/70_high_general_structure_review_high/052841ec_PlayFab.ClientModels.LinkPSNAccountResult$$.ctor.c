/*
FUNCTION_NAME: PlayFab.ClientModels.LinkPSNAccountResult$$.ctor
ENTRY_POINT: 052841ec
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 PlayFab_ClientModels_LinkPSNAccountResult___ctor(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined1 unaff_w19;
  undefined8 uVar8;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined1 in_stack_00000008;
  
  uVar1 = FUN_05ee2f7c(param_1,param_2,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar1 = FUN_05ee6de4();
    if ((uVar1 & 1) != 0) {
      plVar2 = (long *)FUN_0526b460();
      plVar3 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
      if (plVar3 == (long *)0x0) goto LAB_052846c8;
      lVar4 = thunk_FUN_02d8a53c();
      if (lVar4 != 0) {
        if ((int)plVar3[3] != 0) {
          plVar3[4] = unaff_x22;
          thunk_FUN_02dc1ef0();
          lVar4 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_02d8a53c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
          if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
            plVar3[5] = lVar4;
            thunk_FUN_02dc1ef0(plVar3 + 5,lVar4);
            in_stack_00000008 = unaff_w19;
            lVar4 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_02d8a53c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
            if (2 < *(uint *)(plVar3 + 3)) {
              plVar3[6] = lVar4;
              thunk_FUN_02dc1ef0(plVar3 + 6,lVar4);
              if (plVar2 != (long *)0x0) {
                lVar4 = *plVar2;
                uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
                uVar8 = *(undefined8 *)System_Collections_Generic_List<Collider>_TypeInfo;
                if (uVar1 != 0) {
                  piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0664b728) {
                      puVar6 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                      goto LAB_052846a0;
                    }
                    uVar1 = uVar1 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar1 != 0);
                }
                puVar6 = (undefined8 *)FUN_02d87540(plVar2,*(long *)PTR_DAT_0664b728,1);
LAB_052846a0:
                (*(code *)*puVar6)(plVar2,3,uVar8,plVar3,puVar6[1]);
                if (unaff_x23 != 0) {
                  return *(undefined8 *)(unaff_x23 + 0x40);
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
  if (plVar3 == (long *)0x0) {
LAB_052846c8:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  lVar4 = thunk_FUN_02d8a53c();
  if (lVar4 == 0) {
PlayFab_ClientModels_UserAndroidDeviceInfo___ctor:
    uVar8 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar8,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = unaff_x22;
    thunk_FUN_02dc1ef0();
    lVar4 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02d8a53c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar4;
      thunk_FUN_02dc1ef0(plVar3 + 5,lVar4);
      in_stack_00000008 = unaff_w19;
      lVar4 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_02d8a53c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_02dc1ef0(plVar3 + 6,lVar4);
        if (plVar2 != (long *)0x0) {
          lVar4 = *plVar2;
          uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
          uVar8 = *(undefined8 *)System_Collections_Generic_List<Color>_TypeInfo;
          if (uVar1 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0664b728) {
                puVar6 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto PlayFab_ClientModels_UpdateCharacterStatisticsRequest___ctor;
              }
              uVar1 = uVar1 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar1 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d87540(plVar2,*(long *)PTR_DAT_0664b728,1);
PlayFab_ClientModels_UpdateCharacterStatisticsRequest___ctor:
          (*(code *)*puVar6)(plVar2,2,uVar8,plVar3,puVar6[1]);
          return 0;
        }
        goto LAB_052846c8;
      }
    }
  }
PlayFab_ClientModels_UserAccountInfo___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


