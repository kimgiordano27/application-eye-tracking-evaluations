/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<SpaceSharingBeforeHostStart>d__12$$MoveNext
ENTRY_POINT: 0775ec10
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<SpaceSharingBeforeHostStart>d__12__MoveNext
               (void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 in_stack_00000008;
  
  iVar1 = FUN_094d3ba4();
  if (*(int *)(unaff_x19 + 0x18) <= iVar1) {
    return unaff_x19;
  }
  lVar3 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,7);
  if (lVar3 == 0) {
LAB_0775edf4:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_09f30cd0;
    thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x20));
    uVar4 = (**(code **)(*unaff_x20 + 0x168))();
    if (1 < *(uint *)(lVar3 + 0x18)) {
      *(undefined8 *)(lVar3 + 0x28) = uVar4;
      thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x28),uVar4);
      if (2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_09f32b40;
        thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x30));
        in_stack_00000008._4_4_ = FUN_094d3ba4();
        uVar4 = FUN_07a3b850((long)&stack0x00000008 + 4,0);
        if (3 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x38) = uVar4;
          thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x38),uVar4);
          if (4 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_09f32b20;
            thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x40));
            in_stack_00000008._4_4_ = (undefined4)*(undefined8 *)(unaff_x19 + 0x18);
            uVar4 = FUN_07a3b850((long)&stack0x00000008 + 4,0);
            if (5 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x48) = uVar4;
              thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x48),uVar4);
              if (6 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)PTR_DAT_09f32b30;
                thunk_FUN_044bb4b4();
                uVar4 = FUN_078b57fc(lVar3,0);
                if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                  thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                }
                FUN_094c33b0(uVar4,0);
                uVar2 = FUN_094d3ba4();
                lVar3 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1eb68,uVar2);
                if (lVar3 != 0) {
                  FUN_07a62230();
                  return lVar3;
                }
                goto LAB_0775edf4;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


