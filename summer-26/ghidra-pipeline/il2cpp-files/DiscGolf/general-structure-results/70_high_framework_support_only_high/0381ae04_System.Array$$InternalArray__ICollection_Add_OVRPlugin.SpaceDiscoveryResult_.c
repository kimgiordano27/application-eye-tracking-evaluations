/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0381ae04
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceDiscoveryResult>(ulong param_1)

{
  byte bVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    return 1;
  }
                    /* try { // try from 0381ae08 to 0391ae0b has its CatchHandler @ 0381b3c4 */
  uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  plVar2 = (long *)FUN_054f73b4(uVar3,0);
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 0381ae3c to 0391ae47 has its CatchHandler @ 0381b3f4 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_06a0d350 + 0x130);
    if (*(byte *)(*plVar2 + 0x130) < bVar1) {
      plVar2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_06a0d350) {
      plVar2 = (long *)0x0;
    }
  }
  uVar3 = thunk_FUN_02da9b84(plVar2,0);
  return uVar3;
}


