/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstMathUtility.FastSafeDivide_00000982$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0350c63c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide_00000982_PostfixBurstDelegate__Invoke
          (long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = (**(code **)(param_1 + 0x188))();
  if (iVar1 == 0xb) {
    return 0;
  }
  lVar2 = FUN_0285ea18();
  lVar5 = *(long *)PTR_DAT_03cbefb8;
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    FUN_01a47054(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  if (lVar2 != 0) {
    uVar3 = FUN_02862d4c(lVar2,0,**(undefined8 **)(lVar4 + 0xb8),0);
    if (*(int *)(*(long *)
                  HexabodyVR_PlayerController_HexaCameraRig_<UpdateTrackingOrigin>d__13_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)
                          HexabodyVR_PlayerController_HexaCameraRig_<UpdateTrackingOrigin>d__13_TypeInfo
                        );
    }
    uVar3 = FUN_0350ba14(uVar3);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


