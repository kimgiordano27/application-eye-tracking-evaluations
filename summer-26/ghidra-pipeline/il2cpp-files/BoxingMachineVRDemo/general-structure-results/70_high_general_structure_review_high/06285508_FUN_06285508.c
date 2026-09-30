/*
FUNCTION_NAME: FUN_06285508
ENTRY_POINT: 06285508
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_6;telemetry_or_network_hits_2
*/


void FUN_06285508(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if ((DAT_06b8b9f1 & 1) == 0) {
    FUN_02d6084c(Method_Unity_VisualScripting_FullSerializer_fsContext_Get<List<Object>>__);
    FUN_02d6084c(UnityEngine_XR_ARFoundation_ARRaycastHit_var);
    DAT_06b8b9f1 = 1;
  }
  puVar1 = UnityEngine_XR_ARFoundation_ARRaycastHit_var;
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_03a37e34(*(long *)(param_1 + 0x30),param_2,
                 *(undefined8 *)UnityEngine_XR_ARFoundation_ARRaycastHit_var);
    if (*(long *)(param_1 + 0x28) != 0) {
      iVar2 = FUN_03a37e18(*(long *)(param_1 + 0x28),
                           *(undefined8 *)
                            Method_Unity_VisualScripting_FullSerializer_fsContext_Get<List<Object>>__
                          );
      if (param_2 <= iVar2) {
        return;
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_03a37e34(*(long *)(param_1 + 0x28),param_2,*(undefined8 *)puVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


