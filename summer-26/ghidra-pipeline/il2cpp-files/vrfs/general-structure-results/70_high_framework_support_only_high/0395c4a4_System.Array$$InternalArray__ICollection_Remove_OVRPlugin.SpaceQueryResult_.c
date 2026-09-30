/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0395c4a4
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_SpaceQueryResult>(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 uVar4;
  
  uVar1 = thunk_FUN_0159a104(param_1,*(undefined8 *)*unaff_x22);
  if ((uVar1 & 1) != 0) {
    __cxa_end_catch();
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x1b0);
    lVar2 = thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_031c8668(uVar4,0);
                    /* try { // try from 0395c4e8 to 03a5c4f7 has its CatchHandler @ 0395c52c */
    FUN_031db370();
    return;
  }
                    /* try { // try from 0395c500 to 03a5c507 has its CatchHandler @ 0395c528 */
  puVar3 = (undefined8 *)__cxa_allocate_exception(8);
                    /* try { // try from 0395c508 to 03a5c543 has its CatchHandler @ 0395c48c */
  *puVar3 = *unaff_x22;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&PTR_PTR_06a5a440,0);
}


