/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 027650c4
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x21;
  
  uVar1 = thunk_FUN_01851c08(PTR_DAT_037f5158);
  uVar2 = thunk_FUN_0184d740(uVar1,*(undefined8 *)*unaff_x21);
  if ((uVar2 & 1) != 0) {
    __cxa_end_catch();
    thunk_FUN_01851c08(PTR_DAT_038095a0,0);
    uVar1 = FUN_02a2e6b0();
    thunk_FUN_01851c08(PTR_DAT_037f87a8);
    uVar4 = thunk_FUN_01861bbc();
    System_Threading_Tasks_Task__Finish(uVar4,uVar1,0);
    uVar1 = thunk_FUN_01851c08(PTR_DAT_038095a8);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar4,uVar1);
  }
  uVar1 = thunk_FUN_01851c08(PTR_DAT_037fae80);
  uVar2 = thunk_FUN_0184d740(uVar1,*(undefined8 *)*unaff_x21);
  if ((uVar2 & 1) != 0) {
    uVar1 = *unaff_x21;
    __cxa_end_catch();
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
    uVar4 = thunk_FUN_01851c08(PTR_DAT_037fae88);
    FUN_02bcf6b4(uVar1,uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar1);
  }
  puVar3 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar3 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&PTR_StringLiteral_14485_0361ba68,0);
}


