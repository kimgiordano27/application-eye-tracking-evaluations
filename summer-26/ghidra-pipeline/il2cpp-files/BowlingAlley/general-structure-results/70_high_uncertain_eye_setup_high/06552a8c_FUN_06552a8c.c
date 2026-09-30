/*
FUNCTION_NAME: FUN_06552a8c
ENTRY_POINT: 06552a8c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_06552a8c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((DAT_076dfb4d & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                      );
    DAT_076dfb4d = 1;
  }
  if (param_2 != 0) {
    FUN_04bf70d4(param_1 + 0xb0,param_2,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                );
    return;
  }
  thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
  uVar1 = thunk_FUN_032a56a0();
  uVar2 = thunk_FUN_032e1da0(PTR_DAT_07280568);
  FUN_05897d14(uVar1,uVar2,0);
  uVar2 = thunk_FUN_032e1da0(
                            Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar1,uVar2);
}


