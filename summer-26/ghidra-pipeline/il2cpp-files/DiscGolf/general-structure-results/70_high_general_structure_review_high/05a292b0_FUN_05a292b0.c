/*
FUNCTION_NAME: FUN_05a292b0
ENTRY_POINT: 05a292b0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05a292b0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 local_24;
  
                    /* try { // try from 05a292b0 to 05b292bb has its CatchHandler @ 05a28f38 */
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
  ;
                    /* catch() { ... } // from try @ 05a292a8 with catch @ 05a292b8 */
  if ((DAT_06dc1886 & 1) == 0) {
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_06a115a8);
    FUN_02d965b8(PTR_DAT_06a115b8);
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_EvaluateLineEndPoint_00000D5C_PostfixBurstDelegate_TypeInfo
                );
    DAT_06dc1886 = 1;
  }
  local_24 = 0;
  FUN_04bada58(param_1,param_2,*(undefined8 *)puVar1);
  local_24 = *(undefined4 *)(param_1 + 0x68);
  uVar2 = FUN_0546d678(0);
  uVar2 = FUN_054e58ac(&local_24,uVar2,0);
  if (param_2 != 0) {
    FUN_05a2938c(param_2,*(undefined8 *)PTR_DAT_06a115a8,*(undefined8 *)PTR_DAT_06a115b8,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_EvaluateLineEndPoint_00000D5C_PostfixBurstDelegate_TypeInfo
                 ,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


