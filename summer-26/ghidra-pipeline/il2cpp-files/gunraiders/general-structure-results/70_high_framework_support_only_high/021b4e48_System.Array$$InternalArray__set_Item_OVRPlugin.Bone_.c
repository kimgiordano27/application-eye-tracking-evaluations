/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Bone>
ENTRY_POINT: 021b4e48
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Array__InternalArray__set_Item<OVRPlugin_Bone>(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01cf64e4(param_1);
  }
  puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar2 = thunk_FUN_01c273e8(PTR_DAT_0422f998);
  uVar3 = thunk_FUN_01c22fc8(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar5 = *puVar1;
    __cxa_end_catch();
    uVar2 = thunk_FUN_01c273e8(Unity_Services_Analytics_Internal_IDispatcher_TypeInfo);
    uVar2 = System_Convert__ToSingle(uVar2,uVar5,0);
    FUN_020edbd4(uVar2,0);
    return;
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_04025298,0);
}


