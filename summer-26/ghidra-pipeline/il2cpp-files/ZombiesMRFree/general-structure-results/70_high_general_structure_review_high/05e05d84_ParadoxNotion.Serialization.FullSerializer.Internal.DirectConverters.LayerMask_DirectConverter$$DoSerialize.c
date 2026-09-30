/*
FUNCTION_NAME: ParadoxNotion.Serialization.FullSerializer.Internal.DirectConverters.LayerMask_DirectConverter$$DoSerialize
ENTRY_POINT: 05e05d84
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void ParadoxNotion_Serialization_FullSerializer_Internal_DirectConverters_LayerMask_DirectConverter__DoSerialize
               (long param_1)

{
  long lVar1;
  long *plVar2;
  int in_w8;
  undefined8 unaff_x23;
  long *unaff_x24;
  
  if (in_w8 == 0) {
    thunk_FUN_02fdcff0();
    param_1 = *unaff_x24;
  }
  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x38) = unaff_x23;
  thunk_FUN_03048534();
  lVar1 = *unaff_x24;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar1 = *unaff_x24;
  }
  plVar2 = *(long **)(*(long *)(lVar1 + 0xb8) + 0x38);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x05e05dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x188))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


