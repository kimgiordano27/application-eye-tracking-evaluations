/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$op_Implicit
ENTRY_POINT: 03ec1308
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__op_Implicit
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long in_x9;
  long unaff_x19;
  long unaff_x21;
  undefined4 unaff_w22;
  
  uVar1 = FUN_03aac1c4(param_1,param_2,*(undefined8 *)(in_x9 + 0x50));
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_03aadb8c(*(long *)(unaff_x19 + 0x10),unaff_w22,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58));
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar1,*(undefined8 *)(lVar2 + 0x28))
      ;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


