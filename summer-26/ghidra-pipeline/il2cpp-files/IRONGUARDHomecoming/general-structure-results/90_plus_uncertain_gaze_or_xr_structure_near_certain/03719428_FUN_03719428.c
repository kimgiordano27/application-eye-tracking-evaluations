/*
FUNCTION_NAME: FUN_03719428
ENTRY_POINT: 03719428
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 227
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x037197a4) */

void FUN_03719428(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  int *piVar13;
  
  if ((DAT_04836142 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Net_WebConnection_<>c_<Connect>b__16_0__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Net_WebConnection_<>c_<Connect>b__16_1__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Net_WebConnection_<Connect>d__16_MoveNext__);
    thunk_FUN_01efb3a4(Method_System_Net_WebConnection_<CreateStream>d__18_MoveNext__);
    thunk_FUN_01efb3a4(Method_System_Net_WebConnection_<InitConnection>d__19_MoveNext__);
    thunk_FUN_01efb3a4(Method_System_Net_WebConnectionTunnel_<Initialize>d__42_MoveNext__);
    thunk_FUN_01efb3a4(Method_System_Net_WebConnectionTunnel_<ReadHeaders>d__43_MoveNext__);
    thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_SetException__);
    thunk_FUN_01efb3a4(Method_System_Net_WebReadStream_<ReadAsync>d__28_MoveNext__);
    DAT_04836142 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar7 = FUN_036dae98(param_2,0);
    if ((uVar7 & 1) == 0) {
      FUN_037184fc(param_1,*(undefined8 *)
                            Method_System_Net_WebConnection_<CreateStream>d__18_MoveNext__);
      lVar8 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
      if (lVar8 != 0) {
        plVar9 = (long *)FUN_02a856dc(lVar8,*(undefined8 *)
                                             Method_System_Net_WebConnection_<>c_<Connect>b__16_0__)
        ;
        puVar6 = Method_System_Net_WebReadStream_<ReadAsync>d__28_MoveNext__;
        puVar5 = Method_System_Net_WebConnectionTunnel_<Initialize>d__42_MoveNext__;
        puVar4 = Method_System_Net_WebConnection_<InitConnection>d__19_MoveNext__;
        puVar3 = Method_System_Net_WebConnection_<Connect>d__16_MoveNext__;
        puVar2 = Method_System_Net_WebConnection_<>c_<Connect>b__16_1__;
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar8 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_037195b0;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_037195b0:
          uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar7 & 1) == 0) {
            if (plVar9 == (long *)0x0) {
              return;
            }
            lVar8 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar7 == 0) goto LAB_037196e4;
            piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_037196cc;
          }
          lVar8 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0371960c;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_0371960c:
          lVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(char *)(lVar8 + 0x20) == '\0') {
            FUN_037184fc(param_1,*(undefined8 *)puVar3);
          }
          else {
            FUN_037184fc(param_1,*(undefined8 *)puVar6);
          }
          plVar11 = *(long **)(lVar8 + 0x10);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar12 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
          uVar12 = FUN_03405678(*(undefined8 *)puVar5,uVar12,0);
          FUN_037184fc(param_1,uVar12);
          uVar12 = FUN_03587f1c(lVar8 + 0x18,0);
          uVar12 = FUN_03405678(*(undefined8 *)puVar4,uVar12,0);
          FUN_037184fc(param_1,uVar12);
        } while( true );
      }
    }
    else {
      FUN_037184fc(param_1,*(undefined8 *)
                            Method_System_Net_WebConnectionTunnel_<ReadHeaders>d__43_MoveNext__);
      lVar8 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
      if (lVar8 != 0) {
        uVar12 = FUN_03405678(*(undefined8 *)Method_System_Net_FtpWebRequest_SetException__,
                              *(undefined8 *)(lVar8 + 0x18),0);
        FUN_037184fc(param_1,uVar12);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
LAB_037196cc:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03719700;
    }
  }
LAB_037196e4:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03719700:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
}


