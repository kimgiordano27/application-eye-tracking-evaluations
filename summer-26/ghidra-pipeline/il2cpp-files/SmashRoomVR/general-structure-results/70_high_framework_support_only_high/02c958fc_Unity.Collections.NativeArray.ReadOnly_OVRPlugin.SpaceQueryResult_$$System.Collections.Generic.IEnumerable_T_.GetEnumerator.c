/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 02c958fc
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x21;
  
  uVar1 = thunk_FUN_01ad4b8c(param_2,*param_1);
  if ((uVar1 & 1) != 0) {
    uVar4 = *unaff_x21;
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_01ab0160(uVar4);
  }
  uVar4 = thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_4__
                            );
  uVar1 = thunk_FUN_01ad4b8c(uVar4,*(undefined8 *)*unaff_x21);
  if ((uVar1 & 1) != 0) {
    uVar5 = *unaff_x21;
    __cxa_end_catch();
    thunk_FUN_01ad9084(StringLiteral_2234);
    uVar4 = thunk_FUN_01afaadc();
    uVar2 = thunk_FUN_01ad9084(StringLiteral_2908);
    FUN_030406e8(uVar4,uVar2,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar4);
  }
  puVar3 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar3 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&PTR_Method_Unity_VisualScripting_Member_<>c_<_ctor>b__5_0___03b4f5b8,0);
}


