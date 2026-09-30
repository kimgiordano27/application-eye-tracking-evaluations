/*
FUNCTION_NAME: System.Collections.ArrayList$$ToArray
ENTRY_POINT: 026317b4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02631874) */

undefined8 System_Collections_ArrayList__ToArray(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar3;
  undefined8 in_stack_00000008;
  
  if (*(long *)(param_1 + -8) != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0();
  }
  if (*(int *)(*(long *)PTR_DAT_03cf22f8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  thunk_FUN_01abff90(0);
  FUN_0262f940();
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar1 = (**(code **)(*unaff_x20 + 0x188))();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)PTR_DAT_03cf26f0;
    lVar2 = thunk_FUN_01a89d6c(lVar1,uVar3);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar1,uVar3);
    }
  }
  FUN_0262d464();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return *(undefined8 *)(unaff_x19 + 0x50);
}


