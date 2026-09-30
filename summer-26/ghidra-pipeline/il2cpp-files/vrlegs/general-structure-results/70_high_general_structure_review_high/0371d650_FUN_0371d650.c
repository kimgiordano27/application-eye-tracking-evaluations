/*
FUNCTION_NAME: FUN_0371d650
ENTRY_POINT: 0371d650
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


void FUN_0371d650(undefined4 param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar2 = Method_Unity_Entities_ComponentLookup<PostTransformMatrix>_Update__;
  if ((DAT_04135349 & 1) == 0) {
    FUN_01ab69ac(Method_Unity_Entities_ComponentTypeHandle<CompanionLinkTransform>_Update__);
    FUN_01ab69ac(Method_Unity_Entities_ComponentTypeHandle<CustomPhysicsProxyDriver>_Update__);
    FUN_01ab69ac(Method_Unity_Entities_ComponentLookup<PostTransformMatrix>_Update__);
    DAT_04135349 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar2;
  }
  plVar1 = *(long **)(lVar3 + 0xb8) + 1;
  if ((param_2 & 1) == 0) {
    plVar1 = *(long **)(lVar3 + 0xb8);
  }
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    local_24 = param_1;
    uVar4 = FUN_0219c130(lVar3,&local_24,
                         *(undefined8 *)
                          Method_Unity_Entities_ComponentTypeHandle<CompanionLinkTransform>_Update__
                        );
    if ((uVar4 & 1) != 0) {
      local_28 = param_1;
      FUN_0219eaf8(lVar3,&local_28,
                   *(undefined8 *)
                    Method_Unity_Entities_ComponentTypeHandle<CustomPhysicsProxyDriver>_Update__);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


