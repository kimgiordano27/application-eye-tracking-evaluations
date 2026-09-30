/*
FUNCTION_NAME: Meta.WitAi.Events.UnityEventListeners.AudioEventListener$$OnDisable
ENTRY_POINT: 0329f1e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 187
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0329f61c) */
/* WARNING: Removing unreachable block (ram,0x0329f6cc) */

void Meta_WitAi_Events_UnityEventListeners_AudioEventListener__OnDisable(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong in_x9;
  ulong uVar14;
  long in_x10;
  int *piVar15;
  long *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 *puVar16;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x29;
  
  puVar16 = (undefined8 *)(in_x10 - (in_x9 & 0x1fffffff0));
  if (unaff_x24 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(
                              Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_set_RenderScale__
                              );
    FUN_034efd20(uVar7,uVar6,0);
  }
  else {
    if (unaff_w20 <= *(uint *)(unaff_x19 + 3)) {
      if ((*(byte *)(*(long *)(param_1 + 0x58) + 0x135) & 1) == 0) {
        FUN_01ecaf44(*(long *)(param_1 + 0x58));
      }
      plVar4 = (long *)thunk_FUN_01f116d0();
      if (plVar4 == (long *)0x0) {
        lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01ecaf44(lVar9);
        }
        lVar12 = *unaff_x24;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar9) {
              puVar5 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0329f410;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238();
LAB_0329f410:
        plVar4 = (long *)(*(code *)*puVar5)();
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar9 = *plVar4;
          uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
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
          lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x78);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          lVar12 = *plVar4;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar9) {
                lVar9 = lVar12 + (long)*piVar15 * 0x10 + 0x138;
                goto LAB_0329f4f4;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          lVar9 = FUN_01ecb238(plVar4,lVar9,0);
LAB_0329f4f4:
          *(undefined8 **)(unaff_x29 + -0x20) = puVar16;
          lVar9 = *(long *)(lVar9 + 8);
          (**(code **)(lVar9 + 0x10))
                    (*(undefined8 *)(lVar9 + 8),lVar9,plVar4,unaff_x29 + -0x20,puVar16);
          lVar9 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
          puVar5 = puVar16;
          if (-1 < *(int *)(*(long *)(lVar9 + 0x20) + 0x28)) {
            puVar5 = (undefined8 *)*puVar16;
          }
          puVar10 = *(undefined8 **)(lVar9 + 0x88);
          uVar6 = *puVar10;
          *(uint *)(unaff_x29 + -0xc) = unaff_w20;
          *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
          (*(code *)puVar10[2])(uVar6);
          unaff_w20 = unaff_w20 + 1;
        } while( true );
      }
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58);
                    /* try { // try from 0329f230 to 0339f23f has its CatchHandler @ 0329f240 */
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
                    /* catch() { ... } // from try @ 0329f1b0 with catch @ 0329f240
                       catch() { ... } // from try @ 0329f230 with catch @ 0329f240 */
      }
                    /* try { // try from 0329f244 to 0339f247 has its CatchHandler @ 0329f250 */
      lVar12 = *plVar4;
                    /* try { // try from 0329f248 to 0339f253 has its CatchHandler @ 0329f0e0 */
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0329f244 with catch @ 0329f250
                        */
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar9) {
            puVar16 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0329f2e8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar16 = (undefined8 *)FUN_01ecb238(plVar4,lVar9,0);
LAB_0329f2e8:
      iVar3 = (*(code *)*puVar16)(plVar4,puVar16[1]);
      if (0 < iVar3) {
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28))();
        iVar8 = (int)unaff_x19[3] - unaff_w20;
        if (iVar8 != 0 && (int)unaff_w20 <= (int)unaff_x19[3]) {
          FUN_0358d498(unaff_x19[2],unaff_w20,unaff_x19[2],iVar3 + unaff_w20,iVar8,0);
        }
        if (unaff_x19 == plVar4) {
          FUN_0358d498(unaff_x19[2],0,unaff_x19[2],unaff_w20,unaff_w20,0);
          lVar12 = unaff_x19[2];
          iVar8 = iVar3 + unaff_w20;
          uVar1 = unaff_w20 << 1;
          iVar11 = (int)unaff_x19[3] - unaff_w20;
          lVar9 = lVar12;
        }
        else {
          lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44();
          }
          lVar12 = FUN_01f08890(lVar9,iVar3);
          lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58);
                    /* try { // try from 0329f380 to 0339f3c7 has its CatchHandler @ 0329f380
                       catch() { ... } // from try @ 0329f380 with catch @ 0329f380
                       catch() { ... } // from try @ 0329f4b4 with catch @ 0329f380
                       catch() { ... } // from try @ 0329f4e4 with catch @ 0329f380
                       catch() { ... } // from try @ 0329f558 with catch @ 0329f380 */
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          lVar13 = *plVar4;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar9) {
                puVar16 = (undefined8 *)(lVar13 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                goto LAB_0329f5b8;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar16 = (undefined8 *)FUN_01ecb238(plVar4,lVar9,5);
                    /* try { // try from 0329f3c8 to 0339f4b3 has its CatchHandler @ 0329f4b4 */
LAB_0329f5b8:
          (*(code *)*puVar16)(plVar4,lVar12,0,puVar16[1]);
          iVar8 = 0;
          lVar9 = unaff_x19[2];
          uVar1 = unaff_w20;
          iVar11 = iVar3;
        }
        FUN_0358d498(lVar12,iVar8,lVar9,uVar1,iVar11,0);
        *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + iVar3;
      }
      goto LAB_0329f620;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar7 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar7,uVar6,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7);
Meta_WitAi_Events_UnityEventListeners_TranscriptionEventListener__get_OnPartialTranscription:
  if (plVar4 != (long *)0x0) {
    lVar9 = *plVar4;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar16 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0329f604;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar16 = (undefined8 *)
              FUN_01ecb238(plVar4,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_0329f604:
    (*(code *)*puVar16)(plVar4,puVar16[1]);
  }
LAB_0329f620:
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


