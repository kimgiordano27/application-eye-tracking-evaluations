/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$GetControllerStateWithPose
ENTRY_POINT: 037198b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 232
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x03719c70) */

void OVR_OpenVR_CVRSystem__GetControllerStateWithPose(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int *piVar11;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  thunk_FUN_01efb3a4(Method_System_Net_WebRequestStream_<WriteChunkTrailer>d__40_MoveNext__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(Method_System_Net_WebRequestStream_<WriteRequestAsync>d__38_MoveNext__);
  thunk_FUN_01efb3a4(Method_System_Net_WebResponseStream_<>c__DisplayClass41_0_<ProcessRead>b__0__);
  thunk_FUN_01efb3a4(Method_System_Net_WebResponseStream_<>c__DisplayClass41_0_<ProcessRead>b__1__);
  thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_SetException__);
  thunk_FUN_01efb3a4(Method_System_Net_WebResponseStream_<>c__DisplayClass41_0_<ProcessRead>b__2__);
  thunk_FUN_01efb3a4(Method_System_Net_WebResponseStream_<InitReadAsync>d__52_MoveNext__);
  thunk_FUN_01efb3a4(Method_System_Net_WebResponseStream_<ReadAllAsync>d__48_MoveNext__);
  thunk_FUN_01efb3a4(Method_System_Net_WebResponseStream_<ReadAllAsyncInner>d__47_MoveNext__);
  thunk_FUN_01efb3a4(Method_System_Net_WebResponseStream_<ReadAsync>d__40_MoveNext__);
  *(undefined1 *)(unaff_x21 + 0x143) = 1;
  if (unaff_x20 != (long *)0x0) {
    uVar6 = FUN_036dae98();
    if ((uVar6 & 1) == 0) {
      FUN_037184fc();
      lVar7 = (**(code **)(*unaff_x20 + 0x1b8))();
      if (lVar7 != 0) {
        plVar8 = (long *)FUN_02a856dc(lVar7,*(undefined8 *)
                                             Method_System_Net_WebRequestStream_<SetHeadersAsync>d__37_MoveNext__
                                     );
        puVar5 = Method_System_Net_WebResponseStream_<ReadAllAsync>d__48_MoveNext__;
        puVar4 = Method_System_Net_WebResponseStream_<>c__DisplayClass41_0_<ProcessRead>b__2__;
        puVar3 = Method_System_Net_WebRequestStream_<WriteChunkTrailer>d__40_MoveNext__;
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar7 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03719a24;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_03719a24:
          uVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar6 & 1) == 0) {
            if (plVar8 == (long *)0x0) {
              return;
            }
            lVar7 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar6 == 0) goto LAB_03719bb4;
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_03719b9c;
          }
          lVar7 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03719a80;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_03719a80:
          lVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar1 = *(int *)(lVar7 + 0x10);
          if (iVar1 == 1) {
            FUN_037184fc();
          }
          else if (iVar1 == 2) {
            FUN_037184fc();
            uVar10 = FUN_035870e0(lVar7 + 0x20,0);
            FUN_03405678(*(undefined8 *)puVar5,uVar10,0);
            FUN_037184fc();
            uVar10 = FUN_03587f1c(lVar7 + 0x28,0);
            FUN_03405678(*(undefined8 *)puVar4,uVar10,0);
            FUN_037184fc();
          }
          else if (iVar1 == 3) {
            FUN_037184fc();
            uVar10 = FUN_03587f1c(lVar7 + 0x28,0);
            FUN_03405678(*(undefined8 *)puVar4,uVar10,0);
            FUN_037184fc();
          }
          else {
            FUN_037184fc();
          }
        } while( true );
      }
    }
    else {
      FUN_037184fc();
      lVar7 = (**(code **)(*unaff_x20 + 0x178))();
      if (lVar7 != 0) {
        FUN_03405678(*(undefined8 *)Method_System_Net_FtpWebRequest_SetException__,
                     *(undefined8 *)(lVar7 + 0x18),0);
        FUN_037184fc();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar11 = piVar11 + 4;
    if (uVar6 == 0) break;
LAB_03719b9c:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03719bd0;
    }
  }
LAB_03719bb4:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03719bd0:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


