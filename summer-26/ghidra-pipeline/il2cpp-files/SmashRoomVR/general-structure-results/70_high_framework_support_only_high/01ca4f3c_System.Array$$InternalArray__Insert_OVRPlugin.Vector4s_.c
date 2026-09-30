/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.Vector4s>
ENTRY_POINT: 01ca4f3c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__Insert<OVRPlugin_Vector4s>(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long lVar4;
  
  FUN_023b5b54(param_1,unaff_w20,*(undefined8 *)StringLiteral_815);
  FUN_023b62e4();
  puVar2 = StringLiteral_816;
  puVar1 = StringLiteral_812;
  lVar4 = *(long *)(unaff_x19 + 0x38);
  if (lVar4 != 0) {
    if (*(long *)(unaff_x21 + 0x38) == 0)
    goto System_Array__InternalArray__Insert<OVRSpatialAnchor_UnboundAnchor>;
    FUN_023af3c0(*(long *)(unaff_x21 + 0x38),unaff_w20,*(undefined8 *)StringLiteral_816);
    FUN_023afb04(lVar4,*(undefined8 *)puVar1);
  }
  lVar4 = *(long *)(unaff_x19 + 0x40);
  if (lVar4 != 0) {
    if (*(long *)(unaff_x21 + 0x40) == 0)
    goto System_Array__InternalArray__Insert<OVRSpatialAnchor_UnboundAnchor>;
    FUN_023af3c0(*(long *)(unaff_x21 + 0x40),unaff_w20,*(undefined8 *)puVar2);
    FUN_023afb04(lVar4,*(undefined8 *)puVar1);
  }
  puVar1 = StringLiteral_814;
  lVar4 = *(long *)(unaff_x19 + 0x48);
  if (lVar4 != 0) {
    if (*(long *)(unaff_x21 + 0x48) == 0)
    goto System_Array__InternalArray__Insert<OVRSpatialAnchor_UnboundAnchor>;
    FUN_023a2f1c(*(long *)(unaff_x21 + 0x48),unaff_w20,*(undefined8 *)StringLiteral_817);
    FUN_023a36ac(lVar4,*(undefined8 *)puVar1);
  }
  puVar1 = StringLiteral_813;
  lVar4 = *(long *)(unaff_x19 + 0x50);
  if (lVar4 != 0) {
    if (*(long *)(unaff_x21 + 0x50) == 0)
    goto System_Array__InternalArray__Insert<OVRSpatialAnchor_UnboundAnchor>;
    uVar3 = FUN_023a60a4(*(long *)(unaff_x21 + 0x50),unaff_w20,*(undefined8 *)StringLiteral_818);
    FUN_023a67c0(lVar4,uVar3,*(undefined8 *)puVar1);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    return *(int *)(*(long *)(unaff_x19 + 0x20) + 0x28) + -1;
  }
System_Array__InternalArray__Insert<OVRSpatialAnchor_UnboundAnchor>:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


