/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopySafe
ENTRY_POINT: 0417c2ec
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe
               (long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_150 [80];
  undefined1 auStack_100 [80];
  undefined1 auStack_b0 [80];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_056138a8(8);
  }
  if ((*(byte *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_02eea768();
  }
  lVar2 = thunk_FUN_02ef1808();
  FUN_0417b00c(lVar2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(param_1 + 0x18)) {
    uVar7 = 0;
    lVar8 = 0x20;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_0417c4b4;
      if (*(uint *)(lVar4 + 0x18) <= uVar7) {
LAB_0417c4b8:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      memcpy(auStack_100,(void *)(lVar4 + lVar8),0x50);
      if (param_2 == 0) goto LAB_0417c4b4;
      pcVar9 = *(code **)(param_2 + 0x18);
      uVar5 = *(undefined8 *)(param_2 + 0x40);
      memcpy(auStack_b0,auStack_100,0x50);
      uVar3 = (*pcVar9)(uVar5,auStack_b0,*(undefined8 *)(param_2 + 0x28));
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0) goto LAB_0417c4b4;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_0417c4b8;
        memcpy(auStack_150,(void *)(lVar4 + lVar8),0x50);
        if (lVar2 == 0) {
LAB_0417c4b4:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
        memcpy(auStack_100,auStack_150,0x50);
        lVar4 = *(long *)(lVar2 + 0x10);
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_0417c4b4;
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar1 * 0x50;
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          memcpy((void *)(lVar4 + 0x20),auStack_100,0x50);
          thunk_FUN_02f411dc(lVar4 + 0x40,0);
        }
        else {
          uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
          memcpy(auStack_b0,auStack_100,0x50);
          FUN_0417b950(lVar2,auStack_b0,uVar5);
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x50;
    } while ((long)uVar7 < (long)*(int *)(param_1 + 0x18));
  }
  return lVar2;
}


