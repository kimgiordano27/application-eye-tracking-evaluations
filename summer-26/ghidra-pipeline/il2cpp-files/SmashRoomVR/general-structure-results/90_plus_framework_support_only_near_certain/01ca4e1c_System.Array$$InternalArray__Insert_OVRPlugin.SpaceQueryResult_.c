/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 01ca4e1c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__Insert<OVRPlugin_SpaceQueryResult>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lVar4;
  
  thunk_FUN_01ad9084();
  thunk_FUN_01ad9084(StringLiteral_811);
  thunk_FUN_01ad9084(StringLiteral_812);
  thunk_FUN_01ad9084(StringLiteral_813);
                    /* try { // try from 01ca4e48 to 01da4e5f has its CatchHandler @ 01ca4d94 */
                    /* catch() { ... } // from try @ 01ca4df8 with catch @ 01ca4e4c */
  thunk_FUN_01ad9084(StringLiteral_696);
  thunk_FUN_01ad9084(StringLiteral_814);
  thunk_FUN_01ad9084(StringLiteral_735);
  thunk_FUN_01ad9084(StringLiteral_815);
  thunk_FUN_01ad9084(StringLiteral_816);
  thunk_FUN_01ad9084(StringLiteral_817);
  thunk_FUN_01ad9084(StringLiteral_736);
  thunk_FUN_01ad9084(StringLiteral_818);
  thunk_FUN_01ad9084(StringLiteral_819);
  *(undefined1 *)(unaff_x22 + 0x947) = 1;
  if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x20) != 0)) {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    FUN_023c77e8(*(long *)(unaff_x21 + 0x20),unaff_w20,*(undefined8 *)StringLiteral_736);
    if (lVar4 != 0) {
      FUN_023c7fe8(lVar4,*(undefined8 *)StringLiteral_696);
      puVar1 = StringLiteral_810;
      lVar4 = *(long *)(unaff_x19 + 0x28);
      if (lVar4 != 0) {
        if (*(long *)(unaff_x21 + 0x28) == 0)
        goto System_Array__InternalArray__Insert<OVRSpatialAnchor_UnboundAnchor>;
        FUN_023b248c(*(long *)(unaff_x21 + 0x28),unaff_w20,*(undefined8 *)StringLiteral_819);
        FUN_023b2c8c(lVar4,*(undefined8 *)puVar1);
      }
      puVar1 = StringLiteral_811;
      lVar4 = *(long *)(unaff_x19 + 0x30);
      if (lVar4 != 0) {
        if (*(long *)(unaff_x21 + 0x30) == 0)
        goto System_Array__InternalArray__Insert<OVRSpatialAnchor_UnboundAnchor>;
        FUN_023b5b54(*(long *)(unaff_x21 + 0x30),unaff_w20,*(undefined8 *)StringLiteral_815);
        FUN_023b62e4(lVar4,*(undefined8 *)puVar1);
      }
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
        uVar3 = FUN_023a60a4(*(long *)(unaff_x21 + 0x50),unaff_w20,*(undefined8 *)StringLiteral_818)
        ;
        FUN_023a67c0(lVar4,uVar3,*(undefined8 *)puVar1);
      }
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        return *(int *)(*(long *)(unaff_x19 + 0x20) + 0x28) + -1;
      }
    }
  }
System_Array__InternalArray__Insert<OVRSpatialAnchor_UnboundAnchor>:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


