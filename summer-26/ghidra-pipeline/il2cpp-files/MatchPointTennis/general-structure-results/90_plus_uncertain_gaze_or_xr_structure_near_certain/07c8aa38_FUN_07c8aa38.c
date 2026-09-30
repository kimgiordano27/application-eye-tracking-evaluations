/*
FUNCTION_NAME: FUN_07c8aa38
ENTRY_POINT: 07c8aa38
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_07c8aa38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_09f4e7b8;
  if ((DAT_0a52682b & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f50bd0);
    FUN_04447ba8(PTR_DAT_09f50bd8);
    FUN_04447ba8(PTR_DAT_09f4e7b8);
    FUN_04447ba8(PTR_DAT_09f4e7d0);
    FUN_04447ba8(PTR_DAT_09f4f610);
    FUN_04447ba8(PTR_DAT_09f4f5c8);
    DAT_0a52682b = 1;
  }
  lVar6 = FUN_04447c90(*(undefined8 *)puVar1,2);
  if (lVar6 != 0) {
    if ((*(int *)(lVar6 + 0x18) == 0) ||
       (*(undefined4 *)(lVar6 + 0x20) = 4, puVar5 = PTR_DAT_09f50bd8, puVar4 = PTR_DAT_09f50bd0,
       puVar3 = PTR_DAT_09f4f610, puVar2 = PTR_DAT_09f4f5c8, *(int *)(lVar6 + 0x18) == 1))
    goto LAB_07c8ad50;
    *(undefined4 *)(lVar6 + 0x24) = 5;
    *(long *)(param_1 + 0x18) = lVar6;
    thunk_FUN_044bb4b4();
    uVar7 = FUN_04447c90(*(undefined8 *)puVar1,3);
    FUN_0795ce64(uVar7,*(undefined8 *)puVar2,0);
    *(undefined8 *)(param_1 + 0x20) = uVar7;
    thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x20),uVar7);
    uVar7 = FUN_04447c90(*(undefined8 *)puVar1,4);
    FUN_0795ce64(uVar7,*(undefined8 *)puVar3,0);
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x28),uVar7);
    plVar8 = (long *)FUN_04447c90(*(undefined8 *)puVar4,5);
    lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
    FUN_07c8ad64(lVar6,0);
    if (plVar8 != (long *)0x0) {
      if ((lVar6 != 0) &&
         (lVar9 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_07c8ad54:
        uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar7,0);
      }
      if ((int)plVar8[3] != 0) {
        plVar8[4] = lVar6;
        thunk_FUN_044bb4b4(plVar8 + 4,lVar6);
        lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
        FUN_07c8ad64(lVar6,1);
        if ((lVar6 != 0) &&
           (lVar9 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_07c8ad54;
        if (1 < *(uint *)(plVar8 + 3)) {
          plVar8[5] = lVar6;
          thunk_FUN_044bb4b4(plVar8 + 5,lVar6);
          lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
          FUN_07c8ad64(lVar6,2);
          if ((lVar6 != 0) &&
             (lVar9 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
          goto LAB_07c8ad54;
          if (2 < *(uint *)(plVar8 + 3)) {
            plVar8[6] = lVar6;
            thunk_FUN_044bb4b4(plVar8 + 6,lVar6);
            lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
            FUN_07c8ad64(lVar6,3);
            if ((lVar6 != 0) &&
               (lVar9 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
            goto LAB_07c8ad54;
            if (3 < *(uint *)(plVar8 + 3)) {
              plVar8[7] = lVar6;
              thunk_FUN_044bb4b4(plVar8 + 7,lVar6);
              lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
              FUN_07c8ad64(lVar6,4);
              if ((lVar6 != 0) &&
                 (lVar9 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
              goto LAB_07c8ad54;
              puVar1 = PTR_DAT_09f4e7d0;
              if (4 < *(uint *)(plVar8 + 3)) {
                plVar8[8] = lVar6;
                thunk_FUN_044bb4b4(plVar8 + 8,lVar6);
                *(long *)(param_1 + 0x30) = (long)plVar8;
                thunk_FUN_044bb4b4((long *)(param_1 + 0x30),plVar8);
                uVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification(uVar7,0);
                *(undefined8 *)(param_1 + 0x40) = uVar7;
                thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x40),uVar7);
                FUN_07a80df4(param_1,0);
                *(undefined8 *)(param_1 + 0x38) = param_2;
                thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x38),param_2);
                return;
              }
            }
          }
        }
      }
LAB_07c8ad50:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


