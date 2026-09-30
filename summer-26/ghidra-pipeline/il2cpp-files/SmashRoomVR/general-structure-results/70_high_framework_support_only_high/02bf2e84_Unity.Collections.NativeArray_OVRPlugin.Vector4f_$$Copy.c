/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 02bf2e84
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03051bf4(8);
  }
                    /* try { // try from 02bf2ea8 to 02cf2ee7 has its CatchHandler @ 02bf2ea8
                       catch() { ... } // from try @ 02bf2ea8 with catch @ 02bf2ea8
                       catch() { ... } // from try @ 02bf2efc with catch @ 02bf2ea8
                       catch() { ... } // from try @ 02bf2f38 with catch @ 02bf2ea8
                       catch() { ... } // from try @ 02bf2f78 with catch @ 02bf2ea8 */
  if ((*(byte *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  lVar3 = thunk_FUN_01afaadc();
  FUN_02bf1cb0(lVar3,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(param_1 + 0x18)) {
    uVar8 = 0;
    lVar9 = 0x20;
    do {
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB_02bf3038;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) {
LAB_02bf303c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      puVar1 = (undefined8 *)(lVar5 + lVar9);
      if (param_2 == 0) goto LAB_02bf3038;
      in_stack_00000040 = *puVar1;
      in_stack_00000048 = puVar1[1];
      in_stack_00000050 = puVar1[2];
      uVar4 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&stack0x00000040,
                         *(undefined8 *)(param_2 + 0x28));
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0x10);
        if (lVar5 == 0) goto LAB_02bf3038;
        if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_02bf303c;
        puVar1 = (undefined8 *)(lVar5 + lVar9);
        uVar6 = puVar1[2];
        uVar11 = puVar1[1];
        uVar10 = *puVar1;
        if (lVar3 == 0) {
LAB_02bf3038:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
        lVar5 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_02bf3038;
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          lVar5 = lVar5 + (long)(int)uVar2 * 0x18;
          *(undefined8 *)(lVar5 + 0x30) = uVar6;
          *(undefined8 *)(lVar5 + 0x28) = uVar11;
          *(undefined8 *)(lVar5 + 0x20) = uVar10;
          thunk_FUN_01b4f09c(lVar5 + 0x20,0);
        }
        else {
          in_stack_00000040 = uVar10;
          in_stack_00000048 = uVar11;
          in_stack_00000050 = uVar6;
          FUN_02bf25d0(lVar3,&stack0x00000040,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x18;
    } while ((long)uVar8 < (long)*(int *)(param_1 + 0x18));
  }
  return lVar3;
}


