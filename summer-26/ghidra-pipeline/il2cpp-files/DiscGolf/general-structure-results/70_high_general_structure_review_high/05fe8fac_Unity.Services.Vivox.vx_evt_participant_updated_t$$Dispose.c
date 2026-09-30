/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_participant_updated_t$$Dispose
ENTRY_POINT: 05fe8fac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_vx_evt_participant_updated_t__Dispose
               (ulong param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 unaff_x20;
  long unaff_x21;
  long *plVar11;
  long lVar12;
  long unaff_x23;
  undefined8 *puVar13;
  long *plVar14;
  
  puVar13 = *(undefined8 **)(unaff_x23 + 0x770);
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0d728);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer_inner>d__39>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteRequestAsync>d__38>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_BufferedStream_<CopyToAsyncCore>d__71>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_BufferedStream_<FlushWriteAsync>d__42>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_BufferedStream_<WriteToUnderlyingStreamAsync>d__63>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_Stream_<CopyToAsyncInternal>d__28>__
                );
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuidAsync>d__29>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<WaitForInit>d__22>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer>d__40>__
                );
    *(undefined1 *)(unaff_x21 + 0x8f8) = 1;
  }
  lVar6 = thunk_FUN_02dd3144(*puVar13);
  FUN_0552aca4(lVar6,0);
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<WaitForInit>d__22>__
  ;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuidAsync>d__29>__
  ;
  if (lVar6 != 0) {
    plVar11 = (long *)(lVar6 + 0x10);
    *plVar11 = param_3;
    LeanTween__value(plVar11,param_3);
    lVar12 = *(long *)(param_2 + 0x30);
    uVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_04462620(uVar7,lVar6,*(undefined8 *)puVar4,0);
    if (lVar12 != 0) {
      iVar5 = FUN_04010a40(lVar12,uVar7,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_BufferedStream_<CopyToAsyncCore>d__71>__
                          );
      if (iVar5 < 0) {
        uVar7 = *(undefined8 *)(param_2 + 0x20);
        uVar1 = *(undefined8 *)(param_2 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar6 = FUN_0376b3f0(uVar1,uVar7,0,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_Stream_<CopyToAsyncInternal>d__28>__
                            );
        if (((lVar6 != 0) && (lVar6 = FUN_0634bbcc(lVar6,0), lVar6 != 0)) &&
           (plVar8 = (long *)FUN_0364c2b0(lVar6,*(undefined8 *)
                                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer_inner>d__39>__
                                         ), plVar8 != (long *)0x0)) {
          (**(code **)(*plVar8 + 0x188))(plVar8,*plVar11,*(undefined8 *)(*plVar8 + 400));
          plVar14 = (long *)plVar8[0xc];
          uVar9 = FUN_0536c9cc();
          if ((uVar9 & 1) != 0) {
            if (*plVar11 == 0) goto LAB_05fe927c;
            unaff_x20 = *(undefined8 *)(*plVar11 + 0x28);
          }
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x5e8))(plVar14,unaff_x20,*(undefined8 *)(*plVar14 + 0x5f0));
            lVar6 = *(long *)(param_2 + 0x30);
            if (lVar6 != 0) {
              lVar12 = *(long *)(lVar6 + 0x10);
              lVar10 = *(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteRequestAsync>d__38>__
              ;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar12 != 0) {
                uVar2 = *(uint *)(lVar6 + 0x18);
                if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                  plVar11 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
                  *plVar11 = (long)plVar8;
                  LeanTween__value(plVar11,plVar8);
                  return;
                }
                FUN_040101ec(lVar6,plVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
          }
        }
      }
      else if ((*(long *)(param_2 + 0x30) != 0) &&
              (lVar6 = FUN_0400ff1c(*(long *)(param_2 + 0x30),iVar5,
                                    *(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_BufferedStream_<WriteToUnderlyingStreamAsync>d__63>__
                                   ), puVar3 = PTR_DAT_06a0d728, lVar6 != 0)) {
        uVar7 = FUN_0634bbcc(lVar6,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar3);
        }
        FUN_05f8a28c(uVar7,0);
        if (*(long *)(param_2 + 0x30) != 0) {
          FUN_0401187c(*(long *)(param_2 + 0x30),iVar5,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_BufferedStream_<FlushWriteAsync>d__42>__
                      );
          return;
        }
      }
    }
  }
LAB_05fe927c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


