/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$Invoke
ENTRY_POINT: 0905f100
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__Invoke(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *puVar3;
  long *unaff_x24;
  
  puVar3 = *(undefined8 **)(unaff_x23 + 0xe80);
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x20));
  uVar2 = FUN_04947fd0(*unaff_x22,4);
  FUN_08c82ec4(uVar2,*puVar3,0);
  puVar1 = PTR_DAT_0ac77ec0;
  if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffe) != 0) {
    *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
    thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x28),uVar2);
    uVar2 = FUN_04947fd0(*unaff_x22,4);
    FUN_08c82ec4(uVar2,*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_0ac77e70;
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
      thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x30),uVar2);
      uVar2 = FUN_04947fd0(*unaff_x22,4);
      FUN_08c82ec4(uVar2,*(undefined8 *)puVar1,0);
      puVar1 = PTR_DAT_0ac77e58;
      if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
        *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
        thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x38),uVar2);
        uVar2 = FUN_04947fd0(*unaff_x22,4);
        FUN_08c82ec4(uVar2,*(undefined8 *)puVar1,0);
        if (4 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
          thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x40),uVar2);
          *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x20) = unaff_x19;
          thunk_FUN_049ee3d8();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


