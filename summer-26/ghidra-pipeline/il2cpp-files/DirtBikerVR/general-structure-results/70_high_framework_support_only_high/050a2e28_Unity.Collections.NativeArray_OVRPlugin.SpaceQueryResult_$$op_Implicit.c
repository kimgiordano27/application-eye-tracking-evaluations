/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$op_Implicit
ENTRY_POINT: 050a2e28
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__op_Implicit(ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x21;
  
  if ((param_1 & 1) != 0) {
    __cxa_end_catch();
    thunk_FUN_03af1434(PTR_DAT_084a81a8,0);
    uVar3 = FUN_065adf54();
    thunk_FUN_03af1434(PTR_DAT_08488490);
    uVar4 = thunk_FUN_03ac74bc();
    FUN_066b6070(uVar4,uVar3,0);
    uVar3 = thunk_FUN_03af1434(PTR_DAT_084a81b0);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar4,uVar3);
  }
  uVar3 = thunk_FUN_03af1434(&DAT_0861fb10);
  uVar1 = thunk_FUN_03aed0c4(uVar3,*(undefined8 *)*unaff_x21);
  if ((uVar1 & 1) != 0) {
    uVar3 = *unaff_x21;
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8(uVar3);
  }
  uVar3 = thunk_FUN_03af1434(&DAT_08617e70);
  uVar1 = thunk_FUN_03aed0c4(uVar3,*(undefined8 *)*unaff_x21);
  if ((uVar1 & 1) != 0) {
    uVar5 = *unaff_x21;
    __cxa_end_catch();
    thunk_FUN_03af1434(&DAT_0861aac0);
    uVar3 = thunk_FUN_03ac74bc();
    uVar4 = thunk_FUN_03af1434(&DAT_0868bc08);
    FUN_06750b68(uVar3,uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar3);
  }
  puVar2 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar2 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar2,&PTR_PTR_07fde6e8,0);
}


