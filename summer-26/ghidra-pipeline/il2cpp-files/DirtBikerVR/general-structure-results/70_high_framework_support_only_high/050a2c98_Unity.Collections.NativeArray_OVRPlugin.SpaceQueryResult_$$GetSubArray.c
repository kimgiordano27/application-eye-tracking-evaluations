/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetSubArray
ENTRY_POINT: 050a2c98
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetSubArray(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  uVar1 = thunk_FUN_03af1434(param_1 + 0xb10);
  uVar2 = thunk_FUN_03aed0c4(uVar1,*(undefined8 *)*unaff_x20);
  if ((uVar2 & 1) != 0) {
    uVar1 = *unaff_x20;
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8(uVar1);
  }
  uVar1 = thunk_FUN_03af1434(&DAT_08617e70);
  uVar2 = thunk_FUN_03aed0c4(uVar1,*(undefined8 *)*unaff_x20);
  if ((uVar2 & 1) != 0) {
    uVar5 = *unaff_x20;
    __cxa_end_catch();
    thunk_FUN_03af1434(&DAT_0861aac0);
    uVar1 = thunk_FUN_03ac74bc();
    uVar3 = thunk_FUN_03af1434(&DAT_0868bc08);
    FUN_06750b68(uVar1,uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar1);
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_07fde6e8,0);
}


