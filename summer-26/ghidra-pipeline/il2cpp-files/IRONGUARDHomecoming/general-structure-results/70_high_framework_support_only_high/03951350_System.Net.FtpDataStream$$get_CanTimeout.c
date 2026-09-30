/*
FUNCTION_NAME: System.Net.FtpDataStream$$get_CanTimeout
ENTRY_POINT: 03951350
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 System_Net_FtpDataStream__get_CanTimeout(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long in_stack_00000018;
  
  uVar2 = (**(code **)(param_1 + 0x138))();
  *(undefined8 *)(in_stack_00000018 + 0x28) = uVar2;
  thunk_FUN_01f51358();
  plVar7 = *(long **)(in_stack_00000018 + 0x28);
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_039513d8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_039513d8:
  uVar5 = (*(code *)*puVar3)(plVar7,puVar3[1]);
  if ((uVar5 & 1) == 0) {
    FUN_0395152c();
    *(undefined8 *)(in_stack_00000018 + 0x28) = 0;
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x28),0);
    uVar2 = 0;
  }
  else {
    plVar7 = *(long **)(in_stack_00000018 + 0x28);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_03951464;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,1);
LAB_03951464:
    uVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    *(undefined8 *)(in_stack_00000018 + 0x18) = uVar2;
    thunk_FUN_01f51358();
    uVar2 = 1;
    *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
  }
  return uVar2;
}


