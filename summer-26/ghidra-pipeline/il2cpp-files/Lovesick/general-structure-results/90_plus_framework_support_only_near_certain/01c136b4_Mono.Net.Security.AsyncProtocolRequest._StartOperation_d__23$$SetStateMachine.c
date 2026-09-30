/*
FUNCTION_NAME: Mono.Net.Security.AsyncProtocolRequest.<StartOperation>d__23$$SetStateMachine
ENTRY_POINT: 01c136b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 159
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_2
*/


void Mono_Net_Security_AsyncProtocolRequest_<StartOperation>d__23__SetStateMachine(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined8 uVar3;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  long unaff_x29;
  
  do {
    if (unaff_x22 != 0) {
      unaff_x19 = FUN_015f5b28(unaff_x19,*unaff_x21,0);
      param_1 = (ulong)*(uint *)(unaff_x29 + 0x18);
    }
    if ((param_1 & 0xffffffff) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01c1389c to 01d1389f has its CatchHandler @ 01c138fc */
      FUN_00da5194();
    }
    uVar3 = *(undefined8 *)(unaff_x29 + 0x20 + unaff_x22 * 8);
                    /* try { // try from 01c136e4 to 01d136f3 has its CatchHandler @ 01c136f4 */
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
                    /* catch() { ... } // from try @ 01c13668 with catch @ 01c136f4
                       catch() { ... } // from try @ 01c136e4 with catch @ 01c136f4 */
                    /* try { // try from 01c136f8 to 01d136fb has its CatchHandler @ 01c13704 */
    uVar3 = FUN_01c4b4e0(uVar3,0);
                    /* try { // try from 01c136fc to 01d13707 has its CatchHandler @ 01c131a8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01c136f8 with catch @ 01c13704
                        */
                    /* try { // try from 01c13708 to 01d13793 has its CatchHandler @ 01c13708
                       catch() { ... } // from try @ 01c13708 with catch @ 01c13708
                       catch() { ... } // from try @ 01c138a0 with catch @ 01c13708
                       catch() { ... } // from try @ 01c138e8 with catch @ 01c13708
                       catch() { ... } // from try @ 01c1393c with catch @ 01c13708
                       catch() { ... } // from try @ 01c139b8 with catch @ 01c13708 */
    unaff_x19 = FUN_015f5b28(unaff_x19,uVar3,0);
    param_1 = (ulong)*(uint *)(unaff_x29 + 0x18);
    unaff_x22 = unaff_x22 + 1;
  } while ((long)unaff_x22 < (long)(int)*(uint *)(unaff_x29 + 0x18));
  uVar3 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
  uVar3 = FUN_00da4fb8(uVar3,5);
  FUN_00ac2be8();
  puVar1 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<char>_SetException__;
  uVar2 = thunk_FUN_00d48444(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<char>_SetException__
                            );
  FUN_00acb0b4(uVar3,uVar2);
  uVar2 = thunk_FUN_00d48444(puVar1);
  FUN_00acb320(uVar3,0,uVar2);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
  FUN_00acb0a4();
  uVar2 = FUN_01c4b4e0();
  FUN_00ac2be8(uVar3);
  FUN_00acb0b4(uVar3,uVar2);
  FUN_00acb320(uVar3,1,uVar2);
  FUN_00ac2be8(uVar3);
  puVar1 = OVRPlugin_OVRP_1_126_0_TypeInfo;
  uVar2 = thunk_FUN_00d48444(OVRPlugin_OVRP_1_126_0_TypeInfo);
  FUN_00acb0b4(uVar3,uVar2);
  uVar2 = thunk_FUN_00d48444(puVar1);
  FUN_00acb320(uVar3,2,uVar2);
  FUN_00ac2be8(uVar3);
  FUN_00acb0b4(uVar3,unaff_x19);
  FUN_00acb320(uVar3,3,unaff_x19);
  FUN_00ac2be8(uVar3);
  puVar1 = Method_Oculus_Platform_Models_DeserializableList<User>_get_NextUrl__;
  uVar2 = thunk_FUN_00d48444(Method_Oculus_Platform_Models_DeserializableList<User>_get_NextUrl__);
  FUN_00acb0b4(uVar3,uVar2);
  uVar2 = thunk_FUN_00d48444(puVar1);
  FUN_00acb320(uVar3,4,uVar2);
  uVar3 = FUN_01600844(uVar3,0);
  thunk_FUN_00d48444(StringLiteral_302);
  FUN_00acb0a4();
  FUN_026610e4(uVar3,0);
  thunk_FUN_00d48444(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_1__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038();
}


