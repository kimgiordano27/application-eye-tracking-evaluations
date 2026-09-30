/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<GetClosestSeatPoseDebugger>b__56_0
ENTRY_POINT: 07742c40
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MRUtilityKit_SceneDebugger__<GetClosestSeatPoseDebugger>b__56_0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x19;
  uint unaff_w28;
  long in_stack_00000040;
  
  lVar1 = FUN_04447c90(**(undefined8 **)(param_1 + 0x5f0),5);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)PTR_DAT_09f31d60;
      thunk_FUN_044bb4b4();
      if (in_stack_00000040 == 0) goto LAB_07742e00;
      uVar2 = thunk_FUN_0952ff6c(in_stack_00000040,0);
      if (1 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x28) = uVar2;
        thunk_FUN_044bb4b4((undefined8 *)(lVar1 + 0x28),uVar2);
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)PTR_DAT_09f31d68;
          thunk_FUN_044bb4b4();
          if (unaff_w28 < *(uint *)(unaff_x19 + 0x18)) {
            plVar3 = *(long **)(unaff_x19 + ((long)((ulong)unaff_w28 << 0x20) >> 0x1d) + 0x20);
            if (plVar3 == (long *)0x0) {
              uVar2 = 0;
            }
            else {
              uVar2 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
            }
            if (3 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x38) = uVar2;
              thunk_FUN_044bb4b4((undefined8 *)(lVar1 + 0x38));
              if (4 < *(uint *)(lVar1 + 0x18)) {
                *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)PTR_DAT_09f31d58;
                thunk_FUN_044bb4b4();
                uVar2 = FUN_078b57fc(lVar1,0);
                if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                  thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                }
                FUN_094c6b48(uVar2,0);
                return 0;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
LAB_07742e00:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


