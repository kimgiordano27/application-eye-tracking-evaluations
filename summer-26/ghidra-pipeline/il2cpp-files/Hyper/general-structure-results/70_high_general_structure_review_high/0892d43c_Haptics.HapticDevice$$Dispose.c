/*
FUNCTION_NAME: Haptics.HapticDevice$$Dispose
ENTRY_POINT: 0892d43c
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void Haptics_HapticDevice__Dispose(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  FUN_088ee800();
  if ((*(uint *)(unaff_x20 + 0x20) >> 2 & 1) != 0) {
    FUN_088ef30c();
    FUN_0892cecc();
    FUN_088ee800();
  }
  puVar1 = PTR_DAT_0ac49578;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    FUN_088ef30c();
    FUN_088eeb34();
  }
  lVar2 = *(long *)(unaff_x20 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_07506b20(lVar2);
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    FUN_063471f8();
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    return;
  }
  HdyRpc_RequestHspSetup__set_StreamId();
  return;
}


