/*
FUNCTION_NAME: FUN_0371d4a0
ENTRY_POINT: 0371d4a0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_0371d4a0(undefined4 param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 local_38;
  undefined4 local_24;
  
  puVar2 = Method_Unity_Entities_ComponentLookup<PostTransformMatrix>_Update__;
  if ((DAT_04135347 & 1) == 0) {
    FUN_01ab69ac(Method_Unity_Entities_ComponentTypeHandle<ColliderBlobCleanupData>_Update__);
    FUN_01ab69ac(Method_Unity_Entities_ComponentLookup<PostTransformMatrix>_Update__);
    DAT_04135347 = 1;
  }
  lVar3 = *(long *)puVar2;
  local_38 = 0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  plVar1 = *(long **)(lVar3 + 0xb8) + 1;
  if ((param_2 & 1) == 0) {
    plVar1 = *(long **)(lVar3 + 0xb8);
  }
  if (*plVar1 != 0) {
    local_24 = param_1;
    FUN_0219f8b8(*plVar1,&local_24,&local_38,
                 *(undefined8 *)
                  Method_Unity_Entities_ComponentTypeHandle<ColliderBlobCleanupData>_Update__);
    return local_38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


