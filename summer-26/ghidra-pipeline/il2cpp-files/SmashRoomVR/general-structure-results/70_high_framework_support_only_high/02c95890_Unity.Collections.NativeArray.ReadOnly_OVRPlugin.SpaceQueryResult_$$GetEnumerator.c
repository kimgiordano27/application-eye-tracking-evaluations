/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 02c95890
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__GetEnumerator
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01bbda54();
  }
  puVar1 = (undefined8 *)__cxa_begin_catch();
  uVar2 = thunk_FUN_01ad9084(StringLiteral_2609);
  uVar3 = thunk_FUN_01ad4b8c(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    __cxa_end_catch();
    FUN_03020d40(0,0);
    return;
  }
  uVar2 = thunk_FUN_01ad9084(StringLiteral_2907);
  uVar3 = thunk_FUN_01ad4b8c(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar2 = *puVar1;
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_01ab0160(uVar2);
  }
  uVar2 = thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_4__
                            );
  uVar3 = thunk_FUN_01ad4b8c(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar6 = *puVar1;
    __cxa_end_catch();
    thunk_FUN_01ad9084(StringLiteral_2234);
    uVar2 = thunk_FUN_01afaadc();
    uVar4 = thunk_FUN_01ad9084(StringLiteral_2908);
    FUN_030406e8(uVar2,uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar2);
  }
  puVar5 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar5 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar5,&PTR_Method_Unity_VisualScripting_Member_<>c_<_ctor>b__5_0___03b4f5b8,0);
}


