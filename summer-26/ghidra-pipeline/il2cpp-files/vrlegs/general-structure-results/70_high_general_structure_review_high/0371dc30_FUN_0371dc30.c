/*
FUNCTION_NAME: FUN_0371dc30
ENTRY_POINT: 0371dc30
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0371dc30(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  
  if ((DAT_04135350 & 1) == 0) {
    FUN_01ab69ac(Method_Unity_Entities_ComponentTypeHandle<Parent>_Update__);
    FUN_01ab69ac(Method_Unity_Entities_ComponentTypeHandle<PhysicsCollider>_Update__);
    FUN_01ab69ac(Method_Unity_Entities_ComponentTypeHandle<PhysicsColliderBakedData>_Update__);
    FUN_01ab69ac(Method_Unity_Entities_ComponentLookup<SceneSectionData>_Update__);
    FUN_01ab69ac(Method_Unity_Entities_ComponentLookup<PostTransformMatrix>_Update__);
    FUN_01ab69ac(Method_Unity_Entities_ComponentTypeHandle<PhysicsCompoundData>_Update__);
    DAT_04135350 = 1;
  }
  puVar6 = Method_Unity_Entities_ComponentTypeHandle<PhysicsColliderBakedData>_Update__;
  puVar5 = Method_Unity_Entities_ComponentTypeHandle<PhysicsCollider>_Update__;
  puVar4 = Method_Unity_Entities_ComponentTypeHandle<Parent>_Update__;
  puVar3 = Method_Unity_Entities_ComponentLookup<SceneSectionData>_Update__;
  puVar2 = Method_Unity_Entities_ComponentLookup<PostTransformMatrix>_Update__;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    Animancer_FadeGroup__get_TargetWeight
              (*(long *)(param_1 + 0x48),&local_60,
               *(undefined8 *)
                Method_Unity_Entities_ComponentTypeHandle<PhysicsCompoundData>_Update__);
    do {
      uVar8 = FUN_021b51c8(&local_60,*(undefined8 *)puVar5);
      if ((uVar8 & 1) == 0) {
        FUN_021b51c4(&local_60,*(undefined8 *)puVar4);
        *(undefined4 *)(param_1 + 0x60) = 0;
        return;
      }
      FUN_01b7a454(&local_60,&local_48,*(undefined8 *)puVar6);
      plVar7 = local_48;
      if (local_48 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*local_48 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*local_48 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(local_48);
        }
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0371de0c(plVar7);
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


