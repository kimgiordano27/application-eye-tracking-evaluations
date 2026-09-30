/*
FUNCTION_NAME: FUN_0371987c
ENTRY_POINT: 0371987c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 232
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_10;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x03719c70) */

void FUN_0371987c(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int *piVar14;
  
  if ((DAT_04836143 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Net_WebRequestStream_<SetHeadersAsync>d__37_MoveNext__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Net_WebRequestStream_<WriteChunkTrailer>d__40_MoveNext__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Net_WebRequestStream_<WriteRequestAsync>d__38_MoveNext__);
    thunk_FUN_01efb3a4(Method_System_Net_WebResponseStream_<>c__DisplayClass41_0_<ProcessRead>b__0__
                      );
    thunk_FUN_01efb3a4(Method_System_Net_WebResponseStream_<>c__DisplayClass41_0_<ProcessRead>b__1__
                      );
    thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_SetException__);
    thunk_FUN_01efb3a4(Method_System_Net_WebResponseStream_<>c__DisplayClass41_0_<ProcessRead>b__2__
                      );
    thunk_FUN_01efb3a4(Method_System_Net_WebResponseStream_<InitReadAsync>d__52_MoveNext__);
    thunk_FUN_01efb3a4(Method_System_Net_WebResponseStream_<ReadAllAsync>d__48_MoveNext__);
    thunk_FUN_01efb3a4(Method_System_Net_WebResponseStream_<ReadAllAsyncInner>d__47_MoveNext__);
    thunk_FUN_01efb3a4(Method_System_Net_WebResponseStream_<ReadAsync>d__40_MoveNext__);
    DAT_04836143 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar9 = FUN_036dae98(param_2,0);
    if ((uVar9 & 1) == 0) {
      FUN_037184fc(param_1,*(undefined8 *)
                            Method_System_Net_WebResponseStream_<>c__DisplayClass41_0_<ProcessRead>b__0__
                  );
      lVar10 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
      if (lVar10 != 0) {
        plVar11 = (long *)FUN_02a856dc(lVar10,*(undefined8 *)
                                               Method_System_Net_WebRequestStream_<SetHeadersAsync>d__37_MoveNext__
                                      );
        puVar8 = Method_System_Net_WebResponseStream_<ReadAsync>d__40_MoveNext__;
        puVar7 = Method_System_Net_WebResponseStream_<ReadAllAsync>d__48_MoveNext__;
        puVar6 = Method_System_Net_WebResponseStream_<InitReadAsync>d__52_MoveNext__;
        puVar5 = Method_System_Net_WebResponseStream_<>c__DisplayClass41_0_<ProcessRead>b__2__;
        puVar4 = Method_System_Net_WebResponseStream_<>c__DisplayClass41_0_<ProcessRead>b__1__;
        puVar3 = Method_System_Net_WebRequestStream_<WriteChunkTrailer>d__40_MoveNext__;
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar10 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar9 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03719a24;
              }
              uVar9 = uVar9 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar9 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_03719a24:
          uVar9 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          if ((uVar9 & 1) == 0) {
            if (plVar11 == (long *)0x0) {
              return;
            }
            lVar10 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar9 == 0) goto LAB_03719bb4;
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_03719b9c;
          }
          lVar10 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar9 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03719a80;
              }
              uVar9 = uVar9 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar9 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_03719a80:
          lVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar1 = *(int *)(lVar10 + 0x10);
          if (iVar1 == 1) {
            FUN_037184fc(param_1,*(undefined8 *)
                                  Method_System_Net_WebRequestStream_<WriteRequestAsync>d__38_MoveNext__
                        );
          }
          else if (iVar1 == 2) {
            FUN_037184fc(param_1,*(undefined8 *)puVar6);
            uVar13 = FUN_035870e0(lVar10 + 0x20,0);
            uVar13 = FUN_03405678(*(undefined8 *)puVar7,uVar13,0);
            FUN_037184fc(param_1,uVar13);
            uVar13 = FUN_03587f1c(lVar10 + 0x28,0);
            uVar13 = FUN_03405678(*(undefined8 *)puVar5,uVar13,0);
            FUN_037184fc(param_1,uVar13);
          }
          else if (iVar1 == 3) {
            FUN_037184fc(param_1,*(undefined8 *)puVar8);
            uVar13 = FUN_03587f1c(lVar10 + 0x28,0);
            uVar13 = FUN_03405678(*(undefined8 *)puVar5,uVar13,0);
            FUN_037184fc(param_1,uVar13);
          }
          else {
            FUN_037184fc(param_1,*(undefined8 *)puVar4);
          }
        } while( true );
      }
    }
    else {
      FUN_037184fc(param_1,*(undefined8 *)
                            Method_System_Net_WebResponseStream_<ReadAllAsyncInner>d__47_MoveNext__)
      ;
      lVar10 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
      if (lVar10 != 0) {
        uVar13 = FUN_03405678(*(undefined8 *)Method_System_Net_FtpWebRequest_SetException__,
                              *(undefined8 *)(lVar10 + 0x18),0);
        FUN_037184fc(param_1,uVar13);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar14 = piVar14 + 4;
    if (uVar9 == 0) break;
LAB_03719b9c:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03719bd0;
    }
  }
LAB_03719bb4:
  puVar12 = (undefined8 *)
            FUN_01ecb238(plVar11,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03719bd0:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
  return;
}


