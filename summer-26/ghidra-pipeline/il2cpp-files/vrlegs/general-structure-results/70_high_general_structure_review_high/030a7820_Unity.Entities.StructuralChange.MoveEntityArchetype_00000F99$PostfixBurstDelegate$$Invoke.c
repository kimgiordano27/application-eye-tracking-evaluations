/*
FUNCTION_NAME: Unity.Entities.StructuralChange.MoveEntityArchetype_00000F99$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 030a7820
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Entities_StructuralChange_MoveEntityArchetype_00000F99_PostfixBurstDelegate__Invoke(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_036a4718();
  if (lVar1 != 0) {
    lVar1 = FUN_036a4718();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(lVar1 + 0x18) != 0) {
      uVar2 = FUN_036a4718();
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)
                                  Unity_Physics_GraphicsIntegration_CopyPhysicsVelocityToSmoothing___codegen__OnCreate_00000A4D_PostfixBurstDelegate_var
                                );
      FUN_021de1ac();
      uVar2 = FUN_01f6d39c(uVar2,uVar3,
                           *(undefined8 *)
                            Unity_Entities_CompanionGameObjectUpdateTransformSystem_RemoveDestroyedEntities_00000015_PostfixBurstDelegate_var
                          );
      FUN_01f70920(uVar2,*(undefined8 *)
                          Unity_Entities_CompanionGameObjectUpdateTransformSystem___codegen__OnUpdate_0000001B_PostfixBurstDelegate_var
                  );
      FUN_036a4764();
      return;
    }
  }
  return;
}


