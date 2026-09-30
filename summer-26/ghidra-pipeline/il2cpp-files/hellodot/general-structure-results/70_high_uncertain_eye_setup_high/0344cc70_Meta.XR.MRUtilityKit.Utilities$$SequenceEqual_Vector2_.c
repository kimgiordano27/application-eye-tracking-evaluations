/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Utilities$$SequenceEqual<Vector2>
ENTRY_POINT: 0344cc70
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_Utilities__SequenceEqual<Vector2>(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long in_x9;
  long unaff_x19;
  long unaff_x23;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  uVar1 = thunk_FUN_02cea894(**(undefined8 **)(in_x9 + 0x690));
  FUN_04a48c38(uVar1,uVar3,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) = uVar1;
  if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x10) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  if (unaff_x23 != 0) {
    System_Collections_Generic_Dictionary<Vector3Int,_object>___ctor();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


