/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03548f70
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceQueryResult>(void)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 uVar5;
  long unaff_x21;
  
  lVar2 = FUN_050e4454();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar3 = FUN_050ef21c(lVar2,0);
  if ((uVar3 & 1) == 0) {
    return 1;
  }
                    /* try { // try from 03548f8c to 03648f9b has its CatchHandler @ 03548f9c */
  uVar5 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
                    /* catch() { ... } // from try @ 03548f8c with catch @ 03548f9c */
                    /* catch() { ... } // from try @ 03548e58 with catch @ 03548fa0 */
                    /* try { // try from 03548fa4 to 03648fa7 has its CatchHandler @ 03548fb0 */
  plVar4 = (long *)FUN_050e4454(uVar5,0);
                    /* try { // try from 03548fa8 to 03648fb3 has its CatchHandler @ 03548cb8 */
  if (plVar4 != (long *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03548fa4 with catch @ 03548fb0
                        */
                    /* try { // try from 03548fb4 to 036490cf has its CatchHandler @ 03548fb4
                       catch() { ... } // from try @ 03548fb4 with catch @ 03548fb4
                       catch() { ... } // from try @ 03549124 with catch @ 03548fb4
                       catch() { ... } // from try @ 03549168 with catch @ 03548fb4
                       catch() { ... } // from try @ 035492a4 with catch @ 03548fb4 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_067c9a28 + 0x130);
    if (*(byte *)(*plVar4 + 0x130) < bVar1) {
      plVar4 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_067c9a28) {
      plVar4 = (long *)0x0;
    }
  }
  uVar5 = thunk_FUN_02f1bb70(plVar4,0);
  return uVar5;
}


