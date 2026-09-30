/*
FUNCTION_NAME: FUN_03ab08f8
ENTRY_POINT: 03ab08f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 228
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03ab0c18) */

void FUN_03ab08f8(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int local_44;
  
  if ((DAT_04838fe6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<BezierKnot>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04838fe6 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar7,uVar8,0);
    uVar8 = thunk_FUN_01efb3a4(StringLiteral_8825);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,uVar8);
  }
  if (param_3 < 0) {
    local_44 = param_3;
    uVar7 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar7 = thunk_FUN_01f113fc(uVar7,&local_44);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar8 = thunk_FUN_01f117cc();
    uVar9 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    uVar10 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                               );
    FUN_034f48f0(uVar8,uVar9,uVar7,uVar10,0);
    uVar7 = thunk_FUN_01efb3a4(StringLiteral_8825);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,uVar7);
  }
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
  puVar3 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar12 = *plVar4;
    lVar11 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar5 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03ab09dc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar11,0);
LAB_03ab09dc:
    uVar13 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar13 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01f116d0(plVar4,*(undefined8 *)puVar1);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar12 = *plVar4;
      lVar11 = *(long *)puVar1;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 == 0) goto LAB_03ab0af8;
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = *plVar4;
    lVar11 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar5 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_03ab0a3c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar11,1);
LAB_03ab0a3c:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (*(char *)(param_1 + 0x18) == '\0') {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      lVar11 = thunk_FUN_01f11920();
      puVar5 = (undefined8 *)(lVar11 + 8);
    }
    else {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      puVar5 = (undefined8 *)thunk_FUN_01f11920();
    }
    FUN_0358cf48(param_2,*puVar5,param_3,0);
    param_3 = param_3 + 1;
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar14 + -2) == lVar11) {
      puVar5 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03ab0b14;
    }
  }
LAB_03ab0af8:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar11,0);
LAB_03ab0b14:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


