/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_t_time_end_set
ENTRY_POINT: 078c0b74
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_time_end_set
               (undefined8 param_1)

{
  long unaff_x20;
  undefined8 *puVar1;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
                    /* catch() { ... } // from try @ 078c0b34 with catch @ 078c0b74 */
                    /* catch() { ... } // from try @ 078c0b2c with catch @ 078c0b78 */
                    /* catch() { ... } // from try @ 078c0ae4 with catch @ 078c0b7c */
  puVar1 = *(undefined8 **)(unaff_x20 + 8);
                    /* catch() { ... } // from try @ 078c0a6c with catch @ 078c0b80 */
  if ((*(byte *)(unaff_x21 + 0x991) & 1) == 0) {
                    /* catch() { ... } // from try @ 078c0a60 with catch @ 078c0b84 */
                    /* catch() { ... } // from try @ 078c0b20 with catch @ 078c0b88 */
    FUN_03a8a718(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
                    /* catch() { ... } // from try @ 078c0a7c with catch @ 078c0b94 */
    *(undefined1 *)(unaff_x21 + 0x991) = 1;
  }
                    /* catch() { ... } // from try @ 078c0b18 with catch @ 078c0b98 */
                    /* catch() { ... } // from try @ 078c0a8c with catch @ 078c0b9c
                       catch() { ... } // from try @ 078c0b1c with catch @ 078c0b9c */
                    /* catch() { ... } // from try @ 078c0a14 with catch @ 078c0ba0
                       catch() { ... } // from try @ 078c0b30 with catch @ 078c0ba0 */
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  FUN_0666efa0(0);
                    /* try { // try from 078c0bc4 to 079c0bdb has its CatchHandler @ 078c0d30 */
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000028 = in_stack_00000000;
  in_stack_00000040 = in_stack_00000018;
  in_stack_00000038 = in_stack_00000010;
  thunk_FUN_03afed3c((ulong)&stack0x00000020 | 8,0);
  in_stack_00000048 = param_1;
                    /* try { // try from 078c0bdc to 079c0c43 has its CatchHandler @ 078c094c */
  thunk_FUN_03afed3c(&stack0x00000048,param_1);
  in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,0xffffffff);
  FUN_0441c2a4((ulong)&stack0x00000020 | 8,&stack0x00000020,*puVar1);
  return;
}


