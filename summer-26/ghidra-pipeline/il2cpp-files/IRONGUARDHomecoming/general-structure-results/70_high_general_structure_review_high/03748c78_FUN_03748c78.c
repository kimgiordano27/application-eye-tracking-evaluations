/*
FUNCTION_NAME: FUN_03748c78
ENTRY_POINT: 03748c78
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03748c78(long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int local_28;
  uint local_24;
  
  puVar4 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar5,uVar6,0);
    uVar6 = thunk_FUN_01efb3a4(
                              Field_<PrivateImplementationDetails>_345C422D2D5F586F3262F5338FD552DBB8CAA3E0785FCBF385A1CAF2208F6017
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar6);
  }
  if (-1 < (int)param_3) {
    if ((int)param_3 < *(int *)(param_2 + 0x18)) {
      if (0x3e < (int)(*(int *)(param_2 + 0x18) - param_3)) {
        FUN_03748b60();
        lVar11 = *(long *)(param_1 + 0x28);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar2 = *(uint *)(lVar11 + 0x18);
        uVar9 = 0;
        lVar10 = (ulong)param_3 << 0x20;
        while ((uVar9 < uVar2 && (param_3 + uVar9 < (ulong)*(uint *)(param_2 + 0x18)))) {
          lVar3 = uVar9 * 4;
          uVar9 = uVar9 + 1;
          lVar1 = lVar10 >> 0x1e;
          lVar10 = lVar10 + 0x100000000;
          *(undefined4 *)(param_2 + lVar1 + 0x20) = *(undefined4 *)(lVar11 + 0x20 + lVar3);
          if (uVar9 == 0x3f) {
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      local_24 = 0x3f;
      uVar5 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar5 = thunk_FUN_01f113fc(uVar5,&local_24);
      FUN_01bc50c0(param_2);
      local_28 = *(int *)(param_2 + 0x18) - param_3;
      uVar6 = thunk_FUN_01efb3a4(puVar4);
      uVar6 = thunk_FUN_01f113fc(uVar6,&local_28);
      uVar7 = thunk_FUN_01efb3a4(
                                Field_<PrivateImplementationDetails>_4F3A974D03B4939FC26A965844D8E5F89E151FF80F59BB8AF511CC703F5DA157
                                );
      uVar5 = FUN_0340f2f0(uVar7,uVar5,uVar6,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar8 = thunk_FUN_01f117cc();
      uVar6 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                                );
      FUN_034efd98(uVar8,uVar5,uVar6,0);
      goto LAB_03748ea0;
    }
  }
  local_24 = param_3;
  uVar5 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar5 = thunk_FUN_01f113fc(uVar5,&local_24);
  FUN_01bc50c0(param_2);
  local_28 = *(int *)(param_2 + 0x18) + -1;
  uVar6 = thunk_FUN_01efb3a4(puVar4);
  uVar6 = thunk_FUN_01f113fc(uVar6,&local_28);
  uVar7 = thunk_FUN_01efb3a4(
                            Field_<PrivateImplementationDetails>_015F56076A7116B30EF1118CDEBC1D9AC3346FB8E70E65FD15C491CDAD02CE4A
                            );
  uVar6 = FUN_03406290(uVar7,uVar6,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar8 = thunk_FUN_01f117cc();
  uVar7 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_0__);
  FUN_034f48f0(uVar8,uVar7,uVar5,uVar6,0);
LAB_03748ea0:
  uVar5 = thunk_FUN_01efb3a4(
                            Field_<PrivateImplementationDetails>_345C422D2D5F586F3262F5338FD552DBB8CAA3E0785FCBF385A1CAF2208F6017
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar8,uVar5);
}


