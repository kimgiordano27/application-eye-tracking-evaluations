/*
FUNCTION_NAME: FUN_0371e194
ENTRY_POINT: 0371e194
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0371e194(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  puVar1 = Method_Unity_Entities_ComponentLookup<PostTransformMatrix>_Update__;
                    /* try { // try from 0371e1a4 to 0381e1af has its CatchHandler @ 0371e398 */
  if ((DAT_0413534f & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
                    /* try { // try from 0371e1cc to 0381e1cf has its CatchHandler @ 0371e390 */
    FUN_01ab69ac(Method_Unity_Entities_ComponentLookup<PostTransformMatrix>_Update__);
    FUN_01ab69ac(Method_Unity_Entities_ComponentTypeHandle<PhysicsConstrainedBodyPair>_Update__);
                    /* try { // try from 0371e1e4 to 0381e1e7 has its CatchHandler @ 0371e374 */
    DAT_0413534f = 1;
  }
                    /* try { // try from 0371e1e8 to 0381e1f7 has its CatchHandler @ 0371e38c */
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar4 != 0) {
                    /* try { // try from 0371e20c to 0381e213 has its CatchHandler @ 0371e388 */
    if (*(long *)(lVar4 + 0x18) == 0) {
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
                    /* try { // try from 0371e2f8 to 0381e323 has its CatchHandler @ 0371e378 */
      FUN_0367ae18(*(undefined8 *)
                    Method_Unity_Entities_ComponentTypeHandle<PhysicsConstrainedBodyPair>_Update__,0
                  );
      return;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      if (lVar4 == 0) goto LAB_0371e318;
    }
    plVar3 = *(long **)(lVar4 + 0x18);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
                    /* try { // try from 0371e250 to 0381e27f has its CatchHandler @ 0371e37c */
      if ((lVar2 != 0) && (plVar3 = *(long **)(lVar2 + 0x18), plVar3 != (long *)0x0)) {
        (**(code **)(*plVar3 + 0x1d8))(0,param_1,plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
        lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
        if ((lVar2 != 0) && (plVar3 = *(long **)(lVar2 + 0x18), plVar3 != (long *)0x0)) {
                    /* try { // try from 0371e28c to 0381e28f has its CatchHandler @ 0371e370 */
          (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
                    /* try { // try from 0371e290 to 0381e29f has its CatchHandler @ 0371e384 */
          lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
          if ((lVar2 != 0) && (plVar3 = *(long **)(lVar2 + 0x18), plVar3 != (long *)0x0)) {
                    /* try { // try from 0371e2b4 to 0381e2bb has its CatchHandler @ 0371e380 */
            (**(code **)(*plVar3 + 0x1e8))(0,param_2,plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
            lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
            if (lVar2 != 0) {
              FUN_0371dc30(*(undefined8 *)(lVar2 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
LAB_0371e318:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


