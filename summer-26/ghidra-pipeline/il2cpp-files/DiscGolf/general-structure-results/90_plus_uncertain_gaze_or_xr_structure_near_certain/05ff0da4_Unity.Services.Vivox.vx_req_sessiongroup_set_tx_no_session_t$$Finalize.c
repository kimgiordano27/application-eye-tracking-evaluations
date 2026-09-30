/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_set_tx_no_session_t$$Finalize
ENTRY_POINT: 05ff0da4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 122
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;telemetry_or_network_hits_11;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_11
*/


void Unity_Services_Vivox_vx_req_sessiongroup_set_tx_no_session_t__Finalize(code *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined2 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  undefined8 uVar9;
  long *unaff_x23;
  long unaff_x24;
  undefined2 uStack0000000000000004;
  undefined8 in_stack_00000028;
  
  plVar4 = (long *)(*param_1)();
  if (*(long *)(unaff_x24 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar6 = *plVar4;
  uVar9 = *(undefined8 *)(*(long *)(unaff_x24 + 0x68) + 0x38);
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
                    /* try { // try from 05ff0ddc to 060f0de3 has its CatchHandler @ 05ff0f70 */
      if (*(long *)(piVar8 + -2) ==
          *(long *)
           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<ProcessWrite>d__34>__
         ) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_05ff0e14;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
                    /* try { // try from 05ff0dfc to 060f0e03 has its CatchHandler @ 05ff0f5c */
  puVar5 = (undefined8 *)
           FUN_02dd004c(plVar4,*(long *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<ProcessWrite>d__34>__
                        ,1);
LAB_05ff0e14:
                    /* try { // try from 05ff0e1c to 060f0e23 has its CatchHandler @ 05ff0e7c */
  (*(code *)*puVar5)(plVar4,uVar9,puVar5[1]);
  if (*(long *)(unaff_x24 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar4 = *(long **)(unaff_x24 + 0xb0);
  uVar9 = *(undefined8 *)(*(long *)(unaff_x24 + 0x78) + 0x10);
  uStack0000000000000004 = 0;
  FUN_0432a748(&stack0x00000004,*(undefined1 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_069fcc60);
  uVar3 = uStack0000000000000004;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar6 = *plVar4;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)
           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
         ) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05ff0eac;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02dd004c(plVar4,*(long *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
                        ,0);
LAB_05ff0eac:
  lVar6 = (*(code *)*puVar5)(plVar4,uVar9,uVar3,0,0,puVar5[1]);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  in_stack_00000028 =
       FUN_0481d028(lVar6,*(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer_inner>d__39>__
                   );
  uVar7 = FUN_047e6248(&stack0x00000028,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer>d__40>__
                      );
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
    LeanTween__value(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_031ea3a8(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    lVar6 = FUN_047e6288(&stack0x00000028,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteAsyncInner>d__33>__
                        );
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar6 = *(long *)(lVar6 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(unaff_x24 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_05ff55e8(*(long *)(unaff_x24 + 0x80),*(undefined8 *)(lVar6 + 0x18));
    puVar2 = OVRPlugin_SkeletonType_TypeInfo;
    uVar9 = *(undefined8 *)(lVar6 + 0x18);
    iVar1 = *(int *)(*unaff_x23 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_02df485c();
    }
    FUN_040b19d8(unaff_x19 + 2,uVar9,*(undefined8 *)puVar2);
  }
  return;
}


