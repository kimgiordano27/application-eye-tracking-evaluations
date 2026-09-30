/*
FUNCTION_NAME: BallCollision.<DebugPostFrame>d__19$$.ctor
ENTRY_POINT: 04010170
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BallCollision_<DebugPostFrame>d__19___ctor(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long *plVar3;
  undefined8 *unaff_x21;
  
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (lVar1 = FUN_08a50e6c(*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
    lVar1 = FUN_08a5d2e4(lVar1,0);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar1 = FUN_08a4d9c8();
      if (lVar1 == 0) goto LAB_040101ec;
      lVar2 = FUN_04f82e34(lVar1,*unaff_x21);
    }
    plVar3 = (long *)(unaff_x19 + 0xa8);
    *plVar3 = lVar2;
    thunk_FUN_03d1023c(plVar3);
    plVar3 = (long *)*plVar3;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x040101e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x2a8))
                (_UNK_01914cc8,_UNK_01914ccc,_UNK_01914ccc,0x3f800000,plVar3,
                 *(undefined8 *)(*plVar3 + 0x2b0));
      return;
    }
  }
LAB_040101ec:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


