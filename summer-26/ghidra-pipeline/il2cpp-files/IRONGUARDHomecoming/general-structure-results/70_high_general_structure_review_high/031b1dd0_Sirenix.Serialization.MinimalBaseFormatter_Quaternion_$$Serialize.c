/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Quaternion>$$Serialize
ENTRY_POINT: 031b1dd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_MinimalBaseFormatter<Quaternion>__Serialize
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  int unaff_w20;
  
                    /* try { // try from 031b1dd8 to 032b1dff has its CatchHandler @ 031b1fd4 */
  FUN_035ac8e8();
  if (unaff_w20 < 0) {
    FUN_0358b620(0xc,4,0);
    lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    if (unaff_w20 == 0) {
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      uVar1 = **(undefined8 **)(lVar2 + 0xb8);
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      goto LAB_031b1e68;
    }
  }
  lVar2 = *(long *)(lVar2 + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  uVar1 = FUN_01f08890(lVar2,unaff_w20);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
LAB_031b1e68:
  thunk_FUN_01f51358(param_1 + 0x10,uVar1);
  return;
}


