/*
FUNCTION_NAME: FUN_034d4d60
ENTRY_POINT: 034d4d60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 153
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void FUN_034d4d60(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar7;
  undefined *puVar6;
  
  if ((DAT_04832d4c & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    DAT_04832d4c = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    puVar6 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<int>__;
  }
  else {
    if (param_2 != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar2 = thunk_FUN_01f117cc();
        uVar3 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<NativeQueueBlockPoolData>__
                                  );
        puVar6 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<int>__;
      }
      else {
        if (*(int *)(param_2 + 0x10) != 0) {
          if (*(int *)(*(long *)
                        Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar1 = FUN_034d1098(param_1);
          uVar2 = FUN_034d1098(param_2);
          if (DAT_048317e1 == '\0') {
            thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
            DAT_048317e1 = '\x01';
          }
          if (lVar1 == 0) {
            uVar3 = 0;
            uVar7 = 0;
          }
          else {
            uVar3 = FUN_0340ce04(lVar1,0);
            uVar7 = *(undefined4 *)(lVar1 + 0x10);
          }
          uVar4 = FUN_034d3ca4(uVar3,uVar7);
          if ((uVar4 & 1) != 0) {
            FUN_034d4f84(lVar1,uVar2);
            return;
          }
          uVar2 = thunk_FUN_01efb3a4(
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<byte>__
                                    );
          uVar2 = FUN_033f0c40(uVar2,lVar1,0);
          thunk_FUN_01efb3a4(
                            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                            );
          uVar3 = thunk_FUN_01f117cc();
          FUN_034c7210(uVar3,uVar2,lVar1,0);
          uVar2 = thunk_FUN_01efb3a4(
                                    Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<NativeQueueData>__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar3,uVar2);
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar2 = thunk_FUN_01f117cc();
        uVar3 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<NativeQueueBlockPoolData>__
                                  );
        puVar6 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<IntPtr>__;
      }
      uVar5 = thunk_FUN_01efb3a4(puVar6);
      FUN_034efd98(uVar2,uVar3,uVar5,0);
      goto LAB_034d4f14;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    puVar6 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<IntPtr>__;
  }
  uVar3 = thunk_FUN_01efb3a4(puVar6);
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<NativeQueueBlockHeader>__
                            );
  FUN_034f7d10(uVar2,uVar3,uVar5,0);
LAB_034d4f14:
  uVar3 = thunk_FUN_01efb3a4(
                            Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<NativeQueueData>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,uVar3);
}


