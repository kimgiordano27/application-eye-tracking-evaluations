/*
FUNCTION_NAME: FUN_0685a6d4
ENTRY_POINT: 0685a6d4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_0685a6d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = Method_System_Collections_Generic_KeyValuePair<Collider,_Grabbable>_get_Value__;
  puVar3 = Method_System_Collections_Generic_KeyValuePair<Collider,_Grabbable>_get_Key__;
  puVar2 = 
  Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
  ;
                    /* try { // try from 0685a6d4 to 0695a6e3 has its CatchHandler @ 0685a978 */
  puVar1 = 
  Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Key__
  ;
                    /* try { // try from 0685a6f8 to 0695a707 has its CatchHandler @ 0685a970 */
  if ((DAT_076e0f08 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
                      );
                    /* try { // try from 0685a720 to 0695a727 has its CatchHandler @ 0685a9c0 */
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_KeyValuePair<Collider,_Grabbable>_get_Value__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_KeyValuePair<Collider,_Grabbable>_get_Key__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Key__
                      );
    DAT_076e0f08 = 1;
  }
  uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x10),uVar5);
  uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x18),uVar5);
  FUN_059660a0(param_1,0);
  return;
}


