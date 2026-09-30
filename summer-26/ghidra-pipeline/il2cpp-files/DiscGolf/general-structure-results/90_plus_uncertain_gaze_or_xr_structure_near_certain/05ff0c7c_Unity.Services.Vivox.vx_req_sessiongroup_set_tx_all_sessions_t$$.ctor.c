/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_set_tx_all_sessions_t$$.ctor
ENTRY_POINT: 05ff0c7c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 144
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;paired_field_refs_with_eye_source;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_21
*/


void Unity_Services_Vivox_vx_req_sessiongroup_set_tx_all_sessions_t___ctor(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int *unaff_x19;
  long unaff_x20;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0xb58));
  FUN_02d965b8(OVRPlugin_SkeletonType_TypeInfo);
  FUN_02d965b8(OVRPlugin_OVRP_1_94_0_TypeInfo);
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<Initialize>d__36>__
              );
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<ProcessWrite>d__34>__
              );
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
              );
  FUN_02d965b8(PTR_DAT_069fcc60);
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteAsyncInner>d__33>__
              );
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer>d__40>__
              );
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer_inner>d__39>__
              );
  *(undefined1 *)(unaff_x20 + 0x953) = 1;
  puVar3 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  lVar13 = *(long *)(unaff_x19 + 8);
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar1 = *(uint *)(lVar13 + 0x98);
                    /* try { // try from 05ff0d1c to 060f0d23 has its CatchHandler @ 05ff0fb0 */
    if ((uVar1 & 0xfffffffe) != 2) {
      lVar13 = *(long *)(lVar13 + 0xb8);
      if (lVar13 != 0) {
        uVar12 = thunk_FUN_02dfd288(
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<<LeaveAsync>g__LeaveAndReset_116_0>d>__
                                   );
        uVar12 = FUN_0297bdd0(0,uVar12,lVar13,uVar1);
        uVar7 = thunk_FUN_02dfd288(
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteRequestAsync>d__38>__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar12,uVar7);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar11 = *(long **)(lVar13 + 0xb0);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar8 = *plVar11;
                    /* try { // try from 05ff0d38 to 060f0d3b has its CatchHandler @ 05ff0f54 */
                    /* try { // try from 05ff0d3c to 060f0d4b has its CatchHandler @ 05ff0fac */
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<Initialize>d__36>__
           ) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05ff0d9c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02dd004c(plVar11,*(long *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<Initialize>d__36>__
                          ,0);
LAB_05ff0d9c:
    plVar11 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
    if (*(long *)(lVar13 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar8 = *plVar11;
    uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x68) + 0x38);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<ProcessWrite>d__34>__
           ) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_05ff0e14;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02dd004c(plVar11,*(long *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<ProcessWrite>d__34>__
                          ,1);
LAB_05ff0e14:
    (*(code *)*puVar6)(plVar11,uVar12,puVar6[1]);
    if (*(long *)(lVar13 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar11 = *(long **)(lVar13 + 0xb0);
    uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x78) + 0x10);
    in_stack_00000000._4_2_ = 0;
    FUN_0432a748((long)&stack0x00000000 + 4,(char)unaff_x19[10],*(undefined8 *)PTR_DAT_069fcc60);
    uVar5 = in_stack_00000000._4_2_;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
           ) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05ff0eac;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02dd004c(plVar11,*(long *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
                          ,0);
LAB_05ff0eac:
    lVar8 = (*(code *)*puVar6)(plVar11,uVar12,uVar5,0,0,puVar6[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_stack_00000028 =
         FUN_0481d028(lVar8,*(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer_inner>d__39>__
                     );
    uVar9 = FUN_047e6248(&stack0x00000028,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer>d__40>__
                        );
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      LeanTween__value(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031ea3a8(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
  lVar8 = FUN_047e6288(&stack0x00000028,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteAsyncInner>d__33>__
                      );
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar8 = *(long *)(lVar8 + 0x28);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(lVar13 + 0x80) != 0) {
    FUN_05ff55e8(*(long *)(lVar13 + 0x80),*(undefined8 *)(lVar8 + 0x18));
    puVar4 = OVRPlugin_SkeletonType_TypeInfo;
    uVar12 = *(undefined8 *)(lVar8 + 0x18);
    iVar2 = *(int *)(*(long *)puVar3 + 0xe4);
    *unaff_x19 = -2;
    if (iVar2 == 0) {
      thunk_FUN_02df485c();
    }
    FUN_040b19d8(unaff_x19 + 2,uVar12,*(undefined8 *)puVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


