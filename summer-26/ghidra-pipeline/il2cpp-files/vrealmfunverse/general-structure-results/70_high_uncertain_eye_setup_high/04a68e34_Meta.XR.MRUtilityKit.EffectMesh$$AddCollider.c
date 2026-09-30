/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$AddCollider
ENTRY_POINT: 04a68e34
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a68eb0) */

uint Meta_XR_MRUtilityKit_EffectMesh__AddCollider(uint param_1)

{
  ulong uVar1;
  long unaff_x19;
  long in_stack_00000078;
  
  while ((param_1 & 1) != 0) {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar1 = FUN_04a662dc();
    if ((uVar1 & 1) == 0) break;
    param_1 = FUN_0472a278(&stack0x00000050,
                           *(undefined8 *)
                            (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x1a0));
  }
  FUN_0472a274(&stack0x00000050,
               *(undefined8 *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x1a8));
  return (param_1 ^ 1) & 1;
}


