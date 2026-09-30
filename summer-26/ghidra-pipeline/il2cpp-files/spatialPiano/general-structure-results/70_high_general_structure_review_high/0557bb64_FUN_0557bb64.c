/*
FUNCTION_NAME: FUN_0557bb64
ENTRY_POINT: 0557bb64
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_0557bb64(undefined8 param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  
  if ((DAT_06bbf98b & 1) == 0) {
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                );
    DAT_06bbf98b = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar2 = *param_2;
    bVar1 = *(byte *)(*(long *)
                       UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(lVar2 + 0x130)) &&
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
       )) {
      FUN_055da0c8(param_2,0,0);
      return;
    }
    bVar1 = *(byte *)(*(long *)
                       UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                     + 0x130);
    if ((*(byte *)(lVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
       )) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
  }
  FUN_055d0e44(param_2,0);
  return;
}


