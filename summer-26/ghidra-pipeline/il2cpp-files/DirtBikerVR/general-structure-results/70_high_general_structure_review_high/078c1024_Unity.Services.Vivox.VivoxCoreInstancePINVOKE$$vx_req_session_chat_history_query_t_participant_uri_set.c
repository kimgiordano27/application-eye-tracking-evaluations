/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_t_participant_uri_set
ENTRY_POINT: 078c1024
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_participant_uri_set
               (void)

{
  long lVar1;
  ulong uVar2;
  int *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 078c1024 to 079c1027 has its CatchHandler @ 078c11d0 */
  FUN_03a8a718(System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x995) = 1;
                    /* try { // try from 078c1038 to 079c103b has its CatchHandler @ 078c11b0 */
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 078c10f8 to 079c10fb has its CatchHandler @ 078c11d4 */
      FUN_03a8a9c0();
    }
                    /* try { // try from 078c1050 to 079c1057 has its CatchHandler @ 078c1190 */
    if (*(long *)(*(long *)(unaff_x19 + 10) + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 078c10fc to 079c10ff has its CatchHandler @ 078c11d0 */
      FUN_03a8a9c0();
    }
                    /* try { // try from 078c1058 to 079c10ab has its CatchHandler @ 078c0dac */
    lVar1 = FUN_078be788();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 078c1100 to 079c1103 has its CatchHandler @ 078c11ac */
      FUN_03a8a9c0();
    }
    in_stack_00000018 = FUN_067c4bec(lVar1,0);
    uVar2 = FUN_0666e8e0(&stack0x00000018,0);
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
                    /* try { // try from 078c10ac to 079c10b3 has its CatchHandler @ 078c1188 */
      FUN_04417234(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  FUN_0666e9a8(&stack0x00000018,0);
  *unaff_x19 = -2;
  FUN_0666f0cc(unaff_x19 + 2,0);
  return;
}


