/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 01ca4f84
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__Insert<OVRPlugin_VirtualKeyboardModelAnimationState>
              (undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long lVar3;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
                    /* try { // try from 01ca4f8c to 01da4f93 has its CatchHandler @ 01ca4fa0 */
  FUN_023af3c0(param_1,unaff_w20,*unaff_x24);
                    /* try { // try from 01ca4f94 to 01da4fc3 has its CatchHandler @ 01ca4ea8 */
                    /* catch() { ... } // from try @ 01ca4f2c with catch @ 01ca4f98 */
  FUN_023afb04();
  lVar3 = *(long *)(unaff_x19 + 0x40);
                    /* catch() { ... } // from try @ 01ca4f8c with catch @ 01ca4fa0 */
  if (lVar3 != 0) {
    if (*(long *)(unaff_x21 + 0x40) == 0)
    goto System_Array__InternalArray__Insert<OVRSpatialAnchor_UnboundAnchor>;
    FUN_023af3c0(*(long *)(unaff_x21 + 0x40),unaff_w20,*unaff_x24);
    FUN_023afb04(lVar3,*unaff_x23);
  }
  puVar1 = StringLiteral_814;
  lVar3 = *(long *)(unaff_x19 + 0x48);
  if (lVar3 != 0) {
    if (*(long *)(unaff_x21 + 0x48) == 0)
    goto System_Array__InternalArray__Insert<OVRSpatialAnchor_UnboundAnchor>;
    FUN_023a2f1c(*(long *)(unaff_x21 + 0x48),unaff_w20,*(undefined8 *)StringLiteral_817);
    FUN_023a36ac(lVar3,*(undefined8 *)puVar1);
  }
  puVar1 = StringLiteral_813;
  lVar3 = *(long *)(unaff_x19 + 0x50);
  if (lVar3 != 0) {
    if (*(long *)(unaff_x21 + 0x50) == 0)
    goto System_Array__InternalArray__Insert<OVRSpatialAnchor_UnboundAnchor>;
    uVar2 = FUN_023a60a4(*(long *)(unaff_x21 + 0x50),unaff_w20,*(undefined8 *)StringLiteral_818);
    FUN_023a67c0(lVar3,uVar2,*(undefined8 *)puVar1);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    return *(int *)(*(long *)(unaff_x19 + 0x20) + 0x28) + -1;
  }
System_Array__InternalArray__Insert<OVRSpatialAnchor_UnboundAnchor>:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


