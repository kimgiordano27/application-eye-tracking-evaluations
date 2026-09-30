/*
FUNCTION_NAME: FUN_01751570
ENTRY_POINT: 01751570
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01751570(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 01751574 to 018515bf has its CatchHandler @ 01751a3c */
  uVar1 = thunk_FUN_00d48444(System_Data_SimpleType_var);
  uVar2 = thunk_FUN_00d48444(StringLiteral_4945);
  uVar3 = thunk_FUN_00d48444(
                            Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__ctor__
                            );
  uVar1 = FUN_015e2494(uVar1,uVar2,uVar3,0);
  thunk_FUN_00d48444(
                    Method_Unity_XR_CoreUtils_Datums_DatumProperty<PokeThresholdData,_PokeThresholdDatum>__ctor__
                    );
  uVar2 = thunk_FUN_00d62348();
  FUN_00ac2be8();
                    /* try { // try from 017515dc to 018515e3 has its CatchHandler @ 01751a34 */
  FUN_0176e8d0(uVar2,uVar1,0);
  uVar1 = thunk_FUN_00d48444(OVRPlugin_Sizei_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar2,uVar1);
}


