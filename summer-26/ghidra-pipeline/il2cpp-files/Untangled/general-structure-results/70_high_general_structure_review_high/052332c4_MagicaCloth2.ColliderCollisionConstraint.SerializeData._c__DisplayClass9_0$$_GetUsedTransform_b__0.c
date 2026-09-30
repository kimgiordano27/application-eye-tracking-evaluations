/*
FUNCTION_NAME: MagicaCloth2.ColliderCollisionConstraint.SerializeData.<>c__DisplayClass9_0$$<GetUsedTransform>b__0
ENTRY_POINT: 052332c4
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void MagicaCloth2_ColliderCollisionConstraint_SerializeData_<>c__DisplayClass9_0__<GetUsedTransform>b__0
               (void)

{
  undefined4 uVar1;
  uint in_w8;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  
  for (; (long)unaff_x23 < (long)(int)in_w8; unaff_x23 = unaff_x23 + 1) {
    if (in_w8 <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    FUN_052352b8();
    in_w8 = *(uint *)(unaff_x22 + 0x18);
  }
  if (*unaff_x21 != 0) {
    uVar1 = FUN_05501738(*unaff_x21,*(undefined8 *)PTR_DAT_06d39118,0);
    *(undefined4 *)(unaff_x20 + 0x38) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    thunk_FUN_02f411dc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


