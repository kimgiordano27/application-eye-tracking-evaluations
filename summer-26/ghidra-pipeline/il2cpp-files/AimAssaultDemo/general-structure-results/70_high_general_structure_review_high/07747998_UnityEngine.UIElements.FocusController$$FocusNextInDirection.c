/*
FUNCTION_NAME: UnityEngine.UIElements.FocusController$$FocusNextInDirection
ENTRY_POINT: 07747998
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_UIElements_FocusController__FocusNextInDirection(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while( true ) {
    if (*(long *)(unaff_x25 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar4 = *(long *)(*(long *)(unaff_x25 + 0x10) + 0x4b8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_076ae6c0(lVar4,0);
    do {
      uVar2 = FUN_05d64e98(&stack0x00000020,*unaff_x28);
      unaff_x25 = in_stack_00000030;
      if ((uVar2 & 1) == 0) {
        FUN_05d64e94(&stack0x00000020,*unaff_x27);
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_076743a0(0);
        if (unaff_x19 != 0) {
          FUN_07878b6c();
          uVar1 = in_stack_00000038;
          uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_076ae1d0(0);
          if (*(char *)(unaff_x23 + 0xb01) == '\0') {
            FUN_0373b518(
                        Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__
                        );
            *(undefined1 *)(unaff_x23 + 0xb01) = 1;
          }
          *(undefined1 *)(*(long *)(*unaff_x24 + 0xb8) + 8) = 1;
          if (*(long *)(unaff_x20 + 0x18) != 0) {
            FUN_0401aab4(uVar5,uVar1,*(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x18),1,0,0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannelsNativeArray>_TryGetValue__
                        );
            FUN_07878c68();
            FUN_07878c84();
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar4 = FUN_07741f1c(*(undefined8 *)(in_stack_00000030 + 0x10));
      if ((lVar4 != 0) && (lVar4 = FUN_076a0e10(lVar4,0), lVar4 != 0)) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        FUN_076b47b0(lVar4,0);
      }
    } while (*(char *)(unaff_x25 + 0x40) != '\0');
    if (*(long *)(unaff_x25 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar3 = *(long **)(*(long *)(unaff_x25 + 0x10) + 0x4b8);
    if (plVar3 == (long *)0x0) break;
    (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


