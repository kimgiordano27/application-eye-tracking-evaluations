/*
FUNCTION_NAME: Unity.Entities.EntityQueryBuilder$$Dispose
ENTRY_POINT: 03090e30
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Entities_EntityQueryBuilder__Dispose(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long *plVar4;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
                    /* try { // try from 03090e30 to 03190e3b has its CatchHandler @ 03090f70 */
  FUN_0219a4f0();
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x10),param_1);
                    /* try { // try from 03090e4c to 03190e87 has its CatchHandler @ 03090f84 */
  FUN_027b3d9c();
  uVar3 = thunk_FUN_01a89e68(*unaff_x28);
  FUN_02215594(uVar3,unaff_w20,*unaff_x27);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x18),uVar3);
  uVar3 = thunk_FUN_01a89e68(*unaff_x28);
  FUN_02215594(uVar3,unaff_w20,*unaff_x27);
                    /* try { // try from 03090e98 to 03190e9b has its CatchHandler @ 03090f68 */
  *(undefined8 *)(unaff_x19 + 0x20) = uVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x20),uVar3);
  uVar3 = thunk_FUN_01a89e68(*unaff_x26);
                    /* try { // try from 03090eac to 03190ecf has its CatchHandler @ 03090f90 */
  Animancer_AnimancerState__OnSetIsPlaying(uVar3,*unaff_x25);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x28),uVar3);
  uVar3 = thunk_FUN_01a89e68(*unaff_x23);
                    /* try { // try from 03090ed4 to 03190edf has its CatchHandler @ 03090f80 */
  Animancer_AnimancerState__OnSetIsPlaying(uVar3,*(undefined8 *)PTR_DAT_03cc15b0);
                    /* try { // try from 03090ee4 to 03190f07 has its CatchHandler @ 03090f8c */
  *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x30),uVar3);
  plVar4 = (long *)(unaff_x19 + 0x38);
  *plVar4 = unaff_x21;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4);
  puVar2 = 
  Unity_Entities_ChunkIterationUtility_CalculateFilteredChunkIndexArray_00000A42_PostfixBurstDelegate_var
  ;
  puVar1 = 
  Unity_Entities_ChunkIterationUtility_CalculateEntityCount_00000A44_PostfixBurstDelegate_var;
  if (*plVar4 != 0) {
                    /* try { // try from 03090f28 to 03190f2b has its CatchHandler @ 03090f88 */
    uVar3 = thunk_FUN_01a89e68(*(undefined8 *)
                                Unity_Entities_ChunkIterationUtility_CopyComponentArrayToChunksWithFilter_00000A3B_PostfixBurstDelegate_var
                              );
                    /* try { // try from 03090f30 to 03190f3b has its CatchHandler @ 03090f7c */
    FUN_02215594(uVar3,unaff_w20,*(undefined8 *)puVar1);
    *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x19 + 0x40),uVar3);
                    /* try { // try from 03090f54 to 03190f57 has its CatchHandler @ 03090f8c */
    uVar3 = thunk_FUN_01a89e68(*unaff_x23);
                    /* try { // try from 03090f58 to 03190f5b has its CatchHandler @ 03090f88 */
                    /* try { // try from 03090f5c to 03190f5f has its CatchHandler @ 03090f78 */
                    /* try { // try from 03090f60 to 03190f63 has its CatchHandler @ 03090f6c */
                    /* catch() { ... } // from try @ 03090e0c with catch @ 03090f64
                       try { // try from 03090f64 to 03190fa7 has its CatchHandler @ 03090d5c */
    FUN_02215594(uVar3,unaff_w20,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 03090e98 with catch @ 03090f68 */
    *(undefined8 *)(unaff_x19 + 0x48) = uVar3;
                    /* catch() { ... } // from try @ 03090f60 with catch @ 03090f6c */
                    /* catch() { ... } // from try @ 03090e30 with catch @ 03090f70 */
                    /* catch() { ... } // from try @ 03090e24 with catch @ 03090f74 */
                    /* catch() { ... } // from try @ 03090f5c with catch @ 03090f78 */
                    /* catch() { ... } // from try @ 03090f30 with catch @ 03090f7c */
                    /* catch() { ... } // from try @ 03090ed4 with catch @ 03090f80 */
                    /* catch() { ... } // from try @ 03090e4c with catch @ 03090f84 */
                    /* catch() { ... } // from try @ 03090f28 with catch @ 03090f88
                       catch() { ... } // from try @ 03090f58 with catch @ 03090f88 */
                    /* catch() { ... } // from try @ 03090ee4 with catch @ 03090f8c
                       catch() { ... } // from try @ 03090f54 with catch @ 03090f8c */
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x19 + 0x48),uVar3);
    return;
  }
                    /* catch() { ... } // from try @ 03090eac with catch @ 03090f90 */
  return;
}


