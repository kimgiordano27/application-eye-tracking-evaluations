/*
FUNCTION_NAME: Unity.Entities.EntityQueryData$$RebuildMatchingChunkCache
ENTRY_POINT: 0308f300
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Entities_EntityQueryData__RebuildMatchingChunkCache(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x28) != 0)) && (unaff_x22 != 0)) &&
     ((*(long *)(unaff_x22 + 0x18) != 0 &&
      (lVar2 = *(long *)(*(long *)(unaff_x21 + 0x28) + 0x28), lVar2 != 0)))) {
    FUN_02215a88(lVar2,*(undefined4 *)(*(long *)(unaff_x22 + 0x18) + 0x24),&stack0x00000008,
                 *(undefined8 *)PTR_DAT_03cd8108);
    lVar2 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0x28);
      if (iVar1 == 0x1406) {
        FUN_030975ac(&stack0x00000008);
      }
      else if (iVar1 == 0x1403) {
        FUN_030972ac(&stack0x00000008);
      }
      else {
        if (iVar1 != 0x1401) {
          FUN_018748a8(lVar2);
          uStack0000000000000008 = *(undefined4 *)(lVar2 + 0x28);
          uVar3 = thunk_FUN_01a6ca08(System_NullReferenceException_var);
          uVar3 = thunk_FUN_01a89a98(uVar3,&stack0x00000008);
          uVar4 = thunk_FUN_01a6ca08(
                                    Unity_Physics_Systems_BroadphaseSystem___codegen__OnUpdate_00000B7C_PostfixBurstDelegate_var
                                    );
          uVar3 = FUN_025b4d3c(uVar4,uVar3,0);
          thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
          uVar4 = thunk_FUN_01a89e68();
          FUN_0276e9b0(uVar4,uVar3,0);
          uVar3 = thunk_FUN_01a6ca08(
                                    Unity_Physics_GraphicsIntegration_BufferInterpolatedRigidBodiesMotion___codegen__OnUpdate_00000A44_PostfixBurstDelegate_var
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar4,uVar3);
        }
        FUN_03096f94(&stack0x00000008);
      }
      unaff_x19[2] = in_stack_00000018;
      unaff_x19[1] = in_stack_00000010;
      *unaff_x19 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


