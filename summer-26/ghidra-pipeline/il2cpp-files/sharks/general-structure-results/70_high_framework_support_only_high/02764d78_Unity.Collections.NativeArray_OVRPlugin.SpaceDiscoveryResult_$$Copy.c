/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 02764d78
PROGRAM: sharks-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x21;
  
                    /* try { // try from 02764d78 to 02864d7b has its CatchHandler @ 02764d90 */
  uVar1 = thunk_FUN_01851c08();
  uVar2 = thunk_FUN_0184d740(uVar1,*(undefined8 *)*unaff_x21);
  if ((uVar2 & 1) != 0) {
    __cxa_end_catch();
                    /* catch() { ... } // from try @ 02764d78 with catch @ 02764d90 */
    FUN_02baeab0();
    return;
  }
  uVar1 = thunk_FUN_01851c08(PTR_DAT_037fae80);
  uVar2 = thunk_FUN_0184d740(uVar1,*(undefined8 *)*unaff_x21);
  if ((uVar2 & 1) != 0) {
    uVar1 = *unaff_x21;
    __cxa_end_catch();
                    /* try { // try from 02764dd0 to 02864df7 has its CatchHandler @ 02764e0c */
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a0(uVar1);
  }
  uVar1 = thunk_FUN_01851c08(PTR_DAT_037f4600);
  uVar2 = thunk_FUN_0184d740(uVar1,*(undefined8 *)*unaff_x21);
  if ((uVar2 & 1) != 0) {
    uVar5 = *unaff_x21;
    __cxa_end_catch();
    thunk_FUN_01851c08(PTR_DAT_037f8d50);
    uVar1 = thunk_FUN_01861bbc();
    uVar3 = thunk_FUN_01851c08(PTR_DAT_037fae88);
    FUN_02bcf6b4(uVar1,uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar1);
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_StringLiteral_14485_0361ba68,0);
}


