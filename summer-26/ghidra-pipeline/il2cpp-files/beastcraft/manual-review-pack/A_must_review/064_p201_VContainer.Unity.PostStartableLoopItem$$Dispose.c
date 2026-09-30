/*
FUNCTION_NAME: VContainer.Unity.PostStartableLoopItem$$Dispose
ENTRY_POINT: 0648ca08
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void VContainer_Unity_PostStartableLoopItem__Dispose
               (double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 in_x9;
  long *unaff_x19;
  
  uVar1 = 0x8000000000000000;
  if (param_2 != param_1) {
    uVar1 = in_x9;
  }
  uVar1 = FUN_0648cac8(param_3,uVar1);
  lVar2 = FUN_0648c7bc();
  if (lVar2 != 0) {
    uVar3 = FUN_0471d418(lVar2,*(undefined8 *)
                                Method_Cysharp_Threading_Tasks_AsyncReactiveProperty<Dictionary<Vector3,_DoorData>>__ctor__
                        );
    if ((uVar3 & 1) != 0) {
      (**(code **)(*unaff_x19 + 0xa08))();
      FUN_046f6ec4();
      return;
    }
    plVar4 = (long *)FUN_0648c7bc();
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0648cac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0xa48))(plVar4,uVar1,*(undefined8 *)(*plVar4 + 0xa50));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


