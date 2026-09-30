/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$op_Implicit
ENTRY_POINT: 03c6c018
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector2f>__op_Implicit
               (long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long lStack0000000000000058;
  
  lVar3 = tpidr_el0;
  lStack0000000000000058 = *(long *)(lVar3 + 0x28);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050188b4(8);
  }
  if ((*(byte *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  lVar4 = thunk_FUN_02d9d534();
  FUN_03c6acf4(lVar4,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(param_1 + 0x18)) {
    uVar9 = 0;
    lVar10 = 0x20;
    do {
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) goto LAB_03c6c1d8;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) {
LAB_03c6c1dc:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      puVar1 = (undefined8 *)(lVar6 + lVar10);
      if (param_2 == 0) goto LAB_03c6c1d8;
      in_stack_00000040 = *puVar1;
      in_stack_00000048 = puVar1[1];
      in_stack_00000050 = puVar1[2];
      uVar5 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&stack0x00000040,
                         *(undefined8 *)(param_2 + 0x28));
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 == 0) goto LAB_03c6c1d8;
        if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_03c6c1dc;
        puVar1 = (undefined8 *)(lVar6 + lVar10);
        uVar7 = puVar1[2];
        uVar12 = puVar1[1];
        uVar11 = *puVar1;
        if (lVar4 == 0) {
LAB_03c6c1d8:
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
        lVar8 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_03c6c1d8;
        uVar2 = *(uint *)(lVar4 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar2 + 1;
          lVar8 = lVar8 + (long)(int)uVar2 * 0x18;
          *(undefined8 *)(lVar8 + 0x30) = uVar7;
          *(undefined8 *)(lVar8 + 0x28) = uVar12;
          *(undefined8 *)(lVar8 + 0x20) = uVar11;
        }
        else {
          in_stack_00000040 = uVar11;
          in_stack_00000048 = uVar12;
          in_stack_00000050 = uVar7;
          FUN_03c6b678(lVar4,&stack0x00000040,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x18;
    } while ((long)uVar9 < (long)*(int *)(param_1 + 0x18));
  }
  if (*(long *)(lVar3 + 0x28) == lStack0000000000000058) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


