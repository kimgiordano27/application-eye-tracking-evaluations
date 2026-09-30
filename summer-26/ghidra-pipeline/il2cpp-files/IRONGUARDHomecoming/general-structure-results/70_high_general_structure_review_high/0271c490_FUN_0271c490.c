/*
FUNCTION_NAME: FUN_0271c490
ENTRY_POINT: 0271c490
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0271c490(long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
                    /* try { // try from 0271c4a4 to 0281c50f has its CatchHandler @ 0271c340 */
  if ((DAT_0483024e & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_0483024e = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar6,uVar4,0);
    goto LAB_0271c938;
  }
  iVar1 = thunk_FUN_01eca4a4(param_2,0);
  if (iVar1 == 1) {
    iVar1 = thunk_FUN_01eca460(param_2,0,0);
    if (iVar1 == 0) {
                    /* try { // try from 0271c510 to 0281c51f has its CatchHandler @ 0271c520 */
      if (((int)param_3 < 0) || (iVar1 = FUN_03582fa8(param_2,0), iVar1 < (int)param_3)) {
        local_68 = CONCAT44(local_68._4_4_,param_3);
        uVar4 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                  );
        uVar4 = thunk_FUN_01f113fc(uVar4,&local_68);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar6 = thunk_FUN_01f117cc();
        uVar8 = thunk_FUN_01efb3a4(
                                  Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                  );
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__
                                  );
        FUN_034f48f0(uVar6,uVar8,uVar4,uVar5,0);
        goto LAB_0271c938;
      }
                    /* catch() { ... } // from try @ 0271c48c with catch @ 0271c520
                       catch() { ... } // from try @ 0271c510 with catch @ 0271c520 */
                    /* try { // try from 0271c524 to 0281c527 has its CatchHandler @ 0271c530 */
      iVar1 = FUN_03582fa8(param_2,0);
                    /* try { // try from 0271c528 to 0281c533 has its CatchHandler @ 0271c340 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0271c524 with catch @ 0271c530
                        */
      if ((int)(iVar1 - param_3) < *(int *)(param_1 + 0x20)) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar6 = thunk_FUN_01f117cc();
        uVar4 = thunk_FUN_01efb3a4(Method_System_Decimal_ToUInt32__);
        FUN_034f6754(uVar6,uVar4,0);
        goto LAB_0271c938;
      }
      lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x158);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
      lVar9 = thunk_FUN_01f116d0(param_2,lVar9);
      if (lVar9 != 0) {
        if (0 < *(int *)(param_1 + 0x20)) {
          lVar12 = 0;
          uVar13 = 0;
          lVar14 = (ulong)param_3 << 0x20;
          do {
            lVar10 = *(long *)(param_1 + 0x10);
            if (lVar10 == 0) {
LAB_0271c768:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_0271c764;
            lVar11 = *(long *)(param_1 + 0x18);
            if (lVar11 == 0) goto LAB_0271c768;
            if (*(uint *)(lVar11 + 0x18) <= uVar13) {
LAB_0271c764:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            local_68 = 0;
            uStack_60 = 0;
            local_58 = 0;
            FUN_03017e34(&local_68,*(undefined4 *)(lVar10 + uVar13 * 4 + 0x20),
                         *(undefined8 *)(lVar11 + lVar12 + 0x20),
                         *(undefined8 *)(lVar11 + lVar12 + 0x28),
                         *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x168));
            local_70 = local_58;
            uStack_78 = uStack_60;
            local_80 = local_68;
            if ((ulong)*(uint *)(lVar9 + 0x18) <= param_3 + uVar13) goto LAB_0271c764;
            lVar10 = lVar9 + (lVar14 >> 0x20) * 0x18;
            *(undefined8 *)(lVar10 + 0x30) = local_58;
            *(undefined8 *)(lVar10 + 0x28) = uStack_60;
            *(undefined8 *)(lVar10 + 0x20) = local_68;
            thunk_FUN_01f51358(lVar10 + 0x28,0);
            uVar13 = uVar13 + 1;
            lVar12 = lVar12 + 0x10;
            lVar14 = lVar14 + 0x100000000;
          } while ((long)uVar13 < (long)*(int *)(param_1 + 0x20));
        }
        return;
      }
      plVar2 = (long *)thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                         );
      if (plVar2 != (long *)0x0) {
        if (*(int *)(param_1 + 0x20) < 1) {
          return;
        }
        lVar9 = 0;
        uVar13 = 0;
        lVar12 = (ulong)param_3 << 0x20;
        while( true ) {
          lVar14 = *(long *)(param_1 + 0x10);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar10 = *(long *)(param_1 + 0x18);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar13) break;
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          FUN_03017e34(&local_68,*(undefined4 *)(lVar14 + uVar13 * 4 + 0x20),
                       *(undefined8 *)(lVar10 + lVar9 + 0x20),*(undefined8 *)(lVar10 + lVar9 + 0x28)
                       ,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x168));
          uStack_98 = uStack_60;
          local_a0 = local_68;
          local_90 = local_58;
          lVar14 = thunk_FUN_01f113fc(*(undefined8 *)
                                       (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78),
                                      &local_a0);
          if ((lVar14 != 0) &&
             (lVar10 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)(*plVar2 + 0x40)), lVar10 == 0)) {
            uVar4 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar4,0);
          }
          if ((ulong)*(uint *)(plVar2 + 3) <= param_3 + uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar3 = (long *)((long)plVar2 + (lVar12 >> 0x1d) + 0x20);
          *plVar3 = lVar14;
          thunk_FUN_01f51358(plVar3,lVar14);
          uVar13 = uVar13 + 1;
          lVar9 = lVar9 + 0x10;
          lVar12 = lVar12 + 0x100000000;
          if ((long)*(int *)(param_1 + 0x20) <= (long)uVar13) {
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar6 = thunk_FUN_01f117cc();
      puVar7 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_17__;
    }
    else {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar6 = thunk_FUN_01f117cc();
      puVar7 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_15__;
    }
  }
  else {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    puVar7 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_14__;
  }
  uVar4 = thunk_FUN_01efb3a4(puVar7);
  uVar8 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                            );
  FUN_034efd98(uVar6,uVar4,uVar8,0);
LAB_0271c938:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_4);
}


