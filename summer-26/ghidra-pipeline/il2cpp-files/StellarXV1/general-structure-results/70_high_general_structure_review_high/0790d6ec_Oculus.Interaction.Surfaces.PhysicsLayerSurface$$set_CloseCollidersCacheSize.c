/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.PhysicsLayerSurface$$set_CloseCollidersCacheSize
ENTRY_POINT: 0790d6ec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


void Oculus_Interaction_Surfaces_PhysicsLayerSurface__set_CloseCollidersCacheSize(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x26;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  
  (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    plVar1 = *(long **)(*(long *)(unaff_x19 + 0x40) + 0x20);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
      plVar1 = *(long **)(unaff_x19 + 0x28);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
        plVar1 = *(long **)(unaff_x19 + 0x28);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
          if (unaff_x26 != 0) {
            uVar2 = FUN_07912bf8();
            lVar3 = *(long *)(unaff_x19 + 0x68);
            in_stack_00000048 = 0;
            in_stack_00000050 = unaff_x26;
            thunk_FUN_040ec700(&stack0x00000050);
            in_stack_00000048 = uVar2;
            thunk_FUN_040ec700(&stack0x00000048,uVar2);
            if (lVar3 != 0) {
              FUN_06f73854(lVar3);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


