/*
FUNCTION_NAME: PlayFab.ClientModels.LinkXboxAccountRequest$$.ctor
ENTRY_POINT: 05284214
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined8 PlayFab_ClientModels_LinkXboxAccountRequest___ctor(ulong param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined1 unaff_w19;
  undefined8 uVar8;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  undefined1 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    plVar1 = (long *)FUN_0526b460();
    plVar2 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
    if (plVar2 != (long *)0x0) {
      lVar3 = thunk_FUN_02d8a53c();
      if (lVar3 != 0) {
        if ((int)plVar2[3] != 0) {
          plVar2[4] = unaff_x22;
          thunk_FUN_02dc1ef0();
          lVar3 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_02d8a53c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
          if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
            plVar2[5] = lVar3;
            thunk_FUN_02dc1ef0(plVar2 + 5,lVar3);
            in_stack_00000008 = unaff_w19;
            lVar3 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_02d8a53c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
            goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
            if (2 < *(uint *)(plVar2 + 3)) {
              plVar2[6] = lVar3;
              thunk_FUN_02dc1ef0(plVar2 + 6,lVar3);
              if (plVar1 != (long *)0x0) {
                lVar3 = *plVar1;
                uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
                uVar8 = *(undefined8 *)System_Collections_Generic_List<Color>_TypeInfo;
                if (uVar6 != 0) {
                  piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0664b728) {
                      puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                      goto PlayFab_ClientModels_UpdateCharacterStatisticsRequest___ctor;
                    }
                    uVar6 = uVar6 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 != 0);
                }
                puVar5 = (undefined8 *)FUN_02d87540(plVar1,*(long *)PTR_DAT_0664b728,1);
PlayFab_ClientModels_UpdateCharacterStatisticsRequest___ctor:
                (*(code *)*puVar5)(plVar1,2,uVar8,plVar2,puVar5[1]);
                return 0;
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
  else {
    plVar1 = (long *)FUN_0526b460();
    plVar2 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,3);
    if (plVar2 != (long *)0x0) {
      lVar3 = thunk_FUN_02d8a53c();
      if (lVar3 == 0) {
PlayFab_ClientModels_UserAndroidDeviceInfo___ctor:
        uVar8 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar8,0);
      }
      if ((int)plVar2[3] != 0) {
        plVar2[4] = unaff_x22;
        thunk_FUN_02dc1ef0();
        lVar3 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x48),&stack0x0000000c);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_02d8a53c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
        if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
          plVar2[5] = lVar3;
          thunk_FUN_02dc1ef0(plVar2 + 5,lVar3);
          in_stack_00000008 = unaff_w19;
          lVar3 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x25 + 0x18),&stack0x00000008);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_02d8a53c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto PlayFab_ClientModels_UserAndroidDeviceInfo___ctor;
          if (2 < *(uint *)(plVar2 + 3)) {
            plVar2[6] = lVar3;
            thunk_FUN_02dc1ef0(plVar2 + 6,lVar3);
            if (plVar1 != (long *)0x0) {
              lVar3 = *plVar1;
              uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
              uVar8 = *(undefined8 *)System_Collections_Generic_List<Collider>_TypeInfo;
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0664b728) {
                    puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                    goto LAB_052846a0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_02d87540(plVar1,*(long *)PTR_DAT_0664b728,1);
LAB_052846a0:
              (*(code *)*puVar5)(plVar1,3,uVar8,plVar2,puVar5[1]);
              if (unaff_x23 != 0) {
                return *(undefined8 *)(unaff_x23 + 0x40);
              }
            }
            goto LAB_052846c8;
          }
        }
      }
PlayFab_ClientModels_UserAccountInfo___ctor:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
  }
LAB_052846c8:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


