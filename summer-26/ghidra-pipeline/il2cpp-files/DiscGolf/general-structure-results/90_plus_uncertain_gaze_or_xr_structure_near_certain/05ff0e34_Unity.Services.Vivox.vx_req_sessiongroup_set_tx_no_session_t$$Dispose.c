/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_set_tx_no_session_t$$Dispose
ENTRY_POINT: 05ff0e34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 173
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_9;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_9
*/


void Unity_Services_Vivox_vx_req_sessiongroup_set_tx_no_session_t__Dispose(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *in_x9;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x23;
  long unaff_x24;
  undefined2 uStack0000000000000004;
  undefined8 in_stack_00000028;
  
  plVar8 = *(long **)(unaff_x24 + 0xb0);
                    /* try { // try from 05ff0e38 to 060f0e3f has its CatchHandler @ 05ff0e74 */
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uStack0000000000000004 = 0;
  FUN_0432a748(&stack0x00000004,*(undefined1 *)(unaff_x19 + 10),*in_x9);
  uVar3 = uStack0000000000000004;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
                    /* try { // try from 05ff0e54 to 060f0e57 has its CatchHandler @ 05ff0f68 */
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 05ff0e6c to 060f0e6f has its CatchHandler @ 05ff0e78 */
  if (uVar6 != 0) {
                    /* try { // try from 05ff0e70 to 060f0e9b has its CatchHandler @ 05ff0778 */
                    /* catch() { ... } // from try @ 05ff0e38 with catch @ 05ff0e74 */
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 05ff0e6c with catch @ 05ff0e78 */
                    /* catch() { ... } // from try @ 05ff0e1c with catch @ 05ff0e7c */
      if (*(long *)(piVar7 + -2) ==
          *(long *)
           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
         ) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_05ff0eac;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_02dd004c(plVar8,*(long *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
                        ,0);
                    /* try { // try from 05ff0e9c to 060f0e9f has its CatchHandler @ 05ff0f3c */
LAB_05ff0eac:
  lVar5 = (*(code *)*puVar4)(plVar8,uVar9,uVar3,0,0,puVar4[1]);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  in_stack_00000028 =
       FUN_0481d028(lVar5,*(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer_inner>d__39>__
                   );
  uVar6 = FUN_047e6248(&stack0x00000028,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer>d__40>__
                      );
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
    LeanTween__value(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_031ea3a8(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    lVar5 = FUN_047e6288(&stack0x00000028,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteAsyncInner>d__33>__
                        );
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *(long *)(lVar5 + 0x28);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(unaff_x24 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_05ff55e8(*(long *)(unaff_x24 + 0x80),*(undefined8 *)(lVar5 + 0x18));
    puVar2 = OVRPlugin_SkeletonType_TypeInfo;
    uVar9 = *(undefined8 *)(lVar5 + 0x18);
    iVar1 = *(int *)(*unaff_x23 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_02df485c();
    }
    FUN_040b19d8(unaff_x19 + 2,uVar9,*(undefined8 *)puVar2);
  }
  return;
}


