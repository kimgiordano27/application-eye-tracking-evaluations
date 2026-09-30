/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Equals
ENTRY_POINT: 050a14ac
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Equals
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_03b79cbc();
  }
  puVar1 = (undefined8 *)__cxa_begin_catch();
  uVar2 = thunk_FUN_03af1434(&DAT_0861a588);
  uVar3 = thunk_FUN_03aed0c4(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    __cxa_end_catch();
    uVar2 = thunk_FUN_03af1434(PTR_DAT_084a81a8,0);
    uVar2 = FUN_065adf54(uVar2,0,0);
    thunk_FUN_03af1434(PTR_DAT_08488490);
    uVar5 = thunk_FUN_03ac74bc();
    FUN_066b6070(uVar5,uVar2,0);
    uVar2 = thunk_FUN_03af1434(PTR_DAT_084a81b0);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar5,uVar2);
  }
  uVar2 = thunk_FUN_03af1434(&DAT_0861fb10);
  uVar3 = thunk_FUN_03aed0c4(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar2 = *puVar1;
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8(uVar2);
  }
  uVar2 = thunk_FUN_03af1434(&DAT_08617e70);
  uVar3 = thunk_FUN_03aed0c4(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar6 = *puVar1;
    __cxa_end_catch();
    thunk_FUN_03af1434(&DAT_0861aac0);
    uVar2 = thunk_FUN_03ac74bc();
    uVar5 = thunk_FUN_03af1434(&DAT_0868bc08);
    FUN_06750b68(uVar2,uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar2);
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_07fde6e8,0);
}


