/*
FUNCTION_NAME: MagicaCloth2.ColliderCollisionConstraint.SerializeData$$DataValidate
ENTRY_POINT: 0618e834
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


uint MagicaCloth2_ColliderCollisionConstraint_SerializeData__DataValidate(void)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  
  while( true ) {
    if ((int)unaff_w19 < unaff_w23) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) break;
    uVar1 = (**(code **)(*unaff_x22 + 0x1b8))();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


