/*
FUNCTION_NAME: Unity.Entities.StructuralChange.MoveEntityArchetype_00000F99$BurstDirectCall$$GetFunctionPointerDiscard
ENTRY_POINT: 030a7834
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Unity_Entities_StructuralChange_MoveEntityArchetype_00000F99_BurstDirectCall__GetFunctionPointerDiscard
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = FUN_036a4718();
    uVar2 = thunk_FUN_01a89e68(*(undefined8 *)
                                Unity_Physics_GraphicsIntegration_CopyPhysicsVelocityToSmoothing___codegen__OnCreate_00000A4D_PostfixBurstDelegate_var
                              );
    FUN_021de1ac();
    uVar1 = FUN_01f6d39c(uVar1,uVar2,
                         *(undefined8 *)
                          Unity_Entities_CompanionGameObjectUpdateTransformSystem_RemoveDestroyedEntities_00000015_PostfixBurstDelegate_var
                        );
    FUN_01f70920(uVar1,*(undefined8 *)
                        Unity_Entities_CompanionGameObjectUpdateTransformSystem___codegen__OnUpdate_0000001B_PostfixBurstDelegate_var
                );
                    /* try { // try from 030a78bc to 031a78c3 has its CatchHandler @ 030a7abc */
    FUN_036a4764();
    return;
  }
                    /* try { // try from 030a78cc to 031a78d7 has its CatchHandler @ 030a7ab8 */
                    /* try { // try from 030a78e0 to 031a78eb has its CatchHandler @ 030a7ab0 */
  return;
}


