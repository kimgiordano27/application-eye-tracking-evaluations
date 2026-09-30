/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteStartArray
ENTRY_POINT: 04fbb4dc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonTextWriter__WriteStartArray(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int in_w8;
  long lVar4;
  undefined1 unaff_w19;
  long unaff_x20;
  int unaff_w22;
  int unaff_w23;
  
  iVar1 = unaff_w23 + 1;
  if (iVar1 < in_w8) {
    if (unaff_w23 <= unaff_w22) goto LAB_04fbb524;
  }
  else {
    uVar3 = FUN_04fb91e4();
    if ((unaff_w23 <= unaff_w22) || ((uVar3 & 1) != 0)) goto LAB_04fbb524;
    unaff_w23 = *(int *)(unaff_x20 + 0x34);
    unaff_w22 = *(int *)(unaff_x20 + 0x38);
  }
  FUN_05029664(*(undefined8 *)(unaff_x20 + 0x28),unaff_w22,unaff_w23 - unaff_w22,0);
LAB_04fbb524:
  uVar2 = *(uint *)(unaff_x20 + 0x34);
  *(int *)(unaff_x20 + 0x38) = iVar1;
  lVar4 = *(long *)(unaff_x20 + 0x28);
  *(uint *)(unaff_x20 + 0x34) = uVar2 + 1;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
  *(undefined1 *)(lVar4 + (int)uVar2 + 0x20) = unaff_w19;
  return;
}


