/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 02764de4
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x21;
  
  uVar1 = thunk_FUN_0184d740(param_1,*(undefined8 *)*unaff_x21);
  if ((uVar1 & 1) != 0) {
    uVar5 = *unaff_x21;
                    /* try { // try from 02764df8 to 02864e03 has its CatchHandler @ 027648c4 */
    __cxa_end_catch();
                    /* try { // try from 02764e04 to 02864e0b has its CatchHandler @ 02764e0c */
    thunk_FUN_01851c08(PTR_DAT_037f8d50);
    uVar2 = thunk_FUN_01861bbc();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02764dd0 with catch @ 02764e0c
                       catch(type#2 @ 00000000) { ... } // from try @ 02764e04 with catch @ 02764e0c
                        */
    uVar3 = thunk_FUN_01851c08(PTR_DAT_037fae88);
    FUN_02bcf6b4(uVar2,uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar2);
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_StringLiteral_14485_0361ba68,0);
}


