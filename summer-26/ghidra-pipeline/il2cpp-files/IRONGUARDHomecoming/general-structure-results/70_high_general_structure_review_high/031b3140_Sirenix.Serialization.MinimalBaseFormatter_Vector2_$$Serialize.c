/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector2>$$Serialize
ENTRY_POINT: 031b3140
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long Sirenix_Serialization_MinimalBaseFormatter<Vector2>__Serialize(long param_1,int param_2)

{
  long lVar1;
  int unaff_w19;
  int unaff_w20;
  long unaff_x22;
  
  if (param_2 < 0) {
    FUN_0358b9dc(0);
  }
  if (unaff_w19 < 0) {
    FUN_0358b620(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - unaff_w20 < unaff_w19) {
    FUN_0358b15c(0x17,0);
  }
  if ((*(byte *)(**(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  lVar1 = thunk_FUN_01f117cc();
  FUN_031b1dc0(lVar1,unaff_w19,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x148));
  if (lVar1 != 0) {
    FUN_0358d498(*(undefined8 *)(param_1 + 0x10),unaff_w20,*(undefined8 *)(lVar1 + 0x10),0,unaff_w19
                 ,0);
    *(int *)(lVar1 + 0x18) = unaff_w19;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


