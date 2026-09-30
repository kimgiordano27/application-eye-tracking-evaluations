/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_set_tx_no_session_t$$Dispose
ENTRY_POINT: 05ff0ea0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 173
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_7
*/


void Unity_Services_Vivox_vx_req_sessiongroup_set_tx_no_session_t__Dispose(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  int *in_x10;
  undefined4 *unaff_x19;
  undefined8 uVar5;
  long *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000028;
  
                    /* try { // try from 05ff0ea0 to 060f0f17 has its CatchHandler @ 05ff0778 */
  lVar3 = (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05ff0ff4 to 060f0ffb has its CatchHandler @ 05ff1004 */
    FUN_02d96860();
  }
  in_stack_00000028 =
       FUN_0481d028(lVar3,*(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer_inner>d__39>__
                   );
  uVar4 = FUN_047e6248(&stack0x00000028,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer>d__40>__
                      );
  if ((uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 05ff0f20 with catch @ 05ff0f64 */
                    /* catch() { ... } // from try @ 05ff0e54 with catch @ 05ff0f68 */
                    /* catch() { ... } // from try @ 05ff0f18 with catch @ 05ff0f6c */
    *unaff_x19 = 0;
                    /* catch() { ... } // from try @ 05ff0ddc with catch @ 05ff0f70 */
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
    LeanTween__value(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
                    /* try { // try from 05ff0f90 to 060f0f93 has its CatchHandler @ 05ff0f9c */
                    /* catch() { ... } // from try @ 05ff0f90 with catch @ 05ff0f9c */
                    /* try { // try from 05ff0fa0 to 060f0fa7 has its CatchHandler @ 05ff1004 */
    FUN_031ea3a8(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    lVar3 = FUN_047e6288(&stack0x00000028,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteAsyncInner>d__33>__
                        );
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar3 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 05ff0f18 to 060f0f1f has its CatchHandler @ 05ff0f6c */
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
                    /* try { // try from 05ff0f20 to 060f0f23 has its CatchHandler @ 05ff0f64 */
    if (*(long *)(unaff_x24 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05ff0fcc to 060f0fcf has its CatchHandler @ 05ff0ff0 */
      FUN_02d96860();
    }
                    /* try { // try from 05ff0f24 to 060f0f27 has its CatchHandler @ 05ff0f60 */
                    /* try { // try from 05ff0f28 to 060f0f2b has its CatchHandler @ 05ff0f58 */
    FUN_05ff55e8(*(long *)(unaff_x24 + 0x80),*(undefined8 *)(lVar3 + 0x18));
    puVar2 = OVRPlugin_SkeletonType_TypeInfo;
                    /* try { // try from 05ff0f2c to 060f0f43 has its CatchHandler @ 05ff0778 */
    uVar5 = *(undefined8 *)(lVar3 + 0x18);
                    /* catch() { ... } // from try @ 05ff0e9c with catch @ 05ff0f3c */
    iVar1 = *(int *)(*unaff_x23 + 0xe4);
                    /* try { // try from 05ff0f44 to 060f0f4b has its CatchHandler @ 05ff1004 */
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
                    /* try { // try from 05ff0f4c to 060f0f8f has its CatchHandler @ 05ff0778 */
      thunk_FUN_02df485c();
    }
                    /* catch() { ... } // from try @ 05ff0d6c with catch @ 05ff0f50 */
                    /* catch() { ... } // from try @ 05ff0d38 with catch @ 05ff0f54 */
                    /* catch() { ... } // from try @ 05ff0f28 with catch @ 05ff0f58 */
                    /* catch() { ... } // from try @ 05ff0dfc with catch @ 05ff0f5c */
    FUN_040b19d8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 05ff0f24 with catch @ 05ff0f60 */
  }
                    /* try { // try from 05ff0fa8 to 060f0fcb has its CatchHandler @ 05ff0778 */
                    /* catch() { ... } // from try @ 05ff0d3c with catch @ 05ff0fac */
                    /* catch() { ... } // from try @ 05ff0d1c with catch @ 05ff0fb0 */
  return;
}


