/*
FUNCTION_NAME: Unity.Entities.StructuralChange.MoveEntityArchetype_00000F99$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 030a776c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


void Unity_Entities_StructuralChange_MoveEntityArchetype_00000F99_PostfixBurstDelegate___ctor(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  uVar1 = FUN_01f6d39c();
  FUN_01f70920(uVar1,*unaff_x23);
  FUN_036a460c();
  lVar2 = FUN_036a466c();
  if (lVar2 != 0) {
    lVar2 = FUN_036a466c();
    if (lVar2 == 0) goto LAB_030a78e4;
    if (*(long *)(lVar2 + 0x18) != 0) {
      uVar1 = FUN_036a466c();
      uVar3 = thunk_FUN_01a89e68(*unaff_x25);
                    /* try { // try from 030a77d4 to 031a78bb has its CatchHandler @ 030a77d4
                       catch() { ... } // from try @ 030a77d4 with catch @ 030a77d4
                       catch() { ... } // from try @ 030a791c with catch @ 030a77d4
                       catch() { ... } // from try @ 030a79e8 with catch @ 030a77d4
                       catch() { ... } // from try @ 030a7a34 with catch @ 030a77d4
                       catch() { ... } // from try @ 030a7a3c with catch @ 030a77d4
                       catch() { ... } // from try @ 030a7a70 with catch @ 030a77d4
                       catch() { ... } // from try @ 030a7aac with catch @ 030a77d4
                       catch() { ... } // from try @ 030a7ad0 with catch @ 030a77d4
                       catch() { ... } // from try @ 030a7b04 with catch @ 030a77d4 */
      FUN_021de1ac();
      uVar1 = FUN_01f6d39c(uVar1,uVar3,*unaff_x24);
      FUN_01f70920(uVar1,*unaff_x23);
      FUN_036a46b8();
    }
  }
  lVar2 = FUN_036a4718();
  if (lVar2 != 0) {
    lVar2 = FUN_036a4718();
    if (lVar2 == 0) {
LAB_030a78e4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(lVar2 + 0x18) != 0) {
      uVar1 = FUN_036a4718();
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)
                                  Unity_Physics_GraphicsIntegration_CopyPhysicsVelocityToSmoothing___codegen__OnCreate_00000A4D_PostfixBurstDelegate_var
                                );
      FUN_021de1ac();
      uVar1 = FUN_01f6d39c(uVar1,uVar3,
                           *(undefined8 *)
                            Unity_Entities_CompanionGameObjectUpdateTransformSystem_RemoveDestroyedEntities_00000015_PostfixBurstDelegate_var
                          );
      FUN_01f70920(uVar1,*(undefined8 *)
                          Unity_Entities_CompanionGameObjectUpdateTransformSystem___codegen__OnUpdate_0000001B_PostfixBurstDelegate_var
                  );
      FUN_036a4764();
      return;
    }
  }
  return;
}


