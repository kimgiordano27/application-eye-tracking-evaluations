/*
FUNCTION_NAME: Unity.Entities.EntityQueryImpl.Managed._dlg_ResetFilter$$.ctor
ENTRY_POINT: 0308f5d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Unity_Entities_EntityQueryImpl_Managed__dlg_ResetFilter___ctor(long param_1)

{
  long *plVar1;
  long unaff_x19;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    param_1 = *unaff_x22;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
  if (lVar2 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(param_1 + 0xb8);
    lVar2 = thunk_FUN_01a89e68(*(undefined8 *)System_Variant_var);
    FUN_0308b38c(lVar2,uVar4,
                 *(undefined8 *)
                  Unity_Physics_Systems_BuildPhysicsWorld___codegen__OnUpdate_00000A87_PostfixBurstDelegate_var
                );
    plVar1 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar1 = lVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar2);
  }
  *(long *)(unaff_x19 + 0x10) = lVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((long *)(unaff_x19 + 0x10),lVar2);
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *unaff_x22;
  }
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar3 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    lVar3 = thunk_FUN_01a89e68(*(undefined8 *)
                                Unity_Physics_Systems_BuildPhysicsWorld___codegen__OnCreate_00000A86_PostfixBurstDelegate_var
                              );
    FUN_03097e48(lVar3,uVar4,
                 *(undefined8 *)
                  Unity_Physics_Systems_BuildPhysicsWorldDependencyResolver___codegen__OnCreate_00000A76_PostfixBurstDelegate_var
                );
    plVar1 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar1 = lVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar3);
  }
  *(long *)(unaff_x19 + 0x18) = lVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((long *)(unaff_x19 + 0x18),lVar3);
  return;
}


