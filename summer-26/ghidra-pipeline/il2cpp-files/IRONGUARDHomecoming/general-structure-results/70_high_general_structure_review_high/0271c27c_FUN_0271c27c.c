/*
FUNCTION_NAME: FUN_0271c27c
ENTRY_POINT: 0271c27c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0271c27c(long param_1,long param_2,uint param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar3,uVar4,0);
  }
  else if (((int)param_3 < 0) || (*(int *)(param_2 + 0x18) < (int)param_3)) {
    local_6c = param_3;
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_6c);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar3 = thunk_FUN_01f117cc();
    uVar1 = thunk_FUN_01efb3a4(Method_System_Decimal_ToUInt16__);
    uVar2 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__
                              );
    FUN_034f48f0(uVar3,uVar1,uVar4,uVar2,0);
  }
  else {
    if (*(int *)(param_1 + 0x20) <= (int)(*(int *)(param_2 + 0x18) - param_3)) {
      if (0 < *(int *)(param_1 + 0x20)) {
        lVar7 = 0;
        uVar8 = 0;
        lVar9 = (ulong)param_3 << 0x20;
        do {
          lVar5 = *(long *)(param_1 + 0x10);
          if (lVar5 == 0) {
LAB_0271c3b0:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar8) {
LAB_0271c3ac:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar6 = *(long *)(param_1 + 0x18);
          if (lVar6 == 0) goto LAB_0271c3b0;
          if ((*(uint *)(lVar6 + 0x18) <= uVar8) ||
             (FUN_03017e34(&local_68,*(undefined4 *)(lVar5 + uVar8 * 4 + 0x20),
                           *(undefined8 *)(lVar6 + lVar7 + 0x20),
                           *(undefined8 *)(lVar6 + lVar7 + 0x28),
                           *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x168)),
             (ulong)*(uint *)(param_2 + 0x18) <= param_3 + uVar8)) goto LAB_0271c3ac;
          lVar5 = param_2 + (lVar9 >> 0x20) * 0x18;
          *(undefined8 *)(lVar5 + 0x30) = local_58;
          *(undefined8 *)(lVar5 + 0x28) = uStack_60;
          *(undefined8 *)(lVar5 + 0x20) = local_68;
          thunk_FUN_01f51358(lVar5 + 0x28,0);
          uVar8 = uVar8 + 1;
          lVar7 = lVar7 + 0x10;
          lVar9 = lVar9 + 0x100000000;
        } while ((long)uVar8 < (long)*(int *)(param_1 + 0x20));
      }
      return;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(Method_System_Decimal_ToUInt32__);
    FUN_034f6754(uVar3,uVar4,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,param_4);
}


