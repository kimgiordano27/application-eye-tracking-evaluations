/*
FUNCTION_NAME: FUN_03543f64
ENTRY_POINT: 03543f64
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_03543f64(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  int local_24;
  
  if ((DAT_04833124 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    DAT_04833124 = 1;
  }
  FUN_035ac8e8(param_1,0);
  if (param_2 < 0) {
    local_24 = param_2;
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar3 = thunk_FUN_01f113fc(uVar3,&local_24);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__
                              );
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                              );
    FUN_034f48f0(uVar4,uVar5,uVar3,uVar6,0);
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_f32__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar3);
  }
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = param_2 + 0x1e;
    if (-1 < param_2 + -1) {
      iVar7 = param_2 + -1;
    }
    iVar7 = (iVar7 >> 5) + 1;
  }
  lVar2 = FUN_01f08890(*(undefined8 *)
                        Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,iVar7);
  plVar9 = (long *)(param_1 + 0x10);
  *plVar9 = lVar2;
  thunk_FUN_01f51358(plVar9,lVar2);
  lVar2 = *plVar9;
  *(int *)(param_1 + 0x18) = param_2;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (long)((ulong)uVar1 << 0x20)) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(uint *)(lVar2 + 0x20 + uVar8 * 4) = -(param_3 & 1);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)uVar1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


