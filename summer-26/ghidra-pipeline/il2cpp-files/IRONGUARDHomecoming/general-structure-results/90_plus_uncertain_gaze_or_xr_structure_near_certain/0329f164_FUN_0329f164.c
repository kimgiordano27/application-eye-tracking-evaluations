/*
FUNCTION_NAME: FUN_0329f164
ENTRY_POINT: 0329f164
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 228
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0329f61c) */
/* WARNING: Removing unreachable block (ram,0x0329f6cc) */

void FUN_0329f164(long *param_1,uint param_2,long *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  uint *puVar16;
  uint *local_70;
  uint *puStack_68;
  uint local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0329f12c with catch @ 0329f198
                       try { // try from 0329f198 to 0339f1af has its CatchHandler @ 0329f0e0 */
  if ((DAT_04831df4 & 1) == 0) {
                    /* try { // try from 0329f1b0 to 0339f1c7 has its CatchHandler @ 0329f240 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04831df4 = 1;
  }
                    /* try { // try from 0329f1c8 to 0339f22f has its CatchHandler @ 0329f0e0 */
  lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  puVar16 = (uint *)((long)&local_70 -
                    ((ulong)*(uint *)(*(long *)(lVar11 + 0x20) + 0xfc) + 0xf & 0x1fffffff0));
  if (param_3 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(
                              Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_set_RenderScale__
                              );
    FUN_034efd20(uVar6,uVar7,0);
  }
  else {
    if (param_2 <= *(uint *)(param_1 + 3)) {
      lVar11 = *(long *)(lVar11 + 0x58);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      plVar4 = (long *)thunk_FUN_01f116d0(param_3,lVar11);
      if (plVar4 == (long *)0x0) {
        lVar11 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01ecaf44(lVar11);
        }
        lVar12 = *param_3;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar11) {
              puVar5 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0329f410;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(param_3,lVar11,0);
LAB_0329f410:
        plVar4 = (long *)(*(code *)*puVar5)(param_3,puVar5[1]);
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar11 = *plVar4;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0329f47c;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_0329f47c:
          uVar14 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar14 & 1) == 0)
          goto 
          Meta_WitAi_Events_UnityEventListeners_TranscriptionEventListener__get_OnPartialTranscription
          ;
          lVar11 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01ecaf44(lVar11);
          }
          lVar12 = *plVar4;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar11) {
                lVar11 = lVar12 + (long)*piVar15 * 0x10 + 0x138;
                goto LAB_0329f4f4;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          lVar11 = FUN_01ecb238(plVar4,lVar11,0);
LAB_0329f4f4:
          lVar11 = *(long *)(lVar11 + 8);
          local_70 = puVar16;
          (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 8),lVar11,plVar4,&local_70,puVar16);
          lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
          puStack_68 = puVar16;
          if (-1 < *(int *)(*(long *)(lVar11 + 0x20) + 0x28)) {
            puStack_68 = *(uint **)puVar16;
          }
          puVar5 = *(undefined8 **)(lVar11 + 0x88);
          local_70 = &local_5c;
          local_5c = param_2;
          (*(code *)puVar5[2])(*puVar5,puVar5,param_1,&local_70);
          param_2 = param_2 + 1;
        } while( true );
      }
      lVar11 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      lVar12 = *plVar4;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar11) {
            puVar5 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0329f2e8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar11,0);
LAB_0329f2e8:
      iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (0 < iVar3) {
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28))
                  (param_1,(int)param_1[3] + iVar3);
        iVar8 = (int)param_1[3] - param_2;
        if (iVar8 != 0 && (int)param_2 <= (int)param_1[3]) {
          FUN_0358d498(param_1[2],param_2,param_1[2],iVar3 + param_2,iVar8,0);
        }
        if (param_1 == plVar4) {
          FUN_0358d498(param_1[2],0,param_1[2],param_2,param_2,0);
          lVar12 = param_1[2];
          iVar8 = iVar3 + param_2;
          uVar9 = param_2 << 1;
          iVar10 = (int)param_1[3] - param_2;
          lVar11 = lVar12;
        }
        else {
          lVar11 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01ecaf44();
          }
          lVar12 = FUN_01f08890(lVar11,iVar3);
          lVar11 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01ecaf44(lVar11);
          }
          lVar13 = *plVar4;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar11) {
                puVar5 = (undefined8 *)(lVar13 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                goto LAB_0329f5b8;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar11,5);
LAB_0329f5b8:
          (*(code *)*puVar5)(plVar4,lVar12,0,puVar5[1]);
          iVar8 = 0;
          lVar11 = param_1[2];
          uVar9 = param_2;
          iVar10 = iVar3;
        }
        FUN_0358d498(lVar12,iVar8,lVar11,uVar9,iVar10,0);
        *(int *)(param_1 + 3) = (int)param_1[3] + iVar3;
      }
      goto LAB_0329f620;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar6,uVar7,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_4);
Meta_WitAi_Events_UnityEventListeners_TranscriptionEventListener__get_OnPartialTranscription:
  if (plVar4 != (long *)0x0) {
    lVar11 = *plVar4;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0329f604;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0329f604:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
LAB_0329f620:
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


