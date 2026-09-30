/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsJsonParser$$TryParseArray
ENTRY_POINT: 0645ee88
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8 Unity_VisualScripting_FullSerializer_fsJsonParser__TryParseArray(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066c971c(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    FUN_064506e0(*(undefined8 *)(unaff_x20 + 0x28),0);
    if (unaff_x19 != 0) {
      uVar2 = FUN_0692afc0();
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  return 0;
}


