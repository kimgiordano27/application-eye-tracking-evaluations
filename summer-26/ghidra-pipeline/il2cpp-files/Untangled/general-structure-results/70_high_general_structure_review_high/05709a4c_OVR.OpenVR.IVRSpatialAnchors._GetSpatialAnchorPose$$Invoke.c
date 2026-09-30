/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$Invoke
ENTRY_POINT: 05709a4c
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__Invoke(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 *unaff_x21;
  long unaff_x24;
  undefined *puVar4;
  
  lVar5 = *(long *)(unaff_x20 + 0x80);
  if (lVar5 == 0) {
    if (*(long *)(unaff_x20 + 0x108) != 0) {
LAB_05709b20:
      *unaff_x21 = 1;
      FUN_0570d124();
      return;
    }
  }
  else {
    if (*(char *)(unaff_x20 + 0x88) != '\0') {
      if (*(long *)(unaff_x24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if ((*(int *)(*(long *)(unaff_x24 + 0x20) + 0x30) != 1) && (*(long *)(unaff_x20 + 0x108) != 0)
         ) goto LAB_05709b20;
    }
    lVar5 = (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28))
    ;
    if (lVar5 != 0) {
      *unaff_x21 = 0;
      return;
    }
  }
  cVar1 = *(char *)(unaff_x20 + 0x2a);
  lVar5 = thunk_FUN_02f239f0(PTR_DAT_06d06338);
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_055b5920(0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
  puVar4 = PTR_DAT_06d57c58;
  if (cVar1 == '\0') {
    puVar4 = PTR_DAT_06d57c50;
  }
  uVar3 = thunk_FUN_02f239f0(puVar4);
  FUN_056f1630(uVar3,uVar2,uVar6);
  uVar2 = FUN_05692378();
  uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d57c60);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar2,uVar6);
}


