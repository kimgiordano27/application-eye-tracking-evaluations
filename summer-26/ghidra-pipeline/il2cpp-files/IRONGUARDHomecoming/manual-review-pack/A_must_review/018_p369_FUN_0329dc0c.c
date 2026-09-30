/*
FUNCTION_NAME: FUN_0329dc0c
ENTRY_POINT: 0329dc0c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 233
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0329e05c) */
/* WARNING: Removing unreachable block (ram,0x0329e0f4) */

void FUN_0329dc0c(long *param_1,uint param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  
  if ((DAT_04831df3 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04831df3 = 1;
  }
  if (param_3 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_set_RenderScale__
                              );
    FUN_034efd20(uVar6,uVar5,0);
  }
  else {
    if (param_2 <= *(uint *)(param_1 + 3)) {
      lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      plVar3 = (long *)thunk_FUN_01f116d0(param_3,lVar8);
      if (plVar3 == (long *)0x0) {
                    /* catch() { ... } // from try @ 0329dce4 with catch @ 0329dcfc */
        lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44(lVar8);
        }
        lVar11 = *param_3;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar8) {
              puVar4 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0329de80;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
                    /* try { // try from 0329dd3c to 0339dd63 has its CatchHandler @ 0329dd78 */
          } while (uVar13 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(param_3,lVar8,0);
LAB_0329de80:
        plVar3 = (long *)(*(code *)*puVar4)(param_3,puVar4[1]);
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar8 = *plVar3;
          uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0329dee8;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_0329dee8:
          uVar13 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if ((uVar13 & 1) == 0) goto LAB_0329df94;
          lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44(lVar8);
          }
          lVar11 = *plVar3;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar8) {
                puVar4 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0329df60;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ecb238(plVar3,lVar8,0);
LAB_0329df60:
          uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          FUN_0329db14(param_1,param_2,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x88));
          param_2 = param_2 + 1;
        } while( true );
      }
      lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
                    /* try { // try from 0329dcb4 to 0339dcb7 has its CatchHandler @ 0329dcc0 */
      }
                    /* try { // try from 0329dcb8 to 0339dce3 has its CatchHandler @ 0329d80c */
      lVar11 = *plVar3;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0329dcb4 with catch @ 0329dcc0
                        */
      if (uVar13 != 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0329dbe0 with catch @ 0329dcc4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0329db10 with catch @ 0329dcc8
                        */
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0329db50 with catch @ 0329dccc
                        */
          if (*(long *)(piVar14 + -2) == lVar8) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0329dd5c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
                    /* try { // try from 0329dce4 to 0339dce7 has its CatchHandler @ 0329dcfc */
      puVar4 = (undefined8 *)FUN_01ecb238(plVar3,lVar8,0);
LAB_0329dd5c:
                    /* try { // try from 0329dd64 to 0339dd6f has its CatchHandler @ 0329d80c */
      iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (0 < iVar2) {
                    /* try { // try from 0329dd70 to 0339dd77 has its CatchHandler @ 0329dd78 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0329dd3c with catch @ 0329dd78
                       catch(type#2 @ 00000000) { ... } // from try @ 0329dd70 with catch @ 0329dd78
                        */
        Meta_WitAi_Events_SpeechEvents__get_OnRequestCreated
                  (param_1,(int)param_1[3] + iVar2,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28));
        iVar7 = (int)param_1[3] - param_2;
        if (iVar7 != 0 && (int)param_2 <= (int)param_1[3]) {
          FUN_0358d498(param_1[2],param_2,param_1[2],iVar2 + param_2,iVar7,0);
        }
        if (param_1 == plVar3) {
          FUN_0358d498(param_1[2],0,param_1[2],param_2,param_2,0);
          lVar11 = param_1[2];
          iVar7 = iVar2 + param_2;
          uVar9 = param_2 << 1;
          iVar10 = (int)param_1[3] - param_2;
          lVar8 = lVar11;
        }
        else {
          lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44();
          }
          lVar11 = FUN_01f08890(lVar8,iVar2);
          lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44(lVar8);
          }
          lVar12 = *plVar3;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar8) {
                puVar4 = (undefined8 *)(lVar12 + (long)(*piVar14 + 5) * 0x10 + 0x138);
                goto LAB_0329dff8;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ecb238(plVar3,lVar8,5);
LAB_0329dff8:
          (*(code *)*puVar4)(plVar3,lVar11,0,puVar4[1]);
          iVar7 = 0;
          lVar8 = param_1[2];
          uVar9 = param_2;
          iVar10 = iVar2;
        }
        FUN_0358d498(lVar11,iVar7,lVar8,uVar9,iVar10,0);
        *(int *)(param_1 + 3) = (int)param_1[3] + iVar2;
      }
      goto LAB_0329e060;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar6,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_4);
LAB_0329df94:
  if (plVar3 != (long *)0x0) {
    lVar8 = *plVar3;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0329e044;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0329e044:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
LAB_0329e060:
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
  return;
}


