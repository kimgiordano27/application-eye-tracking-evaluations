/*
FUNCTION_NAME: BallCollision$$DebugPostFrame
ENTRY_POINT: 04010104
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BallCollision__DebugPostFrame(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  
  lVar2 = FUN_08a50e6c();
  puVar1 = PTR_DAT_091a8cd0;
  if (lVar2 != 0) {
    lVar2 = FUN_08a5d2e4(lVar2,0);
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar2 = FUN_08a4d9c8();
      if (lVar2 == 0) goto LAB_040101ec;
      lVar3 = FUN_04f82e34(lVar2,*(undefined8 *)puVar1);
    }
    plVar4 = (long *)(unaff_x19 + 0xa0);
    *plVar4 = lVar3;
    thunk_FUN_03d1023c(plVar4);
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x2a8))
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar4,*(undefined8 *)(*plVar4 + 0x2b0)
                );
      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
         (lVar2 = FUN_08a50e6c(*(long *)(unaff_x19 + 0x30),0), lVar2 != 0)) {
        lVar2 = FUN_08a5d2e4(lVar2,0);
        lVar3 = 0;
        if (lVar2 != 0) {
          lVar2 = FUN_08a4d9c8();
          if (lVar2 == 0) goto LAB_040101ec;
          lVar3 = FUN_04f82e34(lVar2,*(undefined8 *)puVar1);
        }
        plVar4 = (long *)(unaff_x19 + 0xa8);
        *plVar4 = lVar3;
        thunk_FUN_03d1023c(plVar4);
        plVar4 = (long *)*plVar4;
        if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x040101e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x2a8))
                    (_UNK_01914cc8,_UNK_01914ccc,_UNK_01914ccc,0x3f800000,plVar4,
                     *(undefined8 *)(*plVar4 + 0x2b0));
          return;
        }
      }
    }
  }
LAB_040101ec:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


